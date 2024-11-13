void __fastcall UserGameEntity___ctor(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B16F49 = 1;
  }
  this->fields.mainSupportDeckId = 1;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
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
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x0
  void *MasterData_object; // x0

  if ( (byte_4B16F41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblUserMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5, v6);
    byte_4B16F41 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1C6BC(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  MasterData_object = **(void ***)(v8 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblUserMaster___)) == 0LL
    || (MasterData_object = TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, this->fields.userId, 0LL)) == 0LL )
  {
    sub_1BCAA3C(MasterData_object, method);
  }
  return *((_DWORD *)MasterData_object + 6);
}


int32_t __fastcall UserGameEntity__GetSpellImageId(int32_t genderType, int64_t equipId, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v3 = equipId;
  if ( (byte_4B16F44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, equipId, method);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16F44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v3,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v16.fields.currentCryptoKey = klass;
  *(_QWORD *)&v16.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
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
  __int64 v2; // x2
  int64_t actRecoverAt; // x19

  if ( (byte_4B16F38 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16F38 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return actRecoverAt - NetworkManager__getTime(0LL) > 0;
}


bool __fastcall UserGameEntity__IsNeedRecoverRp(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t rpRecoverAt; // x19

  if ( (byte_4B16F3D & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16F3D = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  __int64 v2; // x2
  int64_t actRecoverAt; // x19
  __int64 v5; // x8

  if ( (byte_4B16F36 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16F36 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v5 = actRecoverAt - NetworkManager__getTime(0LL);
  return v5 & ~(v5 >> 63);
}


int32_t __fastcall UserGameEntity__getActMax(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.actMax;
}


int64_t __fastcall UserGameEntity__getActNextRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t actRecoverAt; // x19
  __int64 v7; // x1
  __int64 v8; // x20
  BalanceConfig_c *v9; // x0
  int64_t UerGameActRecoverCost; // x8

  if ( (byte_4B16F37 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B16F37 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v8 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v8 < 1 )
    return 0LL;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    v9 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v8 % v9->static_fields->UerGameActRecoverCost;
  if ( UerGameActRecoverCost <= 0 )
  {
    UerGameActRecoverCost = v9->static_fields->UerGameActRecoverCost;
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      return BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost;
    }
  }
  return UerGameActRecoverCost;
}


int64_t __fastcall UserGameEntity__getActiveUserEquipId(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t result; // x0
  __int64 v9; // x1
  __int64 v10; // x8

  if ( (byte_4B16F47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16F47 = 1;
  }
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)result,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataMasterBase_object__object__long___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                      this->fields.activeDeckId,
                      (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !result )
    return result;
  v10 = *(_QWORD *)(result + 48);
  if ( !v10 )
LABEL_9:
    sub_1BCAA3C(result, v9);
  return *(_QWORD *)(v10 + 24);
}


int32_t __fastcall UserGameEntity__getBaseAct(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t actRecoverAt; // x20
  __int64 v7; // x1
  __int64 v8; // x20
  BalanceConfig_c *v9; // x0
  __int64 UerGameActRecoverCost; // x9
  __int64 actMax; // x8
  __int64 v12; // x9

  if ( (byte_4B16F35 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B16F35 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v8 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v8 < 1 )
    return this->fields.actMax;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    v9 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v9->static_fields->UerGameActRecoverCost;
  actMax = this->fields.actMax;
  v12 = (v8 + UerGameActRecoverCost - 1) / UerGameActRecoverCost;
  if ( v12 >= actMax )
    return 0;
  else
    return actMax - v12;
}


int32_t __fastcall UserGameEntity__getBaseRp(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t rpRecoverAt; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t Time; // x19
  BalanceConfig_c *v10; // x0
  __int64 v11; // x21
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t UerGameRpMax; // w19
  __int64 v14; // x8

  if ( (byte_4B16F39 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B16F39 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  if ( !byte_4B1306C )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    byte_4B1306C = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  v11 = rpRecoverAt - Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    v10 = BalanceConfig_TypeInfo;
  }
  static_fields = v10->static_fields;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( v11 >= 1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10, v7);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v14 = (v11 + static_fields->UerGameRpRecoverCost - 1) / static_fields->UerGameRpRecoverCost;
    if ( v14 >= UerGameRpMax )
      return 0;
    else
      UerGameRpMax -= v14;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BalanceConfig_c *v11; // x0
  int32_t CommandSpellMax; // w24
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t Value; // w22
  int64_t commandSpellRecoverAt; // x21
  __int64 v17; // x1
  __int64 v18; // x21
  int64_t CommandSpellRecoverCost; // x8
  __int64 v20; // x10
  int32_t v21; // w9

  if ( (byte_4B16F3F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, count, recoverTime);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_3780/*"COMMAND_SPELL_RECOVER_AT"*/, v9, v10);
    byte_4B16F3F = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, count);
    v11 = BalanceConfig_TypeInfo;
  }
  CommandSpellMax = v11->static_fields->CommandSpellMax;
  if ( ConstantMaster__IsFLAG20240804(0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3780/*"COMMAND_SPELL_RECOVER_AT"*/, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    if ( this->fields.commandSpellUseAt < NetworkManager__getNextDayTime_39271192(Value, 0LL) - 86400 )
      goto LABEL_20;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  v18 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
  if ( v18 < 1 )
  {
LABEL_20:
    CommandSpellRecoverCost = 0LL;
    *count = CommandSpellMax;
  }
  else
  {
    CommandSpellRecoverCost = BalanceConfig_TypeInfo->static_fields->CommandSpellRecoverCost;
    v20 = (v18 + CommandSpellRecoverCost - 1) / CommandSpellRecoverCost;
    if ( v20 >= CommandSpellMax )
      v21 = 0;
    else
      v21 = CommandSpellMax - v20;
    *count = v21;
    if ( v18 % CommandSpellRecoverCost > 0 )
      CommandSpellRecoverCost = v18 % CommandSpellRecoverCost;
  }
  *recoverTime = CommandSpellRecoverCost;
  return 1;
}


int32_t __fastcall UserGameEntity__getCommandSpell(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t Value; // w19
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w21
  int64_t commandSpellRecoverAt; // x20
  __int64 v15; // x20
  int32_t v16; // w0
  __int64 v17; // x8

  if ( (byte_4B16F3E & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3780/*"COMMAND_SPELL_RECOVER_AT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_9751/*"ONE_COMMAND_SPELL"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_8705/*"MAX_COMMAND_SPELL"*/, v8, v9);
    byte_4B16F3E = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8705/*"MAX_COMMAND_SPELL"*/, 0LL);
  if ( !ConstantMaster__IsFLAG20240804(0LL) )
    goto LABEL_7;
  v13 = ConstantMaster__getValue((System_String_o *)StringLiteral_3780/*"COMMAND_SPELL_RECOVER_AT"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  if ( this->fields.commandSpellUseAt >= NetworkManager__getNextDayTime_39271192(v13, 0LL) - 86400 )
  {
LABEL_7:
    commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
    v15 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
    if ( v15 >= 1 )
    {
      v16 = ConstantMaster__getValue((System_String_o *)StringLiteral_9751/*"ONE_COMMAND_SPELL"*/, 0LL);
      v17 = (v15 + v16 - 1) / v16;
      if ( v17 >= Value )
        return 0;
      else
        Value -= v17;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  BalanceConfig_c *v15; // x0
  int32_t lv; // w24
  int32_t UserLevelMax; // w25
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x26
  float v23; // s0

  if ( (byte_4B16F40 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, exp, lateExp);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserExpMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B16F40 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  lv = this->fields.lv;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, exp);
    v15 = BalanceConfig_TypeInfo;
  }
  UserLevelMax = v15->static_fields->UserLevelMax;
  if ( lv < UserLevelMax )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserExpMaster___);
    v20 = this->fields.lv;
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    if ( v20 >= 2 )
    {
      if ( !Instance )
        goto LABEL_17;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v20 - 1,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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
                                  v21,
                                  this->fields.lv,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    *exp = this->fields.exp - (_QWORD)m_CancellationTokenSource;
    if ( Instance )
    {
      *lateExp = (int64_t)Instance->fields.m_CancellationTokenSource - this->fields.exp;
      v23 = (double)*exp
          / (double)((char *)Instance->fields.m_CancellationTokenSource - (char *)m_CancellationTokenSource);
      goto LABEL_16;
    }
LABEL_17:
    sub_1BCAA3C(Instance, v19);
  }
  v23 = 1.0;
  *exp = 0LL;
  *lateExp = 0LL;
LABEL_16:
  *barExp = v23;
  return lv < UserLevelMax;
}


int32_t __fastcall UserGameEntity__getLv(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


int32_t __fastcall UserGameEntity__getRp(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t BaseRp; // w20
  BalanceConfig_c *v6; // x0

  BaseRp = UserGameEntity__getBaseRp(this, method);
  if ( !byte_4B1306C )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v3, v4);
    byte_4B1306C = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( BaseRp == v6->static_fields->UerGameRpMax )
    BaseRp += this->fields.carryOverRaidPoint;
  return BaseRp;
}


int64_t __fastcall UserGameEntity__getRpAllRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t rpRecoverAt; // x19
  __int64 v5; // x8

  if ( (byte_4B16F3B & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16F3B = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v5 = rpRecoverAt - NetworkManager__getTime(0LL);
  return v5 & ~(v5 >> 63);
}


int32_t __fastcall UserGameEntity__getRpMax(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v3; // x0

  if ( (byte_4B16F3A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B16F3A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  return v3->static_fields->UerGameRpMax;
}


int64_t __fastcall UserGameEntity__getRpNextRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t rpRecoverAt; // x19
  __int64 v7; // x1
  __int64 v8; // x20
  BalanceConfig_c *v9; // x0
  int64_t UerGameRpRecoverCost; // x8

  if ( (byte_4B16F3C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B16F3C = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v8 = rpRecoverAt - NetworkManager__getTime(0LL);
  if ( v8 < 1 )
    return 0LL;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    v9 = BalanceConfig_TypeInfo;
  }
  UerGameRpRecoverCost = v8 % v9->static_fields->UerGameRpRecoverCost;
  if ( UerGameRpRecoverCost <= 0 )
  {
    UerGameRpRecoverCost = v9->static_fields->UerGameRpRecoverCost;
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      return BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost;
    }
  }
  return UerGameRpRecoverCost;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGameEntity__getTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4B16F45 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, *(_QWORD *)&flagId, method);
    byte_4B16F45 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, *(_QWORD *)&flagId);
  return TutorialFlag__Get_38402232(this, flagId, 0LL);
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
  __int64 v2; // x2
  BalanceConfig_c *v3; // x0

  if ( (byte_4B16F48 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B16F48 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  return v3->static_fields->CommandCodeFrameMax;
}


int32_t __fastcall UserGameEntity__get_SpellImageId(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x1
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  int32_t genderType; // w19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int64_t v19; // x1
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B16F42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16F42 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___),
        Instance = (DataManager_o *)UserGameEntity__getActiveUserEquipId(this, v13),
        !MasterData_object) )
  {
    sub_1BCAA3C(Instance, v11);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             (int64_t)Instance,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    genderType = this->fields.genderType;
    klass = Entity[2].klass;
    monitor = Entity[2].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    *(_QWORD *)&v22.fields.currentCryptoKey = klass;
    *(_QWORD *)&v22.fields.fakeValue = monitor;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
    LODWORD(Entity) = UserGameEntity__GetSpellImageId(genderType, v19, v20);
  }
  return (int)Entity;
}


int32_t __fastcall UserGameEntity__get_SpellImageIdBattle(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v19; // x1
  Il2CppObject *Entity; // x19
  __int64 v21; // x8
  __int64 methodPtr_low; // x11
  __int64 v23; // x20
  int32_t result; // w0
  __int64 v25; // x8
  int32_t v26; // w21
  void *monitor; // x19
  Il2CppClass *klass; // x22
  int32_t v29; // w0
  const MethodInfo *v30; // x2
  int32_t v31; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B16F43 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B16F43 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  Instance = UserGameEntity__getActiveUserEquipId(this, v19);
  if ( !MasterData_object )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  v21 = *(_QWORD *)(Instance + 32);
  if ( v21
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) >= (unsigned int)methodPtr_low) )
  {
    if ( *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
      v23 = *(_QWORD *)(Instance + 32);
    else
      v23 = 0LL;
    if ( !Entity )
      return 0;
  }
  else
  {
    v23 = 0LL;
    if ( !Entity )
      return 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
    return 0;
  if ( !v23 )
    goto LABEL_26;
  v25 = *(_QWORD *)(v23 + 64);
  if ( !v25 )
    goto LABEL_26;
  v26 = *(_DWORD *)(v25 + 400);
  klass = Entity[2].klass;
  monitor = Entity[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v32.fields.currentCryptoKey = klass;
  *(_QWORD *)&v32.fields.fakeValue = monitor;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
  Instance = UserGameEntity__GetSpellImageId(v26, v29, v30);
  if ( !*(_QWORD *)(v23 + 64) )
LABEL_26:
    sub_1BCAA3C(Instance, v17);
  v31 = Instance;
  result = BattleData__GetOverwriteCommandSpellIcon(*(BattleData_o **)(v23 + 64), 0LL);
  if ( !result )
    return v31;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameEntity__setTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4B16F46 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, *(_QWORD *)&flagId, method);
    byte_4B16F46 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, *(_QWORD *)&flagId);
  TutorialFlag__Set_38435580(this, flagId, 0LL);
}