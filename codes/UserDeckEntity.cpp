void __fastcall UserDeckEntity___ctor(UserDeckEntity_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1

  if ( (byte_42EA1AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EA1AA = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.name, v12, v2, v3, v4, v5, v6, v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserDeckEntity___ctor_28045128(
        UserDeckEntity_o *this,
        int64_t userId,
        int64_t deckId,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Int32_array **v22; // x1
  BalanceConfig_c *v23; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42EA1AB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userId, deckId, *(_QWORD *)&deckNo);
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, v13, v14, v15);
    sub_B5D5C4(&DeckServant_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42EA1AB = 1;
  }
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.name,
    v22,
    (System_String_array **)deckId,
    *(System_String_array ***)&deckNo,
    (System_Boolean_array **)userEquipId,
    (System_Int32_array **)method,
    v6,
    v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v23->static_fields->DeckMemberMax;
  v25 = (DeckServant_o *)sub_B5D694(DeckServant_TypeInfo);
  DeckServant___ctor_16952084(v25, DeckMemberMax, userEquipId, 0LL);
  this->fields.deckInfo = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.deckInfo,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v11; // x0

  if ( (byte_42EA1AC & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, menber, (_DWORD)method, v3);
    sub_B5D5C4(&long___TypeInfo, v6, v7, v8);
    byte_42EA1AC = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v11->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList_28045600(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v11; // x0

  if ( (byte_42EA1AD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&long___TypeInfo, v6, v7, v8);
    byte_42EA1AD = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_16955100(deckInfo, userSvtId, 0, 0LL);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v11->static_fields->SvtEquipMax);
}


int32_t __fastcall UserDeckEntity__GetFollowerIndex(UserDeckEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserDeckEntity_o *v4; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v6; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v9; // x22
  int id; // w23
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42EA1AF & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA1AF = 1;
  }
  deckInfo = v4->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_B5D69C(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v6 >= max_length )
      return 0;
    if ( (unsigned int)v6 >= max_length )
    {
      v12 = sub_B5D6C8(this);
      sub_B5D668(v12, 0LL);
    }
    v9 = svts->m_Items[v6];
    if ( !v9 )
      goto LABEL_16;
    id = v9->fields.id;
    if ( id >= 1 )
    {
      this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[2].fields.cost + 156LL) && v9->fields.isFollowerSvt )
        return v9->fields.id;
    }
    deckInfo = v4->fields.deckInfo;
    ++v6;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  BalanceConfig_c *v20; // x8
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *v22; // x21
  __int64 v23; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v26; // x25
  int id; // w26
  int64_t userSvtId; // x2
  int v29; // w8
  __int64 v31; // x0

  if ( (byte_42EA1AE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&UserServantEntity___TypeInfo, v14, v15, v16);
    byte_42EA1AE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)sub_B5D5DC(UserServantEntity___TypeInfo, (unsigned int)v20->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_25:
    sub_B5D69C(Instance, v18);
  v22 = (UserServantEntity_array *)Instance;
  v23 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_25;
    max_length = svts->max_length;
    if ( (int)v23 >= max_length )
      return v22;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_27;
    v26 = svts->m_Items[v23];
    if ( !v26 )
      goto LABEL_25;
    id = v26->fields.id;
    if ( id >= 1 )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= SHIDWORD(Instance[1].fields.saveNameList[3].fields._syncRoot) && !v26->fields.isFollowerSvt )
      {
        userSvtId = v26->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v22 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          v29 = v26->fields.id - 1;
          if ( v29 >= v22->max_length )
          {
LABEL_27:
            v31 = sub_B5D6C8(Instance);
            sub_B5D668(v31, 0LL);
          }
          Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        &v22->m_Items[v29],
                                        userSvtId,
                                        (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v23;
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