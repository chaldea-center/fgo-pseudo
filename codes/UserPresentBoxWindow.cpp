void UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_long__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C25FFA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C25FFA = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.befCommandCodeList, (int32_t)v6, v7, v8);
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
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  UserPresentBoxWindow_o *v9; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  const MethodInfo *v12; // x3
  struct PlayMakerFSM_o *v13; // x8
  struct GetCommandCodes_array *fsm; // x1
  const MethodInfo *v15; // x3
  struct PlayMakerFSM_o *v16; // x8
  struct UserPresentBoxWindow_evPointReward_array *fsmTemplate; // x1
  const MethodInfo *v18; // x3
  struct PlayMakerFSM_o *v19; // x8
  struct GetSvtCoin_array *v20; // x1
  const MethodInfo *v21; // x3
  struct PlayMakerFSM_o *v22; // x8
  struct GetSvtCoin_array *addEventHandlers; // x1
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2

  v4 = this;
  if ( (byte_4C25FD4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    this = (UserPresentBoxWindow_o *)sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C25FD4 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_63493168(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    UserPresentBoxWindow__ReDisp(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_63496112(
                         (System_String_o *)StringLiteral_15801/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16055/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v6,
                                     (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
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
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.getSvtList, (int32_t)m_CancellationTokenSource, v7, v8);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v13 = v9->fields.myFsm;
  if ( !v13 )
    goto LABEL_20;
  fsm = (struct GetCommandCodes_array *)v13->fields.fsm;
  v4->fields.getCommandCodeList = fsm;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.getCommandCodeList, (int32_t)fsm, v7, v12);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v16 = v9->fields.myFsm;
  if ( !v16 )
    goto LABEL_20;
  v4->fields.presentOverflowType = v16->fields.m_CachedPtr;
  fsmTemplate = (struct UserPresentBoxWindow_evPointReward_array *)v16->fields.fsmTemplate;
  v4->fields.evPointRewardList = fsmTemplate;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.evPointRewardList, (int32_t)fsmTemplate, v7, v15);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v19 = v9->fields.myFsm;
  if ( !v19 )
    goto LABEL_20;
  v20 = *(struct GetSvtCoin_array **)&v19->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.getSvtCoins, (int32_t)v20, v7, v18);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_1C2D6F4(this, result, v7);
  v22 = v9->fields.myFsm;
  if ( !v22 )
LABEL_20:
    sub_1C2D6EC(this, result);
  addEventHandlers = (struct GetSvtCoin_array *)v22->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = addEventHandlers;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.overflowSvtCoinInfos, (int32_t)addEventHandlers, v7, v21);
  v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v24, v25);
}


bool UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  void *Filter_43628452; // x0
  ListViewSort_o **v9; // x8
  ListViewSort_o *v10; // x19
  UserPresentBoxMaster_c *v11; // x0
  bool v12; // w8
  bool result; // w0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v15; // w1

  if ( (byte_4C25FD1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&UserPresentBoxMaster_TypeInfo);
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C25FD1 = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
  }
  Filter_43628452 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_43628452 = UserPresentListViewManager_TypeInfo;
  }
  v9 = (ListViewSort_o **)*((_QWORD *)Filter_43628452 + 23);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_52;
  Filter_43628452 = (void *)ListViewSort__GetFilter_43628452(*v9, 13, 0);
  if ( ((unsigned __int8)Filter_43628452 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_52;
LABEL_20:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_43628452 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_43628452 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_43628452 + 23) + 712LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( !*((_DWORD *)Filter_43628452 + 56) )
          {
            j_il2cpp_runtime_class_init_0(Filter_43628452);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_43628452 = (void *)System_Array__IndexOf_int_(
                                      PresentBoxFilterSvtEquipMaterial,
                                      userPresentBoxEntity->fields.objectId,
                                      (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)Filter_43628452 & 0x80000000) == 0 )
            return ListViewSort__GetFilter_43628452(v10, 4, 0);
        }
        if ( servantMaster )
        {
          Filter_43628452 = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_43628452 )
          {
            switch ( *((_DWORD *)Filter_43628452 + 21) )
            {
              case 1:
              case 0xC:
                goto LABEL_21;
              case 3:
                v15 = 1;
                return ListViewSort__GetFilter_43628452(v10, v15, 0);
              case 6:
                v15 = 3;
                return ListViewSort__GetFilter_43628452(v10, v15, 0);
              case 7:
                v15 = 2;
                return ListViewSort__GetFilter_43628452(v10, v15, 0);
              case 8:
                v15 = 4;
                return ListViewSort__GetFilter_43628452(v10, v15, 0);
              default:
                goto LABEL_39;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_43628452 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_43628452 )
          break;
        switch ( *((_DWORD *)Filter_43628452 + 12) )
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
        return ListViewSort__GetFilter_43628452(v10, v15, 0);
      case 6:
      case 7:
LABEL_21:
        v12 = ListViewSort__GetFilter_43628452(v10, 0, 0);
        result = 0;
        if ( !v12 )
          return result;
        return 1;
      case 0xB:
        v15 = 5;
        return ListViewSort__GetFilter_43628452(v10, v15, 0);
      default:
LABEL_39:
        v15 = 14;
        return ListViewSort__GetFilter_43628452(v10, v15, 0);
    }
LABEL_52:
    sub_1C2D6EC(Filter_43628452, servantMaster);
  }
  Filter_43628452 = UserPresentBoxMaster_TypeInfo;
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
    Filter_43628452 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v11->static_fields->IMPORTANT_FOR_LIMIT,
                                0);
    if ( ((unsigned __int8)Filter_43628452 & 1) == 0 )
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
  void *Filter_43628452; // x0
  ListViewSort_o **v11; // x8
  ListViewSort_o *v12; // x19
  UserPresentBoxMaster_c *v13; // x0
  int32_t giftType; // w8
  _DWORD *v15; // x8
  bool Filter_43628500; // w8
  bool result; // w0
  int32_t v18; // w1

  if ( (byte_4C25FD2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&UserPresentBoxMaster_TypeInfo);
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C25FD2 = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
  }
  Filter_43628452 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_43628452 = UserPresentListViewManager_TypeInfo;
  }
  v11 = (ListViewSort_o **)*((_QWORD *)Filter_43628452 + 23);
  v12 = *v11;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v12 )
    goto LABEL_49;
  Filter_43628452 = (void *)ListViewSort__GetFilter_43628452(*v11, 13, 0);
  if ( ((unsigned __int8)Filter_43628452 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_49;
  }
  else
  {
LABEL_12:
    Filter_43628452 = UserPresentBoxMaster_TypeInfo;
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
    Filter_43628452 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v13->static_fields->IMPORTANT_FOR_LIMIT,
                                0);
    if ( ((unsigned __int8)Filter_43628452 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( servantLimitMaster )
    {
      Filter_43628452 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0);
      if ( Filter_43628452 )
      {
        v15 = (char *)Filter_43628452 + 24;
        goto LABEL_30;
      }
      return 1;
    }
LABEL_49:
    sub_1C2D6EC(Filter_43628452, servantLimitMaster);
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_49;
  Filter_43628452 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_43628452 )
    return 1;
  v15 = (char *)Filter_43628452 + 64;
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
      Filter_43628500 = ListViewSort__GetFilter_43628500(v12, 0, 0);
      result = 0;
      if ( !Filter_43628500 )
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
      if ( ListViewSort__GetFilter_43628500(v12, v18, 0) )
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o **v10; // x22
  int32_t receiveIdx; // w1
  _DWORD *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_4C25FE9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
    byte_4C25FE9 = 1;
  }
  v5 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass102_0___ctor((UserPresentBoxWindow___c__DisplayClass102_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  v10 = (System_Action_o **)(v5 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v12 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0);
        EventTutorialMaster__CheckTutorial(-1, 11, v13, v12[19], 0, 0, 0, 0);
        return;
      }
      if ( *v10 )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))(*v10)->fields.invoke_impl)(
          (*v10)->fields.method_code,
          (*v10)->fields.method);
        return;
      }
    }
