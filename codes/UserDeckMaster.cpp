void __fastcall UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D251 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__, method);
    byte_4B1D251 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    29,
    (const MethodInfo_32C8038 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
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
  __int64 v7; // x2
  int hiddenValue; // w8
  UserServantEntity_array *v9; // x20
  unsigned int v10; // w22
  int64_t v11; // x8
  UserServantEntity_array *v12; // x21
  unsigned __int64 v13; // x23

  DeckList = (UserServantEntity_o *)UserDeckMaster__getDeckList(this, userId, (const MethodInfo *)isCheckHeroine);
  if ( !DeckList )
LABEL_19:
    sub_1BCB254(DeckList, v6);
  hiddenValue = DeckList->fields.id.fields.hiddenValue;
  v9 = (UserServantEntity_array *)DeckList;
  if ( hiddenValue >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= hiddenValue )
        goto LABEL_18;
      DeckList = v9->m_Items[v10];
      if ( !DeckList )
        goto LABEL_19;
      DeckList = (UserServantEntity_o *)UserDeckEntity__GetUserServantList((UserDeckEntity_o *)DeckList, v6);
      if ( !DeckList )
        goto LABEL_19;
      v11 = DeckList->fields.id.fields.hiddenValue;
      v12 = (UserServantEntity_array *)DeckList;
      if ( (int)v11 >= 1 )
        break;
LABEL_14:
      hiddenValue = v9->max_length;
      if ( (int)++v10 >= hiddenValue )
        return v12;
    }
    v13 = 0LL;
    while ( v13 < (unsigned int)v11 )
    {
      DeckList = v12->m_Items[v13];
      if ( DeckList )
      {
        if ( !isCheckHeroine )
          return v12;
        DeckList = (UserServantEntity_o *)UserServantEntity__IsHeroine(DeckList, 0LL);
        if ( ((unsigned __int8)DeckList & 1) == 0 )
          return v12;
      }
      LODWORD(v11) = v12->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_14;
    }
