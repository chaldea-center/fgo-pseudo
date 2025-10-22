void UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57AFA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
    byte_4C57AFA = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    29,
    (const MethodInfo_33B3190 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *UserDeckMaster__GetServantListFromAllDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        bool isCheckHeroine,
        const MethodInfo *method)
{
  UserServantEntity_o *DeckList; // x0
  const MethodInfo *v6; // x1
  int hiddenValue; // w8
  UserServantEntity_o *v8; // x20
  unsigned int v9; // w22
  int64_t v10; // x8
  UserServantEntity_array *v11; // x21
  unsigned __int64 v12; // x23

  DeckList = (UserServantEntity_o *)UserDeckMaster__getDeckList(this, userId, (const MethodInfo *)isCheckHeroine);
  if ( !DeckList )
LABEL_19:
    sub_1C3E7C0(DeckList, v6);
  hiddenValue = DeckList->fields.id.fields.hiddenValue;
  v8 = DeckList;
  if ( hiddenValue >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= hiddenValue )
        goto LABEL_18;
      DeckList = (UserServantEntity_o *)*(&v8->fields.id.fields.fakeValue + (int)v9);
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
      hiddenValue = v8->fields.id.fields.hiddenValue;
      if ( (int)++v9 >= hiddenValue )
        return v11;
    }
    v12 = 0;
    while ( v12 < (unsigned int)v10 )
    {
      DeckList = v11->m_Items[v12];
      if ( DeckList )
      {
        if ( !isCheckHeroine )
          return v11;
        DeckList = (UserServantEntity_o *)UserServantEntity__IsHeroine(DeckList, 0);
        if ( ((unsigned __int8)DeckList & 1) == 0 )
          return v11;
      }
      LODWORD(v10) = v11->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_14;
    }
LABEL_18:
    sub_1C3E7C8(DeckList, v6);
  }
  return 0;
}


UserServantEntity_array *UserDeckMaster__GetUserServantListFromDeck(UserDeckMaster_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v2; // x19
  UserServantEntity_array *result; // x0
  const MethodInfo *v4; // x1
  UserServantEntity_array *v5; // x20
  const MethodInfo *v6; // x3
  int max_length; // w8
  int v8; // w9

  v2 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4C57B01 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1C3E564(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_4C57B01 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !result
    || (v5 = result,
        (result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                               v2,
                                               (int64_t)result->m_Items[21],
                                               (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v4)) == 0 )
  {
    sub_1C3E7C0(result, v4);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v2, (int64_t)v5->bounds, 0, v6);
  v8 = 0;
  while ( 1 )
  {
    if ( max_length == v8 )
      sub_1C3E7C8(result, v4);
    if ( result->m_Items[v8] )
      break;
    if ( max_length == ++v8 )
      return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v2, (int64_t)v5->bounds, 0, v6);
  }
  return result;
}


