void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_long__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4D273 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4A4D273 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_long__o *)sub_1B86604(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_35E4138 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.befCommandCodeList, (int32_t)v9, v10, v11);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UserPresentBoxWindow_o *v15; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct PlayMakerFSM_o *v20; // x8
  struct GetCommandCodes_array *fsm; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct PlayMakerFSM_o *v24; // x8
  struct UserPresentBoxWindow_evPointReward_array *fsmTemplate; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct PlayMakerFSM_o *v28; // x8
  struct GetSvtCoin_array *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct PlayMakerFSM_o *v32; // x8
  struct GetSvtCoin_array *addEventHandlers; // x1
  System_Action_o *v34; // x20
  const MethodInfo *v35; // x2

  v4 = this;
  if ( (byte_4A4D24D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, result);
    sub_1B863B8(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___, v5);
    sub_1B863B8(&JsonManager_TypeInfo, v6);
    sub_1B863B8(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, v7);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v8);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v9);
    this = (UserPresentBoxWindow_o *)sub_1B863B8(&StringLiteral_15836/*"]"*/, v10);
    byte_4A4D24D = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_61680480(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(v4, v11);
    return;
  }
  v12 = (Il2CppObject *)System_String__Concat_61683424(
                          (System_String_o *)StringLiteral_15580/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15836/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v12,
                                     (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
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
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.getSvtList, (int32_t)m_CancellationTokenSource, v13, v14);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v20 = v15->fields.myFsm;
  if ( !v20 )
    goto LABEL_20;
  fsm = (struct GetCommandCodes_array *)v20->fields.fsm;
  v4->fields.getCommandCodeList = fsm;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.getCommandCodeList, (int32_t)fsm, v18, v19);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v24 = v15->fields.myFsm;
  if ( !v24 )
    goto LABEL_20;
  v4->fields.presentOverflowType = v24->fields.m_CachedPtr;
  fsmTemplate = (struct UserPresentBoxWindow_evPointReward_array *)v24->fields.fsmTemplate;
  v4->fields.evPointRewardList = fsmTemplate;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.evPointRewardList, (int32_t)fsmTemplate, v22, v23);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v28 = v15->fields.myFsm;
  if ( !v28 )
    goto LABEL_20;
  v29 = *(struct GetSvtCoin_array **)&v28->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = v29;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.getSvtCoins, (int32_t)v29, v26, v27);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_1B8661C(this, result);
  v32 = v15->fields.myFsm;
  if ( !v32 )
LABEL_20:
    sub_1B86614(this, result);
  addEventHandlers = (struct GetSvtCoin_array *)v32->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = addEventHandlers;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.overflowSvtCoinInfos, (int32_t)addEventHandlers, v30, v31);
  v34 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v34, v35);
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
  void *Filter_41835492; // x0
  ListViewSort_o **v14; // x8
  ListViewSort_o *v15; // x19
  UserPresentBoxMaster_c *v16; // x0
  bool v17; // w8
  bool result; // w0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v20; // w1

  if ( (byte_4A4D24A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, servantMaster);
    sub_1B863B8(&BalanceConfig_TypeInfo, v8);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B863B8(&UserPresentBoxMaster_TypeInfo, v11);
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, v12);
    byte_4A4D24A = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, servantMaster);
    byte_4A4D2C6 = 1;
  }
  Filter_41835492 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_41835492 = UserPresentListViewManager_TypeInfo;
  }
  v14 = (ListViewSort_o **)*((_QWORD *)Filter_41835492 + 23);
  v15 = *v14;
  if ( !*v14 )
    goto LABEL_52;
  Filter_41835492 = (void *)ListViewSort__GetFilter_41835492(*v14, 13, 0LL);
  if ( ((unsigned __int8)Filter_41835492 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_52;
LABEL_20:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_41835492 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_41835492 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_41835492 + 23) + 688LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( !*((_DWORD *)Filter_41835492 + 56) )
          {
            j_il2cpp_runtime_class_init_0(Filter_41835492);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_41835492 = (void *)System_Array__IndexOf_int_(
                                      PresentBoxFilterSvtEquipMaterial,
                                      userPresentBoxEntity->fields.objectId,
                                      (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)Filter_41835492 & 0x80000000) == 0 )
            return ListViewSort__GetFilter_41835492(v15, 4, 0LL);
        }
        if ( servantMaster )
        {
          Filter_41835492 = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_41835492 )
          {
            switch ( *((_DWORD *)Filter_41835492 + 21) )
            {
              case 1:
              case 0xC:
                goto LABEL_21;
              case 3:
                v20 = 1;
                return ListViewSort__GetFilter_41835492(v15, v20, 0LL);
              case 6:
                v20 = 3;
                return ListViewSort__GetFilter_41835492(v15, v20, 0LL);
              case 7:
                v20 = 2;
                return ListViewSort__GetFilter_41835492(v15, v20, 0LL);
              case 8:
                v20 = 4;
                return ListViewSort__GetFilter_41835492(v15, v20, 0LL);
              default:
                goto LABEL_39;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_41835492 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_41835492 )
          break;
        switch ( *((_DWORD *)Filter_41835492 + 12) )
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
        return ListViewSort__GetFilter_41835492(v15, v20, 0LL);
      case 6:
      case 7:
LABEL_21:
        v17 = ListViewSort__GetFilter_41835492(v15, 0, 0LL);
        result = 0;
        if ( !v17 )
          return result;
        return 1;
      case 0xB:
        v20 = 5;
        return ListViewSort__GetFilter_41835492(v15, v20, 0LL);
      default:
LABEL_39:
        v20 = 14;
        return ListViewSort__GetFilter_41835492(v15, v20, 0LL);
    }
LABEL_52:
    sub_1B86614(Filter_41835492, servantMaster);
  }
  Filter_41835492 = UserPresentBoxMaster_TypeInfo;
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
    Filter_41835492 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v16->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_41835492 & 1) == 0 )
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
  void *Filter_41835492; // x0
  ListViewSort_o **v13; // x8
  ListViewSort_o *v14; // x19
  UserPresentBoxMaster_c *v15; // x0
  int32_t giftType; // w8
  _DWORD *v17; // x8
  bool Filter_41835540; // w8
  bool result; // w0
  int32_t v20; // w1

  if ( (byte_4A4D24B & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, servantLimitMaster);
    sub_1B863B8(&UserPresentBoxMaster_TypeInfo, v10);
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, v11);
    byte_4A4D24B = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, servantLimitMaster);
    byte_4A4D2C6 = 1;
  }
  Filter_41835492 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_41835492 = UserPresentListViewManager_TypeInfo;
  }
  v13 = (ListViewSort_o **)*((_QWORD *)Filter_41835492 + 23);
  v14 = *v13;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v14 )
    goto LABEL_49;
  Filter_41835492 = (void *)ListViewSort__GetFilter_41835492(*v13, 13, 0LL);
  if ( ((unsigned __int8)Filter_41835492 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_49;
  }
  else
  {
LABEL_12:
    Filter_41835492 = UserPresentBoxMaster_TypeInfo;
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
    Filter_41835492 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v15->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_41835492 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( servantLimitMaster )
    {
      Filter_41835492 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0LL);
      if ( Filter_41835492 )
      {
        v17 = (char *)Filter_41835492 + 24;
        goto LABEL_30;
      }
      return 1;
    }
LABEL_49:
    sub_1B86614(Filter_41835492, servantLimitMaster);
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_49;
  Filter_41835492 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_3214280 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_41835492 )
    return 1;
  v17 = (char *)Filter_41835492 + 64;
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
      Filter_41835540 = ListViewSort__GetFilter_41835540(v14, 0, 0LL);
      result = 0;
      if ( !Filter_41835540 )
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
      if ( ListViewSort__GetFilter_41835540(v14, v20, 0LL) )
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o **v14; // x22
  int32_t receiveIdx; // w1
  _DWORD *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4A4D262 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v6);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__, v7);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, v8);
    byte_4A4D262 = 1;
  }
  v9 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = callback;
  v14 = (System_Action_o **)(v9 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)callback, v12, v13);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v16 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0LL);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v17 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v17,
          (Il2CppObject *)v9,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v17, v16[19], 0, 0, 0, 0LL);
        return;
      }
      if ( *v14 )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*v14)->fields.m_target)(
          (*v14)->fields.original_method_info,
          *(_QWORD *)&(*v14)->fields.extra_arg);
        return;
      }
    }
