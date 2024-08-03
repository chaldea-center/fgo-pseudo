void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_long__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FB1A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v6);
    byte_49FB1A4 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v10, v11);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.befCommandCodeList, (int32_t)v12, v13, v14);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UserPresentBoxWindow_o *v16; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct PlayMakerFSM_o *v21; // x8
  struct GetCommandCodes_array *fsm; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct PlayMakerFSM_o *v25; // x8
  struct UserPresentBoxWindow_evPointReward_array *fsmTemplate; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  struct PlayMakerFSM_o *v29; // x8
  struct GetSvtCoin_array *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct PlayMakerFSM_o *v33; // x8
  struct GetSvtCoin_array *addEventHandlers; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x2

  v4 = this;
  if ( (byte_49FB17E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___, v5);
    sub_1B640C8(&JsonManager_TypeInfo, v6);
    sub_1B640C8(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, v7);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v8);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v9);
    this = (UserPresentBoxWindow_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v10);
    byte_49FB17E = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(v4, v11);
    return;
  }
  v12 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_object_(
                                     v12,
                                     (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_20;
  v16 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_20;
  m_CancellationTokenSource = myFsm->fields.m_CancellationTokenSource;
  v4->fields.getSvtList = (struct GetSvts_array *)m_CancellationTokenSource;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.getSvtList, (int32_t)m_CancellationTokenSource, v14, v15);
  if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v21 = v16->fields.myFsm;
  if ( !v21 )
    goto LABEL_20;
  fsm = (struct GetCommandCodes_array *)v21->fields.fsm;
  v4->fields.getCommandCodeList = fsm;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.getCommandCodeList, (int32_t)fsm, v19, v20);
  if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v25 = v16->fields.myFsm;
  if ( !v25 )
    goto LABEL_20;
  v4->fields.presentOverflowType = v25->fields.m_CachedPtr;
  fsmTemplate = (struct UserPresentBoxWindow_evPointReward_array *)v25->fields.fsmTemplate;
  v4->fields.evPointRewardList = fsmTemplate;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.evPointRewardList, (int32_t)fsmTemplate, v23, v24);
  if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
    goto LABEL_21;
  v29 = v16->fields.myFsm;
  if ( !v29 )
    goto LABEL_20;
  v30 = *(struct GetSvtCoin_array **)&v29->fields.eventHandlerComponentsAdded;
  v4->fields.getSvtCoins = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.getSvtCoins, (int32_t)v30, v27, v28);
  if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
LABEL_21:
    sub_1B6432C(this, v13);
  v33 = v16->fields.myFsm;
  if ( !v33 )
LABEL_20:
    sub_1B64324(this);
  addEventHandlers = (struct GetSvtCoin_array *)v33->fields.addEventHandlers;
  v4->fields.overflowSvtCoinInfos = addEventHandlers;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v4->fields.overflowSvtCoinInfos,
    (int32_t)addEventHandlers,
    v31,
    v32);
  v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36);
  System_Action___ctor(v37, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v37, v38);
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
  void *Filter_40453940; // x0
  ListViewSort_o **v14; // x8
  ListViewSort_o *v15; // x19
  UserPresentBoxMaster_c *v16; // x0
  bool v17; // w8
  bool result; // w0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v20; // w1

  if ( (byte_49FB17B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, servantMaster);
    sub_1B640C8(&BalanceConfig_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&UserPresentBoxMaster_TypeInfo, v11);
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v12);
    byte_49FB17B = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, servantMaster);
    byte_49FB217 = 1;
  }
  Filter_40453940 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_40453940 = UserPresentListViewManager_TypeInfo;
  }
  v14 = (ListViewSort_o **)*((_QWORD *)Filter_40453940 + 23);
  v15 = *v14;
  if ( !*v14 )
    goto LABEL_52;
  Filter_40453940 = (void *)ListViewSort__GetFilter_40453940(*v14, 13, 0LL);
  if ( ((unsigned __int8)Filter_40453940 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_52;
LABEL_20:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_40453940 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_40453940 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*((_QWORD *)Filter_40453940 + 23) + 672LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( !*((_DWORD *)Filter_40453940 + 56) )
          {
            j_il2cpp_runtime_class_init_0(Filter_40453940);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_40453940 = (void *)System_Array__IndexOf_int_(
                                      PresentBoxFilterSvtEquipMaterial,
                                      userPresentBoxEntity->fields.objectId,
                                      (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)Filter_40453940 & 0x80000000) == 0 )
            return ListViewSort__GetFilter_40453940(v15, 4, 0LL);
        }
        if ( servantMaster )
        {
          Filter_40453940 = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantMaster,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_40453940 )
          {
            switch ( *((_DWORD *)Filter_40453940 + 21) )
            {
              case 1:
              case 0xC:
                goto LABEL_21;
              case 3:
                v20 = 1;
                return ListViewSort__GetFilter_40453940(v15, v20, 0LL);
              case 6:
                v20 = 3;
                return ListViewSort__GetFilter_40453940(v15, v20, 0LL);
              case 7:
                v20 = 2;
                return ListViewSort__GetFilter_40453940(v15, v20, 0LL);
              case 8:
                v20 = 4;
                return ListViewSort__GetFilter_40453940(v15, v20, 0LL);
              default:
                goto LABEL_39;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_40453940 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)itemMaster,
                            userPresentBoxEntity->fields.objectId,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_40453940 )
          break;
        switch ( *((_DWORD *)Filter_40453940 + 12) )
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
        return ListViewSort__GetFilter_40453940(v15, v20, 0LL);
      case 6:
      case 7:
LABEL_21:
        v17 = ListViewSort__GetFilter_40453940(v15, 0, 0LL);
        result = 0;
        if ( !v17 )
          return result;
        return 1;
      case 0xB:
        v20 = 5;
        return ListViewSort__GetFilter_40453940(v15, v20, 0LL);
      default:
LABEL_39:
        v20 = 14;
        return ListViewSort__GetFilter_40453940(v15, v20, 0LL);
    }
LABEL_52:
    sub_1B64324(Filter_40453940);
  }
  Filter_40453940 = UserPresentBoxMaster_TypeInfo;
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
    Filter_40453940 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v16->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_40453940 & 1) == 0 )
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
  void *Filter_40453940; // x0
  ListViewSort_o **v13; // x8
  ListViewSort_o *v14; // x19
  UserPresentBoxMaster_c *v15; // x0
  int32_t giftType; // w8
  _DWORD *v17; // x8
  bool Filter_40453988; // w8
  bool result; // w0
  int32_t v20; // w1

  if ( (byte_49FB17C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, servantLimitMaster);
    sub_1B640C8(&UserPresentBoxMaster_TypeInfo, v10);
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v11);
    byte_49FB17C = 1;
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, servantLimitMaster);
    byte_49FB217 = 1;
  }
  Filter_40453940 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_40453940 = UserPresentListViewManager_TypeInfo;
  }
  v13 = (ListViewSort_o **)*((_QWORD *)Filter_40453940 + 23);
  v14 = *v13;
  if ( !isActiveFilterCategory )
    goto LABEL_12;
  if ( !v14 )
    goto LABEL_49;
  Filter_40453940 = (void *)ListViewSort__GetFilter_40453940(*v13, 13, 0LL);
  if ( ((unsigned __int8)Filter_40453940 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_49;
  }
  else
  {
LABEL_12:
    Filter_40453940 = UserPresentBoxMaster_TypeInfo;
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
    Filter_40453940 = (void *)UserPresentBoxEntity__IsEnableFlag(
                                userPresentBoxEntity,
                                v15->static_fields->IMPORTANT_FOR_LIMIT,
                                0LL);
    if ( ((unsigned __int8)Filter_40453940 & 1) != 0 )
      return 1;
  }
  giftType = userPresentBoxEntity->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 )
  {
LABEL_24:
    if ( servantLimitMaster )
    {
      Filter_40453940 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0LL);
      if ( Filter_40453940 )
      {
        v17 = (char *)Filter_40453940 + 24;
        goto LABEL_30;
      }
      return 1;
    }
LABEL_49:
    sub_1B64324(Filter_40453940);
  }
  if ( giftType != 11 )
  {
    if ( giftType != 1 )
      return 1;
    goto LABEL_24;
  }
  if ( !commandCodeMaster )
    goto LABEL_49;
  Filter_40453940 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)commandCodeMaster,
                      userPresentBoxEntity->fields.objectId,
                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !Filter_40453940 )
    return 1;
  v17 = (char *)Filter_40453940 + 64;
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
      Filter_40453988 = ListViewSort__GetFilter_40453988(v14, 0, 0LL);
      result = 0;
      if ( !Filter_40453988 )
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
      if ( ListViewSort__GetFilter_40453988(v14, v20, 0LL) )
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_o **v13; // x22
  int32_t receiveIdx; // w1
  _DWORD *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x21

  if ( (byte_49FB193 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v6);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__, v7);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, v8);
    byte_49FB193 = 1;
  }
  v9 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = callback;
  v13 = (System_Action_o **)(v9 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)callback, v11, v12);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_14;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    receiveIdx,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( receiveList )
    {
      v15 = receiveList;
      receiveList = (void *)Gift__IsServant(*((_DWORD *)receiveList + 18), 0LL);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
        System_Action___ctor(
          v18,
          (Il2CppObject *)v9,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v18, v15[19], 0, 0, 0, 0LL);
        return;
      }
      if ( *v13 )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*v13)->fields.m_target)(
          (*v13)->fields.original_method_info,
          *(_QWORD *)&(*v13)->fields.extra_arg);
        return;
      }
    }