LABEL_14:
    sub_1C2D6EC(receiveList, v7);
  }
  if ( *v10 )
    ActionExtensions__Call(*v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__ClickFilterEnd(UserPresentBoxWindow_o *this, bool result, const MethodInfo *method)
{
  UserPresentListViewManager_c *v5; // x0
  ListViewSort_o *sortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C25FF9 & 1) == 0 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C25FF9 = 1;
  }
  if ( result )
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4C26001 )
    {
      sub_1C2D490(&UserPresentListViewManager_TypeInfo);
      byte_4C26001 = 1;
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
      sub_1C2D6EC(sortInfo, result);
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
  __int64 v6; // x1

  if ( (byte_4C25FEF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C25FEF = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
    sub_1C2D6EC(userPresentListViewManager, v6);
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
  __int64 v6; // x1
  QuestRewardInfo_o *result; // x0

  if ( (byte_4C25FE0 & 1) == 0 )
  {
    sub_1C2D490(&QuestRewardInfo_TypeInfo);
    byte_4C25FE0 = 1;
  }
  v4 = sub_1C2D6DC(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v4, 0);
  if ( !userPresentBox || !v4 )
    sub_1C2D6EC(v5, v6);
  result = (QuestRewardInfo_o *)v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v4 + 24) = userPresentBox->fields.num;
  return result;
}


void UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C25FE1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5432/*"END_EFFECT"*/);
    byte_4C25FE1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5432/*"END_EFFECT"*/, 0);
}


void UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C25FEA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C25FEA = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
}


void UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C25FD7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_EndReceive__);
    byte_4C25FD7 = 1;
  }
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndReceive__, 0);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


void UserPresentBoxWindow__EventPointRewardWithSvtGet(UserPresentBoxWindow_o *this, bool res, const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C25FD8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_EndEffectReceive__);
    byte_4C25FD8 = 1;
  }
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


bool UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  char v9; // w20
  int v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C25FD5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C25FD5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C2D6EC(v4, v5);
    if ( !Gift__IsCostumeRelease((int32_t)v13.fields._current[4].monitor, 0)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0) )
        continue;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_1C2D6EC(0, v8);
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)Instance, HIDWORD(current[4].monitor), 0) )
        continue;
    }
    v9 = 1;
    v10 = 6;
    goto LABEL_14;
  }
  v9 = 0;
  v10 = 7;
LABEL_14:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return v9 & (v10 == 6);
}


void UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isReceiveFlg; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  System_Action_o *v10; // x22
  System_Action_o *v11; // x23

  if ( (byte_4C25FEB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_OnClickAll__);
    sub_1C2D490(&Method_UserPresentBoxWindow_ProcessClickAll__);
    sub_1C2D490(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__);
    byte_4C25FEB = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickAll__;
  isReceiveFlg = this->fields.isReceiveFlg;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  if ( isReceiveFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_11;
    UserPresentListViewManager__SetMode_40013356(userPresentListViewManager, 2, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, 0),
          v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0),
          v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0),
          !presentDialog) )
    {
LABEL_11:
      sub_1C2D6EC(userPresentListViewManager, v6);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v10, v11, 0);
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

  if ( (byte_4C25FF0 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserPresentBoxWindow_OnClickBack__);
    byte_4C25FF0 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  __int64 v5; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4C25FED & 1) == 0 )
  {
    sub_1C2D490(&Method_UserPresentBoxWindow_OnClickCheckedItem__);
    byte_4C25FED = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, 0),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
      sub_1C2D6EC(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_40013356(userPresentListViewManager, 2, 0);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v7);
  }
  else
  {
    v8 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
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
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  PresentBoxFilterSelectMenu_o *v15; // x20
  UserPresentListViewManager_c *v16; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v18; // x22

  if ( (byte_4C25FF8 & 1) == 0 )
  {
    sub_1C2D490(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_ClickFilterEnd__);
    sub_1C2D490(&Method_UserPresentBoxWindow_OnClickFilter__);
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C25FF8 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickFilter__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)v8, gameObject, 0);
    if ( !v8 )
LABEL_20:
      sub_1C2D6EC(v10, v11);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.presentBoxFilterSelectMenu, (int32_t)Component_object, v13, v14);
  }
  v15 = *p_presentBoxFilterSelectMenu;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
  }
  v16 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v16 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v16->static_fields->sortInfo;
  v18 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0);
  if ( !v15 )
    goto LABEL_20;
  PresentBoxFilterSelectMenu__Open(v15, sortInfo, v18, 0);
}


void UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  UserPresentBoxWindow_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C25FF6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserPresentBoxWindow_OnClickHelp__);
    byte_4C25FF6 = 1;
  }
  v2 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C2D474(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  UserPresentBoxWindow__OpenHelp(v4, v5);
}


void UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4C25FEC & 1) == 0 )
  {
    sub_1C2D490(&Method_UserPresentBoxWindow_OnClickItem__);
    byte_4C25FEC = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, 0),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
      sub_1C2D6EC(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_40013356(userPresentListViewManager, 2, 0);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v7);
  }
  else
  {
    v8 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickItem__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
  }
}


