void UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_long__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C366D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C366D2 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.befCommandCodeList, (int32_t)v6, v7, v8);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void UserPresentBoxWindow__CallbackReceiveRequest(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *v4; // x19
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UserPresentBoxWindow_o *v9; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct PlayMakerFSM_o *v14; // x8
  struct GetCommandCodes_array *fsm; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct PlayMakerFSM_o *v18; // x8
  struct UserPresentBoxWindow_evPointReward_array *fsmTemplate; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct PlayMakerFSM_o *v22; // x8
  struct GetSvtCoin_array *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct PlayMakerFSM_o *v26; // x8
  struct GetSvtCoin_array *addEventHandlers; // x1
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x2

  v4 = this;
  if ( (byte_4C366AC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    this = (UserPresentBoxWindow_o *)sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C366AC = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    UserPresentBoxWindow__ReDisp(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_63556792(
                         (System_String_o *)StringLiteral_15802/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16056/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v6,
                                     (const MethodInfo_314C85C *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_20;
  v9 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_20;
  m_CancellationTokenSource = myFsm->fields.m_CancellationTokenSource;
  v4->fields.getSvtList = (struct GetSvts_array *)m_CancellationTokenSource;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.getSvtList, (int32_t)m_CancellationTokenSource, v7, v8);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v14 = v9->fields.myFsm;
  if ( !v14 )
    goto LABEL_20;
  fsm = (struct GetCommandCodes_array *)v14->fields.fsm;
  v4->fields.getCommandCodeList = fsm;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.getCommandCodeList, (int32_t)fsm, v12, v13);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v18 = v9->fields.myFsm;
  if ( !v18 )
    goto LABEL_20;
  v4->fields.presentOverflowType = v18->fields.m_CachedPtr;
  fsmTemplate = (struct UserPresentBoxWindow_evPointReward_array *)v18->fields.fsmTemplate;
  v4->fields.evPointRewardList = fsmTemplate;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.evPointRewardList, (int32_t)fsmTemplate, v16, v17);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v22 = v9->fields.myFsm;
  if ( !v22 )
    goto LABEL_20;
  v23 = *(struct GetSvtCoin_array **)&v22->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = v23;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.getSvtCoins, (int32_t)v23, v20, v21);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_1C32E84(this);
  v26 = v9->fields.myFsm;
  if ( !v26 )
LABEL_20:
    sub_1C32E7C(this);
  addEventHandlers = (struct GetSvtCoin_array *)v26->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = addEventHandlers;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.overflowSvtCoinInfos, (int32_t)addEventHandlers, v24, v25);
  v28 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v28, v29);
}


bool UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  void *Filter_43764188; // x0
  ListViewSort_o **v9; // x8
  ListViewSort_o *v10; // x19
  UserPresentBoxMaster_c *v11; // x0
  bool v12; // w8
  bool result; // w0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v15; // w1

  if ( (byte_4C366A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&UserPresentBoxMaster_TypeInfo);
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366A9 = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
  }
  Filter_43764188 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_43764188 = UserPresentListViewManager_TypeInfo;
  }
  v9 = (ListViewSort_o **)*((_QWORD *)Filter_43764188 + 23);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_52;
  Filter_43764188 = (void *)ListViewSort__GetFilter_43764188(*v9, 13, 0);
  if ( ((unsigned __int8)Filter_43764188 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_52;
LABEL_20:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_43764188 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_43764188 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_43764188 + 23) + 712LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( !*((_DWORD *)Filter_43764188 + 56) )
          {
            j_il2cpp_runtime_class_init_0(Filter_43764188);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_43764188 = (void *)System_Array__IndexOf_int_(
                                      PresentBoxFilterSvtEquipMaterial,
                                      userPresentBoxEntity->fields.objectId,
                                      (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)Filter_43764188 & 0x80000000) == 0 )
            return ListViewSort__GetFilter_43764188(v10, 4, 0);
        }
        if ( servantMaster )
        {
          Filter_43764188 = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_43764188 )
          {
            switch ( *((_DWORD *)Filter_43764188 + 21) )
            {
              case 1:
              case 0xC:
                goto LABEL_21;
              case 3:
                v15 = 1;
                return ListViewSort__GetFilter_43764188(v10, v15, 0);
              case 6:
                v15 = 3;
                return ListViewSort__GetFilter_43764188(v10, v15, 0);
              case 7:
                v15 = 2;
                return ListViewSort__GetFilter_43764188(v10, v15, 0);
              case 8:
                v15 = 4;
                return ListViewSort__GetFilter_43764188(v10, v15, 0);
              default:
                goto LABEL_39;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_43764188 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_43764188 )
          break;
        switch ( *((_DWORD *)Filter_43764188 + 12) )
        {
          case 2:
          case 0x11:
          case 0x14:
          case 0x24:
            v15 = 10;
            break;
          case 3:
          case 4:
            v15 = 6;
            break;
          case 5:
            v15 = 11;
            break;
          case 9:
            v15 = 8;
            break;
          case 0xA:
          case 0xB:
          case 0xC:
          case 0x19:
          case 0x1D:
            v15 = 7;
            break;
          case 0xE:
          case 0xF:
          case 0x12:
          case 0x13:
          case 0x1C:
            v15 = 12;
            break;
          case 0x18:
            v15 = 9;
            break;
          default:
            goto LABEL_39;
        }
        return ListViewSort__GetFilter_43764188(v10, v15, 0);
      case 6:
      case 7:
LABEL_21:
        v12 = ListViewSort__GetFilter_43764188(v10, 0, 0);
        result = 0;
        if ( !v12 )
          return result;
        return 1;
      case 0xB:
        v15 = 5;
        return ListViewSort__GetFilter_43764188(v10, v15, 0);
      default:
LABEL_39:
        v15 = 14;
        return ListViewSort__GetFilter_43764188(v10, v15, 0);
    }
LABEL_52:
    sub_1C32E7C(Filter_43764188);
  }
  Filter_43764188 = UserPresentBoxMaster_TypeInfo;
  if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
  if ( !userPresentBoxEntity )
    goto LABEL_52;
  if ( !UserPresentBoxEntity__IsEnableFlag(
          userPresentBoxEntity,
          UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
          0) )
  {
    v11 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v11 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_43764188 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v11->static_fields->IMPORTANT_FOR_LIMIT,
                                0);
    if ( ((unsigned __int8)Filter_43764188 & 1) == 0 )
      goto LABEL_20;
  }
  return 1;
}


bool UserPresentBoxWindow__CheckRarityFilter(
        UserPresentBoxWindow_o *this,
        ServantLimitMaster_o *servantLimitMaster,
        CommandCodeMaster_o *commandCodeMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        bool isActiveFilterCategory,
        const MethodInfo *method)
{
  void *Filter_43764188; // x0
  ListViewSort_o **v11; // x8
  ListViewSort_o *v12; // x19
  UserPresentBoxMaster_c *v13; // x0
  int32_t giftType; // w8
  _DWORD *v15; // x8
  bool Filter_43764236; // w8
  bool result; // w0
  int32_t v18; // w1

  if ( (byte_4C366AA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C32C20(&UserPresentBoxMaster_TypeInfo);
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366AA = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
  }
  Filter_43764188 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_43764188 = UserPresentListViewManager_TypeInfo;
  }
  v11 = (ListViewSort_o **)*((_QWORD *)Filter_43764188 + 23);
  v12 = *v11;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v12 )
    goto LABEL_49;
  Filter_43764188 = (void *)ListViewSort__GetFilter_43764188(*v11, 13, 0);
  if ( ((unsigned __int8)Filter_43764188 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_49;
  }
  else
  {
LABEL_12:
    Filter_43764188 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    if ( !userPresentBoxEntity )
      goto LABEL_49;
    if ( UserPresentBoxEntity__IsEnableFlag(
           userPresentBoxEntity,
           UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
           0) )
    {
      return 1;
    }
    v13 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v13 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_43764188 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v13->static_fields->IMPORTANT_FOR_LIMIT,
                                0);
    if ( ((unsigned __int8)Filter_43764188 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( servantLimitMaster )
    {
      Filter_43764188 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0);
      if ( Filter_43764188 )
      {
        v15 = (char *)Filter_43764188 + 24;
        goto LABEL_30;
      }
      return 1;
    }
LABEL_49:
    sub_1C32E7C(Filter_43764188);
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_49;
  Filter_43764188 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_3396838 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_43764188 )
    return 1;
  v15 = (char *)Filter_43764188 + 64;
LABEL_30:
  switch ( *v15 )
  {
    case 0:
      if ( !v12 )
        goto LABEL_49;
      if ( !ListViewSort__CheckPresentBoxRarityFilterAll(v12, 0)
        && !ListViewSort__UnCheckPresentBoxRarityFilterAll(v12, 0) )
      {
        goto LABEL_48;
      }
      return 1;
    case 1:
      if ( !v12 )
        goto LABEL_49;
      Filter_43764236 = ListViewSort__GetFilter_43764236(v12, 0, 0);
      result = 0;
      if ( !Filter_43764236 )
        return result;
      return 1;
    case 2:
      if ( !v12 )
        goto LABEL_49;
      v18 = 1;
      goto LABEL_46;
    case 3:
      if ( !v12 )
        goto LABEL_49;
      v18 = 2;
      goto LABEL_46;
    case 4:
      if ( !v12 )
        goto LABEL_49;
      v18 = 3;
      goto LABEL_46;
    case 5:
      if ( !v12 )
        goto LABEL_49;
      v18 = 4;
LABEL_46:
      if ( ListViewSort__GetFilter_43764236(v12, v18, 0) )
        return 1;
LABEL_48:
      result = 0;
      break;
    default:
      return 1;
  }
  return result;
}


void UserPresentBoxWindow__CheckSvtGetTutorial(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  void *receiveList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o **v9; // x22
  int32_t receiveIdx; // w1
  _DWORD *v11; // x20
  System_Action_o *v12; // x21

  if ( (byte_4C366C1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
    byte_4C366C1 = 1;
  }
  v5 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass102_0___ctor((UserPresentBoxWindow___c__DisplayClass102_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  v9 = (System_Action_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v11 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v12,
          (Il2CppObject *)v5,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0);
        EventTutorialMaster__CheckTutorial(-1, 11, v12, v11[19], 0, 0, 0, 0);
        return;
      }
      if ( *v9 )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))(*v9)->fields.invoke_impl)(
          (*v9)->fields.method_code,
          (*v9)->fields.method);
        return;
      }
    }
LABEL_14:
    sub_1C32E7C(receiveList);
  }
  if ( *v9 )
    ActionExtensions__Call(*v9, 0);
}


