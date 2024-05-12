void __fastcall UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438CAFC & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_long___ctor__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CAFC = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.name, v9, v2, v3, v4, v5, v6, v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21FB798 *)Method_DataEntityBase_long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserDeckEntity___ctor_28269472(
        UserDeckEntity_o *this,
        int64_t userId,
        int64_t deckId,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v13; // x1
  BalanceConfig_c *v14; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_438CAFD & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataEntityBase_long___ctor__);
    sub_B775C4(&DeckServant_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CAFD = 1;
  }
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.name,
    v13,
    (System_String_array **)deckId,
    *(System_String_array ***)&deckNo,
    (System_Boolean_array **)userEquipId,
    (System_Int32_array **)method,
    v6,
    v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21FB798 *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v14->static_fields->DeckMemberMax;
  v16 = (DeckServant_o *)sub_B77694(DeckServant_TypeInfo);
  DeckServant___ctor_17108300(v16, DeckMemberMax, userEquipId, 0LL);
  this->fields.deckInfo = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.deckInfo,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


int64_t __fastcall UserDeckEntity__CreatePrimaryKey(UserDeckEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList(
        UserDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_438CAFE & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&long___TypeInfo);
    byte_438CAFE = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B775DC(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList_28269944(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_438CAFF & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&long___TypeInfo);
    byte_438CAFF = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_17111316(deckInfo, userSvtId, 0, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B775DC(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
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
  if ( (byte_438CB01 & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438CB01 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_B7769C(this, method);
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
      v10 = sub_B776C8(this);
      sub_B77668(v10, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  BalanceConfig_c *v6; // x8
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *v8; // x21
  __int64 v9; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v12; // x25
  int id; // w26
  int64_t userSvtId; // x2
  int v15; // w8
  __int64 v17; // x0

  if ( (byte_438CB00 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity___TypeInfo);
    byte_438CB00 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)sub_B775DC(UserServantEntity___TypeInfo, (unsigned int)v6->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_25:
    sub_B7769C(Instance, v4);
  v8 = (UserServantEntity_array *)Instance;
  v9 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_25;
    max_length = svts->max_length;
    if ( (int)v9 >= max_length )
      return v8;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_27;
    v12 = svts->m_Items[v9];
    if ( !v12 )
      goto LABEL_25;
    id = v12->fields.id;
    if ( id >= 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= SHIDWORD(Instance[1].fields.saveNameList[3].fields._syncRoot) && !v12->fields.isFollowerSvt )
      {
        userSvtId = v12->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v8 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          v15 = v12->fields.id - 1;
          if ( v15 >= v8->max_length )
          {
LABEL_27:
            v17 = sub_B776C8(Instance);
            sub_B77668(v17, 0LL);
          }
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        &v8->m_Items[v15],
                                        userSvtId,
                                        (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v9;
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