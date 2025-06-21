void __fastcall UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w1

  if ( (byte_4B1D24B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_long___ctor__, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1D24B = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.name, v6, v2, v3);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32C5964 *)Method_DataEntityBase_long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserDeckEntity___ctor_42148552(
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
  BalanceConfig_c *v15; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B1D24C & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userId);
    sub_1BCAFF8(&Method_DataEntityBase_long___ctor__, v11);
    sub_1BCAFF8(&DeckServant_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v13);
    byte_4B1D24C = 1;
  }
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.name, v14, deckId, *(const MethodInfo **)&deckNo);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32C5964 *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v15->static_fields->DeckMemberMax;
  v17 = (DeckServant_o *)sub_1BCB244(DeckServant_TypeInfo);
  DeckServant___ctor_40870824(v17, DeckMemberMax, userEquipId, 0LL);
  this->fields.deckInfo = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.deckInfo, (int32_t)v17, v18, v19);
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

  if ( (byte_4B1D24D & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_1BCAFF8(&long___TypeInfo, v5);
    byte_4B1D24D = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, -1, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCB0A0(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList_42149000(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_4B1D24E & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userSvtId);
    sub_1BCAFF8(&long___TypeInfo, v5);
    byte_4B1D24E = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_40873596(deckInfo, userSvtId, 0, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BCB0A0(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
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
  if ( (byte_4B1D250 & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    byte_4B1D250 = 1;
  }
  deckInfo = v3->fields.deckInfo;
  if ( !deckInfo )
LABEL_15:
    sub_1BCB254(this, method);
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
      sub_1BCB25C(this, method, v2);
    v8 = svts->m_Items[v5];
    if ( !v8 )
      goto LABEL_15;
    id = v8->fields.id;
    if ( id >= 1 )
    {
      this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[2].fields.cost + 172LL) && v8->fields.isFollowerSvt )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  BalanceConfig_c *v10; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  int64_t userSvtId; // x2
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *v14; // x21
  __int64 v15; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v18; // x25
  int id; // w26
  int v20; // w8

  if ( (byte_4B1D24F & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BCAFF8(&UserServantEntity___TypeInfo, v6);
    byte_4B1D24F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v10 = BalanceConfig_TypeInfo;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  Instance = sub_1BCB0A0(UserServantEntity___TypeInfo, (unsigned int)v10->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_23:
    sub_1BCB254(Instance, v8);
  v14 = (UserServantEntity_array *)Instance;
  v15 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_23;
    max_length = svts->max_length;
    if ( (int)v15 >= max_length )
      return v14;
    if ( (unsigned int)v15 >= max_length )
      goto LABEL_25;
    v18 = svts->m_Items[v15];
    if ( !v18 )
      goto LABEL_23;
    id = v18->fields.id;
    if ( id >= 1 )
    {
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) && !v18->fields.isFollowerSvt )
      {
        userSvtId = v18->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v14 || !v11 )
            goto LABEL_23;
          v20 = v18->fields.id - 1;
          if ( v20 >= v14->max_length )
LABEL_25:
            sub_1BCB25C(Instance, v8, userSvtId);
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v11,
                       (Il2CppObject **)&v14->m_Items[v20],
                       userSvtId,
                       (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v15;
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