LABEL_14:
    sub_1B64324(receiveList);
  }
  if ( *v13 )
    ActionExtensions__Call(*v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__ClickFilterEnd(
        UserPresentBoxWindow_o *this,
        bool result,
        const MethodInfo *method)
{
  UserPresentListViewManager_c *v5; // x0
  struct PresentBoxFilterSelectMenu_o *sortInfo; // x0
  const MethodInfo *v7; // x1
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v10; // w9

  if ( (byte_49FB1A3 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, result);
    byte_49FB1A3 = 1;
  }
  if ( result )
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_49FB217 )
    {
      sub_1B640C8(&UserPresentListViewManager_TypeInfo, result);
      byte_49FB217 = 1;
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
      sub_1B64324(sortInfo);
    }
    if ( (byte_49FB1E9 & 1) == 0 )
    {
      sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v7);
      byte_49FB1E9 = 1;
    }
    checkedIdList = userPresentListViewManager->fields.checkedIdList;
    if ( checkedIdList )
    {
      v10 = checkedIdList->fields._version + 1;
      checkedIdList->fields._size = 0;
      checkedIdList->fields._version = v10;
    }
    this->fields.mIsScrlResetPosition = 1;
    UserPresentBoxWindow__ReDisp(this, v7);
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

  if ( (byte_49FB199 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v3);
    byte_49FB199 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
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
    sub_1B64324(userPresentListViewManager);
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
  QuestRewardInfo_o *result; // x0

  if ( (byte_49FB18A & 1) == 0 )
  {
    sub_1B640C8(&QuestRewardInfo_TypeInfo, userPresentBox);
    byte_49FB18A = 1;
  }
  v4 = sub_1B64314(QuestRewardInfo_TypeInfo, userPresentBox, method);
  QuestRewardInfo___ctor((QuestRewardInfo_o *)v4, 0LL);
  if ( !userPresentBox || !v4 )
    sub_1B64324(v5);
  result = (QuestRewardInfo_o *)v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&userPresentBox->fields.giftType;
  *(_DWORD *)(v4 + 24) = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FB18B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5448/*"END_EFFECT"*/, method);
    byte_49FB18B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5448/*"END_EFFECT"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FB194 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FB194 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
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

  if ( (byte_49FB181 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, res);
    sub_1B640C8(&Method_UserPresentBoxWindow_EndReceive__, v4);
    byte_49FB181 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, res, method);
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

  if ( (byte_49FB182 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, res);
    sub_1B640C8(&Method_UserPresentBoxWindow_EndEffectReceive__, v4);
    byte_49FB182 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, res, method);
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
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  char v11; // w20
  int v12; // w21
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FB17F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FB17F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)receiveList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1B64324(v8);
    if ( !Gift__IsCostumeRelease((int32_t)v15.fields._current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)Instance, HIDWORD(current[4].monitor), 0LL) )
        continue;
    }
    v11 = 1;
    v12 = 6;
    goto LABEL_14;
  }
  v11 = 0;
  v12 = 7;
LABEL_14:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return v11 & (v12 == 6);
}


void __fastcall UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  _BOOL4 isReceiveFlg; // w20
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v11; // x1
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x4

  if ( (byte_49FB195 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UserPresentBoxWindow_OnClickAll__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow_ProcessClickAll__, v4);
    sub_1B640C8(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__, v5);
    byte_49FB195 = 1;
  }
  v6 = Method_UserPresentBoxWindow_OnClickAll__;
  isReceiveFlg = this->fields.isReceiveFlg;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickAll__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickAll__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  if ( isReceiveFlg )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_11;
    UserPresentListViewManager__SetMode_37092028(userPresentListViewManager, 2, v9);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, v11),
          v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15),
          System_Action___ctor(v16, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18),
          System_Action___ctor(v19, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_11:
      sub_1B64324(userPresentListViewManager);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v16, v19, v20);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickBack(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct UserPresentBoxWindow_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_49FB19A & 1) == 0 )
  {
    sub_1B640C8(&Method_UserPresentBoxWindow_OnClickBack__, method);
    byte_49FB19A = 1;
  }
  v3 = Method_UserPresentBoxWindow_OnClickBack__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  const MethodInfo *v5; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_49FB197 & 1) == 0 )
  {
    sub_1B640C8(&Method_UserPresentBoxWindow_OnClickCheckedItem__, method);
    byte_49FB197 = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, v5),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1B64324(userPresentListViewManager);
    }
    UserPresentListViewManager__SetMode_37092028(userPresentListViewManager, 2, v7);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v8);
  }
  else
  {
    v9 = Method_UserPresentBoxWindow_OnClickCheckedItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickCheckedItem__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickCheckedItem__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
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
  __int64 v14; // x2
  Il2CppObject *presentBoxFilterKindSelectMenuPrefab; // x21
  Il2CppObject *v16; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x0
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  PresentBoxFilterSelectMenu_o *v22; // x20
  UserPresentListViewManager_c *v23; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v25; // x22

  if ( (byte_49FB1A2 & 1) == 0 )
  {
    sub_1B640C8(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_UserPresentBoxWindow_ClickFilterEnd__, v6);
    sub_1B640C8(&Method_UserPresentBoxWindow_OnClickFilter__, v7);
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v8);
    byte_49FB1A2 = 1;
  }
  v9 = Method_UserPresentBoxWindow_OnClickFilter__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickFilter__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickFilter__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  presentBoxFilterSelectMenu = (UnityEngine_Object_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_presentBoxFilterSelectMenu = &this->fields.presentBoxFilterSelectMenu;
  if ( UnityEngine_Object__op_Equality(presentBoxFilterSelectMenu, 0LL, 0LL) )
  {
    presentBoxFilterKindSelectMenuPrefab = (Il2CppObject *)this->fields.presentBoxFilterKindSelectMenuPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__Instantiate_object_(
            presentBoxFilterKindSelectMenuPrefab,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v16, gameObject, 0LL);
    if ( !v16 )
LABEL_20:
      sub_1B64324(v18);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v16,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.presentBoxFilterSelectMenu,
      (int32_t)Component_object,
      v20,
      v21);
  }
  v22 = *p_presentBoxFilterSelectMenu;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v13);
    byte_49FB217 = 1;
  }
  v23 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v23 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v23->static_fields->sortInfo;
  v25 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                       PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo,
                                                       v13,
                                                       v14);
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

  if ( (byte_49FB1A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_UserPresentBoxWindow_OnClickHelp__, method);
    byte_49FB1A0 = 1;
  }
  v2 = Method_UserPresentBoxWindow_OnClickHelp__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B640AC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  UserPresentBoxWindow__OpenHelp(v4, v5);
}


void __fastcall UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_49FB196 & 1) == 0 )
  {
    sub_1B640C8(&Method_UserPresentBoxWindow_OnClickItem__, method);
    byte_49FB196 = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    v3 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickItem__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, v5),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_1B64324(userPresentListViewManager);
    }
    UserPresentListViewManager__SetMode_37092028(userPresentListViewManager, 2, v7);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v8);
  }
  else
  {
    v9 = Method_UserPresentBoxWindow_OnClickItem__;
    if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickItem__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickItem__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49FB19B & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_UserPresentBoxWindow_OnClickPresentHistoryButton__, v5);
    sub_1B640C8(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__, v6);
    byte_49FB19B = 1;
  }
  v7 = Method_UserPresentBoxWindow_OnClickPresentHistoryButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxWindow_OnClickPresentHistoryButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_UserPresentBoxWindow_OnClickPresentHistoryButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FB174 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB174 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_titleInfo, 0, v7, v8);
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
  int32_t v19; // w3
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
  int32_t v30; // w3
  const MethodInfo *v31; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  Il2CppObject *titlePrefab; // x22
  Il2CppObject *Component_object; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  TitleInfoControl_o *v38; // x22
  TitleInfoControl_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  System_Action_int__o *v47; // x22
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  const MethodInfo *v53; // x2
  bool v54; // w20
  const MethodInfo *v55; // x2

  if ( (byte_49FB175 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, isShowBg);
    sub_1B640C8(&System_Action_TypeInfo, v9);
    sub_1B640C8(&AtlasManager_TypeInfo, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v11);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_UserPresentBoxWindow_OnClickBack__, v14);
    sub_1B640C8(&Method_UserPresentBoxWindow__Open_b__69_0__, v15);
    sub_1B640C8(&StringLiteral_5434/*"ENABLE_PRESENT_HISTORY"*/, v16);
    byte_49FB175 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.presentMaxSelectable, (int32_t)v28, v29, v30);
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
                                             (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           bgObject,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v36, v37);
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
              TitleInfoControl__setTitleInfo((TitleInfoControl_o *)bgObject, 0LL, 1, 0LL, 42, 0LL);
              bgObject = (UnityEngine_GameObject_o *)*p_titleInfo;
              if ( *p_titleInfo )
              {
                TitleInfoControl__changeTitleInfo_36879176((TitleInfoControl_o *)bgObject, 1, 42, 0, 0LL);
                v39 = this->fields.titleInfo;
                v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v40, v41);
                System_Action___ctor(
                  v42,
                  (Il2CppObject *)this,
                  (intptr_t)Method_UserPresentBoxWindow_OnClickBack__,
                  0LL);
                if ( v39 )
                {
                  TitleInfoControl__SetBackBtnAct(v39, v42, 0LL);
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B64324(bgObject);
  }
