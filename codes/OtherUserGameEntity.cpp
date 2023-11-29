void __fastcall OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F7FE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40F7FE1 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall OtherUserGameEntity__CreatePrimaryKey(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserGameEntity__GetAppendSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x8
  __int64 v13; // x11
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  __int64 v16; // x11
  BalanceConfig_c *v17; // x0
  SkillInfo_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v10 = this;
  if ( (byte_40F7FE0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    this = (OtherUserGameEntity_o *)sub_B16FFC(&SkillInfo___TypeInfo, v11);
    byte_40F7FE0 = 1;
  }
  v12 = 80LL;
  if ( !returnSupportServantType )
    v12 = 72LL;
  v13 = *(__int64 *)((char *)&v10->klass + v12);
  if ( !v13 )
LABEL_21:
    sub_B170D4();
  v14 = *(unsigned int *)(v13 + 24);
  if ( (__int64)(v14 << 32) >= 1 )
  {
    v15 = 0LL;
    v16 = v13 + 32;
    do
    {
      if ( v15 >= v14 )
      {
        sub_B17100(this, skillInfoList, *(_QWORD *)&classPos);
        sub_B170A0();
      }
      this = *(OtherUserGameEntity_o **)(v16 + 8 * v15);
      if ( supportDeckId < 1 )
      {
        if ( !this )
          goto LABEL_21;
      }
      else
      {
        if ( !this )
          goto LABEL_21;
        if ( LODWORD(this->fields.userId) != supportDeckId )
          goto LABEL_15;
      }
      if ( this->fields.userLv == classPos )
      {
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29632824((ServantLeaderInfo_o *)this, skillInfoList, 0, 0LL);
        return;
      }
LABEL_15:
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (SkillInfo_array *)sub_B17014(
                             SkillInfo___TypeInfo,
                             (unsigned int)v17->static_fields->SvtAppendPassiveSkillListMax,
                             *(_QWORD *)&classPos);
  *skillInfoList = v18;
  sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
}


int32_t __fastcall OtherUserGameEntity__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  QuestEntity_o *Entity; // x0

  if ( (byte_40F7FD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F7FD9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              questId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport(Entity, 0LL);
}


ServantLeaderInfo_array *__fastcall OtherUserGameEntity__GetServantLeaderInfoByReturnType(
        OtherUserGameEntity_o *this,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 80LL;
  if ( !returnSupportServantType )
    v3 = 72LL;
  return *(ServantLeaderInfo_array **)((char *)&this->klass + v3);
}


bool __fastcall OtherUserGameEntity__IsSameSupportDeck(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  int v4; // w22
  _BOOL4 v5; // w24
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  const MethodInfo *v7; // x5
  ServantLeaderInfo_o *v8; // x0
  ServantLeaderInfo_o *v9; // x20
  _BOOL4 v10; // w8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v12; // q0
  _BOOL4 v13; // w24
  struct EquipTargetInfo_o *v14; // x8
  __int128 v15; // q0
  _BOOL4 v16; // w8
  struct EquipTargetInfo_o *v17; // x8
  __int128 v18; // q0
  int64_t v19; // x0
  struct EquipTargetInfo_o *v20; // x8
  __int128 v21; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+80h] [xbp-50h]

  if ( (byte_40F7FDA & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40F7FDA = 1;
  }
  v4 = -1;
  while ( 1 )
  {
    v5 = 1;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(this, v4 + 1, 1, 0, 0, v2);
    v8 = OtherUserGameEntity__getServantLeaderInfo(this, v4 + 1, 1, 1, 0, v7);
    v9 = v8;
    if ( ServantLeaderInfo )
      v5 = ServantLeaderInfo->fields.userSvtId == 0;
    if ( v8 )
    {
      v10 = v8->fields.userSvtId == 0;
      if ( v5 )
        goto LABEL_8;
    }
    else
    {
      v10 = 1;
      if ( v5 )
      {
LABEL_8:
        if ( v10 )
          goto LABEL_15;
      }
    }
    if ( v10 || v5 )
      return 0;
    if ( !ServantLeaderInfo || !v8 )
      goto LABEL_43;
    if ( ServantLeaderInfo->fields.userSvtId != v8->fields.userSvtId )
      return 0;
LABEL_15:
    if ( !ServantLeaderInfo )
      break;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      break;
    v12 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL) == 0;
    if ( v9 )
      goto LABEL_23;
LABEL_30:
    v16 = 1;
    if ( !v13 )
      goto LABEL_31;
LABEL_28:
    if ( !v16 )
      goto LABEL_31;
LABEL_40:
    if ( (unsigned int)++v4 >= 7 )
      return 1;
  }
  v13 = 1;
  if ( !v8 )
    goto LABEL_30;
LABEL_23:
  v14 = v9->fields.equipTarget1;
  if ( !v14 )
    goto LABEL_30;
  v15 = *(_OWORD *)&v14->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v14->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v27;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v25, 0LL) == 0;
  if ( v13 )
    goto LABEL_28;
LABEL_31:
  if ( v16 || v13 )
    return 0;
  if ( !ServantLeaderInfo )
    goto LABEL_43;
  v17 = ServantLeaderInfo->fields.equipTarget1;
  if ( !v17 )
    goto LABEL_43;
  v18 = *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v24 = v27;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v24, 0LL);
  if ( !v9 || (v20 = v9->fields.equipTarget1) == 0LL )
LABEL_43:
    sub_B170D4();
  v21 = *(_OWORD *)&v20->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&v20->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v21;
  if ( v19 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v23, 0LL) )
    goto LABEL_40;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAdjustAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11
  __int64 v10; // x12

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( supportDeckId < 1 )
      {
        if ( !v10 )
          goto LABEL_19;
      }
      else
      {
        if ( !v10 )
          goto LABEL_19;
        if ( *(_DWORD *)(v10 + 16) != supportDeckId )
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v10 + 32) == classPos && *(_QWORD *)(v10 + 40) )
        return *(_DWORD *)(v10 + 84);
