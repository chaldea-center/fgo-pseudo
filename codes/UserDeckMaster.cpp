void __fastcall UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B14D5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
    byte_42B14D5 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    29,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
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
    sub_B52A5C(DeckList, v6);
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
    v14 = sub_B52A88(DeckList);
    sub_B52A28(v14, 0LL);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeck(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  UserServantEntity_array *result; // x0
  const MethodInfo *v4; // x1
  UserServantEntity_array *v5; // x20
  const MethodInfo *v6; // x3
  signed int max_length; // w8
  unsigned int v8; // w9
  __int64 v9; // x0

  if ( (byte_42B14DC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_42B14DC = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0LL);
  if ( !result
    || (v5 = result,
        (result = (UserServantEntity_array *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                               (int64_t)result->m_Items[19],
                                               (const MethodInfo_23E2500 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v4)) == 0LL )
  {
    sub_B52A5C(result, v4);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck(this, (int64_t)v5->bounds, 0, v6);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v9 = sub_B52A88(result);
      sub_B52A28(v9, 0LL);
    }
    if ( result->m_Items[v8] )
      break;
    if ( (int)++v8 >= max_length )
      return UserDeckMaster__GetServantListFromAllDeck(this, (int64_t)v5->bounds, 0, v6);
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

  if ( (byte_42B14DE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_42B14DE = 1;
  }
  cnt = 0;
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0LL);
  if ( result )
  {
    v4 = result;
    result = (UserServantEntity_array *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                          (int64_t)result->m_Items[19],
                                          (const MethodInfo_23E2500 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
  void *SelfUserGame; // x0
  const MethodInfo *v4; // x1
  _QWORD *v5; // x20
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v7; // x4
  UserServantEntity_array *result; // x0
  const MethodInfo *v9; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v11; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B14DD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_42B14DD = 1;
  }
  cnt = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v5 = SelfUserGame,
        (SelfUserGame = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                          *((_QWORD *)SelfUserGame + 23),
                          (const MethodInfo_23E2500 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL) )
  {
    sub_B52A5C(SelfUserGame, v4);
  }
  UserServantList = (UserDeckMaster_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)SelfUserGame, v4);
  cnt = 0;
  result = UserDeckMaster__NullBacktrackingDeck(
             UserServantList,
             (UserServantEntity_array *)UserServantList,
             1,
             &cnt,
             v7);
  if ( !cnt )
  {
    ServantListFromAllDeck = (UserDeckMaster_o *)UserDeckMaster__GetServantListFromAllDeck(this, v5[2], 1, v9);
    return UserDeckMaster__NullBacktrackingDeck(
             ServantListFromAllDeck,
             (UserServantEntity_array *)ServantListFromAllDeck,
             1,
             &cnt,
             v11);
  }
  return result;
}


bool __fastcall UserDeckMaster__IsEquip(UserDeckMaster_o *this, int64_t userSvtId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v10; // x23
  __int64 v11; // x10
  BalanceConfig_c *v12; // x0
  int32_t klass; // w27

  if ( (byte_42B14DA & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&UserDeckEntity_TypeInfo);
    byte_42B14DA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B52A5C(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = Item;
      v11 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserDeckEntity_TypeInfo )
      {
        v12 = BalanceConfig_TypeInfo;
        klass = (int32_t)v10[2].klass;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v12 = BalanceConfig_TypeInfo;
        }
        if ( klass <= v12->static_fields->DeckMax )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v10[3].klass;
          if ( !list )
            goto LABEL_19;
          if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
            return 1;
        }
      }
    }
    if ( ++v8 >= v7 )
      return 0;
  }
}


bool __fastcall UserDeckMaster__IsEquip_27432624(
        UserDeckMaster_o *this,
        int64_t userSvtId,
        int32_t *partyIndex,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v12; // x24
  __int64 v13; // x10
  BalanceConfig_c *v14; // x0
  int32_t klass; // w28
  bool result; // w0
  int32_t v17; // w8

  if ( (byte_42B14DB & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&UserDeckEntity_TypeInfo);
    byte_42B14DB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B52A5C(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_17:
    result = 0;
    v17 = -1;
  }
  else
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        v13 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserDeckEntity_TypeInfo )
        {
          v14 = BalanceConfig_TypeInfo;
          klass = (int32_t)v12[2].klass;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v14 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v14->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v12[3].klass;
            if ( !list )
              goto LABEL_20;
            if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
              break;
          }
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_17;
    }
    v17 = (int32_t)v12[2].klass;
    result = 1;
  }
  *partyIndex = v17;
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

  if ( (byte_42B14DF & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_B52984(&UserServantEntity___TypeInfo);
    byte_42B14DF = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_B5299C(UserServantEntity___TypeInfo, deck->max_length);
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
          this = (UserDeckMaster_o *)sub_B52A44(v17, v15->obj.klass->_1.element_class);
          if ( !this )
          {
            v31 = sub_B52A7C(0LL);
            sub_B52A28(v31, 0LL);
          }
          if ( (unsigned int)v18 >= v15->max_length )
            goto LABEL_23;
          v25 = &v15->obj.klass + v18;
          v25[4] = (Il2CppClass *)v17;
          sub_B52920((BattleServantConfConponent_o *)(v25 + 4), v17, v19, v20, v21, v22, v23, v24);
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
        sub_B52920((BattleServantConfConponent_o *)this, 0LL, v8, v9, v10, v11, v12, v13);
        ++v27;
        this = p_monitor;
        if ( v27 >= (int)deck->max_length )
          return v15;
      }
LABEL_23:
      v30 = sub_B52A88(this);
      sub_B52A28(v30, 0LL);
    }