void UserPresentBoxWindow__OnClickPresentHistoryButton(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4C25FF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
    sub_1C2D490(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__);
    byte_4C25FF1 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_1C2D6EC(0, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C25FCA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25FCA = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_1C2D6EC(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_titleInfo = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_titleInfo, 0, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C25FCB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_OnClickBack__);
    sub_1C2D490(&Method_UserPresentBoxWindow__Open_b__69_0__);
    sub_1C2D490(&StringLiteral_5417/*"ENABLE_PRESENT_HISTORY"*/);
    byte_4C25FCB = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.presentMaxSelectable, (int32_t)v20, v21, v22);
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
                                             (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v28, v29);
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
                TitleInfoControl__changeTitleInfo_39625124((TitleInfoControl_o *)bgObject, 1, 45, 0, 0);
                v31 = this->fields.titleInfo;
                v32 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    sub_1C2D6EC(bgObject, isShowBg);
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
  v35 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mReDispAct, (int32_t)redisp_act, v38, v39);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v40);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5417/*"ENABLE_PRESENT_HISTORY"*/, 0);
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
  __int64 v7; // x1

  if ( (byte_4C25FF7 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_ImageId___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E);
    byte_4C25FF7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (System_Array_o *)sub_1C2D538(TutorialFlag_ImageId___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v5 = (TutorialFlag_ImageId_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v3, v4, 0);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
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
    sub_1C2D6EC(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_40013356(userPresentListViewManager, 2, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v4);
}


void UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  Il2CppObject *v5; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UserServantMaster_o *v10; // x8
  UserCommandCodeMaster_o *v11; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int32_t v14; // w21
  System_String_o *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x24
  Il2CppObject *v23; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x24
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x21
  BalanceConfig_c *v43; // x0
  Il2CppObject *v44; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v49; // x22
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v55; // x22
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  UserPresentBoxEntity_array *v60; // x20
  BalanceConfig_c *v61; // x0
  il2cpp_array_size_t max_length; // x26
  UILabel_o *presentInfoLabel; // x22
  int32_t PresentBoxMax; // w19
  System_String_o *v65; // x23
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  Il2CppObject *v69; // x24
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v75; // x23
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  Il2CppObject *v79; // x0
  UserPresentListViewManager_c *v80; // x0
  _BOOL4 v81; // w22
  UserPresentListViewManager_c *v82; // x0
  UserPresentListViewManager_c *v83; // x0
  _BOOL4 v84; // w28
  UserPresentListViewManager_c *v85; // x0
  Il2CppObject *v86; // x23
  Il2CppObject *v87; // x24
  Il2CppObject *v88; // x25
  Il2CppObject *v89; // x27
  System_Collections_Generic_List_object__o *v90; // x26
  __int64 v91; // x2
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x4
  const MethodInfo *v94; // x5
  unsigned __int64 v95; // x29
  UserPresentBoxEntity_o **m_Items; // x19
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  int v101; // w24
  const MethodInfo *v102; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v103; // x21
  char v104; // w22
  char v105; // w23
  unsigned int v106; // w25
  UserPresentBoxEntity_o *v107; // x8
  int32_t giftType; // w9
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v110; // x3
  UserPresentBoxWindow_o *v111; // x0
  const MethodInfo *v112; // x3
  UserPresentBoxWindow_o *v113; // x0
  const MethodInfo *v114; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  System_String_o **v116; // x8
  __int64 v117; // x8
  UserPresentBoxWindow_o *v118; // x0
  const MethodInfo *v119; // x3
  UserPresentBoxWindow_o *v120; // x0
  const MethodInfo *v121; // x3
  UserPresentBoxWindow_o *v122; // x0
  const MethodInfo *v123; // x3
  const MethodInfo *v124; // x2
  _BOOL8 _40206092; // x0
  const MethodInfo *v126; // x1
  UserPresentBoxWindow_o *v127; // [xsp+8h] [xbp-C8h]
  int32_t capacity; // [xsp+10h] [xbp-C0h]
  int32_t v129; // [xsp+18h] [xbp-B8h] BYREF
  int32_t v130; // [xsp+1Ch] [xbp-B4h] BYREF
  int v131; // [xsp+20h] [xbp-B0h] BYREF
  int32_t FriendPoint; // [xsp+24h] [xbp-ACh] BYREF
  int64_t qp; // [xsp+28h] [xbp-A8h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int32_t v135; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int32_t v137; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int32_t v139; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C25FCF & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77961480);
    sub_1C2D490(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10450/*"PRESENT_LIST_INFO"*/);
    sub_1C2D490(&StringLiteral_10967/*"RECEIVE_FILTER_NOTHING"*/);
    sub_1C2D490(&StringLiteral_10966/*"RECEIVE_ALL_DONE"*/);
    sub_1C2D490(&StringLiteral_3930/*"CURRENT_QP_UNIT"*/);
    sub_1C2D490(&StringLiteral_10451/*"PRESENT_LIST_NOTICE"*/);
    sub_1C2D490(&StringLiteral_3928/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C25FCF = 1;
  }
  entity = 0;
  *(_QWORD *)servantEquipSum = 0;
  scroll.fields.z = 0.0;
  offset = 0;
  *(_QWORD *)&scroll.fields.x = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)MasterData_object, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v10 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_146;
  v11 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v10, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !v11 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v11, 0);
  svtNumValLb = this->fields.svtNumValLb;
  v14 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  v139 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v139, v16, v17, v18);
  if ( !SelfUserGame )
    goto LABEL_146;
  v22 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v19, v20, v21);
  Instance = (__int64)System_String__Format_63499156(v15, v22, v23, 0);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  v137 = servantEquipSum[0];
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v137, v26, v27, v28);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v30, v31, v32);
  Instance = (__int64)System_String__Format_63499156(v25, v29, v33, 0);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  v135 = v14;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135, v36, v37, v38);
  if ( !byte_4C2162B )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2162B = 1;
  }
  v43 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v43->static_fields->CommandCodeFrameMax;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax, v39, v40, v41);
  Instance = (__int64)System_String__Format_63499156(v35, v42, v44, 0);
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
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3930/*"CURRENT_QP_UNIT"*/, 0);
  qp = SelfUserGame->fields.qp;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &qp, v50, v51, v52);
  Instance = (__int64)System_String__Format(v49, v53, 0);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0);
  fpNumValLb = this->fields.fpNumValLb;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3928/*"CURRENT_FRIEND_POINT_UNIT"*/, 0);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0);
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint, v56, v57, v58);
  Instance = (__int64)System_String__Format(v55, v59, 0);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        0);
  if ( !Instance )
    goto LABEL_146;
  v60 = (UserPresentBoxEntity_array *)Instance;
  v61 = BalanceConfig_TypeInfo;
  max_length = v60->max_length;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v61 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = this->fields.presentInfoLabel;
  PresentBoxMax = v61->static_fields->PresentBoxMax;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10450/*"PRESENT_LIST_INFO"*/, 0);
  v131 = max_length;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v66, v67, v68);
  v130 = PresentBoxMax;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130, v70, v71, v72);
  Instance = (__int64)System_String__Format_63499156(v65, v69, v73, 0);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_10451/*"PRESENT_LIST_NOTICE"*/, 0);
  v129 = PresentBoxMax;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v129, v76, v77, v78);
  Instance = (__int64)System_String__Format(v75, v79, 0);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
  }
  v80 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v80 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v80->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0) )
  {
    v81 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4C26001 )
    {
      sub_1C2D490(&UserPresentListViewManager_TypeInfo);
      byte_4C26001 = 1;
    }
    v82 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v82 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v82->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v81 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
  }
  v83 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v83 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v83->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0) )
  {
    v84 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4C26001 )
    {
      sub_1C2D490(&UserPresentListViewManager_TypeInfo);
      byte_4C26001 = 1;
    }
    v85 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v85 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v85->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v84 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0);
  }
  if ( v84 || v81 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v86 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v87 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v127 = this;
    capacity = max_length;
    v88 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v89 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v90 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58233792(
      v90,
      capacity,
      (const MethodInfo_37893C0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77961480);
    if ( capacity >= 1 )
    {
      v95 = 0;
      m_Items = v60->m_Items;
      do
      {
        if ( !v81 )
          goto LABEL_150;
        if ( v95 >= LODWORD(v60->max_length) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v86,
                     (ItemMaster_o *)v87,
                     m_Items[v95],
                     v93);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v84 )
            goto LABEL_76;
          if ( v95 >= LODWORD(v60->max_length) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v88,
                       (CommandCodeMaster_o *)v89,
                       m_Items[v95],
                       v81,
                       v94);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v95 >= LODWORD(v60->max_length) )
LABEL_147:
              sub_1C2D6F4(Instance, v5, v91);
            if ( !v90 )
              goto LABEL_146;
            v5 = (Il2CppObject *)m_Items[v95];
            items = v90->fields._items;
            v98 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v90->fields._version;
            if ( !items )
              goto LABEL_146;
            size = v90->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v90,
                v5,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v100 = &items->obj.klass + size;
              v90->fields._size = size + 1;
              v100[4] = (Il2CppClass *)v5;
              sub_1C2D434((CGThumbnailListItem_o *)(v100 + 4), (int32_t)v5, v91, v92);
            }
          }
        }
      }
      while ( capacity != ++v95 );
    }
    if ( !v90 )
      goto LABEL_146;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v90,
                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v127;
    if ( !Instance )
      goto LABEL_146;
    v101 = *(_DWORD *)(Instance + 24);
    LODWORD(max_length) = capacity;
    v60 = (UserPresentBoxEntity_array *)Instance;
  }
  else
  {
    v101 = max_length;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, (const MethodInfo *)v5);
  UserPresentBoxWindow__SetSelectCount(this, 0, v102);
  if ( v101 < 1 )
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
        UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v110);
        Instance = (__int64)this->fields.itemReceiveBtn;
        this->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v111 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          UserPresentBoxWindow__SetButtonTxtColor(v111, 0, (UnityEngine_GameObject_o *)v111, v112);
          Instance = (__int64)this->fields.checkedItemBtn;
          this->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v113 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0);
            UserPresentBoxWindow__SetButtonTxtColor(v113, 0, (UnityEngine_GameObject_o *)v113, v114);
            nonPresentNoticeLabel = this->fields.nonPresentNoticeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v116 = (System_String_o **)&StringLiteral_10966/*"RECEIVE_ALL_DONE"*/;
            if ( (_DWORD)max_length )
              v116 = (System_String_o **)&StringLiteral_10967/*"RECEIVE_FILTER_NOTHING"*/;
            Instance = (__int64)LocalizationManager__Get(*v116, 0);
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
                          v117 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  while ( 1 )
  {
    if ( v106 >= LODWORD(v60->max_length) )
      goto LABEL_147;
    v107 = v60->m_Items[v106];
    if ( !v107 )
      goto LABEL_146;
    giftType = v107->fields.giftType;
    if ( giftType == 2 )
    {
      if ( !v103 )
        goto LABEL_146;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v103,
                   &entity,
                   v107->fields.objectId,
                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_146;
      if ( LODWORD(entity[3].klass) != 24 )
      {
LABEL_97:
        v105 = 1;
        v104 = 1;
      }
      if ( (v105 & 1) == 0 )
        goto LABEL_102;
    }
    else
    {
      v104 |= giftType == 9;
      v105 = 1;
    }
    if ( (v104 & 1) != 0 )
      break;
LABEL_102:
    if ( v101 == ++v106 )
      goto LABEL_121;
  }
  v105 = 1;
  v104 = 1;
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
  this->fields.isReceiveFlg = v105 & 1;
  if ( !Instance )
    goto LABEL_146;
  v118 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v118, v105 & 1, (UnityEngine_GameObject_o *)v118, v119);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v104 & 1;
  if ( !Instance )
    goto LABEL_146;
  v120 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v120, v104 & 1, (UnityEngine_GameObject_o *)v120, v121);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v122 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v122, 0, (UnityEngine_GameObject_o *)v122, v123);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_1C2D6EC(Instance, v5);
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
        UserPresentListViewManager__CreateList((UserPresentListViewManager_o *)Instance, v60, 0);
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
  UserPresentListViewManager__CreateList((UserPresentListViewManager_o *)Instance, v60, 0);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_40013356((UserPresentListViewManager_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v117 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v117 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v124);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40206092 = TutorialFlag__Get_40206092(201, 0);
  if ( !_40206092 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_40206092, v126);
  EventTutorialMaster__CheckTutorial(0, 78, 0, 0, 0, 0, 0, 0);
}


void UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4C25FCD & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_callbackPresentList__);
    byte_4C25FCD = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_1C2D6EC(0, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__SetBtnEnable(UserPresentBoxWindow_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Component_o *sortBtn; // x0
  bool v6; // w21
  const MethodInfo *v7; // x2
  bool v8; // w20

  if ( (byte_4C25FF2 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4C25FF2 = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C2D6EC(sortBtn, is_enable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__SetButtonTxtColor(
        UserPresentBoxWindow_o *this,
        bool isVaild,
        UnityEngine_GameObject_o *btnObject,
        const MethodInfo *method)
{
  __int64 v6; // x2
  int m_CancellationTokenSource; // w8
  UserPresentBoxWindow_o *v8; // x19
  float v9; // s8
  unsigned int v10; // w20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C25FCC & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4C25FCC = 1;
  }
  if ( !btnObject )
    goto LABEL_15;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                     btnObject,
                                     (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !this )
    goto LABEL_15;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v8 = this;
  if ( isVaild )
    v9 = 1.0;
  else
    v9 = 0.5;
  if ( m_CancellationTokenSource >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= m_CancellationTokenSource )
        sub_1C2D6F4(this, isVaild, v6);
      this = (UserPresentBoxWindow_o *)*((_QWORD *)&v8->fields.myFsm + (int)v10);
      if ( !this )
        break;
      v11.fields.a = 1.0;
      v11.fields.r = v9;
      v11.fields.g = v9;
      v11.fields.b = v9;
      UIWidget__set_color((UIWidget_o *)this, v11, 0);
      m_CancellationTokenSource = (int)v8->fields.m_CancellationTokenSource;
      if ( (int)++v10 >= m_CancellationTokenSource )
        return;
    }
LABEL_15:
    sub_1C2D6EC(this, isVaild);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__SetCheckedItemsButtonEnable(
        UserPresentBoxWindow_o *this,
        bool how,
        bool isSetOtherButtonsToo,
        const MethodInfo *method)
{
  bool v5; // w20
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
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x5
  unsigned __int64 v35; // x29
  UserPresentBoxEntity_o **m_Items; // x21
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  UserPresentBoxWindow_o *v41; // x0
  const MethodInfo *v42; // x3
  il2cpp_array_size_t v43; // x8
  __int64 v44; // x19
  UserPresentBoxEntity_o *v45; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v47; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v5 = how;
  v7 = how;
  if ( (byte_4C25FEE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77961480);
    sub_1C2D490(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C25FEE = 1;
  }
  entity = 0;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = v7;
  if ( !checkedItemBtn )
    goto LABEL_94;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, v5, (UnityEngine_GameObject_o *)gameObject, v10);
  if ( !isSetOtherButtonsToo )
    return;
  if ( v5 )
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
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  checkedItemBtn = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)checkedItemBtn,
                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_94;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  max_length = VaildList->max_length;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
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
    if ( !byte_4C26001 )
    {
      sub_1C2D490(&UserPresentListViewManager_TypeInfo);
      byte_4C26001 = 1;
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
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
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
    if ( !byte_4C26001 )
    {
      sub_1C2D490(&UserPresentListViewManager_TypeInfo);
      byte_4C26001 = 1;
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
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v26 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v47 = this;
    v27 = (ItemMaster_o *)v18;
    v28 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v29 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v30 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58233792(
      v30,
      max_length,
      (const MethodInfo_37893C0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77961480);
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
              sub_1C2D6F4(checkedItemBtn, how, v31);
            if ( !v30 )
              goto LABEL_94;
            *(_QWORD *)&how = m_Items[v35];
            items = v30->fields._items;
            v38 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_94;
            size = v30->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                (Il2CppObject *)how,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v40[4] = (Il2CppClass *)how;
              sub_1C2D434((CGThumbnailListItem_o *)(v40 + 4), how, v31, v32);
            }
          }
        }
      }
      while ( (unsigned int)max_length != ++v35 );
    }
    if ( !v30
      || (checkedItemBtn = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                        v30,
                                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_94:
      sub_1C2D6EC(checkedItemBtn, how);
    }
    LODWORD(max_length) = checkedItemBtn[1].klass;
    this = v47;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)v27;
  }
  if ( (int)max_length < 1 )
    return;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v41 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v41, 1, (UnityEngine_GameObject_o *)v41, v42);
  v43 = VaildList->max_length;
  if ( (int)v43 < 1 )
    return;
  v44 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v44 >= (unsigned int)v43 )
      goto LABEL_95;
    v45 = VaildList->m_Items[v44];
    if ( !v45 )
      goto LABEL_94;
    giftType = v45->fields.giftType;
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
                                                  v45->fields.objectId,
                                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_94;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v43 = VaildList->max_length;
LABEL_90:
    if ( (int)++v44 >= (int)v43 )
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

  if ( (byte_4C25FD0 & 1) == 0 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C25FD0 = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
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
  v6 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4C26001 )
  {
    sub_1C2D490(&UserPresentListViewManager_TypeInfo);
    byte_4C26001 = 1;
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
    sub_1C2D6EC(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v6 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
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
  __int64 v7; // x1

  if ( (byte_4C25FF3 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_10723/*"PresentHistoryButton"*/);
    byte_4C25FF3 = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10723/*"PresentHistoryButton"*/,
                                         0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0 )
    {
      sub_1C2D6EC(Component_object, v7);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mReDispAct, (int32_t)act, (int32_t)method, v3);
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
  __int64 v8; // x1
  UIWidget_o *v9; // x20
  int32_t v10; // w22
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = selected;
  if ( (byte_4C25FF4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10457/*"PRESENT_SELECT_INFO"*/);
    byte_4C25FF4 = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PRESENT_SELECT_INFO"*/, 0);
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v16, 0);
  v7 = System_String__Format_63499156(v5, v6, (Il2CppObject *)this->fields.presentMaxSelectable, 0);
  if ( !presentSelectNumLabel )
    goto LABEL_14;
  UILabel__set_text(presentSelectNumLabel, v7, 0);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  v9 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v10 = v16;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v10 >= *(_DWORD *)(*(_QWORD *)&v7[7].fields + 132LL) )
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
  if ( !v9 )
LABEL_14:
    sub_1C2D6EC(v7, v8);
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&r, 0);
}