void UserPresentBoxWindow__ClickFilterEnd(UserPresentBoxWindow_o *this, bool result, const MethodInfo *method)
{
  UserPresentListViewManager_c *v5; // x0
  ListViewSort_o *sortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C366D1 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D1 = 1;
  }
  if ( result )
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4C366D9 )
    {
      sub_1C32C20(&UserPresentListViewManager_TypeInfo);
      byte_4C366D9 = 1;
    }
    v5 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v5 = UserPresentListViewManager_TypeInfo;
    }
    sortInfo = v5->static_fields->sortInfo;
    if ( !sortInfo
      || (ListViewSort__Save(sortInfo, 0), (sortInfo = (ListViewSort_o *)this->fields.userPresentListViewManager) == 0) )
    {
LABEL_15:
      sub_1C32E7C(sortInfo);
    }
    UserPresentListViewManager__resetCheckStatus((UserPresentListViewManager_o *)sortInfo, 0);
    this->fields.mIsScrlResetPosition = 1;
    UserPresentBoxWindow__ReDisp(this, v7);
  }
  sortInfo = (ListViewSort_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !sortInfo )
    goto LABEL_15;
  PresentBoxFilterSelectMenu__Close((PresentBoxFilterSelectMenu_o *)sortInfo, 0);
}


void UserPresentBoxWindow__Close(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  if ( (byte_4C366C7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C366C7 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( ((unsigned __int8)userPresentListViewManager & 1) != 0 )
  {
    if ( !mInstance )
      goto LABEL_17;
    TerminalSceneComponent__UpdateQuestBoardList((TerminalSceneComponent_o *)mInstance, 0);
  }
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__DestroyList(userPresentListViewManager, 0),
        (userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0)) == 0) )
  {
LABEL_17:
    sub_1C32E7C(userPresentListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentListViewManager, 0, 0);
}


QuestRewardInfo_o *UserPresentBoxWindow__CreateQuestRewardInfo(
        UserPresentBoxWindow_o *this,
        UserPresentBoxEntity_o *userPresentBox,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  QuestRewardInfo_o *result; // x0

  if ( (byte_4C366B8 & 1) == 0 )
  {
    sub_1C32C20(&QuestRewardInfo_TypeInfo);
    byte_4C366B8 = 1;
  }
  v4 = sub_1C32E6C(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v4, 0);
  if ( !userPresentBox || !v4 )
    sub_1C32E7C(v5);
  result = (QuestRewardInfo_o *)v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v4 + 24) = userPresentBox->fields.num;
  return result;
}


void UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C366B9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5440/*"END_EFFECT"*/);
    byte_4C366B9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5440/*"END_EFFECT"*/, 0);
}


void UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C366C2 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C366C2 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
}


void UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C366AF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_EndReceive__);
    byte_4C366AF = 1;
  }
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndReceive__, 0);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


void UserPresentBoxWindow__EventPointRewardWithSvtGet(UserPresentBoxWindow_o *this, bool res, const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C366B0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_EndEffectReceive__);
    byte_4C366B0 = 1;
  }
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


bool UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  char v7; // w20
  int v8; // w21
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C366AD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C366AD = 1;
  }
  memset(&v11, 0, sizeof(v11));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_1C32E7C(v4);
    if ( !Gift__IsCostumeRelease((int32_t)v11.fields._current[4].monitor, 0)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0) )
        continue;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_1C32E7C(0);
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)Instance, HIDWORD(current[4].monitor), 0) )
        continue;
    }
    v7 = 1;
    v8 = 6;
    goto LABEL_14;
  }
  v7 = 0;
  v8 = 7;
LABEL_14:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return v7 & (v8 == 6);
}


void UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isReceiveFlg; // w20
  System_Reflection_MethodBase_o *v5; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  System_Action_o *v9; // x22
  System_Action_o *v10; // x23

  if ( (byte_4C366C3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_OnClickAll__);
    sub_1C32C20(&Method_UserPresentBoxWindow_ProcessClickAll__);
    sub_1C32C20(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__);
    byte_4C366C3 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickAll__;
  isReceiveFlg = this->fields.isReceiveFlg;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  if ( isReceiveFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_11;
    UserPresentListViewManager__SetMode_40135620(userPresentListViewManager, 2, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, 0),
          v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
          System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0),
          v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0),
          !presentDialog) )
    {
LABEL_11:
      sub_1C32E7C(userPresentListViewManager);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v9, v10, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void UserPresentBoxWindow__OnClickBack(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct UserPresentBoxWindow_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4C366C8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UserPresentBoxWindow_OnClickBack__);
    byte_4C366C8 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      this->fields.gotServant,
      callbackFunc->fields.method);
}


void UserPresentBoxWindow__OnClickCheckedItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4C366C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UserPresentBoxWindow_OnClickCheckedItem__);
    byte_4C366C5 = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, 0),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
      sub_1C32E7C(userPresentListViewManager);
    }
    UserPresentListViewManager__SetMode_40135620(userPresentListViewManager, 2, 0);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v6);
  }
  else
  {
    v7 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
  }
}


void UserPresentBoxWindow__OnClickFilter(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Object_o *presentBoxFilterSelectMenu; // x21
  struct PresentBoxFilterSelectMenu_o **p_presentBoxFilterSelectMenu; // x20
  Il2CppObject *presentBoxFilterKindSelectMenuPrefab; // x21
  Il2CppObject *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  PresentBoxFilterSelectMenu_o *v14; // x20
  UserPresentListViewManager_c *v15; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v17; // x22

  if ( (byte_4C366D0 & 1) == 0 )
  {
    sub_1C32C20(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_ClickFilterEnd__);
    sub_1C32C20(&Method_UserPresentBoxWindow_OnClickFilter__);
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D0 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickFilter__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  presentBoxFilterSelectMenu = (UnityEngine_Object_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_presentBoxFilterSelectMenu = &this->fields.presentBoxFilterSelectMenu;
  if ( UnityEngine_Object__op_Equality(presentBoxFilterSelectMenu, 0, 0) )
  {
    presentBoxFilterKindSelectMenuPrefab = (Il2CppObject *)this->fields.presentBoxFilterKindSelectMenuPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object_(
           presentBoxFilterKindSelectMenuPrefab,
           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_36042552((UnityEngine_GameObject_o *)v8, gameObject, 0);
    if ( !v8 )
LABEL_20:
      sub_1C32E7C(v10);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.presentBoxFilterSelectMenu, (int32_t)Component_object, v12, v13);
  }
  v14 = *p_presentBoxFilterSelectMenu;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
  }
  v15 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v15 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v15->static_fields->sortInfo;
  v17 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_1C32E6C(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0);
  if ( !v14 )
    goto LABEL_20;
  PresentBoxFilterSelectMenu__Open(v14, sortInfo, v17, 0);
}


void UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  UserPresentBoxWindow_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C366CE & 1) == 0 )
  {
    sub_1C32C20(&Method_UserPresentBoxWindow_OnClickHelp__);
    byte_4C366CE = 1;
  }
  v2 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  UserPresentBoxWindow__OpenHelp(v4, v5);
}


void UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4C366C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UserPresentBoxWindow_OnClickItem__);
    byte_4C366C4 = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, 0),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
      sub_1C32E7C(userPresentListViewManager);
    }
    UserPresentListViewManager__SetMode_40135620(userPresentListViewManager, 2, 0);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v6);
  }
  else
  {
    v7 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickItem__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
  }
}


void UserPresentBoxWindow__OnClickPresentHistoryButton(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C366C9 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
    sub_1C32C20(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__);
    byte_4C366C9 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C366A2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C366A2 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_titleInfo = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_titleInfo, 0, v7, v8);
  }
}


void UserPresentBoxWindow__Open(
        UserPresentBoxWindow_o *this,
        bool isShowBg,
        UserPresentBoxWindow_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgObject; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v13; // x3
  UserPresentBoxWindow_o *v14; // x0
  const MethodInfo *v15; // x3
  UserPresentBoxWindow_o *v16; // x0
  const MethodInfo *v17; // x3
  UserPresentBoxWindow_o *v18; // x0
  const MethodInfo *v19; // x1
  struct System_String_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  Il2CppObject *titlePrefab; // x22
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  TitleInfoControl_o *v30; // x22
  TitleInfoControl_o *v31; // x21
  System_Action_o *v32; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v34; // x21
  System_Action_int__o *v35; // x22
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  bool v41; // w20
  const MethodInfo *v42; // x2

  if ( (byte_4C366A3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_OnClickBack__);
    sub_1C32C20(&Method_UserPresentBoxWindow__Open_b__69_0__);
    sub_1C32C20(&StringLiteral_5425/*"ENABLE_PRESENT_HISTORY"*/);
    byte_4C366A3 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0);
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  bgObject = (UnityEngine_GameObject_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v13);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v14 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v14, 0, (UnityEngine_GameObject_o *)v14, v15);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v16 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v16, 0, (UnityEngine_GameObject_o *)v16, v17);
  v20 = UserPresentBoxWindow__maxSelectable(v18, v19);
  this->fields.presentMaxSelectable = v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.presentMaxSelectable, (int32_t)v20, v21, v22);
  UserPresentBoxWindow__SetSelectCount(this, 0, v23);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0, 0) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bgObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             titlePrefab,
                                             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v28, v29);
      v30 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( v30 )
      {
        TitleInfoControl__SetParent(v30, (UnityEngine_Transform_o *)bgObject, 0);
        bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
        if ( *p_titleInfo )
        {
          TitleInfoControl__setDepth((TitleInfoControl_o *)bgObject, 51, 0);
          bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
          if ( *p_titleInfo )
          {
            TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)bgObject, 52, 0);
            bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
            if ( *p_titleInfo )
            {
              TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgObject, 0, 1, 0, 45, 0);
              bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
              if ( *p_titleInfo )
              {
                TitleInfoControl__changeTitleInfo_39747676((TitleInfoControl_o *)bgObject, 1, 45, 0, 0);
                v31 = this->fields.titleInfo;
                v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                System_Action___ctor(v32, (Il2CppObject *)this, (intptr_t)Method_UserPresentBoxWindow_OnClickBack__, 0);
                if ( v31 )
                {
                  TitleInfoControl__SetBackBtnAct(v31, v32, 0);
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C32E7C(bgObject);
  }
LABEL_20:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v35 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
  System_Action_int____ctor(v35, (Il2CppObject *)this, Method_UserPresentBoxWindow__Open_b__69_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(v34, v35, 1, 0);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_28;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, 0);
  UserPresentBoxWindow__SetFilterButtonImage(this, v36);
  bgObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, 1, 0);
  bgObject = (UnityEngine_GameObject_o *)this->fields.sortBtn;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bgObject, 0, 0);
  bgObject = (UnityEngine_GameObject_o *)this->fields.sortBtn;
  if ( !bgObject )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))bgObject->klass[1]._1.nestedTypes)(
    bgObject,
    3,
    1,
    bgObject->klass[1]._1.implementedInterfaces);
  UserPresentBoxWindow__RequestPresentList(this, v37);
  this->fields.mReDispAct = redisp_act;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mReDispAct, (int32_t)redisp_act, v38, v39);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v40);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5425/*"ENABLE_PRESENT_HISTORY"*/, 0);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_28;
  v41 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v41, v42);
}


void UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  TutorialFlag_ImageId_array *v5; // x20
  __int64 v6; // x0

  if ( (byte_4C366CF & 1) == 0 )
  {
    sub_1C32C20(&TutorialFlag_ImageId___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E);
    byte_4C366CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (System_Array_o *)sub_1C32CC8(TutorialFlag_ImageId___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v5 = (TutorialFlag_ImageId_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v3, v4, 0);
  if ( !Instance )
    sub_1C32E7C(v6);
  CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v5, 201, 0, 0, 0, 0);
}


