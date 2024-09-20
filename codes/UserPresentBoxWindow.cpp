void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_long__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A59ED3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A59ED3 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.befCommandCodeList, (int32_t)v6, v7, v8);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserPresentBoxWindow__CallbackReceiveRequest(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *v4; // x19
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  UserPresentBoxWindow_o *v9; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct PlayMakerFSM_o *v14; // x8
  struct GetCommandCodes_array *fsm; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct PlayMakerFSM_o *v18; // x8
  struct UserPresentBoxWindow_evPointReward_array *fsmTemplate; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct PlayMakerFSM_o *v22; // x8
  struct GetSvtCoin_array *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  struct PlayMakerFSM_o *v26; // x8
  struct GetSvtCoin_array *addEventHandlers; // x1
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x2

  v4 = this;
  if ( (byte_4A59EAD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    this = (UserPresentBoxWindow_o *)sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A59EAD = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_61718292(
                         (System_String_o *)StringLiteral_15812/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16069/*"]"*/,
                         0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v6,
                                     (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.getSvtList, (int32_t)m_CancellationTokenSource, v7, v8);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v14 = v9->fields.myFsm;
  if ( !v14 )
    goto LABEL_20;
  fsm = (struct GetCommandCodes_array *)v14->fields.fsm;
  v4->fields.getCommandCodeList = fsm;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.getCommandCodeList, (int32_t)fsm, v12, v13);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v18 = v9->fields.myFsm;
  if ( !v18 )
    goto LABEL_20;
  v4->fields.presentOverflowType = v18->fields.m_CachedPtr;
  fsmTemplate = (struct UserPresentBoxWindow_evPointReward_array *)v18->fields.fsmTemplate;
  v4->fields.evPointRewardList = fsmTemplate;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.evPointRewardList, (int32_t)fsmTemplate, v16, v17);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v22 = v9->fields.myFsm;
  if ( !v22 )
    goto LABEL_20;
  v23 = *(struct GetSvtCoin_array **)&v22->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.getSvtCoins, (int32_t)v23, v20, v21);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_1B88814(this, result);
  v26 = v9->fields.myFsm;
  if ( !v26 )
LABEL_20:
    sub_1B8880C(this, result);
  addEventHandlers = (struct GetSvtCoin_array *)v26->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = addEventHandlers;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v4->fields.overflowSvtCoinInfos,
    (int32_t)addEventHandlers,
    v24,
    v25);
  v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v28, v29);
}


bool __fastcall UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  void *Filter_40785400; // x0
  ListViewSort_o **v9; // x8
  ListViewSort_o *v10; // x19
  UserPresentBoxMaster_c *v11; // x0
  bool v12; // w8
  bool result; // w0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v15; // w1

  if ( (byte_4A59EAA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&UserPresentBoxMaster_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59EAA = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
  }
  Filter_40785400 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_40785400 = UserPresentListViewManager_TypeInfo;
  }
  v9 = (ListViewSort_o **)*((_QWORD *)Filter_40785400 + 23);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_52;
  Filter_40785400 = (void *)ListViewSort__GetFilter_40785400(*v9, 13, 0LL);
  if ( ((unsigned __int8)Filter_40785400 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_52;
LABEL_20:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_40785400 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_40785400 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_40785400 + 23) + 672LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( !*((_DWORD *)Filter_40785400 + 56) )
          {
            j_il2cpp_runtime_class_init_0(Filter_40785400);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_40785400 = (void *)System_Array__IndexOf_int_(
                                      PresentBoxFilterSvtEquipMaterial,
                                      userPresentBoxEntity->fields.objectId,
                                      (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)Filter_40785400 & 0x80000000) == 0 )
            return ListViewSort__GetFilter_40785400(v10, 4, 0LL);
        }
        if ( servantMaster )
        {
          Filter_40785400 = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_40785400 )
          {
            switch ( *((_DWORD *)Filter_40785400 + 21) )
            {
              case 1:
              case 0xC:
                goto LABEL_21;
              case 3:
                v15 = 1;
                return ListViewSort__GetFilter_40785400(v10, v15, 0LL);
              case 6:
                v15 = 3;
                return ListViewSort__GetFilter_40785400(v10, v15, 0LL);
              case 7:
                v15 = 2;
                return ListViewSort__GetFilter_40785400(v10, v15, 0LL);
              case 8:
                v15 = 4;
                return ListViewSort__GetFilter_40785400(v10, v15, 0LL);
              default:
                goto LABEL_39;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_40785400 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_40785400 )
          break;
        switch ( *((_DWORD *)Filter_40785400 + 12) )
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
        return ListViewSort__GetFilter_40785400(v10, v15, 0LL);
      case 6:
      case 7:
LABEL_21:
        v12 = ListViewSort__GetFilter_40785400(v10, 0, 0LL);
        result = 0;
        if ( !v12 )
          return result;
        return 1;
      case 0xB:
        v15 = 5;
        return ListViewSort__GetFilter_40785400(v10, v15, 0LL);
      default:
LABEL_39:
        v15 = 14;
        return ListViewSort__GetFilter_40785400(v10, v15, 0LL);
    }
LABEL_52:
    sub_1B8880C(Filter_40785400, servantMaster);
  }
  Filter_40785400 = UserPresentBoxMaster_TypeInfo;
  if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
  if ( !userPresentBoxEntity )
    goto LABEL_52;
  if ( !UserPresentBoxEntity__IsEnableFlag(
          userPresentBoxEntity,
          UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
          0LL) )
  {
    v11 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v11 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_40785400 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v11->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_40785400 & 1) == 0 )
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
  void *Filter_40785400; // x0
  ListViewSort_o **v11; // x8
  ListViewSort_o *v12; // x19
  UserPresentBoxMaster_c *v13; // x0
  int32_t giftType; // w8
  _DWORD *v15; // x8
  bool Filter_40785448; // w8
  bool result; // w0
  int32_t v18; // w1

  if ( (byte_4A59EAB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&UserPresentBoxMaster_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59EAB = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
  }
  Filter_40785400 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_40785400 = UserPresentListViewManager_TypeInfo;
  }
  v11 = (ListViewSort_o **)*((_QWORD *)Filter_40785400 + 23);
  v12 = *v11;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v12 )
    goto LABEL_49;
  Filter_40785400 = (void *)ListViewSort__GetFilter_40785400(*v11, 13, 0LL);
  if ( ((unsigned __int8)Filter_40785400 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_49;
  }
  else
  {
LABEL_12:
    Filter_40785400 = UserPresentBoxMaster_TypeInfo;
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
    v13 = UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
      v13 = UserPresentBoxMaster_TypeInfo;
    }
    Filter_40785400 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v13->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_40785400 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( servantLimitMaster )
    {
      Filter_40785400 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0LL);
      if ( Filter_40785400 )
      {
        v15 = (char *)Filter_40785400 + 24;
        goto LABEL_30;
      }
      return 1;
    }
LABEL_49:
    sub_1B8880C(Filter_40785400, servantLimitMaster);
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_49;
  Filter_40785400 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_40785400 )
    return 1;
  v15 = (char *)Filter_40785400 + 64;
