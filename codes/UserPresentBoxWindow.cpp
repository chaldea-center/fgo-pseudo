void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_long__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BB34D2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4BB34D2 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v6;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v13;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.befCommandCodeList,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserPresentBoxWindow__CallbackReceiveRequest(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UserPresentBoxWindow_o *v19; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  int64_t m_CancellationTokenSource; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct PlayMakerFSM_o *v28; // x8
  int64_t fsm; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct PlayMakerFSM_o *v36; // x8
  int64_t fsmTemplate; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct PlayMakerFSM_o *v44; // x8
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct PlayMakerFSM_o *v52; // x8
  int64_t addEventHandlers; // x1
  System_Action_o *v54; // x20
  const MethodInfo *v55; // x2

  v4 = this;
  if ( (byte_4BB34AC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, result);
    sub_1C13D24(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___, v5);
    sub_1C13D24(&JsonManager_TypeInfo, v6);
    sub_1C13D24(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, v7);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v8);
    sub_1C13D24(&StringLiteral_16061/*"You must call the Bind method before performing this operation."*/, v9);
    this = (UserPresentBoxWindow_o *)sub_1C13D24(&StringLiteral_16320/*"\\p{_xmlI}"*/, v10);
    byte_4BB34AC = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_62976260(result, (System_String_o *)StringLiteral_22421/*"newAttributes"*/, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(v4, v11);
    return;
  }
  v12 = (Il2CppObject *)System_String__Concat_62979204(
                          (System_String_o *)StringLiteral_16061/*"You must call the Bind method before performing this operation."*/,
                          result,
                          (System_String_o *)StringLiteral_16320/*"\\p{_xmlI}"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v12,
                                     (const MethodInfo_2FF6CCC *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_20;
  v19 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_20;
  m_CancellationTokenSource = (int64_t)myFsm->fields.m_CancellationTokenSource;
  v4->fields.getSvtList = (struct GetSvts_array *)m_CancellationTokenSource;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v4->fields.getSvtList,
    m_CancellationTokenSource,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v28 = v19->fields.myFsm;
  if ( !v28 )
    goto LABEL_20;
  fsm = (int64_t)v28->fields.fsm;
  v4->fields.getCommandCodeList = (struct GetCommandCodes_array *)fsm;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.getCommandCodeList, fsm, v22, v23, v24, v25, v26, v27);
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v36 = v19->fields.myFsm;
  if ( !v36 )
    goto LABEL_20;
  v4->fields.presentOverflowType = v36->fields.m_CachedPtr;
  fsmTemplate = (int64_t)v36->fields.fsmTemplate;
  v4->fields.evPointRewardList = (struct UserPresentBoxWindow_evPointReward_array *)fsmTemplate;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.evPointRewardList, fsmTemplate, v30, v31, v32, v33, v34, v35);
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v44 = v19->fields.myFsm;
  if ( !v44 )
    goto LABEL_20;
  v45 = *(_QWORD *)&v44->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = (struct GetSvtCoin_array *)v45;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.getSvtCoins, v45, v38, v39, v40, v41, v42, v43);
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_1C13F88(this, result);
  v52 = v19->fields.myFsm;
  if ( !v52 )
LABEL_20:
    sub_1C13F80(this, result);
  addEventHandlers = (int64_t)v52->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)addEventHandlers;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v4->fields.overflowSvtCoinInfos,
    addEventHandlers,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v54 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v54, v55);
}


bool __fastcall UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *Filter_41945008; // x0
  ListViewSort_o **v14; // x8
  ListViewSort_o *v15; // x19
  UserPresentBoxMaster_c *v16; // x0
  bool v17; // w8
  bool result; // w0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v20; // w1

  if ( (byte_4BB34A9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_IndexOf_int___, servantMaster);
    sub_1C13D24(&BalanceConfig_TypeInfo, v8);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C13D24(&UserPresentBoxMaster_TypeInfo, v11);
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, v12);
    byte_4BB34A9 = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, servantMaster);
    byte_4BB3525 = 1;
  }
  Filter_41945008 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_41945008 = UserPresentListViewManager_TypeInfo;
  }
  v14 = (ListViewSort_o **)*((_QWORD *)Filter_41945008 + 23);
  v15 = *v14;
  if ( !*v14 )
    goto LABEL_52;
  Filter_41945008 = (void *)ListViewSort__GetFilter_41945008(*v14, 13, 0LL);
  if ( ((unsigned __int8)Filter_41945008 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_52;
LABEL_20:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_41945008 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_41945008 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_41945008 + 23) + 680LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( !*((_DWORD *)Filter_41945008 + 56) )
          {
            j_il2cpp_runtime_class_init_0(Filter_41945008);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_41945008 = (void *)System_Array__IndexOf_int_(
                                      PresentBoxFilterSvtEquipMaterial,
                                      userPresentBoxEntity->fields.objectId,
                                      (const MethodInfo_308C194 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)Filter_41945008 & 0x80000000) == 0 )
            return ListViewSort__GetFilter_41945008(v15, 4, 0LL);
        }
        if ( servantMaster )
        {
          Filter_41945008 = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_41945008 )
          {
            switch ( *((_DWORD *)Filter_41945008 + 21) )
            {
              case 1:
              case 0xC:
                goto LABEL_21;
              case 3:
                v20 = 1;
                return ListViewSort__GetFilter_41945008(v15, v20, 0LL);
              case 6:
                v20 = 3;
                return ListViewSort__GetFilter_41945008(v15, v20, 0LL);
              case 7:
                v20 = 2;
                return ListViewSort__GetFilter_41945008(v15, v20, 0LL);
              case 8:
                v20 = 4;
                return ListViewSort__GetFilter_41945008(v15, v20, 0LL);
              default:
                goto LABEL_39;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_41945008 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_3238624 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_41945008 )
          break;
        switch ( *((_DWORD *)Filter_41945008 + 12) )
        {
          case 2:
          case 0x11:
          case 0x14:
          case 0x24:
            v20 = 10;
            break;
          case 3:
          case 4:
            v20 = 6;
            break;
          case 5:
            v20 = 11;
            break;
          case 9:
            v20 = 8;
            break;
          case 0xA:
          case 0xB:
          case 0xC:
          case 0x19:
          case 0x1D:
            v20 = 7;
            break;
          case 0xE:
          case 0xF:
          case 0x12:
          case 0x13:
          case 0x1C:
            v20 = 12;
            break;
          case 0x18:
            v20 = 9;
            break;
          default:
            goto LABEL_39;
        }
        return ListViewSort__GetFilter_41945008(v15, v20, 0LL);
      case 6:
      case 7:
LABEL_21:
        v17 = ListViewSort__GetFilter_41945008(v15, 0, 0LL);
        result = 0;
        if ( !v17 )
          return result;
        return 1;
      case 0xB:
        v20 = 5;
        return ListViewSort__GetFilter_41945008(v15, v20, 0LL);
      default:
LABEL_39:
        v20 = 14;
        return ListViewSort__GetFilter_41945008(v15, v20, 0LL);
    }
LABEL_52:
    sub_1C13F80(Filter_41945008, servantMaster);
  }
  Filter_41945008 = UserPresentBoxMaster_TypeInfo;
  if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
  if ( !userPresentBoxEntity )
    goto LABEL_52;
  if ( !UserPresentBoxEntity__IsEnableFlag(
          userPresentBoxEntity,
          UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
          0LL) )
  {
    v16 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v16 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_41945008 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v16->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_41945008 & 1) == 0 )
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
  __int64 v11; // x1
  void *Filter_41945008; // x0
  ListViewSort_o **v13; // x8
  ListViewSort_o *v14; // x19
  UserPresentBoxMaster_c *v15; // x0
  int32_t giftType; // w8
  _DWORD *v17; // x8
  bool Filter_41945056; // w8
  bool result; // w0
  int32_t v20; // w1

  if ( (byte_4BB34AA & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, servantLimitMaster);
    sub_1C13D24(&UserPresentBoxMaster_TypeInfo, v10);
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, v11);
    byte_4BB34AA = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, servantLimitMaster);
    byte_4BB3525 = 1;
  }
  Filter_41945008 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_41945008 = UserPresentListViewManager_TypeInfo;
  }
  v13 = (ListViewSort_o **)*((_QWORD *)Filter_41945008 + 23);
  v14 = *v13;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v14 )
    goto LABEL_49;
  Filter_41945008 = (void *)ListViewSort__GetFilter_41945008(*v13, 13, 0LL);
  if ( ((unsigned __int8)Filter_41945008 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_49;
  }
  else
  {
LABEL_12:
    Filter_41945008 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    if ( !userPresentBoxEntity )
      goto LABEL_49;
    if ( UserPresentBoxEntity__IsEnableFlag(
           userPresentBoxEntity,
           UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
           0LL) )
    {
      return 1;
    }
    v15 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v15 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_41945008 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v15->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_41945008 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( servantLimitMaster )
    {
      Filter_41945008 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0LL);
      if ( Filter_41945008 )
      {
        v17 = (char *)Filter_41945008 + 24;
        goto LABEL_30;
      }
      return 1;
    }
LABEL_49:
    sub_1C13F80(Filter_41945008, servantLimitMaster);
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_49;
  Filter_41945008 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_3238624 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_41945008 )
    return 1;
  v17 = (char *)Filter_41945008 + 64;
LABEL_30:
  switch ( *v17 )
  {
    case 0:
      if ( !v14 )
        goto LABEL_49;
      if ( !ListViewSort__CheckPresentBoxRarityFilterAll(v14, 0LL)
        && !ListViewSort__UnCheckPresentBoxRarityFilterAll(v14, 0LL) )
      {
        goto LABEL_48;
      }
      return 1;
    case 1:
      if ( !v14 )
        goto LABEL_49;
      Filter_41945056 = ListViewSort__GetFilter_41945056(v14, 0, 0LL);
      result = 0;
      if ( !Filter_41945056 )
        return result;
      return 1;
    case 2:
      if ( !v14 )
        goto LABEL_49;
      v20 = 1;
      goto LABEL_46;
    case 3:
      if ( !v14 )
        goto LABEL_49;
      v20 = 2;
      goto LABEL_46;
    case 4:
      if ( !v14 )
        goto LABEL_49;
      v20 = 3;
      goto LABEL_46;
    case 5:
      if ( !v14 )
        goto LABEL_49;
      v20 = 4;
LABEL_46:
      if ( ListViewSort__GetFilter_41945056(v14, v20, 0LL) )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  void *receiveList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Action_o **v18; // x22
  int32_t receiveIdx; // w1
  _DWORD *v20; // x20
  System_Action_o *v21; // x21

  if ( (byte_4BB34C1 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v6);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__, v7);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, v8);
    byte_4BB34C1 = 1;
  }
  v9 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = callback;
  v18 = (System_Action_o **)(v9 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)callback, v12, v13, v14, v15, v16, v17);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v20 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0LL);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v21 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          v21,
          (Il2CppObject *)v9,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v21, v20[19], 0, 0, 0, 0LL);
        return;
      }
      if ( *v18 )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*v18)->fields.m_target)(
          (*v18)->fields.original_method_info,
          *(_QWORD *)&(*v18)->fields.extra_arg);
        return;
      }
    }
LABEL_14:
    sub_1C13F80(receiveList, v11);
  }
  if ( *v18 )
    ActionExtensions__Call(*v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__ClickFilterEnd(
        UserPresentBoxWindow_o *this,
        bool result,
        const MethodInfo *method)
{
  UserPresentListViewManager_c *v5; // x0
  struct PresentBoxFilterSelectMenu_o *sortInfo; // x0
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v9; // w9

  if ( (byte_4BB34D1 & 1) == 0 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, result);
    byte_4BB34D1 = 1;
  }
  if ( result )
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4BB3525 )
    {
      sub_1C13D24(&UserPresentListViewManager_TypeInfo, result);
      byte_4BB3525 = 1;
    }
    v5 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v5 = UserPresentListViewManager_TypeInfo;
    }
    sortInfo = (struct PresentBoxFilterSelectMenu_o *)v5->static_fields->sortInfo;
    if ( !sortInfo
      || (ListViewSort__Save((ListViewSort_o *)sortInfo, 0LL),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
LABEL_19:
      sub_1C13F80(sortInfo, result);
    }
    if ( (byte_4BB3517 & 1) == 0 )
    {
      sub_1C13D24(&Method_System_Collections_Generic_List_long__Clear__, result);
      byte_4BB3517 = 1;
    }
    checkedIdList = userPresentListViewManager->fields.checkedIdList;
    if ( checkedIdList )
    {
      v9 = checkedIdList->fields._version + 1;
      checkedIdList->fields._size = 0;
      checkedIdList->fields._version = v9;
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
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BB34C7 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v3);
    byte_4BB34C7 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)userPresentListViewManager & 1) != 0 )
  {
    if ( !mInstance )
      goto LABEL_17;
    TerminalSceneComponent__UpdateQuestBoardList((TerminalSceneComponent_o *)mInstance, 0LL);
  }
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__DestroyList(userPresentListViewManager, v7),
        (userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL)) == 0LL) )
  {
LABEL_17:
    sub_1C13F80(userPresentListViewManager, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentListViewManager, 0, 0LL);
}


QuestRewardInfo_o *__fastcall UserPresentBoxWindow__CreateQuestRewardInfo(
        UserPresentBoxWindow_o *this,
        UserPresentBoxEntity_o *userPresentBox,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  QuestRewardInfo_o *result; // x0

  if ( (byte_4BB34B8 & 1) == 0 )
  {
    sub_1C13D24(&QuestRewardInfo_TypeInfo, userPresentBox);
    byte_4BB34B8 = 1;
  }
  v4 = sub_1C13F70(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v4, 0LL);
  if ( !userPresentBox || !v4 )
    sub_1C13F80(v5, v6);
  result = (QuestRewardInfo_o *)v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v4 + 24) = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BB34B9 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5575/*"END_CLOSE"*/, method);
    byte_4BB34B9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C13F80(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5575/*"END_CLOSE"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BB34C2 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_3620/*"CLICK_USER_SERVANT_COIN"*/, method);
    byte_4BB34C2 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C13F80(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3620/*"CLICK_USER_SERVANT_COIN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4BB34AF & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, res);
    sub_1C13D24(&Method_UserPresentBoxWindow_EndReceive__, v4);
    byte_4BB34AF = 1;
  }
  v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__EventPointRewardWithSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4BB34B0 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, res);
    sub_1C13D24(&Method_UserPresentBoxWindow_EndEffectReceive__, v4);
    byte_4BB34B0 = 1;
  }
  v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v5, v6);
}


bool __fastcall UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  char v13; // w20
  int v14; // w21
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BB34AD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BB34AD = 1;
  }
  memset(&v17, 0, sizeof(v17));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C13F80(v8, v9);
    if ( !Gift__IsCostumeRelease((int32_t)v17.fields._current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_1C13F80(0LL, v12);
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)Instance, HIDWORD(current[4].monitor), 0LL) )
        continue;
    }
    v13 = 1;
    v14 = 6;
    goto LABEL_14;
  }
  v13 = 0;
  v14 = 7;
LABEL_14:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return v13 & (v14 == 6);
}


void __fastcall UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  _BOOL4 isReceiveFlg; // w20
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  System_Action_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x4

  if ( (byte_4BB34C3 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_UserPresentBoxWindow_OnClickAll__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow_ProcessClickAll__, v4);
    sub_1C13D24(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__, v5);
    byte_4BB34C3 = 1;
  }
  v6 = Method_UserPresentBoxWindow_OnClickAll__;
  isReceiveFlg = this->fields.isReceiveFlg;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickAll__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
  if ( isReceiveFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_11;
    UserPresentListViewManager__SetMode_38616384(userPresentListViewManager, 2, v10);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, v9),
          v14 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
          System_Action___ctor(v14, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v15 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
          System_Action___ctor(v15, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_11:
      sub_1C13F80(userPresentListViewManager, v9);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v14, v15, v16);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickBack(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct UserPresentBoxWindow_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4BB34C8 & 1) == 0 )
  {
    sub_1C13D24(&Method_UserPresentBoxWindow_OnClickBack__, method);
    byte_4BB34C8 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      this->fields.gotServant,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall UserPresentBoxWindow__OnClickCheckedItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4BB34C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_UserPresentBoxWindow_OnClickCheckedItem__, method);
    byte_4BB34C5 = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, v6),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1C13F80(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_38616384(userPresentListViewManager, 2, v8);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v9);
  }
  else
  {
    v10 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C13D08(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickFilter(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_Object_o *presentBoxFilterSelectMenu; // x21
  struct PresentBoxFilterSelectMenu_o **p_presentBoxFilterSelectMenu; // x20
  __int64 v13; // x1
  Il2CppObject *presentBoxFilterKindSelectMenuPrefab; // x21
  Il2CppObject *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  PresentBoxFilterSelectMenu_o *v26; // x20
  UserPresentListViewManager_c *v27; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v29; // x22

  if ( (byte_4BB34D0 & 1) == 0 )
  {
    sub_1C13D24(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___, v3);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&Method_UserPresentBoxWindow_ClickFilterEnd__, v6);
    sub_1C13D24(&Method_UserPresentBoxWindow_OnClickFilter__, v7);
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, v8);
    byte_4BB34D0 = 1;
  }
  v9 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickFilter__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C13D08(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
  presentBoxFilterSelectMenu = (UnityEngine_Object_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_presentBoxFilterSelectMenu = &this->fields.presentBoxFilterSelectMenu;
  if ( UnityEngine_Object__op_Equality(presentBoxFilterSelectMenu, 0LL, 0LL) )
  {
    presentBoxFilterKindSelectMenuPrefab = (Il2CppObject *)this->fields.presentBoxFilterKindSelectMenuPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__Instantiate_object_(
            presentBoxFilterKindSelectMenuPrefab,
            (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34717732((UnityEngine_GameObject_o *)v15, gameObject, 0LL);
    if ( !v15 )
LABEL_20:
      sub_1C13F80(v17, v18);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v15,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.presentBoxFilterSelectMenu,
      (int64_t)Component_object,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = *p_presentBoxFilterSelectMenu;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, v13);
    byte_4BB3525 = 1;
  }
  v27 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v27 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v27->static_fields->sortInfo;
  v29 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_1C13F70(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0LL);
  if ( !v26 )
    goto LABEL_20;
  PresentBoxFilterSelectMenu__Open(v26, sortInfo, v29, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  UserPresentBoxWindow_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BB34CE & 1) == 0 )
  {
    sub_1C13D24(&Method_UserPresentBoxWindow_OnClickHelp__, method);
    byte_4BB34CE = 1;
  }
  v2 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C13D08(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
  UserPresentBoxWindow__OpenHelp(v4, v5);
}


void __fastcall UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4BB34C4 & 1) == 0 )
  {
    sub_1C13D24(&Method_UserPresentBoxWindow_OnClickItem__, method);
    byte_4BB34C4 = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, v6),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1C13F80(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_38616384(userPresentListViewManager, 2, v8);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v9);
  }
  else
  {
    v10 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C13D08(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickPresentHistoryButton(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4BB34C9 & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___, method);
    sub_1C13D24(&NetworkManager_TypeInfo, v3);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C13D24(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__, v5);
    sub_1C13D24(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__, v6);
    byte_4BB34C9 = 1;
  }
  v7 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C13D3C(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_1C13F80(0LL, v11);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BB34A2 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB34A2 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1C13F80(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)p_titleInfo, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *bgObject; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v25; // x3
  UserPresentBoxWindow_o *v26; // x0
  const MethodInfo *v27; // x3
  UserPresentBoxWindow_o *v28; // x0
  const MethodInfo *v29; // x3
  UserPresentBoxWindow_o *v30; // x0
  const MethodInfo *v31; // x1
  struct System_String_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  Il2CppObject *titlePrefab; // x22
  Il2CppObject *Component_object; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  TitleInfoControl_o *v50; // x22
  TitleInfoControl_o *v51; // x21
  System_Action_o *v52; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v54; // x21
  System_Action_int__o *v55; // x22
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  const MethodInfo *v64; // x2
  bool v65; // w20
  const MethodInfo *v66; // x2

  if ( (byte_4BB34A3 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_int__TypeInfo, isShowBg);
    sub_1C13D24(&System_Action_TypeInfo, v9);
    sub_1C13D24(&AtlasManager_TypeInfo, v10);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v11);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v13);
    sub_1C13D24(&Method_UserPresentBoxWindow_OnClickBack__, v14);
    sub_1C13D24(&Method_UserPresentBoxWindow__Open_b__69_0__, v15);
    sub_1C13D24(&StringLiteral_5561/*"EINVALIDPROVIDER"*/, v16);
    byte_4BB34A3 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v18, v19, v20, v21, v22, v23);
  bgObject = (UnityEngine_GameObject_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v25);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v26 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v26, 0, (UnityEngine_GameObject_o *)v26, v27);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v28 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v28, 0, (UnityEngine_GameObject_o *)v28, v29);
  v32 = UserPresentBoxWindow__maxSelectable(v30, v31);
  this->fields.presentMaxSelectable = v32;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.presentMaxSelectable,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  UserPresentBoxWindow__SetSelectCount(this, 0, v39);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bgObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             titlePrefab,
                                             (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.titleInfo,
        (int64_t)Component_object,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      v50 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v50 )
      {
        TitleInfoControl__SetParent(v50, (UnityEngine_Transform_o *)bgObject, 0LL);
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
                TitleInfoControl__changeTitleInfo_38289852((TitleInfoControl_o *)bgObject, 1, 43, 0, 0LL);
                v51 = this->fields.titleInfo;
                v52 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(
                  v52,
                  (Il2CppObject *)this,
                  (intptr_t)Method_UserPresentBoxWindow_OnClickBack__,
                  0LL);
                if ( v51 )
                {
                  TitleInfoControl__SetBackBtnAct(v51, v52, 0LL);
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C13F80(bgObject, isShowBg);
  }
LABEL_20:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v55 = (System_Action_int__o *)sub_1C13F70(System_Action_int__TypeInfo);
  System_Action_int____ctor(v55, (Il2CppObject *)this, Method_UserPresentBoxWindow__Open_b__69_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(v54, v55, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_28;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, (const MethodInfo *)isShowBg);
  UserPresentBoxWindow__SetFilterButtonImage(this, v56);
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
  UserPresentBoxWindow__RequestPresentList(this, v57);
  this->fields.mReDispAct = redisp_act;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mReDispAct, (int64_t)redisp_act, v58, v59, v60, v61, v62, v63);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v64);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5561/*"EINVALIDPROVIDER"*/, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_28;
  v65 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v65, v66);
}


