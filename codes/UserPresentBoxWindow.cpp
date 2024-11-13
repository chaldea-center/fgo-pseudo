void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_long__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B15008 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v9, v10);
    byte_4B15008 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.befCommandCodeList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserPresentBoxWindow__CallbackReceiveRequest(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *v4; // x19
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
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UserPresentBoxWindow_o *v26; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  int64_t m_CancellationTokenSource; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct PlayMakerFSM_o *v35; // x8
  int64_t fsm; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct PlayMakerFSM_o *v43; // x8
  int64_t fsmTemplate; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct PlayMakerFSM_o *v51; // x8
  int64_t v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct PlayMakerFSM_o *v59; // x8
  int64_t addEventHandlers; // x1
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Action_o *v64; // x20
  const MethodInfo *v65; // x2

  v4 = this;
  if ( (byte_4B14FE2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___, v5, v6);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v13, v14);
    this = (UserPresentBoxWindow_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v15, v16);
    byte_4B14FE2 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(v4, v17);
    return;
  }
  v19 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v19,
                                     (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_20;
  v26 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_20;
  m_CancellationTokenSource = (int64_t)myFsm->fields.m_CancellationTokenSource;
  v4->fields.getSvtList = (struct GetSvts_array *)m_CancellationTokenSource;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.getSvtList,
    m_CancellationTokenSource,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v35 = v26->fields.myFsm;
  if ( !v35 )
    goto LABEL_20;
  fsm = (int64_t)v35->fields.fsm;
  v4->fields.getCommandCodeList = (struct GetCommandCodes_array *)fsm;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.getCommandCodeList, fsm, v29, v30, v31, v32, v33, v34);
  if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v43 = v26->fields.myFsm;
  if ( !v43 )
    goto LABEL_20;
  v4->fields.presentOverflowType = v43->fields.m_CachedPtr;
  fsmTemplate = (int64_t)v43->fields.fsmTemplate;
  v4->fields.evPointRewardList = (struct UserPresentBoxWindow_evPointReward_array *)fsmTemplate;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.evPointRewardList, fsmTemplate, v37, v38, v39, v40, v41, v42);
  if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v51 = v26->fields.myFsm;
  if ( !v51 )
    goto LABEL_20;
  v52 = *(_QWORD *)&v51->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = (struct GetSvtCoin_array *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.getSvtCoins, v52, v45, v46, v47, v48, v49, v50);
  if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_1BCAA44(this, result);
  v59 = v26->fields.myFsm;
  if ( !v59 )
LABEL_20:
    sub_1BCAA3C(this, result);
  addEventHandlers = (int64_t)v59->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)addEventHandlers;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.overflowSvtCoinInfos,
    addEventHandlers,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v64 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v61, v62, v63);
  System_Action___ctor(v64, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v64, v65);
}


bool __fastcall UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  void *Filter_41507228; // x0
  ListViewSort_o **v19; // x8
  ListViewSort_o *v20; // x19
  __int64 v21; // x1
  UserPresentBoxMaster_c *v22; // x0
  bool v23; // w8
  bool result; // w0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v26; // w1

  if ( (byte_4B14FDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, servantMaster, itemMaster);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&UserPresentBoxMaster_TypeInfo, v14, v15);
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v16, v17);
    byte_4B14FDF = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, servantMaster);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, servantMaster, itemMaster);
    byte_4B1506C = 1;
  }
  Filter_41507228 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, servantMaster);
    Filter_41507228 = UserPresentListViewManager_TypeInfo;
  }
  v19 = (ListViewSort_o **)*((_QWORD *)Filter_41507228 + 23);
  v20 = *v19;
  if ( !*v19 )
    goto LABEL_52;
  Filter_41507228 = (void *)ListViewSort__GetFilter_41507228(*v19, 13, 0LL);
  if ( ((unsigned __int8)Filter_41507228 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_52;
LABEL_20:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_41507228 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, servantMaster);
          Filter_41507228 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_41507228 + 23) + 680LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( !*((_DWORD *)Filter_41507228 + 56) )
          {
            j_il2cpp_runtime_class_init_0(Filter_41507228, servantMaster);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_41507228 = (void *)System_Array__IndexOf_int_(
                                      PresentBoxFilterSvtEquipMaterial,
                                      userPresentBoxEntity->fields.objectId,
                                      (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)Filter_41507228 & 0x80000000) == 0 )
            return ListViewSort__GetFilter_41507228(v20, 4, 0LL);
        }
        if ( servantMaster )
        {
          Filter_41507228 = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_41507228 )
          {
            switch ( *((_DWORD *)Filter_41507228 + 21) )
            {
              case 1:
              case 0xC:
                goto LABEL_21;
              case 3:
                v26 = 1;
                return ListViewSort__GetFilter_41507228(v20, v26, 0LL);
              case 6:
                v26 = 3;
                return ListViewSort__GetFilter_41507228(v20, v26, 0LL);
              case 7:
                v26 = 2;
                return ListViewSort__GetFilter_41507228(v20, v26, 0LL);
              case 8:
                v26 = 4;
                return ListViewSort__GetFilter_41507228(v20, v26, 0LL);
              default:
                goto LABEL_39;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_41507228 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_41507228 )
          break;
        switch ( *((_DWORD *)Filter_41507228 + 12) )
        {
          case 2:
          case 0x11:
          case 0x14:
          case 0x24:
            v26 = 10;
            break;
          case 3:
          case 4:
            v26 = 6;
            break;
          case 5:
            v26 = 11;
            break;
          case 9:
            v26 = 8;
            break;
          case 0xA:
          case 0xB:
          case 0xC:
          case 0x19:
          case 0x1D:
            v26 = 7;
            break;
          case 0xE:
          case 0xF:
          case 0x12:
          case 0x13:
          case 0x1C:
            v26 = 12;
            break;
          case 0x18:
            v26 = 9;
            break;
          default:
            goto LABEL_39;
        }
        return ListViewSort__GetFilter_41507228(v20, v26, 0LL);
      case 6:
      case 7:
LABEL_21:
        v23 = ListViewSort__GetFilter_41507228(v20, 0, 0LL);
        result = 0;
        if ( !v23 )
          return result;
        return 1;
      case 0xB:
        v26 = 5;
        return ListViewSort__GetFilter_41507228(v20, v26, 0LL);
      default:
LABEL_39:
        v26 = 14;
        return ListViewSort__GetFilter_41507228(v20, v26, 0LL);
    }
LABEL_52:
    sub_1BCAA3C(Filter_41507228, servantMaster);
  }
  Filter_41507228 = UserPresentBoxMaster_TypeInfo;
  if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, servantMaster);
  if ( !userPresentBoxEntity )
    goto LABEL_52;
  if ( !UserPresentBoxEntity__IsEnableFlag(
          userPresentBoxEntity,
          UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
          0LL) )
  {
    v22 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, v21);
      v22 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_41507228 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v22->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_41507228 & 1) == 0 )
      goto LABEL_20;
  }
  return 1;
}


bool __fastcall UserPresentBoxWindow__CheckRarityFilter(
        UserPresentBoxWindow_o *this,
        ServantLimitMaster_o *servantLimitMaster,
        CommandCodeMaster_o *commandCodeMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        bool isActiveFilterCategory,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *Filter_41507228; // x0
  ListViewSort_o **v15; // x8
  ListViewSort_o *v16; // x19
  __int64 v17; // x1
  UserPresentBoxMaster_c *v18; // x0
  int32_t giftType; // w8
  _DWORD *v20; // x8
  bool Filter_41507276; // w8
  bool result; // w0
  int32_t v23; // w1

  if ( (byte_4B14FE0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__,
      servantLimitMaster,
      commandCodeMaster);
    sub_1BCA7E0(&UserPresentBoxMaster_TypeInfo, v10, v11);
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v12, v13);
    byte_4B14FE0 = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, servantLimitMaster);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, servantLimitMaster, commandCodeMaster);
    byte_4B1506C = 1;
  }
  Filter_41507228 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, servantLimitMaster);
    Filter_41507228 = UserPresentListViewManager_TypeInfo;
  }
  v15 = (ListViewSort_o **)*((_QWORD *)Filter_41507228 + 23);
  v16 = *v15;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v16 )
    goto LABEL_49;
  Filter_41507228 = (void *)ListViewSort__GetFilter_41507228(*v15, 13, 0LL);
  if ( ((unsigned __int8)Filter_41507228 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_49;
  }
  else
  {
LABEL_12:
    Filter_41507228 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, servantLimitMaster);
    if ( !userPresentBoxEntity )
      goto LABEL_49;
    if ( UserPresentBoxEntity__IsEnableFlag(
           userPresentBoxEntity,
           UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
           0LL) )
    {
      return 1;
    }
    v18 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, v17);
      v18 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_41507228 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v18->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_41507228 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( servantLimitMaster )
    {
      Filter_41507228 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0LL);
      if ( Filter_41507228 )
      {
        v20 = (char *)Filter_41507228 + 24;
        goto LABEL_30;
      }
      return 1;
    }
LABEL_49:
    sub_1BCAA3C(Filter_41507228, servantLimitMaster);
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_49;
  Filter_41507228 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_41507228 )
    return 1;
  v20 = (char *)Filter_41507228 + 64;
LABEL_30:
  switch ( *v20 )
  {
    case 0:
      if ( !v16 )
        goto LABEL_49;
      if ( !ListViewSort__CheckPresentBoxRarityFilterAll(v16, 0LL)
        && !ListViewSort__UnCheckPresentBoxRarityFilterAll(v16, 0LL) )
      {
        goto LABEL_48;
      }
      return 1;
    case 1:
      if ( !v16 )
        goto LABEL_49;
      Filter_41507276 = ListViewSort__GetFilter_41507276(v16, 0, 0LL);
      result = 0;
      if ( !Filter_41507276 )
        return result;
      return 1;
    case 2:
      if ( !v16 )
        goto LABEL_49;
      v23 = 1;
      goto LABEL_46;
    case 3:
      if ( !v16 )
        goto LABEL_49;
      v23 = 2;
      goto LABEL_46;
    case 4:
      if ( !v16 )
        goto LABEL_49;
      v23 = 3;
      goto LABEL_46;
    case 5:
      if ( !v16 )
        goto LABEL_49;
      v23 = 4;
LABEL_46:
      if ( ListViewSort__GetFilter_41507276(v16, v23, 0LL) )
        return 1;
LABEL_48:
      result = 0;
      break;
    default:
      return 1;
  }
  return result;
}


void __fastcall UserPresentBoxWindow__CheckSvtGetTutorial(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
  void *receiveList; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o **v23; // x22
  int32_t receiveIdx; // w1
  _DWORD *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_4B14FF7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__, v10, v11);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, v12, v13);
    byte_4B14FF7 = 1;
  }
  v14 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_14;
  *(_QWORD *)(v14 + 16) = callback;
  v23 = (System_Action_o **)(v14 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)callback, v17, v18, v19, v20, v21, v22);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v25 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0LL);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v26, v27);
        System_Action___ctor(
          v28,
          (Il2CppObject *)v14,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v28, v25[19], 0, 0, 0, 0LL);
        return;
      }
      if ( *v23 )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*v23)->fields.m_target)(
          (*v23)->fields.original_method_info,
          *(_QWORD *)&(*v23)->fields.extra_arg);
        return;
      }
    }