LABEL_20:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v47 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v45, v46);
  System_Action_int____ctor(v47, (Il2CppObject *)this, Method_UserPresentBoxWindow__Open_b__69_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(v44, v47, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_28;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, v48);
  UserPresentBoxWindow__SetFilterButtonImage(this, v49);
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
  UserPresentBoxWindow__RequestPresentList(this, v50);
  this->fields.mReDispAct = redisp_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mReDispAct, (int32_t)redisp_act, v51, v52);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v53);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5434/*"ENABLE_PRESENT_HISTORY"*/, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_28;
  v54 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v54, v55);
}


void __fastcall UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  System_Array_o *v5; // x0
  TutorialFlag_ImageId_array *v6; // x20
  __int64 v7; // x0
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_49FB1A1 & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_ImageId___TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E,
      v3);
    byte_49FB1A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Array_o *)sub_1B64170(TutorialFlag_ImageId___TypeInfo, 3LL);
  v8.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  v6 = (TutorialFlag_ImageId_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v5, v8, 0LL);
  if ( !Instance )
    sub_1B64324(v7);
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
    sub_1B64324(userPresentListViewManager);
  }
  UserPresentListViewManager__SetMode_37092028(userPresentListViewManager, 2, v5);
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
  Il2CppObject *MasterData_object; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  UserServantMaster_o *v33; // x8
  UserCommandCodeMaster_o *v34; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int v37; // w21
  System_String_o *v38; // x23
  Il2CppObject *v39; // x24
  Il2CppObject *v40; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v42; // x23
  Il2CppObject *v43; // x24
  Il2CppObject *v44; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v46; // x23
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  BalanceConfig_c *v49; // x0
  Il2CppObject *v50; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v58; // x22
  Il2CppObject *v59; // x0
  __int64 v60; // x20
  BalanceConfig_c *v61; // x0
  __int64 v62; // x26
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
  System_String_o *v65; // x23
  Il2CppObject *v66; // x24
  Il2CppObject *v67; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v69; // x23
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  UserPresentListViewManager_c *v72; // x0
  __int64 v73; // x1
  _BOOL4 v74; // w22
  UserPresentListViewManager_c *v75; // x0
  UserPresentListViewManager_c *v76; // x0
  const MethodInfo *v77; // x1
  _BOOL4 v78; // w28
  UserPresentListViewManager_c *v79; // x0
  Il2CppObject *v80; // x23
  Il2CppObject *v81; // x24
  Il2CppObject *v82; // x25
  Il2CppObject *v83; // x27
  __int64 v84; // x1
  __int64 v85; // x2
  System_Collections_Generic_List_object__o *v86; // x26
  __int64 v87; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  const MethodInfo *v90; // x4
  const MethodInfo *v91; // x5
  unsigned __int64 v92; // x29
  __int64 v93; // x19
  Il2CppObject *v94; // x1
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 size; // x10
  Il2CppClass **v98; // x0
  int v99; // w24
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v102; // x21
  char v103; // w22
  char v104; // w23
  unsigned int v105; // w25
  __int64 v106; // x8
  int v107; // w9
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v109; // x3
  UserPresentBoxWindow_o *v110; // x0
  const MethodInfo *v111; // x3
  UserPresentBoxWindow_o *v112; // x0
  const MethodInfo *v113; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  System_String_o **v115; // x8
  __int64 v116; // x8
  UserPresentBoxWindow_o *v117; // x0
  const MethodInfo *v118; // x3
  UserPresentBoxWindow_o *v119; // x0
  const MethodInfo *v120; // x3
  UserPresentBoxWindow_o *v121; // x0
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x2
  const MethodInfo *v124; // x2
  const MethodInfo *v125; // x2
  _BOOL8 _37376848; // x0
  const MethodInfo *v127; // x1
  const MethodInfo *v128; // x2
  UserPresentBoxWindow_o *v129; // [xsp+8h] [xbp-C8h]
  int capacity; // [xsp+10h] [xbp-C0h]
  int v131; // [xsp+1Ch] [xbp-B4h] BYREF
  int v132; // [xsp+20h] [xbp-B0h] BYREF
  int v133; // [xsp+24h] [xbp-ACh] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-A8h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-A4h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-A0h] BYREF
  int v137; // [xsp+34h] [xbp-9Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-98h] BYREF
  int v139; // [xsp+3Ch] [xbp-94h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-90h] BYREF
  int v141; // [xsp+44h] [xbp-8Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-70h] BYREF
  __int64 servantEquipSum; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_49FB179 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___75672888, v14);
    sub_1B640C8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&TutorialFlag_TypeInfo, v18);
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_10407/*"PRESENT_LIST_INFO"*/, v20);
    sub_1B640C8(&StringLiteral_10914/*"RECEIVE_FILTER_NOTHING"*/, v21);
    sub_1B640C8(&StringLiteral_10913/*"RECEIVE_ALL_DONE"*/, v22);
    sub_1B640C8(&StringLiteral_3927/*"CURRENT_QP_UNIT"*/, v23);
    sub_1B640C8(&StringLiteral_10408/*"PRESENT_LIST_NOTICE"*/, v24);
    sub_1B640C8(&StringLiteral_3925/*"CURRENT_FRIEND_POINT_UNIT"*/, v25);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v26);
    byte_49FB179 = 1;
  }
  entity = 0LL;
  servantEquipSum = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantMaster,
    (int32_t)MasterData_object,
    v31,
    v32);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v33 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_146;
  v34 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v33, (int32_t *)&servantEquipSum + 1, (int32_t *)&servantEquipSum, 1, 0LL);
  if ( !v34 )
    goto LABEL_146;
  Count = UserCommandCodeMaster__getCount(v34, 0LL);
  svtNumValLb = this->fields.svtNumValLb;
  v37 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  v141 = HIDWORD(servantEquipSum);
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v141);
  if ( !SelfUserGame )
    goto LABEL_146;
  v39 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_61389768(v38, v39, v40, 0LL);
  if ( !svtNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0LL);
  svtEqNumValLb = this->fields.svtEqNumValLb;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  v139 = servantEquipSum;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  Instance = (__int64)System_String__Format_61389768(v42, v43, v44, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_146;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0LL);
  commandCodeNumValLb = this->fields.commandCodeNumValLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
  v137 = v37;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v137);
  if ( !byte_49F7B7B )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v47);
    byte_49F7B7B = 1;
  }
  v49 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v49->static_fields->CommandCodeFrameMax;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax);
  Instance = (__int64)System_String__Format_61389768(v46, v48, v50, 0LL);
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
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3927/*"CURRENT_QP_UNIT"*/, 0LL);
  qp = SelfUserGame->fields.qp;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  Instance = (__int64)System_String__Format(v55, v56, 0LL);
  if ( !qpNumValLb )
    goto LABEL_146;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0LL);
  fpNumValLb = this->fields.fpNumValLb;
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3925/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint);
  Instance = (__int64)System_String__Format(v58, v59, 0LL);
  if ( !fpNumValLb )
    goto LABEL_146;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10407/*"PRESENT_LIST_INFO"*/, 0LL);
  v133 = v62;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
  v132 = PresentBoxMax;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
  Instance = (__int64)System_String__Format_61389768(v65, v66, v67, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_146;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0LL);
  presentNoticeLabel = this->fields.presentNoticeLabel;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_10408/*"PRESENT_LIST_NOTICE"*/, 0LL);
  v131 = PresentBoxMax;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
  Instance = (__int64)System_String__Format(v69, v70, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_146;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0LL);
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v71);
    byte_49FB217 = 1;
  }
  v72 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v72 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v72->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v74 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_49FB217 )
    {
      sub_1B640C8(&UserPresentListViewManager_TypeInfo, v73);
      byte_49FB217 = 1;
    }
    v75 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v75 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v75->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v74 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v73);
    byte_49FB217 = 1;
  }
  v76 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v76 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v76->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_146;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v78 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_49FB217 )
    {
      sub_1B640C8(&UserPresentListViewManager_TypeInfo, v77);
      byte_49FB217 = 1;
    }
    v79 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v79 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v79->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_146;
    v78 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( v78 || v74 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v80 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v81 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v129 = this;
    capacity = v62;
    v82 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_146;
    v83 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v86 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                         v84,
                                                         v85);
    System_Collections_Generic_List_object____ctor_55234320(
      v86,
      capacity,
      (const MethodInfo_34ACF10 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___75672888);
    if ( capacity >= 1 )
    {
      v92 = 0LL;
      v93 = v60 + 32;
      do
      {
        if ( !v74 )
          goto LABEL_150;
        if ( v92 >= *(unsigned int *)(v60 + 24) )
          goto LABEL_147;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     (ServantMaster_o *)v80,
                     (ItemMaster_o *)v81,
                     *(UserPresentBoxEntity_o **)(v93 + 8 * v92),
                     v90);
        if ( (Instance & 1) != 0 )
        {
LABEL_150:
          if ( !v78 )
            goto LABEL_76;
          if ( v92 >= *(unsigned int *)(v60 + 24) )
            goto LABEL_147;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       (ServantLimitMaster_o *)v82,
                       (CommandCodeMaster_o *)v83,
                       *(UserPresentBoxEntity_o **)(v93 + 8 * v92),
                       v74,
                       v91);
          if ( (Instance & 1) != 0 )
          {
LABEL_76:
            if ( v92 >= *(unsigned int *)(v60 + 24) )
LABEL_147:
              sub_1B6432C(Instance, v87);
            if ( !v86 )
              goto LABEL_146;
            v94 = *(Il2CppObject **)(v93 + 8 * v92);
            items = v86->fields._items;
            v96 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v86->fields._version;
            if ( !items )
              goto LABEL_146;
            size = v86->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v86,
                v94,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
            }
            else
            {
              v98 = &items->obj.klass + size;
              v86->fields._size = size + 1;
              v98[4] = (Il2CppClass *)v94;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 4), (int32_t)v94, v88, v89);
            }
          }
        }
      }
      while ( capacity != ++v92 );
    }
    if ( !v86 )
      goto LABEL_146;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v86,
                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    this = v129;
    if ( !Instance )
      goto LABEL_146;
    v99 = *(_DWORD *)(Instance + 24);
    LODWORD(v62) = capacity;
    v60 = Instance;
  }
  else
  {
    v99 = v62;
  }
  UserPresentBoxWindow__SetFilterButtonImage(this, v77);
  UserPresentBoxWindow__SetSelectCount(this, 0, v100);
  if ( v99 < 1 )
  {
    Instance = (__int64)this->fields.userPresentListViewManager;
    if ( Instance )
    {
      UserPresentListViewManager__DestroyList((UserPresentListViewManager_o *)Instance, v101);
      Instance = (__int64)this->fields.allReceiveBtn;
      this->fields.isReceiveFlg = 0;
      if ( Instance )
      {
        gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0LL);
        UserPresentBoxWindow__SetButtonTxtColor(gameObject, 0, (UnityEngine_GameObject_o *)gameObject, v109);
        Instance = (__int64)this->fields.itemReceiveBtn;
        this->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v110 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL);
          UserPresentBoxWindow__SetButtonTxtColor(v110, 0, (UnityEngine_GameObject_o *)v110, v111);
          Instance = (__int64)this->fields.checkedItemBtn;
          this->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v112 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
            UserPresentBoxWindow__SetButtonTxtColor(v112, 0, (UnityEngine_GameObject_o *)v112, v113);
            nonPresentNoticeLabel = this->fields.nonPresentNoticeLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v115 = (System_String_o **)&StringLiteral_10913/*"RECEIVE_ALL_DONE"*/;
            if ( (_DWORD)v62 )
              v115 = (System_String_o **)&StringLiteral_10914/*"RECEIVE_FILTER_NOTHING"*/;
            Instance = (__int64)LocalizationManager__Get(*v115, 0LL);
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
                          v116 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v102 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  while ( 1 )
  {
    if ( v105 >= *(_DWORD *)(v60 + 24) )
      goto LABEL_147;
    v106 = *(_QWORD *)(v60 + 8LL * (int)v105 + 32);
    if ( !v106 )
      goto LABEL_146;
    v107 = *(_DWORD *)(v106 + 72);
    if ( v107 == 2 )
    {
      if ( !v102 )
        goto LABEL_146;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v102,
                   &entity,
                   *(_DWORD *)(v106 + 76),
                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_97;
      if ( !entity )
        goto LABEL_146;
      if ( LODWORD(entity[3].klass) != 24 )
      {
LABEL_97:
        v104 = 1;
        v103 = 1;
      }
      if ( (v104 & 1) == 0 )
        goto LABEL_102;
    }
    else
    {
      v103 |= v107 == 9;
      v104 = 1;
    }
    if ( (v103 & 1) != 0 )
      break;
LABEL_102:
    if ( v99 == ++v105 )
      goto LABEL_121;
  }
  v104 = 1;
  v103 = 1;
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
  this->fields.isReceiveFlg = v104 & 1;
  if ( !Instance )
    goto LABEL_146;
  v117 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v117, v104 & 1, (UnityEngine_GameObject_o *)v117, v118);
  Instance = (__int64)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = v103 & 1;
  if ( !Instance )
    goto LABEL_146;
  v119 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v119, v103 & 1, (UnityEngine_GameObject_o *)v119, v120);
  Instance = (__int64)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_146;
  v121 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v121, 0, (UnityEngine_GameObject_o *)v121, v122);
  if ( this->fields.mIsScrlResetPosition )
    goto LABEL_131;
  Instance = (__int64)this->fields.userPresentListViewManager;
  if ( !Instance )