void __fastcall UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  System_Array_o *v5; // x0
  TutorialFlag_ImageId_array *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_4BB34CF & 1) == 0 )
  {
    sub_1C13D24(&TutorialFlag_ImageId___TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E,
      v3);
    byte_4BB34CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Array_o *)sub_1C13DCC(TutorialFlag_ImageId___TypeInfo, 3LL);
  v9.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v6 = (TutorialFlag_ImageId_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v5, v9, 0LL);
  if ( !Instance )
    sub_1C13F80(v7, v8);
  CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v6, 201, 0LL, 0LL, 0LL, 0LL);
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
    sub_1C13F80(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_38616384(userPresentListViewManager, 2, v5);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v6);
}


void __fastcall UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  Il2CppObject *v29; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UserServantMaster_o *v38; // x8
  UserCommandCodeMaster_o *v39; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int v42; // w21
  System_String_o *v43; // x23
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x24
  Il2CppObject *v51; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x24
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v63; // x23
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x21
  BalanceConfig_c *v72; // x0
  Il2CppObject *v73; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v78; // x22
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v84; // x22
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  Il2CppObject *v88; // x0
  __int64 v89; // x20
  BalanceConfig_c *v90; // x0
  __int64 v91; // x26
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
  System_String_o *v94; // x23
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x24
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v104; // x23
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  Il2CppObject *v108; // x0
  UserPresentListViewManager_c *v109; // x0
  _BOOL4 v110; // w22
  UserPresentListViewManager_c *v111; // x0
  UserPresentListViewManager_c *v112; // x0
  _BOOL4 v113; // w28
  UserPresentListViewManager_c *v114; // x0
  Il2CppObject *v115; // x23
  Il2CppObject *v116; // x24
  Il2CppObject *v117; // x25
  Il2CppObject *v118; // x27
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
  UILabel_o *nonPresentNoticeLabel; // x20
  System_String_o **v147; // x8
  __int64 v148; // x8
  UserPresentBoxWindow_o *v149; // x0
  const MethodInfo *v150; // x3
  UserPresentBoxWindow_o *v151; // x0
  const MethodInfo *v152; // x3
  UserPresentBoxWindow_o *v153; // x0
  const MethodInfo *v154; // x3
  const MethodInfo *v155; // x2
  const MethodInfo *v156; // x2
  const MethodInfo *v157; // x2
  _BOOL8 _38831432; // x0
  const MethodInfo *v159; // x1
  const MethodInfo *v160; // x2
  UserPresentBoxWindow_o *v161; // [xsp+8h] [xbp-C8h]
  int capacity; // [xsp+10h] [xbp-C0h]
  int v163; // [xsp+1Ch] [xbp-B4h] BYREF
  int v164; // [xsp+20h] [xbp-B0h] BYREF
  int v165; // [xsp+24h] [xbp-ACh] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-A8h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-A4h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int v169; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int v171; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int v173; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  __int64 servantEquipSum; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BB34A7 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77433168, v14);
    sub_1C13D24(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v15);
    sub_1C13D24(&LocalizationManager_TypeInfo, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C13D24(&TutorialFlag_TypeInfo, v18);
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, v19);
    sub_1C13D24(&StringLiteral_10642/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, v20);
    sub_1C13D24(&StringLiteral_11158/*"RARITY_TYPE_RARE"*/, v21);
    sub_1C13D24(&StringLiteral_11157/*"RARITY_TYPE_NONE"*/, v22);
    sub_1C13D24(&StringLiteral_4030/*"CTS isn't supported by the framework"*/, v23);
    sub_1C13D24(&StringLiteral_10643/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, v24);
    sub_1C13D24(&StringLiteral_4028/*"CRL Signing"*/, v25);
    sub_1C13D24(&StringLiteral_12598/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, v26);
    byte_4BB34A7 = 1;
  }
  entity = 0LL;
  servantEquipSum = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userServantMaster,
    (int64_t)MasterData_object,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v38 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_146;
  v39 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v38, (int32_t *)&servantEquipSum + 1, (int32_t *)&servantEquipSum, 1, 0LL);
  if ( !v39 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v39, 0LL);
  svtNumValLb = this->fields.svtNumValLb;
  v42 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12598/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  v173 = HIDWORD(servantEquipSum);
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v173, v44, v45, v46);
  if ( !SelfUserGame )
    goto LABEL_146;
  v50 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v47, v48, v49);
  Instance = (__int64)System_String__Format_62982316(v43, v50, v51, 0LL);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0LL);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12598/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  v171 = servantEquipSum;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171, v54, v55, v56);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v58, v59, v60);
  Instance = (__int64)System_String__Format_62982316(v53, v57, v61, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0LL);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12598/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  v169 = v42;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169, v64, v65, v66);
  if ( !byte_4BAF6EA )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, v67);
    byte_4BAF6EA = 1;
  }
  v72 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v72 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v72->static_fields->CommandCodeFrameMax;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax, v68, v69, v70);
  Instance = (__int64)System_String__Format_62982316(v63, v71, v73, 0LL);
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
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_4030/*"CTS isn't supported by the framework"*/, 0LL);
  qp = SelfUserGame->fields.qp;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v79, v80, v81);
  Instance = (__int64)System_String__Format(v78, v82, 0LL);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0LL);
  fpNumValLb = this->fields.fpNumValLb;
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_4028/*"CRL Signing"*/, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint, v85, v86, v87);
  Instance = (__int64)System_String__Format(v84, v88, 0LL);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        0LL);
  if ( !Instance )
    goto LABEL_146;
  v89 = Instance;
  v90 = BalanceConfig_TypeInfo;
  v91 = *(_QWORD *)(v89 + 24);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v90 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = this->fields.presentInfoLabel;
  PresentBoxMax = v90->static_fields->PresentBoxMax;
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_10642/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, 0LL);
  v165 = v91;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v165, v95, v96, v97);
  v164 = PresentBoxMax;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v164, v99, v100, v101);
  Instance = (__int64)System_String__Format_62982316(v94, v98, v102, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0LL);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_10643/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, 0LL);
  v163 = PresentBoxMax;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163, v105, v106, v107);
  Instance = (__int64)System_String__Format(v104, v108, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, v29);
    byte_4BB3525 = 1;
  }
  v109 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v109 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v109->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v110 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4BB3525 )
    {
      sub_1C13D24(&UserPresentListViewManager_TypeInfo, v29);
      byte_4BB3525 = 1;
    }
    v111 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v111 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v111->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v110 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, v29);
    byte_4BB3525 = 1;
  }
  v112 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v112 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v112->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v113 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4BB3525 )
    {
      sub_1C13D24(&UserPresentListViewManager_TypeInfo, v29);
      byte_4BB3525 = 1;
    }
    v114 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v114 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v114->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v113 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( v113 || v110 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v115 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v116 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v161 = this;
    capacity = v91;
    v117 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v118 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v119 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_56805896(
      v119,
      capacity,
      (const MethodInfo_362CA08 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77433168);
    if ( capacity >= 1 )
    {
      v126 = 0LL;
      v127 = v89 + 32;
      do
      {
        if ( !v110 )
          goto LABEL_150;
        if ( v126 >= *(unsigned int *)(v89 + 24) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v115,
                     (ItemMaster_o *)v116,
                     *(UserPresentBoxEntity_o **)(v127 + 8 * v126),
                     v122);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v113 )
            goto LABEL_76;
          if ( v126 >= *(unsigned int *)(v89 + 24) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v117,
                       (CommandCodeMaster_o *)v118,
                       *(UserPresentBoxEntity_o **)(v127 + 8 * v126),
                       v110,
                       v123);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v126 >= *(unsigned int *)(v89 + 24) )
LABEL_147:
              sub_1C13F88(Instance, v29);
            if ( !v119 )
              goto LABEL_146;
            v29 = *(Il2CppObject **)(v127 + 8 * v126);
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
                v29,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
            }
            else
            {
              v131 = &items->obj.klass + size;
              v119->fields._size = size + 1;
              v131[4] = (Il2CppClass *)v29;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)(v131 + 4),
                (int64_t)v29,
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
                          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v161;
    if ( !Instance )
      goto LABEL_146;
    v132 = *(_DWORD *)(Instance + 24);
    LODWORD(v91) = capacity;
    v89 = Instance;
  }
  else
  {
    v132 = v91;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, (const MethodInfo *)v29);
  UserPresentBoxWindow__SetSelectCount(this, 0, v133);
  if ( v132 < 1 )
  {
    Instance = (__int64)this->fields.userPresentListViewManager;
    if ( Instance )
    {
      UserPresentListViewManager__DestroyList((UserPresentListViewManager_o *)Instance, (const MethodInfo *)v29);
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v147 = (System_String_o **)&StringLiteral_11157/*"RARITY_TYPE_NONE"*/;
            if ( (_DWORD)v91 )
              v147 = (System_String_o **)&StringLiteral_11158/*"RARITY_TYPE_RARE"*/;
            Instance = (__int64)LocalizationManager__Get(*v147, 0LL);
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
                          v148 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
  v134 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  while ( 1 )
  {
    if ( v137 >= *(_DWORD *)(v89 + 24) )
      goto LABEL_147;
    v138 = *(_QWORD *)(v89 + 8LL * (int)v137 + 32);
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
                   (const MethodInfo_3238670 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
  v149 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v149, v136 & 1, (UnityEngine_GameObject_o *)v149, v150);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v135 & 1;
  if ( !Instance )
    goto LABEL_146;
  v151 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v151, v135 & 1, (UnityEngine_GameObject_o *)v151, v152);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v153 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v153, 0, (UnityEngine_GameObject_o *)v153, v154);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_1C13F80(Instance, v29);
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
          (UserPresentBoxEntity_array *)v89,
          v160);
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
    (UserPresentBoxEntity_array *)v89,
    v155);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_38616384((UserPresentListViewManager_o *)Instance, 1, v156);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v148 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v148 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v157);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38831432 = TutorialFlag__Get_38831432(201, 0LL);
  if ( !_38831432 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_38831432, v159);
  EventTutorialMaster__CheckTutorial(0, 78, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4BB34A5 & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_UserPresentListRequest___, method);
    sub_1C13D24(&NetworkManager_TypeInfo, v3);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C13D24(&Method_UserPresentBoxWindow_callbackPresentList__, v5);
    byte_4BB34A5 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_1C13F80(0LL, v8);
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

  if ( (byte_4BB34CA & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_4BB34CA = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C13F80(sortBtn, is_enable);
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

  if ( (byte_4BB34A4 & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_1C13D24(
                                       &Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___,
                                       isVaild);
    byte_4BB34A4 = 1;
  }
  if ( !btnObject )
    goto LABEL_15;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
                                     btnObject,
                                     (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
        sub_1C13F88(this, isVaild);
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
    sub_1C13F80(this, isVaild);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Component_o *checkedItemBtn; // x0
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v22; // x3
  UserPresentBoxWindow_o *v23; // x0
  const MethodInfo *v24; // x3
  UserPresentBoxWindow_o *v25; // x0
  const MethodInfo *v26; // x3
  bool v27; // w1
  Il2CppObject *MasterData_object; // x20
  UserPresentBoxEntity_array *VaildList; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x29
  __int64 v31; // x22
  UserPresentListViewManager_c *v32; // x0
  _BOOL4 v33; // w27
  UserPresentListViewManager_c *v34; // x0
  UserPresentListViewManager_c *v35; // x0
  _BOOL4 v36; // w28
  UserPresentListViewManager_c *v37; // x0
  Il2CppObject *v38; // x23
  ItemMaster_o *v39; // x19
  Il2CppObject *v40; // x24
  Il2CppObject *v41; // x25
  System_Collections_Generic_List_object__o *v42; // x26
  int64_t v43; // x2
  int32_t v44; // w3
  MethodInfo *v45; // x4
  MethodInfo *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  unsigned __int64 v49; // x29
  UserPresentBoxEntity_o **m_Items; // x21
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  UserPresentBoxWindow_o *v55; // x0
  const MethodInfo *v56; // x3
  __int64 v57; // x8
  __int64 v58; // x19
  UserPresentBoxEntity_o *v59; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v61; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v5 = how;
  v7 = how;
  if ( (byte_4BB34C6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeMaster___, how);
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77433168, v15);
    sub_1C13D24(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v16);
    sub_1C13D24(&NetworkManager_TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, v19);
    byte_4BB34C6 = 1;
  }
  entity = 0LL;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = v7;
  if ( !checkedItemBtn )
    goto LABEL_94;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, v5, (UnityEngine_GameObject_o *)gameObject, v22);
  if ( !isSetOtherButtonsToo )
    return;
  if ( v5 )
  {
    checkedItemBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( checkedItemBtn )
    {
      v23 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
      UserPresentBoxWindow__SetButtonTxtColor(v23, 0, (UnityEngine_GameObject_o *)v23, v24);
      checkedItemBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( checkedItemBtn )
      {
        v25 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
        v27 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_94;
  }
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, how);
    byte_4BAF1E5 = 1;
  }
  checkedItemBtn = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    checkedItemBtn = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_94;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)MasterData_object,
                *(_QWORD *)(*(_QWORD *)&checkedItemBtn[7].fields.m_CachedPtr + 64LL),
                0LL);
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  checkedItemBtn = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)checkedItemBtn,
                                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_94;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  v31 = *(_QWORD *)&VaildList->max_length;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, how);
    byte_4BB3525 = 1;
  }
  v32 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v32 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (UnityEngine_Component_o *)v32->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_94;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v33 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4BB3525 )
    {
      sub_1C13D24(&UserPresentListViewManager_TypeInfo, how);
      byte_4BB3525 = 1;
    }
    v34 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v34 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (UnityEngine_Component_o *)v34->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_94;
    v33 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, how);
    byte_4BB3525 = 1;
  }
  v35 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v35 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (UnityEngine_Component_o *)v35->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_94;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v36 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4BB3525 )
    {
      sub_1C13D24(&UserPresentListViewManager_TypeInfo, how);
      byte_4BB3525 = 1;
    }
    v37 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v37 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (UnityEngine_Component_o *)v37->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_94;
    v36 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( v33 || v36 )
  {
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v38 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v61 = this;
    v39 = (ItemMaster_o *)v30;
    v40 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v41 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v42 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_56805896(
      v42,
      v31,
      (const MethodInfo_362CA08 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77433168);
    if ( (int)v31 >= 1 )
    {
      v49 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v33 )
          goto LABEL_98;
        if ( v49 >= VaildList->max_length )
          goto LABEL_95;
        checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckFilter(
                                                      (UserPresentBoxWindow_o *)checkedItemBtn,
                                                      (ServantMaster_o *)v38,
                                                      v39,
                                                      m_Items[v49],
                                                      v45);
        if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
        {
LABEL_98:
          if ( !v36 )
            goto LABEL_66;
          if ( v49 >= VaildList->max_length )
            goto LABEL_95;
          checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckRarityFilter(
                                                        (UserPresentBoxWindow_o *)checkedItemBtn,
                                                        (ServantLimitMaster_o *)v40,
                                                        (CommandCodeMaster_o *)v41,
                                                        m_Items[v49],
                                                        v33,
                                                        v46);
          if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
          {
LABEL_66:
            if ( v49 >= VaildList->max_length )
LABEL_95:
              sub_1C13F88(checkedItemBtn, how);
            if ( !v42 )
              goto LABEL_94;
            *(_QWORD *)&how = m_Items[v49];
            items = v42->fields._items;
            v52 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v42->fields._version;
            if ( !items )
              goto LABEL_94;
            size = v42->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v42,
                (Il2CppObject *)how,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &items->obj.klass + size;
              v42->fields._size = size + 1;
              v54[4] = (Il2CppClass *)how;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)(v54 + 4),
                how,
                v43,
                v44,
                (System_String_o *)v45,
                (BattleSetupInfo_o *)v46,
                v47,
                v48);
            }
          }
        }
      }
      while ( (unsigned int)v31 != ++v49 );
    }
    if ( !v42
      || (checkedItemBtn = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                        v42,
                                                        (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0LL )
    {
LABEL_94:
      sub_1C13F80(checkedItemBtn, how);
    }
    LODWORD(v31) = checkedItemBtn[1].klass;
    this = v61;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)v39;
  }
  if ( (int)v31 < 1 )
    return;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v55 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v55, 1, (UnityEngine_GameObject_o *)v55, v56);
  v57 = *(_QWORD *)&VaildList->max_length;
  if ( (int)v57 < 1 )
    return;
  v58 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v58 >= (unsigned int)v57 )
      goto LABEL_95;
    v59 = VaildList->m_Items[v58];
    if ( !v59 )
      goto LABEL_94;
    giftType = v59->fields.giftType;
    if ( giftType != 2 )
    {
      if ( giftType == 9 )
        break;
      goto LABEL_90;
    }
    if ( !v30 )
      goto LABEL_94;
    checkedItemBtn = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  v30,
                                                  &entity,
                                                  v59->fields.objectId,
                                                  (const MethodInfo_3238670 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_94;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v57 = *(_QWORD *)&VaildList->max_length;
LABEL_90:
    if ( (int)++v58 >= (int)v57 )
      return;
  }
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v25 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
  v27 = 1;
