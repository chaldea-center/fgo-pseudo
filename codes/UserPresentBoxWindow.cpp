void UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_long__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5937356 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    byte_5937356 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.befSvtList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.befCommandCodeList,
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UserPresentBoxWindow_o *v15; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct PlayMakerFSM_o *v24; // x8
  struct GetCommandCodes_array *fsm; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct PlayMakerFSM_o *v32; // x8
  struct UserPresentBoxWindow_evPointReward_array *fsmTemplate; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct PlayMakerFSM_o *v40; // x8
  struct GetSvtCoin_array *v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct PlayMakerFSM_o *v48; // x8
  struct GetSvtCoin_array *addEventHandlers; // x1
  System_Action_o *v50; // x20
  const MethodInfo *v51; // x2

  v4 = this;
  if ( (byte_5937330 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    this = (UserPresentBoxWindow_o *)sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5937330 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    UserPresentBoxWindow__ReDisp(v4, v5);
    return;
  }
  v8 = (Il2CppObject *)System_String__Concat_75481624(
                         (System_String_o *)StringLiteral_16395/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16659/*"]"*/,
                         0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6, v7);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v8,
                                     (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_20;
  v15 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_20;
  m_CancellationTokenSource = myFsm->fields.m_CancellationTokenSource;
  v4->fields.getSvtList = (struct GetSvts_array *)m_CancellationTokenSource;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.getSvtList,
    (int32_t)m_CancellationTokenSource,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v24 = v15->fields.myFsm;
  if ( !v24 )
    goto LABEL_20;
  fsm = (struct GetCommandCodes_array *)v24->fields.fsm;
  v4->fields.getCommandCodeList = fsm;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.getCommandCodeList,
    (int32_t)fsm,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v32 = v15->fields.myFsm;
  if ( !v32 )
    goto LABEL_20;
  fsmTemplate = (struct UserPresentBoxWindow_evPointReward_array *)v32->fields.fsmTemplate;
  v4->fields.presentOverflowType = v32->fields.m_CachedPtr;
  v4->fields.evPointRewardList = fsmTemplate;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.evPointRewardList,
    (int32_t)fsmTemplate,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v40 = v15->fields.myFsm;
  if ( !v40 )
    goto LABEL_20;
  v41 = *(struct GetSvtCoin_array **)&v40->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.getSvtCoins, (int32_t)v41, v34, v35, v36, v37, v38, v39);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_21FFED4(this);
  v48 = v15->fields.myFsm;
  if ( !v48 )
LABEL_20:
    sub_21FFECC(this, result);
  addEventHandlers = (struct GetSvtCoin_array *)v48->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = addEventHandlers;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.overflowSvtCoinInfos,
    (int32_t)addEventHandlers,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v50 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v50, v51);
}


bool UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  void *Filter_50812084; // x0
  ListViewSort_o **v9; // x8
  ListViewSort_o *v10; // x19
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UserPresentBoxMaster_c *v14; // x0
  int32_t giftType; // w8
  bool v16; // w8
  bool result; // w0
  ListViewSort_o *v18; // x0
  int32_t v19; // w1
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int v21; // w8

  if ( (byte_593732D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&UserPresentBoxMaster_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_593732D = 1;
  }
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, servantMaster, itemMaster);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  Filter_50812084 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, servantMaster, itemMaster);
    Filter_50812084 = UserPresentListViewManager_TypeInfo;
  }
  v9 = (ListViewSort_o **)*((_QWORD *)Filter_50812084 + 23);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_62;
  Filter_50812084 = (void *)ListViewSort__GetFilter_50812084(*v9, 13, 0);
  if ( ((unsigned __int8)Filter_50812084 & 1) != 0 )
  {
    Filter_50812084 = UserPresentBoxMaster_TypeInfo;
    if ( !*(&UserPresentBoxMaster_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, servantMaster, v11);
    if ( !userPresentBoxEntity )
      goto LABEL_62;
    if ( UserPresentBoxEntity__IsEnableFlag(
           userPresentBoxEntity,
           UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
           0) )
    {
      return 1;
    }
    v14 = UserPresentBoxMaster_TypeInfo;
    if ( !*(&UserPresentBoxMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, v12, v13);
      v14 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_50812084 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v14->static_fields->IMPORTANT_FOR_LIMIT,
                                0);
    if ( ((unsigned __int8)Filter_50812084 & 1) != 0 )
      return 1;
  }
  else if ( !userPresentBoxEntity )
  {
    goto LABEL_62;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( giftType > 5 )
  {
    if ( (unsigned int)(giftType - 6) < 2 )
      goto LABEL_22;
    if ( giftType == 11 )
    {
      v18 = v10;
      v19 = 5;
      return ListViewSort__GetFilter_50812084(v18, v19, 0);
    }
    goto LABEL_49;
  }
  if ( giftType != 1 )
  {
    if ( giftType == 2 )
    {
      if ( itemMaster )
      {
        Filter_50812084 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Filter_50812084 )
        {
          switch ( *((_DWORD *)Filter_50812084 + 12) )
          {
            case 2:
            case 0x11:
            case 0x14:
            case 0x24:
              v18 = v10;
              v19 = 10;
              break;
            case 3:
            case 4:
              v18 = v10;
              v19 = 6;
              break;
            case 5:
              v18 = v10;
              v19 = 11;
              break;
            case 9:
              v18 = v10;
              v19 = 8;
              break;
            case 0xA:
            case 0xB:
            case 0xC:
            case 0x19:
            case 0x1D:
              v18 = v10;
              v19 = 7;
              break;
            case 0xE:
            case 0xF:
            case 0x12:
            case 0x13:
            case 0x1C:
              v18 = v10;
              v19 = 12;
              break;
            case 0x18:
              v18 = v10;
              v19 = 9;
              break;
            default:
              goto LABEL_49;
          }
          return ListViewSort__GetFilter_50812084(v18, v19, 0);
        }
      }
LABEL_62:
      sub_21FFECC(Filter_50812084, servantMaster);
    }
LABEL_49:
    v18 = v10;
    v19 = 14;
    return ListViewSort__GetFilter_50812084(v18, v19, 0);
  }
  Filter_50812084 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, servantMaster, v11);
    Filter_50812084 = BalanceConfig_TypeInfo;
  }
  PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_50812084 + 23) + 704LL);
  if ( PresentBoxFilterSvtEquipMaterial )
  {
    if ( !*((_DWORD *)Filter_50812084 + 57) )
    {
      j_il2cpp_runtime_class_init_0(Filter_50812084, servantMaster, v11);
      PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
    }
    Filter_50812084 = (void *)System_Array__IndexOf_int_(
                                PresentBoxFilterSvtEquipMaterial,
                                userPresentBoxEntity->fields.objectId,
                                (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
    if ( ((unsigned int)Filter_50812084 & 0x80000000) == 0 )
      return ListViewSort__GetFilter_50812084(v10, 4, 0);
  }
  if ( !servantMaster )
    goto LABEL_62;
  Filter_50812084 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Filter_50812084 )
    goto LABEL_62;
  v21 = *((_DWORD *)Filter_50812084 + 21);
  if ( v21 > 6 )
  {
    if ( v21 == 7 )
    {
      v18 = v10;
      v19 = 2;
      return ListViewSort__GetFilter_50812084(v18, v19, 0);
    }
    if ( v21 == 8 )
    {
      v18 = v10;
      v19 = 4;
      return ListViewSort__GetFilter_50812084(v18, v19, 0);
    }
    if ( v21 != 12 )
      goto LABEL_49;
  }
  else if ( v21 != 1 )
  {
    if ( v21 != 3 )
    {
      if ( v21 == 6 )
      {
        v18 = v10;
        v19 = 3;
        return ListViewSort__GetFilter_50812084(v18, v19, 0);
      }
      goto LABEL_49;
    }
    v18 = v10;
    v19 = 1;
    return ListViewSort__GetFilter_50812084(v18, v19, 0);
  }
LABEL_22:
  v16 = ListViewSort__GetFilter_50812084(v10, 0, 0);
  result = 0;
  if ( v16 )
    return 1;
  return result;
}