LABEL_30:
  switch ( *v15 )
  {
    case 0:
      if ( !v12 )
        goto LABEL_49;
      if ( !ListViewSort__CheckPresentBoxRarityFilterAll(v12, 0LL)
        && !ListViewSort__UnCheckPresentBoxRarityFilterAll(v12, 0LL) )
      {
        goto LABEL_48;
      }
      return 1;
    case 1:
      if ( !v12 )
        goto LABEL_49;
      Filter_40785448 = ListViewSort__GetFilter_40785448(v12, 0, 0LL);
      result = 0;
      if ( !Filter_40785448 )
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
      if ( ListViewSort__GetFilter_40785448(v12, v18, 0LL) )
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
  __int64 v5; // x19
  void *receiveList; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o **v10; // x22
  int32_t receiveIdx; // w1
  _DWORD *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_4A59EC2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
    byte_4A59EC2 = 1;
  }
  v5 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  v10 = (System_Action_o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v12 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0LL);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v13, v12[19], 0, 0, 0, 0LL);
        return;
      }
      if ( *v10 )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*v10)->fields.m_target)(
          (*v10)->fields.original_method_info,
          *(_QWORD *)&(*v10)->fields.extra_arg);
        return;
      }
    }
LABEL_14:
    sub_1B8880C(receiveList, v7);
  }
  if ( *v10 )
    ActionExtensions__Call(*v10, 0LL);
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

  if ( (byte_4A59ED2 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59ED2 = 1;
  }
  if ( result )
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4A59F46 )
    {
      sub_1B885B0(&UserPresentListViewManager_TypeInfo);
      byte_4A59F46 = 1;
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
      sub_1B8880C(sortInfo, result);
    }
    if ( (byte_4A59F18 & 1) == 0 )
    {
      sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
      byte_4A59F18 = 1;
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
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A59EC8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A59EC8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)userPresentListViewManager & 1) != 0 )
  {
    if ( !mInstance )
      goto LABEL_17;
    TerminalSceneComponent__UpdateQuestBoardList((TerminalSceneComponent_o *)mInstance, 0LL);
  }
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__DestroyList(userPresentListViewManager, v6),
        (userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL)) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(userPresentListViewManager, v6);
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

  if ( (byte_4A59EB9 & 1) == 0 )
  {
    sub_1B885B0(&QuestRewardInfo_TypeInfo);
    byte_4A59EB9 = 1;
  }
  v4 = sub_1B887FC(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v4, 0LL);
  if ( !userPresentBox || !v4 )
    sub_1B8880C(v5, v6);
  result = (QuestRewardInfo_o *)v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v4 + 24) = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A59EBA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5474/*"END_EFFECT"*/);
    byte_4A59EBA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5474/*"END_EFFECT"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A59EC3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3580/*"CLOSE"*/);
    byte_4A59EC3 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3580/*"CLOSE"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A59EB0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_EndReceive__);
    byte_4A59EB0 = 1;
  }
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


void __fastcall UserPresentBoxWindow__EventPointRewardWithSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A59EB1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_EndEffectReceive__);
    byte_4A59EB1 = 1;
  }
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


bool __fastcall UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
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

  if ( (byte_4A59EAE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59EAE = 1;
  }
  memset(&v13, 0, sizeof(v13));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1B8880C(v4, v5);
    if ( !Gift__IsCostumeRelease((int32_t)v13.fields._current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v8);
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)Instance, HIDWORD(current[4].monitor), 0LL) )
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return v9 & (v10 == 6);
}


void __fastcall UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isReceiveFlg; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  System_Action_o *v11; // x22
  System_Action_o *v12; // x23
  const MethodInfo *v13; // x4

  if ( (byte_4A59EC4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_OnClickAll__);
    sub_1B885B0(&Method_UserPresentBoxWindow_ProcessClickAll__);
    sub_1B885B0(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__);
    byte_4A59EC4 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickAll__;
  isReceiveFlg = this->fields.isReceiveFlg;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  if ( isReceiveFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_11;
    UserPresentListViewManager__SetMode_37401520(userPresentListViewManager, 2, v7);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, v6),
          v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(v12, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_11:
      sub_1B8880C(userPresentListViewManager, v6);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v11, v12, v13);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickBack(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct UserPresentBoxWindow_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4A59EC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UserPresentBoxWindow_OnClickBack__);
    byte_4A59EC9 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A59EC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UserPresentBoxWindow_OnClickCheckedItem__);
    byte_4A59EC6 = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, v6),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1B8880C(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_37401520(userPresentListViewManager, 2, v8);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v9);
  }
  else
  {
    v10 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickFilter(UserPresentBoxWindow_o *this, const MethodInfo *method)
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
  PresentBoxFilterSelectMenu_o *v15; // x20
  UserPresentListViewManager_c *v16; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v18; // x22

  if ( (byte_4A59ED1 & 1) == 0 )
  {
    sub_1B885B0(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_ClickFilterEnd__);
    sub_1B885B0(&Method_UserPresentBoxWindow_OnClickFilter__);
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59ED1 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickFilter__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  presentBoxFilterSelectMenu = (UnityEngine_Object_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_presentBoxFilterSelectMenu = &this->fields.presentBoxFilterSelectMenu;
  if ( UnityEngine_Object__op_Equality(presentBoxFilterSelectMenu, 0LL, 0LL) )
  {
    presentBoxFilterKindSelectMenuPrefab = (Il2CppObject *)this->fields.presentBoxFilterKindSelectMenuPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object_(
           presentBoxFilterKindSelectMenuPrefab,
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v8, gameObject, 0LL);
    if ( !v8 )
LABEL_20:
      sub_1B8880C(v10, v11);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.presentBoxFilterSelectMenu,
      (int32_t)Component_object,
      v13,
      v14);
  }
  v15 = *p_presentBoxFilterSelectMenu;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
  }
  v16 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v16 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v16->static_fields->sortInfo;
  v18 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0LL);
  if ( !v15 )
    goto LABEL_20;
  PresentBoxFilterSelectMenu__Open(v15, sortInfo, v18, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  UserPresentBoxWindow_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A59ECF & 1) == 0 )
  {
    sub_1B885B0(&Method_UserPresentBoxWindow_OnClickHelp__);
    byte_4A59ECF = 1;
  }
  v2 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
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

  if ( (byte_4A59EC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UserPresentBoxWindow_OnClickItem__);
    byte_4A59EC5 = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, v6),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1B8880C(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_37401520(userPresentListViewManager, 2, v8);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v9);
  }
  else
  {
    v10 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickPresentHistoryButton(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4A59ECA & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
    sub_1B885B0(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__);
    byte_4A59ECA = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A59EA3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59EA3 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1B8880C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_titleInfo, 0, v8, v9);
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
  UnityEngine_GameObject_o *bgObject; // x0
  int32_t v10; // w2
  int32_t v11; // w3
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
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  Il2CppObject *titlePrefab; // x22
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  TitleInfoControl_o *v30; // x22
  TitleInfoControl_o *v31; // x21
  System_Action_o *v32; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v34; // x21
  System_Action_int__o *v35; // x22
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x2
  bool v41; // w20
  const MethodInfo *v42; // x2

  if ( (byte_4A59EA4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_OnClickBack__);
    sub_1B885B0(&Method_UserPresentBoxWindow__Open_b__69_0__);
    sub_1B885B0(&StringLiteral_5460/*"ENABLE_PRESENT_HISTORY"*/);
    byte_4A59EA4 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  bgObject = (UnityEngine_GameObject_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v13);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v14 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v14, 0, (UnityEngine_GameObject_o *)v14, v15);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v16 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v16, 0, (UnityEngine_GameObject_o *)v16, v17);
  v20 = UserPresentBoxWindow__maxSelectable(v18, v19);
  this->fields.presentMaxSelectable = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.presentMaxSelectable, (int32_t)v20, v21, v22);
  UserPresentBoxWindow__SetSelectCount(this, 0, v23);
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
                                             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v28, v29);
      v30 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v30 )
      {
        TitleInfoControl__SetParent(v30, (UnityEngine_Transform_o *)bgObject, 0LL);
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
              TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgObject, 0LL, 1, 0LL, 42, 0LL);
              bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
              if ( *p_titleInfo )
              {
                TitleInfoControl__changeTitleInfo_37188552((TitleInfoControl_o *)bgObject, 1, 42, 0, 0LL);
                v31 = this->fields.titleInfo;
                v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v32,
                  (Il2CppObject *)this,
                  (intptr_t)Method_UserPresentBoxWindow_OnClickBack__,
                  0LL);
                if ( v31 )
                {
                  TitleInfoControl__SetBackBtnAct(v31, v32, 0LL);
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B8880C(bgObject, isShowBg);
  }