LABEL_9:
  UserPresentBoxWindow__SetButtonTxtColor(v25, v27, (UnityEngine_GameObject_o *)v25, v26);
}


void __fastcall UserPresentBoxWindow__SetFilterButtonImage(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *filterBtnSp; // x19
  UserPresentListViewManager_c *v6; // x0
  ListViewSort_o *sortInfo; // x0
  System_String_o **v8; // x22
  UserPresentListViewManager_c *v9; // x0

  if ( (byte_4BB34A8 & 1) == 0 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_17777/*"btn_cancel"*/, v3);
    sub_1C13D24(&StringLiteral_17776/*"btn_boostitem_on"*/, v4);
    byte_4BB34A8 = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, method);
    byte_4BB3525 = 1;
  }
  v6 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v6 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v6->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_22;
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0LL);
  v8 = (System_String_o **)&StringLiteral_17777/*"btn_cancel"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4BB3525 )
  {
    sub_1C13D24(&UserPresentListViewManager_TypeInfo, method);
    byte_4BB3525 = 1;
  }
  v9 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v9 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v9->static_fields->sortInfo;
  if ( !sortInfo )
LABEL_22:
    sub_1C13F80(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0LL);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v8 = (System_String_o **)&StringLiteral_17776/*"btn_boostitem_on"*/;