LABEL_14:
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAdjustHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11
  __int64 v10; // x12

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( supportDeckId < 1 )
      {
        if ( !v10 )
          goto LABEL_19;
      }
      else
      {
        if ( !v10 )
          goto LABEL_19;
        if ( *(_DWORD *)(v10 + 16) != supportDeckId )
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v10 + 32) == classPos && *(_QWORD *)(v10 + 40) )
        return *(_DWORD *)(v10 + 88);
LABEL_14:
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11
  __int64 v10; // x12

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( supportDeckId < 1 )
      {
        if ( !v10 )
          goto LABEL_19;
      }
      else
      {
        if ( !v10 )
          goto LABEL_19;
        if ( *(_DWORD *)(v10 + 16) != supportDeckId )
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v10 + 32) == classPos && *(_QWORD *)(v10 + 40) )
        return *(_DWORD *)(v10 + 80);
LABEL_14:
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11
  __int64 v10; // x12
  __int64 v11; // x12

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_20:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( supportDeckId < 1 )
      {
        if ( !v10 )
          goto LABEL_20;
      }
      else
      {
        if ( !v10 )
          goto LABEL_20;
        if ( *(_DWORD *)(v10 + 16) != supportDeckId )
          goto LABEL_15;
      }
      if ( *(_DWORD *)(v10 + 32) == classPos )
      {
        if ( *(_QWORD *)(v10 + 40) )
        {
          v11 = *(_QWORD *)(v10 + 144);
          if ( v11 )
            return *(_DWORD *)(v11 + 88);
        }
      }