LABEL_24:
    sub_B52A5C(this, deck);
  }
  return v15;
}


UserDeckEntity_o *__fastcall UserDeckMaster__getDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        int32_t deckNo,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  UserDeckEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_42B14D6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&UserDeckEntity_TypeInfo);
    byte_42B14D6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserDeckEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     list,
                                     v10,
                                     (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (UserDeckEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == UserDeckEntity_TypeInfo
          && result->fields.userId == userId
          && result->fields.deckNo == deckNo )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_15:
    sub_B52A5C(list, userId);
  }
  return 0LL;
}


UserDeckEntity_array *__fastcall UserDeckMaster__getDeckList(
        UserDeckMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  int32_t v8; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x24
  __int64 v10; // x10
  int32_t addCount; // w28
  int32_t size; // w21
  unsigned int *p_size; // x22
  BalanceConfig_c *v14; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x8
  int32_t DeckMax; // t1
  int32_t *v18; // x9
  unsigned int v19; // w8
  UserDeckEntity_array *v20; // x20
  __int64 v21; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x21
  signed int v23; // w24
  __int64 v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  char *v31; // x0
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_42B14D7 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_B52984(&UserDeckEntity___TypeInfo);
    sub_B52984(&UserDeckEntity_TypeInfo);
    byte_42B14D7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v10 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == UserDeckEntity_TypeInfo
          && list->fields._syncRoot == (Il2CppObject *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BalanceConfig_TypeInfo;
          addCount = v9->fields.addCount;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BalanceConfig_TypeInfo;
          }
          if ( addCount <= SHIDWORD(list[5].fields._syncRoot[9].klass) )
          {
            if ( !v7 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              v9,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserDeckEntity__Add__);
          }
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_18;
    }
LABEL_39:
    sub_B52A5C(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_39;
  p_size = (unsigned int *)&v7->fields._size;
  size = v7->fields._size;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  static_fields = v14->static_fields;
  DeckMax = static_fields->DeckMax;
  p_DeckMax = &static_fields->DeckMax;
  v18 = &v7->fields._size;
  if ( size >= DeckMax )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v18 = p_DeckMax;
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v18 = &BalanceConfig_TypeInfo->static_fields->DeckMax;
      }
    }
    else
    {
      v18 = p_DeckMax;
    }
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5299C(
                                                                                       UserDeckEntity___TypeInfo,
                                                                                       (unsigned int)*v18);
  v19 = *p_size;
  v20 = (UserDeckEntity_array *)list;
  if ( (int)*p_size >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v19 <= (unsigned int)v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v22 = v7->fields._items->m_Items[v21];
      if ( !v22 || !v20 )
        break;
      v23 = v22->fields.addCount;
      if ( v23 <= (signed int)v20->max_length )
      {
        v24 = sub_B52A44(v22, v20->obj.klass->_1.element_class);
        if ( !v24 )
        {
          v34 = sub_B52A7C(0LL);
          sub_B52A28(v34, 0LL);
        }
        if ( v23 - 1 >= v20->max_length )
        {
          v33 = sub_B52A88(v24);
          sub_B52A28(v33, 0LL);
        }
        v31 = (char *)v20 + 8 * v23 - 8;
        *((_QWORD *)v31 + 4) = v22;
        sub_B52920((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)v22, v25, v26, v27, v28, v29, v30);
      }
      v19 = *p_size;
      if ( (int)++v21 >= (int)*p_size )
        return v20;
    }
    goto LABEL_39;
  }
  return v20;
}


void __fastcall UserDeckMaster__getEventPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v9; // x24
  System_Collections_Generic_List_long__o *v10; // x23
  int32_t v11; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v13; // x27
  __int64 v14; // x10
  int32_t klass; // w20
  BalanceConfig_c *v16; // x0
  UserEventDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v18; // x4
  System_Int64_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int64_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B14D9 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserDeckEntity_TypeInfo);
    byte_42B14D9 = 1;
  }
  equipCollectList = 0LL;
  svtCollectList = 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v9;
  v10 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  equipCollectList = v10;
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v11,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = Item;
        v14 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          klass = (int32_t)Item[2].klass;
          v16 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v16 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v16->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v13[3].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v9, v10, 0LL);
          }
        }
      }
      if ( ++v11 >= Count )
        goto LABEL_18;
    }
LABEL_26:
    sub_B52A5C(list, svtIdList);
  }
LABEL_18:
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)list,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  UserEventDeckMaster__getEventPartyList_27431660(
    MasterData_WarQuestSelectionMaster,
    &svtCollectList,
    &equipCollectList,
    (int64_t)list,
    v18);
  if ( !v9 )
    goto LABEL_26;
  v19 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v19;
  sub_B52920((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  if ( !v10 )
    goto LABEL_26;
  v26 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v26;
  sub_B52920((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall UserDeckMaster__getPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_long__o *v9; // x25
  System_Collections_Generic_List_long__o *v10; // x23
  int32_t v11; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x27
  __int64 v13; // x10
  int klass; // w20
  System_Int64_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int64_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42B14D8 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&UserDeckEntity_TypeInfo);
    byte_42B14D8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v10 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v13 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == UserDeckEntity_TypeInfo
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
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v12[1].fields.items;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v9, v10, 0LL);
          }
        }
      }
      if ( ++v11 >= Count )
        goto LABEL_18;
    }
LABEL_21:
    sub_B52A5C(list, svtIdList);
  }
LABEL_18:
  if ( !v9 )
    goto LABEL_21;
  v15 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v15;
  sub_B52920((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  if ( !v10 )
    goto LABEL_21;
  v22 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v22;
  sub_B52920((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
}