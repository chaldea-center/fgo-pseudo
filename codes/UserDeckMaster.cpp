void UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593948B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
    byte_593948B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    29,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *UserDeckMaster__GetServantListFromAllDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        bool isCheckHeroine,
        const MethodInfo *method)
{
  UserDeckEntity_o *DeckList; // x0
  const MethodInfo *v6; // x1
  unsigned __int64 userId_low; // x8
  UserDeckEntity_o *v8; // x20
  unsigned __int64 v9; // x22
  int64_t v10; // x8
  UserDeckEntity_o *v11; // x21
  unsigned __int64 v12; // x23

  DeckList = (UserDeckEntity_o *)UserDeckMaster__getDeckList(this, userId, (const MethodInfo *)isCheckHeroine);
  if ( !DeckList )
LABEL_19:
    sub_21FFECC(DeckList, v6);
  userId_low = LODWORD(DeckList->fields.userId);
  v8 = DeckList;
  if ( (int)userId_low >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= userId_low )
        goto LABEL_18;
      DeckList = (UserDeckEntity_o *)*((_QWORD *)&v8->fields.deckNo + v9);
      if ( !DeckList )
        goto LABEL_19;
      DeckList = (UserDeckEntity_o *)UserDeckEntity__GetUserServantList(DeckList, v6);
      if ( !DeckList )
        goto LABEL_19;
      v10 = DeckList->fields.userId;
      v11 = DeckList;
      if ( (int)v10 >= 1 )
        break;
LABEL_14:
      userId_low = LODWORD(v8->fields.userId);
      if ( (int)++v9 >= (int)userId_low )
        return (UserServantEntity_array *)v11;
    }
    v12 = 0;
    while ( v12 < (unsigned int)v10 )
    {
      DeckList = (UserDeckEntity_o *)*((_QWORD *)&v11->fields.deckNo + v12);
      if ( DeckList )
      {
        if ( !isCheckHeroine )
          return (UserServantEntity_array *)v11;
        DeckList = (UserDeckEntity_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)DeckList, 0);
        if ( ((unsigned __int8)DeckList & 1) == 0 )
          return (UserServantEntity_array *)v11;
      }
      LODWORD(v10) = v11->fields.userId;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_14;
    }
LABEL_18:
    sub_21FFED4(DeckList);
  }
  return 0;
}


