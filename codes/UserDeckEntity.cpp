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

  if ( (byte_40FAB04 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40FAB04 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.name, v10, v2, v3, v4, v5, v6, v7);
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserDeckEntity___ctor_26539120(
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BalanceConfig_c *v21; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40FAB05 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userId);
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, v13);
    sub_B16FFC(&DeckServant_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FAB05 = 1;
  }
  v16 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
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
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
  this->fields.id = deckId;
  this->fields.userId = userId;
  this->fields.deckNo = deckNo;
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v21->static_fields->DeckMemberMax;
  v23 = (DeckServant_o *)sub_B170CC(DeckServant_TypeInfo, v17, v18, v19, v20);
  DeckServant___ctor_16648360(v23, DeckMemberMax, userEquipId, 0LL);
  this->fields.deckInfo = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckInfo,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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

  if ( (byte_40FAB06 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_B16FFC(&long___TypeInfo, v5);
    byte_40FAB06 = 1;
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
  return (System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax, method);
}


System_Int64_array *__fastcall UserDeckEntity__GetEquipList_26539592(
        UserDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_40FAB07 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userSvtId);
    sub_B16FFC(&long___TypeInfo, v5);
    byte_40FAB07 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_16651320(deckInfo, userSvtId, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax, method);
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
  if ( (byte_40FAB09 & 1) == 0 )
  {
    this = (UserDeckEntity_o *)sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FAB09 = 1;
  }
  deckInfo = v3->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v5 >= max_length )
      return 0;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v8 = svts->m_Items[v5];
    if ( !v8 )
      goto LABEL_16;
    id = v8->fields.id;
    if ( id >= 1 )
    {
      this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[2].fields.cost + 156LL) && v8->fields.isFollowerSvt )
        return v8->fields.id;
    }
    deckInfo = v3->fields.deckInfo;
    ++v5;
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
  WebViewManager_o *Instance; // x0
  __int64 v8; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  BalanceConfig_c *v10; // x8
  BalanceConfig_c *Entity; // x0
  __int64 v12; // x1
  int64_t userSvtId; // x2
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *v15; // x21
  __int64 v16; // x23
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v19; // x25
  int id; // w26
  int v21; // w8

  if ( (byte_40FAB08 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&UserServantEntity___TypeInfo, v6);
    byte_40FAB08 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  Entity = (BalanceConfig_c *)sub_B17014(
                                UserServantEntity___TypeInfo,
                                (unsigned int)v10->static_fields->DeckMemberMax,
                                v8);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
LABEL_25:
    sub_B170D4();
  v15 = (UserServantEntity_array *)Entity;
  v16 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_25;
    max_length = svts->max_length;
    if ( (int)v16 >= max_length )
      return v15;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_27;
    v19 = svts->m_Items[v16];
    if ( !v19 )
      goto LABEL_25;
    id = v19->fields.id;
    if ( id >= 1 )
    {
      Entity = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Entity = BalanceConfig_TypeInfo;
      }
      if ( id <= Entity->static_fields->DeckMemberMax && !v19->fields.isFollowerSvt )
      {
        userSvtId = v19->fields.userSvtId;
        if ( userSvtId >= 1 )
        {
          if ( !v15 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          v21 = v19->fields.id - 1;
          if ( v21 >= v15->max_length )
          {
LABEL_27:
            sub_B17100(Entity, v12, userSvtId);
            sub_B170A0();
          }
          Entity = (BalanceConfig_c *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        &v15->m_Items[v21],
                                        userSvtId,
                                        (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        }
      }
    }
    deckInfo = this->fields.deckInfo;
    ++v16;
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