LABEL_14:
    sub_1BCAA3C(receiveList, v16);
  }
  if ( *v23 )
    ActionExtensions__Call(*v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__ClickFilterEnd(
        UserPresentBoxWindow_o *this,
        bool result,
        const MethodInfo *method)
{
  UserPresentListViewManager_c *v5; // x0
  struct PresentBoxFilterSelectMenu_o *sortInfo; // x0
  __int64 v7; // x2
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v10; // w9

  if ( (byte_4B15007 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, result, method);
    byte_4B15007 = 1;
  }
  if ( result )
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, result);
    if ( !byte_4B1506C )
    {
      sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, result, method);
      byte_4B1506C = 1;
    }
    v5 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, result);
      v5 = UserPresentListViewManager_TypeInfo;
    }
    sortInfo = (struct PresentBoxFilterSelectMenu_o *)v5->static_fields->sortInfo;
    if ( !sortInfo
      || (ListViewSort__Save((ListViewSort_o *)sortInfo, 0LL),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
LABEL_19:
      sub_1BCAA3C(sortInfo, result);
    }
    if ( (byte_4B1504D & 1) == 0 )
    {
      sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, result, v7);
      byte_4B1504D = 1;
    }
    checkedIdList = userPresentListViewManager->fields.checkedIdList;
    if ( checkedIdList )
    {
      v10 = checkedIdList->fields._version + 1;
      checkedIdList->fields._size = 0;
      checkedIdList->fields._version = v10;
    }
    this->fields.mIsScrlResetPosition = 1;
    UserPresentBoxWindow__ReDisp(this, (const MethodInfo *)result);
  }
  sortInfo = this->fields.presentBoxFilterSelectMenu;
  if ( !sortInfo )
    goto LABEL_19;
  PresentBoxFilterSelectMenu__Close(sortInfo, 0LL);
}


void __fastcall UserPresentBoxWindow__Close(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B14FFD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B14FFD = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)userPresentListViewManager & 1) != 0 )
  {
    if ( !mInstance )
      goto LABEL_17;
    TerminalSceneComponent__UpdateQuestBoardList((TerminalSceneComponent_o *)mInstance, 0LL);
  }
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__DestroyList(userPresentListViewManager, v9),
        (userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL)) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(userPresentListViewManager, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentListViewManager, 0, 0LL);
}


QuestRewardInfo_o *__fastcall UserPresentBoxWindow__CreateQuestRewardInfo(
        UserPresentBoxWindow_o *this,
        UserPresentBoxEntity_o *userPresentBox,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  QuestRewardInfo_o *result; // x0

  if ( (byte_4B14FEE & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRewardInfo_TypeInfo, userPresentBox, method);
    byte_4B14FEE = 1;
  }
  v5 = sub_1BCAA2C(QuestRewardInfo_TypeInfo, userPresentBox, method, v3);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v5, 0LL);
  if ( !userPresentBox || !v5 )
    sub_1BCAA3C(v6, v7);
  result = (QuestRewardInfo_o *)v5;
  *(_QWORD *)(v5 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v5 + 24) = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B14FEF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5550/*"END_EFFECT"*/, method, v2);
    byte_4B14FEF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5550/*"END_EFFECT"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B14FF8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B14FF8 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_4B14FE5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, res, method);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_EndReceive__, v5, v6);
    byte_4B14FE5 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, res, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__EventPointRewardWithSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_4B14FE6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, res, method);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_EndEffectReceive__, v5, v6);
    byte_4B14FE6 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, res, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v7, v8);
}


bool __fastcall UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  char v18; // w20
  int v19; // w21
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B14FE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B14FE3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1BCAA3C(v13, v14);
    if ( !Gift__IsCostumeRelease((int32_t)v22.fields._current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v17);
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)Instance, HIDWORD(current[4].monitor), 0LL) )
        continue;
    }
    v18 = 1;
    v19 = 6;
    goto LABEL_14;
  }
  v18 = 0;
  v19 = 7;
LABEL_14:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return v18 & (v19 == 6);
}


void __fastcall UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  _BOOL4 isReceiveFlg; // w20
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x4

  if ( (byte_4B14FF9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_OnClickAll__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_ProcessClickAll__, v6, v7);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__, v8, v9);
    byte_4B14FF9 = 1;
  }
  v10 = Method_UserPresentBoxWindow_OnClickAll__;
  isReceiveFlg = this->fields.isReceiveFlg;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickAll__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  if ( isReceiveFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_11;
    UserPresentListViewManager__SetMode_38194828(userPresentListViewManager, 2, v14);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, v13),
          v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20),
          System_Action___ctor(v21, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
          System_Action___ctor(v25, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_11:
      sub_1BCAA3C(userPresentListViewManager, v13);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v21, v25, v26);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickBack(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct UserPresentBoxWindow_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4B14FFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserPresentBoxWindow_OnClickBack__, method, v2);
    byte_4B14FFE = 1;
  }
  v4 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      this->fields.gotServant,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall UserPresentBoxWindow__OnClickCheckedItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4B14FFB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserPresentBoxWindow_OnClickCheckedItem__, method, v2);
    byte_4B14FFB = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v4 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, v7),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1BCAA3C(userPresentListViewManager, v6);
    }
    UserPresentListViewManager__SetMode_38194828(userPresentListViewManager, 2, v9);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v10);
  }
  else
  {
    v11 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickFilter(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *presentBoxFilterSelectMenu; // x21
  struct PresentBoxFilterSelectMenu_o **p_presentBoxFilterSelectMenu; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *presentBoxFilterKindSelectMenuPrefab; // x21
  Il2CppObject *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  Il2CppObject *Component_object; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  PresentBoxFilterSelectMenu_o *v36; // x20
  UserPresentListViewManager_c *v37; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v39; // x22

  if ( (byte_4B15006 & 1) == 0 )
  {
    sub_1BCA7E0(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_ClickFilterEnd__, v10, v11);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_OnClickFilter__, v12, v13);
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v14, v15);
    byte_4B15006 = 1;
  }
  v16 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickFilter__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  presentBoxFilterSelectMenu = (UnityEngine_Object_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  p_presentBoxFilterSelectMenu = &this->fields.presentBoxFilterSelectMenu;
  if ( UnityEngine_Object__op_Equality(presentBoxFilterSelectMenu, 0LL, 0LL) )
  {
    presentBoxFilterKindSelectMenuPrefab = (Il2CppObject *)this->fields.presentBoxFilterKindSelectMenuPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    v25 = UnityEngine_Object__Instantiate_object_(
            presentBoxFilterKindSelectMenuPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v25, gameObject, 0LL);
    if ( !v25 )
LABEL_20:
      sub_1BCAA3C(v27, v28);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v25,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.presentBoxFilterSelectMenu,
      (int64_t)Component_object,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = *p_presentBoxFilterSelectMenu;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v21);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v21, v22);
    byte_4B1506C = 1;
  }
  v37 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v21);
    v37 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v37->static_fields->sortInfo;
  v39 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                       PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0LL);
  if ( !v36 )
    goto LABEL_20;
  PresentBoxFilterSelectMenu__Open(v36, sortInfo, v39, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UserPresentBoxWindow_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B15004 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserPresentBoxWindow_OnClickHelp__, method, v2);
    byte_4B15004 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  UserPresentBoxWindow__OpenHelp(v5, v6);
}


void __fastcall UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4B14FFA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserPresentBoxWindow_OnClickItem__, method, v2);
    byte_4B14FFA = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v4 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, v7),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1BCAA3C(userPresentListViewManager, v6);
    }
    UserPresentListViewManager__SetMode_38194828(userPresentListViewManager, 2, v9);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v10);
  }
  else
  {
    v11 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickItem__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickPresentHistoryButton(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1

  if ( (byte_4B14FFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__, v10, v11);
    byte_4B14FFF = 1;
  }
  v12 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v17,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v20);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v5; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B14FD8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14FD8 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v5 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1BCAA3C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_titleInfo, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__Open(
        UserPresentBoxWindow_o *this,
        bool isShowBg,
        UserPresentBoxWindow_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *bgObject; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v33; // x3
  UserPresentBoxWindow_o *v34; // x0
  const MethodInfo *v35; // x3
  UserPresentBoxWindow_o *v36; // x0
  const MethodInfo *v37; // x3
  UserPresentBoxWindow_o *v38; // x0
  const MethodInfo *v39; // x1
  struct System_String_o *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x2
  __int64 v48; // x1
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  __int64 v51; // x1
  Il2CppObject *titlePrefab; // x22
  Il2CppObject *Component_object; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  TitleInfoControl_o *v60; // x22
  TitleInfoControl_o *v61; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Action_o *v65; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v67; // x21
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Action_int__o *v71; // x22
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  const MethodInfo *v80; // x2
  bool v81; // w20
  const MethodInfo *v82; // x2

  if ( (byte_4B14FD9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, isShowBg, callback);
    sub_1BCA7E0(&System_Action_TypeInfo, v9, v10);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_OnClickBack__, v19, v20);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__Open_b__69_0__, v21, v22);
    sub_1BCA7E0(&StringLiteral_5536/*"ENABLE_PRESENT_HISTORY"*/, v23, v24);
    byte_4B14FD9 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v26, v27, v28, v29, v30, v31);
  bgObject = (UnityEngine_GameObject_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v33);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v34 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v34, 0, (UnityEngine_GameObject_o *)v34, v35);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v36 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v36, 0, (UnityEngine_GameObject_o *)v36, v37);
  v40 = UserPresentBoxWindow__maxSelectable(v38, v39);
  this->fields.presentMaxSelectable = v40;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.presentMaxSelectable,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  UserPresentBoxWindow__SetSelectCount(this, 0, v47);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
    bgObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             titlePrefab,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.titleInfo,
        (int64_t)Component_object,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      v60 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v60 )
      {
        TitleInfoControl__SetParent(v60, (UnityEngine_Transform_o *)bgObject, 0LL);
        bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
        if ( *p_titleInfo )
        {
          TitleInfoControl__setDepth((TitleInfoControl_o *)bgObject, 51, 0LL);
          bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
          if ( *p_titleInfo )
          {
            TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgObject, 52, 0LL);
            bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
            if ( *p_titleInfo )
            {
              TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgObject, 0LL, 1, 0LL, 43, 0LL);
              bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
              if ( *p_titleInfo )
              {
                TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)bgObject, 1, 43, 0, 0LL);
                v61 = this->fields.titleInfo;
                v65 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v62, v63, v64);
                System_Action___ctor(
                  v65,
                  (Il2CppObject *)this,
                  (intptr_t)Method_UserPresentBoxWindow_OnClickBack__,
                  0LL);
                if ( v61 )
                {
                  TitleInfoControl__SetBackBtnAct(v61, v65, 0LL);
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(bgObject, isShowBg);
  }
LABEL_20:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v51);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v71 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v68, v69, v70);
  System_Action_int____ctor(v71, (Il2CppObject *)this, Method_UserPresentBoxWindow__Open_b__69_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(v67, v71, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_28;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, (const MethodInfo *)isShowBg);
  UserPresentBoxWindow__SetFilterButtonImage(this, v72);
  bgObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, 1, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.sortBtn;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bgObject, 0, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.sortBtn;
  if ( !bgObject )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))bgObject->klass[1]._1.implementedInterfaces)(
    bgObject,
    3LL,
    1LL,
    bgObject->klass[1]._1.interfaceOffsets);
  UserPresentBoxWindow__RequestPresentList(this, v73);
  this->fields.mReDispAct = redisp_act;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mReDispAct, (int64_t)redisp_act, v74, v75, v76, v77, v78, v79);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v80);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5536/*"ENABLE_PRESENT_HISTORY"*/, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_28;
  v81 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v81, v82);
}


