void __fastcall UserDeckMaster___ctor(UserDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD4F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
    byte_4A5BD4F = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    29,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long___ctor__);
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
    sub_1B8880C(DeckList, v6);
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
    sub_1B88814(DeckList, v6);
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
  if ( (byte_4A5BD56 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1B885B0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_4A5BD56 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !result
    || (v5 = result,
        (result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                               v2,
                                               (int64_t)result->m_Items[20],
                                               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL)
    || (result = UserDeckEntity__GetUserServantList((UserDeckEntity_o *)result, v4)) == 0LL )
  {
    sub_1B8880C(result, v4);
  }
  max_length = result->max_length;
  if ( max_length < 1 )
    return UserDeckMaster__GetServantListFromAllDeck((UserDeckMaster_o *)v2, (int64_t)v5->bounds, 0, v6);
  v8 = 0;
  while ( 1 )
  {
    if ( max_length == v8 )
      sub_1B88814(result, v4);
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
  if ( (byte_4A5BD58 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1B885B0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_4A5BD58 = 1;
  }
  result = (UserServantEntity_array *)UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( result )
  {
    v4 = result;
    result = (UserServantEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                          v2,
                                          (int64_t)result->m_Items[20],
                                          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
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
  if ( (byte_4A5BD57 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1B885B0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    byte_4A5BD57 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( !SelfUserGame
    || (v5 = SelfUserGame,
        (SelfUserGame = DataMasterBase_object__object__long___GetEntity(
                          v2,
                          *((_QWORD *)SelfUserGame + 24),
                          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__)) == 0LL) )
  {
    sub_1B8880C(SelfUserGame, v4);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x23
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v13; // x0
  int32_t klass; // w28

  if ( (byte_4A5BD54 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserDeckEntity_TypeInfo);
    byte_4A5BD54 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_22;
      v11 = Item;
      methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserDeckEntity_TypeInfo )
      {
        goto LABEL_22;
      }
      v13 = BalanceConfig_TypeInfo;
      klass = (int32_t)v11[2].klass;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( klass > v13->static_fields->DeckMax )
        goto LABEL_22;
      list = (System_Collections_ObjectModel_Collection_T__o *)v11[3].klass;
      if ( !list )
        break;
      if ( !DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
      {
LABEL_22:
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_19:
    sub_1B8880C(list, userSvtId);
  }
  return 0;
}


bool __fastcall UserDeckMaster__IsEquip_40056452(
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
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v15; // x0
  int32_t klass; // w29
  int32_t v17; // w8
  bool result; // w0

  if ( (byte_4A5BD55 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserDeckEntity_TypeInfo);
    byte_4A5BD55 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1B8880C(list, userSvtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    v11 = 0;
LABEL_18:
    v17 = -1;
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
        goto LABEL_21;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = Item;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo )
        {
          v15 = BalanceConfig_TypeInfo;
          klass = (int32_t)v13[2].klass;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v15 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v15->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v13[3].klass;
            if ( !list )
              goto LABEL_21;
            if ( DeckServant__IsEquip((DeckServant_o *)list, userSvtId, 0LL) )
              break;
          }
        }
      }
      v11 = ++v10 < v9;
      if ( v9 == v10 )
        goto LABEL_18;
    }
    v17 = (int32_t)v13[2].klass;
  }
  result = v11;
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

  if ( (byte_4A5BD59 & 1) == 0 )
  {
    this = (UserDeckMaster_o *)sub_1B885B0(&UserServantEntity___TypeInfo);
    byte_4A5BD59 = 1;
  }
  if ( !deck )
    goto LABEL_24;
  this = (UserDeckMaster_o *)sub_1B88658(UserServantEntity___TypeInfo, deck->max_length);
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
          this = (UserDeckMaster_o *)sub_1B886EC(v13, v11->obj.klass->_1.element_class);
          if ( !this )
          {
            v22 = sub_1B88830(0LL);
            sub_1B886D8(v22, 0LL);
          }
          if ( (unsigned int)v14 >= v11->max_length )
            goto LABEL_23;
          v17 = &v11->obj.klass + v14;
          v17[4] = (Il2CppClass *)v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v13, v15, v16);
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v8, v9);
        ++v19;
        this = p_monitor;
        if ( v19 >= (int)deck->max_length )
          return v11;
      }
LABEL_23:
      sub_1B88814(this, deck);
    }
LABEL_24:
    sub_1B8880C(this, deck);
  }
  return v11;
}


UserDeckEntity_o *__fastcall UserDeckMaster__getDeck(
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BD50 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserDeckEntity_TypeInfo);
    byte_4A5BD50 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_15:
    sub_1B8880C(list, userId);
  }
  return 0LL;
}


