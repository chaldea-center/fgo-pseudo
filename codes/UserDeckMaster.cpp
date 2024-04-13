void __fastcall UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__, (_DWORD)method, v2, v3);
    byte_42EA1B0 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    29,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *__fastcall UserDeckMaster__GetServantListFromAllDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        bool isCheckHeroine,
        const MethodInfo *method)
{
  UserServantEntity_o *DeckList; // x0
  const MethodInfo *v6; // x1
  int hiddenValue; // w8
  UserServantEntity_array *v8; // x20
  unsigned int v9; // w22
  int64_t v10; // x8
  UserServantEntity_array *v11; // x21
  unsigned __int64 v12; // x23
  __int64 v14; // x0

  DeckList = (UserServantEntity_o *)UserDeckMaster__getDeckList(this, userId, (const MethodInfo *)isCheckHeroine);
  if ( !DeckList )
LABEL_19:
    sub_B5D69C(DeckList, v6);
  hiddenValue = DeckList->fields.id.fields.hiddenValue;
  v8 = (UserServantEntity_array *)DeckList;
  if ( hiddenValue >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= hiddenValue )
        goto LABEL_18;
      DeckList = v8->m_Items[v9];
      if ( !DeckList )
        goto LABEL_19;
      DeckList = (UserServantEntity_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)DeckList, v6);
      if ( !DeckList )
        goto LABEL_19;
      v10 = DeckList->fields.id.fields.hiddenValue;
      v11 = (UserServantEntity_array *)DeckList;
      if ( (int)v10 >= 1 )
        break;
LABEL_14:
      hiddenValue = v8->max_length;
      if ( (int)++v9 >= hiddenValue )
        return v11;
    }
    v12 = 0LL;
    while ( v12 < (unsigned int)v10 )
    {
      DeckList = v11->m_Items[v12];
      if ( DeckList )
      {
        if ( !isCheckHeroine )
          return v11;
        DeckList = (UserServantEntity_o *)UserServantEntity__IsHeroine(DeckList, 0LL);
        if ( ((unsigned __int8)DeckList & 1) == 0 )
          return v11;
      }
      LODWORD(v10) = v11->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_14;
    }
LABEL_18:
    v14 = sub_B5D6C8(DeckList);
    sub_B5D668(v14, 0LL);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeck(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserServantEntity_array *result; // x0
  const MethodInfo *v6; // x1
  UserServantEntity_array *v7; // x20
  const MethodInfo *v8; // x3
  signed int max_length; // w8
  unsigned int v10; // w9
  __int64 v11; // x0

  if ( (byte_42EA1B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, (_DWORD)method, v2, v3);
    byte_42EA1B7 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0LL);
  if ( !result
    || (v7 = result,
        (result = (UserServantEntity_array *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                               (int64_t)result->m_Items[19],
                                               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v6)) == 0LL )
  {
    sub_B5D69C(result, v6);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck(this, (int64_t)v7->bounds, 0, v8);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      v11 = sub_B5D6C8(result);
      sub_B5D668(v11, 0LL);
    }
    if ( result->m_Items[v10] )
      break;
    if ( (int)++v10 >= max_length )
      return UserDeckMaster__GetServantListFromAllDeck(this, (int64_t)v7->bounds, 0, v8);
  }
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeckIsTerminal(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserServantEntity_array *result; // x0
  UserServantEntity_array *v6; // x20
  const MethodInfo *v7; // x1
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v12; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA1B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, (_DWORD)method, v2, v3);
    byte_42EA1B9 = 1;
  }
  cnt = 0;
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0LL);
  if ( result )
  {
    v6 = result;
    result = (UserServantEntity_array *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                          (int64_t)result->m_Items[19],
                                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    if ( result )
    {
      UserServantList = (UserDeckMaster_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v7);
      cnt = 0;
      result = UserDeckMaster__NullBacktrackingDeck(
                 UserServantList,
                 (UserServantEntity_array *)UserServantList,
                 0,
                 &cnt,
                 v9);
      if ( !cnt )
      {
        ServantListFromAllDeck = (UserDeckMaster_o *)UserDeckMaster__GetServantListFromAllDeck(
                                                       this,
                                                       (int64_t)v6->bounds,
                                                       0,
                                                       v10);
        return UserDeckMaster__NullBacktrackingDeck(
                 ServantListFromAllDeck,
                 (UserServantEntity_array *)ServantListFromAllDeck,
                 0,
                 &cnt,
                 v12);
      }
    }
  }
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  void *SelfUserGame; // x0
  const MethodInfo *v6; // x1
  _QWORD *v7; // x20
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v9; // x4
  UserServantEntity_array *result; // x0
  const MethodInfo *v11; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v13; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA1B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, (_DWORD)method, v2, v3);
    byte_42EA1B8 = 1;
  }
  cnt = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v7 = SelfUserGame,
        (SelfUserGame = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                          *((_QWORD *)SelfUserGame + 23),
                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL) )
  {
    sub_B5D69C(SelfUserGame, v6);
  }
  UserServantList = (UserDeckMaster_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)SelfUserGame, v6);
  cnt = 0;
  result = UserDeckMaster__NullBacktrackingDeck(
             UserServantList,
             (UserServantEntity_array *)UserServantList,
             1,
             &cnt,
             v9);
  if ( !cnt )
  {
    ServantListFromAllDeck = (UserDeckMaster_o *)UserDeckMaster__GetServantListFromAllDeck(this, v7[2], 1, v11);
    return UserDeckMaster__NullBacktrackingDeck(
             ServantListFromAllDeck,
             (UserServantEntity_array *)ServantListFromAllDeck,
             1,
             &cnt,
             v13);
  }
  return result;
}