LABEL_146:
    sub_1B64324(Instance);
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
          v128);
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
    v123);
LABEL_133:
  Instance = (__int64)this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_146;
  UserPresentListViewManager__SetMode_37092028((UserPresentListViewManager_o *)Instance, 1, v124);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.sortBtn;
  if ( !Instance )
    goto LABEL_146;
  v116 = *(_QWORD *)Instance;
LABEL_137:
  (*(void (**)(void))(v116 + 536))();
  ActionExtensions__Call(this->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 1, v125);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37376848 = TutorialFlag__Get_37376848(201, 0LL);
  if ( !_37376848 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_37376848, v127);
  EventTutorialMaster__CheckTutorial(0, 78, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49FB177 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_UserPresentListRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_UserPresentBoxWindow_callbackPresentList__, v6);
    byte_49FB177 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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

  if ( (byte_49FB19C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_49FB19C = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B64324(sortBtn);
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
  __int64 v6; // x1
  int m_CancellationTokenSource; // w8
  UserPresentBoxWindow_o *v8; // x19
  float v9; // s8
  unsigned int v10; // w20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB176 & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_1B640C8(
                                       &Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___,
                                       isVaild);
    byte_49FB176 = 1;
  }
  if ( !btnObject )
    goto LABEL_15;
  this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                     btnObject,
                                     (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
        sub_1B6432C(this, v6);
      this = (UserPresentBoxWindow_o *)*((_QWORD *)&v8->fields.myFsm + (int)v10);
      if ( !this )
        break;
      v11.fields.a = 1.0;
      v11.fields.r = v9;
      v11.fields.g = v9;
      v11.fields.b = v9;
      UIWidget__set_color((UIWidget_o *)this, v11, 0LL);
      m_CancellationTokenSource = (int)v8->fields.m_CancellationTokenSource;
      if ( (int)++v10 >= m_CancellationTokenSource )
        return;
    }