bool UserPresentBoxWindow__CheckRarityFilter(
        UserPresentBoxWindow_o *this,
        ServantLimitMaster_o *servantLimitMaster,
        CommandCodeMaster_o *commandCodeMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        bool isActiveFilterCategory,
        const MethodInfo *method)
{
  void *Filter_50812084; // x0
  ListViewSort_o **v11; // x8
  ListViewSort_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  UserPresentBoxMaster_c *v15; // x0
  int32_t giftType; // w8
  int *v17; // x8
  int v18; // w8
  ListViewSort_o *v19; // x0
  int32_t v20; // w1
  bool Filter_50812132; // w8
  bool result; // w0

  if ( (byte_593732E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&UserPresentBoxMaster_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_593732E = 1;
  }
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, servantLimitMaster, commandCodeMaster);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  Filter_50812084 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, servantLimitMaster, commandCodeMaster);
    Filter_50812084 = UserPresentListViewManager_TypeInfo;
  }
  v11 = (ListViewSort_o **)*((_QWORD *)Filter_50812084 + 23);
  v12 = *v11;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v12 )
    goto LABEL_55;
  Filter_50812084 = (void *)ListViewSort__GetFilter_50812084(*v11, 13, 0);
  if ( ((unsigned __int8)Filter_50812084 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_55;
  }
  else
  {
LABEL_12:
    Filter_50812084 = UserPresentBoxMaster_TypeInfo;
    if ( !*(&UserPresentBoxMaster_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, servantLimitMaster, commandCodeMaster);
    if ( !userPresentBoxEntity )
      goto LABEL_55;
    if ( UserPresentBoxEntity__IsEnableFlag(
           userPresentBoxEntity,
           UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
           0) )
    {
      return 1;
    }
    v15 = UserPresentBoxMaster_TypeInfo;
    if ( !*(&UserPresentBoxMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, v13, v14);
      v15 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_50812084 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v15->static_fields->IMPORTANT_FOR_LIMIT,
                                0);
    if ( ((unsigned __int8)Filter_50812084 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( !servantLimitMaster )
      goto LABEL_55;
    Filter_50812084 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0);
    if ( !Filter_50812084 )
      return 1;
    v17 = (int *)((char *)Filter_50812084 + 24);
    goto LABEL_30;
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_55;
  Filter_50812084 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_50812084 )
    return 1;
  v17 = (int *)((char *)Filter_50812084 + 64);
LABEL_30:
  v18 = *v17;
  if ( v18 > 2 )
  {
    switch ( v18 )
    {
      case 3:
        if ( !v12 )
          goto LABEL_55;
        v19 = v12;
        v20 = 2;
        break;
      case 4:
        if ( !v12 )
          goto LABEL_55;
        v19 = v12;
        v20 = 3;
        break;
      case 5:
        if ( !v12 )
          goto LABEL_55;
        v19 = v12;
        v20 = 4;
        break;
      default:
        return 1;
    }
    return ListViewSort__GetFilter_50812132(v19, v20, 0);
  }
  if ( !v18 )
  {
    if ( v12 )
      return ListViewSort__CheckPresentBoxRarityFilterAll(v12, 0)
          || ListViewSort__UnCheckPresentBoxRarityFilterAll(v12, 0);
    goto LABEL_55;
  }
  if ( v18 != 1 )
  {
    if ( v18 == 2 )
    {
      if ( v12 )
      {
        v19 = v12;
        v20 = 1;
        return ListViewSort__GetFilter_50812132(v19, v20, 0);
      }
LABEL_55:
      sub_21FFECC(Filter_50812084, servantLimitMaster);
    }
    return 1;
  }
  if ( !v12 )
    goto LABEL_55;
  Filter_50812132 = ListViewSort__GetFilter_50812132(v12, 0, 0);
  result = 0;
  if ( Filter_50812132 )
    return 1;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o **v14; // x22
  int32_t receiveIdx; // w1
  _DWORD *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_5937345 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
    byte_5937345 = 1;
  }
  v5 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  v14 = (System_Action_o **)(v5 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v16 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
    sub_21FFECC(receiveList, v7);
  }
  if ( *v14 )
    ActionExtensions__Call(*v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__ClickFilterEnd(UserPresentBoxWindow_o *this, bool result, const MethodInfo *method)
{
  UserPresentListViewManager_c *v5; // x0
  struct PresentBoxFilterSelectMenu_o *sortInfo; // x0
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v9; // w9

  if ( (byte_5937355 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_5937355 = 1;
  }
  if ( result )
  {
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, result, method);
    if ( !byte_59373DE )
    {
      sub_21FFC50(&UserPresentListViewManager_TypeInfo);
      byte_59373DE = 1;
    }
    v5 = UserPresentListViewManager_TypeInfo;
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, result, method);
      v5 = UserPresentListViewManager_TypeInfo;
    }
    sortInfo = (struct PresentBoxFilterSelectMenu_o *)v5->static_fields->sortInfo;
    if ( !sortInfo
      || (ListViewSort__Save((ListViewSort_o *)sortInfo, 0),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
LABEL_19:
      sub_21FFECC(sortInfo, result);
    }
    if ( (byte_593739B & 1) == 0 )
    {
      sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
      byte_593739B = 1;
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
  PresentBoxFilterSelectMenu__Close(sortInfo, 0);
}


void UserPresentBoxWindow__Close(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_593734B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593734B = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( ((unsigned __int8)userPresentListViewManager & 1) != 0 )
  {
    if ( !mInstance )
      goto LABEL_17;
    TerminalSceneComponent__UpdateQuestBoardList((TerminalSceneComponent_o *)mInstance, 0);
  }
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__DestroyList(userPresentListViewManager, v7),
        (userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0)) == 0) )
  {
LABEL_17:
    sub_21FFECC(userPresentListViewManager, v7);
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

  if ( (byte_593733C & 1) == 0 )
  {
    sub_21FFC50(&QuestRewardInfo_TypeInfo);
    byte_593733C = 1;
  }
  v4 = sub_21FFEBC(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v4, 0);
  if ( !userPresentBox || !v4 )
    sub_21FFECC(v5, v6);
  result = (QuestRewardInfo_o *)v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v4 + 24) = userPresentBox->fields.num;
  return result;
}


void UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593733D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5630/*"END_EFFECT"*/);
    byte_593733D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5630/*"END_EFFECT"*/, 0);
}


void UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5937346 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3634/*"CLOSE"*/);
    byte_5937346 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3634/*"CLOSE"*/, 0);
}


void UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_5937333 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_EndReceive__);
    byte_5937333 = 1;
  }
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndReceive__, 0);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


void UserPresentBoxWindow__EventPointRewardWithSvtGet(UserPresentBoxWindow_o *this, bool res, const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_5937334 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_EndEffectReceive__);
    byte_5937334 = 1;
  }
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


bool UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19
  Il2CppObject *current; // x23
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5937331 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937331 = 1;
  }
  receiveList = this->fields.receiveList;
  memset(&v12, 0, sizeof(v12));
  if ( !receiveList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v12 = v11;
  v11.fields._list = 0;
  *(_QWORD *)&v11.fields._index = &v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_21FFECC(v4, v5);
    if ( Gift__IsCostumeRelease((int32_t)v12.fields._current[4].monitor, 0)
      || Gift__IsEquip((int32_t)current[4].monitor, 0) )
    {
      break;
    }
    if ( Gift__IsItem((int32_t)current[4].monitor, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_21FFECC(0, v9);
      if ( CommonUI__IsGetItemEffect((CommonUI_o *)Instance, HIDWORD(current[4].monitor), 0) )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return v6;
}


void UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  System_Action_o *v10; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x4
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_5937347 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_OnClickAll__);
    sub_21FFC50(&Method_UserPresentBoxWindow_ProcessClickAll__);
    sub_21FFC50(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__);
    byte_5937347 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickAll__;
  if ( this->fields.isReceiveFlg )
  {
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxWindow_OnClickAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_13;
    UserPresentListViewManager__SetMode_47123484(userPresentListViewManager, 2, v6);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, v5),
          v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0),
          v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0),
          !presentDialog) )
    {
LABEL_13:
      sub_21FFECC(userPresentListViewManager, v5);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v10, v11, v12);
  }
  else
  {
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxWindow_OnClickAll__);
    v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
  }
}


void UserPresentBoxWindow__OnClickBack(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct UserPresentBoxWindow_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_593734C & 1) == 0 )
  {
    sub_21FFC50(&Method_UserPresentBoxWindow_OnClickBack__);
    byte_593734C = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxWindow_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  _BYTE *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_5937349 & 1) == 0 )
  {
    sub_21FFC50(&Method_UserPresentBoxWindow_OnClickCheckedItem__);
    byte_5937349 = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    v3 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    this->fields.mIsScrlResetPosition = 1;
    if ( (v3[83] & 2) != 0 )
      v3 = (_BYTE *)sub_21FFC68(v3);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, *((_QWORD *)v3 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, v6),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
      sub_21FFECC(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_47123484(userPresentListViewManager, 2, v8);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v9);
  }
  else
  {
    v10 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
  }
}


void UserPresentBoxWindow__OnClickFilter(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *presentBoxFilterSelectMenu; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *presentBoxFilterKindSelectMenuPrefab; // x20
  Il2CppObject *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  PresentBoxFilterSelectMenu_o *v22; // x20
  UserPresentListViewManager_c *v23; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v25; // x22

  if ( (byte_5937354 & 1) == 0 )
  {
    sub_21FFC50(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_ClickFilterEnd__);
    sub_21FFC50(&Method_UserPresentBoxWindow_OnClickFilter__);
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_5937354 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxWindow_OnClickFilter__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  presentBoxFilterSelectMenu = (UnityEngine_Object_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(presentBoxFilterSelectMenu, 0, 0) )
  {
    presentBoxFilterKindSelectMenuPrefab = (Il2CppObject *)this->fields.presentBoxFilterKindSelectMenuPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    v11 = UnityEngine_Object__Instantiate_object_(
            presentBoxFilterKindSelectMenuPrefab,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v11, gameObject, 0);
    if ( !v11 )
LABEL_20:
      sub_21FFECC(v13, v14);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v11,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    this->fields.presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.presentBoxFilterSelectMenu,
      (int32_t)Component_object,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = this->fields.presentBoxFilterSelectMenu;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v8, v9);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  v23 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v8, v9);
    v23 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v23->static_fields->sortInfo;
  v25 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0);
  if ( !v22 )
    goto LABEL_20;
  PresentBoxFilterSelectMenu__Open(v22, sortInfo, v25, 0);
}


void UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  UserPresentBoxWindow_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5937352 & 1) == 0 )
  {
    sub_21FFC50(&Method_UserPresentBoxWindow_OnClickHelp__);
    byte_5937352 = 1;
  }
  v2 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxWindow_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  UserPresentBoxWindow__OpenHelp(v4, v5);
}


void UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _BYTE *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_5937348 & 1) == 0 )
  {
    sub_21FFC50(&Method_UserPresentBoxWindow_OnClickItem__);
    byte_5937348 = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    v3 = Method_UserPresentBoxWindow_OnClickItem__;
    this->fields.mIsScrlResetPosition = 1;
    if ( (v3[83] & 2) != 0 )
      v3 = (_BYTE *)sub_21FFC68(v3);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, *((_QWORD *)v3 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, v6),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
    {
      sub_21FFECC(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_47123484(userPresentListViewManager, 2, v8);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v9);
  }
  else
  {
    v10 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxWindow_OnClickItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
  }
}


void UserPresentBoxWindow__OnClickPresentHistoryButton(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_593734D & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
    sub_21FFC50(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__);
    byte_593734D = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v9);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v5; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5937326 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937326 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v5 = (UnityEngine_Object_o *)titleInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_21FFECC(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_titleInfo = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_titleInfo, 0, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v17; // x3
  UserPresentBoxWindow_o *v18; // x0
  const MethodInfo *v19; // x3
  UserPresentBoxWindow_o *v20; // x0
  const MethodInfo *v21; // x3
  UserPresentBoxWindow_o *v22; // x0
  const MethodInfo *v23; // x1
  struct System_String_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *titlePrefab; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  TitleInfoControl_o *v46; // x22
  TitleInfoControl_o *v47; // x21
  System_Action_o *v48; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v50; // x21
  System_Action_int__o *v51; // x22
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  const MethodInfo *v60; // x2
  bool v61; // w20
  const MethodInfo *v62; // x2

  if ( (byte_5937327 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_OnClickBack__);
    sub_21FFC50(&Method_UserPresentBoxWindow__Open_b__69_0__);
    sub_21FFC50(&StringLiteral_5615/*"ENABLE_PRESENT_HISTORY"*/);
    byte_5937327 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.gotServant = 0;
  this->fields.mIsScrlResetPosition = 1;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0);
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.presentMaxSelectable,
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0, 0) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
    bgObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             titlePrefab,
                                             (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.titleInfo,
        (int32_t)Component_object,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v46 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( v46 )
      {
        TitleInfoControl__SetParent(v46, (UnityEngine_Transform_o *)bgObject, 0);
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
              TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgObject, 0, 1, 0, 46, 0);
              bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
              if ( *p_titleInfo )
              {
                TitleInfoControl__changeTitleInfo_46824800((TitleInfoControl_o *)bgObject, 1, 46, 0, 0);
                v47 = this->fields.titleInfo;
                v48 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(v48, (Il2CppObject *)this, (intptr_t)Method_UserPresentBoxWindow_OnClickBack__, 0);
                if ( v47 )
                {
                  TitleInfoControl__SetBackBtnAct(v47, v48, 0);
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_21FFECC(bgObject, isShowBg);
  }
LABEL_20:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36, v37);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0);
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v51 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v51, (Il2CppObject *)this, Method_UserPresentBoxWindow__Open_b__69_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(v50, v51, 1, 0);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_28;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, (const MethodInfo *)isShowBg);
  UserPresentBoxWindow__SetFilterButtonImage(this, v52);
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
  UserPresentBoxWindow__RequestPresentList(this, v53);
  this->fields.mReDispAct = redisp_act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mReDispAct,
    (int32_t)redisp_act,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v60);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5615/*"ENABLE_PRESENT_HISTORY"*/, 0);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_28;
  v61 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v61, v62);
}


void UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  TutorialFlag_ImageId_array *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5937353 & 1) == 0 )
  {
    sub_21FFC50(&TutorialFlag_ImageId___TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E);
    byte_5937353 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (System_Array_o *)sub_21FFD10(TutorialFlag_ImageId___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v5 = (TutorialFlag_ImageId_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v3, v4, 0);
  if ( !Instance )
    sub_21FFECC(v6, v7);
  CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v5, 201, 0, 0, 0, 0);
}


void UserPresentBoxWindow__ProcessClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  userPresentListViewManager = this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 1;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 1, v2),
        (userPresentListViewManager = this->fields.userPresentListViewManager) == 0) )
  {
    sub_21FFECC(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_47123484(userPresentListViewManager, 2, v5);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v6);
}


void UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  Il2CppObject *v5; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UserCommandCodeMaster_o *v13; // x21
  int32_t Count; // w0
  __int64 v15; // x1
  __int64 v16; // x2
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
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x21
  BalanceConfig_c *v31; // x0
  Il2CppObject *v32; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v37; // x22
  Il2CppObject *v38; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v40; // x22
  Il2CppObject *v41; // x0
  __int64 v42; // x2
  UserPresentBoxEntity_array *v43; // x20
  BalanceConfig_c *v44; // x0
  il2cpp_array_size_t max_length; // x27
  UILabel_o *presentInfoLabel; // x22
  int32_t PresentBoxMax; // w19
  System_String_o *v48; // x23
  Il2CppObject *v49; // x24
  Il2CppObject *v50; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v52; // x23
  Il2CppObject *v53; // x0
  __int64 v54; // x2
  UserPresentListViewManager_c *v55; // x0
  __int64 v56; // x2
  _BOOL4 v57; // w29
  UserPresentListViewManager_c *v58; // x0
  UserPresentListViewManager_c *v59; // x0
  __int64 v60; // x2
  int32_t v61; // w19
  _BOOL4 v62; // w27
  UserPresentListViewManager_c *v63; // x0
  Il2CppObject *v64; // x22
  Il2CppObject *v65; // x23
  Il2CppObject *v66; // x24
  Il2CppObject *v67; // x25
  System_Collections_Generic_List_object__o *v68; // x26
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  const MethodInfo *v71; // x4
  const MethodInfo *v72; // x5
  bool v73; // w6
  bool v74; // w7
  unsigned __int64 v75; // x28
  UserPresentBoxEntity_o **m_Items; // x21
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  int v81; // w25
  const MethodInfo *v82; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x21
  __int64 v84; // x24
  char v85; // w22
  char v86; // w23
  UserPresentBoxEntity_o *v87; // x8
  int32_t giftType; // w9
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v90; // x3
  UserPresentBoxWindow_o *v91; // x0
  const MethodInfo *v92; // x3
  UserPresentBoxWindow_o *v93; // x0
  const MethodInfo *v94; // x3
  __int64 v95; // x1
  __int64 v96; // x2
  UILabel_o *nonPresentNoticeLabel; // x20
  System_String_o **v98; // x8
  __int64 v99; // x8
  UserPresentBoxWindow_o *v100; // x0
  const MethodInfo *v101; // x3
  UserPresentBoxWindow_o *v102; // x0
  const MethodInfo *v103; // x3
  UserPresentBoxWindow_o *v104; // x0
  const MethodInfo *v105; // x3
  const MethodInfo *v106; // x2
  const MethodInfo *v107; // x2
  const MethodInfo *v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  _BOOL8 _47357952; // x0
  const MethodInfo *v112; // x1
  const MethodInfo *v113; // x2
  UserPresentBoxWindow_o *v114; // [xsp+8h] [xbp-C8h]
  int32_t v115; // [xsp+18h] [xbp-B8h] BYREF
  int32_t v116; // [xsp+1Ch] [xbp-B4h] BYREF
  int v117; // [xsp+20h] [xbp-B0h] BYREF
  int32_t FriendPoint; // [xsp+24h] [xbp-ACh] BYREF
  int64_t qp; // [xsp+28h] [xbp-A8h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int32_t v121; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int32_t v123; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int32_t v125; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_593732B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___91444336);
    sub_21FFC50(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10877/*"PRESENT_LIST_INFO"*/);
    sub_21FFC50(&StringLiteral_11431/*"RECEIVE_FILTER_NOTHING"*/);
    sub_21FFC50(&StringLiteral_11430/*"RECEIVE_ALL_DONE"*/);
    sub_21FFC50(&StringLiteral_4076/*"CURRENT_QP_UNIT"*/);
    sub_21FFC50(&StringLiteral_10878/*"PRESENT_LIST_NOTICE"*/);
    sub_21FFC50(&StringLiteral_4074/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_593732B = 1;
  }
  entity = 0;
  *(_QWORD *)servantEquipSum = 0;
  scroll.fields.z = 0.0;
  offset = 0;
  *(_QWORD *)&scroll.fields.x = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !this->fields.userServantMaster )
    goto LABEL_146;
  v13 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(this->fields.userServantMaster, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !v13 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v13, 0);
  svtNumValLb = this->fields.svtNumValLb;
  v18 = Count;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  v125 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(qword_594C070, &v125);
  if ( !SelfUserGame )
    goto LABEL_146;
  v20 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
  Instance = (__int64)System_String__Format_75484576(v19, v20, v21, 0);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  v123 = servantEquipSum[0];
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v123);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtEquipKeep);
  Instance = (__int64)System_String__Format_75484576(v23, v24, v25, 0);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  v121 = v18;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v121);
  if ( !byte_59324C8 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_59324C8 = 1;
  }
  v31 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28, v29);
    v31 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v31->static_fields->CommandCodeFrameMax;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &CommandCodeFrameMax);
  Instance = (__int64)System_String__Format_75484576(v27, v30, v32, 0);
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
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_4076/*"CURRENT_QP_UNIT"*/, 0);
  qp = SelfUserGame->fields.qp;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &qp);
  Instance = (__int64)System_String__Format(v37, v38, 0);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0);
  fpNumValLb = this->fields.fpNumValLb;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_4074/*"CURRENT_FRIEND_POINT_UNIT"*/, 0);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0);
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &FriendPoint);
  Instance = (__int64)System_String__Format(v40, v41, 0);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        0);
  if ( !Instance )
    goto LABEL_146;
  v43 = (UserPresentBoxEntity_array *)Instance;
  v44 = BalanceConfig_TypeInfo;
  max_length = v43->max_length;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v42);
    v44 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = this->fields.presentInfoLabel;
  PresentBoxMax = v44->static_fields->PresentBoxMax;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10877/*"PRESENT_LIST_INFO"*/, 0);
  v117 = max_length;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v117);
  v116 = PresentBoxMax;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v116);
  Instance = (__int64)System_String__Format_75484576(v48, v49, v50, 0);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10878/*"PRESENT_LIST_NOTICE"*/, 0);
  v115 = PresentBoxMax;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v115);
  Instance = (__int64)System_String__Format(v52, v53, 0);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0);
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v5, v54);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  v55 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v5, v54);
    v55 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v55->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0) )
  {
    v57 = 0;
  }
  else
  {
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v5, v56);
    if ( !byte_59373DE )
    {
      sub_21FFC50(&UserPresentListViewManager_TypeInfo);
      byte_59373DE = 1;
    }
    v58 = UserPresentListViewManager_TypeInfo;
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v5, v56);
      v58 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v58->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v57 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0);
  }
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v5, v56);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  v59 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v5, v56);
    v59 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v59->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0) )
  {
    v61 = max_length;
    v62 = 0;
  }
  else
  {
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v5, v60);
    if ( !byte_59373DE )
    {
      sub_21FFC50(&UserPresentListViewManager_TypeInfo);
      byte_59373DE = 1;
    }
    v63 = UserPresentListViewManager_TypeInfo;
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, v5, v60);
      v63 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v63->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v61 = max_length;
    v62 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0);
  }
  if ( v57 || v62 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v64 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v65 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v114 = this;
    v66 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v67 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v68 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627580(
      v68,
      v61,
      (const MethodInfo_444F33C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___91444336);
    if ( v61 >= 1 )
    {
      v75 = 0;
      m_Items = v43->m_Items;
      do
      {
        if ( !v57 )
          goto LABEL_150;
        if ( v75 >= LODWORD(v43->max_length) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v64,
                     (ItemMaster_o *)v65,
                     m_Items[v75],
                     v71);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v62 )
            goto LABEL_76;
          if ( v75 >= LODWORD(v43->max_length) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v66,
                       (CommandCodeMaster_o *)v67,
                       m_Items[v75],
                       v57,
                       v72);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v75 >= LODWORD(v43->max_length) )
LABEL_147:
              sub_21FFED4(Instance);
            if ( !v68 )
              goto LABEL_146;
            items = v68->fields._items;
            v5 = (Il2CppObject *)m_Items[v75];
            v78 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v68->fields._version;
            if ( !items )
              goto LABEL_146;
            size = v68->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v68,
                v5,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
            }
            else
            {
              v80 = &items->obj.klass + size;
              v68->fields._size = size + 1;
              v80[4] = (Il2CppClass *)v5;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v80 + 4),
                (int32_t)v5,
                v69,
                v70,
                (int32_t)v71,
                (int32_t)v72,
                v73,
                v74);
            }
          }
        }
      }
      while ( v61 != ++v75 );
    }
    if ( !v68 )
      goto LABEL_146;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v68,
                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v114;
    if ( !Instance )
      goto LABEL_146;
    v81 = *(_DWORD *)(Instance + 24);
    v43 = (UserPresentBoxEntity_array *)Instance;
  }
  else
  {
    v81 = v61;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, (const MethodInfo *)v5);
  UserPresentBoxWindow__SetSelectCount(this, 0, v82);
  if ( v81 < 1 )
  {
    Instance = (__int64)this->fields.userPresentListViewManager;
    if ( Instance )
    {
      UserPresentListViewManager__DestroyList((UserPresentListViewManager_o *)Instance, (const MethodInfo *)v5);
      Instance = (__int64)this->fields.allReceiveBtn;
      this->fields.isReceiveFlg = 0;
      if ( Instance )
      {
        gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0);
        UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v90);
        Instance = (__int64)this->fields.itemReceiveBtn;
        this->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v91 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          UserPresentBoxWindow__SetButtonTxtColor(v91, 0, (UnityEngine_GameObject_o *)v91, v92);
          Instance = (__int64)this->fields.checkedItemBtn;
          this->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v93 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0);
            UserPresentBoxWindow__SetButtonTxtColor(v93, 0, (UnityEngine_GameObject_o *)v93, v94);
            nonPresentNoticeLabel = this->fields.nonPresentNoticeLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95, v96);
            v98 = (System_String_o **)&StringLiteral_11430/*"RECEIVE_ALL_DONE"*/;
            if ( v61 )
              v98 = (System_String_o **)&StringLiteral_11431/*"RECEIVE_FILTER_NOTHING"*/;
            Instance = (__int64)LocalizationManager__Get(*v98, 0);
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
                          v99 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v84 >= LODWORD(v43->max_length) )
      goto LABEL_147;
    v87 = v43->m_Items[v84];
    if ( !v87 )
      goto LABEL_146;
    giftType = v87->fields.giftType;
    if ( giftType == 2 )
    {
      if ( !v83 )
        goto LABEL_146;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v83,
                   &entity,
                   v87->fields.objectId,
                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_146;
      if ( LODWORD(entity[3].klass) != 24 )
      {
LABEL_97:
        v86 = 1;
        v85 = 1;
      }
      if ( (v86 & 1) == 0 )
        goto LABEL_102;
    }
    else
    {
      v86 = 1;
      v85 |= giftType == 9;
    }
    if ( (v85 & 1) != 0 )
      break;
