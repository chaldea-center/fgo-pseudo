void __fastcall UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB0A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__, method);
    byte_40FAB0A = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    28,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *__fastcall UserDeckMaster__GetServantListFromAllDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        bool isCheckHeroine,
        const MethodInfo *method)
{
  UserServantEntity_array *DeckList; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  UserServantEntity_array *v9; // x20
  unsigned int v10; // w22
  UserDeckEntity_o *v11; // x0
  __int64 v12; // x8
  UserServantEntity_array *v13; // x21
  unsigned __int64 v14; // x23

  DeckList = (UserServantEntity_array *)UserDeckMaster__getDeckList(this, userId, (const MethodInfo *)isCheckHeroine);
  if ( !DeckList )
LABEL_19:
    sub_B170D4();
  max_length = DeckList->max_length;
  v9 = DeckList;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        goto LABEL_18;
      v11 = (UserDeckEntity_o *)v9->m_Items[v10];
      if ( !v11 )
        goto LABEL_19;
      DeckList = UserDeckEntity__GetUserServantList(v11, v6);
      if ( !DeckList )
        goto LABEL_19;
      v12 = *(_QWORD *)&DeckList->max_length;
      v13 = DeckList;
      if ( (int)v12 >= 1 )
        break;
LABEL_14:
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return v13;
    }
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      DeckList = (UserServantEntity_array *)v13->m_Items[v14];
      if ( DeckList )
      {
        if ( !isCheckHeroine )
          return v13;
        DeckList = (UserServantEntity_array *)UserServantEntity__IsHeroine((UserServantEntity_o *)DeckList, 0LL);
        if ( ((unsigned __int8)DeckList & 1) == 0 )
          return v13;
      }
      LODWORD(v12) = v13->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_14;
    }
LABEL_18:
    sub_B17100(DeckList, v6, v7);
    sub_B170A0();
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeck(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v4; // x20
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v6; // x1
  UserServantEntity_array *result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  signed int max_length; // w8
  unsigned int v12; // w9

  if ( (byte_40FAB11 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, method);
    byte_40FAB11 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v4 = SelfUserGame,
        (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                    SelfUserGame->fields.activeDeckId,
                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)Entity, v6)) == 0LL )
  {
    sub_B170D4();
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck(this, v4->fields.userId, 0, v10);
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      sub_B17100(result, v8, v9);
      sub_B170A0();
    }
    if ( result->m_Items[v12] )
      break;
    if ( (int)++v12 >= max_length )
      return UserDeckMaster__GetServantListFromAllDeck(this, v4->fields.userId, 0, v10);
  }
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeckIsTerminal(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  UserServantEntity_array *result; // x0
  UserServantEntity_array *v4; // x20
  const MethodInfo *v5; // x1
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v10; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FAB13 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, method);
    byte_40FAB13 = 1;
  }
  cnt = 0;
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0LL);
  if ( result )
  {
    v4 = result;
    result = (UserServantEntity_array *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                          (int64_t)result->m_Items[19],
                                          (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    if ( result )
    {
      UserServantList = (UserDeckMaster_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v5);
      cnt = 0;
      result = UserDeckMaster__NullBacktrackingDeck(
                 UserServantList,
                 (UserServantEntity_array *)UserServantList,
                 0,
                 &cnt,
                 v7);
      if ( !cnt )
      {
        ServantListFromAllDeck = (UserDeckMaster_o *)UserDeckMaster__GetServantListFromAllDeck(
                                                       this,
                                                       (int64_t)v4->bounds,
                                                       0,
                                                       v8);
        return UserDeckMaster__NullBacktrackingDeck(
                 ServantListFromAllDeck,
                 (UserServantEntity_array *)ServantListFromAllDeck,
                 0,
                 &cnt,
                 v10);
      }
    }
  }
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v4; // x20
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v6; // x1
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v8; // x4
  UserServantEntity_array *result; // x0
  const MethodInfo *v10; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v12; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FAB12 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, method);
    byte_40FAB12 = 1;
  }
  cnt = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v4 = SelfUserGame,
        (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                    SelfUserGame->fields.activeDeckId,
                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL) )
  {
    sub_B170D4();
  }
  UserServantList = (UserDeckMaster_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)Entity, v6);
  cnt = 0;
  result = UserDeckMaster__NullBacktrackingDeck(
             UserServantList,
             (UserServantEntity_array *)UserServantList,
             1,
             &cnt,
             v8);
  if ( !cnt )
  {
    ServantListFromAllDeck = (UserDeckMaster_o *)UserDeckMaster__GetServantListFromAllDeck(
                                                   this,
                                                   v4->fields.userId,
                                                   1,
                                                   v10);
    return UserDeckMaster__NullBacktrackingDeck(
             ServantListFromAllDeck,
             (UserServantEntity_array *)ServantListFromAllDeck,
             1,
             &cnt,
             v12);
  }
  return result;
}


