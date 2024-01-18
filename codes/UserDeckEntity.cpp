void __fastcall UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Int32_array **v10; // x1

  if ( (byte_4188AE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4188AE2 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.name, v10, v2, v3, v4, v5, v6, v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserDeckEntity___ctor_26976228(
        UserDeckEntity_o *this,
        int64_t userId,
        int64_t deckId,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Int32_array **v16; // x1
  BalanceConfig_c *v17; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4188AE3 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userId);
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, v13);
    sub_B2C35C(&DeckServant_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_4188AE3 = 1;
  }
  v16 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.name,
    v16,
    (System_String_array **)deckId,
    *(System_String_array ***)&deckNo,
    (System_Boolean_array **)userEquipId,
    (System_Int32_array **)method,
    v6,
    v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v17->static_fields->DeckMemberMax;
  v19 = (DeckServant_o *)sub_B2C42C(DeckServant_TypeInfo);
  DeckServant___ctor_16762468(v19, DeckMemberMax, userEquipId, 0LL);
  this->fields.deckInfo = v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.deckInfo,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


int64_t __fastcall UserDeckEntity__CreatePrimaryKey(UserDeckEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserDeckEntity__GetEquipList(
        UserDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_4188AE4 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_B2C35C(&long___TypeInfo, v5);
    byte_4188AE4 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B2C374(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList_26976700(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_4188AE5 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userSvtId);
    sub_B2C35C(&long___TypeInfo, v5);
    byte_4188AE5 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_16765428(deckInfo, userSvtId, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B2C374(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
}


int32_t __fastcall UserDeckEntity__GetFollowerIndex(UserDeckEntity_o *this, const MethodInfo *method)
{
  UserDeckEntity_o *v2; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v4; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v7; // x22
  int id; // w23
  __int64 v10; // x0

  v2 = this;
  if ( (byte_4188AE7 & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_4188AE7 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_B2C434(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v4 >= max_length )
      return 0;
    if ( (unsigned int)v4 >= max_length )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    v7 = svts->m_Items[v4];
    if ( !v7 )
      goto LABEL_16;
    id = v7->fields.id;
    if ( id >= 1 )
    {
      this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[2].fields.cost + 156LL) && v7->fields.isFollowerSvt )
        return v7->fields.id;
    }
    deckInfo = v2->fields.deckInfo;
    ++v4;
    if ( !deckInfo )
      goto LABEL_16;
  }
}


UserServantEntity_o *__fastcall UserDeckEntity__GetUserServant(
        UserDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  UserServantEntity_o *result; // x0

  result = (UserServantEntity_o *)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetUserServant((DeckServant_o *)result, menber, 0LL);
  return result;
}


UserServantEntity_array *__fastcall UserDeckEntity__GetUserServantList(
        UserDeckEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  BalanceConfig_c *v10; // x8
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *v12; // x21
  __int64 v13; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v16; // x25
  int id; // w26
  int64_t userSvtId; // x2
  int v19; // w8
  __int64 v21; // x0

  if ( (byte_4188AE6 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&UserServantEntity___TypeInfo, v6);
    byte_4188AE6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)sub_B2C374(UserServantEntity___TypeInfo, (unsigned int)v10->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_25:
    sub_B2C434(Instance, v8);
  v12 = (UserServantEntity_array *)Instance;
  v13 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_25;
    max_length = svts->max_length;
    if ( (int)v13 >= max_length )
      return v12;
    if ( (unsigned int)v13 >= max_length )
      goto LABEL_27;
    v16 = svts->m_Items[v13];
    if ( !v16 )
      goto LABEL_25;
    id = v16->fields.id;
    if ( id >= 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= SHIDWORD(Instance[1].fields.saveNameList[3].fields._syncRoot) && !v16->fields.isFollowerSvt )
      {
        userSvtId = v16->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v12 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          v19 = v16->fields.id - 1;
          if ( v19 >= v12->max_length )
          {
LABEL_27:
            v21 = sub_B2C460(Instance);
            sub_B2C400(v21, 0LL);
          }
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        &v12->m_Items[v19],
                                        userSvtId,
                                        (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v13;
    if ( !deckInfo )
      goto LABEL_25;
  }
}


bool __fastcall UserDeckEntity__IsEquip(UserDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}