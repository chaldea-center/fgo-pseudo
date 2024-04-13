void __fastcall OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E634D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42E634D = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x8
  __int64 v15; // x11
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x9
  __int64 v18; // x11
  BalanceConfig_c *v19; // x0
  __int64 v20; // x0

  v10 = this;
  if ( (byte_42E634C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, classPos, *(_QWORD *)&returnSupportServantType);
    this = (OtherUserGameEntity_o *)sub_B5D5C4(&SkillInfo___TypeInfo, v11, v12, v13);
    byte_42E634C = 1;
  }
  v14 = 80LL;
  if ( !returnSupportServantType )
    v14 = 72LL;
  v15 = *(__int64 *)((char *)&v10->klass + v14);
  if ( !v15 )
LABEL_21:
    sub_B5D69C(this, skillInfoList);
  v16 = *(unsigned int *)(v15 + 24);
  if ( (__int64)(v16 << 32) >= 1 )
  {
    v17 = 0LL;
    v18 = v15 + 32;
    do
    {
      if ( v17 >= v16 )
      {
        v20 = sub_B5D6C8(this);
        sub_B5D668(v20, 0LL);
      }
      this = *(OtherUserGameEntity_o **)(v18 + 8 * v17);
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_29371140((ServantLeaderInfo_o *)this, skillInfoList, 0, 0LL);
        return;
      }
LABEL_15:
      ++v17;
    }
    while ( (__int64)v17 < (int)v16 );
  }
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  *skillInfoList = (SkillInfo_array *)sub_B5D5DC(
                                        SkillInfo___TypeInfo,
                                        (unsigned int)v19->static_fields->SvtAppendPassiveSkillListMax);
  sub_B5D560(skillInfoList);
}


int32_t __fastcall OtherUserGameEntity__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  QuestEntity_o *Entity; // x0

  if ( (byte_42E6345 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6345 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  int v6; // w22
  _BOOL4 v7; // w24
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  const MethodInfo *v9; // x5
  int64_t v10; // x0
  __int64 v11; // x1
  int64_t v12; // x20
  _BOOL4 v13; // w8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v15; // q0
  _BOOL4 v16; // w24
  __int64 v17; // x8
  __int128 v18; // q0
  _BOOL4 v19; // w8
  struct EquipTargetInfo_o *v20; // x8
  __int128 v21; // q0
  __int64 v22; // x8
  __int128 v23; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+80h] [xbp-50h]

  if ( (byte_42E6346 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6346 = 1;
  }
  v6 = -1;
  while ( 1 )
  {
    v7 = 1;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(this, v6 + 1, 1, 0, 0, v4);
    v10 = (int64_t)OtherUserGameEntity__getServantLeaderInfo(this, v6 + 1, 1, 1, 0, v9);
    v12 = v10;
    if ( ServantLeaderInfo )
      v7 = ServantLeaderInfo->fields.userSvtId == 0;
    if ( v10 )
    {
      v13 = *(_QWORD *)(v10 + 40) == 0LL;
      if ( v7 )
        goto LABEL_8;
    }
    else
    {
      v13 = 1;
      if ( v7 )
      {
LABEL_8:
        if ( v13 )
          goto LABEL_15;
      }
    }
    if ( v13 || v7 )
      return 0;
    if ( !ServantLeaderInfo || !v10 )
      goto LABEL_43;
    if ( ServantLeaderInfo->fields.userSvtId != *(_QWORD *)(v10 + 40) )
      return 0;
LABEL_15:
    if ( !ServantLeaderInfo )
      break;
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      break;
    v15 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v15;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v28 = v29;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v28, 0LL);
    v16 = v10 == 0;
    if ( v12 )
      goto LABEL_23;
LABEL_30:
    v19 = 1;
    if ( !v16 )
      goto LABEL_31;
LABEL_28:
    if ( !v19 )
      goto LABEL_31;
LABEL_40:
    if ( (unsigned int)++v6 >= 7 )
      return 1;
  }
  v16 = 1;
  if ( !v10 )
    goto LABEL_30;
LABEL_23:
  v17 = *(_QWORD *)(v12 + 144);
  if ( !v17 )
    goto LABEL_30;
  v18 = *(_OWORD *)(v17 + 40);
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(v17 + 24);
  *(_OWORD *)&v29.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v27 = v29;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v27, 0LL);
  v19 = v10 == 0;
  if ( v16 )
    goto LABEL_28;
LABEL_31:
  if ( v19 || v16 )
    return 0;
  if ( !ServantLeaderInfo )
    goto LABEL_43;
  v20 = ServantLeaderInfo->fields.equipTarget1;
  if ( !v20 )
    goto LABEL_43;
  v21 = *(_OWORD *)&v20->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v20->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v21;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v29;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v26, 0LL);
  if ( !v12 || (v22 = *(_QWORD *)(v12 + 144)) == 0 )