bool __fastcall UserDeckMaster__IsEquip(UserDeckMaster_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v14; // x23
  __int64 v15; // x10
  BalanceConfig_c *v16; // x0
  int32_t klass; // w27
  DeckServant_o *v18; // x0

  if ( (byte_40FAB0F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userSvtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&UserDeckEntity_TypeInfo, v7);
    byte_40FAB0F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v12 )
      goto LABEL_19;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v12,
             v11,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v14 = Item;
      v15 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == UserDeckEntity_TypeInfo )
      {
        v16 = BalanceConfig_TypeInfo;
        klass = (int32_t)v14[2].klass;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v16 = BalanceConfig_TypeInfo;
        }
        if ( klass <= v16->static_fields->DeckMax )
        {
          v18 = (DeckServant_o *)v14[3].klass;
          if ( !v18 )
            goto LABEL_19;
          if ( DeckServant__IsEquip(v18, userSvtId, 0LL) )
            return 1;
        }
      }
    }
    if ( ++v11 >= v10 )
      return 0;
  }
}


bool __fastcall UserDeckMaster__IsEquip_26543856(
        UserDeckMaster_o *this,
        int64_t userSvtId,
        int32_t *partyIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x24
  __int64 v17; // x10
  BalanceConfig_c *v18; // x0
  int32_t klass; // w28
  DeckServant_o *v20; // x0
  bool result; // w0
  int32_t v22; // w8

  if ( (byte_40FAB10 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userSvtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&UserDeckEntity_TypeInfo, v9);
    byte_40FAB10 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_17:
    result = 0;
    v22 = -1;
  }
  else
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      v14 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v14 )
        goto LABEL_20;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v14,
               v13,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = Item;
        v17 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == UserDeckEntity_TypeInfo )
        {
          v18 = BalanceConfig_TypeInfo;
          klass = (int32_t)v16[2].klass;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v18 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v18->static_fields->DeckMax )
          {
            v20 = (DeckServant_o *)v16[3].klass;
            if ( !v20 )
              goto LABEL_20;
            if ( DeckServant__IsEquip(v20, userSvtId, 0LL) )
              break;
          }
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_17;
    }
    v22 = (int32_t)v16[2].klass;
    result = 1;
  }
  *partyIndex = v22;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *__fastcall UserDeckMaster__NullBacktrackingDeck(
        UserDeckMaster_o *this,
        UserServantEntity_array *deck,
        bool isCheckHeroine,
        int32_t *cnt,
        const MethodInfo *method)
{
  __int64 IsHeroine; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x8
  UserServantEntity_array *v17; // x20
  unsigned __int64 v18; // x24
  System_Int32_array **v19; // x23
  __int64 v20; // x26
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  Il2CppClass **v26; // x0
  int32_t v27; // w9
  __int64 v28; // x21
  __int64 v29; // x22

  if ( (byte_40FAB14 & 1) == 0 )
  {
    sub_B16FFC(&UserServantEntity___TypeInfo, deck);
    byte_40FAB14 = 1;
  }
  if ( !deck )
    goto LABEL_24;
  IsHeroine = sub_B17014(UserServantEntity___TypeInfo, deck->max_length, isCheckHeroine);
  *cnt = 0;
  v16 = *(_QWORD *)&deck->max_length;
  v17 = (UserServantEntity_array *)IsHeroine;
  if ( (int)v16 < 1 )
  {
    v27 = 0;
  }
  else
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_23;
      v19 = (System_Int32_array **)deck->m_Items[v18];
      if ( v19 )
      {
        if ( !isCheckHeroine
          || (IsHeroine = UserServantEntity__IsHeroine(deck->m_Items[v18], 0LL), (IsHeroine & 1) == 0) )
        {
          if ( !v17 )
            goto LABEL_24;
          v20 = *cnt;
          IsHeroine = sub_B170BC(v19, v17->obj.klass->_1.element_class);
          if ( !IsHeroine )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
          if ( (unsigned int)v20 >= v17->max_length )
            goto LABEL_23;
          v26 = &v17->obj.klass + v20;
          v26[4] = (Il2CppClass *)v19;
          sub_B16F98((BattleServantConfConponent_o *)(v26 + 4), v19, v10, v21, v22, v23, v24, v25);
          ++*cnt;
        }
      }
      LODWORD(v16) = deck->max_length;
      ++v18;
    }
    while ( (__int64)v18 < (int)v16 );
    v27 = *cnt;
  }
  if ( v27 < (int)v16 )
  {
    if ( v17 )
    {
      v28 = v27;
      IsHeroine = (__int64)&v17->m_Items[v27];
      while ( (unsigned int)v28 < v17->max_length )
      {
        *(_QWORD *)IsHeroine = 0LL;
        v29 = IsHeroine + 8;
        sub_B16F98((BattleServantConfConponent_o *)IsHeroine, 0LL, v10, v11, v12, v13, v14, v15);
        ++v28;
        IsHeroine = v29;
        if ( v28 >= (int)deck->max_length )
          return v17;
      }
LABEL_23:
      sub_B17100(IsHeroine, v9, v10);
      sub_B170A0();
    }
LABEL_24:
    sub_B170D4();
  }
  return v17;
}