LABEL_14:
    sub_1B86614(receiveList, v11);
  }
  if ( *v14 )
    ActionExtensions__Call(*v14, 0LL);
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

  if ( (byte_4A4D272 & 1) == 0 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, result);
    byte_4A4D272 = 1;
  }
  if ( result )
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4A4D2C6 )
    {
      sub_1B863B8(&UserPresentListViewManager_TypeInfo, result);
      byte_4A4D2C6 = 1;
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
      sub_1B86614(sortInfo, result);
    }
    if ( (byte_4A4D2B8 & 1) == 0 )
    {
      sub_1B863B8(&Method_System_Collections_Generic_List_long__Clear__, result);
      byte_4A4D2B8 = 1;
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

  if ( (byte_4A4D268 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v3);
    byte_4A4D268 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
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
    sub_1B86614(userPresentListViewManager, v7);
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

  if ( (byte_4A4D259 & 1) == 0 )
  {
    sub_1B863B8(&QuestRewardInfo_TypeInfo, userPresentBox);
    byte_4A4D259 = 1;
  }
  v4 = sub_1B86604(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v4, 0LL);
  if ( !userPresentBox || !v4 )
    sub_1B86614(v5, v6);
  result = (QuestRewardInfo_o *)v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v4 + 24) = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A4D25A & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_5404/*"END_EFFECT"*/, method);
    byte_4A4D25A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B86614(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5404/*"END_EFFECT"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A4D263 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_3495/*"CLOSE"*/, method);
    byte_4A4D263 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B86614(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3495/*"CLOSE"*/, 0LL);
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

  if ( (byte_4A4D250 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, res);
    sub_1B863B8(&Method_UserPresentBoxWindow_EndReceive__, v4);
    byte_4A4D250 = 1;
  }
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A4D251 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, res);
    sub_1B863B8(&Method_UserPresentBoxWindow_EndEffectReceive__, v4);
    byte_4A4D251 = 1;
  }
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A4D24E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A4D24E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B86614(v8, v9);
    if ( !Gift__IsCostumeRelease((int32_t)v17.fields._current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_1B86614(0LL, v12);
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
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
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

  if ( (byte_4A4D264 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_UserPresentBoxWindow_OnClickAll__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow_ProcessClickAll__, v4);
    sub_1B863B8(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__, v5);
    byte_4A4D264 = 1;
  }
  v6 = Method_UserPresentBoxWindow_OnClickAll__;
  isReceiveFlg = this->fields.isReceiveFlg;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickAll__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
  if ( isReceiveFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_11;
    UserPresentListViewManager__SetMode_38422000(userPresentListViewManager, 2, v10);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, v9),
          v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
          System_Action___ctor(v14, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v15 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
          System_Action___ctor(v15, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_11:
      sub_1B86614(userPresentListViewManager, v9);
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

  if ( (byte_4A4D269 & 1) == 0 )
  {
    sub_1B863B8(&Method_UserPresentBoxWindow_OnClickBack__, method);
    byte_4A4D269 = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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

  if ( (byte_4A4D266 & 1) == 0 )
  {
    sub_1B863B8(&Method_UserPresentBoxWindow_OnClickCheckedItem__, method);
    byte_4A4D266 = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, v6),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1B86614(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_38422000(userPresentListViewManager, 2, v8);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v9);
  }
  else
  {
    v10 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B8639C(v10, v10[4]);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  PresentBoxFilterSelectMenu_o *v22; // x20
  UserPresentListViewManager_c *v23; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v25; // x22

  if ( (byte_4A4D271 & 1) == 0 )
  {
    sub_1B863B8(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___, v3);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&Method_UserPresentBoxWindow_ClickFilterEnd__, v6);
    sub_1B863B8(&Method_UserPresentBoxWindow_OnClickFilter__, v7);
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, v8);
    byte_4A4D271 = 1;
  }
  v9 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickFilter__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B8639C(v9, v9[4]);
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
            (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34388184((UnityEngine_GameObject_o *)v15, gameObject, 0LL);
    if ( !v15 )
LABEL_20:
      sub_1B86614(v17, v18);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v15,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.presentBoxFilterSelectMenu, (int32_t)Component_object, v20, v21);
  }
  v22 = *p_presentBoxFilterSelectMenu;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, v13);
    byte_4A4D2C6 = 1;
  }
  v23 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v23 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v23->static_fields->sortInfo;
  v25 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_1B86604(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0LL);
  if ( !v22 )
    goto LABEL_20;
  PresentBoxFilterSelectMenu__Open(v22, sortInfo, v25, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  UserPresentBoxWindow_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A4D26F & 1) == 0 )
  {
    sub_1B863B8(&Method_UserPresentBoxWindow_OnClickHelp__, method);
    byte_4A4D26F = 1;
  }
  v2 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B8639C(v2, v2[4]);
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

  if ( (byte_4A4D265 & 1) == 0 )
  {
    sub_1B863B8(&Method_UserPresentBoxWindow_OnClickItem__, method);
    byte_4A4D265 = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, v6),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1B86614(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_38422000(userPresentListViewManager, 2, v8);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v9);
  }
  else
  {
    v10 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B8639C(v10, v10[4]);
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

  if ( (byte_4A4D26A & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B863B8(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__, v5);
    sub_1B863B8(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__, v6);
    byte_4A4D26A = 1;
  }
  v7 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B863D0(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B8639C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_1B86614(0LL, v11);
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
  const MethodInfo *v9; // x3

  if ( (byte_4A4D243 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4D243 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1B86614(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_titleInfo, 0, v8, v9);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v21; // x3
  UserPresentBoxWindow_o *v22; // x0
  const MethodInfo *v23; // x3
  UserPresentBoxWindow_o *v24; // x0
  const MethodInfo *v25; // x3
  UserPresentBoxWindow_o *v26; // x0
  const MethodInfo *v27; // x1
  struct System_String_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  Il2CppObject *titlePrefab; // x22
  Il2CppObject *Component_object; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  TitleInfoControl_o *v38; // x22
  TitleInfoControl_o *v39; // x21
  System_Action_o *v40; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v42; // x21
  System_Action_int__o *v43; // x22
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x2
  bool v49; // w20
  const MethodInfo *v50; // x2

  if ( (byte_4A4D244 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, isShowBg);
    sub_1B863B8(&System_Action_TypeInfo, v9);
    sub_1B863B8(&AtlasManager_TypeInfo, v10);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v11);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B863B8(&Method_UserPresentBoxWindow_OnClickBack__, v14);
    sub_1B863B8(&Method_UserPresentBoxWindow__Open_b__69_0__, v15);
    sub_1B863B8(&StringLiteral_5391/*"ENABLE_PRESENT_HISTORY"*/, v16);
    byte_4A4D244 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
  bgObject = (UnityEngine_GameObject_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v21);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v22 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v22, 0, (UnityEngine_GameObject_o *)v22, v23);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_28;
  v24 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v24, 0, (UnityEngine_GameObject_o *)v24, v25);
  v28 = UserPresentBoxWindow__maxSelectable(v26, v27);
  this->fields.presentMaxSelectable = v28;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.presentMaxSelectable, (int32_t)v28, v29, v30);
  UserPresentBoxWindow__SetSelectCount(this, 0, v31);
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
                                             (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v36, v37);
      v38 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v38 )
      {
        TitleInfoControl__SetParent(v38, (UnityEngine_Transform_o *)bgObject, 0LL);
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
                TitleInfoControl__changeTitleInfo_38093432((TitleInfoControl_o *)bgObject, 1, 43, 0, 0LL);
                v39 = this->fields.titleInfo;
                v40 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(
                  v40,
                  (Il2CppObject *)this,
                  (intptr_t)Method_UserPresentBoxWindow_OnClickBack__,
                  0LL);
                if ( v39 )
                {
                  TitleInfoControl__SetBackBtnAct(v39, v40, 0LL);
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B86614(bgObject, isShowBg);
  }
LABEL_20:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v43 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
  System_Action_int____ctor(v43, (Il2CppObject *)this, Method_UserPresentBoxWindow__Open_b__69_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(v42, v43, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_28;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, (const MethodInfo *)isShowBg);
  UserPresentBoxWindow__SetFilterButtonImage(this, v44);
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
  UserPresentBoxWindow__RequestPresentList(this, v45);
  this->fields.mReDispAct = redisp_act;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mReDispAct, (int32_t)redisp_act, v46, v47);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v48);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5391/*"ENABLE_PRESENT_HISTORY"*/, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_28;
  v49 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v49, v50);
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

  if ( (byte_4A4D270 & 1) == 0 )
  {
    sub_1B863B8(&TutorialFlag_ImageId___TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E,
      v3);
    byte_4A4D270 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Array_o *)sub_1B86460(TutorialFlag_ImageId___TypeInfo, 3LL);
  v9.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v6 = (TutorialFlag_ImageId_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v5, v9, 0LL);
  if ( !Instance )
    sub_1B86614(v7, v8);
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
    sub_1B86614(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_38422000(userPresentListViewManager, 2, v5);
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
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UserServantMaster_o *v34; // x8
  UserCommandCodeMaster_o *v35; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int v38; // w21
  System_String_o *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x24
  Il2CppObject *v47; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v49; // x23
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x24
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v59; // x23
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x21
  BalanceConfig_c *v68; // x0
  Il2CppObject *v69; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v74; // x22
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v80; // x22
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  Il2CppObject *v84; // x0
  __int64 v85; // x20
  BalanceConfig_c *v86; // x0
  __int64 v87; // x26
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
  System_String_o *v90; // x23
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x24
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v100; // x23
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  Il2CppObject *v104; // x0
  UserPresentListViewManager_c *v105; // x0
  _BOOL4 v106; // w22
  UserPresentListViewManager_c *v107; // x0
  UserPresentListViewManager_c *v108; // x0
  _BOOL4 v109; // w28
  UserPresentListViewManager_c *v110; // x0
  Il2CppObject *v111; // x23
  Il2CppObject *v112; // x24
  Il2CppObject *v113; // x25
  Il2CppObject *v114; // x27
  System_Collections_Generic_List_object__o *v115; // x26
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  const MethodInfo *v118; // x4
  const MethodInfo *v119; // x5
  unsigned __int64 v120; // x29
  __int64 v121; // x19
  struct System_Object_array *items; // x8
  _QWORD *v123; // x9
  __int64 size; // x10
  Il2CppClass **v125; // x0
  int v126; // w24
  const MethodInfo *v127; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v128; // x21
  char v129; // w22
  char v130; // w23
  unsigned int v131; // w25
  __int64 v132; // x8
  int v133; // w9
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v135; // x3
  UserPresentBoxWindow_o *v136; // x0
  const MethodInfo *v137; // x3
  UserPresentBoxWindow_o *v138; // x0
  const MethodInfo *v139; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  System_String_o **v141; // x8
  __int64 v142; // x8
  UserPresentBoxWindow_o *v143; // x0
  const MethodInfo *v144; // x3
  UserPresentBoxWindow_o *v145; // x0
  const MethodInfo *v146; // x3
  UserPresentBoxWindow_o *v147; // x0
  const MethodInfo *v148; // x3
  const MethodInfo *v149; // x2
  const MethodInfo *v150; // x2
  const MethodInfo *v151; // x2
  _BOOL8 _38640612; // x0
  const MethodInfo *v153; // x1
  const MethodInfo *v154; // x2
  UserPresentBoxWindow_o *v155; // [xsp+8h] [xbp-C8h]
  int capacity; // [xsp+10h] [xbp-C0h]
  int v157; // [xsp+1Ch] [xbp-B4h] BYREF
  int v158; // [xsp+20h] [xbp-B0h] BYREF
  int v159; // [xsp+24h] [xbp-ACh] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-A8h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-A4h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int v163; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int v165; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int v167; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  __int64 servantEquipSum; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A4D248 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_1B863B8(&int_TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052840, v14);
    sub_1B863B8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v15);
    sub_1B863B8(&LocalizationManager_TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B863B8(&TutorialFlag_TypeInfo, v18);
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, v19);
    sub_1B863B8(&StringLiteral_10302/*"PRESENT_LIST_INFO"*/, v20);
    sub_1B863B8(&StringLiteral_10810/*"RECEIVE_FILTER_NOTHING"*/, v21);
    sub_1B863B8(&StringLiteral_10809/*"RECEIVE_ALL_DONE"*/, v22);
    sub_1B863B8(&StringLiteral_3917/*"CURRENT_QP_UNIT"*/, v23);
    sub_1B863B8(&StringLiteral_10303/*"PRESENT_LIST_NOTICE"*/, v24);
    sub_1B863B8(&StringLiteral_3915/*"CURRENT_FRIEND_POINT_UNIT"*/, v25);
    sub_1B863B8(&StringLiteral_12256/*"SUM_INFO"*/, v26);
    byte_4A4D248 = 1;
  }
  entity = 0LL;
  servantEquipSum = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)MasterData_object, v32, v33);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v34 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_146;
  v35 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v34, (int32_t *)&servantEquipSum + 1, (int32_t *)&servantEquipSum, 1, 0LL);
  if ( !v35 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v35, 0LL);
  svtNumValLb = this->fields.svtNumValLb;
  v38 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"SUM_INFO"*/, 0LL);
  v167 = HIDWORD(servantEquipSum);
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v167, v40, v41, v42);
  if ( !SelfUserGame )
    goto LABEL_146;
  v46 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v43, v44, v45);
  Instance = (__int64)System_String__Format_61686468(v39, v46, v47, 0LL);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0LL);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"SUM_INFO"*/, 0LL);
  v165 = servantEquipSum;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v165, v50, v51, v52);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep, v54, v55, v56);
  Instance = (__int64)System_String__Format_61686468(v49, v53, v57, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0LL);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"SUM_INFO"*/, 0LL);
  v163 = v38;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163, v60, v61, v62);
  if ( !byte_4A4921C )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, v63);
    byte_4A4921C = 1;
  }
  v68 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v68 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v68->static_fields->CommandCodeFrameMax;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax, v64, v65, v66);
  Instance = (__int64)System_String__Format_61686468(v59, v67, v69, 0LL);
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
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3917/*"CURRENT_QP_UNIT"*/, 0LL);
  qp = SelfUserGame->fields.qp;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v75, v76, v77);
  Instance = (__int64)System_String__Format(v74, v78, 0LL);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0LL);
  fpNumValLb = this->fields.fpNumValLb;
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3915/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint, v81, v82, v83);
  Instance = (__int64)System_String__Format(v80, v84, 0LL);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        0LL);
  if ( !Instance )
    goto LABEL_146;
  v85 = Instance;
  v86 = BalanceConfig_TypeInfo;
  v87 = *(_QWORD *)(v85 + 24);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v86 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = this->fields.presentInfoLabel;
  PresentBoxMax = v86->static_fields->PresentBoxMax;
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_10302/*"PRESENT_LIST_INFO"*/, 0LL);
  v159 = v87;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v159, v91, v92, v93);
  v158 = PresentBoxMax;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v158, v95, v96, v97);
  Instance = (__int64)System_String__Format_61686468(v90, v94, v98, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0LL);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PRESENT_LIST_NOTICE"*/, 0LL);
  v157 = PresentBoxMax;
  v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157, v101, v102, v103);
  Instance = (__int64)System_String__Format(v100, v104, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, v29);
    byte_4A4D2C6 = 1;
  }
  v105 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v105 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v105->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v106 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4A4D2C6 )
    {
      sub_1B863B8(&UserPresentListViewManager_TypeInfo, v29);
      byte_4A4D2C6 = 1;
    }
    v107 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v107 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v107->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v106 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, v29);
    byte_4A4D2C6 = 1;
  }
  v108 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v108 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v108->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v109 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_4A4D2C6 )
    {
      sub_1B863B8(&UserPresentListViewManager_TypeInfo, v29);
      byte_4A4D2C6 = 1;
    }
    v110 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v110 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v110->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v109 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( v109 || v106 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v111 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v112 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v155 = this;
    capacity = v87;
    v113 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v114 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v115 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_56607124(
      v115,
      capacity,
      (const MethodInfo_35FC194 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052840);
    if ( capacity >= 1 )
    {
      v120 = 0LL;
      v121 = v85 + 32;
      do
      {
        if ( !v106 )
          goto LABEL_150;
        if ( v120 >= *(unsigned int *)(v85 + 24) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v111,
                     (ItemMaster_o *)v112,
                     *(UserPresentBoxEntity_o **)(v121 + 8 * v120),
                     v118);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v109 )
            goto LABEL_76;
          if ( v120 >= *(unsigned int *)(v85 + 24) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v113,
                       (CommandCodeMaster_o *)v114,
                       *(UserPresentBoxEntity_o **)(v121 + 8 * v120),
                       v106,
                       v119);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v120 >= *(unsigned int *)(v85 + 24) )
LABEL_147:
              sub_1B8661C(Instance, v29);
            if ( !v115 )
              goto LABEL_146;
            v29 = *(Il2CppObject **)(v121 + 8 * v120);
            items = v115->fields._items;
            v123 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v115->fields._version;
            if ( !items )
              goto LABEL_146;
            size = v115->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v115,
                v29,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
            }
            else
            {
              v125 = &items->obj.klass + size;
              v115->fields._size = size + 1;
              v125[4] = (Il2CppClass *)v29;
              sub_1B8635C((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v29, v116, v117);
            }
          }
        }
      }
      while ( capacity != ++v120 );
    }
    if ( !v115 )
      goto LABEL_146;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v115,
                          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v155;
    if ( !Instance )
      goto LABEL_146;
    v126 = *(_DWORD *)(Instance + 24);
    LODWORD(v87) = capacity;
    v85 = Instance;
  }
  else
  {
    v126 = v87;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, (const MethodInfo *)v29);
  UserPresentBoxWindow__SetSelectCount(this, 0, v127);
  if ( v126 < 1 )
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
        UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v135);
        Instance = (__int64)this->fields.itemReceiveBtn;
        this->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v136 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL);
          UserPresentBoxWindow__SetButtonTxtColor(v136, 0, (UnityEngine_GameObject_o *)v136, v137);
          Instance = (__int64)this->fields.checkedItemBtn;
          this->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v138 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
            UserPresentBoxWindow__SetButtonTxtColor(v138, 0, (UnityEngine_GameObject_o *)v138, v139);
            nonPresentNoticeLabel = this->fields.nonPresentNoticeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v141 = (System_String_o **)&StringLiteral_10809/*"RECEIVE_ALL_DONE"*/;
            if ( (_DWORD)v87 )
              v141 = (System_String_o **)&StringLiteral_10810/*"RECEIVE_FILTER_NOTHING"*/;
            Instance = (__int64)LocalizationManager__Get(*v141, 0LL);
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
                          v142 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
  v128 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  while ( 1 )
  {
    if ( v131 >= *(_DWORD *)(v85 + 24) )
      goto LABEL_147;
    v132 = *(_QWORD *)(v85 + 8LL * (int)v131 + 32);
    if ( !v132 )
      goto LABEL_146;
    v133 = *(_DWORD *)(v132 + 72);
    if ( v133 == 2 )
    {
      if ( !v128 )
        goto LABEL_146;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v128,
                   &entity,
                   *(_DWORD *)(v132 + 76),
                   (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_146;
      if ( LODWORD(entity[3].klass) != 24 )
      {
LABEL_97:
        v130 = 1;
        v129 = 1;
      }
      if ( (v130 & 1) == 0 )
        goto LABEL_102;
    }
    else
    {
      v129 |= v133 == 9;
      v130 = 1;
    }
    if ( (v129 & 1) != 0 )
      break;
LABEL_102:
    if ( v126 == ++v131 )
      goto LABEL_121;
  }
  v130 = 1;
  v129 = 1;
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
  this->fields.isReceiveFlg = v130 & 1;
  if ( !Instance )
    goto LABEL_146;
  v143 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v143, v130 & 1, (UnityEngine_GameObject_o *)v143, v144);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v129 & 1;
  if ( !Instance )
    goto LABEL_146;
  v145 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v145, v129 & 1, (UnityEngine_GameObject_o *)v145, v146);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v147 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v147, 0, (UnityEngine_GameObject_o *)v147, v148);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_1B86614(Instance, v29);
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
          (UserPresentBoxEntity_array *)v85,
          v154);
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
    (UserPresentBoxEntity_array *)v85,
    v149);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_38422000((UserPresentListViewManager_o *)Instance, 1, v150);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v142 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v142 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v151);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38640612 = TutorialFlag__Get_38640612(201, 0LL);
  if ( !_38640612 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_38640612, v153);
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

  if ( (byte_4A4D246 & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_UserPresentListRequest___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B863B8(&Method_UserPresentBoxWindow_callbackPresentList__, v5);
    byte_4A4D246 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_1B86614(0LL, v8);
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

  if ( (byte_4A4D26B & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_4A4D26B = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B86614(sortBtn, is_enable);
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

  if ( (byte_4A4D245 & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_1B863B8(
                                       &Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___,
                                       isVaild);
    byte_4A4D245 = 1;
  }
  if ( !btnObject )
    goto LABEL_15;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                     btnObject,
                                     (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
        sub_1B8661C(this, isVaild);
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
    sub_1B86614(this, isVaild);
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
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x5
  unsigned __int64 v47; // x29
  UserPresentBoxEntity_o **m_Items; // x21
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  UserPresentBoxWindow_o *v53; // x0
  const MethodInfo *v54; // x3
  __int64 v55; // x8
  __int64 v56; // x19
  UserPresentBoxEntity_o *v57; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v59; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v5 = how;
  v7 = how;
  if ( (byte_4A4D267 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeMaster___, how);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052840, v15);
    sub_1B863B8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v16);
    sub_1B863B8(&NetworkManager_TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, v19);
    byte_4A4D267 = 1;
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
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, how);
    byte_4A48C25 = 1;
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
  checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_94;
  checkedItemBtn = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)checkedItemBtn,
                                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_94;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  v31 = *(_QWORD *)&VaildList->max_length;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, how);
    byte_4A4D2C6 = 1;
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
    if ( !byte_4A4D2C6 )
    {
      sub_1B863B8(&UserPresentListViewManager_TypeInfo, how);
      byte_4A4D2C6 = 1;
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
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, how);
    byte_4A4D2C6 = 1;
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
    if ( !byte_4A4D2C6 )
    {
      sub_1B863B8(&UserPresentListViewManager_TypeInfo, how);
      byte_4A4D2C6 = 1;
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
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v38 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v59 = this;
    v39 = (ItemMaster_o *)v30;
    v40 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_94;
    v41 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v42 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_56607124(
      v42,
      v31,
      (const MethodInfo_35FC194 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052840);
    if ( (int)v31 >= 1 )
    {
      v47 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v33 )
          goto LABEL_98;
        if ( v47 >= VaildList->max_length )
          goto LABEL_95;
        checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckFilter(
                                                      (UserPresentBoxWindow_o *)checkedItemBtn,
                                                      (ServantMaster_o *)v38,
                                                      v39,
                                                      m_Items[v47],
                                                      v45);
        if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
        {
LABEL_98:
          if ( !v36 )
            goto LABEL_66;
          if ( v47 >= VaildList->max_length )
            goto LABEL_95;
          checkedItemBtn = (UnityEngine_Component_o *)UserPresentBoxWindow__CheckRarityFilter(
                                                        (UserPresentBoxWindow_o *)checkedItemBtn,
                                                        (ServantLimitMaster_o *)v40,
                                                        (CommandCodeMaster_o *)v41,
                                                        m_Items[v47],
                                                        v33,
                                                        v46);
          if ( ((unsigned __int8)checkedItemBtn & 1) != 0 )
          {
LABEL_66:
            if ( v47 >= VaildList->max_length )
LABEL_95:
              sub_1B8661C(checkedItemBtn, how);
            if ( !v42 )
              goto LABEL_94;
            *(_QWORD *)&how = m_Items[v47];
            items = v42->fields._items;
            v50 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v42->fields._version;
            if ( !items )
              goto LABEL_94;
            size = v42->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v42,
                (Il2CppObject *)how,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &items->obj.klass + size;
              v42->fields._size = size + 1;
              v52[4] = (Il2CppClass *)how;
              sub_1B8635C((CGThumbnailListItem_o *)(v52 + 4), how, v43, v44);
            }
          }
        }
      }
      while ( (unsigned int)v31 != ++v47 );
    }
    if ( !v42
      || (checkedItemBtn = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                        v42,
                                                        (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0LL )
    {
LABEL_94:
      sub_1B86614(checkedItemBtn, how);
    }
    LODWORD(v31) = checkedItemBtn[1].klass;
    this = v59;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)v39;
  }
  if ( (int)v31 < 1 )
    return;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_94;
  v53 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v53, 1, (UnityEngine_GameObject_o *)v53, v54);
  v55 = *(_QWORD *)&VaildList->max_length;
  if ( (int)v55 < 1 )
    return;
  v56 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v56 >= (unsigned int)v55 )
      goto LABEL_95;
    v57 = VaildList->m_Items[v56];
    if ( !v57 )
      goto LABEL_94;
    giftType = v57->fields.giftType;
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
                                                  v57->fields.objectId,
                                                  (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_94;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v55 = *(_QWORD *)&VaildList->max_length;
LABEL_90:
    if ( (int)++v56 >= (int)v55 )
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

  if ( (byte_4A4D249 & 1) == 0 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_17273/*"btn_filter_on"*/, v3);
    sub_1B863B8(&StringLiteral_17272/*"btn_filter"*/, v4);
    byte_4A4D249 = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, method);
    byte_4A4D2C6 = 1;
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
  v8 = (System_String_o **)&StringLiteral_17273/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_4A4D2C6 )
  {
    sub_1B863B8(&UserPresentListViewManager_TypeInfo, method);
    byte_4A4D2C6 = 1;
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
    sub_1B86614(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0LL);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v8 = (System_String_o **)&StringLiteral_17272/*"btn_filter"*/;
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

  if ( (byte_4A4D26C & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_10570/*"PresentHistoryButton"*/, v6);
    byte_4A4D26C = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10570/*"PresentHistoryButton"*/,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_1B86614(Component_object, v9);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, is_enable, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__SetReDispAction(
        UserPresentBoxWindow_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mReDispAct = act;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mReDispAct, (int32_t)act, (int32_t)method, v3);
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
  if ( (byte_4A4D26D & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&selected);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_10309/*"PRESENT_SELECT_INFO"*/, v5);
    byte_4A4D26D = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10309/*"PRESENT_SELECT_INFO"*/, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0LL);
  v9 = System_String__Format_61686468(v7, v8, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
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
    sub_1B86614(v9, v10);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v19; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v22; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3

  if ( (byte_4A4D252 & 1) == 0 )
  {
    sub_1B863B8(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo, *(_QWORD *)&idx);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__, v7);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, v8);
    byte_4A4D252 = 1;
  }
  v9 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = callback;
  *(_DWORD *)(v9 + 24) = idx;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)callback, v14, v15);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v19 = *(int *)(v9 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v19 < max_length )
    {
      if ( (unsigned int)v19 >= max_length )
        sub_1B8661C(v16, v17);
      evpDialog = this->fields.evpDialog;
      v22 = evPointRewardList->m_Items[v19];
      v23 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_1B86604(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v23,
        (Il2CppObject *)v9,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        v24);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v22, v23, v25);
        return;
      }
