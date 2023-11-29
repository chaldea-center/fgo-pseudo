void __fastcall UserGameEntity___ctor(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9705 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40F9705 = 1;
  }
  this->fields.mainSupportDeckId = 1;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
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
  DataManager_o *v6; // x0
  TblUserMaster_o *MasterData_WarQuestSelectionMaster; // x0
  TblUserEntity_o *UserData; // x0

  if ( (byte_40F96FD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TblUserMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v3);
    byte_40F96FD = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(v5);
  v6 = **(DataManager_o ***)(v5 + 184);
  if ( !v6
    || (MasterData_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  v6,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblUserMaster___)) == 0LL
    || (UserData = TblUserMaster__getUserData(MasterData_WarQuestSelectionMaster, this->fields.userId, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return UserData->fields.friendPoint;
}


int32_t __fastcall UserGameEntity__GetSpellImageId(int32_t genderType, int64_t equipId, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  void *klass; // x19
  struct System_Single_array *coordinate; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v3 = equipId;
  if ( (byte_40F9700 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, equipId);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F9700 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v3,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( genderType == 2 )
  {
    coordinate = *(struct System_Single_array **)&Entity->fields.assetId;
    klass = Entity[1].klass;
  }
  else
  {
    coordinate = Entity->fields.coordinate;
    klass = Entity->fields.coordinates;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = coordinate;
  *(_QWORD *)&v14.fields.fakeValue = klass;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
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

  if ( (byte_40F96F4 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F96F4 = 1;
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

  if ( (byte_40F96F9 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F96F9 = 1;
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

  if ( (byte_40F96F2 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F96F2 = 1;
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

  if ( (byte_40F96F3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40F96F3 = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t result; // x0
  __int64 v8; // x8

  if ( (byte_40F9703 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F9703 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  result = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      MasterData_WarQuestSelectionMaster,
                      this->fields.activeDeckId,
                      (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !result )
    return result;
  v8 = *(_QWORD *)(result + 48);
  if ( !v8 )
LABEL_9:
    sub_B170D4();
  return *(_QWORD *)(v8 + 24);
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

  if ( (byte_40F96F1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40F96F1 = 1;
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

  if ( (byte_40F96F5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40F96F5 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !byte_40F6041 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v5);
    byte_40F6041 = 1;
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

  if ( (byte_40F96FB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, count);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40F96FB = 1;
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

  if ( (byte_40F96FA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9718, v3);
    sub_B16FFC(&StringLiteral_8657, v4);
    byte_40F96FA = 1;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v6 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8657, 0LL);
  if ( v6 >= 1 )
  {
    v8 = ConstantMaster__getValue((System_String_o *)StringLiteral_9718, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v16; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x23
  struct System_String_o *age; // x24
  bool result; // w0
  float v20; // s0
  WarEntity_o *Entity; // x0
  WarEntity_o *v22; // x0
  struct System_String_o *v23; // x8

  if ( (byte_40F96FC & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, exp);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserExpMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F96FC = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserExpMaster___);
    v16 = this->fields.lv;
    v17 = MasterData_WarQuestSelectionMaster;
    if ( v16 >= 2 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v16 - 1,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_18;
      age = Entity->fields.age;
    }
    else
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      age = 0LL;
    }
    v22 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v17,
            this->fields.lv,
            (const MethodInfo_266F388 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    *exp = this->fields.exp - (_QWORD)age;
    if ( v22 )
    {
      *lateExp = (int64_t)v22->fields.age - this->fields.exp;
      v23 = v22->fields.age;
      result = 1;
      v20 = (double)*exp / (double)((char *)v23 - (char *)age);
      goto LABEL_17;
    }
LABEL_18:
    sub_B170D4();
  }
  result = 0;
  v20 = 1.0;
  *exp = 0LL;
  *lateExp = 0LL;
LABEL_17:
  *barExp = v20;
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
  if ( !byte_40F6041 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v3);
    byte_40F6041 = 1;
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

  if ( (byte_40F96F7 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F96F7 = 1;
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

  if ( (byte_40F96F6 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40F96F6 = 1;
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

  if ( (byte_40F96F8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40F96F8 = 1;
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
  if ( (byte_40F9701 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, *(_QWORD *)&flagId);
    byte_40F9701 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023552(this, flagId, 0LL);
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

  if ( (byte_40F9704 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40F9704 = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  int64_t ActiveUserEquipId; // x0
  UserServantEntity_o *Entity; // x0
  int32_t genderType; // w19
  __int64 v12; // x20
  int64_t fakeValue; // x21
  int64_t v14; // x1
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_40F96FE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F96FE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___),
        ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(this, v8),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             ActiveUserEquipId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    genderType = this->fields.genderType;
    fakeValue = Entity->fields.id.fields.fakeValue;
    v12 = *(_QWORD *)&Entity->fields.id.fields.inited;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = fakeValue;
    *(_QWORD *)&v17.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v11; // x1
  int64_t ActiveUserEquipId; // x0
  UserServantEntity_o *Entity; // x19
  WebViewManager_o *v14; // x0
  struct UIPanel_o *basePanel; // x8
  __int64 v16; // x11
  struct UIPanel_o *v17; // x20
  int32_t result; // w0
  __int64 v19; // x8
  int32_t v20; // w21
  __int64 v21; // x19
  int64_t fakeValue; // x22
  int32_t v23; // w0
  const MethodInfo *v24; // x2
  int32_t SpellImageId; // w0
  int32_t v26; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40F96FF & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F96FF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(this, v11);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             ActiveUserEquipId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v14 )
    goto LABEL_28;
  basePanel = v14->fields.basePanel;
  if ( basePanel
    && (v16 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
  {
    if ( (BattleRootComponent_c *)basePanel->klass->_2.typeHierarchy[v16 - 1] == BattleRootComponent_TypeInfo )
      v17 = v14->fields.basePanel;
    else
      v17 = 0LL;
    if ( !Entity )
      return 0;
  }
  else
  {
    v17 = 0LL;
    if ( !Entity )
      return 0;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
    return 0;
  if ( !v17 )
    goto LABEL_28;
  v19 = *(_QWORD *)&v17->fields.updateAnchors;
  if ( !v19 )
    goto LABEL_28;
  v20 = *(_DWORD *)(v19 + 392);
  fakeValue = Entity->fields.id.fields.fakeValue;
  v21 = *(_QWORD *)&Entity->fields.id.fields.inited;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = fakeValue;
  *(_QWORD *)&v27.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
  SpellImageId = UserGameEntity__GetSpellImageId(v20, v23, v24);
  if ( !*(_QWORD *)&v17->fields.updateAnchors )
LABEL_28:
    sub_B170D4();
  v26 = SpellImageId;
  result = BattleData__GetOverwriteCommandSpellIcon(*(BattleData_o **)&v17->fields.updateAnchors, 0LL);
  if ( !result )
    return v26;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameEntity__setTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_40F9702 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, *(_QWORD *)&flagId);
    byte_40F9702 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_28024184(this, flagId, 0LL);
}