void UserPresentBoxWindow__ProcessClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v4; // x2

  userPresentListViewManager = this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 1;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 1, 0),
        (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
  {
    sub_1C32E7C(userPresentListViewManager);
  }
  UserPresentListViewManager__SetMode_40135620(userPresentListViewManager, 2, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v4);
}


void UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UserServantMaster_o *v9; // x8
  UserCommandCodeMaster_o *v10; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int32_t v13; // w21
  System_String_o *v14; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x24
  Il2CppObject *v28; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x24
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v46; // x23
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  Il2CppObject *v59; // x21
  BalanceConfig_c *v60; // x0
  Il2CppObject *v61; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v66; // x22
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  Il2CppObject *v73; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v75; // x22
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x5
  __int64 v80; // x6
  __int64 v81; // x7
  Il2CppObject *v82; // x0
  UserPresentBoxEntity_array *v83; // x20
  BalanceConfig_c *v84; // x0
  il2cpp_array_size_t max_length; // x26
  UILabel_o *presentInfoLabel; // x22
  int32_t PresentBoxMax; // w19
  System_String_o *v88; // x23
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  __int64 v92; // x5
  __int64 v93; // x6
  __int64 v94; // x7
  Il2CppObject *v95; // x24
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  __int64 v99; // x5
  __int64 v100; // x6
  __int64 v101; // x7
  Il2CppObject *v102; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v104; // x23
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  __int64 v108; // x5
  __int64 v109; // x6
  __int64 v110; // x7
  Il2CppObject *v111; // x0
  UserPresentListViewManager_c *v112; // x0
  _BOOL4 v113; // w22
  UserPresentListViewManager_c *v114; // x0
  UserPresentListViewManager_c *v115; // x0
  const MethodInfo *v116; // x1
  _BOOL4 v117; // w28
  UserPresentListViewManager_c *v118; // x0
  Il2CppObject *v119; // x23
  Il2CppObject *v120; // x24
  Il2CppObject *v121; // x25
  Il2CppObject *v122; // x27
  System_Collections_Generic_List_object__o *v123; // x26
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  const MethodInfo *v126; // x4
  const MethodInfo *v127; // x5
  unsigned __int64 v128; // x29
  UserPresentBoxEntity_o **m_Items; // x19
  Il2CppObject *v130; // x1
  struct System_Object_array *items; // x8
  _QWORD *v132; // x9
  __int64 size; // x10
  Il2CppClass **v134; // x0
  int v135; // w24
  const MethodInfo *v136; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v137; // x21
  char v138; // w22
  char v139; // w23
  unsigned int v140; // w25
  UserPresentBoxEntity_o *v141; // x8
  int32_t giftType; // w9
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v144; // x3
  UserPresentBoxWindow_o *v145; // x0
  const MethodInfo *v146; // x3
  UserPresentBoxWindow_o *v147; // x0
  const MethodInfo *v148; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  System_String_o **v150; // x8
  __int64 v151; // x8
  UserPresentBoxWindow_o *v152; // x0
  const MethodInfo *v153; // x3
  UserPresentBoxWindow_o *v154; // x0
  const MethodInfo *v155; // x3
  UserPresentBoxWindow_o *v156; // x0
  const MethodInfo *v157; // x3
  const MethodInfo *v158; // x2
  _BOOL8 _40328320; // x0
  const MethodInfo *v160; // x1
  UserPresentBoxWindow_o *v161; // [xsp+8h] [xbp-C8h]
  int32_t capacity; // [xsp+10h] [xbp-C0h]
  int32_t v163; // [xsp+18h] [xbp-B8h] BYREF
  int32_t v164; // [xsp+1Ch] [xbp-B4h] BYREF
  int v165; // [xsp+20h] [xbp-B0h] BYREF
  int32_t FriendPoint; // [xsp+24h] [xbp-ACh] BYREF
  int64_t qp; // [xsp+28h] [xbp-A8h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int32_t v169; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int32_t v171; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int32_t v173; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C366A7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78026784);
    sub_1C32C20(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10456/*"PRESENT_LIST_INFO"*/);
    sub_1C32C20(&StringLiteral_10973/*"RECEIVE_FILTER_NOTHING"*/);
    sub_1C32C20(&StringLiteral_10972/*"RECEIVE_ALL_DONE"*/);
    sub_1C32C20(&StringLiteral_3937/*"CURRENT_QP_UNIT"*/);
    sub_1C32C20(&StringLiteral_10457/*"PRESENT_LIST_NOTICE"*/);
    sub_1C32C20(&StringLiteral_3935/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_1C32C20(&StringLiteral_12477/*"SUM_INFO"*/);
    byte_4C366A7 = 1;
  }
  entity = 0;
  *(_QWORD *)servantEquipSum = 0;
  scroll.fields.z = 0.0;
  offset = 0;
  *(_QWORD *)&scroll.fields.x = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)MasterData_object, v7, v8);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v9 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_146;
  v10 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v9, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !v10 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v10, 0);
  svtNumValLb = this->fields.svtNumValLb;
  v13 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
  v173 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v173, v15, v16, v17, v18, v19, v20);
  if ( !SelfUserGame )
    goto LABEL_146;
  v27 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v21, v22, v23, v24, v25, v26);
  Instance = (__int64)System_String__Format_63559836(v14, v27, v28, 0);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
  v171 = servantEquipSum[0];
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171, v31, v32, v33, v34, v35, v36);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v38, v39, v40, v41, v42, v43);
  Instance = (__int64)System_String__Format_63559836(v30, v37, v44, 0);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
  v169 = v13;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169, v47, v48, v49, v50, v51, v52);
  if ( !byte_4C31CFA )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C31CFA = 1;
  }
  v60 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v60->static_fields->CommandCodeFrameMax;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax, v53, v54, v55, v56, v57, v58);
  Instance = (__int64)System_String__Format_63559836(v46, v59, v61, 0);
  if ( !commandCodeNumValLb )
    goto LABEL_146;
  UILabel__set_text(commandCodeNumValLb, (System_String_o *)Instance, 0);
  stoneNumValLb = this->fields.stoneNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.stone, 0);
  if ( !stoneNumValLb )
    goto LABEL_146;
  UILabel__set_text(stoneNumValLb, (System_String_o *)Instance, 0);
  rpNumValLb = this->fields.rpNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.rarePri, 0);
  if ( !rpNumValLb )
    goto LABEL_146;
  UILabel__set_text(rpNumValLb, (System_String_o *)Instance, 0);
  mpNumValLb = this->fields.mpNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.mana, 0);
  if ( !mpNumValLb )
    goto LABEL_146;
  UILabel__set_text(mpNumValLb, (System_String_o *)Instance, 0);
  qpNumValLb = this->fields.qpNumValLb;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3937/*"CURRENT_QP_UNIT"*/, 0);
  qp = SelfUserGame->fields.qp;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &qp, v67, v68, v69, v70, v71, v72);
  Instance = (__int64)System_String__Format(v66, v73, 0);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0);
  fpNumValLb = this->fields.fpNumValLb;
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3935/*"CURRENT_FRIEND_POINT_UNIT"*/, 0);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0);
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint, v76, v77, v78, v79, v80, v81);
  Instance = (__int64)System_String__Format(v75, v82, 0);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        0);
  if ( !Instance )
    goto LABEL_146;
  v83 = (UserPresentBoxEntity_array *)Instance;
  v84 = BalanceConfig_TypeInfo;
  max_length = v83->max_length;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v84 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = this->fields.presentInfoLabel;
  PresentBoxMax = v84->static_fields->PresentBoxMax;
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"PRESENT_LIST_INFO"*/, 0);
  v165 = max_length;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v165, v89, v90, v91, v92, v93, v94);
  v164 = PresentBoxMax;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v164, v96, v97, v98, v99, v100, v101);
  Instance = (__int64)System_String__Format_63559836(v88, v95, v102, 0);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PRESENT_LIST_NOTICE"*/, 0);
  v163 = PresentBoxMax;
  v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163, v105, v106, v107, v108, v109, v110);
  Instance = (__int64)System_String__Format(v104, v111, 0);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
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
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0) )
  {
    v113 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4C366D9 )
    {
      sub_1C32C20(&UserPresentListViewManager_TypeInfo);
      byte_4C366D9 = 1;
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
    v113 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
  }
  v115 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v115 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v115->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0) )
  {
    v117 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4C366D9 )
    {
      sub_1C32C20(&UserPresentListViewManager_TypeInfo);
      byte_4C366D9 = 1;
    }
    v118 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v118 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v118->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v117 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0);
  }
  if ( v117 || v113 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v119 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v120 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v161 = this;
    capacity = max_length;
    v121 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v122 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v123 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58294264(
      v123,
      capacity,
      (const MethodInfo_3797FF8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78026784);
    if ( capacity >= 1 )
    {
      v128 = 0;
      m_Items = v83->m_Items;
      do
      {
        if ( !v113 )
          goto LABEL_150;
        if ( v128 >= LODWORD(v83->max_length) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v119,
                     (ItemMaster_o *)v120,
                     m_Items[v128],
                     v126);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v117 )
            goto LABEL_76;
          if ( v128 >= LODWORD(v83->max_length) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v121,
                       (CommandCodeMaster_o *)v122,
                       m_Items[v128],
                       v113,
                       v127);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v128 >= LODWORD(v83->max_length) )
LABEL_147:
              sub_1C32E84(Instance);
            if ( !v123 )
              goto LABEL_146;
            v130 = (Il2CppObject *)m_Items[v128];
            items = v123->fields._items;
            v132 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v123->fields._version;
            if ( !items )
              goto LABEL_146;
            size = v123->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v123,
                v130,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
            }
            else
            {
              v134 = &items->obj.klass + size;
              v123->fields._size = size + 1;
              v134[4] = (Il2CppClass *)v130;
              sub_1C32BC4((CGThumbnailListItem_o *)(v134 + 4), (int32_t)v130, v124, v125);
            }
          }
        }
      }
      while ( capacity != ++v128 );
    }
    if ( !v123 )
      goto LABEL_146;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v123,
                          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v161;
    if ( !Instance )
      goto LABEL_146;
    v135 = *(_DWORD *)(Instance + 24);
    LODWORD(max_length) = capacity;
    v83 = (UserPresentBoxEntity_array *)Instance;
  }
  else
  {
    v135 = max_length;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, v116);
  UserPresentBoxWindow__SetSelectCount(this, 0, v136);
  if ( v135 < 1 )
  {
    Instance = (__int64)this->fields.userPresentListViewManager;
    if ( Instance )
    {
      UserPresentListViewManager__DestroyList((UserPresentListViewManager_o *)Instance, 0);
      Instance = (__int64)this->fields.allReceiveBtn;
      this->fields.isReceiveFlg = 0;
      if ( Instance )
      {
        gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0);
        UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v144);
        Instance = (__int64)this->fields.itemReceiveBtn;
        this->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v145 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          UserPresentBoxWindow__SetButtonTxtColor(v145, 0, (UnityEngine_GameObject_o *)v145, v146);
          Instance = (__int64)this->fields.checkedItemBtn;
          this->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v147 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0);
            UserPresentBoxWindow__SetButtonTxtColor(v147, 0, (UnityEngine_GameObject_o *)v147, v148);
            nonPresentNoticeLabel = this->fields.nonPresentNoticeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v150 = (System_String_o **)&StringLiteral_10972/*"RECEIVE_ALL_DONE"*/;
            if ( (_DWORD)max_length )
              v150 = (System_String_o **)&StringLiteral_10973/*"RECEIVE_FILTER_NOTHING"*/;
            Instance = (__int64)LocalizationManager__Get(*v150, 0);
            if ( nonPresentNoticeLabel )
            {
              UILabel__set_text(nonPresentNoticeLabel, (System_String_o *)Instance, 0);
              Instance = (__int64)this->fields.nonPresentNoticeLabel;
              if ( Instance )
              {
                Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
                  Instance = (__int64)this->fields.userPresentListViewManager;
                  if ( Instance )
                  {
                    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                      Instance = (__int64)this->fields.sortBtn;
                      if ( Instance )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
                        Instance = (__int64)this->fields.sortBtn;
                        if ( Instance )
                        {
                          v151 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  v137 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  while ( 1 )
  {
    if ( v140 >= LODWORD(v83->max_length) )
      goto LABEL_147;
    v141 = v83->m_Items[v140];
    if ( !v141 )
      goto LABEL_146;
    giftType = v141->fields.giftType;
    if ( giftType == 2 )
    {
      if ( !v137 )
        goto LABEL_146;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v137,
                   &entity,
                   v141->fields.objectId,
                   (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_146;
      if ( LODWORD(entity[3].klass) != 24 )
      {
LABEL_97:
        v139 = 1;
        v138 = 1;
      }
      if ( (v139 & 1) == 0 )
        goto LABEL_102;
    }
    else
    {
      v138 |= giftType == 9;
      v139 = 1;
    }
    if ( (v138 & 1) != 0 )
      break;
LABEL_102:
    if ( v135 == ++v140 )
      goto LABEL_121;
  }
  v139 = 1;
  v138 = 1;
LABEL_121:
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.nonPresentNoticeLabel;
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = v139 & 1;
  if ( !Instance )
    goto LABEL_146;
  v152 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v152, v139 & 1, (UnityEngine_GameObject_o *)v152, v153);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v138 & 1;
  if ( !Instance )
    goto LABEL_146;
  v154 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v154, v138 & 1, (UnityEngine_GameObject_o *)v154, v155);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v156 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v156, 0, (UnityEngine_GameObject_o *)v156, v157);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_1C32E7C(Instance);
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0) >= 3 )
  {
    scroll.fields.z = 0.0;
    offset = 0;
    *(_QWORD *)&scroll.fields.x = 0;
    Instance = (__int64)this->fields.userPresentListViewManager;
    if ( Instance )
    {
      ListViewManager__GetScrollView((ListViewManager_o *)Instance, &scroll, &offset, 0);
      Instance = (__int64)this->fields.userPresentListViewManager;
      if ( Instance )
      {
        UserPresentListViewManager__CreateList((UserPresentListViewManager_o *)Instance, v83, 0);
        Instance = (__int64)this->fields.userPresentListViewManager;
        if ( Instance )
        {
          ListViewManager__SetScrollView((ListViewManager_o *)Instance, scroll, offset, 0);
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
  UserPresentListViewManager__CreateList((UserPresentListViewManager_o *)Instance, v83, 0);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_40135620((UserPresentListViewManager_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v151 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v151 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v158);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40328320 = TutorialFlag__Get_40328320(201, 0);
  if ( !_40328320 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_40328320, v160);
  EventTutorialMaster__CheckTutorial(0, 78, 0, 0, 0, 0, 0, 0);
}


void UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C366A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_callbackPresentList__);
    byte_4C366A5 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void UserPresentBoxWindow__SetBtnEnable(UserPresentBoxWindow_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Component_o *sortBtn; // x0
  bool v6; // w21
  const MethodInfo *v7; // x2
  bool v8; // w20

  if ( (byte_4C366CA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4C366CA = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0);
  sortBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0);
  sortBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0);
  sortBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  v6 = is_enable;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0);
  sortBtn = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !sortBtn
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)sortBtn, v6, 0),
        UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v6, v7),
        (sortBtn = (UnityEngine_Component_o *)this->fields.helpBtn) == 0)
    || (v8 = is_enable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, v8, 0),
        (sortBtn = (UnityEngine_Component_o *)this->fields.filterBtn) == 0) )
  {
LABEL_19:
    sub_1C32E7C(sortBtn);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, v8, 0);
}