LABEL_10:
      sub_1B86614(v10, v11);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  System_Action_o *v23; // x22

  if ( (byte_4A4D24F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&LocalizationManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__, v7);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_10296/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v9);
    sub_1B863B8(&StringLiteral_44/*"\n\n"*/, v10);
    byte_4A4D24F = 1;
  }
  v11 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)callback, v16, v17);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
    v22 = System_String__Concat_61683424(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v21, 0LL);
    v23 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v11,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v22, v23, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_12:
    sub_1B86614(v12, v13);
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

  if ( (byte_4A4D253 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v2);
    byte_4A4D253 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
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
      sub_1B86614(v5, v6);
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

  if ( (byte_4A4D276 & 1) == 0 )
  {
    sub_1B863B8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__, v3);
    sub_1B863B8(&StringLiteral_12005/*"SHOW_EFFECT"*/, v4);
    byte_4A4D276 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12005/*"SHOW_EFFECT"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B86614(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v10 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B86604(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
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
    sub_1B86614(0LL, method);
  UserPresentListViewManager__SetMode_38422000(userPresentListViewManager, 1, v2);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_1B86614(0LL, result);
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

  if ( (byte_4A4D274 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4A4D274 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_1B86614(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4A4D275 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A4D275 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
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

  if ( (byte_4A4D277 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_UserPresentBoxWindow_EndEffect__, v4);
    byte_4A4D277 = 1;
  }
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_object__o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  ActionChain_o *v26; // x21
  __int64 v27; // x20
  System_Action_o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4A4D278 & 1) == 0 )
  {
    sub_1B863B8(&ActionChain_TypeInfo, method);
    sub_1B863B8(&System_Action___TypeInfo, v3);
    sub_1B863B8(&System_Action_Action____TypeInfo, v4);
    sub_1B863B8(&System_Action_Action__TypeInfo, v5);
    sub_1B863B8(&System_Action_TypeInfo, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v8);
    sub_1B863B8(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__, v9);
    sub_1B863B8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__, v10);
    sub_1B863B8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__, v11);
    sub_1B863B8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, v12);
    byte_4A4D278 = 1;
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
      v16 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B86604(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
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
    v19 = sub_1B86460(System_Action_Action____TypeInfo, 2LL);
    v20 = (System_Action_object__o *)sub_1B86604(System_Action_Action__TypeInfo);
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
    sub_1B8635C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v20, v21, v22);
    v23 = (System_Action_object__o *)sub_1B86604(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v23,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
      0LL);
    if ( *(_DWORD *)(v19 + 24) <= 1u )
      goto LABEL_20;
    *(_QWORD *)(v19 + 40) = v23;
    sub_1B8635C((CGThumbnailListItem_o *)(v19 + 40), (int32_t)v23, v24, v25);
    v26 = (ActionChain_o *)sub_1B86604(ActionChain_TypeInfo);
    ActionChain___ctor_47543752(v26, (System_Action_Action__array *)v19, 0LL);
    v27 = sub_1B86460(System_Action___TypeInfo, 1LL);
    v28 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
    if ( !v27 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v27 + 24) )
LABEL_20:
      sub_1B8661C(touchBlocker, v13);
    *(_QWORD *)(v27 + 32) = v28;
    sub_1B8635C((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v28, v29, v30);
    if ( !v26
      || (touchBlocker = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                       (ChainableActionBase_o *)v26,
                                                       (System_Action_array *)v27,
                                                       0LL)) == 0LL )
    {
LABEL_19:
      sub_1B86614(touchBlocker, v13);
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
    sub_1B86614(0LL, action);
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
    sub_1B86614(0LL, action);
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

  if ( (byte_4A4D247 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, result);
    sub_1B863B8(&AtlasManager_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, v6);
    byte_4A4D247 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
  v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A4D25D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    byte_4A4D25D = 1;
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
        sub_1B86614(befSvtList, v10);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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

  if ( (byte_4A4D25F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_long__Add__, commandCodeId);
    sub_1B863B8(&Method_System_Collections_Generic_List_long__FindIndex__, v9);
    sub_1B863B8(&System_Predicate_long__TypeInfo, v10);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__, v11);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo, v12);
    byte_4A4D25F = 1;
  }
  v13 = (Il2CppObject *)sub_1B86604(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
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
  v17 = (System_Predicate_long__o *)sub_1B86604(System_Predicate_long__TypeInfo);
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
            (const MethodInfo_35E51C0 *)Method_System_Collections_Generic_List_long__FindIndex__);
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
    sub_1B86614(v14, klass);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v14,
      klass,
      *(const MethodInfo_35E498C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UserPresentBoxWindow_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v8; // x8

  v4 = this;
  if ( (byte_4A4D25C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    sub_1B863B8(&StringLiteral_9117/*"NEXT_SVT"*/, v5);
    this = (UserPresentBoxWindow_o *)sub_1B863B8(&StringLiteral_6350/*"FINAL_SVT"*/, v6);
    byte_4A4D25C = 1;
  }
  receiveList = v4->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v4->fields.receiveIdx >= receiveList->fields._size )
  {
    v4->fields.receiveList = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.receiveList, 0, v2, v3);
    this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
    v4->fields.receiveIdx = 0;
    if ( this )
    {
      v8 = &StringLiteral_6350/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B86614(this, method);
  }
  this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v8 = &StringLiteral_9117/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v8, 0LL);
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

  if ( (byte_4A4D25E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_4A4D25E = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B86614(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v16; // x20

  if ( (byte_4A4D25B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, end_act);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, v6);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, v7);
    byte_4A4D25B = 1;
  }
  v8 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = end_act;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)end_act, v13, v14);
  svtGetAction = this->fields.svtGetAction;
  v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v8, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtGetAction )
LABEL_8:
    sub_1B86614(v9, v10);
  ServantRewardAction__Play(svtGetAction, v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_4A4D260 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    this = (UserPresentBoxWindow_o *)sub_1B863B8(&StringLiteral_9117/*"NEXT_SVT"*/, v3);
    byte_4A4D260 = 1;
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
    sub_1B86614(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9117/*"NEXT_SVT"*/, 0LL);
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

  if ( (byte_4A4D26E & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&StringLiteral_24987/*"}"*/, v2);
    sub_1B863B8(&StringLiteral_24760/*"{0,"*/, v3);
    byte_4A4D26E = 1;
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
    sub_1B86614(v5, v6);
  }
  v8 = (Il2CppObject *)v5;
  v12 = v5->fields._stringLength + 2 * (stringLength - v5->fields._stringLength);
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  v10 = System_String__Concat_61683424(
          (System_String_o *)StringLiteral_24760/*"{0,"*/,
          v9,
          (System_String_o *)StringLiteral_24987/*"}"*/,
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
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  NetworkManager_ResultCallbackFunc_o *v29; // x23
  const MethodInfo *v30; // x2

  if ( (byte_4A4D24C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, presentIds);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052832, v9);
    sub_1B863B8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v10);
    sub_1B863B8(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16);
    sub_1B863B8(&Method_UserPresentBoxWindow_CallbackReceiveRequest__, v17);
    byte_4A4D24C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v19);
    byte_4A48C25 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_27;
  Instance = UserPresentBoxMaster__getVaildList_41179668(
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
        sub_1B8661C(Instance, v19);
      v24 = *((_QWORD *)Instance + v23 + 4);
      if ( !v24 )
        goto LABEL_27;
      v25 = *(_DWORD *)(v24 + 72);
      if ( v25 == 11 || v25 == 1 )
        break;
      if ( v21 == ++v23 )
        goto LABEL_22;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_22;
    }
