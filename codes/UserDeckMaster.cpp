void __fastcall UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__, method, v2);
    byte_4B16E04 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    29,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
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

  DeckList = (UserServantEntity_o *)UserDeckMaster__getDeckList(this, userId, (const MethodInfo *)isCheckHeroine);
  if ( !DeckList )
LABEL_19:
    sub_1BCAA3C(DeckList, v6);
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
    sub_1BCAA44(DeckList, v6);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeck(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v3; // x19
  UserServantEntity_array *result; // x0
  const MethodInfo *v5; // x1
  UserServantEntity_array *v6; // x20
  const MethodInfo *v7; // x3
  signed int max_length; // w8
  int v9; // w9

  v3 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4B16E0B & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1BCA7E0(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method,
                                 v2);
    byte_4B16E0B = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !result
    || (v6 = result,
        (result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                               v3,
                                               (int64_t)result->m_Items[20],
                                               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v5)) == 0LL )
  {
    sub_1BCAA3C(result, v5);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v3, (int64_t)v6->bounds, 0, v7);
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1BCAA44(result, v5);
    if ( result->m_Items[v9] )
      break;
    if ( max_length == ++v9 )
      return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v3, (int64_t)v6->bounds, 0, v7);
  }
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeckIsTerminal(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v3; // x19
  UserServantEntity_array *result; // x0
  UserServantEntity_array *v5; // x20
  const MethodInfo *v6; // x1
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v11; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  v3 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4B16E0D & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1BCA7E0(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method,
                                 v2);
    byte_4B16E0D = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( result )
  {
    v5 = result;
    result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                          v3,
                                          (int64_t)result->m_Items[20],
                                          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    if ( result )
    {
      UserServantList = (UserDeckMaster_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v6);
      cnt = 0;
      result = UserDeckMaster__NullBacktrackingDeck(
                 UserServantList,
                 (UserServantEntity_array *)UserServantList,
                 0,
                 &cnt,
                 v8);
      if ( !cnt )
      {
        ServantListFromAllDeck = (UserDeckMaster_o *)UserDeckMaster__GetServantListFromAllDeck(
                                                       (UserDeckMaster_o *)v3,
                                                       (int64_t)v5->bounds,
                                                       0,
                                                       v9);
        return UserDeckMaster__NullBacktrackingDeck(
                 ServantListFromAllDeck,
                 (UserServantEntity_array *)ServantListFromAllDeck,
                 0,
                 &cnt,
                 v11);
      }
    }
  }
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v3; // x19
  void *SelfUserGame; // x0
  const MethodInfo *v5; // x1
  _QWORD *v6; // x20
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v8; // x4
  UserServantEntity_array *result; // x0
  const MethodInfo *v10; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v12; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  v3 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4B16E0C & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1BCA7E0(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method,
                                 v2);
    byte_4B16E0C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !SelfUserGame
    || (v6 = SelfUserGame,
        (SelfUserGame = DataMasterBase_object__object__long___GetEntity(
                          v3,
                          *((_QWORD *)SelfUserGame + 24),
                          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
  }
  UserServantList = (UserDeckMaster_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)SelfUserGame, v5);
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
                                                   (UserDeckMaster_o *)v3,
                                                   v6[2],
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  bool v15; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x23
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v19; // x0
  int32_t klass; // w28

  if ( (byte_4B16E09 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userSvtId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&UserDeckEntity_TypeInfo, v9, v10);
    byte_4B16E09 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v14,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_22;
      v17 = Item;
      methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserDeckEntity_TypeInfo )
      {
        goto LABEL_22;
      }
      v19 = BalanceConfig_TypeInfo;
      klass = (int32_t)v17[2].klass;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userSvtId);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( klass > v19->static_fields->DeckMax )
        goto LABEL_22;
      list = (System_Collections_ObjectModel_Collection_T__o *)v17[3].klass;
      if ( !list )
        break;
      if ( !DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
      {
LABEL_22:
        v15 = ++v14 < v13;
        if ( v13 != v14 )
          continue;
      }
      return v15;
    }
LABEL_19:
    sub_1BCAA3C(list, userSvtId);
  }
  return 0;
}


