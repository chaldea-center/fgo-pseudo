void __fastcall OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A2F2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_long___ctor__);
    byte_438A2F2 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21FB798 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall OtherUserGameEntity__CreatePrimaryKey(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


void __fastcall OtherUserGameEntity__GetAppendSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
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
  BalanceConfig_c *v16; // x0
  SkillInfo_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0

  v10 = this;
  if ( (byte_438A2F1 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    this = (OtherUserGameEntity_o *)sub_B775C4(&SkillInfo___TypeInfo);
    byte_438A2F1 = 1;
  }
  v11 = 80LL;
  if ( !returnSupportServantType )
    v11 = 72LL;
  v12 = *(__int64 *)((char *)&v10->klass + v11);
  if ( !v12 )
LABEL_21:
    sub_B7769C(this, skillInfoList);
  v13 = *(unsigned int *)(v12 + 24);
  if ( (__int64)(v13 << 32) >= 1 )
  {
    v14 = 0LL;
    v15 = v12 + 32;
    do
    {
      if ( v14 >= v13 )
      {
        v24 = sub_B776C8(this);
        sub_B77668(v24, 0LL);
      }
      this = *(OtherUserGameEntity_o **)(v15 + 8 * v14);
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29381808((ServantLeaderInfo_o *)this, skillInfoList, 0, 0LL);
        return;
      }
LABEL_15:
      ++v14;
    }
    while ( (__int64)v14 < (int)v13 );
  }
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (SkillInfo_array *)sub_B775DC(
                             SkillInfo___TypeInfo,
                             (unsigned int)v16->static_fields->SvtAppendPassiveSkillListMax);
  *skillInfoList = v17;
  sub_B77560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
}


int32_t __fastcall OtherUserGameEntity__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  QuestEntity_o *Entity; // x0

  if ( (byte_438A2EA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A2EA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
  int64_t v8; // x0
  __int64 v9; // x1
  int64_t v10; // x20
  _BOOL4 v11; // w8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v13; // q0
  _BOOL4 v14; // w24
  __int64 v15; // x8
  __int128 v16; // q0
  _BOOL4 v17; // w8
  struct EquipTargetInfo_o *v18; // x8
  __int128 v19; // q0
  __int64 v20; // x8
  __int128 v21; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+80h] [xbp-50h]

  if ( (byte_438A2EB & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438A2EB = 1;
  }
  v4 = -1;
  while ( 1 )
  {
    v5 = 1;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(this, v4 + 1, 1, 0, 0, v2);
    v8 = (int64_t)OtherUserGameEntity__getServantLeaderInfo(this, v4 + 1, 1, 1, 0, v7);
    v10 = v8;
    if ( ServantLeaderInfo )
      v5 = ServantLeaderInfo->fields.userSvtId == 0;
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 40) == 0LL;
      if ( v5 )
        goto LABEL_8;
    }
    else
    {
      v11 = 1;
      if ( v5 )
      {
LABEL_8:
        if ( v11 )
          goto LABEL_15;
      }
    }
    if ( v11 || v5 )
      return 0;
    if ( !ServantLeaderInfo || !v8 )
      goto LABEL_43;
    if ( ServantLeaderInfo->fields.userSvtId != *(_QWORD *)(v8 + 40) )
      return 0;
LABEL_15:
    if ( !ServantLeaderInfo )
      break;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      break;
    v13 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v13;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL);
    v14 = v8 == 0;
    if ( v10 )
      goto LABEL_23;
LABEL_30:
    v17 = 1;
    if ( !v14 )
      goto LABEL_31;
LABEL_28:
    if ( !v17 )
      goto LABEL_31;
LABEL_40:
    if ( (unsigned int)++v4 >= 7 )
      return 1;
  }
  v14 = 1;
  if ( !v8 )
    goto LABEL_30;
LABEL_23:
  v15 = *(_QWORD *)(v10 + 144);
  if ( !v15 )
    goto LABEL_30;
  v16 = *(_OWORD *)(v15 + 40);
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v15 + 24);
  *(_OWORD *)&v27.fields.fakeValue = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v25 = v27;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v25, 0LL);
  v17 = v8 == 0;
  if ( v14 )
    goto LABEL_28;
LABEL_31:
  if ( v17 || v14 )
    return 0;
  if ( !ServantLeaderInfo )
    goto LABEL_43;
  v18 = ServantLeaderInfo->fields.equipTarget1;
  if ( !v18 )
    goto LABEL_43;
  v19 = *(_OWORD *)&v18->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v18->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v24 = v27;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v24, 0LL);
  if ( !v10 || (v20 = *(_QWORD *)(v10 + 144)) == 0 )