LABEL_27:
    sub_1B86614(Instance, v19);
  }
LABEL_22:
  v26 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56607308(
    v26,
    v22,
    (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___76052832);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v26;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.receiveList, (int32_t)v26, v27, v28);
  this->fields.receiveIdx = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v29,
               (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_27;
  UserPresentReceiveRequest__beginRequest(
    (UserPresentReceiveRequest_o *)Instance,
    presentIds,
    selectIdx,
    selectNum,
    0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v30);
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
        if ( (byte_4A4D238 & 1) == 0 )
        {
          sub_1B863B8(&UserPresentBoxErrorDialog_TypeInfo, method);
          byte_4A4D238 = 1;
        }
        dialog->fields.jumpType = 0;
        return;
      }
    }
LABEL_18:
    sub_1B86614(this, method);
  }
  v6 = this->fields.userPresentListViewManager;
  if ( !v6 )
    goto LABEL_18;
  v7 = v6->fields.dialog;
  if ( !v7 )
    goto LABEL_18;
  if ( (byte_4A4D238 & 1) == 0 )
  {
    sub_1B863B8(&UserPresentBoxErrorDialog_TypeInfo, method);
    byte_4A4D238 = 1;
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

  if ( (byte_4A4D254 & 1) == 0 )
  {
    sub_1B863B8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v9);
    sub_1B863B8(&MissionInfoMaker_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B863B8(&Method_UserPresentBoxWindow__showEffect_b__88_0__, v14);
    byte_4A4D254 = 1;
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
                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( !receiveList )
      goto LABEL_105;
    v16 = *((_DWORD *)receiveList + 18);
    v17 = (UserPresentBoxEntity_o *)receiveList;
    if ( Gift__IsServant(v16, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &entity,
                              v17->fields.objectId,
                              (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v62, 0LL);
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
                          receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( data )
                          {
                            userSvtId = data->fields.userSvtId;
                            v48 = (CommonUI_o *)receiveList;
                            v49 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B86604(CombineResultEffectComponent_ClickDelegate_TypeInfo);
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
            sub_1B86614(receiveList, method);
          }
        }
      }
    }
    else if ( Gift__IsCommandCode(v16, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &v59,
                              v17->fields.objectId,
                              (const MethodInfo_32142CC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
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
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v63, 0LL);
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
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
        receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4A4D261 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B863B8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, v6);
    byte_4A4D261 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v9;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !v11 )
LABEL_8:
    sub_1B86614(Instance, v8);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_4A4D256 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, name);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__, v7);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, v8);
    byte_4A4D256 = 1;
  }
  v9 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = name;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)name, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !v18 )