bool __fastcall UserDeckMaster__IsEquip_40786220(
        UserDeckMaster_o *this,
        int64_t userSvtId,
        int32_t *partyIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  bool v17; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v19; // x24
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v21; // x0
  int32_t klass; // w29
  int32_t v23; // w8
  bool result; // w0

  if ( (byte_4B16E0A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userSvtId, partyIndex);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&UserDeckEntity_TypeInfo, v11, v12);
    byte_4B16E0A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1BCAA3C(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    v17 = 0;
LABEL_18:
    v23 = -1;
  }
  else
  {
    v15 = Count;
    v16 = 0;
    v17 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_21;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v16,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = Item;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo )
        {
          v21 = BalanceConfig_TypeInfo;
          klass = (int32_t)v19[2].klass;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userSvtId);
            v21 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v21->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v19[3].klass;
            if ( !list )
              goto LABEL_21;
            if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
              break;
          }
        }
      }
      v17 = ++v16 < v15;
      if ( v15 == v16 )
        goto LABEL_18;
    }
    v23 = (int32_t)v19[2].klass;
  }
  result = v17;
  *partyIndex = v23;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x8
  UserServantEntity_array *v15; // x20
  unsigned __int64 v16; // x24
  UserServantEntity_o *v17; // x23
  __int64 v18; // x26
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppClass **v25; // x0
  int32_t v26; // w9
  __int64 v27; // x21
  UserDeckMaster_o *p_monitor; // x22
  __int64 v30; // x0

  if ( (byte_4B16E0E & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1BCA7E0(&UserServantEntity___TypeInfo, deck, isCheckHeroine);
    byte_4B16E0E = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_1BCA888(UserServantEntity___TypeInfo, deck->max_length);
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
      v17 = deck->m_Items[v16];
      if ( v17 )
      {
        if ( !isCheckHeroine
          || (this = (UserDeckMaster_o *)UserServantEntity__IsHeroine(deck->m_Items[v16], 0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          if ( !v15 )
            goto LABEL_24;
          v18 = *cnt;
          this = (UserDeckMaster_o *)sub_1BCA91C(v17, v15->obj.klass->_1.element_class);
          if ( !this )
          {
            v30 = sub_1BCAA60(0LL);
            sub_1BCA908(v30, 0LL);
          }
          if ( (unsigned int)v18 >= v15->max_length )
            goto LABEL_23;
          v25 = &v15->obj.klass + v18;
          v25[4] = (Il2CppClass *)v17;
          sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v17, v19, v20, v21, v22, v23, v24);
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
        sub_1BCA784((PartyOrganizationUtility_o *)this, 0LL, v8, v9, v10, v11, v12, v13);
        ++v27;
        this = p_monitor;
        if ( v27 >= (int)deck->max_length )
          return v15;
      }
LABEL_23:
      sub_1BCAA44(this, deck);
    }
LABEL_24:
    sub_1BCAA3C(this, deck);
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
UserDeckEntity_o *__fastcall UserDeckMaster__getDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        int32_t deckNo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  UserDeckEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16E05 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      *(_QWORD *)&deckNo);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&UserDeckEntity_TypeInfo, v9, v10);
    byte_4B16E05 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserDeckEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v14,
                                     (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && result->fields.userId == userId
          && result->fields.deckNo == deckNo )
        {
          return result;
        }
      }
      if ( v13 == ++v14 )
        return 0LL;
    }
LABEL_15:
    sub_1BCAA3C(list, userId);
  }
  return 0LL;
}


UserDeckEntity_array *__fastcall UserDeckMaster__getDeckList(
        UserDeckMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x19
  int32_t v29; // w23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x24
  __int64 methodPtr_low; // x10
  int v38; // w29
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w20
  int32_t *p_size; // x23
  BalanceConfig_c *v45; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x9
  UserDeckEntity_array *v48; // x20
  int32_t v49; // w21
  signed int monitor; // w25
  int64_t v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  char *v60; // x0
  __int64 v62; // x0

  if ( (byte_4B16E06 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&UserDeckEntity___TypeInfo, v19, v20);
    sub_1BCA7E0(&UserDeckEntity_TypeInfo, v21, v22);
    byte_4B16E06 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserDeckEntity__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( Count >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v29,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v36 = (int64_t)list;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          v38 = *(_DWORD *)(v36 + 32);
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userId);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( v38 <= SHIDWORD(list[7].fields.items[9].klass) )
          {
            if ( !v28 )
              break;
            items = v28->fields._items;
            v40 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
            ++v28->fields._version;
            if ( !items )
              break;
            size = v28->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v28,
                (Il2CppObject *)v36,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v28->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v36;
              sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v36, v30, v31, v32, v33, v34, v35);
            }
          }
        }
      }
      if ( Count == ++v29 )
        goto LABEL_20;
    }
LABEL_37:
    sub_1BCAA3C(list, userId);
  }