LABEL_20:
  if ( !filterBtnSp )
    goto LABEL_22;
  UISprite__set_spriteName(filterBtnSp, *v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetPresentHistoryBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *GameObject; // x20
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1

  if ( (byte_4BB34CB & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_10920/*"Prefix '{0}' is already assigned to namespace '{1}' and cannot be reassigned to '{2}' on this tag."*/, v6);
    byte_4BB34CB = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10920/*"Prefix '{0}' is already assigned to namespace '{1}' and cannot be reassigned to '{2}' on this tag."*/,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_1C13F80(Component_object, v9);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mReDispAct, (int64_t)act, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v5; // x1
  UILabel_o *presentSelectNumLabel; // x20
  System_String_o *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  UIWidget_o *v11; // x20
  int32_t v12; // w22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = selected;
  if ( (byte_4BB34CC & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&selected);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_10649/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/, v5);
    byte_4BB34CC = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10649/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0LL);
  v9 = System_String__Format_62982316(v7, v8, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
  if ( !presentSelectNumLabel )
    goto LABEL_14;
  UILabel__set_text(presentSelectNumLabel, v9, 0LL);
  v9 = (System_String_o *)BalanceConfig_TypeInfo;
  v11 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v12 = v18;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v12 >= *(_DWORD *)(*(_QWORD *)&v9[7].fields + 116LL) )
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
  if ( !v11 )
LABEL_14:
    sub_1C13F80(v9, v10);
  UIWidget__set_color(v11, *(UnityEngine_Color_o *)&r, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__ShowEventPointReward(
        UserPresentBoxWindow_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v27; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v30; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v31; // x22
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3

  if ( (byte_4BB34B1 & 1) == 0 )
  {
    sub_1C13D24(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo, *(_QWORD *)&idx);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__, v7);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, v8);
    byte_4BB34B1 = 1;
  }
  v9 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = callback;
  *(_DWORD *)(v9 + 24) = idx;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v27 = *(int *)(v9 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v27 < max_length )
    {
      if ( (unsigned int)v27 >= max_length )
        sub_1C13F88(v24, v25);
      evpDialog = this->fields.evpDialog;
      v30 = evPointRewardList->m_Items[v27];
      v31 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_1C13F70(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v31,
        (Il2CppObject *)v9,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        v32);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v30, v31, v33);
        return;
      }