void __fastcall UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x19
  System_Array_o *v8; // x0
  TutorialFlag_ImageId_array *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_4B15005 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_ImageId___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E,
      v5,
      v6);
    byte_4B15005 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Array_o *)sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 3LL);
  v12.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v9 = (TutorialFlag_ImageId_array *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v8, v12, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v10, v11);
  CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v9, 201, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall UserPresentBoxWindow__ProcessClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  userPresentListViewManager = this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 1;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 1, v2),
        (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
  {
    sub_1BCAA3C(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_38194828(userPresentListViewManager, 2, v5);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v6);
}


void __fastcall UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  Il2CppObject *v54; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  UserServantMaster_o *v63; // x8
  UserCommandCodeMaster_o *v64; // x21
  int32_t Count; // w0
  __int64 v66; // x1
  UILabel_o *svtNumValLb; // x22
  int v68; // w21
  System_String_o *v69; // x23
  Il2CppObject *v70; // x24
  Il2CppObject *v71; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v73; // x23
  Il2CppObject *v74; // x24
  Il2CppObject *v75; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v77; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  Il2CppObject *v80; // x21
  BalanceConfig_c *v81; // x0
  Il2CppObject *v82; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v87; // x22
  Il2CppObject *v88; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v90; // x22
  Il2CppObject *v91; // x0
  __int64 v92; // x20
  BalanceConfig_c *v93; // x0
  __int64 v94; // x26
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
  System_String_o *v97; // x23
  Il2CppObject *v98; // x24
  Il2CppObject *v99; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v101; // x23
  Il2CppObject *v102; // x0
  __int64 v103; // x2
  UserPresentListViewManager_c *v104; // x0
  __int64 v105; // x2
  _BOOL4 v106; // w22
  UserPresentListViewManager_c *v107; // x0
  UserPresentListViewManager_c *v108; // x0
  __int64 v109; // x2
  _BOOL4 v110; // w28
  UserPresentListViewManager_c *v111; // x0
  Il2CppObject *v112; // x23
  Il2CppObject *v113; // x24
  Il2CppObject *v114; // x25
  Il2CppObject *v115; // x27
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  System_Collections_Generic_List_object__o *v119; // x26
  int64_t v120; // x2
  int32_t v121; // w3
  MethodInfo *v122; // x4
  MethodInfo *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  unsigned __int64 v126; // x29
  __int64 v127; // x19
  struct System_Object_array *items; // x8
  _QWORD *v129; // x9
  __int64 size; // x10
  Il2CppClass **v131; // x0
  int v132; // w24
  const MethodInfo *v133; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v134; // x21
  char v135; // w22
  char v136; // w23
  unsigned int v137; // w25
  __int64 v138; // x8
  int v139; // w9
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v141; // x3
  UserPresentBoxWindow_o *v142; // x0
  const MethodInfo *v143; // x3
  UserPresentBoxWindow_o *v144; // x0
  const MethodInfo *v145; // x3
  __int64 v146; // x1
  UILabel_o *nonPresentNoticeLabel; // x20
  System_String_o **v148; // x8
  __int64 v149; // x8
  UserPresentBoxWindow_o *v150; // x0
  const MethodInfo *v151; // x3
  UserPresentBoxWindow_o *v152; // x0
  const MethodInfo *v153; // x3
  UserPresentBoxWindow_o *v154; // x0
  const MethodInfo *v155; // x3
  const MethodInfo *v156; // x2
  const MethodInfo *v157; // x2
  const MethodInfo *v158; // x2
  __int64 v159; // x1
  _BOOL8 _38402052; // x0
  const MethodInfo *v161; // x1
  const MethodInfo *v162; // x2
  UserPresentBoxWindow_o *v163; // [xsp+8h] [xbp-C8h]
  int capacity; // [xsp+10h] [xbp-C0h]
  int v165; // [xsp+1Ch] [xbp-B4h] BYREF
  int v166; // [xsp+20h] [xbp-B0h] BYREF
  int v167; // [xsp+24h] [xbp-ACh] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-A8h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-A4h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int v171; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int v173; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int v175; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  __int64 servantEquipSum; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B14FDD & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76803232, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v28, v29);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v34, v35);
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&StringLiteral_10590/*"PRESENT_LIST_INFO"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_11102/*"RECEIVE_FILTER_NOTHING"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_11101/*"RECEIVE_ALL_DONE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_4016/*"CURRENT_QP_UNIT"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_10591/*"PRESENT_LIST_NOTICE"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_4014/*"CURRENT_FRIEND_POINT_UNIT"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v50, v51);
    byte_4B14FDD = 1;
  }
  entity = 0LL;
  servantEquipSum = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantMaster,
    (int64_t)MasterData_object,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v63 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_146;
  v64 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v63, (int32_t *)&servantEquipSum + 1, (int32_t *)&servantEquipSum, 1, 0LL);
  if ( !v64 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v64, 0LL);
  svtNumValLb = this->fields.svtNumValLb;
  v68 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  v175 = HIDWORD(servantEquipSum);
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v175);
  if ( !SelfUserGame )
    goto LABEL_146;
  v70 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_62415592(v69, v70, v71, 0LL);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0LL);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  v173 = servantEquipSum;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  Instance = (__int64)System_String__Format_62415592(v73, v74, v75, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0LL);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  v171 = v68;
  v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
  if ( !byte_4B112D7 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v78, v79);
    byte_4B112D7 = 1;
  }
  v81 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v78);
    v81 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v81->static_fields->CommandCodeFrameMax;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax);
  Instance = (__int64)System_String__Format_62415592(v77, v80, v82, 0LL);
  if ( !commandCodeNumValLb )
    goto LABEL_146;
  UILabel__set_text(commandCodeNumValLb, (System_String_o *)Instance, 0LL);
  stoneNumValLb = this->fields.stoneNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.stone, 0LL);
  if ( !stoneNumValLb )
    goto LABEL_146;
  UILabel__set_text(stoneNumValLb, (System_String_o *)Instance, 0LL);
  rpNumValLb = this->fields.rpNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.rarePri, 0LL);
  if ( !rpNumValLb )
    goto LABEL_146;
  UILabel__set_text(rpNumValLb, (System_String_o *)Instance, 0LL);
  mpNumValLb = this->fields.mpNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.mana, 0LL);
  if ( !mpNumValLb )
    goto LABEL_146;
  UILabel__set_text(mpNumValLb, (System_String_o *)Instance, 0LL);
  qpNumValLb = this->fields.qpNumValLb;
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_4016/*"CURRENT_QP_UNIT"*/, 0LL);
  qp = SelfUserGame->fields.qp;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  Instance = (__int64)System_String__Format(v87, v88, 0LL);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0LL);
  fpNumValLb = this->fields.fpNumValLb;
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_4014/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint);
  Instance = (__int64)System_String__Format(v90, v91, 0LL);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        0LL);
  if ( !Instance )
    goto LABEL_146;
  v92 = Instance;
  v93 = BalanceConfig_TypeInfo;
  v94 = *(_QWORD *)(v92 + 24);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v54);
    v93 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = this->fields.presentInfoLabel;
  PresentBoxMax = v93->static_fields->PresentBoxMax;
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_10590/*"PRESENT_LIST_INFO"*/, 0LL);
  v167 = v94;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
  v166 = PresentBoxMax;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v166);
  Instance = (__int64)System_String__Format_62415592(v97, v98, v99, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0LL);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_10591/*"PRESENT_LIST_NOTICE"*/, 0LL);
  v165 = PresentBoxMax;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v165);
  Instance = (__int64)System_String__Format(v101, v102, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v54);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v54, v103);
    byte_4B1506C = 1;
  }
  v104 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v54);
    v104 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v104->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v106 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v54);
    if ( !byte_4B1506C )
    {
      sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v54, v105);
      byte_4B1506C = 1;
    }
    v107 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v54);
      v107 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v107->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v106 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v54);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v54, v105);
    byte_4B1506C = 1;
  }
  v108 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v54);
    v108 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v108->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v110 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v54);
    if ( !byte_4B1506C )
    {
      sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v54, v109);
      byte_4B1506C = 1;
    }
    v111 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v54);
      v111 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v111->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v110 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( v110 || v106 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v112 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v113 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v163 = this;
    capacity = v94;
    v114 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v115 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v119 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                          v116,
                                                          v117,
                                                          v118);
    System_Collections_Generic_List_object____ctor_56235160(
      v119,
      capacity,
      (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76803232);
    if ( capacity >= 1 )
    {
      v126 = 0LL;
      v127 = v92 + 32;
      do
      {
        if ( !v106 )
          goto LABEL_150;
        if ( v126 >= *(unsigned int *)(v92 + 24) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v112,
                     (ItemMaster_o *)v113,
                     *(UserPresentBoxEntity_o **)(v127 + 8 * v126),
                     v122);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v110 )
            goto LABEL_76;
          if ( v126 >= *(unsigned int *)(v92 + 24) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v114,
                       (CommandCodeMaster_o *)v115,
                       *(UserPresentBoxEntity_o **)(v127 + 8 * v126),
                       v106,
                       v123);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v126 >= *(unsigned int *)(v92 + 24) )
LABEL_147:
              sub_1BCAA44(Instance, v54);
            if ( !v119 )
              goto LABEL_146;
            v54 = *(Il2CppObject **)(v127 + 8 * v126);
            items = v119->fields._items;
            v129 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v119->fields._version;
            if ( !items )
              goto LABEL_146;
            size = v119->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v119,
                v54,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
            }
            else
            {
              v131 = &items->obj.klass + size;
              v119->fields._size = size + 1;
              v131[4] = (Il2CppClass *)v54;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)(v131 + 4),
                (int64_t)v54,
                v120,
                v121,
                (System_String_o *)v122,
                (BattleSetupInfo_o *)v123,
                v124,
                v125);
            }
          }
        }
      }
      while ( capacity != ++v126 );
    }
    if ( !v119 )
      goto LABEL_146;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v119,
                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v163;
    if ( !Instance )
      goto LABEL_146;
    v132 = *(_DWORD *)(Instance + 24);
    LODWORD(v94) = capacity;
    v92 = Instance;
  }
  else
  {
    v132 = v94;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, (const MethodInfo *)v54);
  UserPresentBoxWindow__SetSelectCount(this, 0, v133);
  if ( v132 < 1 )
  {
    Instance = (__int64)this->fields.userPresentListViewManager;
    if ( Instance )
    {
      UserPresentListViewManager__DestroyList((UserPresentListViewManager_o *)Instance, (const MethodInfo *)v54);
      Instance = (__int64)this->fields.allReceiveBtn;
      this->fields.isReceiveFlg = 0;
      if ( Instance )
      {
        gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0LL);
        UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v141);
        Instance = (__int64)this->fields.itemReceiveBtn;
        this->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v142 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL);
          UserPresentBoxWindow__SetButtonTxtColor(v142, 0, (UnityEngine_GameObject_o *)v142, v143);
          Instance = (__int64)this->fields.checkedItemBtn;
          this->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v144 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
            UserPresentBoxWindow__SetButtonTxtColor(v144, 0, (UnityEngine_GameObject_o *)v144, v145);
            nonPresentNoticeLabel = this->fields.nonPresentNoticeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v146);
            v148 = (System_String_o **)&StringLiteral_11101/*"RECEIVE_ALL_DONE"*/;
            if ( (_DWORD)v94 )
              v148 = (System_String_o **)&StringLiteral_11102/*"RECEIVE_FILTER_NOTHING"*/;
            Instance = (__int64)LocalizationManager__Get(*v148, 0LL);
            if ( nonPresentNoticeLabel )
            {
              UILabel__set_text(nonPresentNoticeLabel, (System_String_o *)Instance, 0LL);
              Instance = (__int64)this->fields.nonPresentNoticeLabel;
              if ( Instance )
              {
                Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                  Instance = (__int64)this->fields.userPresentListViewManager;
                  if ( Instance )
                  {
                    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      Instance = (__int64)this->fields.sortBtn;
                      if ( Instance )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
                        Instance = (__int64)this->fields.sortBtn;
                        if ( Instance )
                        {
                          v149 = *(_QWORD *)Instance;
                          goto LABEL_137;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_146;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  v134 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  while ( 1 )
  {
    if ( v137 >= *(_DWORD *)(v92 + 24) )
      goto LABEL_147;
    v138 = *(_QWORD *)(v92 + 8LL * (int)v137 + 32);
    if ( !v138 )
      goto LABEL_146;
    v139 = *(_DWORD *)(v138 + 72);
    if ( v139 == 2 )
    {
      if ( !v134 )
        goto LABEL_146;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v134,
                   &entity,
                   *(_DWORD *)(v138 + 76),
                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_146;
      if ( LODWORD(entity[3].klass) != 24 )
      {
LABEL_97:
        v136 = 1;
        v135 = 1;
      }
      if ( (v136 & 1) == 0 )
        goto LABEL_102;
    }
    else
    {
      v135 |= v139 == 9;
      v136 = 1;
    }
    if ( (v135 & 1) != 0 )
      break;
LABEL_102:
    if ( v132 == ++v137 )
      goto LABEL_121;
  }
  v136 = 1;
  v135 = 1;
LABEL_121:
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.nonPresentNoticeLabel;
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = v136 & 1;
  if ( !Instance )
    goto LABEL_146;
  v150 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v150, v136 & 1, (UnityEngine_GameObject_o *)v150, v151);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v135 & 1;
  if ( !Instance )
    goto LABEL_146;
  v152 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v152, v135 & 1, (UnityEngine_GameObject_o *)v152, v153);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v154 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v154, 0, (UnityEngine_GameObject_o *)v154, v155);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_1BCAA3C(Instance, v54);
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
  {
    scroll.fields.z = 0.0;
    offset = 0LL;
    *(_QWORD *)&scroll.fields.x = 0LL;
    Instance = (__int64)this->fields.userPresentListViewManager;
    if ( Instance )
    {
      ListViewManager__GetScrollView((ListViewManager_o *)Instance, &scroll, &offset, 0LL);
      Instance = (__int64)this->fields.userPresentListViewManager;
      if ( Instance )
      {
        UserPresentListViewManager__CreateList(
          (UserPresentListViewManager_o *)Instance,
          (UserPresentBoxEntity_array *)v92,
          v162);
        Instance = (__int64)this->fields.userPresentListViewManager;
        if ( Instance )
        {
          ListViewManager__SetScrollView((ListViewManager_o *)Instance, scroll, offset, 0LL);
          goto LABEL_133;
        }
      }
    }
    goto LABEL_146;
  }
LABEL_131:
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__CreateList(
    (UserPresentListViewManager_o *)Instance,
    (UserPresentBoxEntity_array *)v92,
    v156);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_38194828((UserPresentListViewManager_o *)Instance, 1, v157);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v149 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v149 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v158);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v159);
  _38402052 = TutorialFlag__Get_38402052(201, 0LL);
  if ( !_38402052 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_38402052, v161);
  EventTutorialMaster__CheckTutorial(0, 78, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_4B14FDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserPresentListRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_callbackPresentList__, v9, v10);
    byte_4B14FDB = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *sortBtn; // x0
  bool v6; // w21
  const MethodInfo *v7; // x2
  bool v8; // w20

  if ( (byte_4B15000 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable, method);
    byte_4B15000 = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0LL);
  sortBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0LL);
  sortBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0LL);
  sortBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  v6 = is_enable;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0LL);
  sortBtn = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !sortBtn
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)sortBtn, v6, 0LL),
        UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v6, v7),
        (sortBtn = (UnityEngine_Component_o *)this->fields.helpBtn) == 0LL)
    || (v8 = is_enable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, v8, 0LL),
        (sortBtn = (UnityEngine_Component_o *)this->fields.filterBtn) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(sortBtn, is_enable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetButtonTxtColor(
        UserPresentBoxWindow_o *this,
        bool isVaild,
        UnityEngine_GameObject_o *btnObject,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  UserPresentBoxWindow_o *v7; // x19
  float v8; // s8
  unsigned int v9; // w20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B14FDA & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_1BCA7E0(
                                       &Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___,
                                       isVaild,
                                       btnObject);
    byte_4B14FDA = 1;
  }
  if ( !btnObject )
    goto LABEL_15;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                     btnObject,
                                     (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !this )
    goto LABEL_15;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( isVaild )
    v8 = 1.0;
  else
    v8 = 0.5;
  if ( m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= m_CancellationTokenSource )
        sub_1BCAA44(this, isVaild);
      this = (UserPresentBoxWindow_o *)*((_QWORD *)&v7->fields.myFsm + (int)v9);
      if ( !this )
        break;
      v10.fields.a = 1.0;
      v10.fields.r = v8;
      v10.fields.g = v8;
      v10.fields.b = v8;
      UIWidget__set_color((UIWidget_o *)this, v10, 0LL);
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
      if ( (int)++v9 >= m_CancellationTokenSource )
        return;
    }