LABEL_15:
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipExp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  unsigned int v7; // w10
  __int64 v8; // x11
  __int64 v9; // x11

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_15:
    sub_B170D4();
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    v8 = *(_QWORD *)(v5 + 8LL * (int)v7 + 32);
    if ( !v8 )
      goto LABEL_15;
    if ( *(_DWORD *)(v8 + 32) == classPos )
    {
      if ( *(_QWORD *)(v8 + 40) )
      {
        v9 = *(_QWORD *)(v8 + 144);
        if ( v9 )
          return *(_DWORD *)(v9 + 80);
      }
    }
    if ( (int)++v7 >= v6 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11
  __int64 v10; // x12
  __int64 v11; // x12

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_20:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( supportDeckId < 1 )
      {
        if ( !v10 )
          goto LABEL_20;
      }
      else
      {
        if ( !v10 )
          goto LABEL_20;
        if ( *(_DWORD *)(v10 + 16) != supportDeckId )
          goto LABEL_15;
      }
      if ( *(_DWORD *)(v10 + 32) == classPos )
      {
        if ( *(_QWORD *)(v10 + 40) )
        {
          v11 = *(_QWORD *)(v10 + 144);
          if ( v11 )
            return *(_DWORD *)(v11 + 84);
        }
      }
LABEL_15:
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *__fastcall OtherUserGameEntity__getEquipInfo(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11
  __int64 v10; // x12

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_17:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0LL;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    v10 = *(_QWORD *)(v9 + 8 * v8);
    if ( supportDeckId < 1 )
    {
      if ( !v10 )
        goto LABEL_17;
    }
    else
    {
      if ( !v10 )
        goto LABEL_17;
      if ( *(_DWORD *)(v10 + 16) != supportDeckId )
        goto LABEL_13;
    }
    if ( *(_DWORD *)(v10 + 32) == classPos )
      return *(EquipTargetInfo_o **)(v10 + 144);
LABEL_13:
    if ( (__int64)++v8 >= (int)v7 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x11
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x9
  __int64 v13; // x11
  __int64 v14; // x12
  __int64 v15; // x12
  __int64 v17; // x19
  __int64 v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v8 = this;
  if ( (byte_40F7FDD & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B16FFC(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&classPos);
    byte_40F7FDD = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_23:
    sub_B170D4();
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    v14 = *(_QWORD *)(v13 + 8 * v12);
    if ( supportDeckId < 1 )
    {
      if ( !v14 )
        goto LABEL_23;
    }
    else
    {
      if ( !v14 )
        goto LABEL_23;
      if ( *(_DWORD *)(v14 + 16) != supportDeckId )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(v14 + 32) == classPos )
    {
      v15 = *(_QWORD *)(v14 + 144);
      if ( v15 )
        break;
    }
LABEL_16:
    if ( (__int64)++v12 >= (int)v11 )
      return 0;
  }
  v18 = *(_QWORD *)(v15 + 56);
  v17 = *(_QWORD *)(v15 + 64);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v18;
  *(_QWORD *)&v19.fields.fakeValue = v17;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getEquipUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x11
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x9
  __int64 v13; // x11
  __int64 v14; // x12
  __int64 v15; // x12
  __int128 v17; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]

  v8 = this;
  if ( (byte_40F7FDC & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B16FFC(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                      *(_QWORD *)&classPos);
    byte_40F7FDC = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_24:
    sub_B170D4();
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0LL;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    v14 = *(_QWORD *)(v13 + 8 * v12);
    if ( supportDeckId < 1 )
    {
      if ( !v14 )
        goto LABEL_24;
    }
    else
    {
      if ( !v14 )
        goto LABEL_24;
      if ( *(_DWORD *)(v14 + 16) != supportDeckId )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(v14 + 32) == classPos )
    {
      v15 = *(_QWORD *)(v14 + 144);
      if ( v15 )
        break;
    }
LABEL_16:
    if ( (__int64)++v12 >= (int)v11 )
      return 0LL;
  }
  v17 = *(_OWORD *)(v15 + 40);
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(v15 + 24);
  *(_OWORD *)&v19.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v18 = v19;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11
  __int64 v10; // x12

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( supportDeckId < 1 )
      {
        if ( !v10 )
          goto LABEL_19;
      }
      else
      {
        if ( !v10 )
          goto LABEL_19;
        if ( *(_DWORD *)(v10 + 16) != supportDeckId )
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v10 + 32) == classPos && *(_QWORD *)(v10 + 40) )
        return *(_DWORD *)(v10 + 76);
LABEL_14:
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getLimitCount(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  unsigned int v7; // w10
  __int64 v8; // x11

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_15:
    sub_B170D4();
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    v8 = *(_QWORD *)(v5 + 8LL * (int)v7 + 32);
    if ( !v8 )
      goto LABEL_15;
    if ( *(_DWORD *)(v8 + 32) == classPos && *(_QWORD *)(v8 + 40) )
      return *(_DWORD *)(v8 + 64);
    if ( (int)++v7 >= v6 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getLv(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11
  __int64 v10; // x12

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( supportDeckId < 1 )
      {
        if ( !v10 )
          goto LABEL_19;
      }
      else
      {
        if ( !v10 )
          goto LABEL_19;
        if ( *(_DWORD *)(v10 + 16) != supportDeckId )
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v10 + 32) == classPos && *(_QWORD *)(v10 + 40) )
        return *(_DWORD *)(v10 + 68);
LABEL_14:
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getMaxLv(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_18:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    this = *(OtherUserGameEntity_o **)(v9 + 8 * v8);
    if ( supportDeckId < 1 )
    {
      if ( !this )
        goto LABEL_18;
    }
    else
    {
      if ( !this )
        goto LABEL_18;
      if ( LODWORD(this->fields.userId) != supportDeckId )
        goto LABEL_14;
    }
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getLevelMax((ServantLeaderInfo_o *)this, 0LL);
LABEL_14:
    if ( (__int64)++v8 >= (int)v7 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_o *__fastcall OtherUserGameEntity__getServantLeaderInfo(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        bool isExist,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  int v8; // w9
  unsigned int v9; // w10

  v6 = 80LL;
  if ( !returnSupportServantType )
    v6 = 72LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_16;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v8 )
      {
        sub_B17100(this, *(_QWORD *)&classPos, isExist);
        sub_B170A0();
      }
      this = *(OtherUserGameEntity_o **)(v7 + 8LL * (int)v9 + 32);
      if ( !this )
        break;
      if ( this->fields.userLv == classPos
        && (supportDeckId < 1 || LODWORD(this->fields.userId) == supportDeckId)
        && (isExist || this->fields.friendCode) )
      {
        return (ServantLeaderInfo_o *)this;
      }
      if ( (int)++v9 >= v8 )
        return 0LL;
    }
LABEL_16:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OtherUserGameEntity__getSkillIdList(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  unsigned int v7; // w10

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_14:
    sub_B170D4();
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    this = *(OtherUserGameEntity_o **)(v5 + 8LL * (int)v7 + 32);
    if ( !this )
      goto LABEL_14;
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getSkillIdList((ServantLeaderInfo_o *)this, 0LL);
    if ( (int)++v7 >= v6 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserGameEntity__getSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x8
  __int64 v13; // x11
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  __int64 v16; // x11
  BalanceConfig_c *v17; // x0
  SkillInfo_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v10 = this;
  if ( (byte_40F7FDE & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    this = (OtherUserGameEntity_o *)sub_B16FFC(&SkillInfo___TypeInfo, v11);
    byte_40F7FDE = 1;
  }
  v12 = 80LL;
  if ( !returnSupportServantType )
    v12 = 72LL;
  v13 = *(__int64 *)((char *)&v10->klass + v12);
  if ( !v13 )
LABEL_23:
    sub_B170D4();
  v14 = *(unsigned int *)(v13 + 24);
  if ( (__int64)(v14 << 32) >= 1 )
  {
    v15 = 0LL;
    v16 = v13 + 32;
    do
    {
      if ( v15 >= v14 )
      {
        sub_B17100(this, skillInfoList, *(_QWORD *)&classPos);
        sub_B170A0();
      }
      this = *(OtherUserGameEntity_o **)(v16 + 8 * v15);
      if ( supportDeckId < 1 )
      {
        if ( !this )
          goto LABEL_23;
      }
      else
      {
        if ( !this )
          goto LABEL_23;
        if ( LODWORD(this->fields.userId) != supportDeckId )
          goto LABEL_16;
      }
      if ( this->fields.userLv == classPos && this->fields.friendCode )
      {
        ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)this, skillInfoList, 0LL);
        return;
      }
LABEL_16:
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (SkillInfo_array *)sub_B17014(
                             SkillInfo___TypeInfo,
                             (unsigned int)v17->static_fields->SvtSkillListMax,
                             *(_QWORD *)&classPos);
  *skillInfoList = v18;
  sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OtherUserGameEntity__getSkillLevelList(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  unsigned int v7; // w10

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_14:
    sub_B170D4();
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    this = *(OtherUserGameEntity_o **)(v5 + 8LL * (int)v7 + 32);
    if ( !this )
      goto LABEL_14;
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getSkillLevelList((ServantLeaderInfo_o *)this, 0LL);
    if ( (int)++v7 >= v6 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x11
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x9
  __int64 v13; // x11
  __int64 v14; // x12
  __int64 v16; // x19
  __int64 v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v8 = this;
  if ( (byte_40F7FDB & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B16FFC(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&classPos);
    byte_40F7FDB = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_23:
    sub_B170D4();
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    v14 = *(_QWORD *)(v13 + 8 * v12);
    if ( supportDeckId < 1 )
    {
      if ( !v14 )
        goto LABEL_23;
    }
    else
    {
      if ( !v14 )
        goto LABEL_23;
      if ( *(_DWORD *)(v14 + 16) != supportDeckId )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(v14 + 32) == classPos && *(_QWORD *)(v14 + 40) )
      break;
LABEL_16:
    if ( (__int64)++v12 >= (int)v11 )
      return 0;
  }
  v17 = *(_QWORD *)(v14 + 48);
  v16 = *(_QWORD *)(v14 + 56);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v17;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo(
        OtherUserGameEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v10; // x22
  __int64 v11; // x8
  __int64 v12; // x11
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x9
  __int64 v15; // x11
  TreasureDvcInfo_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v10 = this;
  if ( (byte_40F7FDF & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40F7FDF = 1;
  }
  v11 = 80LL;
  if ( !returnSupportServantType )
    v11 = 72LL;
  v12 = *(__int64 *)((char *)&v10->klass + v11);
  if ( !v12 )
LABEL_20:
    sub_B170D4();
  v13 = *(unsigned int *)(v12 + 24);
  if ( (__int64)(v13 << 32) < 1 )
  {
LABEL_17:
    v16 = (TreasureDvcInfo_o *)sub_B170CC(
                                 TreasureDvcInfo_TypeInfo,
                                 tdInfo,
                                 *(_QWORD *)&classPos,
                                 *(_QWORD *)&returnSupportServantType,
                                 *(_QWORD *)&supportDeckId);
    TreasureDvcInfo___ctor(v16, 0LL);
    *tdInfo = v16;
    sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    return 0;
  }
  v14 = 0LL;
  v15 = v12 + 32;
  while ( 1 )
  {
    if ( v14 >= v13 )
    {
      sub_B17100(this, tdInfo, *(_QWORD *)&classPos);
      sub_B170A0();
    }
    this = *(OtherUserGameEntity_o **)(v15 + 8 * v14);
    if ( supportDeckId < 1 )
    {
      if ( !this )
        goto LABEL_20;
    }
    else
    {
      if ( !this )
        goto LABEL_20;
      if ( LODWORD(this->fields.userId) != supportDeckId )
        goto LABEL_16;
    }
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)this, tdInfo, 0LL);
LABEL_16:
    if ( (__int64)++v14 >= (int)v13 )
      goto LABEL_17;
  }
}


bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo_21271192(
        OtherUserGameEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  int v8; // w9
  unsigned int v9; // w10

  v6 = 80LL;
  if ( !returnSupportServantType )
    v6 = 72LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
LABEL_14:
    sub_B170D4();
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 < 1 )
  {
LABEL_11:
    *tdLv = 0;
    *tdMaxLv = 0;
    return 0;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v8 )
      {
        sub_B17100(this, tdLv, tdMaxLv);
        sub_B170A0();
      }
      this = *(OtherUserGameEntity_o **)(v7 + 8LL * (int)v9 + 32);
      if ( !this )
        goto LABEL_14;
      if ( this->fields.userLv == classPos && this->fields.friendCode )
        return ServantLeaderInfo__getTreasureDeviceInfo_29621492((ServantLeaderInfo_o *)this, tdLv, tdMaxLv, 0LL);
      if ( (int)++v9 >= v8 )
        goto LABEL_11;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getTreasureDeviceLevelIcon(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x11
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x11

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_18:
    sub_B170D4();
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    this = *(OtherUserGameEntity_o **)(v9 + 8 * v8);
    if ( supportDeckId < 1 )
    {
      if ( !this )
        goto LABEL_18;
    }
    else
    {
      if ( !this )
        goto LABEL_18;
      if ( LODWORD(this->fields.userId) != supportDeckId )
        goto LABEL_14;
    }
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getTreasureDeviceLevelIcon((ServantLeaderInfo_o *)this, 0LL);
LABEL_14:
    if ( (__int64)++v8 >= (int)v7 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getUpdatedAt(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v4; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_5;
  if ( !userSvtLeaderHash->max_length )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_B170D4();
  return v4->fields.updatedAt;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  unsigned int v7; // w10
  __int64 v8; // x11

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_14:
    sub_B170D4();
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      sub_B17100(this, *(_QWORD *)&classPos, *(_QWORD *)&returnSupportServantType);
      sub_B170A0();
    }
    v8 = *(_QWORD *)(v5 + 8LL * (int)v7 + 32);
    if ( !v8 )
      goto LABEL_14;
    if ( *(_DWORD *)(v8 + 32) == classPos )
      return *(_QWORD *)(v8 + 40);
    if ( (int)++v7 >= v6 )
      return 0LL;
  }
}