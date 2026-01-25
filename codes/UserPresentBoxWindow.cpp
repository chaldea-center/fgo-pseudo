void UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_long__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CED39E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CED39E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.befSvtList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.befCommandCodeList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UserPresentBoxWindow_o *v13; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct PlayMakerFSM_o *v22; // x8
  struct GetCommandCodes_array *fsm; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct PlayMakerFSM_o *v30; // x8
  struct UserPresentBoxWindow_evPointReward_array *fsmTemplate; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct PlayMakerFSM_o *v38; // x8
  struct GetSvtCoin_array *v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct PlayMakerFSM_o *v46; // x8
  struct GetSvtCoin_array *addEventHandlers; // x1
  System_Action_o *v48; // x20
  const MethodInfo *v49; // x2

  v4 = this;
  if ( (byte_4CED378 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    this = (UserPresentBoxWindow_o *)sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CED378 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_64212232(result, (System_String_o *)StringLiteral_22419/*"ng"*/, 0) )
  {
    UserPresentBoxWindow__ReDisp(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_64215176(
                         (System_String_o *)StringLiteral_15862/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16114/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v6,
                                     (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_20;
  v13 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_20;
  m_CancellationTokenSource = myFsm->fields.m_CancellationTokenSource;
  v4->fields.getSvtList = (struct GetSvts_array *)m_CancellationTokenSource;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.getSvtList,
    (int32_t)m_CancellationTokenSource,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v22 = v13->fields.myFsm;
  if ( !v22 )
    goto LABEL_20;
  fsm = (struct GetCommandCodes_array *)v22->fields.fsm;
  v4->fields.getCommandCodeList = fsm;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.getCommandCodeList, (int32_t)fsm, v16, v17, v18, v19, v20, v21);
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v30 = v13->fields.myFsm;
  if ( !v30 )
    goto LABEL_20;
  v4->fields.presentOverflowType = v30->fields.m_CachedPtr;
  fsmTemplate = (struct UserPresentBoxWindow_evPointReward_array *)v30->fields.fsmTemplate;
  v4->fields.evPointRewardList = fsmTemplate;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.evPointRewardList,
    (int32_t)fsmTemplate,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v38 = v13->fields.myFsm;
  if ( !v38 )
    goto LABEL_20;
  v39 = *(struct GetSvtCoin_array **)&v38->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = v39;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.getSvtCoins, (int32_t)v39, v32, v33, v34, v35, v36, v37);
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_1C7BD48(this);
  v46 = v13->fields.myFsm;
  if ( !v46 )
LABEL_20:
    sub_1C7BD40(this, result);
  addEventHandlers = (struct GetSvtCoin_array *)v46->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = addEventHandlers;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.overflowSvtCoinInfos,
    (int32_t)addEventHandlers,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v48 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v48, v49);
}


bool UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  void *Filter_44385112; // x0
  ListViewSort_o **v9; // x8
  ListViewSort_o *v10; // x19
  UserPresentBoxMaster_c *v11; // x0
  bool v12; // w8
  bool result; // w0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v15; // w1

  if ( (byte_4CED375 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&UserPresentBoxMaster_TypeInfo);
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED375 = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
  }
  Filter_44385112 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_44385112 = UserPresentListViewManager_TypeInfo;
  }
  v9 = (ListViewSort_o **)*((_QWORD *)Filter_44385112 + 23);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_52;
  Filter_44385112 = (void *)ListViewSort__GetFilter_44385112(*v9, 13, 0);
  if ( ((unsigned __int8)Filter_44385112 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_52;
LABEL_20:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_44385112 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_44385112 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_44385112 + 23) + 712LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( !*((_DWORD *)Filter_44385112 + 56) )
          {
            j_il2cpp_runtime_class_init_0(Filter_44385112);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_44385112 = (void *)System_Array__IndexOf_int_(
                                      PresentBoxFilterSvtEquipMaterial,
                                      userPresentBoxEntity->fields.objectId,
                                      (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)Filter_44385112 & 0x80000000) == 0 )
            return ListViewSort__GetFilter_44385112(v10, 4, 0);
        }
        if ( servantMaster )
        {
          Filter_44385112 = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_44385112 )
          {
            switch ( *((_DWORD *)Filter_44385112 + 21) )
            {
              case 1:
              case 0xC:
                goto LABEL_21;
              case 3:
                v15 = 1;
                return ListViewSort__GetFilter_44385112(v10, v15, 0);
              case 6:
                v15 = 3;
                return ListViewSort__GetFilter_44385112(v10, v15, 0);
              case 7:
                v15 = 2;
                return ListViewSort__GetFilter_44385112(v10, v15, 0);
              case 8:
                v15 = 4;
                return ListViewSort__GetFilter_44385112(v10, v15, 0);
              default:
                goto LABEL_39;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_44385112 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_342E2FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_44385112 )
          break;
        switch ( *((_DWORD *)Filter_44385112 + 12) )
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
        return ListViewSort__GetFilter_44385112(v10, v15, 0);
      case 6:
      case 7:
LABEL_21:
        v12 = ListViewSort__GetFilter_44385112(v10, 0, 0);
        result = 0;
        if ( !v12 )
          return result;
        return 1;
      case 0xB:
        v15 = 5;
        return ListViewSort__GetFilter_44385112(v10, v15, 0);
      default:
LABEL_39:
        v15 = 14;
        return ListViewSort__GetFilter_44385112(v10, v15, 0);
    }
LABEL_52:
    sub_1C7BD40(Filter_44385112, servantMaster);
  }
  Filter_44385112 = UserPresentBoxMaster_TypeInfo;
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
    Filter_44385112 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v11->static_fields->IMPORTANT_FOR_LIMIT,
                                0);
    if ( ((unsigned __int8)Filter_44385112 & 1) == 0 )
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
  void *Filter_44385112; // x0
  ListViewSort_o **v11; // x8
  ListViewSort_o *v12; // x19
  UserPresentBoxMaster_c *v13; // x0
  int32_t giftType; // w8
  _DWORD *v15; // x8
  bool Filter_44385160; // w8
  bool result; // w0
  int32_t v18; // w1

  if ( (byte_4CED376 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C7BAE8(&UserPresentBoxMaster_TypeInfo);
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED376 = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
  }
  Filter_44385112 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_44385112 = UserPresentListViewManager_TypeInfo;
  }
  v11 = (ListViewSort_o **)*((_QWORD *)Filter_44385112 + 23);
  v12 = *v11;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v12 )
    goto LABEL_49;
  Filter_44385112 = (void *)ListViewSort__GetFilter_44385112(*v11, 13, 0);
  if ( ((unsigned __int8)Filter_44385112 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_49;
  }
  else
  {
LABEL_12:
    Filter_44385112 = UserPresentBoxMaster_TypeInfo;
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
    Filter_44385112 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v13->static_fields->IMPORTANT_FOR_LIMIT,
                                0);
    if ( ((unsigned __int8)Filter_44385112 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( servantLimitMaster )
    {
      Filter_44385112 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0);
      if ( Filter_44385112 )
      {
        v15 = (char *)Filter_44385112 + 24;
        goto LABEL_30;
      }
      return 1;
    }
LABEL_49:
    sub_1C7BD40(Filter_44385112, servantLimitMaster);
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_49;
  Filter_44385112 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_342E2FC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_44385112 )
    return 1;
  v15 = (char *)Filter_44385112 + 64;
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
      Filter_44385160 = ListViewSort__GetFilter_44385160(v12, 0, 0);
      result = 0;
      if ( !Filter_44385160 )
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
      if ( ListViewSort__GetFilter_44385160(v12, v18, 0) )
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o **v14; // x22
  int32_t receiveIdx; // w1
  _DWORD *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4CED38D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
    byte_4CED38D = 1;
  }
  v5 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass102_0___ctor((UserPresentBoxWindow___c__DisplayClass102_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  v14 = (System_Action_o **)(v5 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v16 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v17 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(
          v17,
          (Il2CppObject *)v5,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0);
        EventTutorialMaster__CheckTutorial(-1, 11, v17, v16[19], 0, 0, 0, 0);
        return;
      }
      if ( *v14 )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))(*v14)->fields.invoke_impl)(
          (*v14)->fields.method_code,
          (*v14)->fields.method);
        return;
      }
    }