UserServantEntity_array *UserDeckMaster__GetUserServantListFromDeck(UserDeckMaster_o *this, const MethodInfo *method)
{
  UserServantEntity_array *result; // x0
  const MethodInfo *v4; // x1
  UserServantEntity_array *v5; // x20
  const MethodInfo *v6; // x3
  int max_length; // w8
  int v8; // w10

  if ( (byte_5939491 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_5939491 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0);
  if ( !result
    || (v5 = result,
        (result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               (int64_t)result->m_Items[21],
                                               (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v4)) == 0 )
  {
    sub_21FFECC(result, v4);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck(this, (int64_t)v5->bounds, 0, v6);
  v8 = 0;
  while ( 1 )
  {
    if ( max_length == v8 )
      sub_21FFED4(result);
    if ( result->m_Items[v8] )
      break;
    if ( (max_length & ~(max_length >> 31)) == ++v8 )
      return UserDeckMaster__GetServantListFromAllDeck(this, (int64_t)v5->bounds, 0, v6);
  }
  return result;
}


UserServantEntity_array *UserDeckMaster__GetUserServantListFromDeckIsTerminal(
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

  if ( (byte_5939493 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_5939493 = 1;
  }
  cnt = 0;
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame(0);
  if ( result )
  {
    v4 = result;
    result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          (int64_t)result->m_Items[21],
                                          (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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


UserServantEntity_array *UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
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

  if ( (byte_5939492 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_5939492 = 1;
  }
  cnt = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v5 = SelfUserGame,
        (SelfUserGame = DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          *((_QWORD *)SelfUserGame + 25),
                          (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0) )
  {
    sub_21FFECC(SelfUserGame, v4);
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


bool UserDeckMaster__IsEquip(UserDeckMaster_o *this, int64_t userSvtId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x23
  BalanceConfig_c *v12; // x0
  int32_t klass; // w27

  if ( (byte_593948F & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    byte_593948F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( !Item )
        goto LABEL_20;
      v11 = Item;
      v12 = BalanceConfig_TypeInfo;
      klass = (int32_t)v11[2].klass;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userSvtId);
        v12 = BalanceConfig_TypeInfo;
      }
      if ( klass > v12->static_fields->DeckMax )
        goto LABEL_20;
      list = (System_Collections_ObjectModel_Collection_T__o *)v11[3].klass;
      if ( !list )
        break;
      if ( !DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0) )
      {
LABEL_20:
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_17:
    sub_21FFECC(list, userSvtId);
  }
  return 0;
}


bool UserDeckMaster__IsEquip_49967488(
        UserDeckMaster_o *this,
        int64_t userSvtId,
        int32_t *partyIndex,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  bool v11; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v13; // x24
  BalanceConfig_c *v14; // x0
  int32_t klass; // w28
  int32_t v16; // w8
  bool result; // w0

  if ( (byte_5939490 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    byte_5939490 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_21FFECC(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  if ( Count < 1 )
  {
    v11 = 0;
LABEL_16:
    v16 = -1;
  }
  else
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( Item )
      {
        v13 = Item;
        v14 = BalanceConfig_TypeInfo;
        klass = (int32_t)v13[2].klass;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userSvtId);
          v14 = BalanceConfig_TypeInfo;
        }
        if ( klass <= v14->static_fields->DeckMax )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)v13[3].klass;
          if ( !list )
            goto LABEL_19;
          if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0) )
            break;
        }
      }
      v11 = ++v10 < v9;
      if ( v9 == v10 )
        goto LABEL_16;
    }
    v16 = (int32_t)v13[2].klass;
  }
  result = v11;
  *partyIndex = v16;
  return result;
}


UserServantEntity_array *UserDeckMaster__NullBacktrackingDeck(
        UserDeckMaster_o *this,
        UserServantEntity_array *deck,
        bool isCheckHeroine,
        int32_t *cnt,
        const MethodInfo *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  il2cpp_array_size_t max_length; // x8
  UserDeckMaster_o *v15; // x20
  unsigned __int64 v16; // x24
  UserServantEntity_o *v17; // x23
  __int64 v18; // x27
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w9
  __int64 v27; // x21
  UserDeckMaster_o *p_monitor; // x22
  __int64 v30; // x0

  if ( (byte_5939494 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_21FFC50(&UserServantEntity___TypeInfo);
    byte_5939494 = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_21FFD10(UserServantEntity___TypeInfo, LODWORD(deck->max_length));
  max_length = deck->max_length;
  v15 = this;
  *cnt = 0;
  if ( (int)max_length < 1 )
  {
    v26 = 0;
  }
  else
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        goto LABEL_23;
      v17 = deck->m_Items[v16];
      if ( v17 )
      {
        if ( !isCheckHeroine
          || (this = (UserDeckMaster_o *)UserServantEntity__IsHeroine(deck->m_Items[v16], 0),
              ((unsigned __int8)this & 1) == 0) )
        {
          if ( !v15 )
            goto LABEL_24;
          v18 = *cnt;
          this = (UserDeckMaster_o *)sub_21FFDA4(v17, v15->klass->_1.element_class);
          if ( !this )
          {
            v30 = sub_21FFEF0(0, v19);
            sub_21FFD90(v30, 0);
          }
          if ( (unsigned int)v18 >= LODWORD(v15->fields._MasterName_k__BackingField) )
            goto LABEL_23;
          *((_QWORD *)&v15->fields.revision + v18) = v17;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(&v15->fields.revision + 2 * v18),
            (int32_t)v17,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          ++*cnt;
        }
      }
      LODWORD(max_length) = deck->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)max_length );
    v26 = *cnt;
  }
  if ( v26 < (int)max_length )
  {
    if ( v15 )
    {
      v27 = v26;
      this = (UserDeckMaster_o *)(&v15->fields.revision + 2 * v26);
      while ( (unsigned int)v27 < LODWORD(v15->fields._MasterName_k__BackingField) )
      {
        this->klass = 0;
        p_monitor = (UserDeckMaster_o *)&this->monitor;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)this, 0, v8, v9, v10, v11, v12, v13);
        ++v27;
        this = p_monitor;
        if ( v27 >= SLODWORD(deck->max_length) )
          return (UserServantEntity_array *)v15;
      }
LABEL_23:
      sub_21FFED4(this);
    }
LABEL_24:
    sub_21FFECC(this, deck);
  }
  return (UserServantEntity_array *)v15;
}