LABEL_102:
    if ( v81 == (_DWORD)++v84 )
      goto LABEL_121;
  }
  v86 = 1;
  v85 = 1;
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
  this->fields.isReceiveFlg = v86 & 1;
  if ( !Instance )
    goto LABEL_146;
  v100 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v100, v86 & 1, (UnityEngine_GameObject_o *)v100, v101);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v85 & 1;
  if ( !Instance )
    goto LABEL_146;
  v102 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v102, v85 & 1, (UnityEngine_GameObject_o *)v102, v103);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v104 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v104, 0, (UnityEngine_GameObject_o *)v104, v105);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_21FFECC(Instance, v5);
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0) >= 3 )
  {
    Instance = (__int64)this->fields.userPresentListViewManager;
    scroll.fields.z = 0.0;
    offset = 0;
    *(_QWORD *)&scroll.fields.x = 0;
    if ( Instance )
    {
      ListViewManager__GetScrollView((ListViewManager_o *)Instance, &scroll, &offset, 0);
      Instance = (__int64)this->fields.userPresentListViewManager;
      if ( Instance )
      {
        UserPresentListViewManager__CreateList((UserPresentListViewManager_o *)Instance, v43, v113);
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
  UserPresentListViewManager__CreateList((UserPresentListViewManager_o *)Instance, v43, v106);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_47123484((UserPresentListViewManager_o *)Instance, 1, v107);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v99 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v99 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v108);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v109, v110);
  _47357952 = TutorialFlag__Get_47357952(201, 0);
  if ( !_47357952 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_47357952, v112);
  EventTutorialMaster__CheckTutorial(0, 78, 0, 0, 0, 0, 0, 0);
}


void UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_5937329 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_callbackPresentList__);
    byte_5937329 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow__SetBtnEnable(UserPresentBoxWindow_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Component_o *sortBtn; // x0
  const MethodInfo *v6; // x2

  if ( (byte_593734E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_593734E = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0),
        (sortBtn = (UnityEngine_Component_o *)this->fields.titleInfo) == 0)
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)sortBtn, is_enable, 0),
        UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, is_enable, v6),
        (sortBtn = (UnityEngine_Component_o *)this->fields.helpBtn) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0),
        (sortBtn = (UnityEngine_Component_o *)this->fields.filterBtn) == 0) )
  {
LABEL_19:
    sub_21FFECC(sortBtn, is_enable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0);
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
  __int64 v9; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937328 & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_5937328 = 1;
  }
  if ( !btnObject )
    goto LABEL_14;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                     btnObject,
                                     (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !this )
    goto LABEL_14;
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
      if ( (unsigned int)v9 >= m_CancellationTokenSource )
        sub_21FFED4(this);
      this = (UserPresentBoxWindow_o *)*((_QWORD *)&v7->fields.myFsm + v9);
      if ( !this )
        break;
      v10.fields.r = v8;
      v10.fields.g = v8;
      v10.fields.b = v8;
      v10.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v10, 0);
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
      if ( (int)++v9 >= m_CancellationTokenSource )
        return;
    }
LABEL_14:
    sub_21FFECC(this, isVaild);
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
  __int64 v15; // x2
  Il2CppObject *MasterData_object; // x20
  UserPresentBoxEntity_array *VaildList; // x20
  __int64 v18; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x29
  il2cpp_array_size_t max_length; // x19
  UserPresentListViewManager_c *v21; // x0
  __int64 v22; // x2
  _BOOL4 v23; // w27
  UserPresentListViewManager_c *v24; // x0
  UserPresentListViewManager_c *v25; // x0
  __int64 v26; // x2
  _BOOL4 v27; // w28
  UserPresentListViewManager_c *v28; // x0
  Il2CppObject *v29; // x23
  ItemMaster_o *v30; // x22
  Il2CppObject *v31; // x24
  Il2CppObject *v32; // x25
  System_Collections_Generic_List_object__o *v33; // x26
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x5
  bool v38; // w6
  bool v39; // w7
  unsigned __int64 v40; // x29
  __int64 v41; // x21
  UserPresentBoxEntity_o **m_Items; // x19
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  UserPresentBoxWindow_o *v47; // x0
  const MethodInfo *v48; // x3
  il2cpp_array_size_t v49; // x8
  __int64 v50; // x19
  UserPresentBoxEntity_o *v51; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v53; // x0
  const MethodInfo *v54; // x3
  UserPresentBoxWindow_o *v55; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v5 = how;
  v7 = how;
  if ( (byte_593734A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___91444336);
    sub_21FFC50(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_593734A = 1;
  }
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  entity = 0;
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
        UserPresentBoxWindow__SetButtonTxtColor(v13, 0, (UnityEngine_GameObject_o *)v13, v14);
        return;
      }
    }
    goto LABEL_94;
  }
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, how, v15);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  checkedItemBtn = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, how, v15);
    checkedItemBtn = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_94;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)MasterData_object,
                *(_QWORD *)(checkedItemBtn[7].fields.m_CachedPtr + 64),
                0);
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  checkedItemBtn = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)checkedItemBtn,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_94;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  max_length = VaildList->max_length;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how, v18);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  v21 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how, v18);
    v21 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (UnityEngine_Component_o *)v21->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_94;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0) )
  {
    v23 = 0;
  }
  else
  {
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how, v22);
    if ( !byte_59373DE )
    {
      sub_21FFC50(&UserPresentListViewManager_TypeInfo);
      byte_59373DE = 1;
    }
    v24 = UserPresentListViewManager_TypeInfo;
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how, v22);
      v24 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (UnityEngine_Component_o *)v24->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_94;
    v23 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0);
  }
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how, v22);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  v25 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how, v22);
    v25 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (UnityEngine_Component_o *)v25->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_94;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0) )
  {
    v27 = 0;
  }
  else
  {
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how, v26);
    if ( !byte_59373DE )
    {
      sub_21FFC50(&UserPresentListViewManager_TypeInfo);
      byte_59373DE = 1;
    }
    v28 = UserPresentListViewManager_TypeInfo;
    if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, how, v26);
      v28 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (UnityEngine_Component_o *)v28->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_94;
    v27 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0);
  }
  if ( v23 || v27 )
  {
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v29 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v55 = this;
    v30 = (ItemMaster_o *)v19;
    v31 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v32 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v33 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627580(
      v33,
      max_length,
      (const MethodInfo_444F33C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___91444336);
    if ( (int)max_length >= 1 )
    {
      v40 = 0;
      v41 = (unsigned int)max_length;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v23 )
          goto LABEL_98;
        if ( v40 >= LODWORD(VaildList->max_length) )
          goto LABEL_95;
        checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckFilter(
                                                      (UserPresentBoxWindow_o *)checkedItemBtn,
                                                      (ServantMaster_o *)v29,
                                                      v30,
                                                      m_Items[v40],
                                                      v36);
        if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
        {
LABEL_98:
          if ( !v27 )
            goto LABEL_65;
          if ( v40 >= LODWORD(VaildList->max_length) )
            goto LABEL_95;
          checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckRarityFilter(
                                                        (UserPresentBoxWindow_o *)checkedItemBtn,
                                                        (ServantLimitMaster_o *)v31,
                                                        (CommandCodeMaster_o *)v32,
                                                        m_Items[v40],
                                                        v23,
                                                        v37);
          if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
          {
LABEL_65:
            if ( v40 >= LODWORD(VaildList->max_length) )
LABEL_95:
              sub_21FFED4(checkedItemBtn);
            if ( !v33 )
              goto LABEL_94;
            items = v33->fields._items;
            *(_QWORD *)&how = m_Items[v40];
            v44 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v33->fields._version;
            if ( !items )
              goto LABEL_94;
            size = v33->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                (Il2CppObject *)how,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v46[4] = (Il2CppClass *)how;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v46 + 4),
                how,
                v34,
                v35,
                (int32_t)v36,
                (int32_t)v37,
                v38,
                v39);
            }
          }
        }
      }
      while ( v41 != ++v40 );
    }
    if ( !v33
      || (checkedItemBtn = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                        v33,
                                                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_94:
      sub_21FFECC(checkedItemBtn, how);
    }
    LODWORD(max_length) = checkedItemBtn[1].klass;
    this = v55;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)v30;
  }
  if ( (int)max_length < 1 )
    return;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v47 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v47, 1, (UnityEngine_GameObject_o *)v47, v48);
  v49 = VaildList->max_length;
  if ( (int)v49 < 1 )
    return;
  v50 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v50 >= (unsigned int)v49 )
      goto LABEL_95;
    v51 = VaildList->m_Items[v50];
    if ( !v51 )
      goto LABEL_94;
    giftType = v51->fields.giftType;
    if ( giftType != 2 )
    {
      if ( giftType == 9 )
        break;
      goto LABEL_89;
    }
    if ( !v19 )
      goto LABEL_94;
    checkedItemBtn = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  v19,
                                                  &entity,
                                                  v51->fields.objectId,
                                                  (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_94;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v49 = VaildList->max_length;
LABEL_89:
    if ( (int)++v50 >= (int)v49 )
      return;
  }
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v53 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0);
  UserPresentBoxWindow__SetButtonTxtColor(v53, 1, (UnityEngine_GameObject_o *)v53, v54);
}