LABEL_9:
    sub_1B86614(touchBlocker, v11);
  CommonUI__maskFadeout(v18, 1, DEFAULT_FADE_TIME, v20, 0LL);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_4A4D257 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, questRewardInfo);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__, v7);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, v8);
    byte_4A4D257 = 1;
  }
  v9 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = questRewardInfo;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)questRewardInfo, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !v18 )
LABEL_9:
    sub_1B86614(touchBlocker, v11);
  CommonUI__maskFadeout(v18, 1, DEFAULT_FADE_TIME, v20, 0LL);
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
  __int64 v28; // x20
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UserServantEntity_o *v33; // x21
  EventServantEntity_o *EventServant_41256052; // x0
  EventServantEntity_o *v35; // x22
  __int64 v36; // x19
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *JoinMessage; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 *v42; // x8
  Il2CppObject *v43; // x0
  AvalonSceneManager_c *v44; // x8
  CommonUI_o *v45; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v47; // x21
  System_String_o *Message; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_String_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x0
  AvalonSceneManager_c *v55; // x8
  CommonUI_o *v56; // x20
  float v57; // s8
  System_Action_o *v58; // x21

  if ( (byte_4A4D255 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, userSvtID);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v15);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_1B863B8(&LocalizationManager_TypeInfo, v18);
    sub_1B863B8(&ScriptManager_TypeInfo, v19);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__, v22);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, v23);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__, v24);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v25);
    sub_1B863B8(&StringLiteral_12219/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v26);
    sub_1B863B8(&StringLiteral_12220/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/, v27);
    byte_4A4D255 = 1;
  }
  v28 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_29;
  *(_QWORD *)(v28 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v28 + 16), (int32_t)this, v31, v32);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v28 + 32),
                                (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v33 = (UserServantEntity_o *)Instance;
  EventServant_41256052 = UserServantEntity__getEventServant_41256052((UserServantEntity_o *)Instance, 1, 0LL);
  if ( !EventServant_41256052 || (v35 = EventServant_41256052, EventServant_41256052->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v44 = AvalonSceneManager_TypeInfo;
      v45 = (CommonUI_o *)v43;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v44 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v44->static_fields->DEFAULT_FADE_TIME;
      v47 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v47,
        (Il2CppObject *)v28,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v45 )
      {
        CommonUI__maskFadeout(v45, 1, DEFAULT_FADE_TIME, v47, 0LL);
        return;
      }
    }
LABEL_29:
    sub_1B86614(Instance, v30);
  }
  v36 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_29;
  *(_QWORD *)(v36 + 32) = v28;
  sub_1B8635C((CGThumbnailListItem_o *)(v36 + 32), v28, v37, v38);
  if ( UserServantEntity__HasStatus(v33, 64LL, 0LL) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v35, 0LL);
    *(_QWORD *)(v36 + 24) = JoinMessage;
    sub_1B8635C((CGThumbnailListItem_o *)(v36 + 24), (int32_t)JoinMessage, v40, v41);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = &StringLiteral_12220/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v35, 0LL);
    *(_QWORD *)(v36 + 24) = Message;
    sub_1B8635C((CGThumbnailListItem_o *)(v36 + 24), (int32_t)Message, v49, v50);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = &StringLiteral_12219/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v51 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
  *(_QWORD *)(v36 + 16) = v51;
  sub_1B8635C((CGThumbnailListItem_o *)(v36 + 16), (int32_t)v51, v52, v53);
  v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = AvalonSceneManager_TypeInfo;
  v56 = (CommonUI_o *)v54;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v55 = AvalonSceneManager_TypeInfo;
  }
  v57 = v55->static_fields->DEFAULT_FADE_TIME;
  v58 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v36,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v56 )
    goto LABEL_29;
  CommonUI__maskFadein(v56, v57, v58, 0LL);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_4A4D258 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, questRewardInfo);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__, v7);
    sub_1B863B8(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, v8);
    byte_4A4D258 = 1;
  }
  v9 = sub_1B86604(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = questRewardInfo;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)questRewardInfo, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !v18 )
