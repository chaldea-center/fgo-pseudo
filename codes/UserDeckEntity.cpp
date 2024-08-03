void __fastcall UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1

  if ( (byte_49FCFD0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_long___ctor__, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCFD0 = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.name, v6, v2, v3);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D3CEC *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserDeckEntity___ctor_39719904(
        UserDeckEntity_o *this,
        int64_t userId,
        int64_t deckId,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w1
  __int64 v15; // x1
  __int64 v16; // x2
  BalanceConfig_c *v17; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FCFD1 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, userId);
    sub_1B640C8(&Method_DataEntityBase_long___ctor__, v11);
    sub_1B640C8(&DeckServant_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FCFD1 = 1;
  }
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.name, v14, deckId, deckNo);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D3CEC *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v17->static_fields->DeckMemberMax;
  v19 = (DeckServant_o *)sub_1B64314(DeckServant_TypeInfo, v15, v16);
  DeckServant___ctor_38554240(v19, DeckMemberMax, userEquipId, 0LL);
  this->fields.deckInfo = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckInfo, (int32_t)v19, v20, v21);
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

  if ( (byte_49FCFD2 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_1B640C8(&long___TypeInfo, v5);
    byte_49FCFD2 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1B64170(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList_39720348(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_49FCFD3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, userSvtId);
    sub_1B640C8(&long___TypeInfo, v5);
    byte_49FCFD3 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_38557184(deckInfo, userSvtId, 0, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1B64170(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
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

  v2 = this;
  if ( (byte_49FCFD5 & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49FCFD5 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_15:
    sub_1B64324(this);
  v4 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_15;
    max_length = svts->max_length;
    if ( (int)v4 >= max_length )
      return 0;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
    v7 = svts->m_Items[v4];
    if ( !v7 )
      goto LABEL_15;
    id = v7->fields.id;
    if ( id >= 1 )
    {
      this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
      goto LABEL_15;
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
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  __int64 v11; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *v13; // x21
  __int64 v14; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v17; // x25
  int id; // w26
  int64_t userSvtId; // x2
  int v20; // w8

  if ( (byte_49FCFD4 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&UserServantEntity___TypeInfo, v6);
    byte_49FCFD4 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v9 = BalanceConfig_TypeInfo;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  Instance = sub_1B64170(UserServantEntity___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_23:
    sub_1B64324(Instance);
  v13 = (UserServantEntity_array *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_23;
    max_length = svts->max_length;
    if ( (int)v14 >= max_length )
      return v13;
    if ( (unsigned int)v14 >= max_length )
      goto LABEL_25;
    v17 = svts->m_Items[v14];
    if ( !v17 )
      goto LABEL_23;
    id = v17->fields.id;
    if ( id >= 1 )
    {
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) && !v17->fields.isFollowerSvt )
      {
        userSvtId = v17->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v13 || !v10 )
            goto LABEL_23;
          v20 = v17->fields.id - 1;
          if ( v20 >= v13->max_length )
LABEL_25:
            sub_1B6432C(Instance, v11);
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v10,
                       (Il2CppObject **)&v13->m_Items[v20],
                       userSvtId,
                       (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v14;
    if ( !deckInfo )
      goto LABEL_23;
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