LABEL_15:
    sub_1B64324(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetCheckedItemsButtonEnable(
        UserPresentBoxWindow_o *this,
        bool how,
        bool isSetOtherButtonsToo,
        const MethodInfo *method)
{
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
  int64_t checkedItemBtn; // x0
  UserPresentBoxWindow_o *gameObject; // x0
  const MethodInfo *v22; // x3
  UserPresentBoxWindow_o *v23; // x0
  const MethodInfo *v24; // x3
  UserPresentBoxWindow_o *v25; // x0
  const MethodInfo *v26; // x3
  bool v27; // w1
  Il2CppObject *MasterData_object; // x20
  UserPresentBoxEntity_array *VaildList; // x20
  __int64 v30; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x29
  __int64 v32; // x22
  UserPresentListViewManager_c *v33; // x0
  __int64 v34; // x1
  _BOOL4 v35; // w27
  UserPresentListViewManager_c *v36; // x0
  UserPresentListViewManager_c *v37; // x0
  __int64 v38; // x1
  _BOOL4 v39; // w28
  UserPresentListViewManager_c *v40; // x0
  Il2CppObject *v41; // x23
  ItemMaster_o *v42; // x19
  Il2CppObject *v43; // x24
  Il2CppObject *v44; // x25
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_object__o *v47; // x26
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  const MethodInfo *v51; // x4
  const MethodInfo *v52; // x5
  unsigned __int64 v53; // x29
  UserPresentBoxEntity_o **m_Items; // x21
  Il2CppObject *v55; // x1
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  UserPresentBoxWindow_o *v60; // x0
  const MethodInfo *v61; // x3
  __int64 v62; // x8
  __int64 v63; // x19
  UserPresentBoxEntity_o *v64; // x9
  int32_t giftType; // w10
  UserPresentBoxWindow_o *v66; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v7 = how;
  if ( (byte_49FB198 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, how);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___75672888, v15);
    sub_1B640C8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v16);
    sub_1B640C8(&NetworkManager_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v19);
    byte_49FB198 = 1;
  }
  entity = 0LL;
  checkedItemBtn = (int64_t)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = v7;
  if ( !checkedItemBtn )
    goto LABEL_90;
  gameObject = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)checkedItemBtn,
                                           0LL);
  UserPresentBoxWindow__SetButtonTxtColor(gameObject, how, (UnityEngine_GameObject_o *)gameObject, v22);
  if ( !isSetOtherButtonsToo )
    return;
  if ( how )
  {
    checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( checkedItemBtn )
    {
      v23 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)checkedItemBtn,
                                        0LL);
      UserPresentBoxWindow__SetButtonTxtColor(v23, 0, (UnityEngine_GameObject_o *)v23, v24);
      checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( checkedItemBtn )
      {
        v25 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)checkedItemBtn,
                                          0LL);
        v27 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_90;
  }
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)checkedItemBtn,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  checkedItemBtn = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_90;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)MasterData_object, checkedItemBtn, 0LL);
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_90;
  checkedItemBtn = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)checkedItemBtn,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_90;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)checkedItemBtn;
  v32 = *(_QWORD *)&VaildList->max_length;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v30);
    byte_49FB217 = 1;
  }
  v33 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v33 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v33->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_90;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v35 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_49FB217 )
    {
      sub_1B640C8(&UserPresentListViewManager_TypeInfo, v34);
      byte_49FB217 = 1;
    }
    v36 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v36 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v36->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_90;
    v35 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v34);
    byte_49FB217 = 1;
  }
  v37 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v37 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v37->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_90;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v39 = 0;
  }
  else
  {
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    if ( !byte_49FB217 )
    {
      sub_1B640C8(&UserPresentListViewManager_TypeInfo, v38);
      byte_49FB217 = 1;
    }
    v40 = UserPresentListViewManager_TypeInfo;
    if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v40 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v40->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_90;
    v39 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( v35 || v39 )
  {
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v41 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v66 = this;
    v42 = (ItemMaster_o *)v31;
    v43 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_90;
    v44 = DataManager__GetMasterData_object_(
            (DataManager_o *)checkedItemBtn,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v47 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                         v45,
                                                         v46);
    System_Collections_Generic_List_object____ctor_55234320(
      v47,
      v32,
      (const MethodInfo_34ACF10 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___75672888);
    if ( (int)v32 >= 1 )
    {
      v53 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v35 )
          goto LABEL_94;
        if ( v53 >= VaildList->max_length )
          goto LABEL_91;
        checkedItemBtn = UserPresentBoxWindow__CheckFilter(
                           (UserPresentBoxWindow_o *)checkedItemBtn,
                           (ServantMaster_o *)v41,
                           v42,
                           m_Items[v53],
                           v51);
        if ( (checkedItemBtn & 1) != 0 )
        {
LABEL_94:
          if ( !v39 )
            goto LABEL_62;
          if ( v53 >= VaildList->max_length )
            goto LABEL_91;
          checkedItemBtn = UserPresentBoxWindow__CheckRarityFilter(
                             (UserPresentBoxWindow_o *)checkedItemBtn,
                             (ServantLimitMaster_o *)v43,
                             (CommandCodeMaster_o *)v44,
                             m_Items[v53],
                             v35,
                             v52);
          if ( (checkedItemBtn & 1) != 0 )
          {
LABEL_62:
            if ( v53 >= VaildList->max_length )
LABEL_91:
              sub_1B6432C(checkedItemBtn, v48);
            if ( !v47 )
              goto LABEL_90;
            v55 = (Il2CppObject *)m_Items[v53];
            items = v47->fields._items;
            v57 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v47->fields._version;
            if ( !items )
              goto LABEL_90;
            size = v47->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v47,
                v55,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &items->obj.klass + size;
              v47->fields._size = size + 1;
              v59[4] = (Il2CppClass *)v55;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v55, v49, v50);
            }
          }
        }
      }
      while ( (unsigned int)v32 != ++v53 );
    }
    if ( !v47
      || (checkedItemBtn = (int64_t)System_Collections_Generic_List_object___ToArray(
                                      v47,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_90:
      sub_1B64324(checkedItemBtn);
    }
    LODWORD(v32) = *(_DWORD *)(checkedItemBtn + 24);
    this = v66;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
    v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)v42;
  }
  if ( (int)v32 < 1 )
    return;
  checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_90;
  v60 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor(v60, 1, (UnityEngine_GameObject_o *)v60, v61);
  v62 = *(_QWORD *)&VaildList->max_length;
  if ( (int)v62 < 1 )
    return;
  v63 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v63 >= (unsigned int)v62 )
      goto LABEL_91;
    v64 = VaildList->m_Items[v63];
    if ( !v64 )
      goto LABEL_90;
    giftType = v64->fields.giftType;
    if ( giftType != 2 )
    {
      if ( giftType == 9 )
        break;
      goto LABEL_86;
    }
    if ( !v31 )
      goto LABEL_90;
    checkedItemBtn = DataMasterBase_object__object__int___TryGetEntity(
                       v31,
                       &entity,
                       v64->fields.objectId,
                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (checkedItemBtn & 1) == 0 )
      break;
    if ( !entity )
      goto LABEL_90;
    if ( LODWORD(entity[3].klass) != 24 )
      break;
    v62 = *(_QWORD *)&VaildList->max_length;
LABEL_86:
    if ( (int)++v63 >= (int)v62 )
      return;
  }
  checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_90;
  v25 = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
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
  __int64 v8; // x1
  System_String_o **v9; // x22
  UserPresentListViewManager_c *v10; // x0

  if ( (byte_49FB17A & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, v3);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v4);
    byte_49FB17A = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, method);
    byte_49FB217 = 1;
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
  v9 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_20;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  if ( !byte_49FB217 )
  {
    sub_1B640C8(&UserPresentListViewManager_TypeInfo, v8);
    byte_49FB217 = 1;
  }
  v10 = UserPresentListViewManager_TypeInfo;
  if ( !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v10 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v10->static_fields->sortInfo;
  if ( !sortInfo )
LABEL_22:
    sub_1B64324(sortInfo);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0LL);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v9 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
LABEL_20:
  if ( !filterBtnSp )
    goto LABEL_22;
  UISprite__set_spriteName(filterBtnSp, *v9, 0LL);
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

  if ( (byte_49FB19D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_10678/*"PresentHistoryButton"*/, v6);
    byte_49FB19D = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10678/*"PresentHistoryButton"*/,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(GameObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !GameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)GameObject,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_1B64324(Component_object);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mReDispAct, (int32_t)act, (int32_t)method, v3);
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
  UIWidget_o *v10; // x20
  int32_t v11; // w22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = selected;
  if ( (byte_49FB19E & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&selected);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_10414/*"PRESENT_SELECT_INFO"*/, v5);
    byte_49FB19E = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10414/*"PRESENT_SELECT_INFO"*/, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&v17, 0LL);
  v9 = System_String__Format_61389768(v7, v8, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
  if ( !presentSelectNumLabel )
    goto LABEL_14;
  UILabel__set_text(presentSelectNumLabel, v9, 0LL);
  v9 = (System_String_o *)BalanceConfig_TypeInfo;
  v10 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v11 = v17;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v11 >= *(_DWORD *)(*(_QWORD *)&v9[7].fields + 116LL) )
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
    sub_1B64324(v9);
  UIWidget__set_color(v10, *(UnityEngine_Color_o *)&r, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v19; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v22; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3

  if ( (byte_49FB183 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo, *(_QWORD *)&idx);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__, v7);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, v8);
    byte_49FB183 = 1;
  }
  v9 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, *(_QWORD *)&idx, callback);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 32) = callback;
  *(_DWORD *)(v9 + 24) = idx;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)callback, v13, v14);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v19 = *(int *)(v9 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v19 < max_length )
    {
      if ( (unsigned int)v19 >= max_length )
        sub_1B6432C(v15, v16);
      evpDialog = this->fields.evpDialog;
      v22 = evPointRewardList->m_Items[v19];
      v23 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_1B64314(
                                                                      UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo,
                                                                      v16,
                                                                      v17);
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
      sub_1B64324(v10);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x22

  if ( (byte_49FB180 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__, v7);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_10401/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v9);
    sub_1B640C8(&StringLiteral_44/*"\n\n"*/, v10);
    byte_49FB180 = 1;
  }
  v11 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)callback, v15, v16);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_12;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10401/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
    v21 = System_String__Concat_61386656(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_44/*"\n\n"*/, v20, 0LL);
    v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v11,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, 0LL, v21, v24, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(v12);
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
}