LABEL_10:
      sub_1C13F80(v10, v11);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0LL);
}


void __fastcall UserPresentBoxWindow__ShowExpiredPresents(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
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
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  System_Action_o *v31; // x22

  if ( (byte_4BB34AE & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__, v7);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_10636/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, v9);
    sub_1C13D24(&StringLiteral_44/*"\n\n"*/, v10);
    byte_4BB34AE = 1;
  }
  v11 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10636/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, 0LL);
    v30 = System_String__Concat_62979204(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v29, 0LL);
    v31 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v30, v31, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_12:
    sub_1C13F80(v12, v13);
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
}


void __fastcall UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BB34B2 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v2);
    byte_4BB34B2 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( v5 )
  {
    if ( !mInstance )
      sub_1C13F80(v5, v6);
    TerminalSceneComponent__UpdateTitleEventInfo((TerminalSceneComponent_o *)mInstance, 0LL);
  }
}


void __fastcall UserPresentBoxWindow___CallbackReceiveRequest_b__80_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct GetSvts_array *getSvtList; // x8
  struct GetCommandCodes_array *getCommandCodeList; // x8
  const MethodInfo *v7; // x2
  PlayMakerFSM_o *myFsm; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4BB34D5 & 1) == 0 )
  {
    sub_1C13D24(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__, v3);
    sub_1C13D24(&StringLiteral_12350/*"SHORT_SERVANT_EXPEDITION"*/, v4);
    byte_4BB34D5 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12350/*"SHORT_SERVANT_EXPEDITION"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1C13F80(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v10 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C13F70(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      0LL);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v10, v11);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v12);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v7);
  }
}


void __fastcall UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_1C13F80(0LL, method);
  UserPresentListViewManager__SetMode_38616384(userPresentListViewManager, 1, v2);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_1C13F80(0LL, result);
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

  if ( (byte_4BB34D3 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4BB34D3 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_1C13F80(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4BB34D4 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB34D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  UserPresentBoxWindow__ReDisp(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___showEffect_b__88_0(
        UserPresentBoxWindow_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4BB34D6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&Method_UserPresentBoxWindow_EndEffect__, v4);
    byte_4BB34D6 = 1;
  }
  v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  UserPresentBoxWindow__CheckSvtGetTutorial(this, v5, v6);
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *touchBlocker; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  __int64 v19; // x20
  System_Action_object__o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Action_object__o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  ActionChain_o *v34; // x21
  __int64 v35; // x20
  System_Action_o *v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BB34D7 & 1) == 0 )
  {
    sub_1C13D24(&ActionChain_TypeInfo, method);
    sub_1C13D24(&System_Action___TypeInfo, v3);
    sub_1C13D24(&System_Action_Action____TypeInfo, v4);
    sub_1C13D24(&System_Action_Action__TypeInfo, v5);
    sub_1C13D24(&System_Action_TypeInfo, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v8);
    sub_1C13D24(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__, v9);
    sub_1C13D24(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__, v10);
    sub_1C13D24(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__, v11);
    sub_1C13D24(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, v12);
    byte_4BB34D7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0LL, 0LL) )
  {
    touchBlocker = this->fields.touchBlocker;
    if ( !touchBlocker )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(touchBlocker, 0, 0LL);
    if ( this->fields.presentOverflowType )
    {
      userPresentListViewManager = this->fields.userPresentListViewManager;
      v16 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C13F70(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
      UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__,
        0LL);
      if ( userPresentListViewManager )
      {
        UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v16, v17);
        UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v18);
        return;
      }
      goto LABEL_19;
    }
    v19 = sub_1C13DCC(System_Action_Action____TypeInfo, 2LL);
    v20 = (System_Action_object__o *)sub_1C13F70(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v20,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__,
      0LL);
    if ( !v19 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v19 + 24) )
      goto LABEL_20;
    *(_QWORD *)(v19 + 32) = v20;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v20, v21, v22, v23, v24, v25, v26);
    v27 = (System_Action_object__o *)sub_1C13F70(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v27,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
      0LL);
    if ( *(_DWORD *)(v19 + 24) <= 1u )
      goto LABEL_20;
    *(_QWORD *)(v19 + 40) = v27;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)v27, v28, v29, v30, v31, v32, v33);
    v34 = (ActionChain_o *)sub_1C13F70(ActionChain_TypeInfo);
    ActionChain___ctor_47597396(v34, (System_Action_Action__array *)v19, 0LL);
    v35 = sub_1C13DCC(System_Action___TypeInfo, 1LL);
    v36 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
    if ( !v35 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v35 + 24) )
LABEL_20:
      sub_1C13F88(touchBlocker, v13);
    *(_QWORD *)(v35 + 32) = v36;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)v36, v37, v38, v39, v40, v41, v42);
    if ( !v34
      || (touchBlocker = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                       (ChainableActionBase_o *)v34,
                                                       (System_Action_array *)v35,
                                                       0LL)) == 0LL )
    {
LABEL_19:
      sub_1C13F80(touchBlocker, v13);
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
    sub_1C13F80(0LL, action);
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
    sub_1C13F80(0LL, action);
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
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4BB34A6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, result);
    sub_1C13D24(&AtlasManager_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, v6);
    byte_4BB34A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v8);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
  v9 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v9, 1, 0LL);
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

  if ( (byte_4BB34BC & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    byte_4BB34BC = 1;
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
        sub_1C13F80(befSvtList, v10);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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


bool __fastcall UserPresentBoxWindow__checkNewCommandCode(
        UserPresentBoxWindow_o *this,
        int64_t commandCodeId,
        bool isNew,
        bool isAddCommandCode,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  struct System_Collections_Generic_List_long__o *v14; // x0
  int64_t klass; // x1
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v17; // x23
  unsigned int Index; // w8
  _BOOL4 v19; // w0
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_4BB34BE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_long__Add__, commandCodeId);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__FindIndex__, v9);
    sub_1C13D24(&System_Predicate_long__TypeInfo, v10);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__, v11);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo, v12);
    byte_4BB34BE = 1;
  }
  v13 = (Il2CppObject *)sub_1C13F70(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
  System_Object___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v13[1].klass = (Il2CppClass *)commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v19) = 0;
    return v19;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v17 = (System_Predicate_long__o *)sub_1C13F70(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v17,
    v13,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    0LL);
  if ( !befCommandCodeList )
    goto LABEL_16;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v17,
            (const MethodInfo_3615A34 *)Method_System_Collections_Generic_List_long__FindIndex__);
  v19 = Index >> 31;
  if ( (Index & 0x80000000) == 0 || !isAddCommandCode )
    return v19;
  v14 = this->fields.befCommandCodeList;
  if ( !v14
    || (klass = (int64_t)v13[1].klass,
        items = v14->fields._items,
        v21 = Method_System_Collections_Generic_List_long__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_16:
    sub_1C13F80(v14, klass);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v14,
      klass,
      *(const MethodInfo_3615200 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v14->fields._size = size + 1;
    items->m_Items[size] = klass;
  }
  LOBYTE(v19) = 1;
  return v19;
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v12; // x8

  v8 = this;
  if ( (byte_4BB34BB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    sub_1C13D24(&StringLiteral_9417/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v9);
    this = (UserPresentBoxWindow_o *)sub_1C13D24(&StringLiteral_6539/*"FIELD_ENEMY"*/, v10);
    byte_4BB34BB = 1;
  }
  receiveList = v8->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v8->fields.receiveIdx >= receiveList->fields._size )
  {
    v8->fields.receiveList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields.receiveList, 0LL, v2, v3, v4, v5, v6, v7);
    this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
    v8->fields.receiveIdx = 0;
    if ( this )
    {
      v12 = &StringLiteral_6539/*"FIELD_ENEMY"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C13F80(this, method);
  }
  this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v12 = &StringLiteral_9417/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkOverlapSvt(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v8; // w22
  int32_t v9; // w21
  bool result; // w0

  if ( (byte_4BB34BD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_4BB34BD = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C13F80(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v8 = size - 1;
  if ( size < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v9,
               (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v8 == v9 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v9;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall UserPresentBoxWindow__endPlay(
        UserPresentBoxWindow_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  AvalonSceneManager_c *v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v24; // x20

  if ( (byte_4BB34BA & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, end_act);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v5);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, v6);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, v7);
    byte_4BB34BA = 1;
  }
  v8 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = end_act;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)end_act, v17, v18, v19, v20, v21, v22);
  svtGetAction = this->fields.svtGetAction;
  v24 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v8, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtGetAction )
LABEL_8:
    sub_1C13F80(v9, v10);
  ServantRewardAction__Play(svtGetAction, v24, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_4BB34BF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    this = (UserPresentBoxWindow_o *)sub_1C13D24(&StringLiteral_9417/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v3);
    byte_4BB34BF = 1;
  }
  receiveList = v2->fields.receiveList;
  if ( !receiveList )
    goto LABEL_8;
  receiveIdx = v2->fields.receiveIdx;
  if ( receiveIdx < receiveList->fields._size )
    v2->fields.receiveIdx = receiveIdx + 1;
  this = (UserPresentBoxWindow_o *)v2->fields.myFsm;
  if ( !this )
LABEL_8:
    sub_1C13F80(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9417/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
}


System_String_o *__fastcall UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t stringLength; // w20
  Il2CppObject *v8; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB34CD & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&StringLiteral_25558/*"{{"*/, v2);
    sub_1C13D24(&StringLiteral_25323/*"zh-Hant"*/, v3);
    byte_4BB34CD = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = System_Int32__ToString((unsigned int)v4->static_fields + 112, 0LL);
  if ( !v5
    || (stringLength = v5->fields._stringLength,
        (v5 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 116, 0LL)) == 0LL) )
  {
    sub_1C13F80(v5, v6);
  }
  v8 = (Il2CppObject *)v5;
  v12 = v5->fields._stringLength + 2 * (stringLength - v5->fields._stringLength);
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  v10 = System_String__Concat_62979204(
          (System_String_o *)StringLiteral_25323/*"zh-Hant"*/,
          v9,
          (System_String_o *)StringLiteral_25558/*"{{"*/,
          0LL);
  return System_String__Format(v10, v8, 0LL);
}