LABEL_9:
    sub_1B86614(touchBlocker, v11);
  CommonUI__maskFadeout(v18, 1, DEFAULT_FADE_TIME, v20, 0LL);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D1FAC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1F64;
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
  if ( (byte_4A4D279 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, hasGetServant);
    byte_4A4D279 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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
    sub_1B86614(this, method);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v11; // w9
  struct UserPresentBoxWindow_o *v12; // x8
  struct UserPresentListViewManager_o *v13; // x8
  int32_t v14; // w1

  if ( (byte_4A4D27A & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4D27A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_4A4D2B8 & 1) == 0 )
  {
    Instance = (CommonUI_o *)sub_1B863B8(&Method_System_Collections_Generic_List_long__Clear__, v5);
    byte_4A4D2B8 = 1;
  }
  checkedIdList = userPresentListViewManager->fields.checkedIdList;
  if ( checkedIdList )
  {
    v11 = checkedIdList->fields._version + 1;
    checkedIdList->fields._size = 0;
    checkedIdList->fields._version = v11;
  }
  v12 = this->fields.__4__this;
  if ( !v12 || (v13 = v12->fields.userPresentListViewManager) == 0LL )
LABEL_13:
    sub_1B86614(Instance, v5);
  v14 = (int)StringLiteral_1/*""*/;
  v13->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v13->fields._expiredPresents_k__BackingField, v14, v6, v7);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v3 = this;
  if ( (byte_4A4D27B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isOk);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_1B863B8(
                                                             &Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
                                                             v4);
    byte_4A4D27B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !evpDialog )