bool __fastcall UserDeckMaster__IsEquip(UserDeckMaster_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w21
  int32_t v18; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v20; // x23
  __int64 v21; // x10
  BalanceConfig_c *v22; // x0
  int32_t klass; // w27

  if ( (byte_42EA1B5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&UserDeckEntity_TypeInfo, v12, v13, v14);
    byte_42EA1B5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B5D69C(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v17 = Count;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v18,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = Item;
      v21 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserDeckEntity_TypeInfo )
      {
        v22 = BalanceConfig_TypeInfo;
        klass = (int32_t)v20[2].klass;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v22 = BalanceConfig_TypeInfo;
        }
        if ( klass <= v22->static_fields->DeckMax )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v20[3].klass;
          if ( !list )
            goto LABEL_19;
          if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
            return 1;
        }
      }
    }
    if ( ++v18 >= v17 )
      return 0;
  }
}


bool __fastcall UserDeckMaster__IsEquip_28049868(
        UserDeckMaster_o *this,
        int64_t userSvtId,
        int32_t *partyIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v21; // x24
  __int64 v22; // x10
  BalanceConfig_c *v23; // x0
  int32_t klass; // w28
  bool result; // w0
  int32_t v26; // w8

  if ( (byte_42EA1B6 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userSvtId, (_DWORD)partyIndex, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&UserDeckEntity_TypeInfo, v13, v14, v15);
    byte_42EA1B6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B5D69C(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_17:
    result = 0;
    v26 = -1;
  }
  else
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v19,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v22 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == UserDeckEntity_TypeInfo )
        {
          v23 = BalanceConfig_TypeInfo;
          klass = (int32_t)v21[2].klass;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v23 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v23->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v21[3].klass;
            if ( !list )
              goto LABEL_20;
            if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
              break;
          }
        }
      }
      if ( ++v19 >= v18 )
        goto LABEL_17;
    }
    v26 = (int32_t)v21[2].klass;
    result = 1;
  }
  *partyIndex = v26;
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__NullBacktrackingDeck(
        UserDeckMaster_o *this,
        UserServantEntity_array *deck,
        bool isCheckHeroine,
        int32_t *cnt,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x8
  UserServantEntity_array *v15; // x20
  unsigned __int64 v16; // x24
  System_Int32_array **v17; // x23
  __int64 v18; // x26
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  Il2CppClass **v25; // x0
  int32_t v26; // w9
  __int64 v27; // x21
  UserDeckMaster_o *p_monitor; // x22
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_42EA1BA & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_B5D5C4(&UserServantEntity___TypeInfo, (_DWORD)deck, isCheckHeroine, cnt);
    byte_42EA1BA = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_B5D5DC(UserServantEntity___TypeInfo, deck->max_length);
  *cnt = 0;
  v14 = *(_QWORD *)&deck->max_length;
  v15 = (UserServantEntity_array *)this;
  if ( (int)v14 < 1 )
  {
    v26 = 0;
  }
  else
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v14 )
        goto LABEL_23;
      v17 = (System_Int32_array **)deck->m_Items[v16];
      if ( v17 )
      {
        if ( !isCheckHeroine
          || (this = (UserDeckMaster_o *)UserServantEntity__IsHeroine(deck->m_Items[v16], 0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          if ( !v15 )
            goto LABEL_24;
          v18 = *cnt;
          this = (UserDeckMaster_o *)sub_B5D684(v17, v15->obj.klass->_1.element_class);
          if ( !this )
          {
            v31 = sub_B5D6BC(0LL);
            sub_B5D668(v31, 0LL);
          }
          if ( (unsigned int)v18 >= v15->max_length )
            goto LABEL_23;
          v25 = &v15->obj.klass + v18;
          v25[4] = (Il2CppClass *)v17;
          sub_B5D560((BattleServantConfConponent_o *)(v25 + 4), v17, v19, v20, v21, v22, v23, v24);
          ++*cnt;
        }
      }
      LODWORD(v14) = deck->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)v14 );
    v26 = *cnt;
  }
  if ( v26 < (int)v14 )
  {
    if ( v15 )
    {
      v27 = v26;
      this = (UserDeckMaster_o *)&v15->m_Items[v26];
      while ( (unsigned int)v27 < v15->max_length )
      {
        this->klass = 0LL;
        p_monitor = (UserDeckMaster_o *)&this->monitor;
        sub_B5D560((BattleServantConfConponent_o *)this, 0LL, v8, v9, v10, v11, v12, v13);
        ++v27;
        this = p_monitor;
        if ( v27 >= (int)deck->max_length )
          return v15;
      }
LABEL_23:
      v30 = sub_B5D6C8(this);
      sub_B5D668(v30, 0LL);
    }
LABEL_24:
    sub_B5D69C(this, deck);
  }
  return v15;
}