LABEL_43:
    sub_B5D69C(v10, v11);
  v23 = *(_OWORD *)(v22 + 40);
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(v22 + 24);
  *(_OWORD *)&v25.fields.fakeValue = v23;
  if ( v10 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v25, 0LL) )
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
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
    sub_B5D69C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0LL;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      v12 = sub_B5D6C8(this);
      sub_B5D668(v12, 0LL);
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
  if ( (byte_42E6349 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B5D5C4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      classPos,
                                      returnSupportServantType,
                                      *(_QWORD *)&supportDeckId);
    byte_42E6349 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_23:
    sub_B5D69C(this, *(_QWORD *)&classPos);
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL);
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
  if ( (byte_42E6348 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B5D5C4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                      classPos,
                                      returnSupportServantType,
                                      *(_QWORD *)&supportDeckId);
    byte_42E6348 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_24:
    sub_B5D69C(this, *(_QWORD *)&classPos);
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0LL;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v19, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    v9 = v6 + 32;
    do
    {
      if ( v8 >= v7 )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
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
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, classPos);
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
    sub_B5D69C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x8
  __int64 v15; // x11
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x9
  __int64 v18; // x11
  BalanceConfig_c *v19; // x0
  __int64 v20; // x0

  v10 = this;
  if ( (byte_42E634A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, classPos, *(_QWORD *)&returnSupportServantType);
    this = (OtherUserGameEntity_o *)sub_B5D5C4(&SkillInfo___TypeInfo, v11, v12, v13);
    byte_42E634A = 1;
  }
  v14 = 80LL;
  if ( !returnSupportServantType )
    v14 = 72LL;
  v15 = *(__int64 *)((char *)&v10->klass + v14);
  if ( !v15 )
LABEL_23:
    sub_B5D69C(this, skillInfoList);
  v16 = *(unsigned int *)(v15 + 24);
  if ( (__int64)(v16 << 32) >= 1 )
  {
    v17 = 0LL;
    v18 = v15 + 32;
    do
    {
      if ( v17 >= v16 )
      {
        v20 = sub_B5D6C8(this);
        sub_B5D668(v20, 0LL);
      }
      this = *(OtherUserGameEntity_o **)(v18 + 8 * v17);
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
      ++v17;
    }
    while ( (__int64)v17 < (int)v16 );
  }
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  *skillInfoList = (SkillInfo_array *)sub_B5D5DC(
                                        SkillInfo___TypeInfo,
                                        (unsigned int)v19->static_fields->SvtSkillListMax);
  sub_B5D560(skillInfoList);
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
    sub_B5D69C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
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
  if ( (byte_42E6347 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B5D5C4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      classPos,
                                      returnSupportServantType,
                                      *(_QWORD *)&supportDeckId);
    byte_42E6347 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_23:
    sub_B5D69C(this, *(_QWORD *)&classPos);
  v11 = *(unsigned int *)(v10 + 24);
  if ( (__int64)(v11 << 32) < 1 )
    return 0;
  v12 = 0LL;
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
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
  __int64 v18; // x0

  v10 = this;
  if ( (byte_42E634B & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_B5D5C4(
                                      &TreasureDvcInfo_TypeInfo,
                                      (_DWORD)tdInfo,
                                      classPos,
                                      *(_QWORD *)&returnSupportServantType);
    byte_42E634B = 1;
  }
  v11 = 80LL;
  if ( !returnSupportServantType )
    v11 = 72LL;
  v12 = *(__int64 *)((char *)&v10->klass + v11);
  if ( !v12 )
LABEL_20:
    sub_B5D69C(this, tdInfo);
  v13 = *(unsigned int *)(v12 + 24);
  if ( (__int64)(v13 << 32) < 1 )
  {
LABEL_17:
    v16 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v16, 0LL);
    *tdInfo = v16;
    sub_B5D560(tdInfo);
    return 0;
  }
  v14 = 0LL;
  v15 = v12 + 32;
  while ( 1 )
  {
    if ( v14 >= v13 )
    {
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
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


bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo_20743100(
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
    sub_B5D69C(this, tdLv);
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
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
      }
      this = *(OtherUserGameEntity_o **)(v7 + 8LL * (int)v9 + 32);
      if ( !this )
        goto LABEL_14;
      if ( this->fields.userLv == classPos && this->fields.friendCode )
        return ServantLeaderInfo__getTreasureDeviceInfo_29359808((ServantLeaderInfo_o *)this, tdLv, tdMaxLv, 0LL);
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
    sub_B5D69C(this, classPos);
  v7 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v7 << 32) < 1 )
    return 0;
  v8 = 0LL;
  v9 = v6 + 32;
  while ( 1 )
  {
    if ( v8 >= v7 )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_B5D69C(this, classPos);
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
    sub_B5D69C(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
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