void UserPresentBoxWindow__ShowEventPointReward(
        UserPresentBoxWindow_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v18; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v21; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v22; // x22
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3

  if ( (byte_4C25FD9 & 1) == 0 )
  {
    sub_1C2D490(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
    byte_4C25FD9 = 1;
  }
  v7 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass85_0___ctor((UserPresentBoxWindow___c__DisplayClass85_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = idx;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v12, v13);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v18 = *(int *)(v7 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v18 < max_length )
    {
      if ( (unsigned int)v18 >= max_length )
        sub_1C2D6F4(v14, v15, v16);
      evpDialog = this->fields.evpDialog;
      v21 = evPointRewardList->m_Items[v18];
      v22 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_1C2D6DC(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v22,
        (Il2CppObject *)v7,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        v23);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v21, v22, v24);
        return;
      }
LABEL_10:
      sub_1C2D6EC(v8, v9);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  System_Action_o *v17; // x22

  if ( (byte_4C25FD6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
    sub_1C2D490(&StringLiteral_10444/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_44/*"\n\n"*/);
    byte_4C25FD6 = 1;
  }
  v5 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass82_0___ctor((UserPresentBoxWindow___c__DisplayClass82_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10444/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0);
    v16 = System_String__Concat_63496112(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v15, 0);
    v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0, v16, v17, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_12:
    sub_1C2D6EC(v6, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
}


void UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C25FDA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C25FDA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
      sub_1C2D6EC(v4, v5);
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

  if ( (byte_4C25FFD & 1) == 0 )
  {
    sub_1C2D490(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__);
    sub_1C2D490(&StringLiteral_12211/*"SHOW_EFFECT"*/);
    byte_4C25FFD = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0 && getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12211/*"SHOW_EFFECT"*/, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v8 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C2D6DC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
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
    sub_1C2D6EC(0, method);
  UserPresentListViewManager__SetMode_40013356(userPresentListViewManager, 1, 0);
}


void UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_1C2D6EC(0, result);
  UserPresentHistoryDialog__Open(presentHistoryDialog, 0);
}


void UserPresentBoxWindow___Open_b__69_0(UserPresentBoxWindow_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_4C25FFB & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C25FFB = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !stoneNumValLb )
    sub_1C2D6EC(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0);
}


void UserPresentBoxWindow___callbackPresentList_b__72_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C25FFC & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C25FFC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
  UserPresentBoxWindow__ReDisp(this, v5);
}


void UserPresentBoxWindow___showEffect_b__88_0(UserPresentBoxWindow_o *this, bool isDecide, const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C25FFE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow_EndEffect__);
    byte_4C25FFE = 1;
  }
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffect__, 0);
  UserPresentBoxWindow__CheckSvtGetTutorial(this, v4, v5);
}


void UserPresentBoxWindow___showReceiveResultDlg_b__101_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *touchBlocker; // x0
  const MethodInfo *v5; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x1

  if ( (byte_4C25FFF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow__showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1__);
    byte_4C25FFF = 1;
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
      v7 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C2D6DC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
      UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_UserPresentBoxWindow__showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1__,
        0);
      if ( userPresentListViewManager )
      {
        UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v7, 0);
        UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v8);
        return;
      }
LABEL_11:
      sub_1C2D6EC(touchBlocker, v3);
    }
    UserPresentBoxWindow___showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1(this, 0, v5);
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
    sub_1C2D6EC(0, action);
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
    sub_1C2D6EC(0, action);
  ServantCoinConfirmDialog__Open(servantCoinConfirmDialog, 2, this->fields.overflowSvtCoinInfos, action, 0);
}


void UserPresentBoxWindow___showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1(
        UserPresentBoxWindow_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ChainableActionBase_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x21
  System_Action_object__o *v11; // x22
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  System_Action_object__o *v14; // x22
  const MethodInfo *v15; // x3
  ActionChain_o *v16; // x19
  __int64 v17; // x21
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3

  if ( (byte_4C26000 & 1) == 0 )
  {
    sub_1C2D490(&ActionChain_TypeInfo);
    sub_1C2D490(&System_Action___TypeInfo);
    sub_1C2D490(&System_Action_Action____TypeInfo);
    sub_1C2D490(&System_Action_Action__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass101_0__showReceiveResultDlg_b__4__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass101_0_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__);
    sub_1C2D490(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__);
    byte_4C26000 = 1;
  }
  v5 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass101_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass101_0___ctor((UserPresentBoxWindow___c__DisplayClass101_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 16) = isReceive;
  v10 = sub_1C2D538(System_Action_Action____TypeInfo, 2);
  v11 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
    0);
  if ( !v10 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v10 + 32) = v11;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v11, v12, v13);
  v14 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__,
    0);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_13;
  *(_QWORD *)(v10 + 40) = v14;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 40), (int32_t)v14, v12, v15);
  v16 = (ActionChain_o *)sub_1C2D6DC(ActionChain_TypeInfo);
  ActionChain___ctor_48937944(v16, (System_Action_Action__array *)v10, 0);
  v17 = sub_1C2D538(System_Action___TypeInfo, 1);
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass101_0__showReceiveResultDlg_b__4__,
    0);
  if ( !v17 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v17 + 24) )
LABEL_13:
    sub_1C2D6F4(v6, v7, v12);
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C2D434((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v12, v19);
  if ( !v16 || (v6 = ChainableActionBase__Final((ChainableActionBase_o *)v16, (System_Action_array *)v17, 0)) == 0 )
LABEL_12:
    sub_1C2D6EC(v6, v7);
  ChainableActionBase__Execute(v6, 0);
}


void UserPresentBoxWindow__callbackPresentList(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4C25FCE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__);
    byte_4C25FCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v6, 1, 0);
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
  __int64 v10; // x1
  char v11; // w8
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4C25FE4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C25FE4 = 1;
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
        sub_1C2D6EC(befSvtList, v10);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        befSvtList->fields._size = size + 1;
        items->m_Items[size] = svtId;
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


bool UserPresentBoxWindow__checkNewCommandCode(
        UserPresentBoxWindow_o *this,
        int64_t commandCodeId,
        bool isNew,
        bool isAddCommandCode,
        const MethodInfo *method)
{
  UserPresentBoxWindow___c__DisplayClass99_0_o *v9; // x21
  struct System_Collections_Generic_List_long__o *v10; // x0
  int64_t v11; // x1
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v13; // x23
  unsigned int Index; // w8
  _BOOL4 v15; // w0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_4C25FE6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_1C2D490(&System_Predicate_long__TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
    byte_4C25FE6 = 1;
  }
  v9 = (UserPresentBoxWindow___c__DisplayClass99_0_o *)sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass99_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_16;
  v9->fields.commandCodeId = commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v15) = 0;
    return v15;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v13 = (System_Predicate_long__o *)sub_1C2D6DC(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    0);
  if ( !befCommandCodeList )
    goto LABEL_16;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v13,
            (const MethodInfo_37723EC *)Method_System_Collections_Generic_List_long__FindIndex__);
  v15 = Index >> 31;
  if ( (Index & 0x80000000) == 0 || !isAddCommandCode )
    return v15;
  v10 = this->fields.befCommandCodeList;
  if ( !v10
    || (v11 = v9->fields.commandCodeId,
        items = v10->fields._items,
        v17 = Method_System_Collections_Generic_List_long__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_16:
    sub_1C2D6EC(v10, v11);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v10,
      v11,
      *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    items->m_Items[size] = v11;
  }
  LOBYTE(v15) = 1;
  return v15;
}