UserDeckEntity_o *__fastcall UserDeckMaster__getDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        int32_t deckNo,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  UserDeckEntity_o *result; // x0
  __int64 v18; // x10

  if ( (byte_42EA1B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, deckNo, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&UserDeckEntity_TypeInfo, v10, v11, v12);
    byte_42EA1B1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserDeckEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     list,
                                     v16,
                                     (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v18 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (UserDeckEntity_c *)result->klass->_2.typeHierarchy[v18 - 1] == UserDeckEntity_TypeInfo
          && result->fields.userId == userId
          && result->fields.deckNo == deckNo )
        {
          return result;
        }
      }
      if ( ++v16 >= v15 )
        return 0LL;
    }
LABEL_15:
    sub_B5D69C(list, userId);
  }
  return 0LL;
}


UserDeckEntity_array *__fastcall UserDeckMaster__getDeckList(
        UserDeckMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x19
  int32_t v36; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x24
  __int64 v38; // x10
  int32_t addCount; // w28
  int32_t size; // w21
  unsigned int *p_size; // x22
  BalanceConfig_c *v42; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x8
  int32_t DeckMax; // t1
  int32_t *v46; // x9
  unsigned int v47; // w8
  UserDeckEntity_array *v48; // x20
  __int64 v49; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x21
  signed int v51; // w24
  __int64 v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  char *v59; // x0
  __int64 v61; // x0
  __int64 v62; // x0

  if ( (byte_42EA1B2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UserDeckEntity___TypeInfo, v27, v28, v29);
    sub_B5D5C4(&UserDeckEntity_TypeInfo, v30, v31, v32);
    byte_42EA1B2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( Count >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v36,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v38 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v38
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[v38 - 1] == UserDeckEntity_TypeInfo
          && list->fields._syncRoot == (Il2CppObject *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BalanceConfig_TypeInfo;
          addCount = v37->fields.addCount;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BalanceConfig_TypeInfo;
          }
          if ( addCount <= SHIDWORD(list[5].fields._syncRoot[9].klass) )
          {
            if ( !v35 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v35,
              v37,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserDeckEntity__Add__);
          }
        }
      }
      if ( ++v36 >= Count )
        goto LABEL_18;
    }
LABEL_39:
    sub_B5D69C(list, userId);
  }