LABEL_14:
    sub_1C7BD40(receiveList, v7);
  }
  if ( *v14 )
    ActionExtensions__Call(*v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__ClickFilterEnd(UserPresentBoxWindow_o *this, bool result, const MethodInfo *method)
{
  UserPresentListViewManager_c *v5; // x0
  ListViewSort_o *sortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4CED39D & 1) == 0 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED39D = 1;
  }
  if ( result )
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4CED3A5 )
    {
      sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
      byte_4CED3A5 = 1;
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
      sub_1C7BD40(sortInfo, result);
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

  if ( (byte_4CED393 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CED393 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
    sub_1C7BD40(userPresentListViewManager, v6);
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

  if ( (byte_4CED384 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestRewardInfo_TypeInfo);
    byte_4CED384 = 1;
  }
  v4 = sub_1C7BD34(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v4, 0);
  if ( !userPresentBox || !v4 )
    sub_1C7BD40(v5, v6);
  result = (QuestRewardInfo_o *)v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v4 + 24) = userPresentBox->fields.num;
  return result;
}


void UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CED385 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5448/*"END_EFFECT"*/);
    byte_4CED385 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C7BD40(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5448/*"END_EFFECT"*/, 0);
}


void UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CED38E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3502/*"CLOSE"*/);
    byte_4CED38E = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C7BD40(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3502/*"CLOSE"*/, 0);
}


void UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4CED37B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_EndReceive__);
    byte_4CED37B = 1;
  }
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndReceive__, 0);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


void UserPresentBoxWindow__EventPointRewardWithSvtGet(UserPresentBoxWindow_o *this, bool res, const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4CED37C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_EndEffectReceive__);
    byte_4CED37C = 1;
  }
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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

  if ( (byte_4CED379 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CED379 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_1C7BD40(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C7BD40(v4, v5);
    if ( !Gift__IsCostumeRelease((int32_t)v13.fields._current[4].monitor, 0)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0) )
        continue;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_1C7BD40(0, v8);
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
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
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

  if ( (byte_4CED38F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_OnClickAll__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_ProcessClickAll__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__);
    byte_4CED38F = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickAll__;
  isReceiveFlg = this->fields.isReceiveFlg;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  if ( isReceiveFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_11;
    UserPresentListViewManager__SetMode_40793300(userPresentListViewManager, 2, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, 0),
          v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0),
          v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0),
          !presentDialog) )
    {
LABEL_11:
      sub_1C7BD40(userPresentListViewManager, v6);
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

  if ( (byte_4CED394 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UserPresentBoxWindow_OnClickBack__);
    byte_4CED394 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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

  if ( (byte_4CED391 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UserPresentBoxWindow_OnClickCheckedItem__);
    byte_4CED391 = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, 0),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
      sub_1C7BD40(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_40793300(userPresentListViewManager, 2, 0);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v7);
  }
  else
  {
    v8 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  PresentBoxFilterSelectMenu_o *v19; // x20
  UserPresentListViewManager_c *v20; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v22; // x22

  if ( (byte_4CED39C & 1) == 0 )
  {
    sub_1C7BAE8(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_ClickFilterEnd__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_OnClickFilter__);
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED39C = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickFilter__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
           (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_36529116((UnityEngine_GameObject_o *)v8, gameObject, 0);
    if ( !v8 )
LABEL_20:
      sub_1C7BD40(v10, v11);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.presentBoxFilterSelectMenu,
      (int32_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = *p_presentBoxFilterSelectMenu;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
  }
  v20 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v20 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v20->static_fields->sortInfo;
  v22 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_1C7BD34(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0);
  if ( !v19 )
    goto LABEL_20;
  PresentBoxFilterSelectMenu__Open(v19, sortInfo, v22, 0);
}


void UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  UserPresentBoxWindow_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CED39A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UserPresentBoxWindow_OnClickHelp__);
    byte_4CED39A = 1;
  }
  v2 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v2, v2[4]);
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

  if ( (byte_4CED390 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UserPresentBoxWindow_OnClickItem__);
    byte_4CED390 = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, 0),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
      sub_1C7BD40(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_40793300(userPresentListViewManager, 2, 0);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v7);
  }
  else
  {
    v8 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickItem__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
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

  if ( (byte_4CED395 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__);
    byte_4CED395 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_1C7BD40(0, v7);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CED36E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED36E = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_1C7BD40(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
    *p_titleInfo = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_titleInfo, 0, v8, v9, v10, v11, v12, v13);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v17; // x3
  UserPresentBoxWindow_o *v18; // x0
  const MethodInfo *v19; // x3
  UserPresentBoxWindow_o *v20; // x0
  const MethodInfo *v21; // x3
  UserPresentBoxWindow_o *v22; // x0
  const MethodInfo *v23; // x1
  struct System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  Il2CppObject *titlePrefab; // x22
  Il2CppObject *Component_object; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  TitleInfoControl_o *v42; // x22
  TitleInfoControl_o *v43; // x21
  System_Action_o *v44; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v46; // x21
  System_Action_int__o *v47; // x22
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  const MethodInfo *v56; // x2
  bool v57; // w20
  const MethodInfo *v58; // x2

  if ( (byte_4CED36F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_int__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_OnClickBack__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__Open_b__69_0__);
    sub_1C7BAE8(&StringLiteral_5433/*"ENABLE_PRESENT_HISTORY"*/);
    byte_4CED36F = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0);
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  bgObject = (UnityEngine_GameObject_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v17);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v18 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v18, 0, (UnityEngine_GameObject_o *)v18, v19);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v20 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v20, 0, (UnityEngine_GameObject_o *)v20, v21);
  v24 = UserPresentBoxWindow__maxSelectable(v22, v23);
  this->fields.presentMaxSelectable = v24;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.presentMaxSelectable,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  UserPresentBoxWindow__SetSelectCount(this, 0, v31);
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
                                             (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.titleInfo,
        (int32_t)Component_object,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v42 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( v42 )
      {
        TitleInfoControl__SetParent(v42, (UnityEngine_Transform_o *)bgObject, 0);
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
              TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgObject, 0, 1, 0, 46, 0, 0);
              bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
              if ( *p_titleInfo )
              {
                TitleInfoControl__changeTitleInfo_40477940((TitleInfoControl_o *)bgObject, 1, 46, 0, 0, 0);
                v43 = this->fields.titleInfo;
                v44 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                System_Action___ctor(v44, (Il2CppObject *)this, (intptr_t)Method_UserPresentBoxWindow_OnClickBack__, 0);
                if ( v43 )
                {
                  TitleInfoControl__SetBackBtnAct(v43, v44, 0);
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C7BD40(bgObject, isShowBg);
  }
LABEL_20:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0);
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v47 = (System_Action_int__o *)sub_1C7BD34(System_Action_int__TypeInfo);
  System_Action_int____ctor(v47, (Il2CppObject *)this, Method_UserPresentBoxWindow__Open_b__69_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(v46, v47, 1, 0);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_28;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, 0);
  UserPresentBoxWindow__SetFilterButtonImage(this, v48);
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
  UserPresentBoxWindow__RequestPresentList(this, v49);
  this->fields.mReDispAct = redisp_act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mReDispAct,
    (int32_t)redisp_act,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v56);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5433/*"ENABLE_PRESENT_HISTORY"*/, 0);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_28;
  v57 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v57, v58);
}


void UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  TutorialFlag_ImageId_array *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CED39B & 1) == 0 )
  {
    sub_1C7BAE8(&TutorialFlag_ImageId___TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E);
    byte_4CED39B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (System_Array_o *)sub_1C7BB90(TutorialFlag_ImageId___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v5 = (TutorialFlag_ImageId_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64876136(v3, v4, 0);
  if ( !Instance )
    sub_1C7BD40(v6, v7);
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
    sub_1C7BD40(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_40793300(userPresentListViewManager, 2, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UserServantMaster_o *v14; // x8
  UserCommandCodeMaster_o *v15; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int32_t v18; // w21
  System_String_o *v19; // x23
  Il2CppObject *v20; // x24
  Il2CppObject *v21; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v23; // x23
  Il2CppObject *v24; // x24
  Il2CppObject *v25; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x21
  BalanceConfig_c *v29; // x0
  Il2CppObject *v30; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v38; // x22
  Il2CppObject *v39; // x0
  UserPresentBoxEntity_array *v40; // x20
  BalanceConfig_c *v41; // x0
  il2cpp_array_size_t max_length; // x26
  UILabel_o *presentInfoLabel; // x22
  int32_t PresentBoxMax; // w19
  System_String_o *v45; // x23
  Il2CppObject *v46; // x24
  Il2CppObject *v47; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v49; // x23
  Il2CppObject *v50; // x0
  UserPresentListViewManager_c *v51; // x0
  _BOOL4 v52; // w22
  UserPresentListViewManager_c *v53; // x0
  UserPresentListViewManager_c *v54; // x0
  _BOOL4 v55; // w28
  UserPresentListViewManager_c *v56; // x0
  Il2CppObject *v57; // x23
  Il2CppObject *v58; // x24
  Il2CppObject *v59; // x25
  Il2CppObject *v60; // x27
  System_Collections_Generic_List_object__o *v61; // x26
  int32_t v62; // w2
  int32_t v63; // w3
  MethodInfo *v64; // x4
  const MethodInfo *v65; // x5
  int64_t v66; // x6
  System_String_o *v67; // x7
  unsigned __int64 v68; // x29
  UserPresentBoxEntity_o **m_Items; // x19
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  int v74; // w24
  const MethodInfo *v75; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // x21
  char v77; // w22
  char v78; // w23
  unsigned int v79; // w25
  UserPresentBoxEntity_o *v80; // x8
  int32_t giftType; // w9
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v83; // x3
  UserPresentBoxWindow_o *v84; // x0
  const MethodInfo *v85; // x3
  UserPresentBoxWindow_o *v86; // x0
  const MethodInfo *v87; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  System_String_o **v89; // x8
  __int64 v90; // x8
  UserPresentBoxWindow_o *v91; // x0
  const MethodInfo *v92; // x3
  UserPresentBoxWindow_o *v93; // x0
  const MethodInfo *v94; // x3
  UserPresentBoxWindow_o *v95; // x0
  const MethodInfo *v96; // x3
  const MethodInfo *v97; // x2
  _BOOL8 _40989036; // x0
  const MethodInfo *v99; // x1
  UserPresentBoxWindow_o *v100; // [xsp+8h] [xbp-C8h]
  int32_t capacity; // [xsp+10h] [xbp-C0h]
  int32_t v102; // [xsp+18h] [xbp-B8h] BYREF
  int32_t v103; // [xsp+1Ch] [xbp-B4h] BYREF
  int v104; // [xsp+20h] [xbp-B0h] BYREF
  int32_t FriendPoint; // [xsp+24h] [xbp-ACh] BYREF
  int64_t qp; // [xsp+28h] [xbp-A8h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int32_t v108; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int32_t v110; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int32_t v112; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4CED373 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78758728);
    sub_1C7BAE8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10493/*"PRESENT_LIST_INFO"*/);
    sub_1C7BAE8(&StringLiteral_11017/*"RECEIVE_FILTER_NOTHING"*/);
    sub_1C7BAE8(&StringLiteral_11016/*"RECEIVE_ALL_DONE"*/);
    sub_1C7BAE8(&StringLiteral_3943/*"CURRENT_QP_UNIT"*/);
    sub_1C7BAE8(&StringLiteral_10494/*"PRESENT_LIST_NOTICE"*/);
    sub_1C7BAE8(&StringLiteral_3941/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_1C7BAE8(&StringLiteral_12536/*"SUM_INFO"*/);
    byte_4CED373 = 1;
  }
  entity = 0;
  *(_QWORD *)servantEquipSum = 0;
  scroll.fields.z = 0.0;
  offset = 0;
  *(_QWORD *)&scroll.fields.x = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v14 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_146;
  v15 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v14, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !v15 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v15, 0);
  svtNumValLb = this->fields.svtNumValLb;
  v18 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUM_INFO"*/, 0);
  v112 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v112);
  if ( !SelfUserGame )
    goto LABEL_146;
  v20 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64218220(v19, v20, v21, 0);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUM_INFO"*/, 0);
  v110 = servantEquipSum[0];
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  Instance = (__int64)System_String__Format_64218220(v23, v24, v25, 0);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUM_INFO"*/, 0);
  v108 = v18;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
  if ( !byte_4CE8865 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CE8865 = 1;
  }
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v29->static_fields->CommandCodeFrameMax;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax);
  Instance = (__int64)System_String__Format_64218220(v27, v28, v30, 0);
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
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3943/*"CURRENT_QP_UNIT"*/, 0);
  qp = SelfUserGame->fields.qp;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &qp);
  Instance = (__int64)System_String__Format(v35, v36, 0);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0);
  fpNumValLb = this->fields.fpNumValLb;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3941/*"CURRENT_FRIEND_POINT_UNIT"*/, 0);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0);
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint);
  Instance = (__int64)System_String__Format(v38, v39, 0);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        0);
  if ( !Instance )
    goto LABEL_146;
  v40 = (UserPresentBoxEntity_array *)Instance;
  v41 = BalanceConfig_TypeInfo;
  max_length = v40->max_length;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = this->fields.presentInfoLabel;
  PresentBoxMax = v41->static_fields->PresentBoxMax;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_10493/*"PRESENT_LIST_INFO"*/, 0);
  v104 = max_length;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
  v103 = PresentBoxMax;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  Instance = (__int64)System_String__Format_64218220(v45, v46, v47, 0);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10494/*"PRESENT_LIST_NOTICE"*/, 0);
  v102 = PresentBoxMax;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
  Instance = (__int64)System_String__Format(v49, v50, 0);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
  }
  v51 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v51 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v51->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0) )
  {
    v52 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4CED3A5 )
    {
      sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
      byte_4CED3A5 = 1;
    }
    v53 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v53 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v53->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v52 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
  }
  v54 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v54 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v54->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0) )
  {
    v55 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4CED3A5 )
    {
      sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
      byte_4CED3A5 = 1;
    }
    v56 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v56 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v56->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v55 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0);
  }
  if ( v55 || v52 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v57 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v58 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v100 = this;
    capacity = max_length;
    v59 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v60 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v61 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58975800(
      v61,
      capacity,
      (const MethodInfo_383E638 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78758728);
    if ( capacity >= 1 )
    {
      v68 = 0;
      m_Items = v40->m_Items;
      do
      {
        if ( !v52 )
          goto LABEL_150;
        if ( v68 >= LODWORD(v40->max_length) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v57,
                     (ItemMaster_o *)v58,
                     m_Items[v68],
                     v64);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v55 )
            goto LABEL_76;
          if ( v68 >= LODWORD(v40->max_length) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v59,
                       (CommandCodeMaster_o *)v60,
                       m_Items[v68],
                       v52,
                       v65);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v68 >= LODWORD(v40->max_length) )
LABEL_147:
              sub_1C7BD48(Instance);
            if ( !v61 )
              goto LABEL_146;
            v5 = (Il2CppObject *)m_Items[v68];
            items = v61->fields._items;
            v71 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v61->fields._version;
            if ( !items )
              goto LABEL_146;
            size = v61->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v61,
                v5,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &items->obj.klass + size;
              v61->fields._size = size + 1;
              v73[4] = (Il2CppClass *)v5;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)(v73 + 4),
                (int32_t)v5,
                v62,
                v63,
                (System_String_o *)v64,
                (int32_t)v65,
                v66,
                v67);
            }
          }
        }
      }
      while ( capacity != ++v68 );
    }
    if ( !v61 )
      goto LABEL_146;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v61,
                          (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v100;
    if ( !Instance )
      goto LABEL_146;
    v74 = *(_DWORD *)(Instance + 24);
    LODWORD(max_length) = capacity;
    v40 = (UserPresentBoxEntity_array *)Instance;
  }
  else
  {
    v74 = max_length;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, (const MethodInfo *)v5);
  UserPresentBoxWindow__SetSelectCount(this, 0, v75);
  if ( v74 < 1 )
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
        UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v83);
        Instance = (__int64)this->fields.itemReceiveBtn;
        this->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v84 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          UserPresentBoxWindow__SetButtonTxtColor(v84, 0, (UnityEngine_GameObject_o *)v84, v85);
          Instance = (__int64)this->fields.checkedItemBtn;
          this->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v86 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0);
            UserPresentBoxWindow__SetButtonTxtColor(v86, 0, (UnityEngine_GameObject_o *)v86, v87);
            nonPresentNoticeLabel = this->fields.nonPresentNoticeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v89 = (System_String_o **)&StringLiteral_11016/*"RECEIVE_ALL_DONE"*/;
            if ( (_DWORD)max_length )
              v89 = (System_String_o **)&StringLiteral_11017/*"RECEIVE_FILTER_NOTHING"*/;
            Instance = (__int64)LocalizationManager__Get(*v89, 0);
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
                          v90 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  while ( 1 )
  {
    if ( v79 >= LODWORD(v40->max_length) )
      goto LABEL_147;
    v80 = v40->m_Items[v79];
    if ( !v80 )
      goto LABEL_146;
    giftType = v80->fields.giftType;
    if ( giftType == 2 )
    {
      if ( !v76 )
        goto LABEL_146;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v76,
                   &entity,
                   v80->fields.objectId,
                   (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_146;
      if ( LODWORD(entity[3].klass) != 24 )
      {
LABEL_97:
        v78 = 1;
        v77 = 1;
      }
      if ( (v78 & 1) == 0 )
        goto LABEL_102;
    }
    else
    {
      v77 |= giftType == 9;
      v78 = 1;
    }
    if ( (v77 & 1) != 0 )
      break;
LABEL_102:
    if ( v74 == ++v79 )
      goto LABEL_121;
  }
  v78 = 1;
  v77 = 1;
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
  this->fields.isReceiveFlg = v78 & 1;
  if ( !Instance )
    goto LABEL_146;
  v91 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v91, v78 & 1, (UnityEngine_GameObject_o *)v91, v92);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v77 & 1;
  if ( !Instance )
    goto LABEL_146;
  v93 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v93, v77 & 1, (UnityEngine_GameObject_o *)v93, v94);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v95 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v95, 0, (UnityEngine_GameObject_o *)v95, v96);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_1C7BD40(Instance, v5);
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
        UserPresentListViewManager__CreateList((UserPresentListViewManager_o *)Instance, v40, 0);
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
  UserPresentListViewManager__CreateList((UserPresentListViewManager_o *)Instance, v40, 0);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_40793300((UserPresentListViewManager_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v90 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v90 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v97);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40989036 = TutorialFlag__Get_40989036(201, 0);
  if ( !_40989036 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_40989036, v99);
  EventTutorialMaster__CheckTutorial(0, 78, 0, 0, 0, 0, 0, 0);
}


void UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4CED371 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_callbackPresentList__);
    byte_4CED371 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_1C7BD40(0, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__SetBtnEnable(UserPresentBoxWindow_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Component_o *sortBtn; // x0
  bool v6; // w21
  const MethodInfo *v7; // x2
  bool v8; // w20

  if ( (byte_4CED396 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4CED396 = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C7BD40(sortBtn, is_enable);
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
  int m_CancellationTokenSource; // w8
  UserPresentBoxWindow_o *v7; // x19
  float v8; // s8
  unsigned int v9; // w20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CED370 & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4CED370 = 1;
  }
  if ( !btnObject )
    goto LABEL_15;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                     btnObject,
                                     (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
        sub_1C7BD48(this);
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
    sub_1C7BD40(this, isVaild);
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
  int32_t v31; // w2
  int32_t v32; // w3
  MethodInfo *v33; // x4
  const MethodInfo *v34; // x5
  int64_t v35; // x6
  System_String_o *v36; // x7
  unsigned __int64 v37; // x29
  UserPresentBoxEntity_o **m_Items; // x21
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  UserPresentBoxWindow_o *v43; // x0
  const MethodInfo *v44; // x3
  il2cpp_array_size_t v45; // x8
  __int64 v46; // x19
  UserPresentBoxEntity_o *v47; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v49; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v5 = how;
  v7 = how;
  if ( (byte_4CED392 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78758728);
    sub_1C7BAE8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED392 = 1;
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
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  checkedItemBtn = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)checkedItemBtn,
                                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_94;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  max_length = VaildList->max_length;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
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
    if ( !byte_4CED3A5 )
    {
      sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
      byte_4CED3A5 = 1;
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
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
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
    if ( !byte_4CED3A5 )
    {
      sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
      byte_4CED3A5 = 1;
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
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v26 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v49 = this;
    v27 = (ItemMaster_o *)v18;
    v28 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v29 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v30 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58975800(
      v30,
      max_length,
      (const MethodInfo_383E638 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78758728);
    if ( (int)max_length >= 1 )
    {
      v37 = 0;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v21 )
          goto LABEL_98;
        if ( v37 >= LODWORD(VaildList->max_length) )
          goto LABEL_95;
        checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckFilter(
                                                      (UserPresentBoxWindow_o *)checkedItemBtn,
                                                      (ServantMaster_o *)v26,
                                                      v27,
                                                      m_Items[v37],
                                                      v33);
        if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
        {
LABEL_98:
          if ( !v24 )
            goto LABEL_66;
          if ( v37 >= LODWORD(VaildList->max_length) )
            goto LABEL_95;
          checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckRarityFilter(
                                                        (UserPresentBoxWindow_o *)checkedItemBtn,
                                                        (ServantLimitMaster_o *)v28,
                                                        (CommandCodeMaster_o *)v29,
                                                        m_Items[v37],
                                                        v21,
                                                        v34);
          if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
          {
LABEL_66:
            if ( v37 >= LODWORD(VaildList->max_length) )
LABEL_95:
              sub_1C7BD48(checkedItemBtn);
            if ( !v30 )
              goto LABEL_94;
            *(_QWORD *)&how = m_Items[v37];
            items = v30->fields._items;
            v40 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_94;
            size = v30->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                (Il2CppObject *)how,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v42[4] = (Il2CppClass *)how;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)(v42 + 4),
                how,
                v31,
                v32,
                (System_String_o *)v33,
                (int32_t)v34,
                v35,
                v36);
            }
          }
        }
      }
      while ( (unsigned int)max_length != ++v37 );
    }
    if ( !v30
      || (checkedItemBtn = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                        v30,
                                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_94:
      sub_1C7BD40(checkedItemBtn, how);
    }
    LODWORD(max_length) = checkedItemBtn[1].klass;
    this = v49;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)v27;
  }
  if ( (int)max_length < 1 )
    return;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v43 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v43, 1, (UnityEngine_GameObject_o *)v43, v44);
  v45 = VaildList->max_length;
  if ( (int)v45 < 1 )
    return;
  v46 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v46 >= (unsigned int)v45 )
      goto LABEL_95;
    v47 = VaildList->m_Items[v46];
    if ( !v47 )
      goto LABEL_94;
    giftType = v47->fields.giftType;
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
                                                  v47->fields.objectId,
                                                  (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_94;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v45 = VaildList->max_length;
LABEL_90:
    if ( (int)++v46 >= (int)v45 )
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

  if ( (byte_4CED374 & 1) == 0 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17575/*"btn_filter_on"*/);
    sub_1C7BAE8(&StringLiteral_17574/*"btn_filter"*/);
    byte_4CED374 = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
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
  v6 = (System_String_o **)&StringLiteral_17575/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4CED3A5 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_TypeInfo);
    byte_4CED3A5 = 1;
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
    sub_1C7BD40(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v6 = (System_String_o **)&StringLiteral_17574/*"btn_filter"*/;
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

  if ( (byte_4CED397 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10771/*"PresentHistoryButton"*/);
    byte_4CED397 = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10771/*"PresentHistoryButton"*/,
                                         0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0 )
    {
      sub_1C7BD40(Component_object, v7);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, is_enable, 0);
  }
}