UserDeckEntity_o *__fastcall UserDeckMaster__getDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        int32_t deckNo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  UserDeckEntity_o *result; // x0
  __int64 v15; // x10

  if ( (byte_40FAB0B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&UserDeckEntity_TypeInfo, v8);
    byte_40FAB0B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v13 )
        break;
      result = (UserDeckEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     v13,
                                     v12,
                                     (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v15 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (UserDeckEntity_c *)result->klass->_2.typeHierarchy[v15 - 1] == UserDeckEntity_TypeInfo
          && result->fields.userId == userId
          && result->fields.deckNo == deckNo )
        {
          return result;
        }
      }
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_15:
    sub_B170D4();
  }
  return 0LL;
}


UserDeckEntity_array *__fastcall UserDeckMaster__getDeckList(
        UserDeckMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  __int64 v21; // x2
  int32_t v22; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x24
  __int64 v26; // x10
  BalanceConfig_c *v27; // x0
  int32_t addCount; // w28
  int32_t size; // w21
  unsigned int *p_size; // x22
  BalanceConfig_c *v31; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x8
  int32_t DeckMax; // t1
  int32_t *v35; // x9
  __int64 v36; // x0
  unsigned int v37; // w8
  UserDeckEntity_array *v38; // x20
  __int64 v39; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x21
  signed int v41; // w24
  __int64 v42; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  char *v50; // x0

  if ( (byte_40FAB0C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v11);
    sub_B16FFC(&UserDeckEntity___TypeInfo, v12);
    sub_B16FFC(&UserDeckEntity_TypeInfo, v13);
    byte_40FAB0C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserDeckEntity__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v23 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v23,
               v22,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v26 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          v27 = BalanceConfig_TypeInfo;
          addCount = v25->fields.addCount;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v27 = BalanceConfig_TypeInfo;
          }
          if ( addCount <= v27->static_fields->DeckMax )
          {
            if ( !v20 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v25,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserDeckEntity__Add__);
          }
        }
      }
      if ( ++v22 >= Count )
        goto LABEL_18;
    }
LABEL_39:
    sub_B170D4();
  }
