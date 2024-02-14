void __fastcall UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215BA9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__, method);
    byte_4215BA9 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    28,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
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
    sub_B0D97C(DeckList);
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
    v14 = sub_B0D9A8(DeckList);
    sub_B0D948(v14, 0LL);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeck(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  UserServantEntity_array *result; // x0
  UserServantEntity_array *v4; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  signed int max_length; // w8
  unsigned int v8; // w9
  __int64 v9; // x0

  if ( (byte_4215BB0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, method);
    byte_4215BB0 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0LL);
  if ( !result
    || (v4 = result,
        (result = (UserServantEntity_array *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                               (int64_t)result->m_Items[19],
                                               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v5)) == 0LL )
  {
    sub_B0D97C(result);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck(this, (int64_t)v4->bounds, 0, v6);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v9 = sub_B0D9A8(result);
      sub_B0D948(v9, 0LL);
    }
    if ( result->m_Items[v8] )
      break;
    if ( (int)++v8 >= max_length )
      return UserDeckMaster__GetServantListFromAllDeck(this, (int64_t)v4->bounds, 0, v6);
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

  if ( (byte_4215BB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, method);
    byte_4215BB2 = 1;
  }
  cnt = 0;
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0LL);
  if ( result )
  {
    v4 = result;
    result = (UserServantEntity_array *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                          (int64_t)result->m_Items[19],
                                          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
  _QWORD *v4; // x20
  const MethodInfo *v5; // x1
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v7; // x4
  UserServantEntity_array *result; // x0
  const MethodInfo *v9; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v11; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215BB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, method);
    byte_4215BB1 = 1;
  }
  cnt = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v4 = SelfUserGame,
        (SelfUserGame = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                          *((_QWORD *)SelfUserGame + 23),
                          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL) )
  {
    sub_B0D97C(SelfUserGame);
  }
  UserServantList = (UserDeckMaster_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)SelfUserGame, v5);
  cnt = 0;
  result = UserDeckMaster__NullBacktrackingDeck(
             UserServantList,
             (UserServantEntity_array *)UserServantList,
             1,
             &cnt,
             v7);
  if ( !cnt )
  {
    ServantListFromAllDeck = (UserDeckMaster_o *)UserDeckMaster__GetServantListFromAllDeck(this, v4[2], 1, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v13; // x23
  __int64 v14; // x10
  BalanceConfig_c *v15; // x0
  int32_t klass; // w27

  if ( (byte_4215BAE & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userSvtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&UserDeckEntity_TypeInfo, v7);
    byte_4215BAE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v11,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = Item;
      v14 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == UserDeckEntity_TypeInfo )
      {
        v15 = BalanceConfig_TypeInfo;
        klass = (int32_t)v13[2].klass;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v15 = BalanceConfig_TypeInfo;
        }
        if ( klass <= v15->static_fields->DeckMax )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v13[3].klass;
          if ( !list )
            goto LABEL_19;
          if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
            return 1;
        }
      }
    }
    if ( ++v11 >= v10 )
      return 0;
  }
}


bool __fastcall UserDeckMaster__IsEquip_26733296(
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v15; // x24
  __int64 v16; // x10
  BalanceConfig_c *v17; // x0
  int32_t klass; // w28
  bool result; // w0
  int32_t v20; // w8

  if ( (byte_4215BAF & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userSvtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&UserDeckEntity_TypeInfo, v9);
    byte_4215BAF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_17:
    result = 0;
    v20 = -1;
  }
  else
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v13,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        v16 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == UserDeckEntity_TypeInfo )
        {
          v17 = BalanceConfig_TypeInfo;
          klass = (int32_t)v15[2].klass;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v17 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v17->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v15[3].klass;
            if ( !list )
              goto LABEL_20;
            if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
              break;
          }
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_17;
    }
    v20 = (int32_t)v15[2].klass;
    result = 1;
  }
  *partyIndex = v20;
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

  if ( (byte_4215BB3 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_B0D8A4(&UserServantEntity___TypeInfo, deck);
    byte_4215BB3 = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_B0D8BC(UserServantEntity___TypeInfo, deck->max_length);
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
          this = (UserDeckMaster_o *)sub_B0D964(v17, v15->obj.klass->_1.element_class);
          if ( !this )
          {
            v31 = sub_B0D99C(0LL);
            sub_B0D948(v31, 0LL);
          }
          if ( (unsigned int)v18 >= v15->max_length )
            goto LABEL_23;
          v25 = &v15->obj.klass + v18;
          v25[4] = (Il2CppClass *)v17;
          sub_B0D840((BattleServantConfConponent_o *)(v25 + 4), v17, v19, v20, v21, v22, v23, v24);
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
        sub_B0D840((BattleServantConfConponent_o *)this, 0LL, v8, v9, v10, v11, v12, v13);
        ++v27;
        this = p_monitor;
        if ( v27 >= (int)deck->max_length )
          return v15;
      }
LABEL_23:
      v30 = sub_B0D9A8(this);
      sub_B0D948(v30, 0LL);
    }