LABEL_20:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v35 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v35, (Il2CppObject *)this, Method_UserPresentBoxWindow__Open_b__69_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(v34, v35, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_28;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, (const MethodInfo *)isShowBg);
  UserPresentBoxWindow__SetFilterButtonImage(this, v36);
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
  UserPresentBoxWindow__RequestPresentList(this, v37);
  this->fields.mReDispAct = redisp_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mReDispAct, (int32_t)redisp_act, v38, v39);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v40);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5460/*"ENABLE_PRESENT_HISTORY"*/, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_28;
  v41 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v41, v42);
}


void __fastcall UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_Array_o *v3; // x0
  TutorialFlag_ImageId_array *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_4A59ED0 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_ImageId___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E);
    byte_4A59ED0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (System_Array_o *)sub_1B88658(TutorialFlag_ImageId___TypeInfo, 3LL);
  v7.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v4 = (TutorialFlag_ImageId_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v3, v7, 0LL);
  if ( !Instance )
    sub_1B8880C(v5, v6);
  CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v4, 201, 0LL, 0LL, 0LL, 0LL);
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
    sub_1B8880C(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_37401520(userPresentListViewManager, 2, v5);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v6);
}


void __fastcall UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  Il2CppObject *v5; // x1
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  UserServantMaster_o *v10; // x8
  UserCommandCodeMaster_o *v11; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int v14; // w21
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
  __int64 v60; // x20
  BalanceConfig_c *v61; // x0
  __int64 v62; // x26
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
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
  int32_t v91; // w2
  int32_t v92; // w3
  const MethodInfo *v93; // x4
  const MethodInfo *v94; // x5
  unsigned __int64 v95; // x29
  __int64 v96; // x19
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
  __int64 v107; // x8
  int v108; // w9
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
  const MethodInfo *v125; // x2
  const MethodInfo *v126; // x2
  _BOOL8 _37688364; // x0
  const MethodInfo *v128; // x1
  const MethodInfo *v129; // x2
  UserPresentBoxWindow_o *v130; // [xsp+8h] [xbp-C8h]
  int capacity; // [xsp+10h] [xbp-C0h]
  int v132; // [xsp+1Ch] [xbp-B4h] BYREF
  int v133; // [xsp+20h] [xbp-B0h] BYREF
  int v134; // [xsp+24h] [xbp-ACh] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-A8h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-A4h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int v138; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int v140; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int v142; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  __int64 servantEquipSum; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A59EA8 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052256);
    sub_1B885B0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10457/*"PRESENT_LIST_INFO"*/);
    sub_1B885B0(&StringLiteral_10966/*"RECEIVE_FILTER_NOTHING"*/);
    sub_1B885B0(&StringLiteral_10965/*"RECEIVE_ALL_DONE"*/);
    sub_1B885B0(&StringLiteral_3950/*"CURRENT_QP_UNIT"*/);
    sub_1B885B0(&StringLiteral_10458/*"PRESENT_LIST_NOTICE"*/);
    sub_1B885B0(&StringLiteral_3948/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A59EA8 = 1;
  }
  entity = 0LL;
  servantEquipSum = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantMaster, (int32_t)MasterData_object, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v10 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_146;
  v11 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v10, (int32_t *)&servantEquipSum + 1, (int32_t *)&servantEquipSum, 1, 0LL);
  if ( !v11 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v11, 0LL);
  svtNumValLb = this->fields.svtNumValLb;
  v14 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  v142 = HIDWORD(servantEquipSum);
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v142, v16, v17, v18);
  if ( !SelfUserGame )
    goto LABEL_146;
  v22 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v19, v20, v21);
  Instance = (__int64)System_String__Format_61721404(v15, v22, v23, 0LL);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0LL);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  v140 = servantEquipSum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v26, v27, v28);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v30, v31, v32);
  Instance = (__int64)System_String__Format_61721404(v25, v29, v33, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0LL);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  v138 = v14;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v138, v36, v37, v38);
  if ( !byte_4A567BB )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A567BB = 1;
  }
  v43 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v43->static_fields->CommandCodeFrameMax;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax, v39, v40, v41);
  Instance = (__int64)System_String__Format_61721404(v35, v42, v44, 0LL);
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
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3950/*"CURRENT_QP_UNIT"*/, 0LL);
  qp = SelfUserGame->fields.qp;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v50, v51, v52);
  Instance = (__int64)System_String__Format(v49, v53, 0LL);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0LL);
  fpNumValLb = this->fields.fpNumValLb;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3948/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint, v56, v57, v58);
  Instance = (__int64)System_String__Format(v55, v59, 0LL);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        0LL);
  if ( !Instance )
    goto LABEL_146;
  v60 = Instance;
  v61 = BalanceConfig_TypeInfo;
  v62 = *(_QWORD *)(v60 + 24);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v61 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = this->fields.presentInfoLabel;
  PresentBoxMax = v61->static_fields->PresentBoxMax;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PRESENT_LIST_INFO"*/, 0LL);
  v134 = v62;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v134, v66, v67, v68);
  v133 = PresentBoxMax;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v70, v71, v72);
  Instance = (__int64)System_String__Format_61721404(v65, v69, v73, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0LL);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_10458/*"PRESENT_LIST_NOTICE"*/, 0LL);
  v132 = PresentBoxMax;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132, v76, v77, v78);
  Instance = (__int64)System_String__Format(v75, v79, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
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
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v81 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4A59F46 )
    {
      sub_1B885B0(&UserPresentListViewManager_TypeInfo);
      byte_4A59F46 = 1;
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
    v81 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
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
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v84 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4A59F46 )
    {
      sub_1B885B0(&UserPresentListViewManager_TypeInfo);
      byte_4A59F46 = 1;
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
    v84 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( v84 || v81 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v86 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v87 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v130 = this;
    capacity = v62;
    v88 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v89 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v90 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562352(
      v90,
      capacity,
      (const MethodInfo_34FD070 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052256);
    if ( capacity >= 1 )
    {
      v95 = 0LL;
      v96 = v60 + 32;
      do
      {
        if ( !v81 )
          goto LABEL_150;
        if ( v95 >= *(unsigned int *)(v60 + 24) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v86,
                     (ItemMaster_o *)v87,
                     *(UserPresentBoxEntity_o **)(v96 + 8 * v95),
                     v93);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v84 )
            goto LABEL_76;
          if ( v95 >= *(unsigned int *)(v60 + 24) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v88,
                       (CommandCodeMaster_o *)v89,
                       *(UserPresentBoxEntity_o **)(v96 + 8 * v95),
                       v81,
                       v94);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v95 >= *(unsigned int *)(v60 + 24) )
LABEL_147:
              sub_1B88814(Instance, v5);
            if ( !v90 )
              goto LABEL_146;
            v5 = *(Il2CppObject **)(v96 + 8 * v95);
            items = v90->fields._items;
            v98 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v90->fields._version;
            if ( !items )
              goto LABEL_146;
            size = v90->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v90,
                v5,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v100 = &items->obj.klass + size;
              v90->fields._size = size + 1;
              v100[4] = (Il2CppClass *)v5;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v5, v91, v92);
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
                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v130;
    if ( !Instance )
      goto LABEL_146;
    v101 = *(_DWORD *)(Instance + 24);
    LODWORD(v62) = capacity;
    v60 = Instance;
  }
  else
  {
    v101 = v62;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, (const MethodInfo *)v5);
  UserPresentBoxWindow__SetSelectCount(this, 0, v102);
  if ( v101 < 1 )
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
                                                 0LL);
        UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v110);
        Instance = (__int64)this->fields.itemReceiveBtn;
        this->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v111 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL);
          UserPresentBoxWindow__SetButtonTxtColor(v111, 0, (UnityEngine_GameObject_o *)v111, v112);
          Instance = (__int64)this->fields.checkedItemBtn;
          this->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v113 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
            UserPresentBoxWindow__SetButtonTxtColor(v113, 0, (UnityEngine_GameObject_o *)v113, v114);
            nonPresentNoticeLabel = this->fields.nonPresentNoticeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v116 = (System_String_o **)&StringLiteral_10965/*"RECEIVE_ALL_DONE"*/;
            if ( (_DWORD)v62 )
              v116 = (System_String_o **)&StringLiteral_10966/*"RECEIVE_FILTER_NOTHING"*/;
            Instance = (__int64)LocalizationManager__Get(*v116, 0LL);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  while ( 1 )
  {
    if ( v106 >= *(_DWORD *)(v60 + 24) )
      goto LABEL_147;
    v107 = *(_QWORD *)(v60 + 8LL * (int)v106 + 32);
    if ( !v107 )
      goto LABEL_146;
    v108 = *(_DWORD *)(v107 + 72);
    if ( v108 == 2 )
    {
      if ( !v103 )
        goto LABEL_146;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v103,
                   &entity,
                   *(_DWORD *)(v107 + 76),
                   (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
      v104 |= v108 == 9;
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
  this->fields.isReceiveFlg = v105 & 1;
  if ( !Instance )
    goto LABEL_146;
  v118 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v118, v105 & 1, (UnityEngine_GameObject_o *)v118, v119);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v104 & 1;
  if ( !Instance )
    goto LABEL_146;
  v120 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v120, v104 & 1, (UnityEngine_GameObject_o *)v120, v121);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v122 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v122, 0, (UnityEngine_GameObject_o *)v122, v123);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_1B8880C(Instance, v5);
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
          (UserPresentBoxEntity_array *)v60,
          v129);
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
    (UserPresentBoxEntity_array *)v60,
    v124);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_37401520((UserPresentListViewManager_o *)Instance, 1, v125);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v117 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v117 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v126);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37688364 = TutorialFlag__Get_37688364(201, 0LL);
  if ( !_37688364 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_37688364, v128);
  EventTutorialMaster__CheckTutorial(0, 78, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4A59EA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_callbackPresentList__);
    byte_4A59EA6 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v5);
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

  if ( (byte_4A59ECB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4A59ECB = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B8880C(sortBtn, is_enable);
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

  if ( (byte_4A59EA5 & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4A59EA5 = 1;
  }
  if ( !btnObject )
    goto LABEL_15;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                     btnObject,
                                     (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
        sub_1B88814(this, isVaild);
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
    sub_1B8880C(this, isVaild);
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
  int64_t checkedItemBtn; // x0
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
  __int64 v19; // x22
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
  __int64 v43; // x8
  __int64 v44; // x19
  UserPresentBoxEntity_o *v45; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v47; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v5 = how;
  v7 = how;
  if ( (byte_4A59EC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052256);
    sub_1B885B0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59EC7 = 1;
  }
  entity = 0LL;
  checkedItemBtn = (int64_t)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = v7;
  if ( !checkedItemBtn )
    goto LABEL_90;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)checkedItemBtn,
                                           0LL);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, v5, (UnityEngine_GameObject_o *)gameObject, v10);
  if ( !isSetOtherButtonsToo )
    return;
  if ( v5 )
  {
    checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( checkedItemBtn )
    {
      v11 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)checkedItemBtn,
                                        0LL);
      UserPresentBoxWindow__SetButtonTxtColor(v11, 0, (UnityEngine_GameObject_o *)v11, v12);
      checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( checkedItemBtn )
      {
        v13 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)checkedItemBtn,
                                          0LL);
        v15 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_90;
  }
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  checkedItemBtn = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_90;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)MasterData_object, checkedItemBtn, 0LL);
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_90;
  checkedItemBtn = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)checkedItemBtn,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_90;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  v19 = *(_QWORD *)&VaildList->max_length;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
  }
  v20 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v20 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v20->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_90;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v21 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4A59F46 )
    {
      sub_1B885B0(&UserPresentListViewManager_TypeInfo);
      byte_4A59F46 = 1;
    }
    v22 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v22 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v22->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_90;
    v21 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
  }
  v23 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v23 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v23->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_90;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v24 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4A59F46 )
    {
      sub_1B885B0(&UserPresentListViewManager_TypeInfo);
      byte_4A59F46 = 1;
    }
    v25 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v25 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v25->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_90;
    v24 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( v21 || v24 )
  {
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v26 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v47 = this;
    v27 = (ItemMaster_o *)v18;
    v28 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v29 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v30 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562352(
      v30,
      v19,
      (const MethodInfo_34FD070 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052256);
    if ( (int)v19 >= 1 )
    {
      v35 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v21 )
          goto LABEL_94;
        if ( v35 >= VaildList->max_length )
          goto LABEL_91;
        checkedItemBtn = UserPresentBoxWindow__CheckFilter(
                           (UserPresentBoxWindow_o *)checkedItemBtn,
                           (ServantMaster_o *)v26,
                           v27,
                           m_Items[v35],
                           v33);
        if ( (checkedItemBtn & 1) != 0 )
        {
LABEL_94:
          if ( !v24 )
            goto LABEL_62;
          if ( v35 >= VaildList->max_length )
            goto LABEL_91;
          checkedItemBtn = UserPresentBoxWindow__CheckRarityFilter(
                             (UserPresentBoxWindow_o *)checkedItemBtn,
                             (ServantLimitMaster_o *)v28,
                             (CommandCodeMaster_o *)v29,
                             m_Items[v35],
                             v21,
                             v34);
          if ( (checkedItemBtn & 1) != 0 )
          {
LABEL_62:
            if ( v35 >= VaildList->max_length )
LABEL_91:
              sub_1B88814(checkedItemBtn, how);
            if ( !v30 )
              goto LABEL_90;
            *(_QWORD *)&how = m_Items[v35];
            items = v30->fields._items;
            v38 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_90;
            size = v30->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                (Il2CppObject *)how,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v40[4] = (Il2CppClass *)how;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), how, v31, v32);
            }
          }
        }
      }
      while ( (unsigned int)v19 != ++v35 );
    }
    if ( !v30
      || (checkedItemBtn = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v30,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_90:
      sub_1B8880C(checkedItemBtn, how);
    }
    LODWORD(v19) = *(_DWORD *)(checkedItemBtn + 24);
    this = v47;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)v27;
  }
  if ( (int)v19 < 1 )
    return;
  checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_90;
  v41 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v41, 1, (UnityEngine_GameObject_o *)v41, v42);
  v43 = *(_QWORD *)&VaildList->max_length;
  if ( (int)v43 < 1 )
    return;
  v44 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v44 >= (unsigned int)v43 )
      goto LABEL_91;
    v45 = VaildList->m_Items[v44];
    if ( !v45 )
      goto LABEL_90;
    giftType = v45->fields.giftType;
    if ( giftType != 2 )
    {
      if ( giftType == 9 )
        break;
      goto LABEL_86;
    }
    if ( !v18 )
      goto LABEL_90;
    checkedItemBtn = DataMasterBase_object__object__int___TryGetEntity(
                       v18,
                       &entity,
                       v45->fields.objectId,
                       (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_90;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v43 = *(_QWORD *)&VaildList->max_length;
LABEL_86:
    if ( (int)++v44 >= (int)v43 )
      return;
  }
  checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_90;
  v13 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  v15 = 1;
LABEL_9:
  UserPresentBoxWindow__SetButtonTxtColor(v13, v15, (UnityEngine_GameObject_o *)v13, v14);
}


