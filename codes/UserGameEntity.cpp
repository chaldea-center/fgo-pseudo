void __fastcall UserGameEntity___ctor(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2EC64 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_long___ctor__, method);
    byte_4A2EC64 = 1;
  }
  this->fields.mainSupportDeckId = 1;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30FF5C8 *)Method_DataEntityBase_long___ctor__);
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
  __int64 v4; // x0
  __int64 v5; // x0
  void *MasterData_object; // x0

  if ( (byte_4A2EC5C & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_TblUserMaster___, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v3);
    byte_4A2EC5C = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BC809C(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BC809C(v5);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_TblUserMaster___)) == 0LL
    || (MasterData_object = TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, this->fields.userId, 0LL)) == 0LL )
  {
    sub_1B7641C(MasterData_object, method);
  }
  return *((_DWORD *)MasterData_object + 6);
}


int32_t __fastcall UserGameEntity__GetSpellImageId(int32_t genderType, int64_t equipId, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v3 = equipId;
  if ( (byte_4A2EC5F & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EquipMaster___, equipId);
    sub_1B761C0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v5);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A2EC5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v3,
                     (const MethodInfo_30FF780 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B7641C(Instance, v9);
  }
  if ( genderType == 2 )
  {
    klass = Instance[8].klass;
    monitor = Instance[8].monitor;
  }
  else
  {
    klass = Instance[7].klass;
    monitor = Instance[7].monitor;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = klass;
  *(_QWORD *)&v13.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v13, 0LL);
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

  if ( (byte_4A2EC53 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    byte_4A2EC53 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return actRecoverAt - NetworkManager__getTime(0LL) > 0;
}


bool __fastcall UserGameEntity__IsNeedRecoverRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x19

  if ( (byte_4A2EC58 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    byte_4A2EC58 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  __int64 v4; // x8

  if ( (byte_4A2EC51 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    byte_4A2EC51 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = actRecoverAt - NetworkManager__getTime(0LL);
  return v4 & ~(v4 >> 63);
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

  if ( (byte_4A2EC52 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    sub_1B761C0(&NetworkManager_TypeInfo, v3);
    byte_4A2EC52 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v5 < 1 )
    return 0LL;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v5 % v6->static_fields->UerGameActRecoverCost;
  if ( UerGameActRecoverCost <= 0 )
  {
    UerGameActRecoverCost = v6->static_fields->UerGameActRecoverCost;
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      return BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost;
    }
  }
  return UerGameActRecoverCost;
}


int64_t __fastcall UserGameEntity__getActiveUserEquipId(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t result; // x0
  __int64 v6; // x1
  __int64 v7; // x8

  if ( (byte_4A2EC62 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserDeckMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A2EC62 = 1;
  }
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)result,
                      (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataMasterBase_object__object__long___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                      this->fields.activeDeckId,
                      (const MethodInfo_30FF92C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !result )
    return result;
  v7 = *(_QWORD *)(result + 48);
  if ( !v7 )
LABEL_9:
    sub_1B7641C(result, v6);
  return *(_QWORD *)(v7 + 24);
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

  if ( (byte_4A2EC50 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    sub_1B761C0(&NetworkManager_TypeInfo, v3);
    byte_4A2EC50 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v5 < 1 )
    return this->fields.actMax;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  int64_t rpRecoverAt; // x21
  __int64 v5; // x1
  int64_t Time; // x19
  BalanceConfig_c *v7; // x0
  __int64 v8; // x21
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t UerGameRpMax; // w19
  __int64 v11; // x8

  if ( (byte_4A2EC54 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    sub_1B761C0(&NetworkManager_TypeInfo, v3);
    byte_4A2EC54 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !byte_4A2AEC6 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, v5);
    byte_4A2AEC6 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  v8 = rpRecoverAt - Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( v8 >= 1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v11 = (v8 + static_fields->UerGameRpRecoverCost - 1) / static_fields->UerGameRpRecoverCost;
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
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  int32_t CommandSpellMax; // w24
  int32_t Value; // w22
  int64_t commandSpellRecoverAt; // x21
  __int64 v13; // x21
  int64_t CommandSpellRecoverCost; // x8
  __int64 v15; // x10
  int32_t v16; // w9

  if ( (byte_4A2EC5A & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, count);
    sub_1B761C0(&NetworkManager_TypeInfo, v7);
    sub_1B761C0(&StringLiteral_3748/*"COMMAND_SPELL_RECOVER_AT"*/, v8);
    byte_4A2EC5A = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  CommandSpellMax = v9->static_fields->CommandSpellMax;
  if ( ConstantMaster__IsFLAG20240804(0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3748/*"COMMAND_SPELL_RECOVER_AT"*/, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( this->fields.commandSpellUseAt < NetworkManager__getNextDayTime_38297816(Value, 0LL) - 86400 )
      goto LABEL_20;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v13 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( v13 < 1 )
  {
LABEL_20:
    CommandSpellRecoverCost = 0LL;
    *count = CommandSpellMax;
  }
  else
  {
    CommandSpellRecoverCost = BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost;
    v15 = (v13 + CommandSpellRecoverCost - 1) / CommandSpellRecoverCost;
    if ( v15 >= CommandSpellMax )
      v16 = 0;
    else
      v16 = CommandSpellMax - v15;
    *count = v16;
    if ( v13 % CommandSpellRecoverCost > 0 )
      CommandSpellRecoverCost = v13 % CommandSpellRecoverCost;
  }
  *recoverTime = CommandSpellRecoverCost;
  return 1;
}


int32_t __fastcall UserGameEntity__getCommandSpell(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t Value; // w19
  int32_t v7; // w21
  int64_t commandSpellRecoverAt; // x20
  __int64 v9; // x20
  int32_t v10; // w0
  __int64 v11; // x8

  if ( (byte_4A2EC59 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_3748/*"COMMAND_SPELL_RECOVER_AT"*/, v3);
    sub_1B761C0(&StringLiteral_9617/*"ONE_COMMAND_SPELL"*/, v4);
    sub_1B761C0(&StringLiteral_8578/*"MAX_COMMAND_SPELL"*/, v5);
    byte_4A2EC59 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8578/*"MAX_COMMAND_SPELL"*/, 0LL);
  if ( !ConstantMaster__IsFLAG20240804(0LL) )
    goto LABEL_7;
  v7 = ConstantMaster__getValue((System_String_o *)StringLiteral_3748/*"COMMAND_SPELL_RECOVER_AT"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( this->fields.commandSpellUseAt >= NetworkManager__getNextDayTime_38297816(v7, 0LL) - 86400 )
  {
LABEL_7:
    commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
    if ( v9 >= 1 )
    {
      v10 = ConstantMaster__getValue((System_String_o *)StringLiteral_9617/*"ONE_COMMAND_SPELL"*/, 0LL);
      v11 = (v9 + v10 - 1) / v10;
      if ( v11 >= Value )
        return 0;
      else
        Value -= v11;
    }
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
  BalanceConfig_c *v12; // x0
  int32_t lv; // w24
  int32_t UserLevelMax; // w25
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x26
  float v20; // s0

  if ( (byte_4A2EC5B & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, exp);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserExpMaster___, v9);
    sub_1B761C0(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A2EC5B = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  lv = this->fields.lv;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  UserLevelMax = v12->static_fields->UserLevelMax;
  if ( lv < UserLevelMax )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserExpMaster___);
    v17 = this->fields.lv;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    if ( v17 >= 2 )
    {
      if ( !Instance )
        goto LABEL_17;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v17 - 1,
                                    (const MethodInfo_30FF780 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_17;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    }
    else
    {
      if ( !Instance )
        goto LABEL_17;
      m_CancellationTokenSource = 0LL;
    }
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  v18,
                                  this->fields.lv,
                                  (const MethodInfo_30FF780 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    *exp = this->fields.exp - (_QWORD)m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = (int64_t)Instance->fields.m_CancellationTokenSource - this->fields.exp;
      v20 = (double)*exp
          / (double)((char *)Instance->fields.m_CancellationTokenSource - (char *)m_CancellationTokenSource);
      goto LABEL_16;
    }
LABEL_17:
    sub_1B7641C(Instance, v16);
  }
  v20 = 1.0;
  *exp = 0LL;
  *lateExp = 0LL;
LABEL_16:
  *barExp = v20;
  return lv < UserLevelMax;
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
  if ( !byte_4A2AEC6 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, v3);
    byte_4A2AEC6 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  __int64 v4; // x8

  if ( (byte_4A2EC56 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    byte_4A2EC56 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = rpRecoverAt - NetworkManager__getTime(0LL);
  return v4 & ~(v4 >> 63);
}


int32_t __fastcall UserGameEntity__getRpMax(UserGameEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0

  if ( (byte_4A2EC55 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    byte_4A2EC55 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A2EC57 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    sub_1B761C0(&NetworkManager_TypeInfo, v3);
    byte_4A2EC57 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5 = rpRecoverAt - NetworkManager__getTime(0LL);
  if ( v5 < 1 )
    return 0LL;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UerGameRpRecoverCost = v5 % v6->static_fields->UerGameRpRecoverCost;
  if ( UerGameRpRecoverCost <= 0 )
  {
    UerGameRpRecoverCost = v6->static_fields->UerGameRpRecoverCost;
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      return BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost;
    }
  }
  return UerGameRpRecoverCost;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGameEntity__getTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4A2EC60 & 1) == 0 )
  {
    sub_1B761C0(&TutorialFlag_TypeInfo, *(_QWORD *)&flagId);
    byte_4A2EC60 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37510268(this, flagId, 0LL);
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

  if ( (byte_4A2EC63 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    byte_4A2EC63 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v9; // x1
  Il2CppObject *Entity; // x0
  int32_t genderType; // w19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int64_t v14; // x1
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A2EC5D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A2EC5D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserEquipMaster___),
        Instance = (DataManager_o *)UserGameEntity__getActiveUserEquipId(this, v9),
        !MasterData_object) )
  {
    sub_1B7641C(Instance, v7);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             (int64_t)Instance,
             (const MethodInfo_30FF92C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    genderType = this->fields.genderType;
    klass = Entity[2].klass;
    monitor = Entity[2].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = klass;
    *(_QWORD *)&v17.fields.fakeValue = monitor;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v17, 0LL);
    LODWORD(Entity) = UserGameEntity__GetSpellImageId(genderType, v14, v15);
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v12; // x1
  Il2CppObject *Entity; // x19
  __int64 v14; // x8
  __int64 methodPtr_low; // x11
  __int64 v16; // x20
  int32_t result; // w0
  __int64 v18; // x8
  int32_t v19; // w21
  void *monitor; // x19
  Il2CppClass *klass; // x22
  int32_t v22; // w0
  const MethodInfo *v23; // x2
  int32_t v24; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A2EC5E & 1) == 0 )
  {
    sub_1B761C0(&BattleRootComponent_TypeInfo, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserEquipMaster___, v3);
    sub_1B761C0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v4);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A2EC5E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  Instance = UserGameEntity__getActiveUserEquipId(this, v12);
  if ( !MasterData_object )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_30FF92C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  v14 = *(_QWORD *)(Instance + 32);
  if ( v14
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) >= (unsigned int)methodPtr_low) )
  {
    if ( *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
      v16 = *(_QWORD *)(Instance + 32);
    else
      v16 = 0LL;
    if ( !Entity )
      return 0;
  }
  else
  {
    v16 = 0LL;
    if ( !Entity )
      return 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
    return 0;
  if ( !v16 )
    goto LABEL_26;
  v18 = *(_QWORD *)(v16 + 64);
  if ( !v18 )
    goto LABEL_26;
  v19 = *(_DWORD *)(v18 + 400);
  klass = Entity[2].klass;
  monitor = Entity[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = klass;
  *(_QWORD *)&v25.fields.fakeValue = monitor;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v25, 0LL);
  Instance = UserGameEntity__GetSpellImageId(v19, v22, v23);
  if ( !*(_QWORD *)(v16 + 64) )
LABEL_26:
    sub_1B7641C(Instance, v10);
  v24 = Instance;
  result = BattleData__GetOverwriteCommandSpellIcon(*(BattleData_o **)(v16 + 64), 0LL);
  if ( !result )
    return v24;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameEntity__setTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4A2EC61 & 1) == 0 )
  {
    sub_1B761C0(&TutorialFlag_TypeInfo, *(_QWORD *)&flagId);
    byte_4A2EC61 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_37541948(this, flagId, 0LL);
}