void UserPresentBoxWindow__SetFilterButtonImage(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *filterBtnSp; // x19
  UserPresentListViewManager_c *v5; // x0
  ListViewSort_o *sortInfo; // x0
  __int64 v7; // x2
  System_String_o **v8; // x22
  UserPresentListViewManager_c *v9; // x0

  if ( (byte_593732C & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_593732C = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method, v2);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  v5 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method, v2);
    v5 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v5->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_22;
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0);
  v8 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method, v7);
  if ( !byte_59373DE )
  {
    sub_21FFC50(&UserPresentListViewManager_TypeInfo);
    byte_59373DE = 1;
  }
  v9 = UserPresentListViewManager_TypeInfo;
  if ( !*(&UserPresentListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo, method, v7);
    v9 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v9->static_fields->sortInfo;
  if ( !sortInfo )
LABEL_22:
    sub_21FFECC(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v8 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
LABEL_20:
  if ( !filterBtnSp )
    goto LABEL_22;
  UISprite__set_spriteName(filterBtnSp, *v8, 0);
}


void UserPresentBoxWindow__SetPresentHistoryBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *GameObject; // x20
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1

  if ( (byte_593734F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11174/*"PresentHistoryButton"*/);
    byte_593734F = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_11174/*"PresentHistoryButton"*/,
                                         0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0 )
    {
      sub_21FFECC(Component_object, v9);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, is_enable, 0);
  }
}


void UserPresentBoxWindow__SetReDispAction(
        UserPresentBoxWindow_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mReDispAct = act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mReDispAct,
    (int32_t)act,
    (System_String_o *)method,
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
  __int64 v9; // x2
  UIWidget_o *v10; // x20
  int32_t v11; // w22
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = selected;
  if ( (byte_5937350 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10884/*"PRESENT_SELECT_INFO"*/);
    byte_5937350 = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&selected, method);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10884/*"PRESENT_SELECT_INFO"*/, 0);
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v17, 0);
  v7 = System_String__Format_75484576(v5, v6, (Il2CppObject *)this->fields.presentMaxSelectable, 0);
  if ( !presentSelectNumLabel )
    goto LABEL_14;
  UILabel__set_text(presentSelectNumLabel, v7, 0);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  v10 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v11 = v17;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v9);
    v7 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v11 >= *(_DWORD *)(*(_QWORD *)&v7[7].fields + 132LL) )
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
  if ( !v10 )
LABEL_14:
    sub_21FFECC(v7, v8);
  UIWidget__set_color(v10, *(UnityEngine_Color_o *)&r, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x0
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v24; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v27; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v28; // x22
  const MethodInfo *v29; // x3

  if ( (byte_5937335 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
    byte_5937335 = 1;
  }
  v7 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = idx;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v24 = *(int *)(v7 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v24 < max_length )
    {
      if ( (unsigned int)v24 >= max_length )
        sub_21FFED4(v22);
      evpDialog = this->fields.evpDialog;
      v27 = evPointRewardList->m_Items[v24];
      v28 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_21FFEBC(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v28,
        (Il2CppObject *)v7,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        v29);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v27, v28, 0);
        return;
      }
LABEL_10:
      sub_21FFECC(v8, v9);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x21
  System_Action_o *v27; // x22

  if ( (byte_5937332 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
    sub_21FFC50(&StringLiteral_10871/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_44/*"\n\n"*/);
    byte_5937332 = 1;
  }
  v5 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10871/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0);
    v26 = System_String__Concat_75481624(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v25, 0);
    v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v5,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0, v26, v27, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(v6, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
}


void UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_5937336 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5937336 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( v5 )
  {
    if ( !mInstance )
      sub_21FFECC(v5, v6);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_5937359 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__);
    sub_21FFC50(&StringLiteral_12705/*"SHOW_EFFECT"*/);
    byte_5937359 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0 && getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12705/*"SHOW_EFFECT"*/, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v8 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_21FFEBC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      v9);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v8, v10);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v11);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v5);
  }
}


void UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_21FFECC(0, method);
  UserPresentListViewManager__SetMode_47123484(userPresentListViewManager, 1, v2);
}


void UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_21FFECC(0, result);
  UserPresentHistoryDialog__Open(presentHistoryDialog, (const MethodInfo *)result);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxWindow___Open_b__69_0(UserPresentBoxWindow_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_5937357 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937357 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !stoneNumValLb )
    sub_21FFECC(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0);
}


void UserPresentBoxWindow___callbackPresentList_b__72_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_5937358 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937358 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
  UserPresentBoxWindow__ReDisp(this, v5);
}


void UserPresentBoxWindow___showEffect_b__88_0(UserPresentBoxWindow_o *this, bool isDecide, const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_593735A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow_EndEffect__);
    byte_593735A = 1;
  }
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffect__, 0);
  UserPresentBoxWindow__CheckSvtGetTutorial(this, v4, v5);
}


void UserPresentBoxWindow___showReceiveResultDlg_b__101_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *touchBlocker; // x0
  const MethodInfo *v6; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_593735B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow__showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1__);
    byte_593735B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0, 0) )
  {
    touchBlocker = this->fields.touchBlocker;
    if ( !touchBlocker )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(touchBlocker, 0, 0);
    if ( this->fields.presentOverflowType )
    {
      userPresentListViewManager = this->fields.userPresentListViewManager;
      v8 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_21FFEBC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
      UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_UserPresentBoxWindow__showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1__,
        v9);
      if ( userPresentListViewManager )
      {
        UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v8, v10);
        UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v11);
        return;
      }
LABEL_11:
      sub_21FFECC(touchBlocker, v4);
    }
    UserPresentBoxWindow___showReceiveResultDlg_g__DisplayServantCoinDialogAndEventPoint_101_1(this, 0, v6);
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
    sub_21FFECC(0, action);
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
    sub_21FFECC(0, action);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppClass *v14; // x0
  __int64 v15; // x21
  System_Action_object__o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Action_object__o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  ActionChain_o *v30; // x19
  __int64 v31; // x21
  System_Action_o *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_593735C & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass101_0__showReceiveResultDlg_b__4__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass101_0_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__);
    sub_21FFC50(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__);
    byte_593735C = 1;
  }
  v5 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass101_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Action_Action____TypeInfo;
  *(_BYTE *)(v5 + 16) = isReceive;
  v15 = sub_21FFD10(v14, 2);
  v16 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
    0);
  if ( !v15 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v15 + 32) = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__,
    0);
  if ( (*(_DWORD *)(v15 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 40) = v23;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 40), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
  ActionChain___ctor_55902484(v30, (System_Action_Action__array *)v15, 0);
  v31 = sub_21FFD10(System_Action___TypeInfo, 1);
  v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass101_0__showReceiveResultDlg_b__4__,
    0);
  if ( !v31 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v31 + 24) )
LABEL_13:
    sub_21FFED4(v6);
  *(_QWORD *)(v31 + 32) = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !v30 || (v6 = ChainableActionBase__Final((ChainableActionBase_o *)v30, (System_Action_array *)v31, 0)) == 0 )
LABEL_12:
    sub_21FFECC(v6, v7);
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
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_593732A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__);
    byte_593732A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
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

  if ( (byte_5937340 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    byte_5937340 = 1;
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
        sub_21FFECC(befSvtList, v10);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
  Il2CppObject *v9; // x21
  struct System_Collections_Generic_List_long__o *v10; // x0
  int64_t klass; // x1
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v13; // x23
  unsigned int Index; // w8
  _BOOL4 v15; // w0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_5937342 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_21FFC50(&System_Predicate_long__TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
    byte_5937342 = 1;
  }
  v9 = (Il2CppObject *)sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_16;
  v9[1].klass = (Il2CppClass *)commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v15) = 0;
    return v15;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v13 = (System_Predicate_long__o *)sub_21FFEBC(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v13,
    v9,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    0);
  if ( !befCommandCodeList )
    goto LABEL_16;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v13,
            (const MethodInfo_4438990 *)Method_System_Collections_Generic_List_long__FindIndex__);
  v15 = Index >> 31;
  if ( (Index & 0x80000000) == 0 || !isAddCommandCode )
    return v15;
  v10 = this->fields.befCommandCodeList;
  if ( !v10
    || (items = v10->fields._items,
        klass = (int64_t)v9[1].klass,
        v17 = Method_System_Collections_Generic_List_long__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_16:
    sub_21FFECC(v10, klass);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v10,
      klass,
      *(const MethodInfo_4438164 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    items->m_Items[size] = klass;
  }
  LOBYTE(v15) = 1;
  return v15;
}


void UserPresentBoxWindow__checkNextSvt(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UserPresentBoxWindow_o *v8; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v10; // x8

  v8 = this;
  if ( (byte_593733F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_21FFC50(&StringLiteral_9637/*"NEXT_SVT"*/);
    this = (UserPresentBoxWindow_o *)sub_21FFC50(&StringLiteral_6690/*"FINAL_SVT"*/);
    byte_593733F = 1;
  }
  receiveList = v8->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v8->fields.receiveIdx >= receiveList->fields._size )
  {
    v8->fields.receiveList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.receiveList, 0, v2, v3, v4, v5, v6, v7);
    this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
    v8->fields.receiveIdx = 0;
    if ( this )
    {
      v10 = &StringLiteral_6690/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_21FFECC(this, method);
  }
  this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v10 = &StringLiteral_9637/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v10, 0);
}


// local variable allocation has failed, the output may be wrong!
bool UserPresentBoxWindow__checkOverlapSvt(UserPresentBoxWindow_o *this, int32_t svtId, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v4; // x20
  struct System_Collections_Generic_List_int__o *befSvtList; // x8
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  v4 = this;
  if ( (byte_5937341 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (UserPresentBoxWindow_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_5937341 = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
    goto LABEL_13;
  size = befSvtList->fields._size;
  v7 = size - 1;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      this = (UserPresentBoxWindow_o *)v4->fields.befSvtList;
      if ( !this )
        break;
      result = System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)this,
                 v8,
                 (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
      if ( !result && v7 != v8++ )
        continue;
      return result;
    }
LABEL_13:
    sub_21FFECC(this, *(_QWORD *)&svtId);
  }
  return 0;
}


void UserPresentBoxWindow__endPlay(UserPresentBoxWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v5; // x21
  AvalonSceneManager_c *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v21; // x20
  __int64 v22; // x2

  if ( (byte_593733E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
    byte_593733E = 1;
  }
  v5 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)end_act, v14, v15, v16, v17, v18, v19);
  svtGetAction = this->fields.svtGetAction;
  v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v5, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7, v22);
  if ( !svtGetAction )