LABEL_15:
    sub_1BCAA3C(this, isVaild);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetCheckedItemsButtonEnable(
        UserPresentBoxWindow_o *this,
        bool how,
        bool isSetOtherButtonsToo,
        const MethodInfo *method)
{
  bool v5; // w20
  bool v7; // w19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  int64_t checkedItemBtn; // x0
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v34; // x3
  UserPresentBoxWindow_o *v35; // x0
  const MethodInfo *v36; // x3
  UserPresentBoxWindow_o *v37; // x0
  const MethodInfo *v38; // x3
  bool v39; // w1
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x20
  UserPresentBoxEntity_array *VaildList; // x20
  __int64 v43; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x29
  __int64 v45; // x22
  UserPresentListViewManager_c *v46; // x0
  __int64 v47; // x2
  _BOOL4 v48; // w27
  UserPresentListViewManager_c *v49; // x0
  UserPresentListViewManager_c *v50; // x0
  __int64 v51; // x2
  _BOOL4 v52; // w28
  UserPresentListViewManager_c *v53; // x0
  Il2CppObject *v54; // x23
  ItemMaster_o *v55; // x19
  Il2CppObject *v56; // x24
  Il2CppObject *v57; // x25
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Collections_Generic_List_object__o *v61; // x26
  int64_t v62; // x2
  int32_t v63; // w3
  MethodInfo *v64; // x4
  MethodInfo *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  unsigned __int64 v68; // x29
  UserPresentBoxEntity_o **m_Items; // x21
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  UserPresentBoxWindow_o *v74; // x0
  const MethodInfo *v75; // x3
  __int64 v76; // x8
  __int64 v77; // x19
  UserPresentBoxEntity_o *v78; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v80; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v5 = how;
  v7 = how;
  if ( (byte_4B14FFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, how, isSetOtherButtonsToo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76803232, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, v30, v31);
    byte_4B14FFC = 1;
  }
  entity = 0LL;
  checkedItemBtn = (int64_t)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = v7;
  if ( !checkedItemBtn )
    goto LABEL_90;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)checkedItemBtn,
                                           0LL);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, v5, (UnityEngine_GameObject_o *)gameObject, v34);
  if ( !isSetOtherButtonsToo )
    return;
  if ( v5 )
  {
    checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( checkedItemBtn )
    {
      v35 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)checkedItemBtn,
                                        0LL);
      UserPresentBoxWindow__SetButtonTxtColor(v35, 0, (UnityEngine_GameObject_o *)v35, v36);
      checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( checkedItemBtn )
      {
        v37 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)checkedItemBtn,
                                          0LL);
        v39 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_90;
  }
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  checkedItemBtn = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_90;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)MasterData_object, checkedItemBtn, 0LL);
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_90;
  checkedItemBtn = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)checkedItemBtn,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_90;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  v45 = *(_QWORD *)&VaildList->max_length;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, how, v43);
    byte_4B1506C = 1;
  }
  v46 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how);
    v46 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v46->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_90;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v48 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how);
    if ( !byte_4B1506C )
    {
      sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, how, v47);
      byte_4B1506C = 1;
    }
    v49 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how);
      v49 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v49->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_90;
    v48 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, how, v47);
    byte_4B1506C = 1;
  }
  v50 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how);
    v50 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v50->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_90;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v52 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how);
    if ( !byte_4B1506C )
    {
      sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, how, v51);
      byte_4B1506C = 1;
    }
    v53 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how);
      v53 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v53->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_90;
    v52 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( v48 || v52 )
  {
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v54 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v80 = this;
    v55 = (ItemMaster_o *)v44;
    v56 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v57 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v61 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                         v58,
                                                         v59,
                                                         v60);
    System_Collections_Generic_List_object____ctor_56235160(
      v61,
      v45,
      (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76803232);
    if ( (int)v45 >= 1 )
    {
      v68 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v48 )
          goto LABEL_94;
        if ( v68 >= VaildList->max_length )
          goto LABEL_91;
        checkedItemBtn = UserPresentBoxWindow__CheckFilter(
                           (UserPresentBoxWindow_o *)checkedItemBtn,
                           (ServantMaster_o *)v54,
                           v55,
                           m_Items[v68],
                           v64);
        if ( (checkedItemBtn & 1) != 0 )
        {
LABEL_94:
          if ( !v52 )
            goto LABEL_62;
          if ( v68 >= VaildList->max_length )
            goto LABEL_91;
          checkedItemBtn = UserPresentBoxWindow__CheckRarityFilter(
                             (UserPresentBoxWindow_o *)checkedItemBtn,
                             (ServantLimitMaster_o *)v56,
                             (CommandCodeMaster_o *)v57,
                             m_Items[v68],
                             v48,
                             v65);
          if ( (checkedItemBtn & 1) != 0 )
          {
LABEL_62:
            if ( v68 >= VaildList->max_length )
LABEL_91:
              sub_1BCAA44(checkedItemBtn, how);
            if ( !v61 )
              goto LABEL_90;
            *(_QWORD *)&how = m_Items[v68];
            items = v61->fields._items;
            v71 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v61->fields._version;
            if ( !items )
              goto LABEL_90;
            size = v61->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v61,
                (Il2CppObject *)how,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &items->obj.klass + size;
              v61->fields._size = size + 1;
              v73[4] = (Il2CppClass *)how;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)(v73 + 4),
                how,
                v62,
                v63,
                (System_String_o *)v64,
                (BattleSetupInfo_o *)v65,
                v66,
                v67);
            }
          }
        }
      }
      while ( (unsigned int)v45 != ++v68 );
    }
    if ( !v61
      || (checkedItemBtn = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v61,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_90:
      sub_1BCAA3C(checkedItemBtn, how);
    }
    LODWORD(v45) = *(_DWORD *)(checkedItemBtn + 24);
    this = v80;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)v55;
  }
  if ( (int)v45 < 1 )
    return;
  checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_90;
  v74 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v74, 1, (UnityEngine_GameObject_o *)v74, v75);
  v76 = *(_QWORD *)&VaildList->max_length;
  if ( (int)v76 < 1 )
    return;
  v77 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v77 >= (unsigned int)v76 )
      goto LABEL_91;
    v78 = VaildList->m_Items[v77];
    if ( !v78 )
      goto LABEL_90;
    giftType = v78->fields.giftType;
    if ( giftType != 2 )
    {
      if ( giftType == 9 )
        break;
      goto LABEL_86;
    }
    if ( !v44 )
      goto LABEL_90;
    checkedItemBtn = DataMasterBase_object__object__int___TryGetEntity(
                       v44,
                       &entity,
                       v78->fields.objectId,
                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_90;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v76 = *(_QWORD *)&VaildList->max_length;
LABEL_86:
    if ( (int)++v77 >= (int)v76 )
      return;
  }
  checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_90;
  v37 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  v39 = 1;
LABEL_9:
  UserPresentBoxWindow__SetButtonTxtColor(v37, v39, (UnityEngine_GameObject_o *)v37, v38);
}