LABEL_20:
  if ( !v28 )
    goto LABEL_37;
  p_size = &v28->fields._size;
  v43 = v28->fields._size;
  v45 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userId);
    v45 = BalanceConfig_TypeInfo;
  }
  static_fields = v45->static_fields;
  p_DeckMax = &v28->fields._size;
  if ( v43 >= static_fields->DeckMax )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, userId);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_DeckMax = &static_fields->DeckMax;
  }
  v48 = (UserDeckEntity_array *)sub_1BCA888(UserDeckEntity___TypeInfo, (unsigned int)*p_DeckMax);
  if ( *p_size >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v28,
                                                                 v49,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
      if ( !list || !v48 )
        break;
      monitor = (signed int)list[1].monitor;
      v51 = (int64_t)list;
      if ( monitor <= (signed int)v48->max_length )
      {
        v52 = sub_1BCA91C(list, v48->obj.klass->_1.element_class);
        if ( !v52 )
        {
          v62 = sub_1BCAA60(0LL);
          sub_1BCA908(v62, 0LL);
        }
        if ( monitor - 1 >= v48->max_length )
          sub_1BCAA44(v52, v53);
        v60 = (char *)v48 + 8 * monitor - 8;
        *((_QWORD *)v60 + 4) = v51;
        sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 32), v51, v54, v55, v56, v57, v58, v59);
      }
      if ( ++v49 >= *p_size )
        return v48;
    }
    goto LABEL_37;
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_long__o *v34; // x23
  int32_t v35; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v37; // x27
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v39; // x0
  int32_t klass; // w19
  __int64 v41; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v43; // x4
  System_Int64_array *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Int64_array *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-70h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B16E08 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, svtIdList, equipIdList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&UserDeckEntity_TypeInfo, v23, v24);
    byte_4B16E08 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v30 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v27,
                                                     v28,
                                                     v29);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v30;
  v34 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v31,
                                                     v32,
                                                     v33);
  System_Collections_Generic_List_long____ctor(
    v34,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  equipCollectList = v34;
  if ( Count >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v35,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v37 = Item;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          v39 = BalanceConfig_TypeInfo;
          klass = (int32_t)v37[2].klass;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, svtIdList);
            v39 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v39->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v37[3].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v30, v34, 0LL);
          }
        }
      }
      if ( Count == ++v35 )
        goto LABEL_17;
    }
LABEL_24:
    sub_1BCAA3C(list, svtIdList);
  }
LABEL_17:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_24;
  UserEventDeckMaster__getEventPartyList_40785300(
    (UserEventDeckMaster_o *)MasterData_object,
    &svtCollectList,
    &equipCollectList,
    (int64_t)list,
    v43);
  if ( !v30 )
    goto LABEL_24;
  v44 = System_Collections_Generic_List_long___ToArray(
          v30,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v44;
  sub_1BCA784((PartyOrganizationUtility_o *)svtIdList, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  if ( !v34 )
    goto LABEL_24;
  v51 = System_Collections_Generic_List_long___ToArray(
          v34,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v51;
  sub_1BCA784((PartyOrganizationUtility_o *)equipIdList, (int64_t)v51, v52, v53, v54, v55, v56, v57);
}


void __fastcall UserDeckMaster__getPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_long__o *v24; // x24
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_long__o *v28; // x23
  int32_t v29; // w26
  System_Collections_ObjectModel_Collection_T__o *v30; // x27
  __int64 methodPtr_low; // x10
  int monitor; // w19
  System_Int64_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Int64_array *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B16E07 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, svtIdList, equipIdList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v15, v16);
    sub_1BCA7E0(&UserDeckEntity_TypeInfo, v17, v18);
    byte_4B16E07 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v21,
                                                     v22,
                                                     v23);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v28 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v25,
                                                     v26,
                                                     v27);
  System_Collections_Generic_List_long____ctor(
    v28,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v29,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v30 = list;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v30[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, svtIdList);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[9].klass) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v30[2].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v24, v28, 0LL);
          }
        }
      }
      if ( Count == ++v29 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1BCAA3C(list, svtIdList);
  }
LABEL_17:
  if ( !v24 )
    goto LABEL_20;
  v33 = System_Collections_Generic_List_long___ToArray(
          v24,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)svtIdList, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  if ( !v28 )
    goto LABEL_20;
  v40 = System_Collections_Generic_List_long___ToArray(
          v28,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)equipIdList, (int64_t)v40, v41, v42, v43, v44, v45, v46);
}