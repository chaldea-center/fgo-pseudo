void __fastcall UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  void *v11; // x1

  if ( (byte_4B16DFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B16DFE = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserDeckEntity___ctor_40781648(
        UserDeckEntity_o *this,
        int64_t userId,
        int64_t deckId,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  void *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  BalanceConfig_c *v23; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B16DFF & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userId, deckId);
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, v13, v14);
    sub_1BCA7E0(&DeckServant_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B16DFF = 1;
  }
  v19 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.name,
    (int64_t)v19,
    deckId,
    deckNo,
    (System_String_o *)userEquipId,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v23 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
    v23 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v23->static_fields->DeckMemberMax;
  v25 = (DeckServant_o *)sub_1BCAA2C(DeckServant_TypeInfo, v20, v21, v22);
  DeckServant___ctor_39589472(v25, DeckMemberMax, userEquipId, 0LL);
  this->fields.deckInfo = v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.deckInfo, (int64_t)v25, v26, v27, v28, v29, v30, v31);
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
  __int64 v6; // x2
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4B16E00 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&menber, method);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    byte_4B16E00 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList_40782092(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_4B16E01 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userSvtId, method);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    byte_4B16E01 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_39592416(deckInfo, userSvtId, 0, 0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userSvtId);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
}


int32_t __fastcall UserDeckEntity__GetFollowerIndex(UserDeckEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserDeckEntity_o *v3; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v5; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v8; // x22
  int id; // w23

  v3 = this;
  if ( (byte_4B16E03 & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B16E03 = 1;
  }
  deckInfo = v3->fields.deckInfo;
  if ( !deckInfo )
LABEL_15:
    sub_1BCAA3C(this, method);
  v5 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_15;
    max_length = svts->max_length;
    if ( (int)v5 >= max_length )
      return 0;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, method);
    v8 = svts->m_Items[v5];
    if ( !v8 )
      goto LABEL_15;
    id = v8->fields.id;
    if ( id >= 1 )
    {
      this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[2].fields.cost + 156LL) && v8->fields.isFollowerSvt )
        return v8->fields.id;
    }
    deckInfo = v3->fields.deckInfo;
    ++v5;
    if ( !deckInfo )
      goto LABEL_15;
  }
}


int64_t __fastcall UserDeckEntity__GetNpcFollowerServantId(
        UserDeckEntity_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetNpcFollowerServantId((DeckServant_o *)result, pos, 0LL);
  return result;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x1
  BalanceConfig_c *v16; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *v19; // x21
  __int64 v20; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v23; // x25
  int id; // w26
  int64_t userSvtId; // x2
  int v26; // w8

  if ( (byte_4B16E02 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&UserServantEntity___TypeInfo, v10, v11);
    byte_4B16E02 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v16 = BalanceConfig_TypeInfo;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
    v16 = BalanceConfig_TypeInfo;
  }
  Instance = sub_1BCA888(UserServantEntity___TypeInfo, (unsigned int)v16->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_23:
    sub_1BCAA3C(Instance, v13);
  v19 = (UserServantEntity_array *)Instance;
  v20 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_23;
    max_length = svts->max_length;
    if ( (int)v20 >= max_length )
      return v19;
    if ( (unsigned int)v20 >= max_length )
      goto LABEL_25;
    v23 = svts->m_Items[v20];
    if ( !v23 )
      goto LABEL_23;
    id = v23->fields.id;
    if ( id >= 1 )
    {
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) && !v23->fields.isFollowerSvt )
      {
        userSvtId = v23->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v19 || !v17 )
            goto LABEL_23;
          v26 = v23->fields.id - 1;
          if ( v26 >= v19->max_length )
LABEL_25:
            sub_1BCAA44(Instance, v13);
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v17,
                       (Il2CppObject **)&v19->m_Items[v26],
                       userSvtId,
                       (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v20;
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