void __fastcall UserPresentBoxWindow__SetFilterButtonImage(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *filterBtnSp; // x19
  UserPresentListViewManager_c *v9; // x0
  ListViewSort_o *sortInfo; // x0
  __int64 v11; // x2
  System_String_o **v12; // x22
  UserPresentListViewManager_c *v13; // x0

  if ( (byte_4B14FDE & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v6, v7);
    byte_4B14FDE = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, method, v2);
    byte_4B1506C = 1;
  }
  v9 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method);
    v9 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v9->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_22;
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0LL);
  v12 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method);
  if ( !byte_4B1506C )
  {
    sub_1BCA7E0(&UserPresentListViewManager_TypeInfo, method, v11);
    byte_4B1506C = 1;
  }
  v13 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method);
    v13 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v13->static_fields->sortInfo;
  if ( !sortInfo )
LABEL_22:
    sub_1BCAA3C(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0LL);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v12 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
LABEL_20:
  if ( !filterBtnSp )
    goto LABEL_22;
  UISprite__set_spriteName(filterBtnSp, *v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetPresentHistoryBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *GameObject; // x20
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1

  if ( (byte_4B15001 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_10865/*"PresentHistoryButton"*/, v7, v8);
    byte_4B15001 = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10865/*"PresentHistoryButton"*/,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_1BCAA3C(Component_object, v12);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, is_enable, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__SetReDispAction(
        UserPresentBoxWindow_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mReDispAct = act;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mReDispAct, (int64_t)act, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall UserPresentBoxWindow__SetScrlPositionResetAtReDisp(
        UserPresentBoxWindow_o *this,
        bool onOff,
        const MethodInfo *method)
{
  this->fields.mIsScrlResetPosition = onOff;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetSelectCount(
        UserPresentBoxWindow_o *this,
        int32_t selected,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *presentSelectNumLabel; // x20
  System_String_o *v9; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  UIWidget_o *v13; // x20
  int32_t v14; // w22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = selected;
  if ( (byte_4B15002 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&selected, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10597/*"PRESENT_SELECT_INFO"*/, v6, v7);
    byte_4B15002 = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&selected);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10597/*"PRESENT_SELECT_INFO"*/, 0LL);
  v10 = (Il2CppObject *)System_Int32__ToString((int32_t)&v20, 0LL);
  v11 = System_String__Format_62415592(v9, v10, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
  if ( !presentSelectNumLabel )
    goto LABEL_14;
  UILabel__set_text(presentSelectNumLabel, v11, 0LL);
  v11 = (System_String_o *)BalanceConfig_TypeInfo;
  v13 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v14 = v20;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
    v11 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v14 >= *(_DWORD *)(*(_QWORD *)&v11[7].fields + 116LL) )
  {
    presentNoticeLabel = this->fields.presentNoticeLabel;
    if ( !presentNoticeLabel )
      goto LABEL_14;
    r = presentNoticeLabel->fields.mColor.fields.r;
    g = presentNoticeLabel->fields.mColor.fields.g;
    b = presentNoticeLabel->fields.mColor.fields.b;
    a = presentNoticeLabel->fields.mColor.fields.a;
  }
  else
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  if ( !v13 )
LABEL_14:
    sub_1BCAA3C(v11, v12);
  UIWidget__set_color(v13, *(UnityEngine_Color_o *)&r, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__ShowEventPointReward(
        UserPresentBoxWindow_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v31; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v34; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v35; // x22
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3

  if ( (byte_4B14FE7 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo, *(_QWORD *)&idx, callback);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__, v7, v8);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, v9, v10);
    byte_4B14FE7 = 1;
  }
  v11 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, *(_QWORD *)&idx, callback, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = callback;
  *(_DWORD *)(v11 + 24) = idx;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v31 = *(int *)(v11 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v31 < max_length )
    {
      if ( (unsigned int)v31 >= max_length )
        sub_1BCAA44(v26, v27);
      evpDialog = this->fields.evpDialog;
      v34 = evPointRewardList->m_Items[v31];
      v35 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                      UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo,
                                                                      v27,
                                                                      v28,
                                                                      v29);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v35,
        (Il2CppObject *)v11,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        v36);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v34, v35, v37);
        return;
      }
LABEL_10:
      sub_1BCAA3C(v12, v13);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 32), 0LL);
}


void __fastcall UserPresentBoxWindow__ShowExpiredPresents(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  __int64 v35; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v37; // x0
  System_String_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *v42; // x22

  if ( (byte_4B14FE4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__, v10, v11);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_10584/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_44/*"\n\n"*/, v16, v17);
    byte_4B14FE4 = 1;
  }
  v18 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)callback, v27, v28, v29, v30, v31, v32);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_10584/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
    v38 = System_String__Concat_62412480(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v37, 0LL);
    v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v18,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v38, v42, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(v19, v20);
  }
  ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B14FE8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v3, v4);
    byte_4B14FE8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( v7 )
  {
    if ( !mInstance )
      sub_1BCAA3C(v7, v8);
    TerminalSceneComponent__UpdateTitleEventInfo((TerminalSceneComponent_o *)mInstance, 0LL);
  }
}


void __fastcall UserPresentBoxWindow___CallbackReceiveRequest_b__80_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct GetSvts_array *getSvtList; // x8
  struct GetCommandCodes_array *getCommandCodeList; // x8
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  PlayMakerFSM_o *myFsm; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1

  if ( (byte_4B1500B & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12291/*"SHOW_EFFECT"*/, v6, v7);
    byte_4B1500B = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12291/*"SHOW_EFFECT"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v14 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1BCAA2C(
                                                                UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                method,
                                                                v10,
                                                                v11);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      v15);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v14, v16);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v17);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v10);
  }
}


void __fastcall UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_1BCAA3C(0LL, method);
  UserPresentListViewManager__SetMode_38194828(userPresentListViewManager, 1, v2);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_1BCAA3C(0LL, result);
  UserPresentHistoryDialog__Open(presentHistoryDialog, (const MethodInfo *)result);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___Open_b__69_0(
        UserPresentBoxWindow_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_4B15009 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
    byte_4B15009 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_1BCAA3C(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B1500A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1500A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  UserPresentBoxWindow__ReDisp(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___showEffect_b__88_0(
        UserPresentBoxWindow_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B1500C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_EndEffect__, v5, v6);
    byte_4B1500C = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  UserPresentBoxWindow__CheckSvtGetTutorial(this, v7, v8);
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  __int64 v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_object__o *v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Action_object__o *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  ActionChain_o *v58; // x21
  __int64 v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Action_o *v63; // x22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  if ( (byte_4B1500D & 1) == 0 )
  {
    sub_1BCA7E0(&ActionChain_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action___TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Action_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__, v16, v17);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__, v18, v19);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__, v20, v21);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, v22, v23);
    byte_4B1500D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0LL, 0LL) )
  {
    touchBlocker = this->fields.touchBlocker;
    if ( !touchBlocker )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(touchBlocker, 0, 0LL);
    if ( this->fields.presentOverflowType )
    {
      userPresentListViewManager = this->fields.userPresentListViewManager;
      v30 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1BCAA2C(
                                                                  UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                  v26,
                                                                  v27,
                                                                  v28);
      UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__,
        v31);
      if ( userPresentListViewManager )
      {
        UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v30, v32);
        UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v33);
        return;
      }
      goto LABEL_19;
    }
    v34 = sub_1BCA888(System_Action_Action____TypeInfo, 2LL);
    v38 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v35, v36, v37);
    System_Action_object____ctor(
      v38,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__,
      0LL);
    if ( !v34 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v34 + 24) )
      goto LABEL_20;
    *(_QWORD *)(v34 + 32) = v38;
    sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v38, v39, v40, v41, v42, v43, v44);
    v48 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v45, v46, v47);
    System_Action_object____ctor(
      v48,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
      0LL);
    if ( *(_DWORD *)(v34 + 24) <= 1u )
      goto LABEL_20;
    *(_QWORD *)(v34 + 40) = v48;
    sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 40), (int64_t)v48, v49, v50, v51, v52, v53, v54);
    v58 = (ActionChain_o *)sub_1BCAA2C(ActionChain_TypeInfo, v55, v56, v57);
    ActionChain___ctor_47118216(v58, (System_Action_Action__array *)v34, 0LL);
    v59 = sub_1BCA888(System_Action___TypeInfo, 1LL);
    v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v61, v62);
    System_Action___ctor(v63, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
    if ( !v59 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v59 + 24) )
LABEL_20:
      sub_1BCAA44(touchBlocker, v24);
    *(_QWORD *)(v59 + 32) = v63;
    sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 32), (int64_t)v63, v64, v65, v66, v67, v68, v69);
    if ( !v58
      || (touchBlocker = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                       (ChainableActionBase_o *)v58,
                                                       (System_Action_array *)v59,
                                                       0LL)) == 0LL )
    {
LABEL_19:
      sub_1BCAA3C(touchBlocker, v24);
    }
    ChainableActionBase__Execute((ChainableActionBase_o *)touchBlocker, 0LL);
  }
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_1(
        UserPresentBoxWindow_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ServantCoinConfirmDialog_o *servantCoinConfirmDialog; // x0

  servantCoinConfirmDialog = this->fields.servantCoinConfirmDialog;
  if ( !servantCoinConfirmDialog )
    sub_1BCAA3C(0LL, action);
  ServantCoinConfirmDialog__Open(servantCoinConfirmDialog, 1, this->fields.getSvtCoins, action, 0LL);
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_2(
        UserPresentBoxWindow_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ServantCoinConfirmDialog_o *servantCoinConfirmDialog; // x0

  servantCoinConfirmDialog = this->fields.servantCoinConfirmDialog;
  if ( !servantCoinConfirmDialog )
    sub_1BCAA3C(0LL, action);
  ServantCoinConfirmDialog__Open(servantCoinConfirmDialog, 2, this->fields.overflowSvtCoinInfos, action, 0LL);
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_3(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxWindow__EventPointRewardWithSvtGet(this, 0, v2);
}


void __fastcall UserPresentBoxWindow__callbackPresentList(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_4B14FDC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, v8, v9);
    byte_4B14FDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
  AtlasManager__LoadBanner(v15, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkNew(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        bool isNew,
        bool isAddSvt,
        const MethodInfo *method)
{
  bool v9; // w0
  __int64 v10; // x1
  char v11; // w8
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4B14FF2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId, isNew);
    byte_4B14FF2 = 1;
  }
  if ( isNew )
  {
    v9 = UserPresentBoxWindow__checkOverlapSvt(this, svtId, (const MethodInfo *)isNew);
    v11 = !v9;
    if ( !v9 && isAddSvt )
    {
      befSvtList = this->fields.befSvtList;
      if ( !befSvtList
        || (items = befSvtList->fields._items,
            v14 = Method_System_Collections_Generic_List_int__Add__,
            ++befSvtList->fields._version,
            !items) )
      {
        sub_1BCAA3C(befSvtList, v10);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        befSvtList->fields._size = size + 1;
        items->m_Items[size + 1] = svtId;
      }
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  return v11 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkNewCommandCode(
        UserPresentBoxWindow_o *this,
        int64_t commandCodeId,
        bool isNew,
        bool isAddCommandCode,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x21
  struct System_Collections_Generic_List_long__o *v18; // x0
  int64_t klass; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v23; // x23
  unsigned int Index; // w8
  _BOOL4 v25; // w0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10

  if ( (byte_4B14FF4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, commandCodeId, isNew);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__FindIndex__, v9, v10);
    sub_1BCA7E0(&System_Predicate_long__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__, v13, v14);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo, v15, v16);
    byte_4B14FF4 = 1;
  }
  v17 = (Il2CppObject *)sub_1BCAA2C(
                          UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo,
                          commandCodeId,
                          isNew,
                          isAddCommandCode);
  System_Object___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_16;
  v17[1].klass = (Il2CppClass *)commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v25) = 0;
    return v25;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v23 = (System_Predicate_long__o *)sub_1BCAA2C(System_Predicate_long__TypeInfo, klass, v20, v21);
  System_Predicate_long____ctor(
    v23,
    v17,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    0LL);
  if ( !befCommandCodeList )
    goto LABEL_16;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v23,
            (const MethodInfo_358A4C4 *)Method_System_Collections_Generic_List_long__FindIndex__);
  v25 = Index >> 31;
  if ( (Index & 0x80000000) == 0 || !isAddCommandCode )
    return v25;
  v18 = this->fields.befCommandCodeList;
  if ( !v18
    || (klass = (int64_t)v17[1].klass,
        items = v18->fields._items,
        v27 = Method_System_Collections_Generic_List_long__Add__,
        ++v18->fields._version,
        !items) )
  {
LABEL_16:
    sub_1BCAA3C(v18, klass);
  }
  size = v18->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v18,
      klass,
      *(const MethodInfo_3589C90 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = size + 1;
    items->m_Items[size] = klass;
  }
  LOBYTE(v25) = 1;
  return v25;
}


void __fastcall UserPresentBoxWindow__checkNextSvt(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UserPresentBoxWindow_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v14; // x8

  v8 = this;
  if ( (byte_4B14FF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method, v2);
    sub_1BCA7E0(&StringLiteral_9371/*"NEXT_SVT"*/, v9, v10);
    this = (UserPresentBoxWindow_o *)sub_1BCA7E0(&StringLiteral_6504/*"FINAL_SVT"*/, v11, v12);
    byte_4B14FF1 = 1;
  }
  receiveList = v8->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v8->fields.receiveIdx >= receiveList->fields._size )
  {
    v8->fields.receiveList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.receiveList, 0LL, v2, v3, v4, v5, v6, v7);
    this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
    v8->fields.receiveIdx = 0;
    if ( this )
    {
      v14 = &StringLiteral_6504/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v14 = &StringLiteral_9371/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkOverlapSvt(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  bool result; // w0

  if ( (byte_4B14FF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v5, v6);
    byte_4B14FF3 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1BCAA3C(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v9 = size - 1;
  if ( size < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v10,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v9 == v10 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v10;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall UserPresentBoxWindow__endPlay(
        UserPresentBoxWindow_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  AvalonSceneManager_c *v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  ServantRewardAction_o *svtGetAction; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x20

  if ( (byte_4B14FF0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, v8, v9);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, v10, v11);
    byte_4B14FF0 = 1;
  }
  v12 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, end_act, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)end_act, v21, v22, v23, v24, v25, v26);
  svtGetAction = this->fields.svtGetAction;
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
  System_Action___ctor(v31, (Il2CppObject *)v12, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  v13 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14);
  if ( !svtGetAction )
LABEL_8:
    sub_1BCAA3C(v13, v14);
  ServantRewardAction__Play(svtGetAction, v31, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserPresentBoxWindow_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v3 = this;
  if ( (byte_4B14FF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method, v2);
    this = (UserPresentBoxWindow_o *)sub_1BCA7E0(&StringLiteral_9371/*"NEXT_SVT"*/, v4, v5);
    byte_4B14FF5 = 1;
  }
  receiveList = v3->fields.receiveList;
  if ( !receiveList )
    goto LABEL_8;
  receiveIdx = v3->fields.receiveIdx;
  if ( receiveIdx < receiveList->fields._size )
    v3->fields.receiveIdx = receiveIdx + 1;
  this = (UserPresentBoxWindow_o *)v3->fields.myFsm;
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9371/*"NEXT_SVT"*/, 0LL);
}


System_String_o *__fastcall UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t stringLength; // w20
  Il2CppObject *v11; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15003 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25409/*"}"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_25179/*"{0,"*/, v5, v6);
    byte_4B15003 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = System_Int32__ToString((unsigned int)v7->static_fields + 112, 0LL);
  if ( !v8
    || (stringLength = v8->fields._stringLength,
        (v8 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 116, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(v8, v9);
  }
  v11 = (Il2CppObject *)v8;
  v15 = v8->fields._stringLength + 2 * (stringLength - v8->fields._stringLength);
  v12 = System_Int32__ToString((int32_t)&v15, 0LL);
  v13 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_25179/*"{0,"*/,
          v12,
          (System_String_o *)StringLiteral_25409/*"}"*/,
          0LL);
  return System_String__Format(v13, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__receivePresent(
        UserPresentBoxWindow_o *this,
        System_Int64_array *presentIds,
        int32_t selectIdx,
        int32_t selectNum,
        const MethodInfo *method)
{
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
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t Instance; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  int v33; // w8
  System_Collections_Generic_IEnumerable_T__o *v34; // x23
  int v35; // w9
  __int64 v36; // x10
  int v37; // w10
  System_Collections_Generic_List_object__o *v38; // x24
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  NetworkManager_ResultCallbackFunc_o *v48; // x23
  __int64 v49; // x1
  const MethodInfo *v50; // x2

  if ( (byte_4B14FE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, presentIds, *(_QWORD *)&selectIdx);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76803224, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_CallbackReceiveRequest__, v25, v26);
    byte_4B14FE1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_23;
  Instance = (int64_t)UserPresentBoxMaster__getVaildList_40873316(
                        (UserPresentBoxMaster_o *)MasterData_object,
                        Instance,
                        presentIds,
                        0LL);
  if ( !Instance )
    goto LABEL_23;
  v33 = *(_DWORD *)(Instance + 24);
  v34 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v33 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v33 == v35 )
        sub_1BCAA44(Instance, v28);
      v36 = *(_QWORD *)(Instance + 8LL * v35 + 32);
      if ( !v36 )
        goto LABEL_23;
      v37 = *(_DWORD *)(v36 + 72);
      if ( v37 == 11 || v37 == 1 )
        break;
      if ( v33 == ++v35 )
        goto LABEL_18;
    }
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_18;
    }
LABEL_23:
    sub_1BCAA3C(Instance, v28);
  }