void __fastcall UserPresentBoxWindow__SetFilterButtonImage(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UISprite_o *filterBtnSp; // x19
  UserPresentListViewManager_c *v4; // x0
  ListViewSort_o *sortInfo; // x0
  System_String_o **v6; // x22
  UserPresentListViewManager_c *v7; // x0

  if ( (byte_4A59EA9 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A59EA9 = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
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
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0LL);
  v6 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A59F46 )
  {
    sub_1B885B0(&UserPresentListViewManager_TypeInfo);
    byte_4A59F46 = 1;
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
    sub_1B8880C(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0LL);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v6 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
LABEL_20:
  if ( !filterBtnSp )
    goto LABEL_22;
  UISprite__set_spriteName(filterBtnSp, *v6, 0LL);
}


void __fastcall UserPresentBoxWindow__SetPresentHistoryBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *GameObject; // x20
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1

  if ( (byte_4A59ECC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_10730/*"PresentHistoryButton"*/);
    byte_4A59ECC = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10730/*"PresentHistoryButton"*/,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_1B8880C(Component_object, v7);
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

  this->fields.mReDispAct = act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mReDispAct, (int32_t)act, (int32_t)method, v3);
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
  UILabel_o *presentSelectNumLabel; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  UIWidget_o *v9; // x20
  int32_t v10; // w22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = selected;
  if ( (byte_4A59ECD & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10464/*"PRESENT_SELECT_INFO"*/);
    byte_4A59ECD = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10464/*"PRESENT_SELECT_INFO"*/, 0LL);
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v16, 0LL);
  v7 = System_String__Format_61721404(v5, v6, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
  if ( !presentSelectNumLabel )
    goto LABEL_14;
  UILabel__set_text(presentSelectNumLabel, v7, 0LL);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  v9 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v10 = v16;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v10 >= *(_DWORD *)(*(_QWORD *)&v7[7].fields + 116LL) )
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
    sub_1B8880C(v7, v8);
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall UserPresentBoxWindow__ShowEventPointReward(
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x0
  __int64 v15; // x1
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v17; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v20; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v21; // x22
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3

  if ( (byte_4A59EB2 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
    byte_4A59EB2 = 1;
  }
  v7 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = idx;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)callback, v12, v13);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v17 = *(int *)(v7 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v17 < max_length )
    {
      if ( (unsigned int)v17 >= max_length )
        sub_1B88814(v14, v15);
      evpDialog = this->fields.evpDialog;
      v20 = evPointRewardList->m_Items[v17];
      v21 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_1B887FC(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v21,
        (Il2CppObject *)v7,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        v22);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v20, v21, v23);
        return;
      }