LABEL_18:
  if ( !v20 )
    goto LABEL_39;
  p_size = (unsigned int *)&v20->fields._size;
  size = v20->fields._size;
  v31 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  static_fields = v31->static_fields;
  DeckMax = static_fields->DeckMax;
  p_DeckMax = &static_fields->DeckMax;
  v35 = &v20->fields._size;
  if ( size >= DeckMax )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v35 = p_DeckMax;
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v35 = &BalanceConfig_TypeInfo->static_fields->DeckMax;
      }
    }
    else
    {
      v35 = p_DeckMax;
    }
  }
  v36 = sub_B17014(UserDeckEntity___TypeInfo, (unsigned int)*v35, v21);
  v37 = *p_size;
  v38 = (UserDeckEntity_array *)v36;
  if ( (int)*p_size >= 1 )
  {
    v39 = 0LL;
    while ( 1 )
    {
      if ( v37 <= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v40 = v20->fields._items->m_Items[v39];
      if ( !v40 || !v38 )
        break;
      v41 = v40->fields.addCount;
      if ( v41 <= (signed int)v38->max_length )
      {
        v42 = sub_B170BC(v40, v38->obj.klass->_1.element_class);
        if ( !v42 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        if ( v41 - 1 >= v38->max_length )
        {
          sub_B17100(v42, v43, v44);
          sub_B170A0();
        }
        v50 = (char *)v38 + 8 * v41 - 8;
        *((_QWORD *)v50 + 4) = v40;
        sub_B16F98((BattleServantConfConponent_o *)(v50 + 32), (System_Int32_array **)v40, v44, v45, v46, v47, v48, v49);
      }
      v37 = *p_size;
      if ( (int)++v39 >= (int)*p_size )
        return v38;
    }
    goto LABEL_39;
  }
  return v38;
}


void __fastcall UserDeckMaster__getEventPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w25
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_long__o *v22; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_long__o *v27; // x23
  int32_t v28; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x27
  __int64 v32; // x10
  int32_t klass; // w20
  BalanceConfig_c *v34; // x0
  DeckServant_o *v35; // x0
  WebViewManager_o *Instance; // x0
  UserEventDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v38; // x0
  const MethodInfo *v39; // x4
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FAB0E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, svtIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&UserDeckEntity_TypeInfo, v15);
    byte_40FAB0E = 1;
  }
  equipCollectList = 0LL;
  svtCollectList = 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20,
                                                     v21);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v22;
  v27 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v23,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  equipCollectList = v27;
  if ( Count >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v29 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v29,
               v28,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = Item;
        v32 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          klass = (int32_t)Item[2].klass;
          v34 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v34 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v34->static_fields->DeckMax )
          {
            v35 = (DeckServant_o *)v31[3].klass;
            if ( !v35 )
              break;
            DeckServant__CollectUserSvtId(v35, v22, v27, 0LL);
          }
        }
      }
      if ( ++v28 >= Count )
        goto LABEL_18;
    }
LABEL_26:
    sub_B170D4();
  }
LABEL_18:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v38 = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  UserEventDeckMaster__getEventPartyList_26542892(
    MasterData_WarQuestSelectionMaster,
    &svtCollectList,
    &equipCollectList,
    v38,
    v39);
  if ( !v22 )
    goto LABEL_26;
  v40 = System_Collections_Generic_List_long___ToArray(
          v22,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v40;
  sub_B16F98((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  if ( !v27 )
    goto LABEL_26;
  v47 = System_Collections_Generic_List_long___ToArray(
          v27,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v47;
  sub_B16F98((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
}


void __fastcall UserDeckMaster__getPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_long__o *v19; // x25
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_long__o *v24; // x23
  int32_t v25; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v28; // x27
  __int64 v29; // x10
  int32_t klass; // w20
  BalanceConfig_c *v31; // x0
  DeckServant_o *v32; // x0
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40FAB0D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, svtIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B16FFC(&UserDeckEntity_TypeInfo, v12);
    byte_40FAB0D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v15,
                                                     v16,
                                                     v17,
                                                     v18);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v24 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22,
                                                     v23);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v26 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v26,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = Item;
        v29 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          klass = (int32_t)Item[2].klass;
          v31 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v31 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v31->static_fields->DeckMax )
          {
            v32 = (DeckServant_o *)v28[3].klass;
            if ( !v32 )
              break;
            DeckServant__CollectUserSvtId(v32, v19, v24, 0LL);
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_18;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_18:
  if ( !v19 )
    goto LABEL_21;
  v33 = System_Collections_Generic_List_long___ToArray(
          v19,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v33;
  sub_B16F98((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  if ( !v24 )
    goto LABEL_21;
  v40 = System_Collections_Generic_List_long___ToArray(
          v24,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v40;
  sub_B16F98((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
}