LABEL_18:
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                       v28,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor_56235344(
    v38,
    v34,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76803224);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.receiveList, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  this->fields.receiveIdx = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v48 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v45, v46, v47);
  NetworkManager_ResultCallbackFunc___ctor(
    v48,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v49);
  Instance = (int64_t)NetworkManager__getRequest_object_(
                        v48,
                        (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_23;
  UserPresentReceiveRequest__beginRequest(
    (UserPresentReceiveRequest_o *)Instance,
    presentIds,
    selectIdx,
    selectNum,
    0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v50);
}


void __fastcall UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t presentOverflowType; // w8
  struct UserPresentListViewManager_o *v4; // x8
  struct UserPresentBoxErrorDialog_o *dialog; // x19
  struct UserPresentListViewManager_o *v6; // x8
  struct UserPresentBoxErrorDialog_o *v7; // x19
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8

  presentOverflowType = this->fields.presentOverflowType;
  if ( presentOverflowType == 4 )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( userPresentListViewManager )
    {
      this = (UserPresentBoxWindow_o *)userPresentListViewManager->fields.dialog;
      if ( this )
      {
        UserPresentBoxErrorDialog__setJumpType((UserPresentBoxErrorDialog_o *)this, 2, v2);
        return;
      }
    }
    goto LABEL_18;
  }
  if ( presentOverflowType != 2 )
  {
    if ( presentOverflowType != 1 )
      return;
    v4 = this->fields.userPresentListViewManager;
    if ( v4 )
    {
      dialog = v4->fields.dialog;
      if ( dialog )
      {
        if ( (byte_4B14FCD & 1) == 0 )
        {
          sub_1BCA7E0(&UserPresentBoxErrorDialog_TypeInfo, method, v2);
          byte_4B14FCD = 1;
        }
        dialog->fields.jumpType = 0;
        return;
      }
    }
LABEL_18:
    sub_1BCAA3C(this, method);
  }
  v6 = this->fields.userPresentListViewManager;
  if ( !v6 )
    goto LABEL_18;
  v7 = v6->fields.dialog;
  if ( !v7 )
    goto LABEL_18;
  if ( (byte_4B14FCD & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentBoxErrorDialog_TypeInfo, method, v2);
    byte_4B14FCD = 1;
  }
  v7->fields.jumpType = 1;
}


void __fastcall UserPresentBoxWindow__showEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  void *receiveList; // x0
  int32_t v29; // w21
  UserPresentBoxEntity_o *v30; // x20
  int v31; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v35; // x1
  int32_t v36; // w23
  _BOOL4 isNew; // w23
  bool v38; // w22
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v40; // x23
  Il2CppClass *v41; // x24
  __int64 v42; // x1
  int32_t v43; // w23
  const MethodInfo *v44; // x4
  GetCommandCodes_o *v45; // x8
  _BOOL4 v46; // w9
  bool v47; // w2
  int32_t objectId; // w20
  const MethodInfo *v49; // x2
  _BOOL8 IsEquip; // x0
  const MethodInfo *v51; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v53; // x2
  int32_t v54; // w21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v56; // x2
  QuestRewardInfo_o *v57; // x0
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x4
  _BOOL4 v60; // w22
  const MethodInfo *v61; // x7
  __int64 v62; // x2
  __int64 v63; // x3
  int64_t userSvtId; // x21
  CommonUI_o *v65; // x20
  CombineResultEffectComponent_ClickDelegate_o *v66; // x22
  int64_t userCommandCodeId; // x1
  bool v68; // w3
  int32_t num; // w5
  bool v70; // w2
  UserPresentBoxWindow_o *v71; // x0
  int32_t v72; // w4
  int32_t presentDialogMessageId; // w6
  ServantCostumeEntity_o *v74; // [xsp+0h] [xbp-60h] BYREF
  GetCommandCodes_o *v75; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v76; // [xsp+10h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4B14FE9 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v16, v17);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__showEffect_b__88_0__, v26, v27);
    byte_4B14FE9 = 1;
  }
  entity = 0LL;
  v76 = 0LL;
  data = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_105;
  method = (const MethodInfo *)(unsigned int)this->fields.receiveIdx;
  if ( (int)method < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    (int32_t)method,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( !receiveList )
      goto LABEL_105;
    v29 = *((_DWORD *)receiveList + 18);
    v30 = (UserPresentBoxEntity_o *)receiveList;
    if ( Gift__IsServant(v29, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &entity,
                              v30->fields.objectId,
                              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_105;
        receiveList = (void *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_105;
        v31 = (int)receiveList;
        receiveList = (void *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
        if ( ((v31 | (unsigned int)receiveList) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_105;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v79.fields.currentCryptoKey = klass;
          *(_QWORD *)&v79.fields.fakeValue = monitor;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v79, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v35);
          if ( MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v36, v29, 0LL) )
          {
            receiveList = this->fields.effectPanel;
            if ( receiveList )
            {
              receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0LL);
              if ( receiveList )
              {
                receiveList = (void *)UnityEngine_GameObject__get_activeSelf(
                                        (UnityEngine_GameObject_o *)receiveList,
                                        0LL);
                if ( ((unsigned __int8)receiveList & 1) == 0 )
                {
                  receiveList = this->fields.effectPanel;
                  if ( !receiveList )
                    goto LABEL_105;
                  receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0LL);
                  if ( !receiveList )
                    goto LABEL_105;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0LL);
                }
                if ( !data )
                  goto LABEL_105;
                isNew = data->fields.isNew;
                v38 = data->fields.isNew || data->fields.isGetEffect;
                receiveList = (void *)Gift__IsEventSvtJoin(v29, 0LL);
                if ( ((unsigned __int8)receiveList & 1) != 0 )
                {
                  v60 = 0;
                }
                else
                {
                  if ( !data )
                    goto LABEL_105;
                  v60 = !UserPresentBoxWindow__checkNew(this, data->fields.userSvtId, v38, 1, v59);
                }
                receiveList = entity;
                if ( entity )
                {
                  if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL) && isNew )
                    this->fields.gotServant = 1;
                  receiveList = entity;
                  if ( entity )
                  {
                    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0LL) )
                      goto LABEL_83;
                    receiveList = entity;
                    if ( !entity )
                      goto LABEL_105;
                    receiveList = (void *)ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL);
                    if ( ((v60 | (unsigned int)receiveList) & 1) != 0 )
                    {
LABEL_83:
                      receiveList = entity;
                      if ( !entity )
                        goto LABEL_105;
                      if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0LL) )
                      {
                        receiveList = entity;
                        if ( !entity )
                          goto LABEL_105;
                        if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL) )
                        {
                          receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( data )
                          {
                            userSvtId = data->fields.userSvtId;
                            v65 = (CommonUI_o *)receiveList;
                            v66 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                                                    CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                                    method,
                                                                                    v62,
                                                                                    v63);
                            CombineResultEffectComponent_ClickDelegate___ctor(
                              v66,
                              (Il2CppObject *)this,
                              Method_UserPresentBoxWindow__showEffect_b__88_0__,
                              0LL);
                            if ( v65 )
                            {
                              CommonUI__OpenSecretTreasureDeviceForSvtGet(v65, userSvtId, v66, 0LL);
                              return;
                            }
                          }
                          goto LABEL_105;
                        }
                      }
                      goto LABEL_95;
                    }
                    if ( !data )
                      goto LABEL_105;
                    userCommandCodeId = data->fields.userSvtId;
                    v68 = data->fields.isNew || data->fields.isGetEffect;
                    num = v30->fields.num;
                    presentDialogMessageId = data->fields.presentDialogMessageId;
                    v70 = data->fields.isNew;
                    v71 = this;
                    v72 = v29;