void __fastcall UserPresentBoxWindow__receivePresent(
        UserPresentBoxWindow_o *this,
        System_Int64_array *presentIds,
        int32_t selectIdx,
        int32_t selectNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x23
  int v21; // w8
  System_Collections_Generic_IEnumerable_T__o *v22; // x23
  int v23; // w9
  __int64 v24; // x10
  int v25; // w10
  System_Collections_Generic_List_object__o *v26; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  NetworkManager_ResultCallbackFunc_o *v33; // x23
  const MethodInfo *v34; // x2

  if ( (byte_4BB34AB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, presentIds);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77433160, v9);
    sub_1C13D24(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v10);
    sub_1C13D24(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___, v11);
    sub_1C13D24(&NetworkManager_TypeInfo, v12);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16);
    sub_1C13D24(&Method_UserPresentBoxWindow_CallbackReceiveRequest__, v17);
    byte_4BB34AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v19);
    byte_4BAF1E5 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_27;
  Instance = UserPresentBoxMaster__getVaildList_41306536(
               (UserPresentBoxMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               presentIds,
               0LL);
  if ( !Instance )
    goto LABEL_27;
  v21 = *((_DWORD *)Instance + 6);
  v22 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v21 == v23 )
        sub_1C13F88(Instance, v19);
      v24 = *((_QWORD *)Instance + v23 + 4);
      if ( !v24 )
        goto LABEL_27;
      v25 = *(_DWORD *)(v24 + 72);
      if ( v25 == 11 || v25 == 1 )
        break;
      if ( v21 == ++v23 )
        goto LABEL_22;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_22;
    }
LABEL_27:
    sub_1C13F80(Instance, v19);
  }
LABEL_22:
  v26 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56806080(
    v26,
    v22,
    (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77433160);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v26;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.receiveList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  this->fields.receiveIdx = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v33 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v33,
               (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_27;
  UserPresentReceiveRequest__beginRequest(
    (UserPresentReceiveRequest_o *)Instance,
    presentIds,
    selectIdx,
    selectNum,
    0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v34);
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
        if ( (byte_4BB3497 & 1) == 0 )
        {
          sub_1C13D24(&UserPresentBoxErrorDialog_TypeInfo, method);
          byte_4BB3497 = 1;
        }
        dialog->fields.jumpType = 0;
        return;
      }
    }
LABEL_18:
    sub_1C13F80(this, method);
  }
  v6 = this->fields.userPresentListViewManager;
  if ( !v6 )
    goto LABEL_18;
  v7 = v6->fields.dialog;
  if ( !v7 )
    goto LABEL_18;
  if ( (byte_4BB3497 & 1) == 0 )
  {
    sub_1C13D24(&UserPresentBoxErrorDialog_TypeInfo, method);
    byte_4BB3497 = 1;
  }
  v7->fields.jumpType = 1;
}


