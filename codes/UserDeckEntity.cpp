void UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2D61E & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_long___ctor__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2D61E = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.name, v9, v2, v3, v4, v5, v6, v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3459024 *)Method_DataEntityBase_long___ctor__);
}


void UserDeckEntity___ctor_43791560(
        UserDeckEntity_o *this,
        int64_t userId,
        int64_t deckId,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w1
  BalanceConfig_c *v14; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2D61F & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataEntityBase_long___ctor__);
    sub_1C94098(&DeckServant_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2D61F = 1;
  }
  v13 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.name,
    v13,
    deckId,
    deckNo,
    (System_String_o *)userEquipId,
    (int32_t)method,
    v6,
    v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3459024 *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v14->static_fields->DeckMemberMax;
  v16 = (DeckServant_o *)sub_1C942E4(DeckServant_TypeInfo);
  DeckServant___ctor_42460708(v16, DeckMemberMax, userEquipId, 0);
  this->fields.deckInfo = v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckInfo, (int32_t)v16, v17, v18, v19, v20, v21, v22);
}


int64_t UserDeckEntity__CreatePrimaryKey(UserDeckEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int64_array *UserDeckEntity__GetEquipList(UserDeckEntity_o *this, int32_t menber, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_4D2D620 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&long___TypeInfo);
    byte_4D2D620 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C94140(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *UserDeckEntity__GetEquipList_43792004(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_4D2D621 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&long___TypeInfo);
    byte_4D2D621 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_42463504(deckInfo, userSvtId, 0, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C94140(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
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
  if ( (byte_4D2D623 & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2D623 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_15:
    sub_1C942F0(this, method);
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
      sub_1C942F8(this);
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
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  struct DeckServant_o *deckInfo; // x8
  __int64 v9; // x21
  __int64 v10; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v13; // x25
  int id; // w26
  int64_t userSvtId; // x2
  int v16; // w8

  if ( (byte_4D2D622 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&UserServantEntity___TypeInfo);
    byte_4D2D622 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v6 = BalanceConfig_TypeInfo;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  Instance = sub_1C94140(UserServantEntity___TypeInfo, (unsigned int)v6->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_23:
    sub_1C942F0(Instance, v4);
  v9 = Instance;
  v10 = 0;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_23;
    max_length = svts->max_length;
    if ( (int)v10 >= max_length )
      return (UserServantEntity_array *)v9;
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
      if ( id <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) && !v13->fields.isFollowerSvt )
      {
        userSvtId = v13->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v9 || !v7 )
            goto LABEL_23;
          v16 = v13->fields.id - 1;
          if ( (unsigned int)v16 >= *(_DWORD *)(v9 + 24) )
LABEL_25:
            sub_1C942F8(Instance);
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v7,
                       (Il2CppObject **)(v9 + 8LL * v16 + 32),
                       userSvtId,
                       (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v10;
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