LABEL_43:
    sub_B7769C(v8, v9);
  v21 = *(_OWORD *)(v20 + 40);
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(v20 + 24);
  *(_OWORD *)&v23.fields.fakeValue = v21;
  if ( v8 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v23, 0LL) )
    goto LABEL_40;
  return 0;
}


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
  __int64 v12; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B776C8(this);
        sub_B77668(v12, 0LL);
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
  __int64 v12; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B776C8(this);
        sub_B77668(v12, 0LL);
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
  __int64 v12; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B776C8(this);
        sub_B77668(v12, 0LL);
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
  __int64 v13; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_20:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v13 = sub_B776C8(this);
        sub_B77668(v13, 0LL);
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
  __int64 v11; // x0

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_15:
    sub_B7769C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v11 = sub_B776C8(this);
      sub_B77668(v11, 0LL);
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
  __int64 v13; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_20:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v13 = sub_B776C8(this);
        sub_B77668(v13, 0LL);
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
  __int64 v12; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_17:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0LL;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      v12 = sub_B776C8(this);
      sub_B77668(v12, 0LL);
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
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v8 = this;
  if ( (byte_438A2EE & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438A2EE = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_23:
    sub_B7769C(this, *(_QWORD *)&classPos);
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v19 = sub_B776C8(this);
      sub_B77668(v19, 0LL);
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
  *(_QWORD *)&v20.fields.currentCryptoKey = v18;
  *(_QWORD *)&v20.fields.fakeValue = v17;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v20, 0LL);
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
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]

  v8 = this;
  if ( (byte_438A2ED & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438A2ED = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_24:
    sub_B7769C(this, *(_QWORD *)&classPos);
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0LL;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v18 = sub_B776C8(this);
      sub_B77668(v18, 0LL);
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
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)(v15 + 24);
  *(_OWORD *)&v20.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v19, 0LL);
}


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
  __int64 v12; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B776C8(this);
        sub_B77668(v12, 0LL);
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
  __int64 v10; // x0

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_15:
    sub_B7769C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v10 = sub_B776C8(this);
      sub_B77668(v10, 0LL);
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
  __int64 v12; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_19:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B776C8(this);
        sub_B77668(v12, 0LL);
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
  __int64 v11; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_18:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      v11 = sub_B776C8(this);
      sub_B77668(v11, 0LL);
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
  __int64 v10; // x0

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
        v10 = sub_B776C8(this);
        sub_B77668(v10, 0LL);
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
    sub_B7769C(this, classPos);
  }
  return 0LL;
}


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
  __int64 v9; // x0

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_14:
    sub_B7769C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v9 = sub_B776C8(this);
      sub_B77668(v9, 0LL);
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


void __fastcall OtherUserGameEntity__getSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
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
  BalanceConfig_c *v16; // x0
  SkillInfo_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0

  v10 = this;
  if ( (byte_438A2EF & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    this = (OtherUserGameEntity_o *)sub_B775C4(&SkillInfo___TypeInfo);
    byte_438A2EF = 1;
  }
  v11 = 80LL;
  if ( !returnSupportServantType )
    v11 = 72LL;
  v12 = *(__int64 *)((char *)&v10->klass + v11);
  if ( !v12 )
LABEL_23:
    sub_B7769C(this, skillInfoList);
  v13 = *(unsigned int *)(v12 + 24);
  if ( (__int64)(v13 << 32) >= 1 )
  {
    v14 = 0LL;
    v15 = v12 + 32;
    do
    {
      if ( v14 >= v13 )
      {
        v24 = sub_B776C8(this);
        sub_B77668(v24, 0LL);
      }
      this = *(OtherUserGameEntity_o **)(v15 + 8 * v14);
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
      ++v14;
    }
    while ( (__int64)v14 < (int)v13 );
  }
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (SkillInfo_array *)sub_B775DC(SkillInfo___TypeInfo, (unsigned int)v16->static_fields->SvtSkillListMax);
  *skillInfoList = v17;
  sub_B77560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
}


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
  __int64 v9; // x0

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_14:
    sub_B7769C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v9 = sub_B776C8(this);
      sub_B77668(v9, 0LL);
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
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v8 = this;
  if ( (byte_438A2EC & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438A2EC = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_23:
    sub_B7769C(this, *(_QWORD *)&classPos);
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v18 = sub_B776C8(this);
      sub_B77668(v18, 0LL);
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
  *(_QWORD *)&v19.fields.currentCryptoKey = v17;
  *(_QWORD *)&v19.fields.fakeValue = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v19, 0LL);
}


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
  __int64 v24; // x0

  v10 = this;
  if ( (byte_438A2F0 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B775C4(&TreasureDvcInfo_TypeInfo);
    byte_438A2F0 = 1;
  }
  v11 = 80LL;
  if ( !returnSupportServantType )
    v11 = 72LL;
  v12 = *(__int64 *)((char *)&v10->klass + v11);
  if ( !v12 )
LABEL_20:
    sub_B7769C(this, tdInfo);
  v13 = *(unsigned int *)(v12 + 24);
  if ( (__int64)(v13 << 32) < 1 )
  {
LABEL_17:
    v16 = (TreasureDvcInfo_o *)sub_B77694(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v16, 0LL);
    *tdInfo = v16;
    sub_B77560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    return 0;
  }
  v14 = 0LL;
  v15 = v12 + 32;
  while ( 1 )
  {
    if ( v14 >= v13 )
    {
      v24 = sub_B776C8(this);
      sub_B77668(v24, 0LL);
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


bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo_23667484(
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
  __int64 v11; // x0

  v6 = 80LL;
  if ( !returnSupportServantType )
    v6 = 72LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
LABEL_14:
    sub_B7769C(this, tdLv);
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
        v11 = sub_B776C8(this);
        sub_B77668(v11, 0LL);
      }
      this = *(OtherUserGameEntity_o **)(v7 + 8LL * (int)v9 + 32);
      if ( !this )
        goto LABEL_14;
      if ( this->fields.userLv == classPos && this->fields.friendCode )
        return ServantLeaderInfo__getTreasureDeviceInfo_29370476((ServantLeaderInfo_o *)this, tdLv, tdMaxLv, 0LL);
      if ( (int)++v9 >= v8 )
        goto LABEL_11;
    }
  }
}


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
  __int64 v11; // x0

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_18:
    sub_B7769C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      v11 = sub_B776C8(this);
      sub_B77668(v11, 0LL);
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


int64_t __fastcall OtherUserGameEntity__getUpdatedAt(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v4; // x8
  __int64 v6; // x0

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_5;
  if ( !userSvtLeaderHash->max_length )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_B7769C(this, classPos);
  return v4->fields.updatedAt;
}


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
  __int64 v10; // x0

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_14:
    sub_B7769C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v10 = sub_B776C8(this);
      sub_B77668(v10, 0LL);
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