void UserPresentBoxWindow__checkNextSvt(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UserPresentBoxWindow_o *v4; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v6; // x8

  v4 = this;
  if ( (byte_4C25FE3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C2D490(&StringLiteral_9258/*"NEXT_SVT"*/);
    this = (UserPresentBoxWindow_o *)sub_1C2D490(&StringLiteral_6409/*"FINAL_SVT"*/);
    byte_4C25FE3 = 1;
  }
  receiveList = v4->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v4->fields.receiveIdx >= receiveList->fields._size )
  {
    v4->fields.receiveList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.receiveList, 0, v2, v3);
    this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
    v4->fields.receiveIdx = 0;
    if ( this )
    {
      v6 = &StringLiteral_6409/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C2D6EC(this, method);
  }
  this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v6 = &StringLiteral_9258/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
bool UserPresentBoxWindow__checkOverlapSvt(UserPresentBoxWindow_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4C25FE5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C25FE5 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C2D6EC(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v13; // x20

  if ( (byte_4C25FE2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
    byte_4C25FE2 = 1;
  }
  v5 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass95_0___ctor((UserPresentBoxWindow___c__DisplayClass95_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)end_act, v10, v11);
  svtGetAction = this->fields.svtGetAction;
  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v5, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtGetAction )
LABEL_8:
    sub_1C2D6EC(v6, v7);
  ServantRewardAction__Play(svtGetAction, v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0);
}


void UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_4C25FE7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    this = (UserPresentBoxWindow_o *)sub_1C2D490(&StringLiteral_9258/*"NEXT_SVT"*/);
    byte_4C25FE7 = 1;
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
    sub_1C2D6EC(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9258/*"NEXT_SVT"*/, 0);
}


System_String_o *UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  System_String_o *v3; // x0
  __int64 v4; // x1
  int32_t stringLength; // w20
  Il2CppObject *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C25FF5 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&StringLiteral_25235/*"}"*/);
    sub_1C2D490(&StringLiteral_25020/*"{0,"*/);
    byte_4C25FF5 = 1;
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
    sub_1C2D6EC(v3, v4);
  }
  v6 = (Il2CppObject *)v3;
  v10 = v3->fields._stringLength + 2 * (stringLength - v3->fields._stringLength);
  v7 = System_Int32__ToString((int32_t)&v10, 0);
  v8 = System_String__Concat_63496112(
         (System_String_o *)StringLiteral_25020/*"{0,"*/,
         v7,
         (System_String_o *)StringLiteral_25235/*"}"*/,
         0);
  return System_String__Format(v8, v6, 0);
}


void UserPresentBoxWindow__receivePresent(
        UserPresentBoxWindow_o *this,
        System_Int64_array *presentIds,
        int32_t selectIdx,
        int32_t selectNum,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v12; // x2
  int v13; // w8
  System_Collections_Generic_IEnumerable_T__o *v14; // x23
  int v15; // w9
  __int64 v16; // x10
  int v17; // w10
  System_Collections_Generic_List_object__o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  NetworkManager_ResultCallbackFunc_o *v21; // x23
  const MethodInfo *v22; // x2

  if ( (byte_4C25FD3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77961472);
    sub_1C2D490(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow_CallbackReceiveRequest__);
    byte_4C25FD3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_27;
  Instance = UserPresentBoxMaster__getVaildList_42870624(
               (UserPresentBoxMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               presentIds,
               0);
  if ( !Instance )
    goto LABEL_27;
  v13 = *((_DWORD *)Instance + 6);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v13 == v15 )
        sub_1C2D6F4(Instance, v10, v12);
      v16 = *((_QWORD *)Instance + v15 + 4);
      if ( !v16 )
        goto LABEL_27;
      v17 = *(_DWORD *)(v16 + 72);
      if ( v17 == 11 || v17 == 1 )
        break;
      if ( v13 == ++v15 )
        goto LABEL_22;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
      goto LABEL_22;
    }
LABEL_27:
    sub_1C2D6EC(Instance, v10);
  }
LABEL_22:
  v18 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v18,
    v14,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___77961472);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.receiveList, (int32_t)v18, v19, v20);
  this->fields.receiveIdx = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v21,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v21,
               (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_27;
  UserPresentReceiveRequest__beginRequest((UserPresentReceiveRequest_o *)Instance, presentIds, selectIdx, selectNum, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v22);
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
      sub_1C2D6EC(userPresentListViewManager, method);
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
  int32_t v4; // w21
  UserPresentBoxEntity_o *v5; // x20
  int v6; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v10; // w23
  _BOOL4 isNew; // w23
  bool v12; // w22
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v14; // x23
  Il2CppClass *v15; // x24
  int32_t v16; // w23
  const MethodInfo *v17; // x4
  GetCommandCodes_o *v18; // x8
  _BOOL4 v19; // w9
  bool v20; // w2
  int32_t objectId; // w20
  const MethodInfo *v22; // x2
  _BOOL8 IsEquip; // x0
  const MethodInfo *v24; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v26; // x2
  int32_t v27; // w21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v29; // x2
  QuestRewardInfo_o *v30; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  _BOOL4 v33; // w22
  const MethodInfo *v34; // x7
  int64_t userSvtId; // x21
  CommonUI_o *v36; // x20
  CombineResultEffectComponent_ClickDelegate_o *v37; // x22
  int64_t userCommandCodeId; // x1
  bool v39; // w3
  int32_t num; // w5
  bool v41; // w2
  UserPresentBoxWindow_o *v42; // x0
  int32_t v43; // w4
  int32_t presentDialogMessageId; // w6
  ServantCostumeEntity_o *v45; // [xsp+0h] [xbp-60h] BYREF
  GetCommandCodes_o *v46; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v47; // [xsp+10h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4C25FDB & 1) == 0 )
  {
    sub_1C2D490(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_1C2D490(&MissionInfoMaker_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow__showEffect_b__88_0__);
    byte_4C25FDB = 1;
  }
  entity = 0;
  v47 = 0;
  data = 0;
  v45 = 0;
  v46 = 0;
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_105;
  method = (const MethodInfo *)(unsigned int)this->fields.receiveIdx;
  if ( (int)method < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    (int32_t)method,
                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( !receiveList )
      goto LABEL_105;
    v4 = *((_DWORD *)receiveList + 18);
    v5 = (UserPresentBoxEntity_o *)receiveList;
    if ( Gift__IsServant(v4, 0) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &entity,
                              v5->fields.objectId,
                              (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_105;
        receiveList = (void *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0);
        if ( !entity )
          goto LABEL_105;
        v6 = (int)receiveList;
        receiveList = (void *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0);
        if ( ((v6 | (unsigned int)receiveList) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_105;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v50.fields.currentCryptoKey = klass;
          *(_QWORD *)&v50.fields.fakeValue = monitor;
          v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v10, v4, 0) )
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
                v12 = data->fields.isNew || data->fields.isGetEffect;
                receiveList = (void *)Gift__IsEventSvtJoin(v4, 0);
                if ( ((unsigned __int8)receiveList & 1) != 0 )
                {
                  v33 = 0;
                }
                else
                {
                  if ( !data )
                    goto LABEL_105;
                  v33 = !UserPresentBoxWindow__checkNew(this, data->fields.userSvtId, v12, 1, v32);
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
                    if ( ((v33 | (unsigned int)receiveList) & 1) != 0 )
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
                          receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( data )
                          {
                            userSvtId = data->fields.userSvtId;
                            v36 = (CommonUI_o *)receiveList;
                            v37 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C2D6DC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
                            CombineResultEffectComponent_ClickDelegate___ctor(
                              v37,
                              (Il2CppObject *)this,
                              Method_UserPresentBoxWindow__showEffect_b__88_0__,
                              0);
                            if ( v36 )
                            {
                              CommonUI__OpenSecretTreasureDeviceForSvtGet(v36, userSvtId, v37, 0);
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
                    v39 = data->fields.isNew || data->fields.isGetEffect;
                    num = v5->fields.num;
                    presentDialogMessageId = data->fields.presentDialogMessageId;
                    v41 = data->fields.isNew;
                    v42 = this;
                    v43 = v4;
LABEL_104:
                    UserPresentBoxWindow__startRewardGetEffect(
                      v42,
                      userCommandCodeId,
                      v41,
                      v39,
                      v43,
                      num,
                      presentDialogMessageId,
                      v34);
                    return;
                  }
                }
              }
            }
LABEL_105:
            sub_1C2D6EC(receiveList, method);
          }
        }
      }
    }
    else if ( Gift__IsCommandCode(v4, 0) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &v47,
                              v5->fields.objectId,
                              (const MethodInfo_3387DE4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_105;
        getCommandCodeList = this->fields.getCommandCodeList;
        v15 = v47[1].klass;
        v14 = v47[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v15;
        *(_QWORD *)&v51.fields.fakeValue = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v46, v16, 0) )
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
          v18 = v46;
          if ( !v46 )
            goto LABEL_105;
          v19 = v46->fields.isNew;
          this->fields.gotServant = v19;
          v20 = v19 || v18->fields.isGetEffect;
          receiveList = (void *)UserPresentBoxWindow__checkNewCommandCode(
                                  this,
                                  v18->fields.userCommandCodeId,
                                  v20,
                                  1,
                                  v17);
          if ( ((unsigned __int8)receiveList & 1) != 0 )
          {
            if ( !v46 )
              goto LABEL_105;
            userCommandCodeId = v46->fields.userCommandCodeId;
            v39 = v46->fields.isNew || v46->fields.isGetEffect;
            num = v5->fields.num;
            v41 = v46->fields.isNew;
            v42 = this;
            v43 = v4;
            presentDialogMessageId = 0;
            goto LABEL_104;
          }
        }
      }
    }
    else if ( Gift__IsCostumeRelease(v4, 0) )
    {
      objectId = v5->fields.objectId;
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      if ( ServantCostumeMaster__TryGetEntity(
             (ServantCostumeMaster_o *)receiveList,
             &v45,
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
            if ( v45 )
            {
              UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(this, v45->fields.name, v22);
              return;
            }
          }
        }
        goto LABEL_105;
      }
    }
    else
    {
      IsEquip = Gift__IsEquip(v4, 0);
      if ( IsEquip )
      {
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v5, v24);
        UserPresentBoxWindow__startRewardEquipGetEffect(this, QuestRewardInfo, v26);
        return;
      }
      if ( Gift__IsItem(v4, 0) )
      {
        v27 = v5->fields.objectId;
        receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !receiveList )
          goto LABEL_105;
        if ( CommonUI__IsGetItemEffect((CommonUI_o *)receiveList, v27, 0) )
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
              v30 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v5, v29);
              UserPresentBoxWindow__startRewardSpecialItemGetEffect(this, v30, v31);
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


void UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21

  if ( (byte_4C25FE8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__);
    byte_4C25FE8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0);
  if ( !v7 )
LABEL_8:
    sub_1C2D6EC(Instance, v4);
  CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, v9, 0);
}


void UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4C25FDD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
    byte_4C25FDD = 1;
  }
  v5 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass90_0___ctor((UserPresentBoxWindow___c__DisplayClass90_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = name;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)name, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0);
  if ( !v14 )
LABEL_9:
    sub_1C2D6EC(touchBlocker, v7);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0);
}


void UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4C25FDE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
    byte_4C25FDE = 1;
  }
  v5 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass91_0___ctor((UserPresentBoxWindow___c__DisplayClass91_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)questRewardInfo, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0);
  if ( !v14 )
LABEL_9:
    sub_1C2D6EC(touchBlocker, v7);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0);
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
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UserServantEntity_o *v20; // x21
  EventServantEntity_o *EventServant_42948092; // x0
  EventServantEntity_o *v22; // x22
  __int64 v23; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *JoinMessage; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 *v29; // x8
  Il2CppObject *v30; // x0
  AvalonSceneManager_c *v31; // x8
  CommonUI_o *v32; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v34; // x21
  System_String_o *Message; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x0
  AvalonSceneManager_c *v42; // x8
  CommonUI_o *v43; // x20
  float v44; // s8
  System_Action_o *v45; // x21

  if ( (byte_4C25FDC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
    sub_1C2D490(&StringLiteral_12436/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1C2D490(&StringLiteral_12437/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/);
    byte_4C25FDC = 1;
  }
  v15 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_0___ctor((UserPresentBoxWindow___c__DisplayClass89_0_o *)v15, 0);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v15 + 32),
                                (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v20 = (UserServantEntity_o *)Instance;
  EventServant_42948092 = UserServantEntity__getEventServant_42948092((UserServantEntity_o *)Instance, 1, 0);
  if ( !EventServant_42948092 || (v22 = EventServant_42948092, EventServant_42948092->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v31 = AvalonSceneManager_TypeInfo;
      v32 = (CommonUI_o *)v30;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v31 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
      v34 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v15,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0);
      if ( v32 )
      {
        CommonUI__maskFadeout(v32, 1, DEFAULT_FADE_TIME, v34, 0);
        return;
      }
    }
LABEL_29:
    sub_1C2D6EC(Instance, v17);
  }
  v23 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_1___ctor((UserPresentBoxWindow___c__DisplayClass89_1_o *)v23, 0);
  if ( !v23 )
    goto LABEL_29;
  *(_QWORD *)(v23 + 32) = v15;
  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 32), v15, v24, v25);
  if ( UserServantEntity__HasStatus(v20, 64, 0) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v22, 0);
    *(_QWORD *)(v23 + 24) = JoinMessage;
    sub_1C2D434((CGThumbnailListItem_o *)(v23 + 24), (int32_t)JoinMessage, v27, v28);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_12437/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v22, 0);
    *(_QWORD *)(v23 + 24) = Message;
    sub_1C2D434((CGThumbnailListItem_o *)(v23 + 24), (int32_t)Message, v36, v37);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_12436/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v38 = LocalizationManager__Get((System_String_o *)*v29, 0);
  *(_QWORD *)(v23 + 16) = v38;
  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 16), (int32_t)v38, v39, v40);
  v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42 = AvalonSceneManager_TypeInfo;
  v43 = (CommonUI_o *)v41;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v42 = AvalonSceneManager_TypeInfo;
  }
  v44 = v42->static_fields->DEFAULT_FADE_TIME;
  v45 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v23,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0);
  if ( !v43 )
    goto LABEL_29;
  CommonUI__maskFadein(v43, v44, v45, 0);
}


void UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4C25FDF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__);
    sub_1C2D490(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
    byte_4C25FDF = 1;
  }
  v5 = sub_1C2D6DC(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass92_0___ctor((UserPresentBoxWindow___c__DisplayClass92_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)questRewardInfo, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0);
  if ( !v14 )
LABEL_9:
    sub_1C2D6EC(touchBlocker, v7);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A712FC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A712B4;
}


System_IAsyncResult_o *UserPresentBoxWindow_ClickDelegate__BeginInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = hasGetServant;
  if ( (byte_4C26002 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C26002 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, method);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v10; // w9
  struct UserPresentBoxWindow_o *v11; // x8
  struct UserPresentListViewManager_o *v12; // x8
  int32_t v13; // w1

  if ( (byte_4C26003 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26003 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_4C26041 & 1) == 0 )
  {
    Instance = (Il2CppObject *)sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4C26041 = 1;
  }
  checkedIdList = userPresentListViewManager->fields.checkedIdList;
  if ( checkedIdList )
  {
    v10 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v10;
  }
  v11 = this->fields.__4__this;
  if ( !v11 || (v12 = v11->fields.userPresentListViewManager) == 0 )
LABEL_13:
    sub_1C2D6EC(Instance, v4);
  v13 = StringLiteral_1/*""*/;
  v12->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->fields._expiredPresents_k__BackingField, v13, v5, v6);
  ActionExtensions__Call(this->fields.callback, 0);
}


void UserPresentBoxWindow___c__DisplayClass85_0___ctor(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C26004 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__);
    byte_4C26004 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !evpDialog )