LABEL_104:
                    UserPresentBoxWindow__startRewardGetEffect(
                      v71,
                      userCommandCodeId,
                      v70,
                      v68,
                      v72,
                      num,
                      presentDialogMessageId,
                      v61);
                    return;
                  }
                }
              }
            }
LABEL_105:
            sub_1BCAA3C(receiveList, method);
          }
        }
      }
    }
    else if ( Gift__IsCommandCode(v29, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &v76,
                              v30->fields.objectId,
                              (const MethodInfo_31B2E94 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !v76 )
          goto LABEL_105;
        getCommandCodeList = this->fields.getCommandCodeList;
        v41 = v76[1].klass;
        v40 = v76[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v80.fields.currentCryptoKey = v41;
        *(_QWORD *)&v80.fields.fakeValue = v40;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v80, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v42);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v75, v43, 0LL) )
        {
          receiveList = this->fields.effectPanel;
          if ( !receiveList )
            goto LABEL_105;
          receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0LL);
          if ( !receiveList )
            goto LABEL_105;
          receiveList = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0LL);
          if ( ((unsigned __int8)receiveList & 1) == 0 )
          {
            receiveList = this->fields.effectPanel;
            if ( !receiveList )
              goto LABEL_105;
            receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0LL);
            if ( !receiveList )
              goto LABEL_105;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0LL);
          }
          v45 = v75;
          if ( !v75 )
            goto LABEL_105;
          v46 = v75->fields.isNew;
          this->fields.gotServant = v46;
          v47 = v46 || v45->fields.isGetEffect;
          receiveList = (void *)UserPresentBoxWindow__checkNewCommandCode(
                                  this,
                                  v45->fields.userCommandCodeId,
                                  v47,
                                  1,
                                  v44);
          if ( ((unsigned __int8)receiveList & 1) != 0 )
          {
            if ( !v75 )
              goto LABEL_105;
            userCommandCodeId = v75->fields.userCommandCodeId;
            v68 = v75->fields.isNew || v75->fields.isGetEffect;
            num = v30->fields.num;
            v70 = v75->fields.isNew;
            v71 = this;
            v72 = v29;
            presentDialogMessageId = 0;
            goto LABEL_104;
          }
        }
      }
    }
    else if ( Gift__IsCostumeRelease(v29, 0LL) )
    {
      objectId = v30->fields.objectId;
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      if ( ServantCostumeMaster__TryGetEntity(
             (ServantCostumeMaster_o *)receiveList,
             &v74,
             objectId / 100,
             objectId % 100,
             0LL) )
      {
        receiveList = this->fields.effectPanel;
        if ( receiveList )
        {
          receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0LL);
          if ( receiveList )
          {
            receiveList = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0LL);
            if ( ((unsigned __int8)receiveList & 1) == 0 )
            {
              receiveList = this->fields.effectPanel;
              if ( !receiveList )
                goto LABEL_105;
              receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0LL);
              if ( !receiveList )
                goto LABEL_105;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0LL);
            }
            if ( v74 )
            {
              UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(this, v74->fields.name, v49);
              return;
            }
          }
        }
        goto LABEL_105;
      }
    }
    else
    {
      IsEquip = Gift__IsEquip(v29, 0LL);
      if ( IsEquip )
      {
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v30, v51);
        UserPresentBoxWindow__startRewardEquipGetEffect(this, QuestRewardInfo, v53);
        return;
      }
      if ( Gift__IsItem(v29, 0LL) )
      {
        v54 = v30->fields.objectId;
        receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !receiveList )
          goto LABEL_105;
        if ( CommonUI__IsGetItemEffect((CommonUI_o *)receiveList, v54, 0LL) )
        {
          receiveList = this->fields.effectPanel;
          if ( receiveList )
          {
            receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0LL);
            if ( receiveList )
            {
              activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0LL);
              if ( !activeSelf )
              {
                receiveList = this->fields.effectPanel;
                if ( !receiveList )
                  goto LABEL_105;
                receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0LL);
                if ( !receiveList )
                  goto LABEL_105;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0LL);
              }
              v57 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v30, v56);
              UserPresentBoxWindow__startRewardSpecialItemGetEffect(this, v57, v58);
              return;
            }
          }
          goto LABEL_105;
        }
      }
    }
  }
LABEL_95:
  UserPresentBoxWindow__EndEffect(this, method);
}


void __fastcall UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4B14FF6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, v10, v11);
    byte_4B14FF6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)v14;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !v19 )
LABEL_8:
    sub_1BCAA3C(Instance, v13);
  CommonUI__maskFadein(v19, DEFAULT_FADE_TIME, v21, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  AvalonSceneManager_c *v33; // x8
  CommonUI_o *v34; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4B14FEB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, name, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__, v10, v11);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, v12, v13);
    byte_4B14FEB = 1;
  }
  v14 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, name, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)name, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = AvalonSceneManager_TypeInfo;
  v34 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v30);
    v33 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v33->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v14,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !v34 )
LABEL_9:
    sub_1BCAA3C(touchBlocker, v16);
  CommonUI__maskFadeout(v34, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  AvalonSceneManager_c *v33; // x8
  CommonUI_o *v34; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4B14FEC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, questRewardInfo, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__, v10, v11);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, v12, v13);
    byte_4B14FEC = 1;
  }
  v14 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, questRewardInfo, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = questRewardInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)questRewardInfo, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = AvalonSceneManager_TypeInfo;
  v34 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v30);
    v33 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v33->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v14,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !v34 )
LABEL_9:
    sub_1BCAA3C(touchBlocker, v16);
  CommonUI__maskFadeout(v34, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__startRewardGetEffect(
        UserPresentBoxWindow_o *this,
        int64_t userSvtID,
        bool isNew,
        bool isDoEffect,
        int32_t giftType,
        int32_t num,
        int32_t presentDialogMessageId,
        const MethodInfo *method)
{
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  int64_t v41; // x20
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  UserServantEntity_o *v51; // x21
  EventServantEntity_o *EventServant_40949736; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  EventServantEntity_o *v55; // x22
  __int64 v56; // x19
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *JoinMessage; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  __int64 *v71; // x8
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  AvalonSceneManager_c *v76; // x8
  CommonUI_o *v77; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v79; // x21
  System_String_o *Message; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x1
  System_String_o *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  Il2CppObject *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  AvalonSceneManager_c *v99; // x8
  CommonUI_o *v100; // x20
  float v101; // s8
  System_Action_o *v102; // x21

  if ( (byte_4B14FEA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userSvtID, isNew);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__, v29, v30);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__, v33, v34);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_12499/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12500/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/, v39, v40);
    byte_4B14FEA = 1;
  }
  v41 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, userSvtID, isNew, isDoEffect);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_29;
  *(_QWORD *)(v41 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)this, v44, v45, v46, v47, v48, v49);
  *(_DWORD *)(v41 + 24) = giftType;
  *(_QWORD *)(v41 + 32) = userSvtID;
  *(_BYTE *)(v41 + 40) = isDoEffect;
  *(_DWORD *)(v41 + 44) = num;
  *(_BYTE *)(v41 + 48) = isNew;
  *(_DWORD *)(v41 + 52) = presentDialogMessageId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v50);
  ScriptManager__DeleteDialogKey(0LL);
  if ( !Gift__IsEventSvtJoin(*(_DWORD *)(v41 + 24), 0LL) )
    goto LABEL_17;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v41 + 32),
                                (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v51 = (UserServantEntity_o *)Instance;
  EventServant_40949736 = UserServantEntity__getEventServant_40949736((UserServantEntity_o *)Instance, 1, 0LL);
  if ( !EventServant_40949736 || (v55 = EventServant_40949736, EventServant_40949736->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v72 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v76 = AvalonSceneManager_TypeInfo;
      v77 = (CommonUI_o *)v72;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v73);
        v76 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v76->static_fields->DEFAULT_FADE_TIME;
      v79 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v73, v74, v75);
      System_Action___ctor(
        v79,
        (Il2CppObject *)v41,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v77 )
      {
        CommonUI__maskFadeout(v77, 1, DEFAULT_FADE_TIME, v79, 0LL);
        return;
      }
    }
LABEL_29:
    sub_1BCAA3C(Instance, v43);
  }
  v56 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v43, v53, v54);
  System_Object___ctor((Il2CppObject *)v56, 0LL);
  if ( !v56 )
    goto LABEL_29;
  *(_QWORD *)(v56 + 32) = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 32), v41, v57, v58, v59, v60, v61, v62);
  if ( UserServantEntity__HasStatus(v51, 64, 0LL) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v55, 0LL);
    *(_QWORD *)(v56 + 24) = JoinMessage;
    sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 24), (int64_t)JoinMessage, v64, v65, v66, v67, v68, v69);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70);
    v71 = &StringLiteral_12500/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v55, 0LL);
    *(_QWORD *)(v56 + 24) = Message;
    sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 24), (int64_t)Message, v81, v82, v83, v84, v85, v86);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
    v71 = &StringLiteral_12499/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v88 = LocalizationManager__Get((System_String_o *)*v71, 0LL);
  *(_QWORD *)(v56 + 16) = v88;
  sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 16), (int64_t)v88, v89, v90, v91, v92, v93, v94);
  v95 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v99 = AvalonSceneManager_TypeInfo;
  v100 = (CommonUI_o *)v95;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v96);
    v99 = AvalonSceneManager_TypeInfo;
  }
  v101 = v99->static_fields->DEFAULT_FADE_TIME;
  v102 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v96, v97, v98);
  System_Action___ctor(
    v102,
    (Il2CppObject *)v56,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v100 )
    goto LABEL_29;
  CommonUI__maskFadein(v100, v101, v102, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  AvalonSceneManager_c *v33; // x8
  CommonUI_o *v34; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4B14FED & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, questRewardInfo, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__, v10, v11);
    sub_1BCA7E0(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, v12, v13);
    byte_4B14FED = 1;
  }
  v14 = sub_1BCAA2C(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, questRewardInfo, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = questRewardInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)questRewardInfo, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = AvalonSceneManager_TypeInfo;
  v34 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v30);
    v33 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v33->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v14,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !v34 )