UserDeckEntity_o *UserDeckMaster__getDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        int32_t deckNo,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  UserDeckEntity_o *result; // x0

  if ( (byte_593948C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    byte_593948C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserDeckEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v10,
                                     (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( result && result->fields.userId == userId && result->fields.deckNo == deckNo )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_21FFECC(list, userId);
  }
  return 0;
}


UserDeckEntity_array *UserDeckMaster__getDeckList(UserDeckMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_ObjectModel_Collection_T__o *v15; // x24
  int monitor; // w28
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  BalanceConfig_c *v21; // x0
  int32_t v22; // w21
  int32_t *p_size; // x23
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x9
  UserDeckEntity_array *v26; // x20
  int32_t v27; // w21
  int v28; // w26
  UserDeckEntity_o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int v38; // w8
  __int64 v40; // x0

  if ( (byte_593948D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_21FFC50(&UserDeckEntity___TypeInfo);
    byte_593948D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( list )
      {
        v15 = list;
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v15[1].monitor;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userId);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[10].klass) )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v18 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v15,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v15;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v15, v9, v10, v11, v12, v13, v14);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_35:
    sub_21FFECC(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_35;
  v21 = BalanceConfig_TypeInfo;
  p_size = &v7->fields._size;
  v22 = v7->fields._size;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userId);
    v21 = BalanceConfig_TypeInfo;
  }
  static_fields = v21->static_fields;
  p_DeckMax = &v7->fields._size;
  if ( v22 >= static_fields->DeckMax )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, userId);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_DeckMax = &static_fields->DeckMax;
  }
  v26 = (UserDeckEntity_array *)sub_21FFD10(UserDeckEntity___TypeInfo, (unsigned int)*p_DeckMax);
  if ( *p_size >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v7,
                                                                 v27,
                                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
      if ( !list || !v26 )
        break;
      v28 = (int)list[1].monitor;
      v29 = (UserDeckEntity_o *)list;
      if ( v28 <= SLODWORD(v26->max_length) )
      {
        v30 = sub_21FFDA4(list, v26->obj.klass->_1.element_class);
        if ( !v30 )
        {
          v40 = sub_21FFEF0(0, v31);
          sub_21FFD90(v40, 0);
        }
        v38 = v28 - 1;
        if ( (unsigned int)(v28 - 1) >= LODWORD(v26->max_length) )
          sub_21FFED4(v30);
        v26->m_Items[v38] = v29;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->m_Items[v38], (int32_t)v29, v32, v33, v34, v35, v36, v37);
      }
      if ( ++v27 >= *p_size )
        return v26;
    }
    goto LABEL_35;
  }
  return v26;
}


void UserDeckMaster__getPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_long__o *v10; // x25
  System_Collections_Generic_List_long__o *v11; // x23
  int32_t v12; // w26
  System_Collections_ObjectModel_Collection_T__o *v13; // x27
  int monitor; // w19
  System_Int64_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Int64_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_593948E & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    byte_593948E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  v10 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( list )
      {
        v13 = list;
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v13[1].monitor;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, svtIdList);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[10].klass) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v13[2].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v10, v11, 0);
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_15;
    }
LABEL_18:
    sub_21FFECC(list, svtIdList);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_18;
  v15 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)svtIdList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  if ( !v11 )
    goto LABEL_18;
  v22 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v22;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)equipIdList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
}