void UserPresentBoxWindow__SetButtonTxtColor(
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

  if ( (byte_4C366A4 & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4C366A4 = 1;
  }
  if ( !btnObject )
    goto LABEL_15;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                     btnObject,
                                     (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
        sub_1C32E84(this);
      this = (UserPresentBoxWindow_o *)*((_QWORD *)&v7->fields.myFsm + (int)v9);
      if ( !this )
        break;
      v10.fields.a = 1.0;
      v10.fields.r = v8;
      v10.fields.g = v8;
      v10.fields.b = v8;
      UIWidget__set_color((UIWidget_o *)this, v10, 0);
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
      if ( (int)++v9 >= m_CancellationTokenSource )
        return;
    }
LABEL_15:
    sub_1C32E7C(this);
  }
}


void UserPresentBoxWindow__SetCheckedItemsButtonEnable(
        UserPresentBoxWindow_o *this,
        bool how,
        bool isSetOtherButtonsToo,
        const MethodInfo *method)
{
  bool v7; // w19
  UnityEngine_Component_o *checkedItemBtn; // x0
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v10; // x3
  UserPresentBoxWindow_o *v11; // x0
  const MethodInfo *v12; // x3
  UserPresentBoxWindow_o *v13; // x0
  const MethodInfo *v14; // x3
  bool v15; // w1
  Il2CppObject *MasterData_object; // x20
  UserPresentBoxEntity_array *VaildList; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x29
  il2cpp_array_size_t max_length; // x22
  UserPresentListViewManager_c *v20; // x0
  _BOOL4 v21; // w27
  UserPresentListViewManager_c *v22; // x0
  UserPresentListViewManager_c *v23; // x0
  _BOOL4 v24; // w28
  UserPresentListViewManager_c *v25; // x0
  Il2CppObject *v26; // x23
  ItemMaster_o *v27; // x19
  Il2CppObject *v28; // x24
  Il2CppObject *v29; // x25
  System_Collections_Generic_List_object__o *v30; // x26
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x5
  unsigned __int64 v35; // x29
  UserPresentBoxEntity_o **m_Items; // x21
  Il2CppObject *v37; // x1
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  UserPresentBoxWindow_o *v42; // x0
  const MethodInfo *v43; // x3
  il2cpp_array_size_t v44; // x8
  __int64 v45; // x19
  UserPresentBoxEntity_o *v46; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v48; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v7 = how;
  if ( (byte_4C366C6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78026784);
    sub_1C32C20(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366C6 = 1;
  }
  entity = 0;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = v7;
  if ( !checkedItemBtn )
    goto LABEL_94;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, how, (UnityEngine_GameObject_o *)gameObject, v10);
  if ( !isSetOtherButtonsToo )
    return;
  if ( how )
  {
    checkedItemBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( checkedItemBtn )
    {
      v11 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
      UserPresentBoxWindow__SetButtonTxtColor(v11, 0, (UnityEngine_GameObject_o *)v11, v12);
      checkedItemBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( checkedItemBtn )
      {
        v13 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
        v15 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_94;
  }
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
                *(_QWORD *)(checkedItemBtn[7].fields.m_CachedPtr + 64),
                0);
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  checkedItemBtn = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)checkedItemBtn,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_94;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  max_length = VaildList->max_length;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
  }
  v20 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v20 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (UnityEngine_Component_o *)v20->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_94;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0) )
  {
    v21 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4C366D9 )
    {
      sub_1C32C20(&UserPresentListViewManager_TypeInfo);
      byte_4C366D9 = 1;
    }
    v22 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v22 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (UnityEngine_Component_o *)v22->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_94;
    v21 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
  }
  v23 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v23 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (UnityEngine_Component_o *)v23->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_94;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0) )
  {
    v24 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4C366D9 )
    {
      sub_1C32C20(&UserPresentListViewManager_TypeInfo);
      byte_4C366D9 = 1;
    }
    v25 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v25 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (UnityEngine_Component_o *)v25->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_94;
    v24 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0);
  }
  if ( v21 || v24 )
  {
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v26 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v48 = this;
    v27 = (ItemMaster_o *)v18;
    v28 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v29 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v30 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58294264(
      v30,
      max_length,
      (const MethodInfo_3797FF8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78026784);
    if ( (int)max_length >= 1 )
    {
      v35 = 0;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v21 )
          goto LABEL_98;
        if ( v35 >= LODWORD(VaildList->max_length) )
          goto LABEL_95;
        checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckFilter(
                                                      (UserPresentBoxWindow_o *)checkedItemBtn,
                                                      (ServantMaster_o *)v26,
                                                      v27,
                                                      m_Items[v35],
                                                      v33);
        if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
        {
LABEL_98:
          if ( !v24 )
            goto LABEL_66;
          if ( v35 >= LODWORD(VaildList->max_length) )
            goto LABEL_95;
          checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckRarityFilter(
                                                        (UserPresentBoxWindow_o *)checkedItemBtn,
                                                        (ServantLimitMaster_o *)v28,
                                                        (CommandCodeMaster_o *)v29,
                                                        m_Items[v35],
                                                        v21,
                                                        v34);
          if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
          {
LABEL_66:
            if ( v35 >= LODWORD(VaildList->max_length) )
LABEL_95:
              sub_1C32E84(checkedItemBtn);
            if ( !v30 )
              goto LABEL_94;
            v37 = (Il2CppObject *)m_Items[v35];
            items = v30->fields._items;
            v39 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_94;
            size = v30->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                v37,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v37;
              sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v37, v31, v32);
            }
          }
        }
      }
      while ( (unsigned int)max_length != ++v35 );
    }
    if ( !v30
      || (checkedItemBtn = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                        v30,
                                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_94:
      sub_1C32E7C(checkedItemBtn);
    }
    LODWORD(max_length) = checkedItemBtn[1].klass;
    this = v48;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)v27;
  }
  if ( (int)max_length < 1 )
    return;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v42 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v42, 1, (UnityEngine_GameObject_o *)v42, v43);
  v44 = VaildList->max_length;
  if ( (int)v44 < 1 )
    return;
  v45 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v45 >= (unsigned int)v44 )
      goto LABEL_95;
    v46 = VaildList->m_Items[v45];
    if ( !v46 )
      goto LABEL_94;
    giftType = v46->fields.giftType;
    if ( giftType != 2 )
    {
      if ( giftType == 9 )
        break;
      goto LABEL_90;
    }
    if ( !v18 )
      goto LABEL_94;
    checkedItemBtn = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  v18,
                                                  &entity,
                                                  v46->fields.objectId,
                                                  (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_94;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v44 = VaildList->max_length;
LABEL_90:
    if ( (int)++v45 >= (int)v44 )
      return;
  }
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v13 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
  v15 = 1;