LABEL_24:
    sub_B0D97C(this);
  }
  return v15;
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
  UserDeckEntity_o *result; // x0
  __int64 v14; // x10

  if ( (byte_4215BAA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&UserDeckEntity_TypeInfo, v8);
    byte_4215BAA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserDeckEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     list,
                                     v12,
                                     (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (UserDeckEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == UserDeckEntity_TypeInfo
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
    sub_B0D97C(list);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  int32_t v19; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x24
  __int64 v21; // x10
  int32_t addCount; // w28
  int32_t size; // w21
  unsigned int *p_size; // x22
  BalanceConfig_c *v25; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x8
  int32_t DeckMax; // t1
  int32_t *v29; // x9
  unsigned int v30; // w8
  UserDeckEntity_array *v31; // x20
  __int64 v32; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x21
  signed int v34; // w24
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  char *v42; // x0
  __int64 v44; // x0
  __int64 v45; // x0

  if ( (byte_4215BAB & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v11);
    sub_B0D8A4(&UserDeckEntity___TypeInfo, v12);
    sub_B0D8A4(&UserDeckEntity_TypeInfo, v13);
    byte_4215BAB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserDeckEntity__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v19,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v21 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[v21 - 1] == UserDeckEntity_TypeInfo
          && list->fields._syncRoot == (Il2CppObject *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BalanceConfig_TypeInfo;
          addCount = v20->fields.addCount;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BalanceConfig_TypeInfo;
          }
          if ( addCount <= SHIDWORD(list[5].fields._syncRoot[9].klass) )
          {
            if ( !v18 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              v20,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserDeckEntity__Add__);
          }
        }
      }
      if ( ++v19 >= Count )
        goto LABEL_18;
    }
LABEL_39:
    sub_B0D97C(list);
  }
LABEL_18:
  if ( !v18 )
    goto LABEL_39;
  p_size = (unsigned int *)&v18->fields._size;
  size = v18->fields._size;
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  static_fields = v25->static_fields;
  DeckMax = static_fields->DeckMax;
  p_DeckMax = &static_fields->DeckMax;
  v29 = &v18->fields._size;
  if ( size >= DeckMax )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v29 = p_DeckMax;
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v29 = &BalanceConfig_TypeInfo->static_fields->DeckMax;
      }
    }
    else
    {
      v29 = p_DeckMax;
    }
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B0D8BC(
                                                                                       UserDeckEntity___TypeInfo,
                                                                                       (unsigned int)*v29);
  v30 = *p_size;
  v31 = (UserDeckEntity_array *)list;
  if ( (int)*p_size >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( v30 <= (unsigned int)v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v33 = v18->fields._items->m_Items[v32];
      if ( !v33 || !v31 )
        break;
      v34 = v33->fields.addCount;
      if ( v34 <= (signed int)v31->max_length )
      {
        v35 = sub_B0D964(v33, v31->obj.klass->_1.element_class);
        if ( !v35 )
        {
          v45 = sub_B0D99C(0LL);
          sub_B0D948(v45, 0LL);
        }
        if ( v34 - 1 >= v31->max_length )
        {
          v44 = sub_B0D9A8(v35);
          sub_B0D948(v44, 0LL);
        }
        v42 = (char *)v31 + 8 * v34 - 8;
        *((_QWORD *)v42 + 4) = v33;
        sub_B0D840((BattleServantConfConponent_o *)(v42 + 32), (System_Int32_array **)v33, v36, v37, v38, v39, v40, v41);
      }
      v30 = *p_size;
      if ( (int)++v32 >= (int)*p_size )
        return v31;
    }
    goto LABEL_39;
  }
  return v31;
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
  System_Collections_Generic_List_long__o *v20; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  int32_t v24; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x27
  __int64 v27; // x10
  int32_t klass; // w20
  BalanceConfig_c *v29; // x0
  UserEventDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v31; // x4
  System_Int64_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int64_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4215BAD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, svtIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&UserDeckEntity_TypeInfo, v15);
    byte_4215BAD = 1;
  }
  equipCollectList = 0LL;
  svtCollectList = 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v18, v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v20;
  v23 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v21, v22);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  equipCollectList = v23;
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v24,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = Item;
        v27 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          klass = (int32_t)Item[2].klass;
          v29 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v29 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v29->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v26[3].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v20, v23, 0LL);
          }
        }
      }
      if ( ++v24 >= Count )
        goto LABEL_18;
    }
LABEL_26:
    sub_B0D97C(list);
  }
LABEL_18:
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)list,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  UserEventDeckMaster__getEventPartyList_26732332(
    MasterData_WarQuestSelectionMaster,
    &svtCollectList,
    &equipCollectList,
    (int64_t)list,
    v31);
  if ( !v20 )
    goto LABEL_26;
  v32 = System_Collections_Generic_List_long___ToArray(
          v20,
          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v32;
  sub_B0D840((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
  if ( !v23 )
    goto LABEL_26;
  v39 = System_Collections_Generic_List_long___ToArray(
          v23,
          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v39;
  sub_B0D840((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
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
  System_Collections_Generic_List_long__o *v17; // x25
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_long__o *v20; // x23
  int32_t v21; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x27
  __int64 v23; // x10
  int klass; // w20
  System_Int64_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int64_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4215BAC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, svtIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&UserDeckEntity_TypeInfo, v12);
    byte_4215BAC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v18, v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v21,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = list;
        v23 = *(&UserDeckEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[v23 - 1] == UserDeckEntity_TypeInfo
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
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v22[1].fields.items;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v17, v20, 0LL);
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_18;
    }
LABEL_21:
    sub_B0D97C(list);
  }
LABEL_18:
  if ( !v17 )
    goto LABEL_21;
  v25 = System_Collections_Generic_List_long___ToArray(
          v17,
          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v25;
  sub_B0D840((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
  if ( !v20 )
    goto LABEL_21;
  v32 = System_Collections_Generic_List_long___ToArray(
          v20,
          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v32;
  sub_B0D840((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
}