void UserPresentBoxWindow__SetReDispAction(
        UserPresentBoxWindow_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mReDispAct = act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mReDispAct,
    (int32_t)act,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4CED398 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10500/*"PRESENT_SELECT_INFO"*/);
    byte_4CED398 = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"PRESENT_SELECT_INFO"*/, 0);
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v16, 0);
  v7 = System_String__Format_64218220(v5, v6, (Il2CppObject *)this->fields.presentMaxSelectable, 0);
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
    sub_1C7BD40(v7, v8);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x0
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v24; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v27; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v28; // x22
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3

  if ( (byte_4CED37D & 1) == 0 )
  {
    sub_1C7BAE8(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
    byte_4CED37D = 1;
  }
  v7 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass85_0___ctor((UserPresentBoxWindow___c__DisplayClass85_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = idx;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v24 = *(int *)(v7 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v24 < max_length )
    {
      if ( (unsigned int)v24 >= max_length )
        sub_1C7BD48(v22);
      evpDialog = this->fields.evpDialog;
      v27 = evPointRewardList->m_Items[v24];
      v28 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_1C7BD34(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v28,
        (Il2CppObject *)v7,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        v29);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v27, v28, v30);
        return;
      }
LABEL_10:
      sub_1C7BD40(v8, v9);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  System_Action_o *v25; // x22

  if ( (byte_4CED37A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10487/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_44/*"\n\n"*/);
    byte_4CED37A = 1;
  }
  v5 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass82_0___ctor((UserPresentBoxWindow___c__DisplayClass82_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10487/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0);
    v24 = System_String__Concat_64215176(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v23, 0);
    v25 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v5,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0, v24, v25, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_12:
    sub_1C7BD40(v6, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
}


void UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CED37E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CED37E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
      sub_1C7BD40(v4, v5);
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

  if ( (byte_4CED3A1 & 1) == 0 )
  {
    sub_1C7BAE8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__);
    sub_1C7BAE8(&StringLiteral_12265/*"SHOW_EFFECT"*/);
    byte_4CED3A1 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0 && getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12265/*"SHOW_EFFECT"*/, 0);
      return;
    }
LABEL_14:
    sub_1C7BD40(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v8 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C7BD34(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
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
    sub_1C7BD40(0, method);
  UserPresentListViewManager__SetMode_40793300(userPresentListViewManager, 1, 0);
}


void UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_1C7BD40(0, result);
  UserPresentHistoryDialog__Open(presentHistoryDialog, 0);
}


void UserPresentBoxWindow___Open_b__69_0(UserPresentBoxWindow_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_4CED39F & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CED39F = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !stoneNumValLb )
    sub_1C7BD40(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0);
}