LABEL_8:
    sub_21FFECC(v6, v7);
  ServantRewardAction__Play(svtGetAction, v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0);
}


void UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_5937343 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    this = (UserPresentBoxWindow_o *)sub_21FFC50(&StringLiteral_9637/*"NEXT_SVT"*/);
    byte_5937343 = 1;
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
    sub_21FFECC(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9637/*"NEXT_SVT"*/, 0);
}


System_String_o *UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v3; // x0
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t stringLength; // w20
  Il2CppObject *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937351 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&StringLiteral_26607/*"}"*/);
    sub_21FFC50(&StringLiteral_26372/*"{0,"*/);
    byte_5937351 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v11 = 0;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = System_Int32__ToString((unsigned int)v3->static_fields + 128, 0);
  if ( !v4
    || (stringLength = v4->fields._stringLength,
        (v4 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 132, 0)) == 0) )
  {
    sub_21FFECC(v4, v5);
  }
  v7 = (Il2CppObject *)v4;
  v11 = v4->fields._stringLength + 2 * (stringLength - v4->fields._stringLength);
  v8 = System_Int32__ToString((int32_t)&v11, 0);
  v9 = System_String__Concat_75481624(
         (System_String_o *)StringLiteral_26372/*"{0,"*/,
         v8,
         (System_String_o *)StringLiteral_26607/*"}"*/,
         0);
  return System_String__Format(v9, v7, 0);
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
  __int64 v11; // x2
  Il2CppObject *MasterData_object; // x23
  int v13; // w8
  System_Collections_Generic_IEnumerable_T__o *v14; // x23
  int v15; // w10
  __int64 v16; // x11
  int v17; // w11
  System_Collections_Generic_List_object__o *v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo_476E8C0 *v25; // x0
  NetworkManager_ResultCallbackFunc_o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x2

  if ( (byte_593732F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___91444328);
    sub_21FFC50(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow_CallbackReceiveRequest__);
    byte_593732F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_27;
  Instance = UserPresentBoxMaster__getVaildList_50058672(
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
        sub_21FFED4(Instance);
      v16 = *((_QWORD *)Instance + v15 + 4);
      if ( !v16 )
        goto LABEL_27;
      v17 = *(_DWORD *)(v16 + 72);
      if ( v17 == 11 || v17 == 1 )
        break;
      if ( (v13 & ~(v13 >> 31)) == ++v15 )
        goto LABEL_22;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
      goto LABEL_22;
    }
LABEL_27:
    sub_21FFECC(Instance, v10);
  }
LABEL_22:
  v18 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v18,
    v14,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___91444328);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.receiveList, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.receiveIdx = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v25);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27, v28);
  Instance = NetworkManager__getRequest_object_(
               v26,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_27;
  UserPresentReceiveRequest__beginRequest((UserPresentReceiveRequest_o *)Instance, presentIds, selectIdx, selectNum, 0);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v29);
}


void UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int32_t presentOverflowType; // w8
  struct UserPresentListViewManager_o *v3; // x8
  int32_t v4; // w1
  struct UserPresentListViewManager_o *v5; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8

  presentOverflowType = this->fields.presentOverflowType;
  switch ( presentOverflowType )
  {
    case 4:
      userPresentListViewManager = this->fields.userPresentListViewManager;
      if ( userPresentListViewManager )
      {
        this = (UserPresentBoxWindow_o *)userPresentListViewManager->fields.dialog;
        if ( this )
        {
          v4 = 2;
          goto LABEL_13;
        }
      }
      goto LABEL_15;
    case 2:
      v5 = this->fields.userPresentListViewManager;
      if ( v5 )
      {
        this = (UserPresentBoxWindow_o *)v5->fields.dialog;
        if ( this )
        {
          v4 = 1;
          goto LABEL_13;
        }
      }
LABEL_15:
      sub_21FFECC(this, method);
    case 1:
      v3 = this->fields.userPresentListViewManager;
      if ( v3 )
      {
        this = (UserPresentBoxWindow_o *)v3->fields.dialog;
        if ( this )
        {
          v4 = 0;
LABEL_13:
          UserPresentBoxErrorDialog__setJumpType((UserPresentBoxErrorDialog_o *)this, v4, 0);
          return;
        }
      }
      goto LABEL_15;
  }
}


void UserPresentBoxWindow__showEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *receiveList; // x0
  const MethodInfo *receiveIdx; // x1
  int32_t syncRoot; // w21
  UserPresentBoxEntity_o *v6; // x20
  int v7; // w22
  __int64 v8; // x2
  Il2CppClass *v9; // x23
  void *v10; // x24
  GetSvts_array *getSvtList; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w23
  _BOOL4 v15; // w23
  bool v16; // w22
  const MethodInfo *v17; // x4
  _BOOL4 v18; // w22
  __int64 v19; // x2
  Il2CppClass *klass; // x23
  void *monitor; // x24
  GetCommandCodes_array *getCommandCodeList; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t v25; // w23
  const MethodInfo *v26; // x4
  int64_t userCommandCodeId; // x22
  bool isNew; // w23
  bool Eff; // w0
  const MethodInfo *v30; // x7
  int32_t num; // w5
  bool v32; // w3
  UserPresentBoxWindow_o *v33; // x0
  int64_t v34; // x1
  bool v35; // w2
  int32_t v36; // w4
  int32_t presentDialogMessageId; // w6
  int32_t objectId; // w20
  const MethodInfo *v39; // x2
  _BOOL8 IsEquip; // x0
  const MethodInfo *v41; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v43; // x2
  int32_t v44; // w21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v46; // x2
  QuestRewardInfo_o *v47; // x0
  const MethodInfo *v48; // x2
  bool IsOrganization; // w0
  int64_t userSvtId; // x22
  _BOOL4 v51; // w23
  CommonUI_o *v52; // x20
  int64_t v53; // x21
  CombineResultEffectComponent_ClickDelegate_o *v54; // x22
  ServantCostumeEntity_o *v55; // [xsp+0h] [xbp-60h] BYREF
  GetCommandCodes_o *v56; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v57; // [xsp+10h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_5937337 & 1) == 0 )
  {
    sub_21FFC50(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow__showEffect_b__88_0__);
    byte_5937337 = 1;
  }
  receiveList = (System_Collections_Generic_List_object__o *)this->fields.receiveList;
  entity = 0;
  v57 = 0;
  data = 0;
  v55 = 0;
  v56 = 0;
  if ( !receiveList )
    goto LABEL_97;
  receiveIdx = (const MethodInfo *)(unsigned int)this->fields.receiveIdx;
  if ( (int)receiveIdx >= receiveList->fields._size )
  {
    UserPresentBoxWindow__EndEffect(this, receiveIdx);
    return;
  }
  receiveList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                               receiveList,
                                                               (int32_t)receiveIdx,
                                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
  if ( !receiveList )
    goto LABEL_97;
  syncRoot = (int32_t)receiveList[1].fields._syncRoot;
  v6 = (UserPresentBoxEntity_o *)receiveList;
  if ( !Gift__IsServant(syncRoot, 0) )
  {
    if ( Gift__IsCommandCode(syncRoot, 0) )
    {
      receiveList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_97;
      receiveList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)receiveList,
                                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_97;
      receiveList = (System_Collections_Generic_List_object__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                                                                   &v57,
                                                                   v6->fields.objectId,
                                                                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) == 0 )
        goto LABEL_88;
      if ( !v57 )
        goto LABEL_97;
      klass = v57[1].klass;
      monitor = v57[1].monitor;
      getCommandCodeList = this->fields.getCommandCodeList;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v19);
      *(_QWORD *)&v61.fields.currentCryptoKey = klass;
      *(_QWORD *)&v61.fields.fakeValue = monitor;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v61, 0);
      if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v23, v24);
      if ( !MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v56, v25, 0) )
        goto LABEL_88;
      receiveList = (System_Collections_Generic_List_object__o *)this->fields.effectPanel;
      if ( !receiveList )
        goto LABEL_97;
      receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)receiveList,
                                                                   0);
      if ( !receiveList )
        goto LABEL_97;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0) )
      {
        receiveList = (System_Collections_Generic_List_object__o *)this->fields.effectPanel;
        if ( !receiveList )
          goto LABEL_97;
        receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)receiveList,
                                                                     0);
        if ( !receiveList )
          goto LABEL_97;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0);
      }
      receiveList = (System_Collections_Generic_List_object__o *)v56;
      if ( !v56 )
        goto LABEL_97;
      this->fields.gotServant = v56->fields.isNew;
      receiveList = (System_Collections_Generic_List_object__o *)GetCommandCodes__isDoGetEff(
                                                                   (GetCommandCodes_o *)receiveList,
                                                                   0);
      if ( !v56 )
        goto LABEL_97;
      if ( !UserPresentBoxWindow__checkNewCommandCode(
              this,
              v56->fields.userCommandCodeId,
              (unsigned __int8)receiveList & 1,
              1,
              v26) )
        goto LABEL_88;
      receiveList = (System_Collections_Generic_List_object__o *)v56;
      if ( !v56 )
        goto LABEL_97;
      userCommandCodeId = v56->fields.userCommandCodeId;
      isNew = v56->fields.isNew;
      Eff = GetCommandCodes__isDoGetEff(v56, 0);
      num = v6->fields.num;
      v32 = Eff;
      v33 = this;
      v34 = userCommandCodeId;
      v35 = isNew;
      v36 = syncRoot;
      presentDialogMessageId = 0;