LABEL_9:
  UserPresentBoxWindow__SetButtonTxtColor(v13, v15, (UnityEngine_GameObject_o *)v13, v14);
}


void UserPresentBoxWindow__SetFilterButtonImage(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UISprite_o *filterBtnSp; // x19
  UserPresentListViewManager_c *v4; // x0
  ListViewSort_o *sortInfo; // x0
  System_String_o **v6; // x22
  UserPresentListViewManager_c *v7; // x0

  if ( (byte_4C366A8 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17485/*"btn_filter_on"*/);
    sub_1C32C20(&StringLiteral_17484/*"btn_filter"*/);
    byte_4C366A8 = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
  }
  v4 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v4 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v4->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_22;
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0);
  v6 = (System_String_o **)&StringLiteral_17485/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C366D9 )
  {
    sub_1C32C20(&UserPresentListViewManager_TypeInfo);
    byte_4C366D9 = 1;
  }
  v7 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v7 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v7->static_fields->sortInfo;
  if ( !sortInfo )
LABEL_22:
    sub_1C32E7C(sortInfo);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v6 = (System_String_o **)&StringLiteral_17484/*"btn_filter"*/;
LABEL_20:
  if ( !filterBtnSp )
    goto LABEL_22;
  UISprite__set_spriteName(filterBtnSp, *v6, 0);
}


void UserPresentBoxWindow__SetPresentHistoryBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *GameObject; // x20
  Il2CppObject *Component_object; // x0

  if ( (byte_4C366CB & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_10729/*"PresentHistoryButton"*/);
    byte_4C366CB = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10729/*"PresentHistoryButton"*/,
                                         0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0 )
    {
      sub_1C32E7C(Component_object);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, is_enable, 0);
  }
}


void UserPresentBoxWindow__SetReDispAction(
        UserPresentBoxWindow_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mReDispAct = act;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mReDispAct, (int32_t)act, (int32_t)method, v3);
}


void UserPresentBoxWindow__SetScrlPositionResetAtReDisp(
        UserPresentBoxWindow_o *this,
        bool onOff,
        const MethodInfo *method)
{
  this->fields.mIsScrlResetPosition = onOff;
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__SetSelectCount(UserPresentBoxWindow_o *this, int32_t selected, const MethodInfo *method)
{
  UILabel_o *presentSelectNumLabel; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  UIWidget_o *v8; // x20
  int32_t v9; // w22
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = selected;
  if ( (byte_4C366CC & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10463/*"PRESENT_SELECT_INFO"*/);
    byte_4C366CC = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10463/*"PRESENT_SELECT_INFO"*/, 0);
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v15, 0);
  v7 = System_String__Format_63559836(v5, v6, (Il2CppObject *)this->fields.presentMaxSelectable, 0);
  if ( !presentSelectNumLabel )
    goto LABEL_14;
  UILabel__set_text(presentSelectNumLabel, v7, 0);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  v8 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v9 = v15;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v9 >= *(_DWORD *)(*(_QWORD *)&v7[7].fields + 132LL) )
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
  if ( !v8 )
LABEL_14:
    sub_1C32E7C(v7);
  UIWidget__set_color(v8, *(UnityEngine_Color_o *)&r, 0);
}


void UserPresentBoxWindow__ShowEventPointReward(
        UserPresentBoxWindow_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v15; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v18; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  if ( (byte_4C366B1 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
    byte_4C366B1 = 1;
  }
  v7 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass85_0___ctor((UserPresentBoxWindow___c__DisplayClass85_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = idx;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v11, v12);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v15 = *(int *)(v7 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v15 < max_length )
    {
      if ( (unsigned int)v15 >= max_length )
        sub_1C32E84(v13);
      evpDialog = this->fields.evpDialog;
      v18 = evPointRewardList->m_Items[v15];
      v19 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_1C32E6C(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v19,
        (Il2CppObject *)v7,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        v20);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v18, v19, v21);
        return;
      }
LABEL_10:
      sub_1C32E7C(v8);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
}


void UserPresentBoxWindow__ShowExpiredPresents(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x21
  System_Action_o *v16; // x22

  if ( (byte_4C366AE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
    sub_1C32C20(&StringLiteral_10450/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_44/*"\n\n"*/);
    byte_4C366AE = 1;
  }
  v5 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass82_0___ctor((UserPresentBoxWindow___c__DisplayClass82_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10450/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0);
    v15 = System_String__Concat_63556792(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v14, 0);
    v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v5,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0, v15, v16, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_12:
    sub_1C32E7C(v6);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
}


void UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C366B2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C366B2 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( v4 )
  {
    if ( !mInstance )
      sub_1C32E7C(v4);
    TerminalSceneComponent__UpdateTitleEventInfo((TerminalSceneComponent_o *)mInstance, 0);
  }
}


void UserPresentBoxWindow___CallbackReceiveRequest_b__80_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  struct GetSvts_array *getSvtList; // x8
  struct GetCommandCodes_array *getCommandCodeList; // x8
  const MethodInfo *v5; // x2
  PlayMakerFSM_o *myFsm; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_4C366D5 & 1) == 0 )
  {
    sub_1C32C20(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__);
    sub_1C32C20(&StringLiteral_12214/*"SHOW_EFFECT"*/);
    byte_4C366D5 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0 && getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12214/*"SHOW_EFFECT"*/, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(myFsm);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v8 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C32E6C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      0);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v8, 0);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v9);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v5);
  }
}


void UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_1C32E7C(0);
  UserPresentListViewManager__SetMode_40135620(userPresentListViewManager, 1, 0);
}


void UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_1C32E7C(0);
  UserPresentHistoryDialog__Open(presentHistoryDialog, 0);
}


void UserPresentBoxWindow___Open_b__69_0(UserPresentBoxWindow_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0

  if ( (byte_4C366D3 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C366D3 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !stoneNumValLb )
    sub_1C32E7C(UnitInfo);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0);
}


void UserPresentBoxWindow___callbackPresentList_b__72_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C366D4 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C366D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
  UserPresentBoxWindow__ReDisp(this, v4);
}


void UserPresentBoxWindow___showEffect_b__88_0(UserPresentBoxWindow_o *this, bool isDecide, const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C366D6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow_EndEffect__);
    byte_4C366D6 = 1;
  }
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffect__, 0);
  UserPresentBoxWindow__CheckSvtGetTutorial(this, v4, v5);
}


void UserPresentBoxWindow___showReceiveResultDlg_b__101_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlocker; // x0
  const MethodInfo *v4; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4C366D7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow__showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1__);
    byte_4C366D7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0, 0) )
  {
    touchBlocker = this->fields.touchBlocker;
    if ( !touchBlocker )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(touchBlocker, 0, 0);
    if ( this->fields.presentOverflowType )
    {
      userPresentListViewManager = this->fields.userPresentListViewManager;
      v6 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C32E6C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
      UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_UserPresentBoxWindow__showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1__,
        0);
      if ( userPresentListViewManager )
      {
        UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v6, 0);
        UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v7);
        return;
      }
LABEL_11:
      sub_1C32E7C(touchBlocker);
    }
    UserPresentBoxWindow___showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1(this, 0, v4);
  }
}


void UserPresentBoxWindow___showReceiveResultDlg_b__101_2(
        UserPresentBoxWindow_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ServantCoinConfirmDialog_o *servantCoinConfirmDialog; // x0

  servantCoinConfirmDialog = this->fields.servantCoinConfirmDialog;
  if ( !servantCoinConfirmDialog )
    sub_1C32E7C(0);
  ServantCoinConfirmDialog__Open(servantCoinConfirmDialog, 1, this->fields.getSvtCoins, action, 0);
}


void UserPresentBoxWindow___showReceiveResultDlg_b__101_3(
        UserPresentBoxWindow_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ServantCoinConfirmDialog_o *servantCoinConfirmDialog; // x0

  servantCoinConfirmDialog = this->fields.servantCoinConfirmDialog;
  if ( !servantCoinConfirmDialog )
    sub_1C32E7C(0);
  ServantCoinConfirmDialog__Open(servantCoinConfirmDialog, 2, this->fields.overflowSvtCoinInfos, action, 0);
}


void UserPresentBoxWindow___showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1(
        UserPresentBoxWindow_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ChainableActionBase_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  System_Action_object__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_object__o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ActionChain_o *v16; // x19
  __int64 v17; // x21
  System_Action_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C366D8 & 1) == 0 )
  {
    sub_1C32C20(&ActionChain_TypeInfo);
    sub_1C32C20(&System_Action___TypeInfo);
    sub_1C32C20(&System_Action_Action____TypeInfo);
    sub_1C32C20(&System_Action_Action__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass101_0__showReceiveResultDlg_b__4__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass101_0_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__);
    sub_1C32C20(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__);
    byte_4C366D8 = 1;
  }
  v5 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass101_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass101_0___ctor((UserPresentBoxWindow___c__DisplayClass101_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_BYTE *)(v5 + 16) = isReceive;
  v9 = sub_1C32CC8(System_Action_Action____TypeInfo, 2);
  v10 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v10,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
    0);
  if ( !v9 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v9 + 32) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v10, v11, v12);
  v13 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__,
    0);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_13;
  *(_QWORD *)(v9 + 40) = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v13, v14, v15);
  v16 = (ActionChain_o *)sub_1C32E6C(ActionChain_TypeInfo);
  ActionChain___ctor_48997860(v16, (System_Action_Action__array *)v9, 0);
  v17 = sub_1C32CC8(System_Action___TypeInfo, 1);
  v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass101_0__showReceiveResultDlg_b__4__,
    0);
  if ( !v17 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v17 + 24) )
LABEL_13:
    sub_1C32E84(v6);
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v19, v20);
  if ( !v16 || (v6 = ChainableActionBase__Final((ChainableActionBase_o *)v16, (System_Action_array *)v17, 0)) == 0 )
LABEL_12:
    sub_1C32E7C(v6);
  ChainableActionBase__Execute(v6, 0);
}


void UserPresentBoxWindow__callbackPresentList(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C366A6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__);
    byte_4C366A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v5, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
bool UserPresentBoxWindow__checkNew(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        bool isNew,
        bool isAddSvt,
        const MethodInfo *method)
{
  bool v9; // w0
  char v10; // w8
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C366BC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C366BC = 1;
  }
  if ( isNew )
  {
    v9 = UserPresentBoxWindow__checkOverlapSvt(this, svtId, (const MethodInfo *)isNew);
    v10 = !v9;
    if ( !v9 && isAddSvt )
    {
      befSvtList = this->fields.befSvtList;
      if ( !befSvtList
        || (items = befSvtList->fields._items,
            v13 = Method_System_Collections_Generic_List_int__Add__,
            ++befSvtList->fields._version,
            !items) )
      {
        sub_1C32E7C(befSvtList);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        befSvtList->fields._size = size + 1;
        items->m_Items[size] = svtId;
      }
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
  }
  return v10 & 1;
}