LABEL_8:
    sub_1C2D6EC(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_39966796(evpDialog, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxWindow__UpdateEventInfos(_4__this, 0), (_4__this = this->fields.__4__this) == 0) )
    sub_1C2D6EC(_4__this, method);
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
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C26006 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__);
    byte_4C26006 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  if ( !v6 )
    sub_1C2D6EC(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v6, _9__3, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C26005 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C26005 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__3(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  Il2CppObject *v7; // x20
  struct UserPresentBoxWindow_o *v8; // x8
  SummonAssetManager_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w21
  struct UserPresentBoxWindow_o *v13; // x8
  ServantRewardAction_o *svtGetAction; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v17; // w0
  Il2CppObject v18; // q1
  int32_t v19; // w23
  int64_t v20; // x0
  Il2CppClass *v21; // x8
  int64_t v22; // x20
  struct UserPresentBoxWindow_o *v23; // x8
  struct ServantRewardAction_o *v24; // x8
  Il2CppObject *v25; // x0
  struct UserPresentBoxWindow_o *v26; // x22
  Il2CppObject *v27; // x21
  struct UserPresentBoxWindow_o *v28; // x8
  SummonAssetManager_o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct UserPresentBoxWindow_o *v32; // x8
  ServantRewardAction_o *v33; // x20
  Il2CppObject v34; // q1
  bool isNew; // w2
  int64_t v36; // x1
  bool v37; // w3
  int32_t v38; // w4
  ServantRewardAction_o *v39; // x0
  struct UserPresentBoxWindow_o *v40; // x8
  ServantRewardAction_o *v41; // x21
  void *v42; // x22
  Il2CppClass *v43; // x23
  int32_t v44; // w0
  Il2CppObject v45; // q1
  int32_t v46; // w22
  int64_t v47; // x0
  Il2CppClass *v48; // x8
  int64_t v49; // x20
  Il2CppObject v50; // q1
  Il2CppObject *v51; // x19
  System_Action_o *v52; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4C26007 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow_EndEffect__);
    byte_4C26007 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    v7 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_55;
    v9 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v8->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !v9 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v9, (UnityEngine_Transform_o *)Instance, 0, 0);
    if ( !_4__this )
      goto LABEL_55;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.svtGetAction, Instance, v10, v11);
    if ( this->fields.isDoEffect )
    {
      if ( v7 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_42948092((UserServantEntity_o *)v7, 1, 0);
        v12 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v12 = 6;
          else
            v12 = 14;
        }
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          svtGetAction = v13->fields.svtGetAction;
          klass = v7[5].klass;
          monitor = v7[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v58.fields.currentCryptoKey = klass;
          *(_QWORD *)&v58.fields.fakeValue = monitor;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v58, 0);
          v18 = v7[2];
          v19 = v17;
          *(Il2CppObject *)&v57.fields.currentCryptoKey = v7[1];
          *(Il2CppObject *)&v57.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v56 = v57;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v56, 0);
          v21 = v7[6].klass;
          *(_QWORD *)&v59.fields.fakeValue = v7[6].monitor;
          v22 = v20;
          *(_QWORD *)&v59.fields.currentCryptoKey = v21;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v59, 0);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v19,
              v22,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v12,
              0);
            if ( !this->fields.isNew )
              goto LABEL_53;
            v23 = this->fields.__4__this;
            if ( v23 )
            {
              v24 = v23->fields.svtGetAction;
              if ( v24 )
              {
                v24->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_53;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1C2D6EC(Instance, v4);
    }
    v40 = this->fields.__4__this;
    if ( !v40 || !v7 )
      goto LABEL_55;
    v41 = v40->fields.svtGetAction;
    v43 = v7[5].klass;
    v42 = v7[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v60.fields.currentCryptoKey = v43;
    *(_QWORD *)&v60.fields.fakeValue = v42;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v60, 0);
    v45 = v7[2];
    v46 = v44;
    *(Il2CppObject *)&v57.fields.currentCryptoKey = v7[1];
    *(Il2CppObject *)&v57.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v55 = v57;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v55, 0);
    v48 = v7[6].klass;
    *(_QWORD *)&v61.fields.fakeValue = v7[6].monitor;
    v49 = v47;
    *(_QWORD *)&v61.fields.currentCryptoKey = v48;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v61, 0);
    if ( !v41 )
      goto LABEL_55;
    ServantRewardAction__Setup(v41, v46, v49, Instance, this->fields.num, 0, 0, 6, 0);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_55;
    v25 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v26 = this->fields.__4__this;
    v27 = v25;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v28 = this->fields.__4__this;
    if ( !v28 )
      goto LABEL_55;
    v29 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v28->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !v29 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v29, (UnityEngine_Transform_o *)Instance, 0, 0);
    if ( !v26 )
      goto LABEL_55;
    v26->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1C2D434((CGThumbnailListItem_o *)&v26->fields.svtGetAction, Instance, v30, v31);
    v32 = this->fields.__4__this;
    if ( !v32 || !v27 )
      goto LABEL_55;
    v33 = v32->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v34 = v27[2];
      *(Il2CppObject *)&v57.fields.currentCryptoKey = v27[1];
      *(Il2CppObject *)&v57.fields.fakeValue = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v54 = v57;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v54, 0);
      if ( !v33 )
        goto LABEL_55;
      isNew = this->fields.isNew;
      v36 = Instance;
      v37 = 1;
      v38 = 14;
      v39 = v33;
    }
    else
    {
      v50 = v27[2];
      *(Il2CppObject *)&v57.fields.currentCryptoKey = v27[1];
      *(Il2CppObject *)&v57.fields.fakeValue = v50;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v53 = v57;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v53, 0);
      if ( !v33 )
        goto LABEL_55;
      v36 = Instance;
      v38 = 6;
      v39 = v33;
      isNew = 0;
      v37 = 0;
    }
    ServantRewardAction__SetupCommandCode_36976972(v39, v36, isNew, v37, v38, 0);
  }
LABEL_53:
  v51 = (Il2CppObject *)this->fields.__4__this;
  v52 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v52, v51, Method_UserPresentBoxWindow_EndEffect__, 0);
  if ( !v51 )
    goto LABEL_55;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v51, v52, 0);
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
  __int64 v4; // x1
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C26008 & 1) == 0 )
  {
    sub_1C2D490(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__);
    byte_4C26008 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_1C2D6DC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v9 )
LABEL_8:
    sub_1C2D6EC(Instance, v4);
  CommonUI__OpenNotificationDialog_31170012(v9, title, message, _9__2, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C26009 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__);
    byte_4C26009 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
    sub_1C2D6EC(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v6, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  System_String_o *name; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2600A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__);
    byte_4C2600A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    sub_1C2D6EC(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v6, 0, name, _9__2, 23, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2600B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2600B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2600C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__);
    byte_4C2600C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
    sub_1C2D6EC(Instance, v4);
  CommonUI__LoadEquipGetEffect(v6, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2600D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__);
    byte_4C2600D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    sub_1C2D6EC(Instance, v4);
  CommonUI__OpenEquipGetEffect(v6, 0, questRewardInfo, _9__2, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2600E & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2600E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2600F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__);
    byte_4C2600F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !v6 )
    sub_1C2D6EC(Instance, v4);
  CommonUI__LoadItemGetEffect(v6, questRewardInfo, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Instance; // x0
  __int64 v4; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v8; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C26010 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__);
    byte_4C26010 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v6 = (CommonUI_o *)Instance;
  Instance = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Instance, 0);
  _9__2 = this->fields.__9__2;
  v8 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v6 )
LABEL_9:
    sub_1C2D6EC(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v8, 0, questRewardInfo, _9__2, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C26011 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C26011 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
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
  if ( (byte_4C26012 & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C26012 = 1;
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
  UnityEngine_Object__DestroyImmediate_71163892(gameObject, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0 )
LABEL_10:
    sub_1C2D6EC(this, method);
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