LABEL_93:
      UserPresentBoxWindow__startRewardGetEffect(v33, v34, v35, v32, v36, num, presentDialogMessageId, v30);
      return;
    }
    if ( Gift__IsCostumeRelease(syncRoot, 0) )
    {
      objectId = v6->fields.objectId;
      receiveList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_97;
      receiveList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)receiveList,
                                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !receiveList )
        goto LABEL_97;
      if ( !ServantCostumeMaster__TryGetEntity(
              (ServantCostumeMaster_o *)receiveList,
              &v55,
              objectId / 100,
              objectId % 100,
              0) )
        goto LABEL_88;
      receiveList = (System_Collections_Generic_List_object__o *)this->fields.effectPanel;
      if ( receiveList )
      {
        receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)receiveList,
                                                                     0);
        if ( receiveList )
        {
          receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)receiveList,
                                                                       0);
          if ( ((unsigned __int8)receiveList & 1) == 0 )
          {
            receiveList = (System_Collections_Generic_List_object__o *)this->fields.effectPanel;
            if ( !receiveList )
              goto LABEL_97;
            receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)receiveList,
                                                                         0);
            if ( !receiveList )
              goto LABEL_97;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0);
          }
          if ( v55 )
          {
            UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(this, v55->fields.name, v39);
            return;
          }
        }
      }
    }
    else
    {
      IsEquip = Gift__IsEquip(syncRoot, 0);
      if ( IsEquip )
      {
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v6, v41);
        UserPresentBoxWindow__startRewardEquipGetEffect(this, QuestRewardInfo, v43);
        return;
      }
      if ( !Gift__IsItem(syncRoot, 0) )
        goto LABEL_88;
      v44 = v6->fields.objectId;
      receiveList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !receiveList )
        goto LABEL_97;
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)receiveList, v44, 0) )
        goto LABEL_88;
      receiveList = (System_Collections_Generic_List_object__o *)this->fields.effectPanel;
      if ( receiveList )
      {
        receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)receiveList,
                                                                     0);
        if ( receiveList )
        {
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0);
          if ( !activeSelf )
          {
            receiveList = (System_Collections_Generic_List_object__o *)this->fields.effectPanel;
            if ( !receiveList )
              goto LABEL_97;
            receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)receiveList,
                                                                         0);
            if ( !receiveList )
              goto LABEL_97;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0);
          }
          v47 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v6, v46);
          UserPresentBoxWindow__startRewardSpecialItemGetEffect(this, v47, v48);
          return;
        }
      }
    }
LABEL_97:
    sub_21FFECC(receiveList, method);
  }
  receiveList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !receiveList )
    goto LABEL_97;
  receiveList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)receiveList,
                                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !receiveList )
    goto LABEL_97;
  receiveList = (System_Collections_Generic_List_object__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                                                               &entity,
                                                               v6->fields.objectId,
                                                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)receiveList & 1) == 0 )
    goto LABEL_88;
  if ( !entity )
    goto LABEL_97;
  receiveList = (System_Collections_Generic_List_object__o *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0);
  if ( !entity )
    goto LABEL_97;
  v7 = (int)receiveList;
  receiveList = (System_Collections_Generic_List_object__o *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0);
  if ( ((v7 | (unsigned int)receiveList) & 1) != 0 )
    goto LABEL_88;
  if ( !entity )
    goto LABEL_97;
  v9 = entity[1].klass;
  v10 = entity[1].monitor;
  getSvtList = this->fields.getSvtList;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v8);
  *(_QWORD *)&v60.fields.currentCryptoKey = v9;
  *(_QWORD *)&v60.fields.fakeValue = v10;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v60, 0);
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v12, v13);
  if ( !MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v14, syncRoot, 0) )
    goto LABEL_88;
  receiveList = (System_Collections_Generic_List_object__o *)this->fields.effectPanel;
  if ( !receiveList )
    goto LABEL_97;
  receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)receiveList,
                                                               0);
  if ( !receiveList )
    goto LABEL_97;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)receiveList, 0) )
  {
    receiveList = (System_Collections_Generic_List_object__o *)this->fields.effectPanel;
    if ( !receiveList )
      goto LABEL_97;
    receiveList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)receiveList,
                                                                 0);
    if ( !receiveList )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveList, 1, 0);
  }
  receiveList = (System_Collections_Generic_List_object__o *)data;
  if ( !data )
    goto LABEL_97;
  v15 = data->fields.isNew;
  v16 = GetSvts__isDoGetEff(data, 0);
  receiveList = (System_Collections_Generic_List_object__o *)Gift__IsEventSvtJoin(syncRoot, 0);
  if ( ((unsigned __int8)receiveList & 1) != 0 )
  {
    v18 = 0;
  }
  else
  {
    if ( !data )
      goto LABEL_97;
    v18 = !UserPresentBoxWindow__checkNew(this, data->fields.userSvtId, v16, 1, v17);
  }
  receiveList = (System_Collections_Generic_List_object__o *)entity;
  if ( !entity )
    goto LABEL_97;
  IsOrganization = ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0);
  if ( v15 && IsOrganization )
    this->fields.gotServant = 1;
  receiveList = (System_Collections_Generic_List_object__o *)entity;
  if ( !entity )
    goto LABEL_97;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0) )
  {
    receiveList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_97;
    if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0) && !v18 )
    {
      receiveList = (System_Collections_Generic_List_object__o *)data;
      if ( !data )
        goto LABEL_97;
      userSvtId = data->fields.userSvtId;
      v51 = data->fields.isNew;
      receiveList = (System_Collections_Generic_List_object__o *)GetSvts__isDoGetEff(data, 0);
      if ( !data )
        goto LABEL_97;
      num = v6->fields.num;
      presentDialogMessageId = data->fields.presentDialogMessageId;
      v35 = v51;
      v32 = (unsigned __int8)receiveList & 1;
      v33 = this;
      v34 = userSvtId;
      v36 = syncRoot;
      goto LABEL_93;
    }
  }
  receiveList = (System_Collections_Generic_List_object__o *)entity;
  if ( !entity )
    goto LABEL_97;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0) )
  {
    receiveList = (System_Collections_Generic_List_object__o *)entity;
    if ( entity )
    {
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0) )
        goto LABEL_88;
      receiveList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( data )
      {
        v52 = (CommonUI_o *)receiveList;
        v53 = data->fields.userSvtId;
        v54 = (CombineResultEffectComponent_ClickDelegate_o *)sub_21FFEBC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v54,
          (Il2CppObject *)this,
          Method_UserPresentBoxWindow__showEffect_b__88_0__,
          0);
        if ( v52 )
        {
          CommonUI__OpenSecretTreasureDeviceForSvtGet(v52, v53, v54, 0);
          return;
        }
      }
    }
    goto LABEL_97;
  }
LABEL_88:
  UserPresentBoxWindow__EndEffect(this, method);
}


void UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_5937344 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__);
    byte_5937344 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)v5;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v7);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0);
  if ( !v9 )
LABEL_8:
    sub_21FFECC(Instance, v4);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, v11, 0);
}


void UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  AvalonSceneManager_c *v23; // x8
  CommonUI_o *v24; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_5937339 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
    byte_5937339 = 1;
  }
  v5 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)name, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  v24 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21, v22);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0);
  if ( !v24 )
LABEL_9:
    sub_21FFECC(touchBlocker, v7);
  CommonUI__maskFadeout(v24, 1, DEFAULT_FADE_TIME, v26, 0);
}


void UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  AvalonSceneManager_c *v23; // x8
  CommonUI_o *v24; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_593733A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
    byte_593733A = 1;
  }
  v5 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)questRewardInfo, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  v24 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21, v22);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0);
  if ( !v24 )
LABEL_9:
    sub_21FFECC(touchBlocker, v7);
  CommonUI__maskFadeout(v24, 1, DEFAULT_FADE_TIME, v26, 0);
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  ScriptManager_c *v26; // x0
  int v27; // w8
  UserServantEntity_o *v28; // x22
  EventServantEntity_o *EventServant_50134316; // x0
  EventServantEntity_o *v30; // x21
  __int64 v31; // x19
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o **v38; // x20
  System_String_o *JoinMessage; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 *v48; // x8
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  AvalonSceneManager_c *v52; // x8
  CommonUI_o *v53; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v55; // x21
  System_String_o *Message; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 v63; // x1
  __int64 v64; // x2
  System_String_o *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  AvalonSceneManager_c *v75; // x8
  CommonUI_o *v76; // x20
  float v77; // s8
  System_Action_o *v78; // x21

  if ( (byte_5937338 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
    sub_21FFC50(&StringLiteral_12940/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_21FFC50(&StringLiteral_12941/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/);
    byte_5937338 = 1;
  }
  v15 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)this, v18, v19, v20, v21, v22, v23);
  v26 = ScriptManager_TypeInfo;
  *(_DWORD *)(v15 + 24) = giftType;
  *(_QWORD *)(v15 + 32) = userSvtID;
  v27 = *(&v26->_2.cctor_finished + 1);
  *(_BYTE *)(v15 + 40) = isDoEffect;
  *(_DWORD *)(v15 + 44) = num;
  *(_BYTE *)(v15 + 48) = isNew;
  *(_DWORD *)(v15 + 52) = presentDialogMessageId;
  if ( !v27 )
    j_il2cpp_runtime_class_init_0(v26, v24, v25);
  ScriptManager__DeleteDialogKey(0);
  if ( !Gift__IsEventSvtJoin(*(_DWORD *)(v15 + 24), 0) )
    goto LABEL_17;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v15 + 32),
                                (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v28 = (UserServantEntity_o *)Instance;
  EventServant_50134316 = UserServantEntity__getEventServant_50134316((UserServantEntity_o *)Instance, 1, 0);
  if ( !EventServant_50134316 || (v30 = EventServant_50134316, EventServant_50134316->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v52 = AvalonSceneManager_TypeInfo;
      v53 = (CommonUI_o *)v49;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v50, v51);
        v52 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v52->static_fields->DEFAULT_FADE_TIME;
      v55 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v55,
        (Il2CppObject *)v15,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0);
      if ( v53 )
      {
        CommonUI__maskFadeout(v53, 1, DEFAULT_FADE_TIME, v55, 0);
        return;
      }
    }
LABEL_29:
    sub_21FFECC(Instance, v17);
  }
  v31 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0);
  if ( !v31 )
    goto LABEL_29;
  *(_QWORD *)(v31 + 32) = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 32), v15, v32, v33, v34, v35, v36, v37);
  v38 = (System_String_o **)(v31 + 24);
  if ( UserServantEntity__HasStatus(v28, 64, 0) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v30, 0);
    *v38 = JoinMessage;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 24), (int32_t)JoinMessage, v40, v41, v42, v43, v44, v45);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
    v48 = &StringLiteral_12941/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v30, 0);
    *v38 = Message;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 24), (int32_t)Message, v57, v58, v59, v60, v61, v62);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63, v64);
    v48 = &StringLiteral_12940/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v65 = LocalizationManager__Get((System_String_o *)*v48, 0);
  *(_QWORD *)(v31 + 16) = v65;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 16), (int32_t)v65, v66, v67, v68, v69, v70, v71);
  v72 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v75 = AvalonSceneManager_TypeInfo;
  v76 = (CommonUI_o *)v72;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v73, v74);
    v75 = AvalonSceneManager_TypeInfo;
  }
  v77 = v75->static_fields->DEFAULT_FADE_TIME;
  v78 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v78,
    (Il2CppObject *)v31,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0);
  if ( !v76 )
    goto LABEL_29;
  CommonUI__maskFadein(v76, v77, v78, 0);
}


void UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  AvalonSceneManager_c *v23; // x8
  CommonUI_o *v24; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_593733B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__);
    sub_21FFC50(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
    byte_593733B = 1;
  }
  v5 = sub_21FFEBC(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)questRewardInfo, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  v24 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21, v22);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0);
  if ( !v24 )