void __fastcall UserPresentBoxWindow__showEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *receiveList; // x0
  int32_t v16; // w21
  UserPresentBoxEntity_o *v17; // x20
  int v18; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v22; // w23
  _BOOL4 isNew; // w23
  bool v24; // w22
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v26; // x23
  Il2CppClass *v27; // x24
  int32_t v28; // w23
  const MethodInfo *v29; // x4
  GetCommandCodes_o *v30; // x8
  _BOOL4 v31; // w9
  bool v32; // w2
  int32_t objectId; // w20
  const MethodInfo *v34; // x2
  _BOOL8 IsEquip; // x0
  const MethodInfo *v36; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v38; // x2
  int32_t v39; // w21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v41; // x2
  QuestRewardInfo_o *v42; // x0
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x4
  _BOOL4 v45; // w22
  const MethodInfo *v46; // x7
  int64_t userSvtId; // x21
  CommonUI_o *v48; // x20
  CombineResultEffectComponent_ClickDelegate_o *v49; // x22
  int64_t userCommandCodeId; // x1
  bool v51; // w3
  int32_t num; // w5
  bool v53; // w2
  UserPresentBoxWindow_o *v54; // x0
  int32_t v55; // w4
  int32_t presentDialogMessageId; // w6
  ServantCostumeEntity_o *v57; // [xsp+0h] [xbp-60h] BYREF
  GetCommandCodes_o *v58; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v59; // [xsp+10h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4BB34B3 & 1) == 0 )
  {
    sub_1C13D24(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v9);
    sub_1C13D24(&MissionInfoMaker_TypeInfo, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C13D24(&Method_UserPresentBoxWindow__showEffect_b__88_0__, v14);
    byte_4BB34B3 = 1;
  }
  entity = 0LL;
  v59 = 0LL;
  data = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_105;
  method = (const MethodInfo *)(unsigned int)this->fields.receiveIdx;
  if ( (int)method < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    (int32_t)method,
                    (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( !receiveList )
      goto LABEL_105;
    v16 = *((_DWORD *)receiveList + 18);
    v17 = (UserPresentBoxEntity_o *)receiveList;
    if ( Gift__IsServant(v16, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &entity,
                              v17->fields.objectId,
                              (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_105;
        receiveList = (void *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_105;
        v18 = (int)receiveList;
        receiveList = (void *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
        if ( ((v18 | (unsigned int)receiveList) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_105;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v62.fields.currentCryptoKey = klass;
          *(_QWORD *)&v62.fields.fakeValue = monitor;
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v62, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v22, v16, 0LL) )
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
                v24 = data->fields.isNew || data->fields.isGetEffect;
                receiveList = (void *)Gift__IsEventSvtJoin(v16, 0LL);
                if ( ((unsigned __int8)receiveList & 1) != 0 )
                {
                  v45 = 0;
                }
                else
                {
                  if ( !data )
                    goto LABEL_105;
                  v45 = !UserPresentBoxWindow__checkNew(this, data->fields.userSvtId, v24, 1, v44);
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
                    if ( ((v45 | (unsigned int)receiveList) & 1) != 0 )
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
                          receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( data )
                          {
                            userSvtId = data->fields.userSvtId;
                            v48 = (CommonUI_o *)receiveList;
                            v49 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C13F70(CombineResultEffectComponent_ClickDelegate_TypeInfo);
                            CombineResultEffectComponent_ClickDelegate___ctor(
                              v49,
                              (Il2CppObject *)this,
                              Method_UserPresentBoxWindow__showEffect_b__88_0__,
                              0LL);
                            if ( v48 )
                            {
                              CommonUI__OpenSecretTreasureDeviceForSvtGet(v48, userSvtId, v49, 0LL);
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
                    v51 = data->fields.isNew || data->fields.isGetEffect;
                    num = v17->fields.num;
                    presentDialogMessageId = data->fields.presentDialogMessageId;
                    v53 = data->fields.isNew;
                    v54 = this;
                    v55 = v16;
LABEL_104:
                    UserPresentBoxWindow__startRewardGetEffect(
                      v54,
                      userCommandCodeId,
                      v53,
                      v51,
                      v55,
                      num,
                      presentDialogMessageId,
                      v46);
                    return;
                  }
                }
              }
            }
LABEL_105:
            sub_1C13F80(receiveList, method);
          }
        }
      }
    }
    else if ( Gift__IsCommandCode(v16, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &v59,
                              v17->fields.objectId,
                              (const MethodInfo_3238670 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !v59 )
          goto LABEL_105;
        getCommandCodeList = this->fields.getCommandCodeList;
        v27 = v59[1].klass;
        v26 = v59[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v63.fields.currentCryptoKey = v27;
        *(_QWORD *)&v63.fields.fakeValue = v26;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v63, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v58, v28, 0LL) )
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
          v30 = v58;
          if ( !v58 )
            goto LABEL_105;
          v31 = v58->fields.isNew;
          this->fields.gotServant = v31;
          v32 = v31 || v30->fields.isGetEffect;
          receiveList = (void *)UserPresentBoxWindow__checkNewCommandCode(
                                  this,
                                  v30->fields.userCommandCodeId,
                                  v32,
                                  1,
                                  v29);
          if ( ((unsigned __int8)receiveList & 1) != 0 )
          {
            if ( !v58 )
              goto LABEL_105;
            userCommandCodeId = v58->fields.userCommandCodeId;
            v51 = v58->fields.isNew || v58->fields.isGetEffect;
            num = v17->fields.num;
            v53 = v58->fields.isNew;
            v54 = this;
            v55 = v16;
            presentDialogMessageId = 0;
            goto LABEL_104;
          }
        }
      }
    }
    else if ( Gift__IsCostumeRelease(v16, 0LL) )
    {
      objectId = v17->fields.objectId;
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      if ( ServantCostumeMaster__TryGetEntity(
             (ServantCostumeMaster_o *)receiveList,
             &v57,
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
            if ( v57 )
            {
              UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(this, v57->fields.name, v34);
              return;
            }
          }
        }
        goto LABEL_105;
      }
    }
    else
    {
      IsEquip = Gift__IsEquip(v16, 0LL);
      if ( IsEquip )
      {
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v17, v36);
        UserPresentBoxWindow__startRewardEquipGetEffect(this, QuestRewardInfo, v38);
        return;
      }
      if ( Gift__IsItem(v16, 0LL) )
      {
        v39 = v17->fields.objectId;
        receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !receiveList )
          goto LABEL_105;
        if ( CommonUI__IsGetItemEffect((CommonUI_o *)receiveList, v39, 0LL) )
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
              v42 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v17, v41);
              UserPresentBoxWindow__startRewardSpecialItemGetEffect(this, v42, v43);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4BB34C0 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1C13D24(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, v6);
    byte_4BB34C0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v9;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !v11 )
LABEL_8:
    sub_1C13F80(Instance, v8);
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v25; // x8
  CommonUI_o *v26; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_4BB34B5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, name);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__, v7);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, v8);
    byte_4BB34B5 = 1;
  }
  v9 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = name;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)name, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  v26 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !v26 )
LABEL_9:
    sub_1C13F80(touchBlocker, v11);
  CommonUI__maskFadeout(v26, 1, DEFAULT_FADE_TIME, v28, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v25; // x8
  CommonUI_o *v26; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_4BB34B6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, questRewardInfo);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__, v7);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, v8);
    byte_4BB34B6 = 1;
  }
  v9 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = questRewardInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)questRewardInfo, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  v26 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !v26 )
LABEL_9:
    sub_1C13F80(touchBlocker, v11);
  CommonUI__maskFadeout(v26, 1, DEFAULT_FADE_TIME, v28, 0LL);
}


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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  int64_t v28; // x20
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UserServantEntity_o *v37; // x21
  EventServantEntity_o *EventServant_41384148; // x0
  EventServantEntity_o *v39; // x22
  __int64 v40; // x19
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_String_o *JoinMessage; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 *v54; // x8
  Il2CppObject *v55; // x0
  AvalonSceneManager_c *v56; // x8
  CommonUI_o *v57; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v59; // x21
  System_String_o *Message; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_String_o *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject *v74; // x0
  AvalonSceneManager_c *v75; // x8
  CommonUI_o *v76; // x20
  float v77; // s8
  System_Action_o *v78; // x21

  if ( (byte_4BB34B4 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, userSvtID);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v15);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_1C13D24(&LocalizationManager_TypeInfo, v18);
    sub_1C13D24(&ScriptManager_TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__, v22);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, v23);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__, v24);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v25);
    sub_1C13D24(&StringLiteral_12562/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v26);
    sub_1C13D24(&StringLiteral_12563/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v27);
    byte_4BB34B4 = 1;
  }
  v28 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_29;
  *(_QWORD *)(v28 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)this, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)(v28 + 24) = giftType;
  *(_QWORD *)(v28 + 32) = userSvtID;
  *(_BYTE *)(v28 + 40) = isDoEffect;
  *(_DWORD *)(v28 + 44) = num;
  *(_BYTE *)(v28 + 48) = isNew;
  *(_DWORD *)(v28 + 52) = presentDialogMessageId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteDialogKey(0LL);
  if ( !Gift__IsEventSvtJoin(*(_DWORD *)(v28 + 24), 0LL) )
    goto LABEL_17;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v28 + 32),
                                (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v37 = (UserServantEntity_o *)Instance;
  EventServant_41384148 = UserServantEntity__getEventServant_41384148((UserServantEntity_o *)Instance, 1, 0LL);
  if ( !EventServant_41384148 || (v39 = EventServant_41384148, EventServant_41384148->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v56 = AvalonSceneManager_TypeInfo;
      v57 = (CommonUI_o *)v55;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v56 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v56->static_fields->DEFAULT_FADE_TIME;
      v59 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v59,
        (Il2CppObject *)v28,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v57 )
      {
        CommonUI__maskFadeout(v57, 1, DEFAULT_FADE_TIME, v59, 0LL);
        return;
      }
    }
LABEL_29:
    sub_1C13F80(Instance, v30);
  }
  v40 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  if ( !v40 )
    goto LABEL_29;
  *(_QWORD *)(v40 + 32) = v28;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 32), v28, v41, v42, v43, v44, v45, v46);
  if ( UserServantEntity__HasStatus(v37, 64, 0LL) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v39, 0LL);
    *(_QWORD *)(v40 + 24) = JoinMessage;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 24), (int64_t)JoinMessage, v48, v49, v50, v51, v52, v53);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_12563/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v39, 0LL);
    *(_QWORD *)(v40 + 24) = Message;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 24), (int64_t)Message, v61, v62, v63, v64, v65, v66);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_12562/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/;
  }
  v67 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  *(_QWORD *)(v40 + 16) = v67;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)v67, v68, v69, v70, v71, v72, v73);
  v74 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v75 = AvalonSceneManager_TypeInfo;
  v76 = (CommonUI_o *)v74;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v75 = AvalonSceneManager_TypeInfo;
  }
  v77 = v75->static_fields->DEFAULT_FADE_TIME;
  v78 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v78,
    (Il2CppObject *)v40,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v76 )
    goto LABEL_29;
  CommonUI__maskFadein(v76, v77, v78, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v25; // x8
  CommonUI_o *v26; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_4BB34B7 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, questRewardInfo);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__, v7);
    sub_1C13D24(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, v8);
    byte_4BB34B7 = 1;
  }
  v9 = sub_1C13F70(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = questRewardInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)questRewardInfo, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  v26 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !v26 )