void UserPresentBoxWindow___callbackPresentList_b__72_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4CED3A0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CED3A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
  UserPresentBoxWindow__ReDisp(this, v5);
}


void UserPresentBoxWindow___showEffect_b__88_0(UserPresentBoxWindow_o *this, bool isDecide, const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4CED3A2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_EndEffect__);
    byte_4CED3A2 = 1;
  }
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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

  if ( (byte_4CED3A3 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1__);
    byte_4CED3A3 = 1;
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
      v7 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1C7BD34(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
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
      sub_1C7BD40(touchBlocker, v3);
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
    sub_1C7BD40(0, action);
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
    sub_1C7BD40(0, action);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x21
  System_Action_object__o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Action_object__o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  ActionChain_o *v29; // x19
  __int64 v30; // x21
  System_Action_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CED3A4 & 1) == 0 )
  {
    sub_1C7BAE8(&ActionChain_TypeInfo);
    sub_1C7BAE8(&System_Action___TypeInfo);
    sub_1C7BAE8(&System_Action_Action____TypeInfo);
    sub_1C7BAE8(&System_Action_Action__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass101_0__showReceiveResultDlg_b__4__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass101_0_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__);
    byte_4CED3A4 = 1;
  }
  v5 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass101_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass101_0___ctor((UserPresentBoxWindow___c__DisplayClass101_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 16) = isReceive;
  v14 = sub_1C7BB90(System_Action_Action____TypeInfo, 2);
  v15 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
    0);
  if ( !v14 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v14 + 32) = v15;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 32), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__,
    0);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_13;
  *(_QWORD *)(v14 + 40) = v22;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 40), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (ActionChain_o *)sub_1C7BD34(ActionChain_TypeInfo);
  ActionChain___ctor_49559852(v29, (System_Action_Action__array *)v14, 0);
  v30 = sub_1C7BB90(System_Action___TypeInfo, 1);
  v31 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass101_0__showReceiveResultDlg_b__4__,
    0);
  if ( !v30 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v30 + 24) )
LABEL_13:
    sub_1C7BD48(v6);
  *(_QWORD *)(v30 + 32) = v31;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  if ( !v29 || (v6 = ChainableActionBase__Final((ChainableActionBase_o *)v29, (System_Action_array *)v30, 0)) == 0 )
LABEL_12:
    sub_1C7BD40(v6, v7);
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

  if ( (byte_4CED372 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__);
    byte_4CED372 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
  v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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

  if ( (byte_4CED388 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    byte_4CED388 = 1;
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
        sub_1C7BD40(befSvtList, v10);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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

  if ( (byte_4CED38A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_1C7BAE8(&System_Predicate_long__TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
    byte_4CED38A = 1;
  }
  v9 = (UserPresentBoxWindow___c__DisplayClass99_0_o *)sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
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
  v13 = (System_Predicate_long__o *)sub_1C7BD34(System_Predicate_long__TypeInfo);
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
            (const MethodInfo_3827664 *)Method_System_Collections_Generic_List_long__FindIndex__);
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
    sub_1C7BD40(v10, v11);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v10,
      v11,
      *(const MethodInfo_3826E30 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UserPresentBoxWindow_o *v8; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v10; // x8

  v8 = this;
  if ( (byte_4CED387 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C7BAE8(&StringLiteral_9291/*"NEXT_SVT"*/);
    this = (UserPresentBoxWindow_o *)sub_1C7BAE8(&StringLiteral_6426/*"FINAL_SVT"*/);
    byte_4CED387 = 1;
  }
  receiveList = v8->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v8->fields.receiveIdx >= receiveList->fields._size )
  {
    v8->fields.receiveList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.receiveList, 0, v2, v3, v4, v5, v6, v7);
    this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
    v8->fields.receiveIdx = 0;
    if ( this )
    {
      v10 = &StringLiteral_6426/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C7BD40(this, method);
  }
  this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v10 = &StringLiteral_9291/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v10, 0);
}


// local variable allocation has failed, the output may be wrong!
bool UserPresentBoxWindow__checkOverlapSvt(UserPresentBoxWindow_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4CED389 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4CED389 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C7BD40(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v21; // x20

  if ( (byte_4CED386 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
    byte_4CED386 = 1;
  }
  v5 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass95_0___ctor((UserPresentBoxWindow___c__DisplayClass95_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)end_act, v14, v15, v16, v17, v18, v19);
  svtGetAction = this->fields.svtGetAction;
  v21 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v5, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtGetAction )
LABEL_8:
    sub_1C7BD40(v6, v7);
  ServantRewardAction__Play(svtGetAction, v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0);
}


void UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_4CED38B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    this = (UserPresentBoxWindow_o *)sub_1C7BAE8(&StringLiteral_9291/*"NEXT_SVT"*/);
    byte_4CED38B = 1;
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
    sub_1C7BD40(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9291/*"NEXT_SVT"*/, 0);
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

  if ( (byte_4CED399 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25513/*"}"*/);
    sub_1C7BAE8(&StringLiteral_25298/*"{0,"*/);
    byte_4CED399 = 1;
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
    sub_1C7BD40(v3, v4);
  }
  v6 = (Il2CppObject *)v3;
  v10 = v3->fields._stringLength + 2 * (stringLength - v3->fields._stringLength);
  v7 = System_Int32__ToString((int32_t)&v10, 0);
  v8 = System_String__Concat_64215176(
         (System_String_o *)StringLiteral_25298/*"{0,"*/,
         v7,
         (System_String_o *)StringLiteral_25513/*"}"*/,
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
  int v12; // w8
  System_Collections_Generic_IEnumerable_T__o *v13; // x23
  int v14; // w9
  __int64 v15; // x10
  int v16; // w10
  System_Collections_Generic_List_object__o *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x23
  const MethodInfo *v25; // x2

  if ( (byte_4CED377 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78758720);
    sub_1C7BAE8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_CallbackReceiveRequest__);
    byte_4CED377 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_27;
  Instance = UserPresentBoxMaster__getVaildList_43643080(
               (UserPresentBoxMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               presentIds,
               0);
  if ( !Instance )
    goto LABEL_27;
  v12 = *((_DWORD *)Instance + 6);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v12 == v14 )
        sub_1C7BD48(Instance);
      v15 = *((_QWORD *)Instance + v14 + 4);
      if ( !v15 )
        goto LABEL_27;
      v16 = *(_DWORD *)(v15 + 72);
      if ( v16 == 11 || v16 == 1 )
        break;
      if ( v12 == ++v14 )
        goto LABEL_22;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
      goto LABEL_22;
    }
LABEL_27:
    sub_1C7BD40(Instance, v10);
  }
LABEL_22:
  v17 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58975984(
    v17,
    v13,
    (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___78758720);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.receiveList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  this->fields.receiveIdx = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v24,
               (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_27;
  UserPresentReceiveRequest__beginRequest((UserPresentReceiveRequest_o *)Instance, presentIds, selectIdx, selectNum, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v25);
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
      sub_1C7BD40(userPresentListViewManager, method);
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

  if ( (byte_4CED37F & 1) == 0 )
  {
    sub_1C7BAE8(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_1C7BAE8(&MissionInfoMaker_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__showEffect_b__88_0__);
    byte_4CED37F = 1;
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
                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( !receiveList )
      goto LABEL_105;
    v4 = *((_DWORD *)receiveList + 18);
    v5 = (UserPresentBoxEntity_o *)receiveList;
    if ( Gift__IsServant(v4, 0) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &entity,
                              v5->fields.objectId,
                              (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
          v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v50, 0);
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
                          receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( data )
                          {
                            userSvtId = data->fields.userSvtId;
                            v36 = (CommonUI_o *)receiveList;
                            v37 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C7BD34(CombineResultEffectComponent_ClickDelegate_TypeInfo);
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
            sub_1C7BD40(receiveList, method);
          }
        }
      }
    }
    else if ( Gift__IsCommandCode(v4, 0) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &v47,
                              v5->fields.objectId,
                              (const MethodInfo_342E348 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
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
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v51, 0);
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
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
        receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4CED38C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__);
    byte_4CED38C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0);
  if ( !v7 )
LABEL_8:
    sub_1C7BD40(Instance, v4);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_4CED381 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
    byte_4CED381 = 1;
  }
  v5 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass90_0___ctor((UserPresentBoxWindow___c__DisplayClass90_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)name, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  v22 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0);
  if ( !v22 )
LABEL_9:
    sub_1C7BD40(touchBlocker, v7);
  CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_4CED382 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
    byte_4CED382 = 1;
  }
  v5 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass91_0___ctor((UserPresentBoxWindow___c__DisplayClass91_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)questRewardInfo, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  v22 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0);
  if ( !v22 )
LABEL_9:
    sub_1C7BD40(touchBlocker, v7);
  CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0);
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UserServantEntity_o *v24; // x21
  EventServantEntity_o *EventServant_43719904; // x0
  EventServantEntity_o *v26; // x22
  __int64 v27; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_String_o *JoinMessage; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 *v41; // x8
  Il2CppObject *v42; // x0
  AvalonSceneManager_c *v43; // x8
  CommonUI_o *v44; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v46; // x21
  System_String_o *Message; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_String_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  Il2CppObject *v61; // x0
  AvalonSceneManager_c *v62; // x8
  CommonUI_o *v63; // x20
  float v64; // s8
  System_Action_o *v65; // x21

  if ( (byte_4CED380 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12498/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1C7BAE8(&StringLiteral_12499/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/);
    byte_4CED380 = 1;
  }
  v15 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_0___ctor((UserPresentBoxWindow___c__DisplayClass89_0_o *)v15, 0);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)this, v18, v19, v20, v21, v22, v23);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v15 + 32),
                                (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v24 = (UserServantEntity_o *)Instance;
  EventServant_43719904 = UserServantEntity__getEventServant_43719904((UserServantEntity_o *)Instance, 1, 0);
  if ( !EventServant_43719904 || (v26 = EventServant_43719904, EventServant_43719904->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = AvalonSceneManager_TypeInfo;
      v44 = (CommonUI_o *)v42;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v43 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
      v46 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)v15,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0);
      if ( v44 )
      {
        CommonUI__maskFadeout(v44, 1, DEFAULT_FADE_TIME, v46, 0);
        return;
      }
    }
