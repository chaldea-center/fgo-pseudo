void UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_5939487 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939487 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.name, v9, v2, v3, v4, v5, v6, v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserDeckEntity__CreatePrimaryKey(UserDeckEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *UserDeckEntity__GetEquipList(UserDeckEntity_o *this, int32_t menber, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_5939488 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    byte_5939488 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_21FFD10(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


int32_t UserDeckEntity__GetFollowerIndex(UserDeckEntity_o *this, const MethodInfo *method)
{
  UserDeckEntity_o *v2; // x19
  struct DeckServant_o *deckInfo; // x8
  unsigned int v4; // w21
  struct DeckServantData_array *svts; // x8
  unsigned int max_length; // w9
  DeckServantData_o *v7; // x22
  int id; // w23

  v2 = this;
  if ( (byte_593948A & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_593948A = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_15:
    sub_21FFECC(this, method);
  v4 = 0;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_15;
    max_length = svts->max_length;
    if ( (int)v4 >= (int)max_length )
      return 0;
    if ( v4 >= max_length )
      sub_21FFED4(this);
    v7 = svts->m_Items[v4];
    if ( !v7 )
      goto LABEL_15;
    id = v7->fields.id;
    if ( id >= 1 )
    {
      this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
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
  __int64 v6; // x1
  BalanceConfig_c *v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  struct DeckServant_o *deckInfo; // x8
  __int64 v10; // x21
  unsigned int v11; // w23
  __int64 v12; // x25
  struct DeckServantData_array *svts; // x8
  unsigned int max_length; // w9
  DeckServantData_o *v15; // x26
  int id; // w27
  int64_t userSvtId; // x2
  int v18; // w8

  if ( (byte_5939489 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserServantEntity___TypeInfo);
    byte_5939489 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v7 = BalanceConfig_TypeInfo;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  Instance = sub_21FFD10(UserServantEntity___TypeInfo, (unsigned int)v7->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_23:
    sub_21FFECC(Instance, v4);
  v10 = Instance;
  v11 = 0;
  v12 = Instance + 32;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_23;
    max_length = svts->max_length;
    if ( (int)v11 >= (int)max_length )
      return (UserServantEntity_array *)v10;
    if ( v11 >= max_length )
      goto LABEL_25;
    v15 = svts->m_Items[v11];
    if ( !v15 )
      goto LABEL_23;
    id = v15->fields.id;
    if ( id >= 1 )
    {
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) && !v15->fields.isFollowerSvt )
      {
        userSvtId = v15->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v10 || !v8 )
            goto LABEL_23;
          v18 = v15->fields.id - 1;
          if ( (unsigned int)v18 >= *(_DWORD *)(v10 + 24) )
LABEL_25:
            sub_21FFED4(Instance);
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v8,
                       (Il2CppObject **)(v12 + 8LL * v18),
                       userSvtId,
                       (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v11;
    if ( !deckInfo )
      goto LABEL_23;
  }
}