LABEL_10:
      sub_1B8880C(v8, v9);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
}


void __fastcall UserPresentBoxWindow__ShowExpiredPresents(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  System_Action_o *v17; // x22

  if ( (byte_4A59EAF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
    sub_1B885B0(&StringLiteral_10451/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_44/*"\n\n"*/);
    byte_4A59EAF = 1;
  }
  v5 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10451/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
    v16 = System_String__Concat_61718292(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v15, 0LL);
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v16, v17, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(v6, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
}


void __fastcall UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A59EB3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A59EB3 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  v4 = UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( v4 )
  {
    if ( !mInstance )
      sub_1B8880C(v4, v5);
    TerminalSceneComponent__UpdateTitleEventInfo((TerminalSceneComponent_o *)mInstance, 0LL);
  }
}


void __fastcall UserPresentBoxWindow___CallbackReceiveRequest_b__80_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A59ED6 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__);
    sub_1B885B0(&StringLiteral_12135/*"SHOW_EFFECT"*/);
    byte_4A59ED6 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12135/*"SHOW_EFFECT"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v8 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B887FC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
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


void __fastcall UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_1B8880C(0LL, method);
  UserPresentListViewManager__SetMode_37401520(userPresentListViewManager, 1, v2);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_1B8880C(0LL, result);
  UserPresentHistoryDialog__Open(presentHistoryDialog, (const MethodInfo *)result);
}


void __fastcall UserPresentBoxWindow___Open_b__69_0(
        UserPresentBoxWindow_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_4A59ED4 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A59ED4 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_1B8880C(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4A59ED5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59ED5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  UserPresentBoxWindow__ReDisp(this, v5);
}


void __fastcall UserPresentBoxWindow___showEffect_b__88_0(
        UserPresentBoxWindow_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A59ED7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_EndEffect__);
    byte_4A59ED7 = 1;
  }
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  UserPresentBoxWindow__CheckSvtGetTutorial(this, v4, v5);
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *touchBlocker; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  __int64 v10; // x20
  System_Action_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_object__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  ActionChain_o *v17; // x21
  __int64 v18; // x20
  System_Action_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A59ED8 & 1) == 0 )
  {
    sub_1B885B0(&ActionChain_TypeInfo);
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__);
    sub_1B885B0(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__);
    sub_1B885B0(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__);
    sub_1B885B0(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__);
    byte_4A59ED8 = 1;
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
      v6 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B887FC(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
      UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__,
        v7);
      if ( userPresentListViewManager )
      {
        UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v6, v8);
        UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v9);
        return;
      }
      goto LABEL_19;
    }
    v10 = sub_1B88658(System_Action_Action____TypeInfo, 2LL);
    v11 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__,
      0LL);
    if ( !v10 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v10 + 24) )
      goto LABEL_20;
    *(_QWORD *)(v10 + 32) = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)v11, v12, v13);
    v14 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
      0LL);
    if ( *(_DWORD *)(v10 + 24) <= 1u )
      goto LABEL_20;
    *(_QWORD *)(v10 + 40) = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), (int32_t)v14, v15, v16);
    v17 = (ActionChain_o *)sub_1B887FC(ActionChain_TypeInfo);
    ActionChain___ctor_46556284(v17, (System_Action_Action__array *)v10, 0LL);
    v18 = sub_1B88658(System_Action___TypeInfo, 1LL);
    v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
    if ( !v18 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v18 + 24) )
LABEL_20:
      sub_1B88814(touchBlocker, v3);
    *(_QWORD *)(v18 + 32) = v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)v19, v20, v21);
    if ( !v17
      || (touchBlocker = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                       (ChainableActionBase_o *)v17,
                                                       (System_Action_array *)v18,
                                                       0LL)) == 0LL )
    {
LABEL_19:
      sub_1B8880C(touchBlocker, v3);
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
    sub_1B8880C(0LL, action);
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
    sub_1B8880C(0LL, action);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4A59EA7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__);
    byte_4A59EA7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v6, 1, 0LL);
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

  if ( (byte_4A59EBD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    byte_4A59EBD = 1;
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
        sub_1B8880C(befSvtList, v10);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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

  if ( (byte_4A59EBF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_1B885B0(&System_Predicate_long__TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
    byte_4A59EBF = 1;
  }
  v9 = (Il2CppObject *)sub_1B887FC(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_16;
  v9[1].klass = (Il2CppClass *)commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v15) = 0;
    return v15;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v13 = (System_Predicate_long__o *)sub_1B887FC(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v13,
    v9,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    0LL);
  if ( !befCommandCodeList )
    goto LABEL_16;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v13,
            (const MethodInfo_34E609C *)Method_System_Collections_Generic_List_long__FindIndex__);
  v15 = Index >> 31;
  if ( (Index & 0x80000000) == 0 || !isAddCommandCode )
    return v15;
  v10 = this->fields.befCommandCodeList;
  if ( !v10
    || (klass = (int64_t)v9[1].klass,
        items = v10->fields._items,
        v17 = Method_System_Collections_Generic_List_long__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_16:
    sub_1B8880C(v10, klass);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v10,
      klass,
      *(const MethodInfo_34E5868 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    items->m_Items[size] = klass;
  }
  LOBYTE(v15) = 1;
  return v15;
}


void __fastcall UserPresentBoxWindow__checkNextSvt(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UserPresentBoxWindow_o *v4; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v6; // x8

  v4 = this;
  if ( (byte_4A59EBC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1B885B0(&StringLiteral_9240/*"NEXT_SVT"*/);
    this = (UserPresentBoxWindow_o *)sub_1B885B0(&StringLiteral_6380/*"FINAL_SVT"*/);
    byte_4A59EBC = 1;
  }
  receiveList = v4->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v4->fields.receiveIdx >= receiveList->fields._size )
  {
    v4->fields.receiveList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.receiveList, 0, v2, v3);
    this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
    v4->fields.receiveIdx = 0;
    if ( this )
    {
      v6 = &StringLiteral_6380/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B8880C(this, method);
  }
  this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v6 = &StringLiteral_9240/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkOverlapSvt(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4A59EBE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4A59EBE = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B8880C(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v7 == v8 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v8;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall UserPresentBoxWindow__endPlay(
        UserPresentBoxWindow_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x21
  AvalonSceneManager_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v13; // x20

  if ( (byte_4A59EBB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
    byte_4A59EBB = 1;
  }
  v5 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)end_act, v10, v11);
  svtGetAction = this->fields.svtGetAction;
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v5, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtGetAction )
LABEL_8:
    sub_1B8880C(v6, v7);
  ServantRewardAction__Play(svtGetAction, v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_4A59EC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    this = (UserPresentBoxWindow_o *)sub_1B885B0(&StringLiteral_9240/*"NEXT_SVT"*/);
    byte_4A59EC0 = 1;
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
    sub_1B8880C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9240/*"NEXT_SVT"*/, 0LL);
}