LABEL_18:
  if ( !v35 )
    goto LABEL_39;
  p_size = (unsigned int *)&v35->fields._size;
  size = v35->fields._size;
  v42 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  static_fields = v42->static_fields;
  DeckMax = static_fields->DeckMax;
  p_DeckMax = &static_fields->DeckMax;
  v46 = &v35->fields._size;
  if ( size >= DeckMax )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v46 = p_DeckMax;
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v46 = &BalanceConfig_TypeInfo->static_fields->DeckMax;
      }
    }
    else
    {
      v46 = p_DeckMax;
    }
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5D5DC(
                                                                                       UserDeckEntity___TypeInfo,
                                                                                       (unsigned int)*v46);
  v47 = *p_size;
  v48 = (UserDeckEntity_array *)list;
  if ( (int)*p_size >= 1 )
  {
    v49 = 0LL;
    while ( 1 )
    {
      if ( v47 <= (unsigned int)v49 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v50 = v35->fields._items->m_Items[v49];
      if ( !v50 || !v48 )
        break;
      v51 = v50->fields.addCount;
      if ( v51 <= (signed int)v48->max_length )
      {
        v52 = sub_B5D684(v50, v48->obj.klass->_1.element_class);
        if ( !v52 )
        {
          v62 = sub_B5D6BC(0LL);
          sub_B5D668(v62, 0LL);
        }
        if ( v51 - 1 >= v48->max_length )
        {
          v61 = sub_B5D6C8(v52);
          sub_B5D668(v61, 0LL);
        }
        v59 = (char *)v48 + 8 * v51 - 8;
        *((_QWORD *)v59 + 4) = v50;
        sub_B5D560((BattleServantConfConponent_o *)(v59 + 32), (System_Int32_array **)v50, v53, v54, v55, v56, v57, v58);
      }
      v47 = *p_size;
      if ( (int)++v49 >= (int)*p_size )
        return v48;
    }
    goto LABEL_39;
  }
  return v48;
}


void __fastcall UserDeckMaster__getEventPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v36; // x24
  System_Collections_Generic_List_long__o *v37; // x23
  int32_t v38; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v40; // x27
  __int64 v41; // x10
  int32_t klass; // w20
  BalanceConfig_c *v43; // x0
  UserEventDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v45; // x4
  System_Int64_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int64_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EA1B4 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)svtIdList, (_DWORD)equipIdList, userId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&UserDeckEntity_TypeInfo, v31, v32, v33);
    byte_42EA1B4 = 1;
  }
  equipCollectList = 0LL;
  svtCollectList = 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v36 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v36;
  v37 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  equipCollectList = v37;
  if ( Count >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v38,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v40 = Item;
        v41 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v41
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v41 - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          klass = (int32_t)Item[2].klass;
          v43 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v43 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v43->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v40[3].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v36, v37, 0LL);
          }
        }
      }
      if ( ++v38 >= Count )
        goto LABEL_18;
    }
LABEL_26:
    sub_B5D69C(list, svtIdList);
  }
LABEL_18:
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)list,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  UserEventDeckMaster__getEventPartyList_28048904(
    MasterData_WarQuestSelectionMaster,
    &svtCollectList,
    &equipCollectList,
    (int64_t)list,
    v45);
  if ( !v36 )
    goto LABEL_26;
  v46 = System_Collections_Generic_List_long___ToArray(
          v36,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v46;
  sub_B5D560((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  if ( !v37 )
    goto LABEL_26;
  v53 = System_Collections_Generic_List_long___ToArray(
          v37,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v53;
  sub_B5D560((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
}


void __fastcall UserDeckMaster__getPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_long__o *v27; // x25
  System_Collections_Generic_List_long__o *v28; // x23
  int32_t v29; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v30; // x27
  __int64 v31; // x10
  int klass; // w20
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

  if ( (byte_42EA1B3 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)svtIdList, (_DWORD)equipIdList, userId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UserDeckEntity_TypeInfo, v22, v23, v24);
    byte_42EA1B3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v27 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v28 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v28,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v29,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v30 = list;
        v31 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[v31 - 1] == UserDeckEntity_TypeInfo
          && list->fields._syncRoot == (Il2CppObject *)userId )
        {
          klass = (int)list[1].klass;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BalanceConfig_TypeInfo;
          }
          if ( klass <= SHIDWORD(list[5].fields._syncRoot[9].klass) )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v30[1].fields.items;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v27, v28, 0LL);
          }
        }
      }
      if ( ++v29 >= Count )
        goto LABEL_18;
    }
LABEL_21:
    sub_B5D69C(list, svtIdList);
  }
LABEL_18:
  if ( !v27 )
    goto LABEL_21;
  v33 = System_Collections_Generic_List_long___ToArray(
          v27,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v33;
  sub_B5D560((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  if ( !v28 )
    goto LABEL_21;
  v40 = System_Collections_Generic_List_long___ToArray(
          v28,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v40;
  sub_B5D560((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
}