bool UserPresentBoxWindow__checkNewCommandCode(
        UserPresentBoxWindow_o *this,
        int64_t commandCodeId,
        bool isNew,
        bool isAddCommandCode,
        const MethodInfo *method)
{
  UserPresentBoxWindow___c__DisplayClass99_0_o *v9; // x21
  struct System_Collections_Generic_List_long__o *v10; // x0
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v12; // x23
  unsigned int Index; // w8
  _BOOL4 v14; // w0
  int64_t v15; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_4C366BE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_1C32C20(&System_Predicate_long__TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
    byte_4C366BE = 1;
  }
  v9 = (UserPresentBoxWindow___c__DisplayClass99_0_o *)sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass99_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_16;
  v9->fields.commandCodeId = commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v14) = 0;
    return v14;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v12 = (System_Predicate_long__o *)sub_1C32E6C(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    0);
  if ( !befCommandCodeList )
    goto LABEL_16;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v12,
            (const MethodInfo_3781024 *)Method_System_Collections_Generic_List_long__FindIndex__);
  v14 = Index >> 31;
  if ( (Index & 0x80000000) == 0 || !isAddCommandCode )
    return v14;
  v10 = this->fields.befCommandCodeList;
  if ( !v10
    || (v15 = v9->fields.commandCodeId,
        items = v10->fields._items,
        v17 = Method_System_Collections_Generic_List_long__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_16:
    sub_1C32E7C(v10);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v10,
      v15,
      *(const MethodInfo_37807F0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    items->m_Items[size] = v15;
  }
  LOBYTE(v14) = 1;
  return v14;
}


void UserPresentBoxWindow__checkNextSvt(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UserPresentBoxWindow_o *v4; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v6; // x8

  v4 = this;
  if ( (byte_4C366BB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C32C20(&StringLiteral_9264/*"NEXT_SVT"*/);
    this = (UserPresentBoxWindow_o *)sub_1C32C20(&StringLiteral_6417/*"FINAL_SVT"*/);
    byte_4C366BB = 1;
  }
  receiveList = v4->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v4->fields.receiveIdx >= receiveList->fields._size )
  {
    v4->fields.receiveList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.receiveList, 0, v2, v3);
    this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
    v4->fields.receiveIdx = 0;
    if ( this )
    {
      v6 = &StringLiteral_6417/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C32E7C(this);
  }
  this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v6 = &StringLiteral_9264/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0);
}


bool UserPresentBoxWindow__checkOverlapSvt(UserPresentBoxWindow_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4C366BD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C366BD = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C32E7C(befSvtList);
  size = befSvtList->fields._size;
  v7 = size - 1;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v8,
               (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v7 == v8 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v8;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void UserPresentBoxWindow__endPlay(UserPresentBoxWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v5; // x21
  AvalonSceneManager_c *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v12; // x20

  if ( (byte_4C366BA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
    byte_4C366BA = 1;
  }
  v5 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass95_0___ctor((UserPresentBoxWindow___c__DisplayClass95_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)end_act, v9, v10);
  svtGetAction = this->fields.svtGetAction;
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v5, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtGetAction )
LABEL_8:
    sub_1C32E7C(v6);
  ServantRewardAction__Play(svtGetAction, v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0);
}


void UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_4C366BF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    this = (UserPresentBoxWindow_o *)sub_1C32C20(&StringLiteral_9264/*"NEXT_SVT"*/);
    byte_4C366BF = 1;
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
    sub_1C32E7C(this);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9264/*"NEXT_SVT"*/, 0);
}


System_String_o *UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  System_String_o *v3; // x0
  int32_t stringLength; // w20
  Il2CppObject *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C366CD & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&StringLiteral_25253/*"}"*/);
    sub_1C32C20(&StringLiteral_25038/*"{0,"*/);
    byte_4C366CD = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  v3 = System_Int32__ToString((unsigned int)v2->static_fields + 128, 0);
  if ( !v3
    || (stringLength = v3->fields._stringLength,
        (v3 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 132, 0)) == 0) )
  {
    sub_1C32E7C(v3);
  }
  v5 = (Il2CppObject *)v3;
  v9 = v3->fields._stringLength + 2 * (stringLength - v3->fields._stringLength);
  v6 = System_Int32__ToString((int32_t)&v9, 0);
  v7 = System_String__Concat_63556792(
         (System_String_o *)StringLiteral_25038/*"{0,"*/,
         v6,
         (System_String_o *)StringLiteral_25253/*"}"*/,
         0);
  return System_String__Format(v7, v5, 0);
}


void UserPresentBoxWindow__receivePresent(
        UserPresentBoxWindow_o *this,
        System_Int64_array *presentIds,
        int32_t selectIdx,
        int32_t selectNum,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x23
  int v11; // w8
  System_Collections_Generic_IEnumerable_T__o *v12; // x23
  int v13; // w9
  __int64 v14; // x10
  int v15; // w10
  System_Collections_Generic_List_object__o *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x23
  const MethodInfo *v20; // x2

  if ( (byte_4C366AB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78026776);
    sub_1C32C20(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow_CallbackReceiveRequest__);
    byte_4C366AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_27;
  Instance = UserPresentBoxMaster__getVaildList_43003820(
               (UserPresentBoxMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               presentIds,
               0);
  if ( !Instance )
    goto LABEL_27;
  v11 = *((_DWORD *)Instance + 6);
  v12 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v11 == v13 )
        sub_1C32E84(Instance);
      v14 = *((_QWORD *)Instance + v13 + 4);
      if ( !v14 )
        goto LABEL_27;
      v15 = *(_DWORD *)(v14 + 72);
      if ( v15 == 11 || v15 == 1 )
        break;
      if ( v11 == ++v13 )
        goto LABEL_22;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
      goto LABEL_22;
    }
LABEL_27:
    sub_1C32E7C(Instance);
  }
LABEL_22:
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v16,
    v12,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78026776);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.receiveList, (int32_t)v16, v17, v18);
  this->fields.receiveIdx = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v19,
               (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_27;
  UserPresentReceiveRequest__beginRequest((UserPresentReceiveRequest_o *)Instance, presentIds, selectIdx, selectNum, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v20);
}


void UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int32_t presentOverflowType; // w8
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  int32_t v4; // w1

  presentOverflowType = this->fields.presentOverflowType;
  switch ( presentOverflowType )
  {
    case 4:
      userPresentListViewManager = this->fields.userPresentListViewManager;
      if ( userPresentListViewManager )
      {
        v4 = 2;
        goto LABEL_10;
      }
LABEL_12:
      sub_1C32E7C(userPresentListViewManager);
    case 2:
      userPresentListViewManager = this->fields.userPresentListViewManager;
      if ( userPresentListViewManager )
      {
        v4 = 1;
        goto LABEL_10;
      }
      goto LABEL_12;
    case 1:
      userPresentListViewManager = this->fields.userPresentListViewManager;
      if ( userPresentListViewManager )
      {
        v4 = 0;
LABEL_10:
        UserPresentListViewManager__setJumpType(userPresentListViewManager, v4, 0);
        return;
      }
      goto LABEL_12;
  }
}


void UserPresentBoxWindow__showEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  void *receiveList; // x0
  const MethodInfo *receiveIdx; // x1
  int32_t v5; // w21
  UserPresentBoxEntity_o *v6; // x20
  int v7; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v11; // w23
  _BOOL4 isNew; // w23
  bool v13; // w22
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v15; // x23
  Il2CppClass *v16; // x24
  int32_t v17; // w23
  const MethodInfo *v18; // x4
  GetCommandCodes_o *v19; // x8
  _BOOL4 v20; // w9
  bool v21; // w2
  int32_t objectId; // w20
  const MethodInfo *v23; // x2
  _BOOL8 IsEquip; // x0
  const MethodInfo *v25; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v27; // x2
  int32_t v28; // w21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v30; // x2
  QuestRewardInfo_o *v31; // x0
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  _BOOL4 v34; // w22
  const MethodInfo *v35; // x7
  int64_t userSvtId; // x21
  CommonUI_o *v37; // x20
  CombineResultEffectComponent_ClickDelegate_o *v38; // x22
  int64_t userCommandCodeId; // x1
  bool v40; // w3
  int32_t num; // w5
  bool v42; // w2
  UserPresentBoxWindow_o *v43; // x0
  int32_t v44; // w4
  int32_t presentDialogMessageId; // w6
  ServantCostumeEntity_o *v46; // [xsp+0h] [xbp-60h] BYREF
  GetCommandCodes_o *v47; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v48; // [xsp+10h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4C366B3 & 1) == 0 )
  {
    sub_1C32C20(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_1C32C20(&MissionInfoMaker_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow__showEffect_b__88_0__);
    byte_4C366B3 = 1;
  }
  entity = 0;
  v48 = 0;
  data = 0;
  v46 = 0;
  v47 = 0;
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_105;
  receiveIdx = (const MethodInfo *)(unsigned int)this->fields.receiveIdx;
  if ( (int)receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    (int32_t)receiveIdx,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( !receiveList )
      goto LABEL_105;
    v5 = *((_DWORD *)receiveList + 18);
    v6 = (UserPresentBoxEntity_o *)receiveList;
    if ( Gift__IsServant(v5, 0) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &entity,
                              v6->fields.objectId,
                              (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_105;
        receiveList = (void *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0);
        if ( !entity )
          goto LABEL_105;
        v7 = (int)receiveList;
        receiveList = (void *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0);
        if ( ((v7 | (unsigned int)receiveList) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_105;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v51.fields.currentCryptoKey = klass;
          *(_QWORD *)&v51.fields.fakeValue = monitor;
          v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v51, 0);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v11, v5, 0) )
          {
            receiveList = this->fields.effectPanel;
            if ( receiveList )
            {
              receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0);
              if ( receiveList )
              {
                receiveList = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0);
                if ( ((unsigned __int8)receiveList & 1) == 0 )
                {
                  receiveList = this->fields.effectPanel;
                  if ( !receiveList )
                    goto LABEL_105;
                  receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0);
                  if ( !receiveList )
                    goto LABEL_105;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0);
                }
                if ( !data )
                  goto LABEL_105;
                isNew = data->fields.isNew;
                v13 = data->fields.isNew || data->fields.isGetEffect;
                receiveList = (void *)Gift__IsEventSvtJoin(v5, 0);
                if ( ((unsigned __int8)receiveList & 1) != 0 )
                {
                  v34 = 0;
                }
                else
                {
                  if ( !data )
                    goto LABEL_105;
                  v34 = !UserPresentBoxWindow__checkNew(this, data->fields.userSvtId, v13, 1, v33);
                }
                receiveList = entity;
                if ( entity )
                {
                  if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0) && isNew )
                    this->fields.gotServant = 1;
                  receiveList = entity;
                  if ( entity )
                  {
                    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0) )
                      goto LABEL_83;
                    receiveList = entity;
                    if ( !entity )
                      goto LABEL_105;
                    receiveList = (void *)ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0);
                    if ( ((v34 | (unsigned int)receiveList) & 1) != 0 )
                    {
LABEL_83:
                      receiveList = entity;
                      if ( !entity )
                        goto LABEL_105;
                      if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0) )
                      {
                        receiveList = entity;
                        if ( !entity )
                          goto LABEL_105;
                        if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0) )
                        {
                          receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( data )
                          {
                            userSvtId = data->fields.userSvtId;
                            v37 = (CommonUI_o *)receiveList;
                            v38 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C32E6C(CombineResultEffectComponent_ClickDelegate_TypeInfo);
                            CombineResultEffectComponent_ClickDelegate___ctor(
                              v38,
                              (Il2CppObject *)this,
                              Method_UserPresentBoxWindow__showEffect_b__88_0__,
                              0);
                            if ( v37 )
                            {
                              CommonUI__OpenSecretTreasureDeviceForSvtGet(v37, userSvtId, v38, 0);
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
                    v40 = data->fields.isNew || data->fields.isGetEffect;
                    num = v6->fields.num;
                    presentDialogMessageId = data->fields.presentDialogMessageId;
                    v42 = data->fields.isNew;
                    v43 = this;
                    v44 = v5;
LABEL_104:
                    UserPresentBoxWindow__startRewardGetEffect(
                      v43,
                      userCommandCodeId,
                      v42,
                      v40,
                      v44,
                      num,
                      presentDialogMessageId,
                      v35);
                    return;
                  }
                }
              }
            }