System_String_o *__fastcall UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  System_String_o *v3; // x0
  __int64 v4; // x1
  int32_t stringLength; // w20
  Il2CppObject *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A59ECE & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&StringLiteral_25154/*"}"*/);
    sub_1B885B0(&StringLiteral_24924/*"{0,"*/);
    byte_4A59ECE = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  v3 = System_Int32__ToString((unsigned int)v2->static_fields + 112, 0LL);
  if ( !v3
    || (stringLength = v3->fields._stringLength,
        (v3 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 116, 0LL)) == 0LL) )
  {
    sub_1B8880C(v3, v4);
  }
  v6 = (Il2CppObject *)v3;
  v10 = v3->fields._stringLength + 2 * (stringLength - v3->fields._stringLength);
  v7 = System_Int32__ToString((int32_t)&v10, 0LL);
  v8 = System_String__Concat_61718292(
         (System_String_o *)StringLiteral_24924/*"{0,"*/,
         v7,
         (System_String_o *)StringLiteral_25154/*"}"*/,
         0LL);
  return System_String__Format(v8, v6, 0LL);
}


void __fastcall UserPresentBoxWindow__receivePresent(
        UserPresentBoxWindow_o *this,
        System_Int64_array *presentIds,
        int32_t selectIdx,
        int32_t selectNum,
        const MethodInfo *method)
{
  int64_t Instance; // x0
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
  NetworkManager_ResultCallbackFunc_o *v20; // x23
  const MethodInfo *v21; // x2

  if ( (byte_4A59EAC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052248);
    sub_1B885B0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow_CallbackReceiveRequest__);
    byte_4A59EAC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_23;
  Instance = (int64_t)UserPresentBoxMaster__getVaildList_40142556(
                        (UserPresentBoxMaster_o *)MasterData_object,
                        Instance,
                        presentIds,
                        0LL);
  if ( !Instance )
    goto LABEL_23;
  v12 = *(_DWORD *)(Instance + 24);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v12 == v14 )
        sub_1B88814(Instance, v10);
      v15 = *(_QWORD *)(Instance + 8LL * v14 + 32);
      if ( !v15 )
        goto LABEL_23;
      v16 = *(_DWORD *)(v15 + 72);
      if ( v16 == 11 || v16 == 1 )
        break;
      if ( v12 == ++v14 )
        goto LABEL_18;
    }
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_18;
    }