LABEL_9:
    sub_21FFECC(touchBlocker, v7);
  CommonUI__maskFadeout(v24, 1, DEFAULT_FADE_TIME, v26, 0);
}


void UserPresentBoxWindow_ClickDelegate___ctor(
        UserPresentBoxWindow_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF8FE8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF8FA0;
}


System_IAsyncResult_o *UserPresentBoxWindow_ClickDelegate__BeginInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = hasGetServant;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  const MethodInfo *v2; // x2
  UserPresentBoxWindow_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  UserPresentBoxWindow__EventPointRewardWithSvtGet(_4__this, 0, v2);
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
    sub_21FFECC(this, method);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v14; // w9
  struct UserPresentBoxWindow_o *v15; // x8
  struct UserPresentListViewManager_o *v16; // x8
  int32_t v17; // w1

  if ( (byte_593735D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593735D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog(Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_593739B & 1) == 0 )
  {
    Instance = (CommonUI_o *)sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    byte_593739B = 1;
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
    sub_21FFECC(Instance, v4);
  v17 = (int)StringLiteral_1/*""*/;
  v16->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v16->fields._expiredPresents_k__BackingField,
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_593735E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__);
    byte_593735E = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !evpDialog )
LABEL_8:
    sub_21FFECC(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_47113396(evpDialog, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow___c__DisplayClass85_0_o *v2; // x19
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this
    || (v2 = this,
        UserPresentBoxWindow__UpdateEventInfos((UserPresentBoxWindow_o *)this, method),
        (this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_21FFECC(this, method);
  }
  UserPresentBoxWindow__ShowEventPointReward(
    (UserPresentBoxWindow_o *)this,
    v2->fields.idx + 1,
    v2->fields.callback,
    v3);
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
  SummonAssetManager_o *v5; // x20
  System_Action_o *_9__3; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5937360 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__);
    byte_5937360 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v5 = (SummonAssetManager_o *)Instance;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v5, _9__3, 0);
}


void UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_593735F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593735F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_21FFECC(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v5);
}


void UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__3(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  struct UserPresentBoxWindow_o *_4__this; // x22
  struct UserPresentBoxWindow_o *v7; // x8
  SummonAssetManager_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x2
  __int64 v16; // x2
  int32_t v17; // w21
  struct UserPresentBoxWindow_o *v18; // x8
  Il2CppClass *klass; // x23
  void *monitor; // x24
  ServantRewardAction_o *svtGetAction; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w23
  Il2CppObject v25; // q1
  int64_t v26; // x0
  Il2CppClass *v27; // x8
  int64_t v28; // x20
  struct UserPresentBoxWindow_o *v29; // x8
  struct ServantRewardAction_o *v30; // x8
  Il2CppObject *v31; // x20
  struct UserPresentBoxWindow_o *v32; // x22
  struct UserPresentBoxWindow_o *v33; // x8
  SummonAssetManager_o *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x2
  struct UserPresentBoxWindow_o *v42; // x8
  Il2CppObject v43; // q0
  Il2CppObject v44; // q1
  ServantRewardAction_o *v45; // x20
  bool isNew; // w2
  int64_t v47; // x1
  ServantRewardAction_o *v48; // x0
  bool v49; // w3
  int32_t v50; // w4
  struct UserPresentBoxWindow_o *v51; // x8
  Il2CppClass *v52; // x22
  void *v53; // x23
  ServantRewardAction_o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  int32_t v57; // w22
  Il2CppObject v58; // q1
  int64_t v59; // x0
  Il2CppClass *v60; // x8
  int64_t v61; // x20
  Il2CppObject v62; // q0
  Il2CppObject v63; // q1
  ServantRewardAction_o *v64; // x20
  Il2CppObject *v65; // x19
  System_Action_o *v66; // x20
  const MethodInfo *v67; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_5937361 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow_EndEffect__);
    byte_5937361 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_57;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_57;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_57;
    v8 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v7->fields.effectPanel;
    if ( !Instance )
      goto LABEL_57;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !v8 )
      goto LABEL_57;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v8, (UnityEngine_Transform_o *)Instance, 0, 0);
    if ( !_4__this )
      goto LABEL_57;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.svtGetAction,
      Instance,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( this->fields.isDoEffect )
    {
      if ( Entity )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_50134316((UserServantEntity_o *)Entity, 1, 0);
        v17 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v17 = 6;
          else
            v17 = 14;
        }
        v18 = this->fields.__4__this;
        if ( v18 )
        {
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          svtGetAction = v18->fields.svtGetAction;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v16);
          *(_QWORD *)&v73.fields.currentCryptoKey = klass;
          *(_QWORD *)&v73.fields.fakeValue = monitor;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v73, 0);
          v25 = Entity[2];
          *(Il2CppObject *)&v72.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v72.fields.fakeValue = v25;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
          v71 = v72;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v71, 0);
          v27 = Entity[6].klass;
          *(_QWORD *)&v74.fields.fakeValue = Entity[6].monitor;
          v28 = v26;
          *(_QWORD *)&v74.fields.currentCryptoKey = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v74, 0);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v24,
              v28,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v17,
              0);
            if ( !this->fields.isNew )
              goto LABEL_55;
            v29 = this->fields.__4__this;
            if ( v29 )
            {
              v30 = v29->fields.svtGetAction;
              if ( v30 )
              {
                v30->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_55;
              }
            }
          }
        }
      }
LABEL_57:
      sub_21FFECC(Instance, v4);
    }
    v51 = this->fields.__4__this;
    if ( !v51 || !Entity )
      goto LABEL_57;
    v52 = Entity[5].klass;
    v53 = Entity[5].monitor;
    v54 = v51->fields.svtGetAction;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v15);
    *(_QWORD *)&v75.fields.currentCryptoKey = v52;
    *(_QWORD *)&v75.fields.fakeValue = v53;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v75, 0);
    v58 = Entity[2];
    *(Il2CppObject *)&v72.fields.currentCryptoKey = Entity[1];
    *(Il2CppObject *)&v72.fields.fakeValue = v58;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v55, v56);
    v70 = v72;
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v70, 0);
    v60 = Entity[6].klass;
    *(_QWORD *)&v76.fields.fakeValue = Entity[6].monitor;
    v61 = v59;
    *(_QWORD *)&v76.fields.currentCryptoKey = v60;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v76, 0);
    if ( !v54 )
      goto LABEL_57;
    ServantRewardAction__Setup(v54, v57, v61, Instance, this->fields.num, 0, 0, 6, 0);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_57;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_57;
    v31 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v32 = this->fields.__4__this;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v33 = this->fields.__4__this;
    if ( !v33 )
      goto LABEL_57;
    v34 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v33->fields.effectPanel;
    if ( !Instance )
      goto LABEL_57;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !v34 )
      goto LABEL_57;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v34, (UnityEngine_Transform_o *)Instance, 0, 0);
    if ( !v32 )
      goto LABEL_57;
    v32->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->fields.svtGetAction, Instance, v35, v36, v37, v38, v39, v40);
    v42 = this->fields.__4__this;
    if ( this->fields.isDoEffect )
    {
      if ( !v42 || !v31 )
        goto LABEL_57;
      v43 = v31[1];
      v44 = v31[2];
      v45 = v42->fields.svtGetAction;
      *(Il2CppObject *)&v72.fields.currentCryptoKey = v43;
      *(Il2CppObject *)&v72.fields.fakeValue = v44;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v41);
      v69 = v72;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v69, 0);
      if ( !v45 )
        goto LABEL_57;
      isNew = this->fields.isNew;
      v47 = Instance;
      v48 = v45;
      v49 = 1;
      v50 = 14;
    }
    else
    {
      if ( !v42 || !v31 )
        goto LABEL_57;
      v62 = v31[1];
      v63 = v31[2];
      v64 = v42->fields.svtGetAction;
      *(Il2CppObject *)&v72.fields.currentCryptoKey = v62;
      *(Il2CppObject *)&v72.fields.fakeValue = v63;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v41);
      v68 = v72;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v68, 0);
      if ( !v64 )
        goto LABEL_57;
      v47 = Instance;
      v48 = v64;
      isNew = 0;
      v49 = 0;
      v50 = 6;
    }
    ServantRewardAction__SetupCommandCode_44050708(v48, v47, isNew, v49, v50, 0);
  }
LABEL_55:
  v65 = (Il2CppObject *)this->fields.__4__this;
  v66 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v66, v65, Method_UserPresentBoxWindow_EndEffect__, 0);
  if ( !v65 )
    goto LABEL_57;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v65, v66, v67);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5937362 & 1) == 0 )
  {
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__);
    byte_5937362 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&CS___8__locals1->fields.__9__2,
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
    sub_21FFECC(Instance, v4);
  CommonUI__OpenNotificationDialog_37294692(v9, title, message, _9__2, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);
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
  CommonUI_o *v5; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5937363 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__);
    byte_5937363 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v5, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x21
  System_Action_o *_9__2; // x22
  System_String_o *name; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5937364 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__);
    byte_5937364 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v5, 0, name, _9__2, 23, 0);
}


void UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5937365 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937365 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v4);
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
  CommonUI_o *v5; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5937366 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__);
    byte_5937366 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__LoadEquipGetEffect(v5, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x21
  System_Action_o *_9__2; // x22
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5937367 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__);
    byte_5937367 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__OpenEquipGetEffect(v5, 0, questRewardInfo, _9__2, 0);
}


void UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5937368 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937368 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v4);
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
  CommonUI_o *v5; // x21
  System_Action_o *_9__1; // x22
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5937369 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__);
    byte_5937369 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__1 = this->fields.__9__1;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__LoadItemGetEffect(v5, questRewardInfo, _9__1, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Instance; // x0
  __int64 v4; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  CommonUI_o *v6; // x20
  UnityEngine_Transform_o *v7; // x22
  System_Action_o *_9__2; // x23
  QuestRewardInfo_o *questRewardInfo; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593736A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__);
    byte_593736A = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v6 = (CommonUI_o *)Instance;
  Instance = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Instance, 0);
  v7 = (UnityEngine_Transform_o *)Instance;
  _9__2 = this->fields.__9__2;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_9:
    sub_21FFECC(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v7, 0, questRewardInfo, _9__2, 0);
}


void UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_593736B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593736B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v4);
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
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20
  struct UserPresentBoxWindow_o *v7; // x8

  v2 = this;
  if ( (byte_593736C & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593736C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)_4__this->fields.svtGetAction;
  if ( !this )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__DestroyImmediate_83246828(gameObject, 0);
  v7 = v2->fields.__4__this;
  if ( !v7 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v7->fields.touchBlocker) == 0 )
LABEL_10:
    sub_21FFECC(this, method);
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