void __fastcall UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF0CF & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__, method);
    byte_49FF0CF = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    29,
    (const MethodInfo_30D62EC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
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
    sub_1B64ACC(DeckList, v6);
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
    sub_1B64AD4(DeckList, v6);
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
  const MethodInfo *v6; // x3
  signed int max_length; // w8
  int v8; // w9

  v2 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_49FF0D6 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1B64870(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method);
    byte_49FF0D6 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !result
    || (v5 = result,
        (result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                               v2,
                                               (int64_t)result->m_Items[20],
                                               (const MethodInfo_30D632C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v4)) == 0LL )
  {
    sub_1B64ACC(result, v4);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v2, (int64_t)v5->bounds, 0, v6);
  v8 = 0;
  while ( 1 )
  {
    if ( max_length == v8 )
      sub_1B64AD4(result, v4);
    if ( result->m_Items[v8] )
      break;
    if ( max_length == ++v8 )
      return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v2, (int64_t)v5->bounds, 0, v6);
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
  if ( (byte_49FF0D8 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1B64870(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method);
    byte_49FF0D8 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( result )
  {
    v4 = result;
    result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                          v2,
                                          (int64_t)result->m_Items[20],
                                          (const MethodInfo_30D632C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
  if ( (byte_49FF0D7 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1B64870(
                                 &Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__,
                                 method);
    byte_49FF0D7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !SelfUserGame
    || (v5 = SelfUserGame,
        (SelfUserGame = DataMasterBase_object__object__long___GetEntity(
                          v2,
                          *((_QWORD *)SelfUserGame + 24),
                          (const MethodInfo_30D632C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL) )
  {
    sub_1B64ACC(SelfUserGame, v4);
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
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  bool v12; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x23
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v16; // x0
  int32_t klass; // w28

  if ( (byte_49FF0D4 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, userSvtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B64870(&UserDeckEntity_TypeInfo, v7);
    byte_49FF0D4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_22;
      v14 = Item;
      methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserDeckEntity_TypeInfo )
      {
        goto LABEL_22;
      }
      v16 = BalanceConfig_TypeInfo;
      klass = (int32_t)v14[2].klass;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      if ( klass > v16->static_fields->DeckMax )
        goto LABEL_22;
      list = (System_Collections_ObjectModel_Collection_T__o *)v14[3].klass;
      if ( !list )
        break;
      if ( !DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
      {
LABEL_22:
        v12 = ++v11 < v10;
        if ( v10 != v11 )
          continue;
      }
      return v12;
    }
LABEL_19:
    sub_1B64ACC(list, userSvtId);
  }
  return 0;
}


bool __fastcall UserDeckMaster__IsEquip_39728964(
        UserDeckMaster_o *this,
        int64_t userSvtId,
        int32_t *partyIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  bool v14; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x24
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v18; // x0
  int32_t klass; // w29
  int32_t v20; // w8
  bool result; // w0

  if ( (byte_49FF0D5 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, userSvtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B64870(&UserDeckEntity_TypeInfo, v9);
    byte_49FF0D5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1B64ACC(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    v14 = 0;
LABEL_18:
    v20 = -1;
  }
  else
  {
    v12 = Count;
    v13 = 0;
    v14 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_21;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v13,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = Item;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo )
        {
          v18 = BalanceConfig_TypeInfo;
          klass = (int32_t)v16[2].klass;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v18 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v18->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v16[3].klass;
            if ( !list )
              goto LABEL_21;
            if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
              break;
          }
        }
      }
      v14 = ++v13 < v12;
      if ( v12 == v13 )
        goto LABEL_18;
    }
    v20 = (int32_t)v16[2].klass;
  }
  result = v14;
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x8
  UserServantEntity_array *v11; // x20
  unsigned __int64 v12; // x24
  UserServantEntity_o *v13; // x23
  __int64 v14; // x26
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppClass **v17; // x0
  int32_t v18; // w9
  __int64 v19; // x21
  UserDeckMaster_o *p_monitor; // x22
  __int64 v22; // x0

  if ( (byte_49FF0D9 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1B64870(&UserServantEntity___TypeInfo, deck);
    byte_49FF0D9 = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_1B64918(UserServantEntity___TypeInfo, deck->max_length);
  *cnt = 0;
  v10 = *(_QWORD *)&deck->max_length;
  v11 = (UserServantEntity_array *)this;
  if ( (int)v10 < 1 )
  {
    v18 = 0;
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
          this = (UserDeckMaster_o *)sub_1B649AC(v13, v11->obj.klass->_1.element_class);
          if ( !this )
          {
            v22 = sub_1B64AF0(0LL);
            sub_1B64998(v22, 0LL);
          }
          if ( (unsigned int)v14 >= v11->max_length )
            goto LABEL_23;
          v17 = &v11->obj.klass + v14;
          v17[4] = (Il2CppClass *)v13;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v13, v15, v16);
          ++*cnt;
        }
      }
      LODWORD(v10) = deck->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v10 );
    v18 = *cnt;
  }
  if ( v18 < (int)v10 )
  {
    if ( v11 )
    {
      v19 = v18;
      this = (UserDeckMaster_o *)&v11->m_Items[v18];
      while ( (unsigned int)v19 < v11->max_length )
      {
        this->klass = 0LL;
        p_monitor = (UserDeckMaster_o *)&this->monitor;
        sub_1B64814((ServantStatusBattleListViewItem_o *)this, 0, v8, v9);
        ++v19;
        this = p_monitor;
        if ( v19 >= (int)deck->max_length )
          return v11;
      }
LABEL_23:
      sub_1B64AD4(this, deck);
    }
LABEL_24:
    sub_1B64ACC(this, deck);
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  UserDeckEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FF0D0 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&UserDeckEntity_TypeInfo, v8);
    byte_49FF0D0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserDeckEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v12,
                                     (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_15:
    sub_1B64ACC(list, userId);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w23
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_ObjectModel_Collection_T__o *v20; // x24
  __int64 methodPtr_low; // x10
  int monitor; // w29
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  int32_t v27; // w20
  int32_t *p_size; // x23
  BalanceConfig_c *v29; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x9
  UserDeckEntity_array *v32; // x20
  int32_t v33; // w21
  signed int v34; // w25
  System_Collections_ObjectModel_Collection_T__o *v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  char *v40; // x0
  __int64 v42; // x0

  if ( (byte_49FF0D1 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, userId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserDeckEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__, v10);
    sub_1B64870(&System_Collections_Generic_List_UserDeckEntity__TypeInfo, v11);
    sub_1B64870(&UserDeckEntity___TypeInfo, v12);
    sub_1B64870(&UserDeckEntity_TypeInfo, v13);
    byte_49FF0D1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
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
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = list;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v20[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[9].klass) )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v24 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)v20,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v20;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_20;
    }
LABEL_37:
    sub_1B64ACC(list, userId);
  }
LABEL_20:
  if ( !v16 )
    goto LABEL_37;
  p_size = &v16->fields._size;
  v27 = v16->fields._size;
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  static_fields = v29->static_fields;
  p_DeckMax = &v16->fields._size;
  if ( v27 >= static_fields->DeckMax )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_DeckMax = &static_fields->DeckMax;
  }
  v32 = (UserDeckEntity_array *)sub_1B64918(UserDeckEntity___TypeInfo, (unsigned int)*p_DeckMax);
  if ( *p_size >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v16,
                                                                 v33,
                                                                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
      if ( !list || !v32 )
        break;
      v34 = (signed int)list[1].monitor;
      v35 = list;
      if ( v34 <= (signed int)v32->max_length )
      {
        v36 = sub_1B649AC(list, v32->obj.klass->_1.element_class);
        if ( !v36 )
        {
          v42 = sub_1B64AF0(0LL);
          sub_1B64998(v42, 0LL);
        }
        if ( v34 - 1 >= v32->max_length )
          sub_1B64AD4(v36, v37);
        v40 = (char *)v32 + 8 * v34 - 8;
        *((_QWORD *)v40 + 4) = v35;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)v35, v38, v39);
      }
      if ( ++v33 >= *p_size )
        return v32;
    }
    goto LABEL_37;
  }
  return v32;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v18; // x24
  System_Collections_Generic_List_long__o *v19; // x23
  int32_t v20; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v22; // x27
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v24; // x0
  int32_t klass; // w19
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v27; // x4
  System_Int64_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Int64_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-70h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FF0D3 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, svtIdList);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B64870(&NetworkManager_TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64870(&UserDeckEntity_TypeInfo, v15);
    byte_49FF0D3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v18;
  v19 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
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
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = Item;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          v24 = BalanceConfig_TypeInfo;
          klass = (int32_t)v22[2].klass;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v24 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v24->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v22[3].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v18, v19, 0LL);
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_17;
    }