void __fastcall UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v5; // x0

  if ( (byte_49FB184 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v2);
    byte_49FB184 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
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
      sub_1B64324(v5);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  PlayMakerFSM_o *myFsm; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  if ( (byte_49FB1A7 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__, v3);
    sub_1B640C8(&StringLiteral_12080/*"SHOW_EFFECT"*/, v4);
    byte_49FB1A7 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12080/*"SHOW_EFFECT"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(myFsm);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v11 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B64314(
                                                                UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      v12);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v11, v13);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v14);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v8);
  }
}


void __fastcall UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_1B64324(0LL);
  UserPresentListViewManager__SetMode_37092028(userPresentListViewManager, 1, v2);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_1B64324(0LL);
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

  if ( (byte_49FB1A5 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_49FB1A5 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_1B64324(UnitInfo);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49FB1A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB1A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  UserPresentBoxWindow__ReDisp(this, v4);
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

  if ( (byte_49FB1A8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_UserPresentBoxWindow_EndEffect__, v4);
    byte_49FB1A8 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
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
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  __int64 v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_object__o *v24; // x21
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_object__o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  ActionChain_o *v35; // x21
  __int64 v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3

  if ( (byte_49FB1A9 & 1) == 0 )
  {
    sub_1B640C8(&ActionChain_TypeInfo, method);
    sub_1B640C8(&System_Action___TypeInfo, v3);
    sub_1B640C8(&System_Action_Action____TypeInfo, v4);
    sub_1B640C8(&System_Action_Action__TypeInfo, v5);
    sub_1B640C8(&System_Action_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v8);
    sub_1B640C8(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__, v9);
    sub_1B640C8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__, v10);
    sub_1B640C8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__, v11);
    sub_1B640C8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, v12);
    byte_49FB1A9 = 1;
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
      v17 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_1B64314(
                                                                  UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                  v14,
                                                                  v15);
      UserPresentListViewManager_ReceiveCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__,
        v18);
      if ( userPresentListViewManager )
      {
        UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v17, v19);
        UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v20);
        return;
      }
      goto LABEL_19;
    }
    v21 = sub_1B64170(System_Action_Action____TypeInfo, 2LL);
    v24 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v22, v23);
    System_Action_object____ctor(
      v24,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__,
      0LL);
    if ( !v21 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v21 + 24) )
      goto LABEL_20;
    *(_QWORD *)(v21 + 32) = v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v24, v26, v27);
    v30 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v28, v29);
    System_Action_object____ctor(
      v30,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
      0LL);
    if ( *(_DWORD *)(v21 + 24) <= 1u )
      goto LABEL_20;
    *(_QWORD *)(v21 + 40) = v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 40), (int32_t)v30, v31, v32);
    v35 = (ActionChain_o *)sub_1B64314(ActionChain_TypeInfo, v33, v34);
    ActionChain___ctor_46278092(v35, (System_Action_Action__array *)v21, 0LL);
    v36 = sub_1B64170(System_Action___TypeInfo, 1LL);
    v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
    if ( !v36 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v36 + 24) )
LABEL_20:
      sub_1B6432C(touchBlocker, v25);
    *(_QWORD *)(v36 + 32) = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v39, v40, v41);
    if ( !v35
      || (touchBlocker = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                       (ChainableActionBase_o *)v35,
                                                       (System_Action_array *)v36,
                                                       0LL)) == 0LL )
    {
LABEL_19:
      sub_1B64324(touchBlocker);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  __int64 v9; // x2
  System_Action_o *v10; // x20

  if ( (byte_49FB178 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    sub_1B640C8(&AtlasManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, v6);
    byte_49FB178 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v10, 1, 0LL);
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
  char v10; // w8
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_49FB18E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    byte_49FB18E = 1;
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
        sub_1B64324(befSvtList);
      }
      size = befSvtList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          befSvtList,
          svtId,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        befSvtList->fields._size = size + 1;
        items->m_Items[size + 1] = svtId;
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v18; // x23
  unsigned int Index; // w8
  _BOOL4 v20; // w0
  int64_t klass; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  if ( (byte_49FB190 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, commandCodeId);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__FindIndex__, v9);
    sub_1B640C8(&System_Predicate_long__TypeInfo, v10);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__, v11);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo, v12);
    byte_49FB190 = 1;
  }
  v13 = (Il2CppObject *)sub_1B64314(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo, commandCodeId, isNew);
  System_Object___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v13[1].klass = (Il2CppClass *)commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v20) = 0;
    return v20;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v18 = (System_Predicate_long__o *)sub_1B64314(System_Predicate_long__TypeInfo, v15, v16);
  System_Predicate_long____ctor(
    v18,
    v13,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    0LL);
  if ( !befCommandCodeList )
    goto LABEL_16;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v18,
            (const MethodInfo_34958A8 *)Method_System_Collections_Generic_List_long__FindIndex__);
  v20 = Index >> 31;
  if ( (Index & 0x80000000) == 0 || !isAddCommandCode )
    return v20;
  v14 = this->fields.befCommandCodeList;
  if ( !v14
    || (klass = (int64_t)v13[1].klass,
        items = v14->fields._items,
        v23 = Method_System_Collections_Generic_List_long__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_16:
    sub_1B64324(v14);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v14,
      klass,
      *(const MethodInfo_3495074 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v14->fields._size = size + 1;
    items->m_Items[size] = klass;
  }
  LOBYTE(v20) = 1;
  return v20;
}


void __fastcall UserPresentBoxWindow__checkNextSvt(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UserPresentBoxWindow_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v8; // x8

  v4 = this;
  if ( (byte_49FB18D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    sub_1B640C8(&StringLiteral_9198/*"NEXT_SVT"*/, v5);
    this = (UserPresentBoxWindow_o *)sub_1B640C8(&StringLiteral_6352/*"FINAL_SVT"*/, v6);
    byte_49FB18D = 1;
  }
  receiveList = v4->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v4->fields.receiveIdx >= receiveList->fields._size )
  {
    v4->fields.receiveList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.receiveList, 0, v2, v3);
    this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
    v4->fields.receiveIdx = 0;
    if ( this )
    {
      v8 = &StringLiteral_6352/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B64324(this);
  }
  this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v8 = &StringLiteral_9198/*"NEXT_SVT"*/;
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

  if ( (byte_49FB18F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_49FB18F = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B64324(befSvtList);
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
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  ServantRewardAction_o *svtGetAction; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20

  if ( (byte_49FB18C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, end_act);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, v6);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, v7);
    byte_49FB18C = 1;
  }
  v8 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, end_act, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v8 + 24) = end_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)end_act, v12, v13);
  svtGetAction = this->fields.svtGetAction;
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)v8, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtGetAction )
LABEL_8:
    sub_1B64324(v9);
  ServantRewardAction__Play(svtGetAction, v17, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_49FB191 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    this = (UserPresentBoxWindow_o *)sub_1B640C8(&StringLiteral_9198/*"NEXT_SVT"*/, v3);
    byte_49FB191 = 1;
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
    sub_1B64324(this);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9198/*"NEXT_SVT"*/, 0LL);
}


System_String_o *__fastcall UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_String_o *v5; // x0
  int32_t stringLength; // w20
  Il2CppObject *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB19F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&StringLiteral_25052/*"}"*/, v2);
    sub_1B640C8(&StringLiteral_24825/*"{0,"*/, v3);
    byte_49FB19F = 1;
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
    sub_1B64324(v5);
  }
  v7 = (Il2CppObject *)v5;
  v11 = v5->fields._stringLength + 2 * (stringLength - v5->fields._stringLength);
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_61386656(
         (System_String_o *)StringLiteral_24825/*"{0,"*/,
         v8,
         (System_String_o *)StringLiteral_25052/*"}"*/,
         0LL);
  return System_String__Format(v9, v7, 0LL);
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  int v22; // w8
  System_Collections_Generic_IEnumerable_T__o *v23; // x23
  int v24; // w9
  __int64 v25; // x10
  int v26; // w10
  System_Collections_Generic_List_object__o *v27; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  NetworkManager_ResultCallbackFunc_o *v32; // x23
  const MethodInfo *v33; // x2

  if ( (byte_49FB17D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, presentIds);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___75672880, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v10);
    sub_1B640C8(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16);
    sub_1B640C8(&Method_UserPresentBoxWindow_CallbackReceiveRequest__, v17);
    byte_49FB17D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_23;
  Instance = (int64_t)UserPresentBoxMaster__getVaildList_39810880(
                        (UserPresentBoxMaster_o *)MasterData_object,
                        Instance,
                        presentIds,
                        0LL);
  if ( !Instance )
    goto LABEL_23;
  v22 = *(_DWORD *)(Instance + 24);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v22 == v24 )
        sub_1B6432C(Instance, v20);
      v25 = *(_QWORD *)(Instance + 8LL * v24 + 32);
      if ( !v25 )
        goto LABEL_23;
      v26 = *(_DWORD *)(v25 + 72);
      if ( v26 == 11 || v26 == 1 )
        break;
      if ( v22 == ++v24 )
        goto LABEL_18;
    }
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_18;
    }
LABEL_23:
    sub_1B64324(Instance);
  }
LABEL_18:
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor_55234504(
    v27,
    v23,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___75672880);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.receiveList, (int32_t)v27, v28, v29);
  this->fields.receiveIdx = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v30, v31);
  NetworkManager_ResultCallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (int64_t)NetworkManager__getRequest_object_(
                        v32,
                        (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_23;
  UserPresentReceiveRequest__beginRequest(
    (UserPresentReceiveRequest_o *)Instance,
    presentIds,
    selectIdx,
    selectNum,
    0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v33);
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
        if ( (byte_49FB169 & 1) == 0 )
        {
          sub_1B640C8(&UserPresentBoxErrorDialog_TypeInfo, method);
          byte_49FB169 = 1;
        }
        dialog->fields.jumpType = 0;
        return;
      }
    }