LABEL_23:
    sub_1B8880C(Instance, v10);
  }
LABEL_18:
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v17,
    v13,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052248);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.receiveList, (int32_t)v17, v18, v19);
  this->fields.receiveIdx = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (int64_t)NetworkManager__getRequest_object_(
                        v20,
                        (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_23;
  UserPresentReceiveRequest__beginRequest(
    (UserPresentReceiveRequest_o *)Instance,
    presentIds,
    selectIdx,
    selectNum,
    0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v21);
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
        if ( (byte_4A59E98 & 1) == 0 )
        {
          sub_1B885B0(&UserPresentBoxErrorDialog_TypeInfo);
          byte_4A59E98 = 1;
        }
        dialog->fields.jumpType = 0;
        return;
      }
    }
LABEL_18:
    sub_1B8880C(this, method);
  }
  v6 = this->fields.userPresentListViewManager;
  if ( !v6 )
    goto LABEL_18;
  v7 = v6->fields.dialog;
  if ( !v7 )
    goto LABEL_18;
  if ( (byte_4A59E98 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentBoxErrorDialog_TypeInfo);
    byte_4A59E98 = 1;
  }
  v7->fields.jumpType = 1;
}


void __fastcall UserPresentBoxWindow__showEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
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

  if ( (byte_4A59EB4 & 1) == 0 )
  {
    sub_1B885B0(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow__showEffect_b__88_0__);
    byte_4A59EB4 = 1;
  }
  entity = 0LL;
  v47 = 0LL;
  data = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_105;
  method = (const MethodInfo *)(unsigned int)this->fields.receiveIdx;
  if ( (int)method < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    (int32_t)method,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( !receiveList )
      goto LABEL_105;
    v4 = *((_DWORD *)receiveList + 18);
    v5 = (UserPresentBoxEntity_o *)receiveList;
    if ( Gift__IsServant(v4, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &entity,
                              v5->fields.objectId,
                              (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_105;
        receiveList = (void *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_105;
        v6 = (int)receiveList;
        receiveList = (void *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
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
          v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v10, v4, 0LL) )
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
                v12 = data->fields.isNew || data->fields.isGetEffect;
                receiveList = (void *)Gift__IsEventSvtJoin(v4, 0LL);
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
                    if ( ((v33 | (unsigned int)receiveList) & 1) != 0 )
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
                          receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( data )
                          {
                            userSvtId = data->fields.userSvtId;
                            v36 = (CommonUI_o *)receiveList;
                            v37 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B887FC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
                            CombineResultEffectComponent_ClickDelegate___ctor(
                              v37,
                              (Il2CppObject *)this,
                              Method_UserPresentBoxWindow__showEffect_b__88_0__,
                              0LL);
                            if ( v36 )
                            {
                              CommonUI__OpenSecretTreasureDeviceForSvtGet(v36, userSvtId, v37, 0LL);
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
            sub_1B8880C(receiveList, method);
          }
        }
      }
    }
    else if ( Gift__IsCommandCode(v4, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &v47,
                              v5->fields.objectId,
                              (const MethodInfo_311D988 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
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
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v46, v16, 0LL) )
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
    else if ( Gift__IsCostumeRelease(v4, 0LL) )
    {
      objectId = v5->fields.objectId;
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      if ( ServantCostumeMaster__TryGetEntity(
             (ServantCostumeMaster_o *)receiveList,
             &v45,
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
      IsEquip = Gift__IsEquip(v4, 0LL);
      if ( IsEquip )
      {
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v5, v24);
        UserPresentBoxWindow__startRewardEquipGetEffect(this, QuestRewardInfo, v26);
        return;
      }
      if ( Gift__IsItem(v4, 0LL) )
      {
        v27 = v5->fields.objectId;
        receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !receiveList )
          goto LABEL_105;
        if ( CommonUI__IsGetItemEffect((CommonUI_o *)receiveList, v27, 0LL) )
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


void __fastcall UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21

  if ( (byte_4A59EC1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__);
    byte_4A59EC1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !v7 )
LABEL_8:
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, v9, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4A59EB6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
    byte_4A59EB6 = 1;
  }
  v5 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)name, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !v14 )
LABEL_9:
    sub_1B8880C(touchBlocker, v7);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4A59EB7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
    byte_4A59EB7 = 1;
  }
  v5 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)questRewardInfo, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !v14 )
LABEL_9:
    sub_1B8880C(touchBlocker, v7);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0LL);
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
  __int64 v15; // x20
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  UserServantEntity_o *v20; // x21
  EventServantEntity_o *EventServant_40218296; // x0
  EventServantEntity_o *v22; // x22
  __int64 v23; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *JoinMessage; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 *v29; // x8
  Il2CppObject *v30; // x0
  AvalonSceneManager_c *v31; // x8
  CommonUI_o *v32; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v34; // x21
  System_String_o *Message; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x0
  AvalonSceneManager_c *v42; // x8
  CommonUI_o *v43; // x20
  float v44; // s8
  System_Action_o *v45; // x21

  if ( (byte_4A59EB5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
    sub_1B885B0(&StringLiteral_12343/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1B885B0(&StringLiteral_12344/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/);
    byte_4A59EB5 = 1;
  }
  v15 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_DWORD *)(v15 + 24) = giftType;
  *(_QWORD *)(v15 + 32) = userSvtID;
  *(_BYTE *)(v15 + 40) = isDoEffect;
  *(_DWORD *)(v15 + 44) = num;
  *(_BYTE *)(v15 + 48) = isNew;
  *(_DWORD *)(v15 + 52) = presentDialogMessageId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteDialogKey(0LL);
  if ( !Gift__IsEventSvtJoin(*(_DWORD *)(v15 + 24), 0LL) )
    goto LABEL_17;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v15 + 32),
                                (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v20 = (UserServantEntity_o *)Instance;
  EventServant_40218296 = UserServantEntity__getEventServant_40218296((UserServantEntity_o *)Instance, 1, 0LL);
  if ( !EventServant_40218296 || (v22 = EventServant_40218296, EventServant_40218296->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v31 = AvalonSceneManager_TypeInfo;
      v32 = (CommonUI_o *)v30;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v31 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
      v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v15,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v32 )
      {
        CommonUI__maskFadeout(v32, 1, DEFAULT_FADE_TIME, v34, 0LL);
        return;
      }
    }
LABEL_29:
    sub_1B8880C(Instance, v17);
  }
  v23 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_29;
  *(_QWORD *)(v23 + 32) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 32), v15, v24, v25);
  if ( UserServantEntity__HasStatus(v20, 64, 0LL) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v22, 0LL);
    *(_QWORD *)(v23 + 24) = JoinMessage;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)JoinMessage, v27, v28);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_12344/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v22, 0LL);
    *(_QWORD *)(v23 + 24) = Message;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)Message, v36, v37);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_12343/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v38 = LocalizationManager__Get((System_String_o *)*v29, 0LL);
  *(_QWORD *)(v23 + 16) = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)v38, v39, v40);
  v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42 = AvalonSceneManager_TypeInfo;
  v43 = (CommonUI_o *)v41;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v42 = AvalonSceneManager_TypeInfo;
  }
  v44 = v42->static_fields->DEFAULT_FADE_TIME;
  v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v23,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v43 )
    goto LABEL_29;
  CommonUI__maskFadein(v43, v44, v45, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4A59EB8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__);
    sub_1B885B0(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
    byte_4A59EB8 = 1;
  }
  v5 = sub_1B887FC(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)questRewardInfo, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !v14 )