LABEL_29:
    sub_1C7BD40(Instance, v17);
  }
  v27 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_1___ctor((UserPresentBoxWindow___c__DisplayClass89_1_o *)v27, 0);
  if ( !v27 )
    goto LABEL_29;
  *(_QWORD *)(v27 + 32) = v15;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 32), v15, v28, v29, v30, v31, v32, v33);
  if ( UserServantEntity__HasStatus(v24, 64, 0) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v26, 0);
    *(_QWORD *)(v27 + 24) = JoinMessage;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 24), (int32_t)JoinMessage, v35, v36, v37, v38, v39, v40);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = &StringLiteral_12499/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v26, 0);
    *(_QWORD *)(v27 + 24) = Message;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 24), (int32_t)Message, v48, v49, v50, v51, v52, v53);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = &StringLiteral_12498/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v54 = LocalizationManager__Get((System_String_o *)*v41, 0);
  *(_QWORD *)(v27 + 16) = v54;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 16), (int32_t)v54, v55, v56, v57, v58, v59, v60);
  v61 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v62 = AvalonSceneManager_TypeInfo;
  v63 = (CommonUI_o *)v61;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v62 = AvalonSceneManager_TypeInfo;
  }
  v64 = v62->static_fields->DEFAULT_FADE_TIME;
  v65 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v65,
    (Il2CppObject *)v27,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0);
  if ( !v63 )
    goto LABEL_29;
  CommonUI__maskFadein(v63, v64, v65, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_4CED383 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__);
    sub_1C7BAE8(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
    byte_4CED383 = 1;
  }
  v5 = sub_1C7BD34(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass92_0___ctor((UserPresentBoxWindow___c__DisplayClass92_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)questRewardInfo, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  v22 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0);
  if ( !v22 )
LABEL_9:
    sub_1C7BD40(touchBlocker, v7);
  CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0);
}