LABEL_18:
    sub_1B64324(this);
  }
  v6 = this->fields.userPresentListViewManager;
  if ( !v6 )
    goto LABEL_18;
  v7 = v6->fields.dialog;
  if ( !v7 )
    goto LABEL_18;
  if ( (byte_49FB169 & 1) == 0 )
  {
    sub_1B640C8(&UserPresentBoxErrorDialog_TypeInfo, method);
    byte_49FB169 = 1;
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
  const MethodInfo *receiveIdx; // x1
  int32_t v17; // w21
  UserPresentBoxEntity_o *v18; // x20
  int v19; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v23; // w23
  _BOOL4 isNew; // w23
  bool v25; // w22
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v27; // x23
  Il2CppClass *v28; // x24
  int32_t v29; // w23
  const MethodInfo *v30; // x4
  GetCommandCodes_o *v31; // x8
  _BOOL4 v32; // w9
  bool v33; // w2
  int32_t objectId; // w20
  const MethodInfo *v35; // x2
  _BOOL8 IsEquip; // x0
  const MethodInfo *v37; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v39; // x2
  int32_t v40; // w21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v42; // x2
  QuestRewardInfo_o *v43; // x0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x4
  _BOOL4 v46; // w22
  const MethodInfo *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  int64_t userSvtId; // x21
  CommonUI_o *v51; // x20
  CombineResultEffectComponent_ClickDelegate_o *v52; // x22
  int64_t userCommandCodeId; // x1
  bool v54; // w3
  int32_t num; // w5
  bool v56; // w2
  UserPresentBoxWindow_o *v57; // x0
  int32_t v58; // w4
  int32_t presentDialogMessageId; // w6
  ServantCostumeEntity_o *v60; // [xsp+0h] [xbp-60h] BYREF
  GetCommandCodes_o *v61; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v62; // [xsp+10h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_49FB185 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v9);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_UserPresentBoxWindow__showEffect_b__88_0__, v14);
    byte_49FB185 = 1;
  }
  entity = 0LL;
  v62 = 0LL;
  data = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_105;
  receiveIdx = (const MethodInfo *)(unsigned int)this->fields.receiveIdx;
  if ( (int)receiveIdx < *((_DWORD *)receiveList + 6) )
  {
    receiveList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)receiveList,
                    (int32_t)receiveIdx,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    if ( !receiveList )
      goto LABEL_105;
    v17 = *((_DWORD *)receiveList + 18);
    v18 = (UserPresentBoxEntity_o *)receiveList;
    if ( Gift__IsServant(v17, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &entity,
                              v18->fields.objectId,
                              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_105;
        receiveList = (void *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_105;
        v19 = (int)receiveList;
        receiveList = (void *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
        if ( ((v19 | (unsigned int)receiveList) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_105;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v65.fields.currentCryptoKey = klass;
          *(_QWORD *)&v65.fields.fakeValue = monitor;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v65, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v23, v17, 0LL) )
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
                v25 = data->fields.isNew || data->fields.isGetEffect;
                receiveList = (void *)Gift__IsEventSvtJoin(v17, 0LL);
                if ( ((unsigned __int8)receiveList & 1) != 0 )
                {
                  v46 = 0;
                }
                else
                {
                  if ( !data )
                    goto LABEL_105;
                  v46 = !UserPresentBoxWindow__checkNew(this, data->fields.userSvtId, v25, 1, v45);
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
                    if ( ((v46 | (unsigned int)receiveList) & 1) != 0 )
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
                          receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( data )
                          {
                            userSvtId = data->fields.userSvtId;
                            v51 = (CommonUI_o *)receiveList;
                            v52 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64314(
                                                                                    CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                                    v48,
                                                                                    v49);
                            CombineResultEffectComponent_ClickDelegate___ctor(
                              v52,
                              (Il2CppObject *)this,
                              Method_UserPresentBoxWindow__showEffect_b__88_0__,
                              0LL);
                            if ( v51 )
                            {
                              CommonUI__OpenSecretTreasureDeviceForSvtGet(v51, userSvtId, v52, 0LL);
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
                    v54 = data->fields.isNew || data->fields.isGetEffect;
                    num = v18->fields.num;
                    presentDialogMessageId = data->fields.presentDialogMessageId;
                    v56 = data->fields.isNew;
                    v57 = this;
                    v58 = v17;
LABEL_104:
                    UserPresentBoxWindow__startRewardGetEffect(
                      v57,
                      userCommandCodeId,
                      v56,
                      v54,
                      v58,
                      num,
                      presentDialogMessageId,
                      v47);
                    return;
                  }
                }
              }
            }
LABEL_105:
            sub_1B64324(receiveList);
          }
        }
      }
    }
    else if ( Gift__IsCommandCode(v17, 0LL) )
    {
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)receiveList,
                              &v62,
                              v18->fields.objectId,
                              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)receiveList & 1) != 0 )
      {
        if ( !v62 )
          goto LABEL_105;
        getCommandCodeList = this->fields.getCommandCodeList;
        v28 = v62[1].klass;
        v27 = v62[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v66.fields.currentCryptoKey = v28;
        *(_QWORD *)&v66.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v66, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v61, v29, 0LL) )
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
          v31 = v61;
          if ( !v61 )
            goto LABEL_105;
          v32 = v61->fields.isNew;
          this->fields.gotServant = v32;
          v33 = v32 || v31->fields.isGetEffect;
          receiveList = (void *)UserPresentBoxWindow__checkNewCommandCode(
                                  this,
                                  v31->fields.userCommandCodeId,
                                  v33,
                                  1,
                                  v30);
          if ( ((unsigned __int8)receiveList & 1) != 0 )
          {
            if ( !v61 )
              goto LABEL_105;
            userCommandCodeId = v61->fields.userCommandCodeId;
            v54 = v61->fields.isNew || v61->fields.isGetEffect;
            num = v18->fields.num;
            v56 = v61->fields.isNew;
            v57 = this;
            v58 = v17;
            presentDialogMessageId = 0;
            goto LABEL_104;
          }
        }
      }
    }
    else if ( Gift__IsCostumeRelease(v17, 0LL) )
    {
      objectId = v18->fields.objectId;
      receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !receiveList )
        goto LABEL_105;
      receiveList = DataManager__GetMasterData_object_(
                      (DataManager_o *)receiveList,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !receiveList )
        goto LABEL_105;
      if ( ServantCostumeMaster__TryGetEntity(
             (ServantCostumeMaster_o *)receiveList,
             &v60,
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
            if ( v60 )
            {
              UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(this, v60->fields.name, v35);
              return;
            }
          }
        }
        goto LABEL_105;
      }
    }
    else
    {
      IsEquip = Gift__IsEquip(v17, 0LL);
      if ( IsEquip )
      {
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v18, v37);
        UserPresentBoxWindow__startRewardEquipGetEffect(this, QuestRewardInfo, v39);
        return;
      }
      if ( Gift__IsItem(v17, 0LL) )
      {
        v40 = v18->fields.objectId;
        receiveList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !receiveList )
          goto LABEL_105;
        if ( CommonUI__IsGetItemEffect((CommonUI_o *)receiveList, v40, 0LL) )
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
              v43 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v18, v42);
              UserPresentBoxWindow__startRewardSpecialItemGetEffect(this, v43, v44);
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


void __fastcall UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_49FB192 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B640C8(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, v6);
    byte_49FB192 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !v12 )
LABEL_8:
    sub_1B64324(Instance);
  CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, v14, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_49FB187 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, name);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__, v7);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, v8);
    byte_49FB187 = 1;
  }
  v9 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, name, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)name, v11, v12);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v13, v14);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !v19 )
LABEL_9:
    sub_1B64324(touchBlocker);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_49FB188 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, questRewardInfo);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__, v7);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, v8);
    byte_49FB188 = 1;
  }
  v9 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, questRewardInfo, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = questRewardInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)questRewardInfo, v11, v12);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v13, v14);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !v19 )
LABEL_9:
    sub_1B64324(touchBlocker);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0LL);
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
  int32_t v30; // w2
  int32_t v31; // w3
  UserServantEntity_o *v32; // x21
  EventServantEntity_o *EventServant_39884712; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  EventServantEntity_o *v36; // x22
  __int64 v37; // x19
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *JoinMessage; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 *v43; // x8
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  AvalonSceneManager_c *v47; // x8
  CommonUI_o *v48; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v50; // x21
  System_String_o *Message; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  AvalonSceneManager_c *v60; // x8
  CommonUI_o *v61; // x20
  float v62; // s8
  System_Action_o *v63; // x21

  if ( (byte_49FB186 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, userSvtID);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&ScriptManager_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__, v22);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, v23);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__, v24);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v25);
    sub_1B640C8(&StringLiteral_12288/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v26);
    sub_1B640C8(&StringLiteral_12289/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/, v27);
    byte_49FB186 = 1;
  }
  v28 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, userSvtID, isNew);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_29;
  *(_QWORD *)(v28 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v30, v31);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_QWORD *)(v28 + 32),
                                (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_29;
  v32 = (UserServantEntity_o *)Instance;
  EventServant_39884712 = UserServantEntity__getEventServant_39884712((UserServantEntity_o *)Instance, 1, 0LL);
  if ( !EventServant_39884712 || (v36 = EventServant_39884712, EventServant_39884712->fields.type != 2) )
  {
LABEL_17:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v47 = AvalonSceneManager_TypeInfo;
      v48 = (CommonUI_o *)v44;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v47 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v47->static_fields->DEFAULT_FADE_TIME;
      v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v45, v46);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v28,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v48 )
      {
        CommonUI__maskFadeout(v48, 1, DEFAULT_FADE_TIME, v50, 0LL);
        return;
      }
    }
LABEL_29:
    sub_1B64324(Instance);
  }
  v37 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v34, v35);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_29;
  *(_QWORD *)(v37 + 32) = v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), v28, v38, v39);
  if ( UserServantEntity__HasStatus(v32, 64, 0LL) )
  {
    JoinMessage = EventServantEntity__GetJoinMessage(v36, 0LL);
    *(_QWORD *)(v37 + 24) = JoinMessage;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)JoinMessage, v41, v42);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = &StringLiteral_12289/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = EventServantEntity__GetGetMessage(v36, 0LL);
    *(_QWORD *)(v37 + 24) = Message;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)Message, v52, v53);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = &StringLiteral_12288/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v54 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
  *(_QWORD *)(v37 + 16) = v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 16), (int32_t)v54, v55, v56);
  v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = AvalonSceneManager_TypeInfo;
  v61 = (CommonUI_o *)v57;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v60 = AvalonSceneManager_TypeInfo;
  }
  v62 = v60->static_fields->DEFAULT_FADE_TIME;
  v63 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v58, v59);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v37,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v61 )
    goto LABEL_29;
  CommonUI__maskFadein(v61, v62, v63, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_49FB189 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, questRewardInfo);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__, v7);
    sub_1B640C8(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, v8);
    byte_49FB189 = 1;
  }
  v9 = sub_1B64314(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, questRewardInfo, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = questRewardInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)questRewardInfo, v11, v12);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v13, v14);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !v19 )