LABEL_9:
    sub_1C13F80(touchBlocker, v11);
  CommonUI__maskFadeout(v26, 1, DEFAULT_FADE_TIME, v28, 0LL);
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
  sub_1C13CC8(
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
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5490C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A548C4;
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
  if ( (byte_4BB34D8 & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, hasGetServant);
    byte_4BB34D8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
    sub_1C13F80(this, method);
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
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v15; // w9
  struct UserPresentBoxWindow_o *v16; // x8
  struct UserPresentListViewManager_o *v17; // x8
  void *v18; // x1

  if ( (byte_4BB34D9 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB34D9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_4BB3517 & 1) == 0 )
  {
    Instance = (CommonUI_o *)sub_1C13D24(&Method_System_Collections_Generic_List_long__Clear__, v5);
    byte_4BB3517 = 1;
  }
  checkedIdList = userPresentListViewManager->fields.checkedIdList;
  if ( checkedIdList )
  {
    v15 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v15;
  }
  v16 = this->fields.__4__this;
  if ( !v16 || (v17 = v16->fields.userPresentListViewManager) == 0LL )
LABEL_13:
    sub_1C13F80(Instance, v5);
  v18 = StringLiteral_1/*""*/;
  v17->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v17->fields._expiredPresents_k__BackingField,
    (int64_t)v18,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  UserPresentBoxWindow___c__DisplayClass85_0_o *v3; // x19
  __int64 v4; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x20
  System_Action_o *_9__1; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v3 = this;
  if ( (byte_4BB34DA & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isOk);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_1C13D24(
                                                             &Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
                                                             v4);
    byte_4BB34DA = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !evpDialog )
LABEL_8:
    sub_1C13F80(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_38606344(evpDialog, _9__1, method);
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
    sub_1C13F80(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BB34DC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__, v4);
    byte_4BB34DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C13F80(Instance, v6);
  SummonAssetManager__LoadSummonAssets(v8, _9__3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BB34DB & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_4BB34DB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C13F80(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v5);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__3(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  Il2CppObject *v16; // x20
  struct UserPresentBoxWindow_o *v17; // x8
  SummonAssetManager_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t v25; // w21
  struct UserPresentBoxWindow_o *v26; // x8
  ServantRewardAction_o *svtGetAction; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v30; // w0
  Il2CppObject v31; // q1
  int32_t v32; // w23
  int64_t v33; // x0
  Il2CppClass *v34; // x8
  int64_t v35; // x20
  struct UserPresentBoxWindow_o *v36; // x8
  struct ServantRewardAction_o *v37; // x8
  Il2CppObject *v38; // x0
  struct UserPresentBoxWindow_o *v39; // x22
  Il2CppObject *v40; // x21
  struct UserPresentBoxWindow_o *v41; // x8
  SummonAssetManager_o *v42; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct UserPresentBoxWindow_o *v49; // x8
  ServantRewardAction_o *v50; // x20
  Il2CppObject v51; // q1
  bool isNew; // w2
  int64_t v53; // x1
  bool v54; // w3
  int32_t v55; // w4
  ServantRewardAction_o *v56; // x0
  struct UserPresentBoxWindow_o *v57; // x8
  ServantRewardAction_o *v58; // x21
  void *v59; // x22
  Il2CppClass *v60; // x23
  int32_t v61; // w0
  Il2CppObject v62; // q1
  int32_t v63; // w22
  int64_t v64; // x0
  Il2CppClass *v65; // x8
  int64_t v66; // x20
  Il2CppObject v67; // q1
  Il2CppObject *v68; // x19
  System_Action_o *v69; // x20
  const MethodInfo *v70; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4BB34DD & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1C13D24(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_1C13D24(&Method_UserPresentBoxWindow_EndEffect__, v11);
    byte_4BB34DD = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    v16 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_55;
    v18 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v17->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v18 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v18, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_55;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.svtGetAction, Instance, v19, v20, v21, v22, v23, v24);
    if ( this->fields.isDoEffect )
    {
      if ( v16 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_41384148((UserServantEntity_o *)v16, 1, 0LL);
        v25 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v25 = 6;
          else
            v25 = 14;
        }
        v26 = this->fields.__4__this;
        if ( v26 )
        {
          svtGetAction = v26->fields.svtGetAction;
          klass = v16[5].klass;
          monitor = v16[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v76.fields.currentCryptoKey = klass;
          *(_QWORD *)&v76.fields.fakeValue = monitor;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v76, 0LL);
          v31 = v16[2];
          v32 = v30;
          *(Il2CppObject *)&v75.fields.currentCryptoKey = v16[1];
          *(Il2CppObject *)&v75.fields.fakeValue = v31;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v74 = v75;
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v74, 0LL);
          v34 = v16[6].klass;
          *(_QWORD *)&v77.fields.fakeValue = v16[6].monitor;
          v35 = v33;
          *(_QWORD *)&v77.fields.currentCryptoKey = v34;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v77, 0LL);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v32,
              v35,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v25,
              0LL);
            if ( !this->fields.isNew )
              goto LABEL_53;
            v36 = this->fields.__4__this;
            if ( v36 )
            {
              v37 = v36->fields.svtGetAction;
              if ( v37 )
              {
                v37->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_53;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1C13F80(Instance, v13);
    }
    v57 = this->fields.__4__this;
    if ( !v57 || !v16 )
      goto LABEL_55;
    v58 = v57->fields.svtGetAction;
    v60 = v16[5].klass;
    v59 = v16[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v78.fields.currentCryptoKey = v60;
    *(_QWORD *)&v78.fields.fakeValue = v59;
    v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v78, 0LL);
    v62 = v16[2];
    v63 = v61;
    *(Il2CppObject *)&v75.fields.currentCryptoKey = v16[1];
    *(Il2CppObject *)&v75.fields.fakeValue = v62;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v73 = v75;
    v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v73, 0LL);
    v65 = v16[6].klass;
    *(_QWORD *)&v79.fields.fakeValue = v16[6].monitor;
    v66 = v64;
    *(_QWORD *)&v79.fields.currentCryptoKey = v65;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v79, 0LL);
    if ( !v58 )
      goto LABEL_55;
    ServantRewardAction__Setup(v58, v63, v66, Instance, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_55;
    v38 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_323AB80 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v39 = this->fields.__4__this;
    v40 = v38;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v41 = this->fields.__4__this;
    if ( !v41 )
      goto LABEL_55;
    v42 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v41->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v42 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v42, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !v39 )
      goto LABEL_55;
    v39->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v39->fields.svtGetAction, Instance, v43, v44, v45, v46, v47, v48);
    v49 = this->fields.__4__this;
    if ( !v49 || !v40 )
      goto LABEL_55;
    v50 = v49->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v51 = v40[2];
      *(Il2CppObject *)&v75.fields.currentCryptoKey = v40[1];
      *(Il2CppObject *)&v75.fields.fakeValue = v51;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v72 = v75;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v72, 0LL);
      if ( !v50 )
        goto LABEL_55;
      isNew = this->fields.isNew;
      v53 = Instance;
      v54 = 1;
      v55 = 14;
      v56 = v50;
    }
    else
    {
      v67 = v40[2];
      *(Il2CppObject *)&v75.fields.currentCryptoKey = v40[1];
      *(Il2CppObject *)&v75.fields.fakeValue = v67;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v71 = v75;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v71, 0LL);
      if ( !v50 )
        goto LABEL_55;
      v53 = Instance;
      v55 = 6;
      v56 = v50;
      isNew = 0;
      v54 = 0;
    }
    ServantRewardAction__SetupCommandCode_35701208(v56, v53, isNew, v54, v55, 0LL);
  }
LABEL_53:
  v68 = (Il2CppObject *)this->fields.__4__this;
  v69 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v69, v68, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v68 )
    goto LABEL_55;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v68, v69, v70);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v11; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB34DE & 1) == 0 )
  {
    sub_1C13D24(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__, v4);
    byte_4BB34DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_1C13F70(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__2,
      (int64_t)_9__2,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v11 )
LABEL_8:
    sub_1C13F80(Instance, v6);
  CommonUI__OpenNotificationDialog_31073088(
    v11,
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BB34DF & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_4BB34DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C13F80(Instance, v6);
  CommonUI__LoadCostumeReleaseEffect(v8, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x21
  System_String_o *name; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BB34E0 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_4BB34E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
    sub_1C13F80(Instance, v6);
  CommonUI__OpenCostumeReleaseEffect(v8, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BB34E1 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB34E1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C13F80(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BB34E2 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__, v4);
    byte_4BB34E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C13F80(Instance, v6);
  CommonUI__LoadEquipGetEffect(v8, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BB34E3 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__, v4);
    byte_4BB34E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
    sub_1C13F80(Instance, v6);
  CommonUI__OpenEquipGetEffect(v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BB34E4 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB34E4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C13F80(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BB34E5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__, v4);
    byte_4BB34E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
    sub_1C13F80(Instance, v6);
  CommonUI__LoadItemGetEffect(v8, questRewardInfo, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *Instance; // x0
  __int64 v6; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  CommonUI_o *v8; // x20
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v10; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB34E6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__, v4);
    byte_4BB34E6 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v8 = (CommonUI_o *)Instance;
  Instance = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v10 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  if ( !v8 )
LABEL_9:
    sub_1C13F80(Instance, v6);
  CommonUI__OpenItemGetEffect(v8, v10, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BB34E7 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB34E7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C13F80(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v4);
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
  UserPresentBoxWindow___c__DisplayClass95_0_o *v2; // x19
  struct UserPresentBoxWindow_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UserPresentBoxWindow_o *v5; // x8

  v2 = this;
  if ( (byte_4BB34E8 & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB34E8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)_4__this->fields.svtGetAction;
  if ( !this )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70722176(gameObject, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0LL )
LABEL_10:
    sub_1C13F80(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v2->fields.end_act, 0LL);
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