void UserPresentBoxWindow_ClickDelegate___ctor(
        UserPresentBoxWindow_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB0D04;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB0CBC;
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
  if ( (byte_4CED3A6 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CED3A6 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(this, method);
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
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v14; // w9
  struct UserPresentBoxWindow_o *v15; // x8
  struct UserPresentListViewManager_o *v16; // x8
  int32_t v17; // w1

  if ( (byte_4CED3A7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED3A7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog(Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_4CED3E5 & 1) == 0 )
  {
    Instance = (CommonUI_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4CED3E5 = 1;
  }
  checkedIdList = userPresentListViewManager->fields.checkedIdList;
  if ( checkedIdList )
  {
    v14 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v14;
  }
  v15 = this->fields.__4__this;
  if ( !v15 || (v16 = v15->fields.userPresentListViewManager) == 0 )
LABEL_13:
    sub_1C7BD40(Instance, v4);
  v17 = StringLiteral_1/*""*/;
  v16->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v16->fields._expiredPresents_k__BackingField,
    v17,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4CED3A8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__);
    byte_4CED3A8 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !evpDialog )
LABEL_8:
    sub_1C7BD40(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_40746744(evpDialog, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxWindow__UpdateEventInfos(_4__this, 0), (_4__this = this->fields.__4__this) == 0) )
    sub_1C7BD40(_4__this, method);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CED3AA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__);
    byte_4CED3AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C7BD40(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v6, _9__3, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CED3A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CED3A9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C7BD40(Instance, v5);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w21
  struct UserPresentBoxWindow_o *v17; // x8
  ServantRewardAction_o *svtGetAction; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v21; // w0
  Il2CppObject v22; // q1
  int32_t v23; // w23
  int64_t v24; // x0
  Il2CppClass *v25; // x8
  int64_t v26; // x20
  struct UserPresentBoxWindow_o *v27; // x8
  struct ServantRewardAction_o *v28; // x8
  Il2CppObject *v29; // x0
  struct UserPresentBoxWindow_o *v30; // x22
  Il2CppObject *v31; // x21
  struct UserPresentBoxWindow_o *v32; // x8
  SummonAssetManager_o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct UserPresentBoxWindow_o *v40; // x8
  ServantRewardAction_o *v41; // x20
  Il2CppObject v42; // q1
  bool isNew; // w2
  int64_t v44; // x1
  bool v45; // w3
  int32_t v46; // w4
  ServantRewardAction_o *v47; // x0
  struct UserPresentBoxWindow_o *v48; // x8
  ServantRewardAction_o *v49; // x21
  void *v50; // x22
  Il2CppClass *v51; // x23
  int32_t v52; // w0
  Il2CppObject v53; // q1
  int32_t v54; // w22
  int64_t v55; // x0
  Il2CppClass *v56; // x8
  int64_t v57; // x20
  Il2CppObject v58; // q1
  Il2CppObject *v59; // x19
  System_Action_o *v60; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4CED3AB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow_EndEffect__);
    byte_4CED3AB = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    v7 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&_4__this->fields.svtGetAction, Instance, v10, v11, v12, v13, v14, v15);
    if ( this->fields.isDoEffect )
    {
      if ( v7 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_43719904((UserServantEntity_o *)v7, 1, 0);
        v16 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v16 = 6;
          else
            v16 = 14;
        }
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          svtGetAction = v17->fields.svtGetAction;
          klass = v7[5].klass;
          monitor = v7[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v66.fields.currentCryptoKey = klass;
          *(_QWORD *)&v66.fields.fakeValue = monitor;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v66, 0);
          v22 = v7[2];
          v23 = v21;
          *(Il2CppObject *)&v65.fields.currentCryptoKey = v7[1];
          *(Il2CppObject *)&v65.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v64 = v65;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v64, 0);
          v25 = v7[6].klass;
          *(_QWORD *)&v67.fields.fakeValue = v7[6].monitor;
          v26 = v24;
          *(_QWORD *)&v67.fields.currentCryptoKey = v25;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v67, 0);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v23,
              v26,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v16,
              0);
            if ( !this->fields.isNew )
              goto LABEL_53;
            v27 = this->fields.__4__this;
            if ( v27 )
            {
              v28 = v27->fields.svtGetAction;
              if ( v28 )
              {
                v28->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_53;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1C7BD40(Instance, v4);
    }
    v48 = this->fields.__4__this;
    if ( !v48 || !v7 )
      goto LABEL_55;
    v49 = v48->fields.svtGetAction;
    v51 = v7[5].klass;
    v50 = v7[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v68.fields.currentCryptoKey = v51;
    *(_QWORD *)&v68.fields.fakeValue = v50;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v68, 0);
    v53 = v7[2];
    v54 = v52;
    *(Il2CppObject *)&v65.fields.currentCryptoKey = v7[1];
    *(Il2CppObject *)&v65.fields.fakeValue = v53;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v63 = v65;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v63, 0);
    v56 = v7[6].klass;
    *(_QWORD *)&v69.fields.fakeValue = v7[6].monitor;
    v57 = v55;
    *(_QWORD *)&v69.fields.currentCryptoKey = v56;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v69, 0);
    if ( !v49 )
      goto LABEL_55;
    ServantRewardAction__Setup(v49, v54, v57, Instance, this->fields.num, 0, 0, 6, 0);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_55;
    v29 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_3430858 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v30 = this->fields.__4__this;
    v31 = v29;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v32 = this->fields.__4__this;
    if ( !v32 )
      goto LABEL_55;
    v33 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v32->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !v33 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v33, (UnityEngine_Transform_o *)Instance, 0, 0);
    if ( !v30 )
      goto LABEL_55;
    v30->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v30->fields.svtGetAction, Instance, v34, v35, v36, v37, v38, v39);
    v40 = this->fields.__4__this;
    if ( !v40 || !v31 )
      goto LABEL_55;
    v41 = v40->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v42 = v31[2];
      *(Il2CppObject *)&v65.fields.currentCryptoKey = v31[1];
      *(Il2CppObject *)&v65.fields.fakeValue = v42;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v62 = v65;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v62, 0);
      if ( !v41 )
        goto LABEL_55;
      isNew = this->fields.isNew;
      v44 = Instance;
      v45 = 1;
      v46 = 14;
      v47 = v41;
    }
    else
    {
      v58 = v31[2];
      *(Il2CppObject *)&v65.fields.currentCryptoKey = v31[1];
      *(Il2CppObject *)&v65.fields.fakeValue = v58;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v61 = v65;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v61, 0);
      if ( !v41 )
        goto LABEL_55;
      v44 = Instance;
      v46 = 6;
      v47 = v41;
      isNew = 0;
      v45 = 0;
    }
    ServantRewardAction__SetupCommandCode_37662312(v47, v44, isNew, v45, v46, 0);
  }
LABEL_53:
  v59 = (Il2CppObject *)this->fields.__4__this;
  v60 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v60, v59, Method_UserPresentBoxWindow_EndEffect__, 0);
  if ( !v59 )
    goto LABEL_55;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v59, v60, 0);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CED3AC & 1) == 0 )
  {
    sub_1C7BAE8(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__);
    byte_4CED3AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_1C7BD34(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&CS___8__locals1->fields.__9__2,
      (int32_t)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v9 )
LABEL_8:
    sub_1C7BD40(Instance, v4);
  CommonUI__OpenNotificationDialog_31485276(v9, title, message, _9__2, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CED3AD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__);
    byte_4CED3AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C7BD40(Instance, v4);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CED3AE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__);
    byte_4CED3AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C7BD40(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v6, 0, name, _9__2, 23, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CED3AF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CED3AF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C7BD40(Instance, v4);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CED3B0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__);
    byte_4CED3B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C7BD40(Instance, v4);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CED3B1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__);
    byte_4CED3B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C7BD40(Instance, v4);
  CommonUI__OpenEquipGetEffect(v6, 0, questRewardInfo, _9__2, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CED3B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CED3B2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C7BD40(Instance, v4);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CED3B3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__);
    byte_4CED3B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C7BD40(Instance, v4);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CED3B4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__);
    byte_4CED3B4 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_9:
    sub_1C7BD40(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v8, 0, questRewardInfo, _9__2, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CED3B5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CED3B5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C7BD40(Instance, v4);
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
  if ( (byte_4CED3B6 & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED3B6 = 1;
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
  UnityEngine_Object__DestroyImmediate_71870336(gameObject, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0 )
LABEL_10:
    sub_1C7BD40(this, method);
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