UserServantEntity_array *UserDeckMaster__GetUserServantListFromDeckIsTerminal(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v2; // x19
  UserServantEntity_array *result; // x0
  UserServantEntity_array *v4; // x20
  const MethodInfo *v5; // x1
  UserDeckMaster_o *UserServantList; // x0
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x3
  UserDeckMaster_o *ServantListFromAllDeck; // x0
  const MethodInfo *v10; // x4
  int32_t cnt; // [xsp+Ch] [xbp-14h] BYREF

  v2 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4C57B03 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1C3E564(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_4C57B03 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( result )
  {
    v4 = result;
    result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                          v2,
                                          (int64_t)result->m_Items[21],
                                          (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
                                                       (UserDeckMaster_o *)v2,
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
  DataMasterBase_TMaster__TEntity__PKType__o *v2; // x19
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

  v2 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4C57B02 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1C3E564(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_4C57B02 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !SelfUserGame
    || (v5 = SelfUserGame,
        (SelfUserGame = DataMasterBase_object__object__long___GetEntity(
                          v2,
                          *((_QWORD *)SelfUserGame + 25),
                          (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0) )
  {
    sub_1C3E7C0(SelfUserGame, v4);
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
    ServantListFromAllDeck = (UserDeckMaster_o *)UserDeckMaster__GetServantListFromAllDeck(
                                                   (UserDeckMaster_o *)v2,
                                                   v5[2],
                                                   1,
                                                   v9);
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

  if ( (byte_4C57AFF & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    byte_4C57AFF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
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
               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( !Item )
        goto LABEL_20;
      v11 = Item;
      v12 = BalanceConfig_TypeInfo;
      klass = (int32_t)v11[2].klass;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
    sub_1C3E7C0(list, userSvtId);
  }
  return 0;
}


bool UserDeckMaster__IsEquip_43066184(
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

  if ( (byte_4C57B00 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    byte_4C57B00 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1C3E7C0(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
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
               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( Item )
      {
        v13 = Item;
        v14 = BalanceConfig_TypeInfo;
        klass = (int32_t)v13[2].klass;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  il2cpp_array_size_t max_length; // x8
  UserDeckMaster_o *v11; // x20
  unsigned __int64 v12; // x24
  UserServantEntity_o *v13; // x23
  __int64 v14; // x26
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UserDeckMaster_c **v17; // x0
  int32_t v18; // w9
  __int64 v19; // x21
  UserDeckMaster_o *p_monitor; // x22
  __int64 v22; // x0

  if ( (byte_4C57B04 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1C3E564(&UserServantEntity___TypeInfo);
    byte_4C57B04 = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_1C3E60C(UserServantEntity___TypeInfo, LODWORD(deck->max_length));
  *cnt = 0;
  max_length = deck->max_length;
  v11 = this;
  if ( (int)max_length < 1 )
  {
    v18 = 0;
  }
  else
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        goto LABEL_23;
      v13 = deck->m_Items[v12];
      if ( v13 )
      {
        if ( !isCheckHeroine
          || (this = (UserDeckMaster_o *)UserServantEntity__IsHeroine(deck->m_Items[v12], 0),
              ((unsigned __int8)this & 1) == 0) )
        {
          if ( !v11 )
            goto LABEL_24;
          v14 = *cnt;
          this = (UserDeckMaster_o *)sub_1C3E6A0(v13, v11->klass->_1.element_class);
          if ( !this )
          {
            v22 = sub_1C3E7E4(0);
            sub_1C3E68C(v22, 0);
          }
          if ( (unsigned int)v14 >= LODWORD(v11->fields._MasterName_k__BackingField) )
            goto LABEL_23;
          v17 = &v11->klass + v14;
          v17[4] = (UserDeckMaster_c *)v13;
          sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v15, v16);
          ++*cnt;
        }
      }
      LODWORD(max_length) = deck->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)max_length );
    v18 = *cnt;
  }
  if ( v18 < (int)max_length )
  {
    if ( v11 )
    {
      v19 = v18;
      this = (UserDeckMaster_o *)(&v11->fields.revision + 2 * v18);
      while ( (unsigned int)v19 < LODWORD(v11->fields._MasterName_k__BackingField) )
      {
        this->klass = 0;
        p_monitor = (UserDeckMaster_o *)&this->monitor;
        sub_1C3E508((CGThumbnailListItem_o *)this, 0, v8, v9);
        ++v19;
        this = p_monitor;
        if ( v19 >= SLODWORD(deck->max_length) )
          return (UserServantEntity_array *)v11;
      }
LABEL_23:
      sub_1C3E7C8(this, deck);
    }
LABEL_24:
    sub_1C3E7C0(this, deck);
  }
  return (UserServantEntity_array *)v11;
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

  if ( (byte_4C57AFB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    byte_4C57AFB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
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
                                     (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( result && result->fields.userId == userId && result->fields.deckNo == deckNo )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_1C3E7C0(list, userId);
  }
  return 0;
}


UserDeckEntity_array *UserDeckMaster__getDeckList(UserDeckMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x24
  int monitor; // w28
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  int32_t v17; // w20
  int32_t *p_size; // x23
  BalanceConfig_c *v19; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x9
  UserDeckEntity_array *v22; // x20
  int32_t v23; // w21
  int v24; // w25
  System_Collections_ObjectModel_Collection_T__o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  char *v30; // x0
  __int64 v32; // x0

  if ( (byte_4C57AFC & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_1C3E564(&UserDeckEntity___TypeInfo);
    byte_4C57AFC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
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
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v11[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[10].klass) )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v14 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v11,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v16[4] = (Il2CppClass *)v11;
              sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v11, v9, v10);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_35:
    sub_1C3E7C0(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_35;
  p_size = &v7->fields._size;
  v17 = v7->fields._size;
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  static_fields = v19->static_fields;
  p_DeckMax = &v7->fields._size;
  if ( v17 >= static_fields->DeckMax )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_DeckMax = &static_fields->DeckMax;
  }
  v22 = (UserDeckEntity_array *)sub_1C3E60C(UserDeckEntity___TypeInfo, (unsigned int)*p_DeckMax);
  if ( *p_size >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v7,
                                                                 v23,
                                                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
      if ( !list || !v22 )
        break;
      v24 = (int)list[1].monitor;
      v25 = list;
      if ( v24 <= SLODWORD(v22->max_length) )
      {
        v26 = sub_1C3E6A0(list, v22->obj.klass->_1.element_class);
        if ( !v26 )
        {
          v32 = sub_1C3E7E4(0);
          sub_1C3E68C(v32, 0);
        }
        if ( (unsigned int)(v24 - 1) >= LODWORD(v22->max_length) )
          sub_1C3E7C8(v26, v27);
        v30 = (char *)v22 + 8 * v24 - 8;
        *((_QWORD *)v30 + 4) = v25;
        sub_1C3E508((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v25, v28, v29);
      }
      if ( ++v23 >= *p_size )
        return v22;
    }
    goto LABEL_35;
  }
  return v22;
}


void UserDeckMaster__getEventPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v10; // x22
  System_Collections_Generic_List_long__o *v11; // x21
  int32_t v12; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x27
  BalanceConfig_c *v15; // x0
  int32_t klass; // w19
  const MethodInfo *v17; // x4
  Il2CppObject *MasterData_object; // x23
  System_Int64_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Int64_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-70h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C57AFE & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C57AFE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  v10 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v10;
  v11 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  equipCollectList = v11;
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( Item )
      {
        v14 = Item;
        if ( Item[1].monitor == (void *)userId )
        {
          v15 = BalanceConfig_TypeInfo;
          klass = (int32_t)v14[2].klass;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v15 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v15->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v14[3].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v10, v11, 0);
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_15;
    }
LABEL_26:
    sub_1C3E7C0(list, svtIdList);
  }
LABEL_15:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_26;
  UserEventDeckMaster__getEventPartyList_43065404(
    (UserEventDeckMaster_o *)MasterData_object,
    &svtCollectList,
    &equipCollectList,
    (int64_t)list[7].fields.items[4].klass,
    v17);
  if ( !v10 )
    goto LABEL_26;
  v19 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v19;
  sub_1C3E508((CGThumbnailListItem_o *)svtIdList, (int32_t)v19, v20, v21);
  if ( !v11 )
    goto LABEL_26;
  v22 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v22;
  sub_1C3E508((CGThumbnailListItem_o *)equipIdList, (int32_t)v22, v23, v24);
}


void UserDeckMaster__getPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v10; // x24
  System_Collections_Generic_List_long__o *v11; // x23
  int32_t v12; // w26
  System_Collections_ObjectModel_Collection_T__o *v13; // x27
  int monitor; // w19
  System_Int64_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Int64_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C57AFD & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C57AFD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  v10 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
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
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( list )
      {
        v13 = list;
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v13[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
    sub_1C3E7C0(list, svtIdList);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_18;
  v15 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v15;
  sub_1C3E508((CGThumbnailListItem_o *)svtIdList, (int32_t)v15, v16, v17);
  if ( !v11 )
    goto LABEL_18;
  v18 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v18;
  sub_1C3E508((CGThumbnailListItem_o *)equipIdList, (int32_t)v18, v19, v20);
}