LABEL_9:
    sub_1B64324(touchBlocker);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AB438;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AB3F0;
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
  if ( (byte_49FB1AA & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, hasGetServant);
    byte_49FB1AA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
    sub_1B64324(this);
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
  int32_t v7; // w3
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x20
  struct System_Collections_Generic_List_long__o *checkedIdList; // x8
  int v11; // w9
  struct UserPresentBoxWindow_o *v12; // x8
  struct UserPresentListViewManager_o *v13; // x8
  int32_t v14; // w1

  if ( (byte_49FB1AB & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FB1AB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  userPresentListViewManager = _4__this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  if ( (byte_49FB1E9 & 1) == 0 )
  {
    Instance = (CommonUI_o *)sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v5);
    byte_49FB1E9 = 1;
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
    sub_1B64324(Instance);
  v14 = (int)StringLiteral_1/*""*/;
  v13->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->fields._expiredPresents_k__BackingField, v14, v6, v7);
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
  int32_t v9; // w3

  v3 = this;
  if ( (byte_49FB1AC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isOk);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_1B640C8(
                                                             &Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
                                                             v4);
    byte_49FB1AC = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isOk, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !evpDialog )
LABEL_8:
    sub_1B64324(this);
  UserPresentBoxEventPointRewardDialog__Close_37081992(evpDialog, _9__1, method);
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
    sub_1B64324(this);
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
  __int64 v7; // x2
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB1AE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__, v4);
    byte_49FB1AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v9 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v10, v11);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  SummonAssetManager__LoadSummonAssets(v9, _9__3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FB1AD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_49FB1AD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
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
  Il2CppObject *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  Il2CppObject *v15; // x20
  struct UserPresentBoxWindow_o *v16; // x8
  SummonAssetManager_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w21
  struct UserPresentBoxWindow_o *v21; // x8
  ServantRewardAction_o *svtGetAction; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v25; // w0
  Il2CppObject v26; // q1
  int32_t v27; // w23
  int64_t v28; // x0
  Il2CppClass *v29; // x8
  int64_t v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  struct UserPresentBoxWindow_o *v33; // x8
  struct ServantRewardAction_o *v34; // x8
  Il2CppObject *v35; // x0
  struct UserPresentBoxWindow_o *v36; // x22
  Il2CppObject *v37; // x21
  struct UserPresentBoxWindow_o *v38; // x8
  SummonAssetManager_o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  struct UserPresentBoxWindow_o *v42; // x8
  ServantRewardAction_o *v43; // x20
  Il2CppObject v44; // q1
  bool isNew; // w2
  int64_t v46; // x1
  bool v47; // w3
  int32_t v48; // w4
  ServantRewardAction_o *v49; // x0
  struct UserPresentBoxWindow_o *v50; // x8
  ServantRewardAction_o *v51; // x21
  void *v52; // x22
  Il2CppClass *v53; // x23
  int32_t v54; // w0
  Il2CppObject v55; // q1
  int32_t v56; // w22
  int64_t v57; // x0
  Il2CppClass *v58; // x8
  int64_t v59; // x20
  Il2CppObject v60; // q1
  Il2CppObject *v61; // x19
  System_Action_o *v62; // x20
  const MethodInfo *v63; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_49FB1AF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_1B640C8(&Method_UserPresentBoxWindow_EndEffect__, v11);
    byte_49FB1AF = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    _4__this = this->fields.__4__this;
    v15 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_55;
    v17 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v16->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v17 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v17, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_55;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.svtGetAction, Instance, v18, v19);
    if ( this->fields.isDoEffect )
    {
      if ( v15 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_39884712((UserServantEntity_o *)v15, 1, 0LL);
        v20 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v20 = 6;
          else
            v20 = 14;
        }
        v21 = this->fields.__4__this;
        if ( v21 )
        {
          svtGetAction = v21->fields.svtGetAction;
          klass = v15[5].klass;
          monitor = v15[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v69.fields.currentCryptoKey = klass;
          *(_QWORD *)&v69.fields.fakeValue = monitor;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v69, 0LL);
          v26 = v15[2];
          v27 = v25;
          *(Il2CppObject *)&v68.fields.currentCryptoKey = v15[1];
          *(Il2CppObject *)&v68.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v67 = v68;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v67, 0LL);
          v29 = v15[6].klass;
          *(_QWORD *)&v70.fields.fakeValue = v15[6].monitor;
          v30 = v28;
          *(_QWORD *)&v70.fields.currentCryptoKey = v29;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v70, 0LL);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v27,
              v30,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v20,
              0LL);
            if ( !this->fields.isNew )
              goto LABEL_53;
            v33 = this->fields.__4__this;
            if ( v33 )
            {
              v34 = v33->fields.svtGetAction;
              if ( v34 )
              {
                v34->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_53;
              }
            }
          }
        }
      }
LABEL_55:
      sub_1B64324(Instance);
    }
    v50 = this->fields.__4__this;
    if ( !v50 || !v15 )
      goto LABEL_55;
    v51 = v50->fields.svtGetAction;
    v53 = v15[5].klass;
    v52 = v15[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v71.fields.currentCryptoKey = v53;
    *(_QWORD *)&v71.fields.fakeValue = v52;
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v71, 0LL);
    v55 = v15[2];
    v56 = v54;
    *(Il2CppObject *)&v68.fields.currentCryptoKey = v15[1];
    *(Il2CppObject *)&v68.fields.fakeValue = v55;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v66 = v68;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v66, 0LL);
    v58 = v15[6].klass;
    *(_QWORD *)&v72.fields.fakeValue = v15[6].monitor;
    v59 = v57;
    *(_QWORD *)&v72.fields.currentCryptoKey = v58;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v72, 0LL);
    if ( !v51 )
      goto LABEL_55;
    ServantRewardAction__Setup(v51, v56, v59, Instance, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_55;
    v35 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    v36 = this->fields.__4__this;
    v37 = v35;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v38 = this->fields.__4__this;
    if ( !v38 )
      goto LABEL_55;
    v39 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)v38->fields.effectPanel;
    if ( !Instance )
      goto LABEL_55;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v39 )
      goto LABEL_55;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v39, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !v36 )
      goto LABEL_55;
    v36->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36->fields.svtGetAction, Instance, v40, v41);
    v42 = this->fields.__4__this;
    if ( !v42 || !v37 )
      goto LABEL_55;
    v43 = v42->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v44 = v37[2];
      *(Il2CppObject *)&v68.fields.currentCryptoKey = v37[1];
      *(Il2CppObject *)&v68.fields.fakeValue = v44;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v65 = v68;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v65, 0LL);
      if ( !v43 )
        goto LABEL_55;
      isNew = this->fields.isNew;
      v46 = Instance;
      v47 = 1;
      v48 = 14;
      v49 = v43;
    }
    else
    {
      v60 = v37[2];
      *(Il2CppObject *)&v68.fields.currentCryptoKey = v37[1];
      *(Il2CppObject *)&v68.fields.fakeValue = v60;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v64 = v68;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v64, 0LL);
      if ( !v43 )
        goto LABEL_55;
      v46 = Instance;
      v48 = 6;
      v49 = v43;
      isNew = 0;
      v47 = 0;
    }
    ServantRewardAction__SetupCommandCode_34310396(v49, v46, isNew, v47, v48, 0LL);
  }
LABEL_53:
  v61 = (Il2CppObject *)this->fields.__4__this;
  v62 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(v62, v61, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v61 )
    goto LABEL_55;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v61, v62, v63);
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
  __int64 v7; // x2
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v12; // x19
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FB1B0 & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__, v4);
    byte_49FB1B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v12 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v6, v7);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v13, v14);
  }
  if ( !v12 )
LABEL_8:
    sub_1B64324(Instance);
  CommonUI__OpenNotificationDialog_30347532(
    v12,
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
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  CommonUI_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB1B1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_49FB1B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__LoadCostumeReleaseEffect(v9, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__2; // x22
  CommonUI_o *v9; // x21
  System_String_o *name; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FB1B2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_49FB1B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__OpenCostumeReleaseEffect(v9, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49FB1B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB1B3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
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
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  CommonUI_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB1B4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__, v4);
    byte_49FB1B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__LoadEquipGetEffect(v9, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__2; // x22
  CommonUI_o *v9; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FB1B5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__, v4);
    byte_49FB1B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__OpenEquipGetEffect(v9, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49FB1B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB1B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
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
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  CommonUI_o *v9; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FB1B7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__, v4);
    byte_49FB1B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__LoadItemGetEffect(v9, questRewardInfo, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *Instance; // x0
  struct UserPresentBoxWindow_o *_4__this; // x8
  CommonUI_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v11; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FB1B8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__, v4);
    byte_49FB1B8 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v7 = (CommonUI_o *)Instance;
  Instance = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v11 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v13, v14);
  }
  if ( !v7 )
LABEL_9:
    sub_1B64324(Instance);
  CommonUI__OpenItemGetEffect(v7, v11, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49FB1B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FB1B9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
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
  if ( (byte_49FB1BA & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB1BA = 1;
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
  UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0LL )
LABEL_10:
    sub_1B64324(this);
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