UserDeckEntity_array *__fastcall UserDeckMaster__getDeckList(
        UserDeckMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_ObjectModel_Collection_T__o *v11; // x24
  __int64 methodPtr_low; // x10
  int monitor; // w29
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  int32_t v18; // w20
  int32_t *p_size; // x23
  BalanceConfig_c *v20; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMax; // x9
  UserDeckEntity_array *v23; // x20
  int32_t v24; // w21
  signed int v25; // w25
  System_Collections_ObjectModel_Collection_T__o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  char *v31; // x0
  __int64 v33; // x0

  if ( (byte_4A5BD51 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserDeckEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserDeckEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserDeckEntity__TypeInfo);
    sub_1B885B0(&UserDeckEntity___TypeInfo);
    sub_1B885B0(&UserDeckEntity_TypeInfo);
    byte_4A5BD51 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserDeckEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserDeckEntity___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = list;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v11[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[9].klass) )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v15 = Method_System_Collections_Generic_List_UserDeckEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v11,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v11;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v11, v9, v10);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_20;
    }
LABEL_37:
    sub_1B8880C(list, userId);
  }
LABEL_20:
  if ( !v7 )
    goto LABEL_37;
  p_size = &v7->fields._size;
  v18 = v7->fields._size;
  v20 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  static_fields = v20->static_fields;
  p_DeckMax = &v7->fields._size;
  if ( v18 >= static_fields->DeckMax )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_DeckMax = &static_fields->DeckMax;
  }
  v23 = (UserDeckEntity_array *)sub_1B88658(UserDeckEntity___TypeInfo, (unsigned int)*p_DeckMax);
  if ( *p_size >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                 v7,
                                                                 v24,
                                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserDeckEntity__get_Item__);
      if ( !list || !v23 )
        break;
      v25 = (signed int)list[1].monitor;
      v26 = list;
      if ( v25 <= (signed int)v23->max_length )
      {
        v27 = sub_1B886EC(list, v23->obj.klass->_1.element_class);
        if ( !v27 )
        {
          v33 = sub_1B88830(0LL);
          sub_1B886D8(v33, 0LL);
        }
        if ( v25 - 1 >= v23->max_length )
          sub_1B88814(v27, v28);
        v31 = (char *)v23 + 8 * v25 - 8;
        *((_QWORD *)v31 + 4) = v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v26, v29, v30);
      }
      if ( ++v24 >= *p_size )
        return v23;
    }
    goto LABEL_37;
  }
  return v23;
}


void __fastcall UserDeckMaster__getEventPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v9; // x24
  System_Collections_Generic_List_long__o *v10; // x23
  int32_t v11; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v13; // x27
  __int64 methodPtr_low; // x10
  BalanceConfig_c *v15; // x0
  int32_t klass; // w19
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v18; // x4
  System_Int64_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Int64_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+10h] [xbp-70h] BYREF
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5BD53 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserDeckEntity_TypeInfo);
    byte_4A5BD53 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  svtCollectList = v9;
  v10 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  equipCollectList = v10;
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = Item;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && Item[1].monitor == (void *)userId )
        {
          v15 = BalanceConfig_TypeInfo;
          klass = (int32_t)v13[2].klass;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v15 = BalanceConfig_TypeInfo;
          }
          if ( klass <= v15->static_fields->DeckMax )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v13[3].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v9, v10, 0LL);
          }
        }
      }
      if ( Count == ++v11 )
        goto LABEL_17;
    }
LABEL_24:
    sub_1B8880C(list, svtIdList);
  }
LABEL_17:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_24;
  UserEventDeckMaster__getEventPartyList_40055532(
    (UserEventDeckMaster_o *)MasterData_object,
    &svtCollectList,
    &equipCollectList,
    (int64_t)list,
    v18);
  if ( !v9 )
    goto LABEL_24;
  v19 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)svtIdList, (int32_t)v19, v20, v21);
  if ( !v10 )
    goto LABEL_24;
  v22 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)equipIdList, (int32_t)v22, v23, v24);
}


void __fastcall UserDeckMaster__getPartyList(
        UserDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v9; // x24
  System_Collections_Generic_List_long__o *v10; // x23
  int32_t v11; // w26
  System_Collections_ObjectModel_Collection_T__o *v12; // x27
  __int64 methodPtr_low; // x10
  int monitor; // w19
  System_Int64_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Int64_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5BD52 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&UserDeckEntity_TypeInfo);
    byte_4A5BD52 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v10 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(UserDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserDeckEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserDeckEntity_TypeInfo
          && list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          monitor = (int)v12[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            list = (System_Collections_ObjectModel_Collection_T__o *)BalanceConfig_TypeInfo;
          }
          if ( monitor <= SHIDWORD(list[7].fields.items[9].klass) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)v12[2].klass;
            if ( !list )
              break;
            DeckServant__CollectUserSvtId((DeckServant_o *)list, v9, v10, 0LL);
          }
        }
      }
      if ( Count == ++v11 )
        goto LABEL_17;
    }
LABEL_20:
    sub_1B8880C(list, svtIdList);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_20;
  v15 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  *svtIdList = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)svtIdList, (int32_t)v15, v16, v17);
  if ( !v10 )
    goto LABEL_20;
  v18 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  *equipIdList = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)equipIdList, (int32_t)v18, v19, v20);
}