LABEL_9:
    sub_1BCAA3C(touchBlocker, v16);
  CommonUI__maskFadeout(v34, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow_ClickDelegate___ctor(
        UserPresentBoxWindow_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0C2C0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C278;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserPresentBoxWindow_ClickDelegate__BeginInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = hasGetServant;
  if ( (byte_4B1500E & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, hasGetServant, callback);
    byte_4B1500E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__Invoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    hasGetServant,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass102_0___ctor(
        UserPresentBoxWindow___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass102_0___CheckSvtGetTutorial_b__0(
        UserPresentBoxWindow___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass82_0___ctor(
        UserPresentBoxWindow___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass82_0___ShowExpiredPresents_b__0(
        UserPresentBoxWindow___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v17; // w9
  struct UserPresentBoxWindow_o *v18; // x8
  struct UserPresentListViewManager_o *v19; // x8
  void *v20; // x1

  if ( (byte_4B1500F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B1500F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_4B1504D & 1) == 0 )
  {
    Instance = (CommonUI_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v7, v8);
    byte_4B1504D = 1;
  }
  checkedIdList = userPresentListViewManager->fields.checkedIdList;
  if ( checkedIdList )
  {
    v17 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v17;
  }
  v18 = this->fields.__4__this;
  if ( !v18 || (v19 = v18->fields.userPresentListViewManager) == 0LL )
LABEL_13:
    sub_1BCAA3C(Instance, v7);
  v20 = StringLiteral_1/*""*/;
  v19->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v19->fields._expiredPresents_k__BackingField,
    (int64_t)v20,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass85_0___ctor(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__0(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserPresentBoxWindow___c__DisplayClass85_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct UserPresentBoxWindow_o *_4__this; // x8
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x20
  System_Action_o *_9__1; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4B15010 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isOk, method);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_1BCA7E0(
                                                             &Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
                                                             v5,
                                                             v6);
    byte_4B15010 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isOk, method, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !evpDialog )
LABEL_8:
    sub_1BCAA3C(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_38184792(evpDialog, _9__1, method);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow___c__DisplayClass85_0_o *v2; // x19
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this
    || (v2 = this,
        UserPresentBoxWindow__UpdateEventInfos((UserPresentBoxWindow_o *)this, method),
        (this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)v2->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  UserPresentBoxWindow__ShowEventPointReward(
    (UserPresentBoxWindow_o *)this,
    v2->fields.idx + 1,
    v2->fields.callback,
    v3);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___ctor(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__0(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B15012 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__, v6, v7);
    byte_4B15012 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v13 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  SummonAssetManager__LoadSummonAssets(v13, _9__3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B15011 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide, method);
    byte_4B15011 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v5);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__3(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t Instance; // x0
  __int64 v23; // x1
  Il2CppObject *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  Il2CppObject *v26; // x20
  struct UserPresentBoxWindow_o *v27; // x8
  SummonAssetManager_o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t v35; // w21
  struct UserPresentBoxWindow_o *v36; // x8
  ServantRewardAction_o *svtGetAction; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v40; // w0
  __int64 v41; // x1
  Il2CppObject v42; // q1
  int32_t v43; // w23
  int64_t v44; // x0
  Il2CppClass *v45; // x8
  int64_t v46; // x20
  __int64 v47; // x2
  __int64 v48; // x3
  struct UserPresentBoxWindow_o *v49; // x8
  struct ServantRewardAction_o *v50; // x8
  Il2CppObject *v51; // x0
  struct UserPresentBoxWindow_o *v52; // x22
  Il2CppObject *v53; // x21
  struct UserPresentBoxWindow_o *v54; // x8
  SummonAssetManager_o *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct UserPresentBoxWindow_o *v62; // x8
  ServantRewardAction_o *v63; // x20
  Il2CppObject v64; // q1
  bool isNew; // w2
  int64_t v66; // x1
  bool v67; // w3
  int32_t v68; // w4
  ServantRewardAction_o *v69; // x0
  struct UserPresentBoxWindow_o *v70; // x8
  ServantRewardAction_o *v71; // x21
  void *v72; // x22
  Il2CppClass *v73; // x23
  int32_t v74; // w0
  __int64 v75; // x1
  Il2CppObject v76; // q1
  int32_t v77; // w22
  int64_t v78; // x0
  Il2CppClass *v79; // x8
  int64_t v80; // x20
  Il2CppObject v81; // q1
  Il2CppObject *v82; // x19
  System_Action_o *v83; // x20
  const MethodInfo *v84; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4B15013 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_UserPresentBoxWindow_EndEffect__, v20, v21);
    byte_4B15013 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    v26 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v27 = this->fields.__4__this;
    if ( !v27 )
      goto LABEL_55;
    v28 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v27->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v28 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v28, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_55;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.svtGetAction, Instance, v29, v30, v31, v32, v33, v34);
    if ( this->fields.isDoEffect )
    {
      if ( v26 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_40949736((UserServantEntity_o *)v26, 1, 0LL);
        v35 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v35 = 6;
          else
            v35 = 14;
        }
        v36 = this->fields.__4__this;
        if ( v36 )
        {
          svtGetAction = v36->fields.svtGetAction;
          klass = v26[5].klass;
          monitor = v26[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
          *(_QWORD *)&v90.fields.currentCryptoKey = klass;
          *(_QWORD *)&v90.fields.fakeValue = monitor;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v90, 0LL);
          v42 = v26[2];
          v43 = v40;
          *(Il2CppObject *)&v89.fields.currentCryptoKey = v26[1];
          *(Il2CppObject *)&v89.fields.fakeValue = v42;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41);
          v88 = v89;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v88, 0LL);
          v45 = v26[6].klass;
          *(_QWORD *)&v91.fields.fakeValue = v26[6].monitor;
          v46 = v44;
          *(_QWORD *)&v91.fields.currentCryptoKey = v45;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v91, 0LL);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v43,
              v46,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v35,
              0LL);
            if ( !this->fields.isNew )
              goto LABEL_53;
            v49 = this->fields.__4__this;
            if ( v49 )
            {
              v50 = v49->fields.svtGetAction;
              if ( v50 )
              {
                v50->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_53;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1BCAA3C(Instance, v23);
    }
    v70 = this->fields.__4__this;
    if ( !v70 || !v26 )
      goto LABEL_55;
    v71 = v70->fields.svtGetAction;
    v73 = v26[5].klass;
    v72 = v26[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    *(_QWORD *)&v92.fields.currentCryptoKey = v73;
    *(_QWORD *)&v92.fields.fakeValue = v72;
    v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v92, 0LL);
    v76 = v26[2];
    v77 = v74;
    *(Il2CppObject *)&v89.fields.currentCryptoKey = v26[1];
    *(Il2CppObject *)&v89.fields.fakeValue = v76;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v75);
    v87 = v89;
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v87, 0LL);
    v79 = v26[6].klass;
    *(_QWORD *)&v93.fields.fakeValue = v26[6].monitor;
    v80 = v78;
    *(_QWORD *)&v93.fields.currentCryptoKey = v79;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v93, 0LL);
    if ( !v71 )
      goto LABEL_55;
    ServantRewardAction__Setup(v71, v77, v80, Instance, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_55;
    v51 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v52 = this->fields.__4__this;
    v53 = v51;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v54 = this->fields.__4__this;
    if ( !v54 )
      goto LABEL_55;
    v55 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v54->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v55 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v55, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !v52 )
      goto LABEL_55;
    v52->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1BCA784((PartyOrganizationUtility_o *)&v52->fields.svtGetAction, Instance, v56, v57, v58, v59, v60, v61);
    v62 = this->fields.__4__this;
    if ( !v62 || !v53 )
      goto LABEL_55;
    v63 = v62->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v64 = v53[2];
      *(Il2CppObject *)&v89.fields.currentCryptoKey = v53[1];
      *(Il2CppObject *)&v89.fields.fakeValue = v64;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
      v86 = v89;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v86, 0LL);
      if ( !v63 )
        goto LABEL_55;
      isNew = this->fields.isNew;
      v66 = Instance;
      v67 = 1;
      v68 = 14;
      v69 = v63;
    }
    else
    {
      v81 = v53[2];
      *(Il2CppObject *)&v89.fields.currentCryptoKey = v53[1];
      *(Il2CppObject *)&v89.fields.fakeValue = v81;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
      v85 = v89;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v85, 0LL);
      if ( !v63 )
        goto LABEL_55;
      v66 = Instance;
      v68 = 6;
      v69 = v63;
      isNew = 0;
      v67 = 0;
    }
    ServantRewardAction__SetupCommandCode_35299020(v69, v66, isNew, v67, v68, 0LL);
  }
LABEL_53:
  v82 = (Il2CppObject *)this->fields.__4__this;
  v83 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v47, v48);
  System_Action___ctor(v83, v82, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v82 )
    goto LABEL_55;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v82, v83, v84);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_1___ctor(
        UserPresentBoxWindow___c__DisplayClass89_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_1___startRewardGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass89_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v16; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B15014 & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__, v6, v7);
    byte_4B15014 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v16 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v9, v10, v11);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__2,
      (int64_t)_9__2,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v16 )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  CommonUI__OpenNotificationDialog_30768824(
    v16,
    title,
    message,
    _9__2,
    -1,
    0,
    0,
    0,
    0,
    1,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___ctor(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__0(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B15015 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__, v6, v7);
    byte_4B15015 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__LoadCostumeReleaseEffect(v13, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x21
  System_String_o *name; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B15016 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__, v6, v7);
    byte_4B15016 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__OpenCostumeReleaseEffect(v13, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B15017 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B15017 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v5);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___ctor(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__0(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B15018 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__, v6, v7);
    byte_4B15018 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__LoadEquipGetEffect(v13, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B15019 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__, v6, v7);
    byte_4B15019 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__OpenEquipGetEffect(v13, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B1501A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1501A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v5);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___ctor(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__0(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  CommonUI_o *v13; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1501B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__, v6, v7);
    byte_4B1501B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v13 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__LoadItemGetEffect(v13, questRewardInfo, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *Instance; // x0
  __int64 v9; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  CommonUI_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v15; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B1501C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__, v6, v7);
    byte_4B1501C = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v11 = (CommonUI_o *)Instance;
  Instance = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v15 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v12, v13);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v17, v18, v19, v20, v21, v22);
  }
  if ( !v11 )
LABEL_9:
    sub_1BCAA3C(Instance, v9);
  CommonUI__OpenItemGetEffect(v11, v15, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B1501D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1501D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v5);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass95_0___ctor(
        UserPresentBoxWindow___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass95_0___endPlay_b__0(
        UserPresentBoxWindow___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserPresentBoxWindow___c__DisplayClass95_0_o *v3; // x19
  struct UserPresentBoxWindow_o *_4__this; // x8
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct UserPresentBoxWindow_o *v7; // x8

  v3 = this;
  if ( (byte_4B1501E & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1501E = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)_4__this->fields.svtGetAction;
  if ( !this )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
  v7 = v3->fields.__4__this;
  if ( !v7 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v7->fields.touchBlocker) == 0LL )
LABEL_10:
    sub_1BCAA3C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass99_0___ctor(
        UserPresentBoxWindow___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserPresentBoxWindow___c__DisplayClass99_0___checkNewCommandCode_b__0(
        UserPresentBoxWindow___c__DisplayClass99_0_o *this,
        int64_t a,
        const MethodInfo *method)
{
  return this->fields.commandCodeId == a;
}


void __fastcall UserPresentBoxWindow_evPointReward___ctor(
        UserPresentBoxWindow_evPointReward_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow_evReward___ctor(UserPresentBoxWindow_evReward_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxWindow_resData___ctor(UserPresentBoxWindow_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}