LABEL_18:
    sub_1BCB25C(DeckList, v6, v7);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeck(
        UserDeckMaster_o *this,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v2; // x19
  UserServantEntity_array *result; // x0
  const MethodInfo *v4; // x1
  UserServantEntity_array *v5; // x20
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  signed int max_length; // w8
  int v9; // w9

  v2 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4B1D258 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1BCAFF8(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method);
    byte_4B1D258 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !result
    || (v5 = result,
        (result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                               v2,
                                               (int64_t)result->m_Items[21],
                                               (const MethodInfo_32CA35C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v4)) == 0LL )
  {
    sub_1BCB254(result, v4);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v2, (int64_t)v5->bounds, 0, v7);
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1BCB25C(result, v4, v6);
    if ( result->m_Items[v9] )
      break;
    if ( max_length == ++v9 )
      return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v2, (int64_t)v5->bounds, 0, v7);
  }
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeckIsTerminal(
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
  if ( (byte_4B1D25A & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1BCAFF8(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method);
    byte_4B1D25A = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( result )
  {
    v4 = result;
    result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                          v2,
                                          (int64_t)result->m_Items[21],
                                          (const MethodInfo_32CA35C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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


UserServantEntity_array *__fastcall UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
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
  if ( (byte_4B1D259 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1BCAFF8(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method);
    byte_4B1D259 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !SelfUserGame
    || (v5 = SelfUserGame,
        (SelfUserGame = DataMasterBase_object__object__long___GetEntity(
                          v2,
                          *((_QWORD *)SelfUserGame + 25),
                          (const MethodInfo_32CA35C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL) )
  {
    sub_1BCB254(SelfUserGame, v4);
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


bool __fastcall UserDeckMaster__IsEquip(UserDeckMaster_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  bool v11; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v13; // x23
  BalanceConfig_c *v14; // x0
  int32_t klass; // w27

  if ( (byte_4B1D256 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userSvtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__, v6);
    byte_4B1D256 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( !Item )
        goto LABEL_20;
      v13 = Item;
      v14 = BalanceConfig_TypeInfo;
      klass = (int32_t)v13[2].klass;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      if ( klass > v14->static_fields->DeckMax )
        goto LABEL_20;
      list = (System_Collections_ObjectModel_Collection_T__o *)v13[3].klass;
      if ( !list )
        break;
      if ( !DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
      {
LABEL_20:
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_17:
    sub_1BCB254(list, userSvtId);
  }
  return 0;
}


bool __fastcall UserDeckMaster__IsEquip_42152772(
        UserDeckMaster_o *this,
        int64_t userSvtId,
        int32_t *partyIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  bool v13; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x24
  BalanceConfig_c *v16; // x0
  int32_t klass; // w28
  int32_t v18; // w8
  bool result; // w0

  if ( (byte_4B1D257 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userSvtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__, v8);
    byte_4B1D257 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1BCB254(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  if ( Count < 1 )
  {
    v13 = 0;
LABEL_16:
    v18 = -1;
  }
  else
  {
    v11 = Count;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        v16 = BalanceConfig_TypeInfo;
        klass = (int32_t)v15[2].klass;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v16 = BalanceConfig_TypeInfo;
        }
        if ( klass <= v16->static_fields->DeckMax )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)v15[3].klass;
          if ( !list )
            goto LABEL_19;
          if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
            break;
        }
      }
      v13 = ++v12 < v11;
      if ( v11 == v12 )
        goto LABEL_16;
    }
    v18 = (int32_t)v15[2].klass;
  }
  result = v13;
  *partyIndex = v18;
  return result;
}


UserServantEntity_array *__fastcall UserDeckMaster__NullBacktrackingDeck(
        UserDeckMaster_o *this,
        UserServantEntity_array *deck,
        bool isCheckHeroine,
        int32_t *cnt,
        const MethodInfo *method)
{
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  UserServantEntity_array *v11; // x20
  unsigned __int64 v12; // x24
  UserServantEntity_o *v13; // x23
  __int64 v14; // x26
  const MethodInfo *v15; // x3
  Il2CppClass **v16; // x0
  int32_t v17; // w9
  __int64 v18; // x21
  UserDeckMaster_o *p_monitor; // x22
  __int64 v21; // x0

  if ( (byte_4B1D25B & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1BCAFF8(&UserServantEntity___TypeInfo, deck);
    byte_4B1D25B = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_1BCB0A0(UserServantEntity___TypeInfo, deck->max_length);
  *cnt = 0;
  v10 = *(_QWORD *)&deck->max_length;
  v11 = (UserServantEntity_array *)this;
  if ( (int)v10 < 1 )
  {
    v17 = 0;
  }
  else
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v10 )
        goto LABEL_23;
      v13 = deck->m_Items[v12];
      if ( v13 )
      {
        if ( !isCheckHeroine
          || (this = (UserDeckMaster_o *)UserServantEntity__IsHeroine(deck->m_Items[v12], 0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          if ( !v11 )
            goto LABEL_24;
          v14 = *cnt;
          this = (UserDeckMaster_o *)sub_1BCB134(v13, v11->obj.klass->_1.element_class);
          if ( !this )
          {
            v21 = sub_1BCB278(0LL);
            sub_1BCB120(v21, 0LL);
          }
          if ( (unsigned int)v14 >= v11->max_length )
            goto LABEL_23;
          v16 = &v11->obj.klass + v14;
          v16[4] = (Il2CppClass *)v13;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v13, v8, v15);
          ++*cnt;
        }
      }
      LODWORD(v10) = deck->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v10 );
    v17 = *cnt;
  }
  if ( v17 < (int)v10 )
  {
    if ( v11 )
    {
      v18 = v17;
      this = (UserDeckMaster_o *)&v11->m_Items[v17];
      while ( (unsigned int)v18 < v11->max_length )
      {
        this->klass = 0LL;
        p_monitor = (UserDeckMaster_o *)&this->monitor;
        sub_1BCAF9C((CGThumbnailListItem_o *)this, 0, v8, v9);
        ++v18;
        this = p_monitor;
        if ( v18 >= (int)deck->max_length )
          return v11;
      }
LABEL_23:
      sub_1BCB25C(this, deck, v8);
    }
LABEL_24:
    sub_1BCB254(this, deck);
  }
  return v11;
}


UserDeckEntity_o *__fastcall UserDeckMaster__getDeck(
        UserDeckMaster_o *this,
        int64_t userId,
        int32_t deckNo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  UserDeckEntity_o *result; // x0

  if ( (byte_4B1D252 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__, userId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__, v7);
    byte_4B1D252 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserDeckEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v11,
                                     (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( result && result->fields.userId == userId && result->fields.deckNo == deckNo )
        return result;
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_13:
    sub_1BCB254(list, userId);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v15; // x19
  int32_t v16; // w23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_ObjectModel_Collection_T__o *v19; // x24
  int monitor; // w28
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  int32_t v25; // w20
  int32_t *p_size; // x23
  BalanceConfig_c *v27; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x9
  UserDeckEntity_array *v30; // x20
  int32_t v31; // w21
  signed int v32; // w25
  System_Collections_ObjectModel_Collection_T__o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  const MethodInfo *v37; // x3
  char *v38; // x0
  __int64 v40; // x0

  if ( (byte_4B1D253 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v11);
    sub_1BCAFF8(&UserDeckEntity___TypeInfo, v12);
    byte_4B1D253 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( list )
      {
        v19 = list;
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v19[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[10].klass) )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v22 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                (Il2CppObject *)v19,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v19;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
            }
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_18;
    }
LABEL_35:
    sub_1BCB254(list, userId);
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_35;
  p_size = &v15->fields._size;
  v25 = v15->fields._size;
  v27 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  static_fields = v27->static_fields;
  p_DeckMax = &v15->fields._size;
  if ( v25 >= static_fields->DeckMax )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_DeckMax = &static_fields->DeckMax;
  }
  v30 = (UserDeckEntity_array *)sub_1BCB0A0(UserDeckEntity___TypeInfo, (unsigned int)*p_DeckMax);
  if ( *p_size >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v15,
                                                                 v31,
                                                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
      if ( !list || !v30 )
        break;
      v32 = (signed int)list[1].monitor;
      v33 = list;
      if ( v32 <= (signed int)v30->max_length )
      {
        v34 = sub_1BCB134(list, v30->obj.klass->_1.element_class);
        if ( !v34 )
        {
          v40 = sub_1BCB278(0LL);
          sub_1BCB120(v40, 0LL);
        }
        if ( v32 - 1 >= v30->max_length )
          sub_1BCB25C(v34, v35, v36);
        v38 = (char *)v30 + 8 * v32 - 8;
        *((_QWORD *)v38 + 4) = v33;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 32), (int32_t)v33, v36, v37);
      }
      if ( ++v31 >= *p_size )
        return v30;
    }
    goto LABEL_35;
  }
  return v30;
}


void __fastcall UserDeckMaster__getEventPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v18; // x22
  System_Collections_Generic_List_long__o *v19; // x21
  int32_t v20; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v22; // x27
  BalanceConfig_c *v23; // x0
  int32_t klass; // w19
  const MethodInfo *v25; // x4
  Il2CppObject *MasterData_object; // x23
  System_Int64_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Int64_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-70h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1D255 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, svtIdList);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1D255 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v18;
  v19 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  equipCollectList = v19;
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v20,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( Item )
      {
        v22 = Item;
        if ( Item[1].monitor == (void *)userId )
        {
          v23 = BalanceConfig_TypeInfo;
          klass = (int32_t)v22[2].klass;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v23 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v23->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v22[3].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v18, v19, 0LL);
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_15;
    }
LABEL_26:
    sub_1BCB254(list, svtIdList);
  }
LABEL_15:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, svtIdList);
    byte_4B165D1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_26;
  UserEventDeckMaster__getEventPartyList_42151992(
    (UserEventDeckMaster_o *)MasterData_object,
    &svtCollectList,
    &equipCollectList,
    (int64_t)list[7].fields.items[4].klass,
    v25);
  if ( !v18 )
    goto LABEL_26;
  v27 = System_Collections_Generic_List_long___ToArray(
          v18,
          (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v27;
  sub_1BCAF9C((CGThumbnailListItem_o *)svtIdList, (int32_t)v27, v28, v29);
  if ( !v19 )
    goto LABEL_26;
  v30 = System_Collections_Generic_List_long___ToArray(
          v19,
          (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v30;
  sub_1BCAF9C((CGThumbnailListItem_o *)equipIdList, (int32_t)v30, v31, v32);
}


void __fastcall UserDeckMaster__getPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v15; // x24
  System_Collections_Generic_List_long__o *v16; // x23
  int32_t v17; // w26
  System_Collections_ObjectModel_Collection_T__o *v18; // x27
  int monitor; // w19
  System_Int64_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Int64_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B1D254 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, svtIdList);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v12);
    byte_4B1D254 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Count__);
  v15 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserDeckEntity__get_Item__);
      if ( list )
      {
        v18 = list;
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v18[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[10].klass) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v18[2].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v15, v16, 0LL);
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_15;
    }
LABEL_18:
    sub_1BCB254(list, svtIdList);
  }
LABEL_15:
  if ( !v15 )
    goto LABEL_18;
  v20 = System_Collections_Generic_List_long___ToArray(
          v15,
          (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)svtIdList, (int32_t)v20, v21, v22);
  if ( !v16 )
    goto LABEL_18;
  v23 = System_Collections_Generic_List_long___ToArray(
          v16,
          (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v23;
  sub_1BCAF9C((CGThumbnailListItem_o *)equipIdList, (int32_t)v23, v24, v25);
}