LABEL_9:
    sub_1B8880C(touchBlocker, v7);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow_ClickDelegate___ctor(
        UserPresentBoxWindow_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CDC2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CDBE4;
}


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
  if ( (byte_4A59ED9 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A59ED9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
    sub_1B8880C(this, method);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v10; // w9
  struct UserPresentBoxWindow_o *v11; // x8
  struct UserPresentListViewManager_o *v12; // x8
  int32_t v13; // w1

  if ( (byte_4A59EDA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59EDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_4A59F18 & 1) == 0 )
  {
    Instance = (Il2CppObject *)sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4A59F18 = 1;
  }
  checkedIdList = userPresentListViewManager->fields.checkedIdList;
  if ( checkedIdList )
  {
    v10 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v10;
  }
  v11 = this->fields.__4__this;
  if ( !v11 || (v12 = v11->fields.userPresentListViewManager) == 0LL )
LABEL_13:
    sub_1B8880C(Instance, v4);
  v13 = (int)StringLiteral_1/*""*/;
  v12->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields._expiredPresents_k__BackingField, v13, v5, v6);
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
  struct UserPresentBoxWindow_o *_4__this; // x8
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x20
  System_Action_o *_9__1; // x22
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A59EDB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__);
    byte_4A59EDB = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !evpDialog )
LABEL_8:
    sub_1B8880C(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_37391484(evpDialog, _9__1, method);
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
    sub_1B8880C(this, method);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A59EDD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__);
    byte_4A59EDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v6, _9__3, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A59EDC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59EDC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, v5);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__3(
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
  int32_t v31; // w3
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
  const MethodInfo *v53; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4A59EDE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow_EndEffect__);
    byte_4A59EDE = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    v7 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_55;
    v9 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v8->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v9 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v9, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_55;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.svtGetAction, Instance, v10, v11);
    if ( this->fields.isDoEffect )
    {
      if ( v7 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_40218296((UserServantEntity_o *)v7, 1, 0LL);
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
          *(_QWORD *)&v59.fields.currentCryptoKey = klass;
          *(_QWORD *)&v59.fields.fakeValue = monitor;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v59, 0LL);
          v18 = v7[2];
          v19 = v17;
          *(Il2CppObject *)&v58.fields.currentCryptoKey = v7[1];
          *(Il2CppObject *)&v58.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v57 = v58;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v57, 0LL);
          v21 = v7[6].klass;
          *(_QWORD *)&v60.fields.fakeValue = v7[6].monitor;
          v22 = v20;
          *(_QWORD *)&v60.fields.currentCryptoKey = v21;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v60, 0LL);
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
              0LL);
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
      sub_1B8880C(Instance, v4);
    }
    v40 = this->fields.__4__this;
    if ( !v40 || !v7 )
      goto LABEL_55;
    v41 = v40->fields.svtGetAction;
    v43 = v7[5].klass;
    v42 = v7[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = v43;
    *(_QWORD *)&v61.fields.fakeValue = v42;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v61, 0LL);
    v45 = v7[2];
    v46 = v44;
    *(Il2CppObject *)&v58.fields.currentCryptoKey = v7[1];
    *(Il2CppObject *)&v58.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v56 = v58;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v56, 0LL);
    v48 = v7[6].klass;
    *(_QWORD *)&v62.fields.fakeValue = v7[6].monitor;
    v49 = v47;
    *(_QWORD *)&v62.fields.currentCryptoKey = v48;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v62, 0LL);
    if ( !v41 )
      goto LABEL_55;
    ServantRewardAction__Setup(v41, v46, v49, Instance, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_55;
    v25 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v26 = this->fields.__4__this;
    v27 = v25;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v28 = this->fields.__4__this;
    if ( !v28 )
      goto LABEL_55;
    v29 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v28->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v29 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v29, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !v26 )
      goto LABEL_55;
    v26->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.svtGetAction, Instance, v30, v31);
    v32 = this->fields.__4__this;
    if ( !v32 || !v27 )
      goto LABEL_55;
    v33 = v32->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v34 = v27[2];
      *(Il2CppObject *)&v58.fields.currentCryptoKey = v27[1];
      *(Il2CppObject *)&v58.fields.fakeValue = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v55 = v58;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v55, 0LL);
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
      *(Il2CppObject *)&v58.fields.currentCryptoKey = v27[1];
      *(Il2CppObject *)&v58.fields.fakeValue = v50;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v54 = v58;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v54, 0LL);
      if ( !v33 )
        goto LABEL_55;
      v36 = Instance;
      v38 = 6;
      v39 = v33;
      isNew = 0;
      v37 = 0;
    }
    ServantRewardAction__SetupCommandCode_34606596(v39, v36, isNew, v37, v38, 0LL);
  }
LABEL_53:
  v51 = (Il2CppObject *)this->fields.__4__this;
  v52 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v52, v51, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v51 )
    goto LABEL_55;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v51, v52, v53);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v9; // x19
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A59EDF & 1) == 0 )
  {
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__);
    byte_4A59EDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v9 )
LABEL_8:
    sub_1B8880C(Instance, v4);
  CommonUI__OpenNotificationDialog_30496496(
    v9,
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A59EE0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__);
    byte_4A59EE0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v6, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
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

  if ( (byte_4A59EE1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__);
    byte_4A59EE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v6, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A59EE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59EE2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A59EE3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__);
    byte_4A59EE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__LoadEquipGetEffect(v6, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
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

  if ( (byte_4A59EE4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__);
    byte_4A59EE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__OpenEquipGetEffect(v6, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A59EE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59EE5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A59EE6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__);
    byte_4A59EE6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__LoadItemGetEffect(v6, questRewardInfo, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
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

  if ( (byte_4A59EE7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__);
    byte_4A59EE7 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v6 = (CommonUI_o *)Instance;
  Instance = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v8 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v6 )
LABEL_9:
    sub_1B8880C(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A59EE8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59EE8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
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
  if ( (byte_4A59EE9 & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59EE9 = 1;
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
  UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0LL )
LABEL_10:
    sub_1B8880C(this, method);
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