LABEL_8:
    sub_1B86614(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_38411960(evpDialog, _9__1, method);
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
    sub_1B86614(this, method);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A4D27D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__, v4);
    byte_4A4D27D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !v8 )
    sub_1B86614(Instance, v6);
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

  if ( (byte_4A4D27C & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_4A4D27C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B86614(Instance, v5);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w21
  struct UserPresentBoxWindow_o *v22; // x8
  ServantRewardAction_o *svtGetAction; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v26; // w0
  Il2CppObject v27; // q1
  int32_t v28; // w23
  int64_t v29; // x0
  Il2CppClass *v30; // x8
  int64_t v31; // x20
  struct UserPresentBoxWindow_o *v32; // x8
  struct ServantRewardAction_o *v33; // x8
  Il2CppObject *v34; // x0
  struct UserPresentBoxWindow_o *v35; // x22
  Il2CppObject *v36; // x21
  struct UserPresentBoxWindow_o *v37; // x8
  SummonAssetManager_o *v38; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct UserPresentBoxWindow_o *v41; // x8
  ServantRewardAction_o *v42; // x20
  Il2CppObject v43; // q1
  bool isNew; // w2
  int64_t v45; // x1
  bool v46; // w3
  int32_t v47; // w4
  ServantRewardAction_o *v48; // x0
  struct UserPresentBoxWindow_o *v49; // x8
  ServantRewardAction_o *v50; // x21
  void *v51; // x22
  Il2CppClass *v52; // x23
  int32_t v53; // w0
  Il2CppObject v54; // q1
  int32_t v55; // w22
  int64_t v56; // x0
  Il2CppClass *v57; // x8
  int64_t v58; // x20
  Il2CppObject v59; // q1
  Il2CppObject *v60; // x19
  System_Action_o *v61; // x20
  const MethodInfo *v62; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4A4D27E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_1B863B8(&Method_UserPresentBoxWindow_EndEffect__, v11);
    byte_4A4D27E = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    v16 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.svtGetAction, Instance, v19, v20);
    if ( this->fields.isDoEffect )
    {
      if ( v16 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_41256052((UserServantEntity_o *)v16, 1, 0LL);
        v21 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v21 = 6;
          else
            v21 = 14;
        }
        v22 = this->fields.__4__this;
        if ( v22 )
        {
          svtGetAction = v22->fields.svtGetAction;
          klass = v16[5].klass;
          monitor = v16[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v68.fields.currentCryptoKey = klass;
          *(_QWORD *)&v68.fields.fakeValue = monitor;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v68, 0LL);
          v27 = v16[2];
          v28 = v26;
          *(Il2CppObject *)&v67.fields.currentCryptoKey = v16[1];
          *(Il2CppObject *)&v67.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v66 = v67;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v66, 0LL);
          v30 = v16[6].klass;
          *(_QWORD *)&v69.fields.fakeValue = v16[6].monitor;
          v31 = v29;
          *(_QWORD *)&v69.fields.currentCryptoKey = v30;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v69, 0LL);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v28,
              v31,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v21,
              0LL);
            if ( !this->fields.isNew )
              goto LABEL_53;
            v32 = this->fields.__4__this;
            if ( v32 )
            {
              v33 = v32->fields.svtGetAction;
              if ( v33 )
              {
                v33->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_53;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1B86614(Instance, v13);
    }
    v49 = this->fields.__4__this;
    if ( !v49 || !v16 )
      goto LABEL_55;
    v50 = v49->fields.svtGetAction;
    v52 = v16[5].klass;
    v51 = v16[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v70.fields.currentCryptoKey = v52;
    *(_QWORD *)&v70.fields.fakeValue = v51;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v70, 0LL);
    v54 = v16[2];
    v55 = v53;
    *(Il2CppObject *)&v67.fields.currentCryptoKey = v16[1];
    *(Il2CppObject *)&v67.fields.fakeValue = v54;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v65 = v67;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v65, 0LL);
    v57 = v16[6].klass;
    *(_QWORD *)&v71.fields.fakeValue = v16[6].monitor;
    v58 = v56;
    *(_QWORD *)&v71.fields.currentCryptoKey = v57;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v71, 0LL);
    if ( !v50 )
      goto LABEL_55;
    ServantRewardAction__Setup(v50, v55, v58, Instance, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_55;
    v34 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_32167DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v35 = this->fields.__4__this;
    v36 = v34;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v37 = this->fields.__4__this;
    if ( !v37 )
      goto LABEL_55;
    v38 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v37->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v38 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v38, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !v35 )
      goto LABEL_55;
    v35->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1B8635C((CGThumbnailListItem_o *)&v35->fields.svtGetAction, Instance, v39, v40);
    v41 = this->fields.__4__this;
    if ( !v41 || !v36 )
      goto LABEL_55;
    v42 = v41->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v43 = v36[2];
      *(Il2CppObject *)&v67.fields.currentCryptoKey = v36[1];
      *(Il2CppObject *)&v67.fields.fakeValue = v43;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v64 = v67;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v64, 0LL);
      if ( !v42 )
        goto LABEL_55;
      isNew = this->fields.isNew;
      v45 = Instance;
      v46 = 1;
      v47 = 14;
      v48 = v42;
    }
    else
    {
      v59 = v36[2];
      *(Il2CppObject *)&v67.fields.currentCryptoKey = v36[1];
      *(Il2CppObject *)&v67.fields.fakeValue = v59;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v63 = v67;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v63, 0LL);
      if ( !v42 )
        goto LABEL_55;
      v45 = Instance;
      v47 = 6;
      v48 = v42;
      isNew = 0;
      v46 = 0;
    }
    ServantRewardAction__SetupCommandCode_35386332(v48, v45, isNew, v46, v47, 0LL);
  }
LABEL_53:
  v60 = (Il2CppObject *)this->fields.__4__this;
  v61 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v61, v60, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v60 )
    goto LABEL_55;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v60, v61, v62);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A4D27F & 1) == 0 )
  {
    sub_1B863B8(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__, v4);
    byte_4A4D27F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_1B86604(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  if ( !v11 )
LABEL_8:
    sub_1B86614(Instance, v6);
  CommonUI__OpenNotificationDialog_30485588(
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A4D280 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_4A4D280 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v8 )
    sub_1B86614(Instance, v6);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4D281 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_4A4D281 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v8 )
    sub_1B86614(Instance, v6);
  CommonUI__OpenCostumeReleaseEffect(v8, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A4D282 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A4D282 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B86614(Instance, v4);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A4D283 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__, v4);
    byte_4A4D283 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v8 )
    sub_1B86614(Instance, v6);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4D284 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__, v4);
    byte_4A4D284 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v8 )
    sub_1B86614(Instance, v6);
  CommonUI__OpenEquipGetEffect(v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A4D285 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A4D285 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B86614(Instance, v4);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4D286 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__, v4);
    byte_4A4D286 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v8 )
    sub_1B86614(Instance, v6);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A4D287 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__, v4);
    byte_4A4D287 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  if ( !v8 )
LABEL_9:
    sub_1B86614(Instance, v6);
  CommonUI__OpenItemGetEffect(v8, v10, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A4D288 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A4D288 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B86614(Instance, v4);
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
  if ( (byte_4A4D289 & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4D289 = 1;
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
  UnityEngine_Object__DestroyImmediate_69356480(gameObject, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0LL )
LABEL_10:
    sub_1B86614(this, method);
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