LABEL_24:
    sub_1B64ACC(list, svtIdList);
  }
LABEL_17:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_24;
  UserEventDeckMaster__getEventPartyList_39728044(
    (UserEventDeckMaster_o *)MasterData_object,
    &svtCollectList,
    &equipCollectList,
    (int64_t)list,
    v27);
  if ( !v18 )
    goto LABEL_24;
  v28 = System_Collections_Generic_List_long___ToArray(
          v18,
          (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v28;
  sub_1B64814((ServantStatusBattleListViewItem_o *)svtIdList, (int32_t)v28, v29, v30);
  if ( !v19 )
    goto LABEL_24;
  v31 = System_Collections_Generic_List_long___ToArray(
          v19,
          (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v31;
  sub_1B64814((ServantStatusBattleListViewItem_o *)equipIdList, (int32_t)v31, v32, v33);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v15; // x24
  System_Collections_Generic_List_long__o *v16; // x23
  int32_t v17; // w26
  System_Collections_ObjectModel_Collection_T__o *v18; // x27
  __int64 methodPtr_low; // x10
  int monitor; // w19
  System_Int64_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Int64_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49FF0D2 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, svtIdList);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_long__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B64870(&UserDeckEntity_TypeInfo, v12);
    byte_49FF0D2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
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
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v18[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[9].klass) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v18[2].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v15, v16, 0LL);
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1B64ACC(list, svtIdList);
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_20;
  v21 = System_Collections_Generic_List_long___ToArray(
          v15,
          (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v21;
  sub_1B64814((ServantStatusBattleListViewItem_o *)svtIdList, (int32_t)v21, v22, v23);
  if ( !v16 )
    goto LABEL_20;
  v24 = System_Collections_Generic_List_long___ToArray(
          v16,
          (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v24;
  sub_1B64814((ServantStatusBattleListViewItem_o *)equipIdList, (int32_t)v24, v25, v26);
}