LABEL_105:
            sub_1C32E7C(receiveList);
          }
        }
      }
    }
    else if ( Gift__IsCommandCode(v5, 0) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &v48,
                              v6->fields.objectId,
                              (const MethodInfo_3396884 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !v48 )
          goto LABEL_105;
        getCommandCodeList = this->fields.getCommandCodeList;
        v16 = v48[1].klass;
        v15 = v48[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v16;
        *(_QWORD *)&v52.fields.fakeValue = v15;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v52, 0);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v47, v17, 0) )
        {
          receiveList = this->fields.effectPanel;
          if ( !receiveList )
            goto LABEL_105;
          receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0);
          if ( !receiveList )
            goto LABEL_105;
          receiveList = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0);
          if ( ((unsigned __int8)receiveList & 1) == 0 )
          {
            receiveList = this->fields.effectPanel;
            if ( !receiveList )
              goto LABEL_105;
            receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0);
            if ( !receiveList )
              goto LABEL_105;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0);
          }
          v19 = v47;
          if ( !v47 )
            goto LABEL_105;
          v20 = v47->fields.isNew;
          this->fields.gotServant = v20;
          v21 = v20 || v19->fields.isGetEffect;
          receiveList = (void *)UserPresentBoxWindow__checkNewCommandCode(
                                  this,
                                  v19->fields.userCommandCodeId,
                                  v21,
                                  1,
                                  v18);
          if ( ((unsigned __int8)receiveList & 1) != 0 )
          {
            if ( !v47 )
              goto LABEL_105;
            userCommandCodeId = v47->fields.userCommandCodeId;
            v40 = v47->fields.isNew || v47->fields.isGetEffect;
            num = v6->fields.num;
            v42 = v47->fields.isNew;
            v43 = this;
            v44 = v5;
            presentDialogMessageId = 0;
            goto LABEL_104;
          }
        }
      }
    }
    else if ( Gift__IsCostumeRelease(v5, 0) )
    {
      objectId = v6->fields.objectId;
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      if ( ServantCostumeMaster__TryGetEntity(
             (ServantCostumeMaster_o *)receiveList,
             &v46,
             objectId / 100,
             objectId % 100,
             0) )
      {
        receiveList = this->fields.effectPanel;
        if ( receiveList )
        {
          receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0);
          if ( receiveList )
          {
            receiveList = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0);
            if ( ((unsigned __int8)receiveList & 1) == 0 )
            {
              receiveList = this->fields.effectPanel;
              if ( !receiveList )
                goto LABEL_105;
              receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0);
              if ( !receiveList )
                goto LABEL_105;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0);
            }
            if ( v46 )
            {
              UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(this, v46->fields.name, v23);
              return;
            }
          }
        }
        goto LABEL_105;
      }
    }
    else
    {
      IsEquip = Gift__IsEquip(v5, 0);
      if ( IsEquip )
      {
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v6, v25);
        UserPresentBoxWindow__startRewardEquipGetEffect(this, QuestRewardInfo, v27);
        return;
      }
      if ( Gift__IsItem(v5, 0) )
      {
        v28 = v6->fields.objectId;
        receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !receiveList )
          goto LABEL_105;
        if ( CommonUI__IsGetItemEffect((CommonUI_o *)receiveList, v28, 0) )
        {
          receiveList = this->fields.effectPanel;
          if ( receiveList )
          {
            receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0);
            if ( receiveList )
            {
              activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0);
              if ( !activeSelf )
              {
                receiveList = this->fields.effectPanel;
                if ( !receiveList )
                  goto LABEL_105;
                receiveList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)receiveList, 0);
                if ( !receiveList )
                  goto LABEL_105;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0);
              }
              v31 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v6, v30);
              UserPresentBoxWindow__startRewardSpecialItemGetEffect(this, v31, v32);
              return;
            }
          }
          goto LABEL_105;
        }
      }
    }
  }
LABEL_95:
  UserPresentBoxWindow__EndEffect(this, receiveIdx);
}


void UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v4; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21

  if ( (byte_4C366C0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__);
    byte_4C366C0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)v4;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0);
  if ( !v6 )
LABEL_8:
    sub_1C32E7C(Instance);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_4C366B5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
    byte_4C366B5 = 1;
  }
  v5 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass90_0___ctor((UserPresentBoxWindow___c__DisplayClass90_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = name;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)name, v7, v8);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v9, v10);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0);
  if ( !v13 )
LABEL_9:
    sub_1C32E7C(touchBlocker);
  CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, v15, 0);
}


void UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_4C366B6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
    byte_4C366B6 = 1;
  }
  v5 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass91_0___ctor((UserPresentBoxWindow___c__DisplayClass91_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)questRewardInfo, v7, v8);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v9, v10);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0);
  if ( !v13 )
LABEL_9:
    sub_1C32E7C(touchBlocker);
  CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, v15, 0);
}


void UserPresentBoxWindow__startRewardGetEffect(
        UserPresentBoxWindow_o *this,
        int64_t userSvtID,
        bool isNew,
        bool isDoEffect,
        int32_t giftType,
        int32_t num,
        int32_t presentDialogMessageId,
        const MethodInfo *method)
{
  __int64 v15; // x20
  DataManager_o *Instance; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UserServantEntity_o *v19; // x21
  EventServantEntity_o *EventServant_43081288; // x0
  EventServantEntity_o *v21; // x22
  __int64 v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *JoinMessage; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 *v28; // x8
  Il2CppObject *v29; // x0
  AvalonSceneManager_c *v30; // x8
  CommonUI_o *v31; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x21
  System_String_o *Message; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  AvalonSceneManager_c *v41; // x8
  CommonUI_o *v42; // x20
  float v43; // s8
  System_Action_o *v44; // x21

  if ( (byte_4C366B4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
    sub_1C32C20(&StringLiteral_12439/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1C32C20(&StringLiteral_12440/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/);
    byte_4C366B4 = 1;
  }
  v15 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_0___ctor((UserPresentBoxWindow___c__DisplayClass89_0_o *)v15, 0);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v17, v18);
  *(_DWORD *)(v15 + 24) = giftType;
  *(_QWORD *)(v15 + 32) = userSvtID;
  *(_BYTE *)(v15 + 40) = isDoEffect;
  *(_DWORD *)(v15 + 44) = num;
  *(_BYTE *)(v15 + 48) = isNew;
  *(_DWORD *)(v15 + 52) = presentDialogMessageId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteDialogKey(0);
  if ( !Gift__IsEventSvtJoin(*(_DWORD *)(v15 + 24), 0) )
    goto LABEL_17;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v15 + 32),
                                (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v19 = (UserServantEntity_o *)Instance;
  EventServant_43081288 = UserServantEntity__getEventServant_43081288((UserServantEntity_o *)Instance, 1, 0);
  if ( !EventServant_43081288 || (v21 = EventServant_43081288, EventServant_43081288->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = AvalonSceneManager_TypeInfo;
      v31 = (CommonUI_o *)v29;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v30 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
      v33 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v15,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0);
      if ( v31 )
      {
        CommonUI__maskFadeout(v31, 1, DEFAULT_FADE_TIME, v33, 0);
        return;
      }
    }
LABEL_29:
    sub_1C32E7C(Instance);
  }
  v22 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_1___ctor((UserPresentBoxWindow___c__DisplayClass89_1_o *)v22, 0);
  if ( !v22 )
    goto LABEL_29;
  *(_QWORD *)(v22 + 32) = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 32), v15, v23, v24);
  if ( UserServantEntity__HasStatus(v19, 64, 0) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v21, 0);
    *(_QWORD *)(v22 + 24) = JoinMessage;
    sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 24), (int32_t)JoinMessage, v26, v27);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_12440/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v21, 0);
    *(_QWORD *)(v22 + 24) = Message;
    sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 24), (int32_t)Message, v35, v36);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_12439/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v37 = LocalizationManager__Get((System_String_o *)*v28, 0);
  *(_QWORD *)(v22 + 16) = v37;
  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 16), (int32_t)v37, v38, v39);
  v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41 = AvalonSceneManager_TypeInfo;
  v42 = (CommonUI_o *)v40;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v41 = AvalonSceneManager_TypeInfo;
  }
  v43 = v41->static_fields->DEFAULT_FADE_TIME;
  v44 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v22,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0);
  if ( !v42 )
    goto LABEL_29;
  CommonUI__maskFadein(v42, v43, v44, 0);
}


void UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_4C366B7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__);
    sub_1C32C20(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
    byte_4C366B7 = 1;
  }
  v5 = sub_1C32E6C(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass92_0___ctor((UserPresentBoxWindow___c__DisplayClass92_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)questRewardInfo, v7, v8);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v9, v10);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0);
  if ( !v13 )
LABEL_9:
    sub_1C32E7C(touchBlocker);
  CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, v15, 0);
}


void UserPresentBoxWindow_ClickDelegate___ctor(
        UserPresentBoxWindow_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A76A24;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A769DC;
}


System_IAsyncResult_o *UserPresentBoxWindow_ClickDelegate__BeginInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = hasGetServant;
  if ( (byte_4C366DA & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C366DA = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void UserPresentBoxWindow_ClickDelegate__Invoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    hasGetServant,
    this->fields.method);
}


