void UserGameEntity___ctor(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43E8B & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_long___ctor__);
    byte_4C43E8B = 1;
  }
  this->fields.mainSupportDeckId = 1;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339EC04 *)Method_DataEntityBase_long___ctor__);
}


bool UserGameEntity__CheckHasQp(UserGameEntity_o *this, int32_t needQp, const MethodInfo *method)
{
  return this->fields.qp < needQp;
}


int64_t UserGameEntity__CreatePrimaryKey(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


int32_t UserGameEntity__GetFriendPoint(UserGameEntity_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  void *MasterData_object; // x0

  if ( (byte_4C43E82 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C43E82 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8776C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v2);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TblUserMaster___)) == 0
    || (MasterData_object = TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, this->fields.userId, 0)) == 0 )
  {
    sub_1C372B4(MasterData_object);
  }
  return *((_DWORD *)MasterData_object + 6);
}


int32_t UserGameEntity__GetSpellImageId(int32_t genderType, int64_t equipId, const MethodInfo *method)
{
  int32_t v3; // w20
  Il2CppObject *Instance; // x0
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v3 = equipId;
  if ( (byte_4C43E85 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C37058(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43E85 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v3,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0 )
  {
    sub_1C372B4(Instance);
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
  *(_QWORD *)&v9.fields.currentCryptoKey = klass;
  *(_QWORD *)&v9.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v9, 0);
}


bool UserGameEntity__HasFlag(UserGameEntity_o *this, int32_t userStatusFlagMask, const MethodInfo *method)
{
  return (this->fields.flag & userStatusFlagMask) != 0;
}


bool UserGameEntity__IsAccountDelete(UserGameEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0xC00000) != 0;
}


bool UserGameEntity__IsMale(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.genderType == 1;
}


bool UserGameEntity__IsNeedRecoverAct(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t actRecoverAt; // x19

  if ( (byte_4C43E79 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E79 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return actRecoverAt - NetworkManager__getTime(0) > 0;
}


bool UserGameEntity__IsNeedRecoverRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x19

  if ( (byte_4C43E7E & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E7E = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return rpRecoverAt - NetworkManager__getTime(0) > 0;
}


int32_t UserGameEntity__getAct(UserGameEntity_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = UserGameEntity__getBaseAct(this, method);
  if ( result == this->fields.actMax )
    result += this->fields.carryOverActPoint;
  return result;
}


int64_t UserGameEntity__getActAllRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t actRecoverAt; // x19
  __int64 v4; // x8

  if ( (byte_4C43E77 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E77 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = actRecoverAt - NetworkManager__getTime(0);
  return v4 & ~(v4 >> 63);
}


int32_t UserGameEntity__getActMax(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.actMax;
}


int64_t UserGameEntity__getActNextRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t actRecoverAt; // x19
  __int64 v4; // x20
  BalanceConfig_c *v5; // x0
  int64_t UerGameActRecoverCost; // x8

  if ( (byte_4C43E78 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E78 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = actRecoverAt - NetworkManager__getTime(0);
  if ( v4 < 1 )
    return 0;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v4 % v5->static_fields->UerGameActRecoverCost;
  if ( UerGameActRecoverCost <= 0 )
  {
    UerGameActRecoverCost = v5->static_fields->UerGameActRecoverCost;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      return BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost;
    }
  }
  return UerGameActRecoverCost;
}


int64_t UserGameEntity__getActiveUserEquipId(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v4; // x8

  if ( (byte_4C43E88 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C37058(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43E88 = 1;
  }
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)result,
                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataMasterBase_object__object__long___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                      this->fields.activeDeckId,
                      (const MethodInfo_33A35FC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !result )
    return result;
  v4 = *(_QWORD *)(result + 48);
  if ( !v4 )
LABEL_9:
    sub_1C372B4(result);
  return *(_QWORD *)(v4 + 24);
}


int32_t UserGameEntity__getBaseAct(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t actRecoverAt; // x20
  __int64 v4; // x20
  BalanceConfig_c *v5; // x0
  __int64 UerGameActRecoverCost; // x9
  __int64 actMax; // x8
  __int64 v8; // x9

  if ( (byte_4C43E76 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E76 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = actRecoverAt - NetworkManager__getTime(0);
  if ( v4 < 1 )
    return this->fields.actMax;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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


int32_t UserGameEntity__getBaseRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x21
  int64_t Time; // x19
  BalanceConfig_c *v5; // x0
  __int64 v6; // x21
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t UerGameRpMax; // w19
  __int64 v9; // x8

  if ( (byte_4C43E7A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E7A = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !byte_4C3FBF5 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C3FBF5 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  v6 = rpRecoverAt - Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( v6 >= 1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v9 = (v6 + static_fields->UerGameRpRecoverCost - 1) / static_fields->UerGameRpRecoverCost;
    if ( v9 >= UerGameRpMax )
      return 0;
    else
      UerGameRpMax -= v9;
  }
  return UerGameRpMax;
}


int32_t UserGameEntity__getCarryOverAct(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( UserGameEntity__IsNeedRecoverAct(this, method) )
    return 0;
  else
    return this->fields.carryOverActPoint;
}


int32_t UserGameEntity__getCarryOverRp(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( UserGameEntity__IsNeedRecoverRp(this, method) )
    return 0;
  else
    return this->fields.carryOverRaidPoint;
}


bool UserGameEntity__getCmdSpellInfo(
        UserGameEntity_o *this,
        int32_t *count,
        int64_t *recoverTime,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  int32_t CommandSpellMax; // w24
  int32_t Value; // w22
  int64_t commandSpellRecoverAt; // x21
  __int64 v11; // x21
  int64_t CommandSpellRecoverCost; // x8
  __int64 v13; // x10
  int32_t v14; // w9

  if ( (byte_4C43E80 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_3678/*"COMMAND_SPELL_RECOVER_AT"*/);
    byte_4C43E80 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  CommandSpellMax = v7->static_fields->CommandSpellMax;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3678/*"COMMAND_SPELL_RECOVER_AT"*/, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( this->fields.commandSpellUseAt < NetworkManager__getNextDayTime_41368176(Value, 0) - 86400 )
    goto LABEL_19;
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v11 = commandSpellRecoverAt - NetworkManager__getTime(0);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( v11 < 1 )
  {
LABEL_19:
    CommandSpellRecoverCost = 0;
    *count = CommandSpellMax;
  }
  else
  {
    CommandSpellRecoverCost = BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost;
    v13 = (v11 + CommandSpellRecoverCost - 1) / CommandSpellRecoverCost;
    if ( v13 >= CommandSpellMax )
      v14 = 0;
    else
      v14 = CommandSpellMax - v13;
    *count = v14;
    if ( v11 % CommandSpellRecoverCost > 0 )
      CommandSpellRecoverCost = v11 % CommandSpellRecoverCost;
  }
  *recoverTime = CommandSpellRecoverCost;
  return 1;
}


int32_t UserGameEntity__getCommandSpell(UserGameEntity_o *this, const MethodInfo *method)
{
  int32_t Value; // w19
  int32_t v4; // w21
  int64_t commandSpellRecoverAt; // x20
  __int64 v6; // x20
  int32_t v7; // w0
  __int64 v8; // x8

  if ( (byte_4C43E7F & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_3678/*"COMMAND_SPELL_RECOVER_AT"*/);
    sub_1C37058(&StringLiteral_9626/*"ONE_COMMAND_SPELL"*/);
    sub_1C37058(&StringLiteral_8608/*"MAX_COMMAND_SPELL"*/);
    byte_4C43E7F = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8608/*"MAX_COMMAND_SPELL"*/, 0);
  v4 = ConstantMaster__getValue((System_String_o *)StringLiteral_3678/*"COMMAND_SPELL_RECOVER_AT"*/, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( this->fields.commandSpellUseAt >= NetworkManager__getNextDayTime_41368176(v4, 0) - 86400 )
  {
    commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = commandSpellRecoverAt - NetworkManager__getTime(0);
    if ( v6 >= 1 )
    {
      v7 = ConstantMaster__getValue((System_String_o *)StringLiteral_9626/*"ONE_COMMAND_SPELL"*/, 0);
      v8 = (v6 + v7 - 1) / v7;
      if ( v8 >= Value )
        return 0;
      else
        Value -= v8;
    }
  }
  return Value;
}


bool UserGameEntity__getExpInfo(
        UserGameEntity_o *this,
        int64_t *exp,
        int64_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x24
  int32_t LevelMax; // w0
  int32_t lv; // w25
  int32_t v14; // w23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x26
  int32_t v16; // w1
  float v17; // s0

  if ( (byte_4C43E81 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C37058(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43E81 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !Instance )
    goto LABEL_14;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  LevelMax = UserExpMaster__GetLevelMax((UserExpMaster_o *)Instance, v10);
  lv = this->fields.lv;
  v14 = LevelMax;
  if ( lv < LevelMax )
  {
    if ( lv > 1 )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    v11,
                                    lv - 1,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_14;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      v16 = this->fields.lv;
    }
    else
    {
      m_CancellationTokenSource = 0;
      v16 = this->fields.lv;
    }
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  v11,
                                  v16,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    *exp = this->fields.exp - (_QWORD)m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = (int64_t)Instance->fields.m_CancellationTokenSource - this->fields.exp;
      v17 = (double)*exp
          / (double)((char *)Instance->fields.m_CancellationTokenSource - (char *)m_CancellationTokenSource);
      goto LABEL_13;
    }
LABEL_14:
    sub_1C372B4(Instance);
  }
  v17 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_13:
  *barExp = v17;
  return lv < v14;
}


int32_t UserGameEntity__getLv(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


int32_t UserGameEntity__getRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int32_t BaseRp; // w20
  BalanceConfig_c *v4; // x0

  BaseRp = UserGameEntity__getBaseRp(this, method);
  if ( !byte_4C3FBF5 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C3FBF5 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( BaseRp == v4->static_fields->UerGameRpMax )
    BaseRp += this->fields.carryOverRaidPoint;
  return BaseRp;
}


int64_t UserGameEntity__getRpAllRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x19
  __int64 v4; // x8

  if ( (byte_4C43E7C & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E7C = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = rpRecoverAt - NetworkManager__getTime(0);
  return v4 & ~(v4 >> 63);
}


int32_t UserGameEntity__getRpMax(UserGameEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0

  if ( (byte_4C43E7B & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C43E7B = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->UerGameRpMax;
}


int64_t UserGameEntity__getRpNextRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x19
  __int64 v4; // x20
  BalanceConfig_c *v5; // x0
  int64_t UerGameRpRecoverCost; // x8

  if ( (byte_4C43E7D & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E7D = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = rpRecoverAt - NetworkManager__getTime(0);
  if ( v4 < 1 )
    return 0;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  UerGameRpRecoverCost = v4 % v5->static_fields->UerGameRpRecoverCost;
  if ( UerGameRpRecoverCost <= 0 )
  {
    UerGameRpRecoverCost = v5->static_fields->UerGameRpRecoverCost;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      return BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost;
    }
  }
  return UerGameRpRecoverCost;
}


bool UserGameEntity__getTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4C43E86 & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C43E86 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40427884(this, flagId, 0);
}


int64_t UserGameEntity__getUserId(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


System_String_o *UserGameEntity__getUsername(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


int32_t UserGameEntity__get_CommandCodeKeep(UserGameEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0

  if ( (byte_4C43E89 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C43E89 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->CommandCodeFrameMax;
}


int32_t UserGameEntity__get_PayableStoneNum(UserGameEntity_o *this, const MethodInfo *method)
{
  int32_t chargeStone; // w19
  int32_t v4; // w20
  int32_t *p_chargeStone; // t2

  if ( (byte_4C43E8A & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C43E8A = 1;
  }
  p_chargeStone = &this->fields.chargeStone;
  chargeStone = this->fields.chargeStone;
  v4 = p_chargeStone[1];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_65085088(v4, chargeStone, 0);
}


int32_t UserGameEntity__get_SpellImageId(UserGameEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x1
  Il2CppObject *Entity; // x0
  int32_t genderType; // w19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int64_t v10; // x1
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4C43E83 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C37058(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43E83 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEquipMaster___),
        Instance = (DataManager_o *)UserGameEntity__getActiveUserEquipId(this, v5),
        !MasterData_object) )
  {
    sub_1C372B4(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             (int64_t)Instance,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    genderType = this->fields.genderType;
    klass = Entity[2].klass;
    monitor = Entity[2].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = klass;
    *(_QWORD *)&v13.fields.fakeValue = monitor;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v13, 0);
    LODWORD(Entity) = UserGameEntity__GetSpellImageId(genderType, v10, v11);
  }
  return (int)Entity;
}


int32_t UserGameEntity__get_SpellImageIdBattle(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x1
  Il2CppObject *Entity; // x19
  __int64 v7; // x8
  __int64 naturalAligment; // x11
  __int64 v9; // x20
  int32_t result; // w0
  __int64 v11; // x8
  int32_t v12; // w21
  void *monitor; // x19
  Il2CppClass *klass; // x22
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  int32_t v17; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C43E84 & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C37058(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43E84 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  Instance = UserGameEntity__getActiveUserEquipId(this, v5);
  if ( !MasterData_object )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  v7 = *(_QWORD *)(Instance + 32);
  if ( v7
    && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v7 + 304LL) >= (unsigned int)naturalAligment) )
  {
    if ( *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v7 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
      v9 = *(_QWORD *)(Instance + 32);
    else
      v9 = 0;
    if ( !Entity )
      return 0;
  }
  else
  {
    v9 = 0;
    if ( !Entity )
      return 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
  if ( (Instance & 1) != 0 )
    return 0;
  if ( !v9 )
    goto LABEL_26;
  v11 = *(_QWORD *)(v9 + 64);
  if ( !v11 )
    goto LABEL_26;
  v12 = *(_DWORD *)(v11 + 408);
  klass = Entity[2].klass;
  monitor = Entity[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = klass;
  *(_QWORD *)&v18.fields.fakeValue = monitor;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v18, 0);
  Instance = UserGameEntity__GetSpellImageId(v12, v15, v16);
  if ( !*(_QWORD *)(v9 + 64) )
LABEL_26:
    sub_1C372B4(Instance);
  v17 = Instance;
  result = BattleData__GetOverwriteCommandSpellIcon(*(BattleData_o **)(v9 + 64), 0);
  if ( !result )
    return v17;
  return result;
}


void UserGameEntity__setTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4C43E87 & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C43E87 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_40462912(this, flagId, 0);
}