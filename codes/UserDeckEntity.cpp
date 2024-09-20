void __fastcall UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5BD49 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BD49 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.name, v5, v2, v3);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserDeckEntity___ctor_40051900(
        UserDeckEntity_o *this,
        int64_t userId,
        int64_t deckId,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  int32_t v11; // w1
  BalanceConfig_c *v12; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A5BD4A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    sub_1B885B0(&DeckServant_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BD4A = 1;
  }
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.name, v11, deckId, deckNo);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v12->static_fields->DeckMemberMax;
  v14 = (DeckServant_o *)sub_1B887FC(DeckServant_TypeInfo);
  DeckServant___ctor_38870860(v14, DeckMemberMax, userEquipId, 0LL);
  this->fields.deckInfo = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckInfo, (int32_t)v14, v15, v16);
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

  if ( (byte_4A5BD4B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    byte_4A5BD4B = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList_40052344(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_4A5BD4C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    byte_4A5BD4C = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_38873804(deckInfo, userSvtId, 0, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
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
  if ( (byte_4A5BD4E & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5BD4E = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_15:
    sub_1B8880C(this, method);
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
      sub_1B88814(this, method);
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
  __int64 Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *v9; // x21
  __int64 v10; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v13; // x25
  int id; // w26
  int64_t userSvtId; // x2
  int v16; // w8

  if ( (byte_4A5BD4D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity___TypeInfo);
    byte_4A5BD4D = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v6 = BalanceConfig_TypeInfo;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  Instance = sub_1B88658(UserServantEntity___TypeInfo, (unsigned int)v6->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_23:
    sub_1B8880C(Instance, v4);
  v9 = (UserServantEntity_array *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_23;
    max_length = svts->max_length;
    if ( (int)v10 >= max_length )
      return v9;
    if ( (unsigned int)v10 >= max_length )
      goto LABEL_25;
    v13 = svts->m_Items[v10];
    if ( !v13 )
      goto LABEL_23;
    id = v13->fields.id;
    if ( id >= 1 )
    {
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) && !v13->fields.isFollowerSvt )
      {
        userSvtId = v13->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v9 || !v7 )
            goto LABEL_23;
          v16 = v13->fields.id - 1;
          if ( v16 >= v9->max_length )
LABEL_25:
            sub_1B88814(Instance, v4);
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v7,
                       (Il2CppObject **)&v9->m_Items[v16],
                       userSvtId,
                       (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v10;
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