void UserPresentBoxWindow___c__DisplayClass101_0___ctor(
        UserPresentBoxWindow___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass101_0___showReceiveResultDlg_b__4(
        UserPresentBoxWindow___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  UserPresentBoxWindow__EventPointRewardWithSvtGet(_4__this, this->fields.isReceive, 0);
}


void UserPresentBoxWindow___c__DisplayClass102_0___ctor(
        UserPresentBoxWindow___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass102_0___CheckSvtGetTutorial_b__0(
        UserPresentBoxWindow___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void UserPresentBoxWindow___c__DisplayClass82_0___ctor(
        UserPresentBoxWindow___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass82_0___ShowExpiredPresents_b__0(
        UserPresentBoxWindow___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v9; // w9
  struct UserPresentBoxWindow_o *v10; // x8
  struct UserPresentListViewManager_o *v11; // x8
  int32_t v12; // w1

  if ( (byte_4C366DB & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C366DB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog(Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_4C36719 & 1) == 0 )
  {
    Instance = (CommonUI_o *)sub_1C32C20(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4C36719 = 1;
  }
  checkedIdList = userPresentListViewManager->fields.checkedIdList;
  if ( checkedIdList )
  {
    v9 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v9;
  }
  v10 = this->fields.__4__this;
  if ( !v10 || (v11 = v10->fields.userPresentListViewManager) == 0 )
LABEL_13:
    sub_1C32E7C(Instance);
  v12 = StringLiteral_1/*""*/;
  v11->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields._expiredPresents_k__BackingField, v12, v4, v5);
  ActionExtensions__Call(this->fields.callback, 0);
}


void UserPresentBoxWindow___c__DisplayClass85_0___ctor(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__0(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  UserPresentBoxWindow___c__DisplayClass85_0_o *v3; // x19
  struct UserPresentBoxWindow_o *_4__this; // x8
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x20
  System_Action_o *_9__1; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4C366DC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__);
    byte_4C366DC = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !evpDialog )
LABEL_8:
    sub_1C32E7C(this);
  UserPresentBoxEventPointRewardDialog__Close_40089056(evpDialog, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxWindow__UpdateEventInfos(_4__this, 0), (_4__this = this->fields.__4__this) == 0) )
    sub_1C32E7C(_4__this);
  UserPresentBoxWindow__ShowEventPointReward(_4__this, this->fields.idx + 1, this->fields.callback, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_0___ctor(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__0(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C366DE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__);
    byte_4C366DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v5 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v6, v7);
  }
  if ( !v5 )
    sub_1C32E7C(Instance);
  SummonAssetManager__LoadSummonAssets(v5, _9__3, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C366DD & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C366DD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__3(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  Il2CppObject *v6; // x20
  struct UserPresentBoxWindow_o *v7; // x8
  SummonAssetManager_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w21
  struct UserPresentBoxWindow_o *v12; // x8
  ServantRewardAction_o *svtGetAction; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v16; // w0
  Il2CppObject v17; // q1
  int32_t v18; // w23
  int64_t v19; // x0
  Il2CppClass *v20; // x8
  int64_t v21; // x20
  struct UserPresentBoxWindow_o *v22; // x8
  struct ServantRewardAction_o *v23; // x8
  Il2CppObject *v24; // x0
  struct UserPresentBoxWindow_o *v25; // x22
  Il2CppObject *v26; // x21
  struct UserPresentBoxWindow_o *v27; // x8
  SummonAssetManager_o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UserPresentBoxWindow_o *v31; // x8
  ServantRewardAction_o *v32; // x20
  Il2CppObject v33; // q1
  bool isNew; // w2
  int64_t v35; // x1
  bool v36; // w3
  int32_t v37; // w4
  ServantRewardAction_o *v38; // x0
  struct UserPresentBoxWindow_o *v39; // x8
  ServantRewardAction_o *v40; // x21
  void *v41; // x22
  Il2CppClass *v42; // x23
  int32_t v43; // w0
  Il2CppObject v44; // q1
  int32_t v45; // w22
  int64_t v46; // x0
  Il2CppClass *v47; // x8
  int64_t v48; // x20
  Il2CppObject v49; // q1
  Il2CppObject *v50; // x19
  System_Action_o *v51; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4C366DF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow_EndEffect__);
    byte_4C366DF = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    v6 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_55;
    v8 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v7->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !v8 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v8, (UnityEngine_Transform_o *)Instance, 0, 0);
    if ( !_4__this )
      goto LABEL_55;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.svtGetAction, Instance, v9, v10);
    if ( this->fields.isDoEffect )
    {
      if ( v6 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_43081288((UserServantEntity_o *)v6, 1, 0);
        v11 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v11 = 6;
          else
            v11 = 14;
        }
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          svtGetAction = v12->fields.svtGetAction;
          klass = v6[5].klass;
          monitor = v6[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v57.fields.currentCryptoKey = klass;
          *(_QWORD *)&v57.fields.fakeValue = monitor;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v57, 0);
          v17 = v6[2];
          v18 = v16;
          *(Il2CppObject *)&v56.fields.currentCryptoKey = v6[1];
          *(Il2CppObject *)&v56.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v55 = v56;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v55, 0);
          v20 = v6[6].klass;
          *(_QWORD *)&v58.fields.fakeValue = v6[6].monitor;
          v21 = v19;
          *(_QWORD *)&v58.fields.currentCryptoKey = v20;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v58, 0);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v18,
              v21,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v11,
              0);
            if ( !this->fields.isNew )
              goto LABEL_53;
            v22 = this->fields.__4__this;
            if ( v22 )
            {
              v23 = v22->fields.svtGetAction;
              if ( v23 )
              {
                v23->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_53;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1C32E7C(Instance);
    }
    v39 = this->fields.__4__this;
    if ( !v39 || !v6 )
      goto LABEL_55;
    v40 = v39->fields.svtGetAction;
    v42 = v6[5].klass;
    v41 = v6[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v59.fields.currentCryptoKey = v42;
    *(_QWORD *)&v59.fields.fakeValue = v41;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v59, 0);
    v44 = v6[2];
    v45 = v43;
    *(Il2CppObject *)&v56.fields.currentCryptoKey = v6[1];
    *(Il2CppObject *)&v56.fields.fakeValue = v44;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v54 = v56;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v54, 0);
    v47 = v6[6].klass;
    *(_QWORD *)&v60.fields.fakeValue = v6[6].monitor;
    v48 = v46;
    *(_QWORD *)&v60.fields.currentCryptoKey = v47;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v60, 0);
    if ( !v40 )
      goto LABEL_55;
    ServantRewardAction__Setup(v40, v45, v48, Instance, this->fields.num, 0, 0, 6, 0);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_55;
    v24 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_3398D94 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v25 = this->fields.__4__this;
    v26 = v24;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v27 = this->fields.__4__this;
    if ( !v27 )
      goto LABEL_55;
    v28 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v27->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !v28 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v28, (UnityEngine_Transform_o *)Instance, 0, 0);
    if ( !v25 )
      goto LABEL_55;
    v25->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1C32BC4((CGThumbnailListItem_o *)&v25->fields.svtGetAction, Instance, v29, v30);
    v31 = this->fields.__4__this;
    if ( !v31 || !v26 )
      goto LABEL_55;
    v32 = v31->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v33 = v26[2];
      *(Il2CppObject *)&v56.fields.currentCryptoKey = v26[1];
      *(Il2CppObject *)&v56.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v53 = v56;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v53, 0);
      if ( !v32 )
        goto LABEL_55;
      isNew = this->fields.isNew;
      v35 = Instance;
      v36 = 1;
      v37 = 14;
      v38 = v32;
    }
    else
    {
      v49 = v26[2];
      *(Il2CppObject *)&v56.fields.currentCryptoKey = v26[1];
      *(Il2CppObject *)&v56.fields.fakeValue = v49;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v52 = v56;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v52, 0);
      if ( !v32 )
        goto LABEL_55;
      v35 = Instance;
      v37 = 6;
      v38 = v32;
      isNew = 0;
      v36 = 0;
    }
    ServantRewardAction__SetupCommandCode_37095316(v38, v35, isNew, v36, v37, 0);
  }
LABEL_53:
  v50 = (Il2CppObject *)this->fields.__4__this;
  v51 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v51, v50, Method_UserPresentBoxWindow_EndEffect__, 0);
  if ( !v50 )
    goto LABEL_55;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v50, v51, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_1___ctor(
        UserPresentBoxWindow___c__DisplayClass89_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_1___startRewardGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass89_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v8; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C366E0 & 1) == 0 )
  {
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__);
    byte_4C366E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
LABEL_8:
    sub_1C32E7C(Instance);
  CommonUI__OpenNotificationDialog_31193120(v8, title, message, _9__2, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___ctor(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__0(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__1; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C366E1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__);
    byte_4C366E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !v5 )
    sub_1C32E7C(Instance);
  CommonUI__LoadCostumeReleaseEffect(v5, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x21
  System_String_o *name; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C366E2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__);
    byte_4C366E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v5 )
    sub_1C32E7C(Instance);
  CommonUI__OpenCostumeReleaseEffect(v5, 0, name, _9__2, 23, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C366E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C366E3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___ctor(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__0(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__1; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C366E4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__);
    byte_4C366E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !v5 )
    sub_1C32E7C(Instance);
  CommonUI__LoadEquipGetEffect(v5, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C366E5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__);
    byte_4C366E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v5 )
    sub_1C32E7C(Instance);
  CommonUI__OpenEquipGetEffect(v5, 0, questRewardInfo, _9__2, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C366E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C366E6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___ctor(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__0(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__1; // x22
  CommonUI_o *v5; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C366E7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__);
    byte_4C366E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v5 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v5 )
    sub_1C32E7C(Instance);
  CommonUI__LoadItemGetEffect(v5, questRewardInfo, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Instance; // x0
  struct UserPresentBoxWindow_o *_4__this; // x8
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v7; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C366E8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__);
    byte_4C366E8 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v5 = (CommonUI_o *)Instance;
  Instance = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Instance, 0);
  _9__2 = this->fields.__9__2;
  v7 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v5 )
LABEL_9:
    sub_1C32E7C(Instance);
  CommonUI__OpenItemGetEffect(v5, v7, 0, questRewardInfo, _9__2, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C366E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C366E9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0);
}


void UserPresentBoxWindow___c__DisplayClass95_0___ctor(
        UserPresentBoxWindow___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow___c__DisplayClass95_0___endPlay_b__0(
        UserPresentBoxWindow___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow___c__DisplayClass95_0_o *v2; // x19
  struct UserPresentBoxWindow_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UserPresentBoxWindow_o *v5; // x8

  v2 = this;
  if ( (byte_4C366EA & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C366EA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)_4__this->fields.svtGetAction;
  if ( !this )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_71223828(gameObject, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0 )
LABEL_10:
    sub_1C32E7C(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v2->fields.end_act, 0);
}


void UserPresentBoxWindow___c__DisplayClass99_0___ctor(
        UserPresentBoxWindow___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserPresentBoxWindow___c__DisplayClass99_0___checkNewCommandCode_b__0(
        UserPresentBoxWindow___c__DisplayClass99_0_o *this,
        int64_t a,
        const MethodInfo *method)
{
  return this->fields.commandCodeId == a;
}


void UserPresentBoxWindow_evPointReward___ctor(UserPresentBoxWindow_evPointReward_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow_evReward___ctor(UserPresentBoxWindow_evReward_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxWindow_resData___ctor(UserPresentBoxWindow_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}