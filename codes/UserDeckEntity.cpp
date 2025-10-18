void UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C43D3C & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_long___ctor__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C43D3C = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.name, v5, v2, v3);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339EC04 *)Method_DataEntityBase_long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void UserDeckEntity___ctor_43009868(
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
  const MethodInfo *v16; // x3

  if ( (byte_4C43D3D & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataEntityBase_long___ctor__);
    sub_1C37058(&DeckServant_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C43D3D = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.name, v11, deckId, *(const MethodInfo **)&deckNo);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339EC04 *)Method_DataEntityBase_long___ctor__);
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
  v14 = (DeckServant_o *)sub_1C372A4(DeckServant_TypeInfo);
  DeckServant___ctor_41697664(v14, DeckMemberMax, userEquipId, 0);
  this->fields.deckInfo = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.deckInfo, (int32_t)v14, v15, v16);
}


int64_t UserDeckEntity__CreatePrimaryKey(UserDeckEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int64_array *UserDeckEntity__GetEquipList(UserDeckEntity_o *this, int32_t menber, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_4C43D3E & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&long___TypeInfo);
    byte_4C43D3E = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, -1, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C37100(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *UserDeckEntity__GetEquipList_43010316(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_4C43D3F & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&long___TypeInfo);
    byte_4C43D3F = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_41700436(deckInfo, userSvtId, 0, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C37100(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


int32_t UserDeckEntity__GetFollowerIndex(UserDeckEntity_o *this, const MethodInfo *method)
{
  UserDeckEntity_o *v2; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v4; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v7; // x22
  int id; // w23

  v2 = this;
  if ( (byte_4C43D41 & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C43D41 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_15:
    sub_1C372B4(this);
  v4 = 0;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_15;
    max_length = svts->max_length;
    if ( (int)v4 >= max_length )
      return 0;
    if ( (unsigned int)v4 >= max_length )
      sub_1C372BC(this);
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
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[2].fields.cost + 172LL) && v7->fields.isFollowerSvt )
        return v7->fields.id;
    }
    deckInfo = v2->fields.deckInfo;
    ++v4;
    if ( !deckInfo )
      goto LABEL_15;
  }
}


int64_t UserDeckEntity__GetNpcFollowerServantId(UserDeckEntity_o *this, int32_t pos, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetNpcFollowerServantId((DeckServant_o *)result, pos, 0);
  return result;
}


UserServantEntity_o *UserDeckEntity__GetUserServant(UserDeckEntity_o *this, int32_t menber, const MethodInfo *method)
{
  UserServantEntity_o *result; // x0

  result = (UserServantEntity_o *)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetUserServant((DeckServant_o *)result, menber, 0);
  return result;
}


UserServantEntity_array *UserDeckEntity__GetUserServantList(UserDeckEntity_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v5; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  struct DeckServant_o *deckInfo; // x8
  __int64 v8; // x21
  __int64 v9; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v12; // x25
  int id; // w26
  int64_t userSvtId; // x2
  int v15; // w8

  if ( (byte_4C43D40 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&UserServantEntity___TypeInfo);
    byte_4C43D40 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v5 = BalanceConfig_TypeInfo;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  Instance = sub_1C37100(UserServantEntity___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_23:
    sub_1C372B4(Instance);
  v8 = Instance;
  v9 = 0;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_23;
    max_length = svts->max_length;
    if ( (int)v9 >= max_length )
      return (UserServantEntity_array *)v8;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_25;
    v12 = svts->m_Items[v9];
    if ( !v12 )
      goto LABEL_23;
    id = v12->fields.id;
    if ( id >= 1 )
    {
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) && !v12->fields.isFollowerSvt )
      {
        userSvtId = v12->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v8 || !v6 )
            goto LABEL_23;
          v15 = v12->fields.id - 1;
          if ( (unsigned int)v15 >= *(_DWORD *)(v8 + 24) )
LABEL_25:
            sub_1C372BC(Instance);
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v6,
                       (Il2CppObject **)(v8 + 8LL * v15 + 32),
                       userSvtId,
                       (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v9;
    if ( !deckInfo )
      goto LABEL_23;
  }
}


bool UserDeckEntity__IsEquip(UserDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0);
  return (char)deckInfo;
}