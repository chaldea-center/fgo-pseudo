void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F97D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    byte_40F97D0 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.befCommandCodeList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserPresentBoxWindow__CallbackReceiveRequest(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x20
  UserPresentBoxWindow_resData_array *v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UserPresentBoxWindow_resData_array *v21; // x20
  UserPresentBoxWindow_resData_o *v22; // x8
  struct GetSvts_array *getSvts; // x1
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UserPresentBoxWindow_resData_o *v29; // x8
  struct GetCommandCodes_array *getCommandCodes; // x1
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UserPresentBoxWindow_resData_o *v36; // x8
  UserPresentBoxWindow_resData_o *v37; // x8
  struct UserPresentBoxWindow_evPointReward_array *receiveEventPointReward; // x1
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UserPresentBoxWindow_resData_o *v44; // x8
  struct GetSvtCoin_array *getSvtCoin; // x1
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UserPresentBoxWindow_resData_o *v51; // x8
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x20
  const MethodInfo *v58; // x2

  if ( (byte_40F97AA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___, v5);
    sub_B16FFC(&JsonManager_TypeInfo, v6);
    sub_B16FFC(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, v7);
    sub_B16FFC(&StringLiteral_20980, v8);
    sub_B16FFC(&StringLiteral_15571, v9);
    sub_B16FFC(&StringLiteral_15807, v10);
    byte_40F97AA = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(this, v11);
    return;
  }
  v12 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571,
                          result,
                          (System_String_o *)StringLiteral_15807,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          v12,
          (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !v13 )
    goto LABEL_23;
  v21 = v13;
  if ( !v13->max_length )
    goto LABEL_24;
  v22 = v13->m_Items[0];
  if ( !v22 )
    goto LABEL_23;
  getSvts = v22->fields.getSvts;
  this->fields.getSvtList = getSvts;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)getSvts,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !v21->max_length )
    goto LABEL_24;
  v29 = v21->m_Items[0];
  if ( !v29 )
    goto LABEL_23;
  getCommandCodes = v29->fields.getCommandCodes;
  this->fields.getCommandCodeList = getCommandCodes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.getCommandCodeList,
    (System_Int32_array **)getCommandCodes,
    v15,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !v21->max_length )
    goto LABEL_24;
  v36 = v21->m_Items[0];
  if ( !v36 )
    goto LABEL_23;
  this->fields.presentOverflowType = v36->fields.overflowType;
  if ( !v21->max_length )
    goto LABEL_24;
  v37 = v21->m_Items[0];
  if ( !v37 )
    goto LABEL_23;
  receiveEventPointReward = v37->fields.receiveEventPointReward;
  this->fields.evPointRewardList = receiveEventPointReward;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.evPointRewardList,
    (System_Int32_array **)receiveEventPointReward,
    v15,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( !v21->max_length )
    goto LABEL_24;
  v44 = v21->m_Items[0];
  if ( !v44 )
    goto LABEL_23;
  getSvtCoin = v44->fields.getSvtCoin;
  this->fields.getSvtCoins = getSvtCoin;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.getSvtCoins,
    (System_Int32_array **)getSvtCoin,
    v15,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !v21->max_length )
  {
LABEL_24:
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  v51 = v21->m_Items[0];
  if ( !v51 )
LABEL_23:
    sub_B170D4();
  overflowSvtCoinInfos = v51->fields.overflowSvtCoinInfos;
  this->fields.overflowSvtCoinInfos = overflowSvtCoinInfos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.overflowSvtCoinInfos,
    (System_Int32_array **)overflowSvtCoinInfos,
    v15,
    v46,
    v47,
    v48,
    v49,
    v50);
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(this, v57, v58);
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
  UserPresentListViewManager_c *v13; // x0
  ListViewSort_o **p_sortInfo; // x8
  ListViewSort_o *v15; // x19
  char v16; // vf
  UserPresentBoxMaster_c *v17; // x8
  struct UserPresentBoxMaster_StaticFields *static_fields; // x9
  int32_t flag; // w10
  bool result; // w0
  bool Filter_30229884; // w8
  BalanceConfig_c *v22; // x0
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  WarEntity_o *v24; // x0
  int32_t v25; // w1
  WarEntity_o *Entity; // x0

  if ( (byte_40F97A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, servantMaster);
    sub_B16FFC(&BalanceConfig_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&UserPresentBoxMaster_TypeInfo, v11);
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v12);
    byte_40F97A7 = 1;
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, servantMaster);
    byte_40F97D6 = 1;
  }
  v13 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v13 = UserPresentListViewManager_TypeInfo;
  }
  p_sortInfo = &v13->static_fields->sortInfo;
  v15 = *p_sortInfo;
  if ( !*p_sortInfo )
    goto LABEL_60;
  if ( !ListViewSort__GetFilter_30229884(*p_sortInfo, 13, 0LL) )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_60;
LABEL_25:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        v22 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v22 = BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = v22->static_fields->PresentBoxFilterSvtEquipMaterial;
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          if ( (System_Array__IndexOf_int_(
                  PresentBoxFilterSvtEquipMaterial,
                  userPresentBoxEntity->fields.objectId,
                  (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            return ListViewSort__GetFilter_30229884(v15, 4, 0LL);
        }
        if ( servantMaster )
        {
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                     userPresentBoxEntity->fields.objectId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            switch ( *(&Entity->fields.startType + 1) )
            {
              case 1:
              case 0xC:
                goto LABEL_26;
              case 3:
                v25 = 1;
                return ListViewSort__GetFilter_30229884(v15, v25, 0LL);
              case 6:
                v25 = 3;
                return ListViewSort__GetFilter_30229884(v15, v25, 0LL);
              case 7:
                v25 = 2;
                return ListViewSort__GetFilter_30229884(v15, v25, 0LL);
              case 8:
                v25 = 4;
                return ListViewSort__GetFilter_30229884(v15, v25, 0LL);
              default:
                goto LABEL_46;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        v24 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
                userPresentBoxEntity->fields.objectId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !v24 )
          break;
        switch ( v24->fields.bannerId )
        {
          case 2:
          case 0x11:
          case 0x14:
            v25 = 10;
            break;
          case 3:
          case 4:
            v25 = 6;
            break;
          case 5:
            v25 = 11;
            break;
          case 9:
            v25 = 8;
            break;
          case 0xA:
          case 0xB:
          case 0xC:
          case 0x19:
          case 0x1D:
            v25 = 7;
            break;
          case 0xE:
          case 0xF:
          case 0x12:
          case 0x13:
          case 0x1C:
            v25 = 12;
            break;
          case 0x18:
            v25 = 9;
            break;
          default:
            goto LABEL_46;
        }
        return ListViewSort__GetFilter_30229884(v15, v25, 0LL);
      case 6:
      case 7:
LABEL_26:
        Filter_30229884 = ListViewSort__GetFilter_30229884(v15, 0, 0LL);
        result = 0;
        if ( !Filter_30229884 )
          return result;
        return 1;
      case 0xB:
        v25 = 5;
        return ListViewSort__GetFilter_30229884(v15, v25, 0LL);
      default:
LABEL_46:
        v25 = 14;
        return ListViewSort__GetFilter_30229884(v15, v25, 0LL);
    }
LABEL_60:
    sub_B170D4();
  }
  v17 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v17 = UserPresentBoxMaster_TypeInfo;
  }
  if ( !userPresentBoxEntity )
    goto LABEL_60;
  static_fields = v17->static_fields;
  flag = userPresentBoxEntity->fields.flag;
  result = 1;
  if ( (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) < 0) ^ v16 | (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) == 0) )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      flag = userPresentBoxEntity->fields.flag;
      static_fields = UserPresentBoxMaster_TypeInfo->static_fields;
    }
    result = 1;
    if ( ((1 << static_fields->IMPORTANT_FOR_LIMIT) & flag) < 1 )
      goto LABEL_25;
  }
  return result;
}


bool __fastcall UserPresentBoxWindow__CheckRarityFilter(
        UserPresentBoxWindow_o *this,
        ServantLimitMaster_o *servantLimitMaster,
        CommandCodeMaster_o *commandCodeMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        bool isActiveFilterCategory,
        const MethodInfo *method)
{
  char v6; // vf
  __int64 v11; // x1
  __int64 v12; // x1
  UserPresentListViewManager_c *v13; // x0
  ListViewSort_o **p_sortInfo; // x8
  ListViewSort_o *v15; // x19
  UserPresentBoxMaster_c *v16; // x0
  struct UserPresentBoxMaster_StaticFields *static_fields; // x9
  int32_t flag; // w10
  bool v19; // w8
  int32_t giftType; // w8
  ServantLimitEntity_o *v21; // x0
  int32_t *p_flag; // x8
  WarEntity_o *Entity; // x0
  bool Filter_30229944; // w0
  int32_t v25; // w1

  if ( (byte_40F97A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, servantLimitMaster);
    sub_B16FFC(&UserPresentBoxMaster_TypeInfo, v11);
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v12);
    byte_40F97A8 = 1;
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, servantLimitMaster);
    byte_40F97D6 = 1;
  }
  v13 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v13 = UserPresentListViewManager_TypeInfo;
  }
  p_sortInfo = &v13->static_fields->sortInfo;
  v15 = *p_sortInfo;
  if ( isActiveFilterCategory )
  {
    if ( !v15 )
      goto LABEL_55;
    if ( !ListViewSort__GetFilter_30229884(*p_sortInfo, 13, 0LL) )
    {
      if ( !userPresentBoxEntity )
        goto LABEL_55;
      goto LABEL_26;
    }
  }
  v16 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v16 = UserPresentBoxMaster_TypeInfo;
  }
  if ( !userPresentBoxEntity )
    goto LABEL_55;
  static_fields = v16->static_fields;
  flag = userPresentBoxEntity->fields.flag;
  v19 = 1;
  if ( (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) < 0) ^ v6 | (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) == 0) )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      flag = userPresentBoxEntity->fields.flag;
      static_fields = UserPresentBoxMaster_TypeInfo->static_fields;
    }
    v19 = 1;
    if ( ((1 << static_fields->IMPORTANT_FOR_LIMIT) & flag) < 1 )
    {
LABEL_26:
      giftType = userPresentBoxEntity->fields.giftType;
      if ( (unsigned int)(giftType - 6) >= 2 )
      {
        if ( giftType == 11 )
        {
          if ( commandCodeMaster )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)commandCodeMaster,
                       userPresentBoxEntity->fields.objectId,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
            if ( Entity )
            {
              p_flag = &Entity->fields.flag;
LABEL_35:
              switch ( *p_flag )
              {
                case 0:
                  if ( !v15 )
                    goto LABEL_55;
                  if ( !ListViewSort__CheckPresentBoxRarityFilterAll(v15, 0LL)
                    && !ListViewSort__UnCheckPresentBoxRarityFilterAll(v15, 0LL) )
                  {
                    goto LABEL_54;
                  }
                  return 1;
                case 1:
                  if ( !v15 )
                    goto LABEL_55;
                  Filter_30229944 = ListViewSort__GetFilter_30229944(v15, 0, 0LL);
                  v19 = 0;
                  if ( !Filter_30229944 )
                    return v19;
                  return 1;
                case 2:
                  if ( !v15 )
                    goto LABEL_55;
                  v25 = 1;
                  goto LABEL_51;
                case 3:
                  if ( !v15 )
                    goto LABEL_55;
                  v25 = 2;
                  goto LABEL_51;
                case 4:
                  if ( !v15 )
                    goto LABEL_55;
                  v25 = 3;
                  goto LABEL_51;
                case 5:
                  if ( !v15 )
                    goto LABEL_55;
                  v25 = 4;
LABEL_51:
                  if ( ListViewSort__GetFilter_30229944(v15, v25, 0LL) )
                    return 1;
LABEL_54:
                  v19 = 0;
                  break;
                default:
                  return 1;
              }
              return v19;
            }
            return 1;
          }
LABEL_55:
          sub_B170D4();
        }
        if ( giftType != 1 )
          return 1;
      }
      if ( servantLimitMaster )
      {
        v21 = ServantLimitMaster__GetEntity(servantLimitMaster, userPresentBoxEntity->fields.objectId, 0, 0LL);
        if ( v21 )
        {
          p_flag = &v21->fields.rarity;
          goto LABEL_35;
        }
        return 1;
      }
      goto LABEL_55;
    }
  }
  return v19;
}


void __fastcall UserPresentBoxWindow__CheckSvtGetTutorial(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o **v18; // x22
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x21
  __int64 receiveIdx; // x20
  int size; // w8
  UserPresentBoxEntity_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x20

  if ( (byte_40F97BF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v8);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__, v9);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, v10);
    byte_40F97BF = 1;
  }
  v11 = sub_B170CC(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, callback, method, v3, v4);
  UserPresentBoxWindow___c__DisplayClass102_0___ctor((UserPresentBoxWindow___c__DisplayClass102_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = callback;
  v18 = (System_Action_o **)(v11 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)callback, v12, v13, v14, v15, v16, v17);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_16;
  receiveIdx = this->fields.receiveIdx;
  size = receiveList->fields._size;
  if ( (int)receiveIdx < size )
  {
    if ( size <= (unsigned int)receiveIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v22 = receiveList->fields._items->m_Items[receiveIdx];
    if ( v22 )
    {
      if ( Gift__IsServant(v22->fields.giftType, 0LL) )
      {
        v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
        System_Action___ctor(
          v27,
          (Il2CppObject *)v11,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v27, v22->fields.objectId, 0, 0, 0, 0LL);
        return;
      }
      if ( *v18 )
      {
        System_Action__Invoke(*v18, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
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
  ListViewSort_o *sortInfo; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v8; // x1
  PresentBoxFilterSelectMenu_o *presentBoxFilterSelectMenu; // x0

  if ( (byte_40F97CF & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, result);
    byte_40F97CF = 1;
  }
  if ( result )
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_40F97D6 )
    {
      sub_B16FFC(&UserPresentListViewManager_TypeInfo, result);
      byte_40F97D6 = 1;
    }
    v5 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v5 = UserPresentListViewManager_TypeInfo;
    }
    sortInfo = v5->static_fields->sortInfo;
    if ( !sortInfo
      || (ListViewSort__Save(sortInfo, 0LL),
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
LABEL_17:
      sub_B170D4();
    }
    UserPresentListViewManager__resetCheckStatus(userPresentListViewManager, 0LL);
    this->fields.mIsScrlResetPosition = 1;
    UserPresentBoxWindow__ReDisp(this, v8);
  }
  presentBoxFilterSelectMenu = this->fields.presentBoxFilterSelectMenu;
  if ( !presentBoxFilterSelectMenu )
    goto LABEL_17;
  PresentBoxFilterSelectMenu__Close(presentBoxFilterSelectMenu, 0LL);
}


void __fastcall UserPresentBoxWindow__Close(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  TerminalSceneComponent_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F97C5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v3);
    byte_40F97C5 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mInstance, 0LL, 0LL) )
  {
    if ( !mInstance )
      goto LABEL_20;
    TerminalSceneComponent__UpdateQuestBoardList(mInstance, 0LL);
  }
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__DestroyList(userPresentListViewManager, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


QuestRewardInfo_o *__fastcall UserPresentBoxWindow__CreateQuestRewardInfo(
        UserPresentBoxWindow_o *this,
        UserPresentBoxEntity_o *userPresentBox,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  QuestRewardInfo_o *v6; // x20
  QuestRewardInfo_o *result; // x0

  if ( (byte_40F97B6 & 1) == 0 )
  {
    sub_B16FFC(&QuestRewardInfo_TypeInfo, userPresentBox);
    byte_40F97B6 = 1;
  }
  v6 = (QuestRewardInfo_o *)sub_B170CC(QuestRewardInfo_TypeInfo, userPresentBox, method, v3, v4);
  QuestRewardInfo___ctor(v6, 0LL);
  if ( !userPresentBox || !v6 )
    sub_B170D4();
  result = v6;
  v6->fields.type = userPresentBox->fields.giftType;
  v6->fields.objectId = userPresentBox->fields.objectId;
  v6->fields.num = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40F97B7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5467, method);
    byte_40F97B7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5467, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40F97C0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080, method);
    byte_40F97C0 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_40F97AD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, res);
    sub_B16FFC(&Method_UserPresentBoxWindow_EndReceive__, v6);
    byte_40F97AD = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, res, method, v3, v4);
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
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x3

  if ( (byte_40F97AE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, res);
    sub_B16FFC(&Method_UserPresentBoxWindow_EndEffectReceive__, v6);
    byte_40F97AE = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, res, method, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v7, v8);
}


bool __fastcall UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x0
  Il2CppObject *current; // x21
  CommonUI_o *Instance; // x0
  char v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F97AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F97AB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)receiveList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__) )
  {
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B170D4();
    if ( !Gift__IsCostumeRelease((int32_t)v14.fields.current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      if ( !CommonUI__IsGetItemEffect(Instance, HIDWORD(current[4].monitor), 0LL) )
        continue;
    }
    v10 = 1;
    v11 = 2;
    goto LABEL_14;
  }
  v11 = 0;
  v10 = 0;
LABEL_14:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return (v11 == 2) & v10;
}


void __fastcall UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentListViewManager_o *v7; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x23

  if ( (byte_40F97C1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow_ProcessClickAll__, v4);
    sub_B16FFC(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__, v5);
    byte_40F97C1 = 1;
  }
  if ( this->fields.isReceiveFlg )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager )
      goto LABEL_15;
    UserPresentListViewManager__SetMode_21347816(userPresentListViewManager, 2, 0LL);
    v7 = this->fields.userPresentListViewManager;
    if ( !v7
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(v7, 0LL),
          v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13),
          System_Action___ctor(v14, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18),
          System_Action___ctor(v19, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_15:
      sub_B170D4();
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v14, v19, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__OnClickBack(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_40F97C6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F97C6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    UserPresentBoxWindow_ClickDelegate__Invoke(callbackFunc, this->fields.gotServant, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickCheckedItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentListViewManager_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40F97C3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F97C3 = 1;
  }
  if ( this->fields.isCheckedFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 3, 0LL),
          (v4 = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    UserPresentListViewManager__SetMode_21347816(v4, 2, 0LL);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v5);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
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
  UnityEngine_Object_o *presentBoxFilterSelectMenu; // x21
  struct PresentBoxFilterSelectMenu_o **p_presentBoxFilterSelectMenu; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct UnityEngine_GameObject_o *presentBoxFilterKindSelectMenuPrefab; // x21
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  PresentBoxFilterSelectMenu_o *v25; // x20
  UserPresentListViewManager_c *v26; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v28; // x22

  if ( (byte_40F97CE & 1) == 0 )
  {
    sub_B16FFC(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&Method_UserPresentBoxWindow_ClickFilterEnd__, v7);
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v8);
    byte_40F97CE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  presentBoxFilterSelectMenu = (UnityEngine_Object_o *)this->fields.presentBoxFilterSelectMenu;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_presentBoxFilterSelectMenu = &this->fields.presentBoxFilterSelectMenu;
  if ( UnityEngine_Object__op_Equality(presentBoxFilterSelectMenu, 0LL, 0LL) )
  {
    presentBoxFilterKindSelectMenuPrefab = this->fields.presentBoxFilterKindSelectMenuPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)presentBoxFilterKindSelectMenuPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(v16, gameObject, 0LL);
    if ( !v16 )
LABEL_25:
      sub_B170D4();
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v16,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.presentBoxFilterSelectMenu,
      Component_srcLineSprite,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = *p_presentBoxFilterSelectMenu;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v11);
    byte_40F97D6 = 1;
  }
  v26 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v26 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v26->static_fields->sortInfo;
  v28 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                       PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo,
                                                       v11,
                                                       v12,
                                                       v13,
                                                       v14);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0LL);
  if ( !v25 )
    goto LABEL_25;
  PresentBoxFilterSelectMenu__Open(v25, sortInfo, v28, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_40F97CC & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F97CC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  UserPresentBoxWindow__OpenHelp(v2, v3);
}


void __fastcall UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentListViewManager_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40F97C2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F97C2 = 1;
  }
  if ( this->fields.isItemReceiveFlg )
  {
    this->fields.mIsScrlResetPosition = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 2, 0LL),
          (v4 = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    UserPresentListViewManager__SetMode_21347816(v4, 2, 0LL);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v5);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F97C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__, v6);
    byte_40F97C7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v11,
                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F97A0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F97A0 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_titleInfo, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v17; // x1
  UnityEngine_GameObject_o *bgObject; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Component_o *allReceiveBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v27; // x3
  UnityEngine_Component_o *itemReceiveBtn; // x0
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x3
  UnityEngine_Component_o *checkedItemBtn; // x0
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x3
  UserPresentBoxWindow_o *v34; // x0
  const MethodInfo *v35; // x1
  struct System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x2
  TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  struct UnityEngine_GameObject_o *titlePrefab; // x22
  UnityEngine_GameObject_o *v47; // x0
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  TitleInfoControl_o *v55; // x22
  UnityEngine_Transform_o *transform; // x0
  TitleInfoControl_o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Action_o *v62; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_int__o *v69; // x22
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v71; // x1
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_Behaviour_o *sortBtn; // x0
  struct UICommonButton_o *v74; // x0
  const MethodInfo *v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  const MethodInfo *v82; // x2
  int32_t Value; // w0
  bool v84; // w20
  const MethodInfo *v85; // x2

  if ( (byte_40F97A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, isShowBg);
    sub_B16FFC(&System_Action_int__TypeInfo, v9);
    sub_B16FFC(&System_Action_TypeInfo, v10);
    sub_B16FFC(&AtlasManager_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_UserPresentBoxWindow_OnClickBack__, v15);
    sub_B16FFC(&Method_UserPresentBoxWindow__Open_b__69_0__, v16);
    sub_B16FFC(&StringLiteral_5453, v17);
    byte_40F97A1 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  allReceiveBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !allReceiveBtn )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(allReceiveBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, 0, gameObject, v27);
  itemReceiveBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !itemReceiveBtn )
    goto LABEL_31;
  v29 = UnityEngine_Component__get_gameObject(itemReceiveBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v29, 0, v29, v30);
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !checkedItemBtn )
    goto LABEL_31;
  v32 = UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v32, 0, v32, v33);
  v36 = UserPresentBoxWindow__maxSelectable(v34, v35);
  this->fields.presentMaxSelectable = v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.presentMaxSelectable,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  UserPresentBoxWindow__SetSelectCount(this, 0, v43);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = this->fields.titlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v47 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)titlePrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( v47 )
    {
      Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v47,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = Component_srcLineSprite;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.titleInfo,
        (System_Int32_array **)Component_srcLineSprite,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      v55 = this->fields.titleInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v55 )
      {
        TitleInfoControl__SetParent(v55, transform, 0LL);
        if ( *p_titleInfo )
        {
          TitleInfoControl__setDepth(*p_titleInfo, 51, 0LL);
          if ( *p_titleInfo )
          {
            TitleInfoControl__setBackBtnDepth(*p_titleInfo, 52, 0LL);
            if ( *p_titleInfo )
            {
              TitleInfoControl__setTitleInfo(*p_titleInfo, 0LL, 1, 0LL, 42, 0LL);
              if ( *p_titleInfo )
              {
                TitleInfoControl__changeTitleInfo_19612684(*p_titleInfo, 1, 42, 0, 0LL);
                v57 = this->fields.titleInfo;
                v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v58, v59, v60, v61);
                System_Action___ctor(v62, (Il2CppObject *)this, Method_UserPresentBoxWindow_OnClickBack__, 0LL);
                if ( v57 )
                {
                  TitleInfoControl__SetBackBtnAct(v57, v62, 0LL);
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
LABEL_22:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v69 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v65, v66, v67, v68);
  System_Action_int____ctor(
    v69,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__Open_b__69_0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(v64, v69, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_31;
  UserPresentListViewManager__Init(userPresentListViewManager, 0LL);
  UserPresentBoxWindow__SetFilterButtonImage(this, v71);
  v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v72 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v72, 1, 0LL);
  sortBtn = (UnityEngine_Behaviour_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_31;
  UnityEngine_Behaviour__set_enabled(sortBtn, 0, 0LL);
  v74 = this->fields.sortBtn;
  if ( !v74 )
    goto LABEL_31;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v74->klass->vtable._14_SetState.method)(
    v74,
    3LL,
    1LL,
    v74->klass->vtable._15_OnPress.methodPtr);
  UserPresentBoxWindow__RequestPresentList(this, v75);
  this->fields.mReDispAct = redisp_act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mReDispAct,
    (System_Int32_array **)redisp_act,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v82);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_5453, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_31;
  v84 = Value > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, Value > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v84, v85);
}


void __fastcall UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  CommonUI_o *Instance; // x19
  __int64 v5; // x2
  System_Array_o *v6; // x20
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_40F97CD & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_ImageId___TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E,
      v3);
    byte_40F97CD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Array_o *)sub_B17014(TutorialFlag_ImageId___TypeInfo, 3LL, v5);
  v7.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v7, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenTutorialImageDialog(Instance, (TutorialFlag_ImageId_array *)v6, 201, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall UserPresentBoxWindow__ProcessClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentListViewManager_o *v4; // x0
  const MethodInfo *v5; // x2

  userPresentListViewManager = this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 1;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 1, 0LL),
        (v4 = this->fields.userPresentListViewManager) == 0LL) )
  {
    sub_B170D4();
  }
  UserPresentListViewManager__SetMode_21347816(v4, 2, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v5);
}


void __fastcall UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x27
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
  WebViewManager_o *Instance; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewManager_o *v37; // x0
  WarQuestSelectionMaster_o *v38; // x0
  UserServantMaster_o *v39; // x8
  UserCommandCodeMaster_o *v40; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int v43; // w21
  System_String_o *v44; // x23
  __int64 v45; // x0
  Il2CppObject *v46; // x24
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v50; // x23
  Il2CppObject *v51; // x24
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v55; // x23
  __int64 v56; // x1
  Il2CppObject *v57; // x21
  BalanceConfig_c *v58; // x0
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  UILabel_o *stoneNumValLb; // x21
  System_String_o *UnitInfo; // x0
  UILabel_o *rpNumValLb; // x21
  System_String_o *v64; // x0
  UILabel_o *mpNumValLb; // x21
  System_String_o *v66; // x0
  UILabel_o *qpNumValLb; // x21
  System_String_o *v68; // x22
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v72; // x22
  const MethodInfo *v73; // x1
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  WebViewManager_o *v76; // x0
  UserPresentBoxMaster_o *v77; // x0
  const MethodInfo *v78; // x2
  UserPresentBoxEntity_array *VaildList; // x0
  UserPresentBoxEntity_array *v80; // x20
  BalanceConfig_c *v81; // x0
  __int64 v82; // x21
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
  System_String_o *v85; // x23
  Il2CppObject *v86; // x24
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v90; // x23
  Il2CppObject *v91; // x0
  System_String_o *v92; // x0
  __int64 v93; // x1
  UserPresentListViewManager_c *v94; // x0
  ListViewSort_o *sortInfo; // x0
  __int64 v96; // x1
  _BOOL4 v97; // w22
  UserPresentListViewManager_c *v98; // x0
  ListViewSort_o *v99; // x0
  UserPresentListViewManager_c *v100; // x0
  ListViewSort_o *v101; // x0
  const MethodInfo *v102; // x1
  _BOOL4 v103; // w28
  UserPresentListViewManager_c *v104; // x0
  ListViewSort_o *v105; // x0
  WebViewManager_o *v106; // x0
  ServantMaster_o *v107; // x23
  WebViewManager_o *v108; // x0
  ItemMaster_o *v109; // x24
  WebViewManager_o *v110; // x0
  WebViewManager_o *v111; // x0
  CommandCodeMaster_o *v112; // x26
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v117; // x27
  WarQuestSelectionMaster_o *v118; // x0
  __int64 v119; // x1
  __int64 v120; // x2
  const MethodInfo *v121; // x4
  const MethodInfo *v122; // x5
  unsigned __int64 v123; // x21
  UserPresentBoxEntity_o **m_Items; // x25
  WarBoardUiData_SaveData_array *v125; // x0
  int max_length; // w24
  const MethodInfo *v127; // x2
  WebViewManager_o *v128; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v129; // x21
  char v130; // w22
  char v131; // w23
  __int64 v132; // x25
  __int64 v133; // x8
  int v134; // w9
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UnityEngine_Component_o *allReceiveBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v138; // x3
  UnityEngine_Component_o *itemReceiveBtn; // x0
  UnityEngine_GameObject_o *v140; // x0
  const MethodInfo *v141; // x3
  UnityEngine_Component_o *checkedItemBtn; // x0
  UnityEngine_GameObject_o *v143; // x0
  const MethodInfo *v144; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  __int64 *v146; // x8
  UnityEngine_Component_o *v147; // x0
  UnityEngine_GameObject_o *v148; // x0
  UnityEngine_Component_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  UnityEngine_Component_o *v151; // x0
  UnityEngine_GameObject_o *v152; // x0
  const MethodInfo *v153; // x3
  UnityEngine_Component_o *v154; // x0
  UnityEngine_GameObject_o *v155; // x0
  const MethodInfo *v156; // x3
  UnityEngine_Component_o *v157; // x0
  UnityEngine_GameObject_o *v158; // x0
  const MethodInfo *v159; // x3
  ListViewManager_o *v160; // x0
  UserPresentListViewManager_o *v161; // x0
  UserPresentListViewManager_o *v162; // x0
  UnityEngine_Behaviour_o *v163; // x0
  struct UICommonButton_o *v164; // x0
  UICommonButton_c *klass; // x8
  System_String_o *v166; // x0
  UnityEngine_Component_o *v167; // x0
  UnityEngine_GameObject_o *v168; // x0
  UnityEngine_Component_o *v169; // x0
  UnityEngine_GameObject_o *v170; // x0
  UnityEngine_Behaviour_o *sortBtn; // x0
  struct UICommonButton_o *v172; // x0
  const MethodInfo *v173; // x2
  _BOOL8 _28023340; // x0
  const MethodInfo *v175; // x1
  ListViewManager_o *v176; // x0
  UserPresentListViewManager_o *v177; // x0
  ListViewManager_o *v178; // x0
  UserPresentBoxWindow_o *v179; // [xsp+0h] [xbp-C0h]
  int v180; // [xsp+8h] [xbp-B8h]
  ServantLimitMaster_o *servantLimitMaster; // [xsp+10h] [xbp-B0h]
  int v182; // [xsp+1Ch] [xbp-A4h] BYREF
  int v183; // [xsp+20h] [xbp-A0h] BYREF
  int v184; // [xsp+24h] [xbp-9Ch] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-98h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-94h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-90h] BYREF
  int v188; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-88h] BYREF
  int32_t v190; // [xsp+3Ch] [xbp-84h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-80h] BYREF
  int32_t v192; // [xsp+44h] [xbp-7Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_40F97A5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___66750472, v14);
    sub_B16FFC(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&TutorialFlag_TypeInfo, v18);
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_10480, v20);
    sub_B16FFC(&StringLiteral_10990, v21);
    sub_B16FFC(&StringLiteral_10989, v22);
    sub_B16FFC(&StringLiteral_3441, v23);
    sub_B16FFC(&StringLiteral_10481, v24);
    sub_B16FFC(&StringLiteral_3439, v25);
    this = (UserPresentBoxWindow_o *)sub_B16FFC(&StringLiteral_12413, v26);
    byte_40F97A5 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  entity = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &v2->fields.userServantMaster;
  v2->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v2->fields.userServantMaster,
    MasterData_WarQuestSelectionMaster,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v37 )
    goto LABEL_160;
  v38 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v37,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v39 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_160;
  v40 = (UserCommandCodeMaster_o *)v38;
  UserServantMaster__getCount(v39, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !v40 )
    goto LABEL_160;
  Count = UserCommandCodeMaster__getCount(v40, 0LL);
  svtNumValLb = v2->fields.svtNumValLb;
  v43 = Count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  v192 = servantEquipSum[1];
  v45 = j_il2cpp_value_box_0(int_TypeInfo, &v192);
  if ( !SelfUserGame )
    goto LABEL_160;
  v46 = (Il2CppObject *)v45;
  svtKeep = SelfUserGame->fields.svtKeep;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  v48 = System_String__Format_43739268(v44, v46, v47, 0LL);
  if ( !svtNumValLb )
    goto LABEL_160;
  UILabel__set_text(svtNumValLb, v48, 0LL);
  svtEqNumValLb = v2->fields.svtEqNumValLb;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  v190 = servantEquipSum[0];
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v190);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  v53 = System_String__Format_43739268(v50, v51, v52, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_160;
  UILabel__set_text(svtEqNumValLb, v53, 0LL);
  commandCodeNumValLb = v2->fields.commandCodeNumValLb;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  v188 = v43;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v188);
  if ( !byte_40F6094 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v56);
    byte_40F6094 = 1;
  }
  v58 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v58 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v58->static_fields->CommandCodeFrameMax;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax);
  v60 = System_String__Format_43739268(v55, v57, v59, 0LL);
  if ( !commandCodeNumValLb )
    goto LABEL_160;
  UILabel__set_text(commandCodeNumValLb, v60, 0LL);
  stoneNumValLb = v2->fields.stoneNumValLb;
  UnitInfo = LocalizationManager__GetUnitInfo(SelfUserGame->fields.stone, 0LL);
  if ( !stoneNumValLb )
    goto LABEL_160;
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
  rpNumValLb = v2->fields.rpNumValLb;
  v64 = LocalizationManager__GetUnitInfo(SelfUserGame->fields.rarePri, 0LL);
  if ( !rpNumValLb )
    goto LABEL_160;
  UILabel__set_text(rpNumValLb, v64, 0LL);
  mpNumValLb = v2->fields.mpNumValLb;
  v66 = LocalizationManager__GetUnitInfo(SelfUserGame->fields.mana, 0LL);
  if ( !mpNumValLb )
    goto LABEL_160;
  UILabel__set_text(mpNumValLb, v66, 0LL);
  qpNumValLb = v2->fields.qpNumValLb;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3441, 0LL);
  qp = SelfUserGame->fields.qp;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  v70 = System_String__Format(v68, v69, 0LL);
  if ( !qpNumValLb )
    goto LABEL_160;
  UILabel__set_text(qpNumValLb, v70, 0LL);
  fpNumValLb = v2->fields.fpNumValLb;
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3439, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, v73);
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint);
  v75 = System_String__Format(v72, v74, 0LL);
  if ( !fpNumValLb )
    goto LABEL_160;
  UILabel__set_text(fpNumValLb, v75, 0LL);
  v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v76 )
    goto LABEL_160;
  v77 = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v76,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !v77 )
    goto LABEL_160;
  VaildList = UserPresentBoxMaster__getVaildList(v77, SelfUserGame->fields.userId, v78);
  if ( !VaildList )
    goto LABEL_160;
  v80 = VaildList;
  v81 = BalanceConfig_TypeInfo;
  v82 = *(_QWORD *)&v80->max_length;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v81 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = v2->fields.presentInfoLabel;
  PresentBoxMax = v81->static_fields->PresentBoxMax;
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_10480, 0LL);
  v184 = v82;
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v184);
  v183 = PresentBoxMax;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v183);
  v88 = System_String__Format_43739268(v85, v86, v87, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_160;
  UILabel__set_text(presentInfoLabel, v88, 0LL);
  presentNoticeLabel = v2->fields.presentNoticeLabel;
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_10481, 0LL);
  v182 = PresentBoxMax;
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v182);
  v92 = System_String__Format(v90, v91, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_160;
  UILabel__set_text(presentNoticeLabel, v92, 0LL);
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v93);
    byte_40F97D6 = 1;
  }
  v94 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v94 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v94->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_160;
  if ( ListViewSort__CheckPresentBoxFilterAll(sortInfo, 0LL) )
  {
    v97 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_40F97D6 )
    {
      sub_B16FFC(&UserPresentListViewManager_TypeInfo, v96);
      byte_40F97D6 = 1;
    }
    v98 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v98 = UserPresentListViewManager_TypeInfo;
    }
    v99 = v98->static_fields->sortInfo;
    if ( !v99 )
      goto LABEL_160;
    v97 = !ListViewSort__UnCheckPresentBoxFilterAll(v99, 0LL);
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v96);
    byte_40F97D6 = 1;
  }
  v100 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v100 = UserPresentListViewManager_TypeInfo;
  }
  v101 = v100->static_fields->sortInfo;
  if ( !v101 )
    goto LABEL_160;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll(v101, 0LL) )
  {
    v103 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_40F97D6 )
    {
      sub_B16FFC(&UserPresentListViewManager_TypeInfo, v102);
      byte_40F97D6 = 1;
    }
    v104 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v104 = UserPresentListViewManager_TypeInfo;
    }
    v105 = v104->static_fields->sortInfo;
    if ( !v105 )
      goto LABEL_160;
    v103 = !ListViewSort__UnCheckPresentBoxRarityFilterAll(v105, 0LL);
  }
  if ( v103 || v97 )
  {
    v106 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v106 )
      goto LABEL_160;
    v107 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v106,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v108 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v108 )
      goto LABEL_160;
    v109 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v108,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
    v110 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v110 )
      goto LABEL_160;
    v179 = v2;
    servantLimitMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v110,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    v111 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v111 )
      goto LABEL_160;
    v112 = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v111,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v117 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                              System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                                              v113,
                                                                              v114,
                                                                              v115,
                                                                              v116);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v117,
      v82,
      (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___66750472);
    v180 = v82;
    if ( (int)v82 >= 1 )
    {
      v123 = 0LL;
      m_Items = v80->m_Items;
      do
      {
        if ( !v97 )
          goto LABEL_164;
        if ( v123 >= v80->max_length )
          goto LABEL_161;
        v118 = (WarQuestSelectionMaster_o *)UserPresentBoxWindow__CheckFilter(
                                              (UserPresentBoxWindow_o *)v118,
                                              v107,
                                              v109,
                                              m_Items[v123],
                                              v121);
        if ( ((unsigned __int8)v118 & 1) != 0 )
        {
LABEL_164:
          if ( !v103 )
            goto LABEL_87;
          if ( v123 >= v80->max_length )
            goto LABEL_161;
          v118 = (WarQuestSelectionMaster_o *)UserPresentBoxWindow__CheckRarityFilter(
                                                (UserPresentBoxWindow_o *)v118,
                                                servantLimitMaster,
                                                v112,
                                                m_Items[v123],
                                                v97,
                                                v122);
          if ( ((unsigned __int8)v118 & 1) != 0 )
          {
LABEL_87:
            if ( v123 >= v80->max_length )
            {
LABEL_161:
              sub_B17100(v118, v119, v120);
              sub_B170A0();
            }
            if ( !v117 )
              goto LABEL_160;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v117,
              (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v123],
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      while ( (__int64)++v123 < v180 );
    }
    if ( !v117
      || (v125 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v117,
                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__),
          LODWORD(v82) = v180,
          !v125) )
    {
LABEL_160:
      sub_B170D4();
    }
    max_length = v125->max_length;
    v2 = v179;
    v80 = (UserPresentBoxEntity_array *)v125;
  }
  else
  {
    max_length = v82;
  }
  UserPresentBoxWindow__SetFilterButtonImage(v2, v102);
  UserPresentBoxWindow__SetSelectCount(v2, 0, v127);
  if ( max_length < 1 )
  {
    userPresentListViewManager = v2->fields.userPresentListViewManager;
    if ( userPresentListViewManager )
    {
      UserPresentListViewManager__DestroyList(userPresentListViewManager, 0LL);
      allReceiveBtn = (UnityEngine_Component_o *)v2->fields.allReceiveBtn;
      v2->fields.isReceiveFlg = 0;
      if ( allReceiveBtn )
      {
        gameObject = UnityEngine_Component__get_gameObject(allReceiveBtn, 0LL);
        UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, 0, gameObject, v138);
        itemReceiveBtn = (UnityEngine_Component_o *)v2->fields.itemReceiveBtn;
        v2->fields.isItemReceiveFlg = 0;
        if ( itemReceiveBtn )
        {
          v140 = UnityEngine_Component__get_gameObject(itemReceiveBtn, 0LL);
          UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v140, 0, v140, v141);
          checkedItemBtn = (UnityEngine_Component_o *)v2->fields.checkedItemBtn;
          v2->fields.isCheckedFlg = 0;
          if ( checkedItemBtn )
          {
            v143 = UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
            UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v143, 0, v143, v144);
            nonPresentNoticeLabel = v2->fields.nonPresentNoticeLabel;
            if ( (_DWORD)v82 )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v146 = &StringLiteral_10990;
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v146 = &StringLiteral_10989;
            }
            v166 = LocalizationManager__Get((System_String_o *)*v146, 0LL);
            if ( nonPresentNoticeLabel )
            {
              UILabel__set_text(nonPresentNoticeLabel, v166, 0LL);
              v167 = (UnityEngine_Component_o *)v2->fields.nonPresentNoticeLabel;
              if ( v167 )
              {
                v168 = UnityEngine_Component__get_gameObject(v167, 0LL);
                if ( v168 )
                {
                  UnityEngine_GameObject__SetActive(v168, 1, 0LL);
                  v169 = (UnityEngine_Component_o *)v2->fields.userPresentListViewManager;
                  if ( v169 )
                  {
                    v170 = UnityEngine_Component__get_gameObject(v169, 0LL);
                    if ( v170 )
                    {
                      UnityEngine_GameObject__SetActive(v170, 0, 0LL);
                      sortBtn = (UnityEngine_Behaviour_o *)v2->fields.sortBtn;
                      if ( sortBtn )
                      {
                        UnityEngine_Behaviour__set_enabled(sortBtn, 0, 0LL);
                        v172 = v2->fields.sortBtn;
                        if ( v172 )
                        {
                          klass = v172->klass;
                          goto LABEL_150;
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
    goto LABEL_160;
  }
  v128 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v128 )
    goto LABEL_160;
  v118 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v128,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v129 = (DataMasterBase_WarMaster__WarEntity__int__o *)v118;
  v130 = 0;
  v131 = 0;
  v132 = 4LL;
  while ( 1 )
  {
    if ( (unsigned int)(v132 - 4) >= v80->max_length )
      goto LABEL_161;
    v133 = *((_QWORD *)&v80->obj.klass + v132);
    if ( !v133 )
      goto LABEL_160;
    v134 = *(_DWORD *)(v133 + 72);
    if ( v134 == 2 )
    {
      if ( !v129 )
        goto LABEL_160;
      v118 = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v129,
                                            &entity,
                                            *(_DWORD *)(v133 + 76),
                                            (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v118 & 1) == 0 )
        goto LABEL_106;
      if ( !entity )
        goto LABEL_160;
      if ( entity->fields.bannerId != 24 )
      {
LABEL_106:
        v131 = 1;
        v130 = 1;
      }
      if ( (v131 & 1) == 0 )
        goto LABEL_111;
    }
    else
    {
      v130 |= v134 == 9;
      v131 = 1;
    }
    if ( (v130 & 1) != 0 )
      break;
LABEL_111:
    if ( (int)++v132 - 4 >= max_length )
      goto LABEL_122;
  }
  v131 = 1;
  v130 = 1;
LABEL_122:
  v147 = (UnityEngine_Component_o *)v2->fields.userPresentListViewManager;
  if ( !v147 )
    goto LABEL_160;
  v148 = UnityEngine_Component__get_gameObject(v147, 0LL);
  if ( !v148 )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive(v148, 1, 0LL);
  v149 = (UnityEngine_Component_o *)v2->fields.nonPresentNoticeLabel;
  if ( !v149 )
    goto LABEL_160;
  v150 = UnityEngine_Component__get_gameObject(v149, 0LL);
  if ( !v150 )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive(v150, 0, 0LL);
  v151 = (UnityEngine_Component_o *)v2->fields.allReceiveBtn;
  v2->fields.isReceiveFlg = v131 & 1;
  if ( !v151 )
    goto LABEL_160;
  v152 = UnityEngine_Component__get_gameObject(v151, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v152, v131 & 1, v152, v153);
  v154 = (UnityEngine_Component_o *)v2->fields.itemReceiveBtn;
  v2->fields.isItemReceiveFlg = v130 & 1;
  if ( !v154 )
    goto LABEL_160;
  v155 = UnityEngine_Component__get_gameObject(v154, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v155, v130 & 1, v155, v156);
  v157 = (UnityEngine_Component_o *)v2->fields.checkedItemBtn;
  v2->fields.isCheckedFlg = 0;
  if ( !v157 )
    goto LABEL_160;
  v158 = UnityEngine_Component__get_gameObject(v157, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v158, 0, v158, v159);
  if ( v2->fields.mIsScrlResetPosition )
    goto LABEL_132;
  v160 = (ListViewManager_o *)v2->fields.userPresentListViewManager;
  if ( !v160 )
    goto LABEL_160;
  if ( ListViewManager__get_ItemSum(v160, 0LL) >= 3 )
  {
    scroll.fields.z = 0.0;
    offset = 0LL;
    *(_QWORD *)&scroll.fields.x = 0LL;
    v176 = (ListViewManager_o *)v2->fields.userPresentListViewManager;
    if ( v176 )
    {
      ListViewManager__GetScrollView(v176, &scroll, &offset, 0LL);
      v177 = v2->fields.userPresentListViewManager;
      if ( v177 )
      {
        UserPresentListViewManager__CreateList(v177, v80, 0LL);
        v178 = (ListViewManager_o *)v2->fields.userPresentListViewManager;
        if ( v178 )
        {
          ListViewManager__SetScrollView(v178, scroll, offset, 0LL);
          goto LABEL_134;
        }
      }
    }
    goto LABEL_160;
  }
LABEL_132:
  v161 = v2->fields.userPresentListViewManager;
  if ( !v161 )
    goto LABEL_160;
  UserPresentListViewManager__CreateList(v161, v80, 0LL);
LABEL_134:
  v162 = v2->fields.userPresentListViewManager;
  v2->fields.mIsScrlResetPosition = 0;
  if ( !v162 )
    goto LABEL_160;
  UserPresentListViewManager__SetMode_21347816(v162, 1, 0LL);
  v163 = (UnityEngine_Behaviour_o *)v2->fields.sortBtn;
  if ( !v163 )
    goto LABEL_160;
  UnityEngine_Behaviour__set_enabled(v163, 1, 0LL);
  v164 = v2->fields.sortBtn;
  if ( !v164 )
    goto LABEL_160;
  klass = v164->klass;
LABEL_150:
  ((void (*)(void))klass->vtable._14_SetState.method)();
  ActionExtensions__Call(v2->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(v2, 1, v173);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = TutorialFlag__Get_28023340(201, 0LL);
  if ( !_28023340 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_28023340, v175);
  EventTutorialMaster__CheckTutorial(0, 78, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F97A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_UserPresentListRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_UserPresentBoxWindow_callbackPresentList__, v8);
    byte_40F97A3 = 1;
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3, v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v9,
                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *sortBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *allReceiveBtn; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Collider_o *v10; // x0
  UnityEngine_Component_o *itemReceiveBtn; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Collider_o *v13; // x0
  UnityEngine_Component_o *checkedItemBtn; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Collider_o *v16; // x0
  bool v17; // w21
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Collider_o *helpBtn; // x0
  bool v21; // w20
  UnityEngine_Collider_o *filterBtn; // x0

  if ( (byte_40F97C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_40F97C8 = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(Component_srcLineSprite, is_enable, 0LL);
  allReceiveBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  if ( !allReceiveBtn )
    goto LABEL_19;
  v9 = UnityEngine_Component__get_gameObject(allReceiveBtn, 0LL);
  if ( !v9 )
    goto LABEL_19;
  v10 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v9,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v10 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(v10, is_enable, 0LL);
  itemReceiveBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  if ( !itemReceiveBtn )
    goto LABEL_19;
  v12 = UnityEngine_Component__get_gameObject(itemReceiveBtn, 0LL);
  if ( !v12 )
    goto LABEL_19;
  v13 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v12,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v13 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(v13, is_enable, 0LL);
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  if ( !checkedItemBtn )
    goto LABEL_19;
  v15 = UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
  if ( !v15 )
    goto LABEL_19;
  v16 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v15,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v16 )
    goto LABEL_19;
  v17 = is_enable;
  UnityEngine_Collider__set_enabled(v16, is_enable, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, v17, 0LL),
        UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v17, v19),
        (helpBtn = (UnityEngine_Collider_o *)this->fields.helpBtn) == 0LL)
    || (v21 = is_enable,
        UnityEngine_Collider__set_enabled(helpBtn, v21, 0LL),
        (filterBtn = (UnityEngine_Collider_o *)this->fields.filterBtn) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(filterBtn, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetButtonTxtColor(
        UserPresentBoxWindow_o *this,
        bool isVaild,
        UnityEngine_GameObject_o *btnObject,
        const MethodInfo *method)
{
  changeVColor_array *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  changeVColor_array *v10; // x20
  int i; // w22
  UIWidget_o *v12; // x21
  int v13; // s0

  if ( (byte_40F97A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, isVaild);
    byte_40F97A2 = 1;
  }
  if ( !btnObject
    || (v6 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
               btnObject,
               (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  max_length = v6->max_length;
  v10 = v6;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      v12 = (UIWidget_o *)v10->m_Items[i];
      if ( isVaild )
      {
        *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
        if ( !v12 )
          goto LABEL_15;
      }
      else
      {
        *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_gray(0LL);
        if ( !v12 )
          goto LABEL_15;
      }
      UIWidget__set_color(v12, *(UnityEngine_Color_o *)&v13, 0LL);
      max_length = v10->max_length;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetCheckedItemsButtonEnable(
        UserPresentBoxWindow_o *this,
        bool how,
        bool isSetOtherButtonsToo,
        const MethodInfo *method)
{
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
  UnityEngine_Component_o *checkedItemBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x3
  UnityEngine_Component_o *allReceiveBtn; // x0
  UnityEngine_GameObject_o *v23; // x0
  const MethodInfo *v24; // x3
  UnityEngine_Component_o *itemReceiveBtn; // x0
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x3
  bool v28; // w1
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  const MethodInfo *v32; // x2
  UserPresentBoxEntity_array *VaildList; // x20
  WebViewManager_o *v34; // x0
  WarQuestSelectionMaster_o *v35; // x0
  __int64 v36; // x1
  ItemMaster_o *v37; // x24
  __int64 v38; // x21
  UserPresentListViewManager_c *v39; // x0
  ListViewSort_o *sortInfo; // x0
  __int64 v41; // x1
  _BOOL4 v42; // w27
  UserPresentListViewManager_c *v43; // x0
  ListViewSort_o *v44; // x0
  UserPresentListViewManager_c *v45; // x0
  ListViewSort_o *v46; // x0
  __int64 v47; // x1
  _BOOL4 v48; // w28
  UserPresentListViewManager_c *v49; // x0
  ListViewSort_o *v50; // x0
  WebViewManager_o *v51; // x0
  ServantMaster_o *v52; // x23
  WebViewManager_o *v53; // x0
  WebViewManager_o *v54; // x0
  CommandCodeMaster_o *v55; // x25
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v60; // x26
  _BOOL8 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  const MethodInfo *v64; // x4
  const MethodInfo *v65; // x5
  unsigned __int64 v66; // x22
  UserPresentBoxEntity_o **m_Items; // x19
  WarBoardUiData_SaveData_array *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  const MethodInfo *v71; // x3
  int max_length; // w8
  unsigned int v73; // w19
  UserPresentBoxEntity_o *v74; // x8
  int32_t giftType; // w9
  UnityEngine_Component_o *v76; // x0
  UserPresentBoxWindow_o *v77; // [xsp+8h] [xbp-68h]
  ServantLimitMaster_o *servantLimitMaster; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F97C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, how);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___66750472, v14);
    sub_B16FFC(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v18);
    byte_40F97C4 = 1;
  }
  entity = 0LL;
  checkedItemBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = how;
  if ( !checkedItemBtn )
    goto LABEL_96;
  gameObject = UnityEngine_Component__get_gameObject(checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, how, gameObject, v21);
  if ( !isSetOtherButtonsToo )
    return;
  if ( how )
  {
    allReceiveBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( allReceiveBtn )
    {
      v23 = UnityEngine_Component__get_gameObject(allReceiveBtn, 0LL);
      UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v23, 0, v23, v24);
      itemReceiveBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( itemReceiveBtn )
      {
        v26 = UnityEngine_Component__get_gameObject(itemReceiveBtn, 0LL);
        v28 = 0;
        goto LABEL_94;
      }
    }
    goto LABEL_96;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_96;
  VaildList = UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, UserId, v32);
  v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v34 )
    goto LABEL_96;
  v35 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v34,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_96;
  v37 = (ItemMaster_o *)v35;
  v38 = *(_QWORD *)&VaildList->max_length;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v36);
    byte_40F97D6 = 1;
  }
  v39 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v39 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v39->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_96;
  if ( ListViewSort__CheckPresentBoxFilterAll(sortInfo, 0LL) )
  {
    v42 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_40F97D6 )
    {
      sub_B16FFC(&UserPresentListViewManager_TypeInfo, v41);
      byte_40F97D6 = 1;
    }
    v43 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v43 = UserPresentListViewManager_TypeInfo;
    }
    v44 = v43->static_fields->sortInfo;
    if ( !v44 )
      goto LABEL_96;
    v42 = !ListViewSort__UnCheckPresentBoxFilterAll(v44, 0LL);
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v41);
    byte_40F97D6 = 1;
  }
  v45 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v45 = UserPresentListViewManager_TypeInfo;
  }
  v46 = v45->static_fields->sortInfo;
  if ( !v46 )
    goto LABEL_96;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll(v46, 0LL) )
  {
    v48 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_40F97D6 )
    {
      sub_B16FFC(&UserPresentListViewManager_TypeInfo, v47);
      byte_40F97D6 = 1;
    }
    v49 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v49 = UserPresentListViewManager_TypeInfo;
    }
    v50 = v49->static_fields->sortInfo;
    if ( !v50 )
      goto LABEL_96;
    v48 = !ListViewSort__UnCheckPresentBoxRarityFilterAll(v50, 0LL);
  }
  if ( v42 || v48 )
  {
    v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v51 )
      goto LABEL_96;
    v52 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v51,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v53 )
      goto LABEL_96;
    v77 = this;
    servantLimitMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v53,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    v54 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v54 )
      goto LABEL_96;
    v55 = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v54,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v60 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                             System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                                             v56,
                                                                             v57,
                                                                             v58,
                                                                             v59);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v60,
      v38,
      (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___66750472);
    if ( (int)v38 >= 1 )
    {
      v66 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v42 )
          goto LABEL_100;
        if ( v66 >= VaildList->max_length )
          goto LABEL_97;
        v61 = UserPresentBoxWindow__CheckFilter((UserPresentBoxWindow_o *)v61, v52, v37, m_Items[v66], v64);
        if ( v61 )
        {
LABEL_100:
          if ( !v48 )
            goto LABEL_70;
          if ( v66 >= VaildList->max_length )
            goto LABEL_97;
          v61 = UserPresentBoxWindow__CheckRarityFilter(
                  (UserPresentBoxWindow_o *)v61,
                  servantLimitMaster,
                  v55,
                  m_Items[v66],
                  v42,
                  v65);
          if ( v61 )
          {
LABEL_70:
            if ( v66 >= VaildList->max_length )
            {
LABEL_97:
              sub_B17100(v61, v62, v63);
              sub_B170A0();
            }
            if ( !v60 )
              goto LABEL_96;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v60,
              (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v66],
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      while ( (__int64)++v66 < (int)v38 );
    }
    if ( !v60
      || (v68 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v60,
                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0LL )
    {
LABEL_96:
      sub_B170D4();
    }
    LODWORD(v38) = v68->max_length;
    this = v77;
    VaildList = (UserPresentBoxEntity_array *)v68;
  }
  if ( (int)v38 < 1 )
    return;
  v69 = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !v69 )
    goto LABEL_96;
  v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v70, 1, v70, v71);
  max_length = VaildList->max_length;
  if ( max_length < 1 )
    return;
  v73 = 0;
  while ( 1 )
  {
    if ( v73 >= max_length )
      goto LABEL_97;
    v74 = VaildList->m_Items[v73];
    if ( !v74 )
      goto LABEL_96;
    giftType = v74->fields.giftType;
    if ( giftType == 2 )
      break;
    if ( giftType == 9 )
      goto LABEL_92;
LABEL_90:
    max_length = VaildList->max_length;
    if ( (int)++v73 >= max_length )
      return;
  }
  if ( !v37 )
    goto LABEL_96;
  v61 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)v37,
          &entity,
          v74->fields.objectId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( v61 )
  {
    if ( !entity )
      goto LABEL_96;
    if ( entity->fields.bannerId == 24 )
      goto LABEL_90;
  }
LABEL_92:
  v76 = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 1;
  if ( !v76 )
    goto LABEL_96;
  v26 = UnityEngine_Component__get_gameObject(v76, 0LL);
  v28 = 1;
LABEL_94:
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v26, v28, v26, v27);
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
  ListViewSort_o *v11; // x0

  if ( (byte_40F97A6 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16927, v3);
    sub_B16FFC(&StringLiteral_16926, v4);
    byte_40F97A6 = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, method);
    byte_40F97D6 = 1;
  }
  v6 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v6 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v6->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_26;
  v9 = (System_String_o **)&StringLiteral_16927;
  if ( !ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0LL) )
    goto LABEL_24;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_40F97D6 )
  {
    sub_B16FFC(&UserPresentListViewManager_TypeInfo, v8);
    byte_40F97D6 = 1;
  }
  v10 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v10 = UserPresentListViewManager_TypeInfo;
  }
  v11 = v10->static_fields->sortInfo;
  if ( !v11 )
LABEL_26:
    sub_B170D4();
  if ( ListViewSort__UnCheckPresentBoxRarityFilterAll(v11, 0LL) )
    v9 = (System_String_o **)&StringLiteral_16926;
LABEL_24:
  if ( !filterBtnSp )
    goto LABEL_26;
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
  UnityEngine_GameObject_o *GameObject; // x20
  UnityEngine_Collider_o *Component_srcLineSprite; // x0

  if ( (byte_40F97C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_10717, v6);
    byte_40F97C9 = 1;
  }
  GameObject = GameObjectExtensions__FindGameObject(
                 this->fields.presentHistoryButtonPanel,
                 (System_String_o *)StringLiteral_10717,
                 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)GameObject, 0LL, 0LL) )
  {
    if ( !GameObject
      || (Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                GameObject,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_Collider__set_enabled(Component_srcLineSprite, is_enable, 0LL);
  }
}


void __fastcall UserPresentBoxWindow__SetReDispAction(
        UserPresentBoxWindow_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mReDispAct = act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mReDispAct,
    (System_Int32_array **)act,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v11; // w21
  BalanceConfig_c *v12; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = selected;
  if ( (byte_40F97CA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&selected);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_10487, v5);
    byte_40F97CA = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10487, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0LL);
  v9 = System_String__Format_43739268(v7, v8, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
  if ( !presentSelectNumLabel )
    goto LABEL_16;
  UILabel__set_text(presentSelectNumLabel, v9, 0LL);
  v10 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v11 = v18;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v11 >= v12->static_fields->PresentBoxCheckMax )
  {
    presentNoticeLabel = this->fields.presentNoticeLabel;
    if ( presentNoticeLabel )
    {
      r = presentNoticeLabel->fields.mColor.fields.r;
      g = presentNoticeLabel->fields.mColor.fields.g;
      b = presentNoticeLabel->fields.mColor.fields.b;
      a = presentNoticeLabel->fields.mColor.fields.a;
      if ( v10 )
        goto LABEL_15;
    }
LABEL_16:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  if ( !v10 )
    goto LABEL_16;
LABEL_15:
  UIWidget__set_color(v10, *(UnityEngine_Color_o *)&r, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__ShowEventPointReward(
        UserPresentBoxWindow_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v29; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v32; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v33; // x22
  const MethodInfo *v34; // x3

  if ( (byte_40F97AF & 1) == 0 )
  {
    sub_B16FFC(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__, v8);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, v9);
    byte_40F97AF = 1;
  }
  v10 = sub_B170CC(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, *(_QWORD *)&idx, callback, method, v4);
  UserPresentBoxWindow___c__DisplayClass85_0___ctor((UserPresentBoxWindow___c__DisplayClass85_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 32) = callback;
  *(_DWORD *)(v10 + 24) = idx;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v29 = *(int *)(v10 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v29 < max_length )
    {
      if ( (unsigned int)v29 >= max_length )
      {
        sub_B17100(v23, v24, v25);
        sub_B170A0();
      }
      evpDialog = this->fields.evpDialog;
      v32 = evPointRewardList->m_Items[v29];
      v33 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_B170CC(
                                                                      UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo,
                                                                      v24,
                                                                      v25,
                                                                      v26,
                                                                      v27);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v33,
        (Il2CppObject *)v10,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        0LL);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v32, v33, v34);
        return;
      }
LABEL_10:
      sub_B170D4();
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v10 + 32), 0LL);
}


void __fastcall UserPresentBoxWindow__ShowExpiredPresents(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x22

  if ( (byte_40F97AC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__, v9);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_10474, v11);
    sub_B16FFC(&StringLiteral_27, v12);
    byte_40F97AC = 1;
  }
  v13 = sub_B170CC(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, callback, method, v3, v4);
  UserPresentBoxWindow___c__DisplayClass82_0___ctor((UserPresentBoxWindow___c__DisplayClass82_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields.m_stringLength >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10474, 0LL);
    v30 = System_String__Concat_43746016(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_27, v29, 0LL);
    v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v13,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog(Instance, 0LL, v30, v35, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  ActionExtensions__Call(*(System_Action_o **)(v13 + 24), 0LL);
}


void __fastcall UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  TerminalSceneComponent_o *mInstance; // x19

  if ( (byte_40F97B0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v2);
    byte_40F97B0 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mInstance, 0LL, 0LL) )
  {
    if ( !mInstance )
      sub_B170D4();
    TerminalSceneComponent__UpdateTitleEventInfo(mInstance, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  PlayMakerFSM_o *myFsm; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x1

  if ( (byte_40F97D3 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__, v3);
    sub_B16FFC(&StringLiteral_12186, v4);
    byte_40F97D3 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12186, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v13 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B170CC(
                                                                UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8,
                                                                v9,
                                                                v10);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      0LL);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v13, 0LL);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v14);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v8);
  }
}


void __fastcall UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_B170D4();
  UserPresentListViewManager__SetMode_21347816(userPresentListViewManager, 1, 0LL);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_B170D4();
  UserPresentHistoryDialog__Open(presentHistoryDialog, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___Open_b__69_0(
        UserPresentBoxWindow_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0

  if ( (byte_40F97D1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_40F97D1 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_B170D4();
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40F97D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F97D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetConnect(Instance, 0, 0LL);
  UserPresentBoxWindow__ReDisp(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___showEffect_b__88_0(
        UserPresentBoxWindow_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40F97D4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_UserPresentBoxWindow_EndEffect__, v6);
    byte_40F97D4 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  UserPresentBoxWindow__CheckSvtGetTutorial(this, v7, v8);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x1
  System_Action_Action__array *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x21
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  ActionChain_o *v50; // x21
  __int64 v51; // x2
  System_Action_array *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x22
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  ChainableActionBase_o *v63; // x0

  if ( (byte_40F97D5 & 1) == 0 )
  {
    sub_B16FFC(&ActionChain_TypeInfo, method);
    sub_B16FFC(&System_Action___TypeInfo, v3);
    sub_B16FFC(&System_Action_Action____TypeInfo, v4);
    sub_B16FFC(&Method_System_Action_Action___ctor__, v5);
    sub_B16FFC(&System_Action_Action__TypeInfo, v6);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__, v10);
    sub_B16FFC(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__, v11);
    sub_B16FFC(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__, v12);
    sub_B16FFC(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, v13);
    byte_40F97D5 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0LL, 0LL) )
    return;
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(touchBlocker, 0, 0LL);
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v20 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B170CC(
                                                                UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo,
                                                                v15,
                                                                v16,
                                                                v17,
                                                                v18);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__,
      0LL);
    if ( userPresentListViewManager )
    {
      UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v20, 0LL);
      UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v21);
      return;
    }
LABEL_26:
    sub_B170D4();
  }
  v22 = (System_Action_Action__array *)sub_B17014(System_Action_Action____TypeInfo, 2LL, v16);
  v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v23,
                                                                               v24,
                                                                               v25,
                                                                               v26);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v27,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( !v22 )
    goto LABEL_26;
  if ( v27 )
  {
    v28 = sub_B170BC(v27, v22->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_28;
  }
  if ( !v22->max_length )
    goto LABEL_27;
  v22->m_Items[0] = (System_Action_Action__o *)v27;
  sub_B16F98((BattleServantConfConponent_o *)v22->m_Items, (System_Int32_array **)v27, v30, v31, v32, v33, v34, v35);
  v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v36,
                                                                               v37,
                                                                               v38,
                                                                               v39);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v40,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v40 )
  {
    v28 = sub_B170BC(v40, v22->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_28;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_27;
  v22->m_Items[1] = (System_Action_Action__o *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v22->m_Items[1], (System_Int32_array **)v40, v30, v41, v42, v43, v44, v45);
  v50 = (ActionChain_o *)sub_B170CC(ActionChain_TypeInfo, v46, v47, v48, v49);
  ActionChain___ctor_21125816(v50, v22, 0LL);
  v52 = (System_Action_array *)sub_B17014(System_Action___TypeInfo, 1LL, v51);
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
  if ( !v52 )
    goto LABEL_26;
  if ( v57 )
  {
    v28 = sub_B170BC(v57, v52->obj.klass->_1.element_class);
    if ( !v28 )
    {
LABEL_28:
      sub_B170F4(v28);
      sub_B170A0();
    }
  }
  if ( !v52->max_length )
  {
LABEL_27:
    sub_B17100(v28, v29, v30);
    sub_B170A0();
  }
  v52->m_Items[0] = v57;
  sub_B16F98((BattleServantConfConponent_o *)v52->m_Items, (System_Int32_array **)v57, v30, v58, v59, v60, v61, v62);
  if ( !v50 )
    goto LABEL_26;
  v63 = ChainableActionBase__Final((ChainableActionBase_o *)v50, v52, 0LL);
  if ( !v63 )
    goto LABEL_26;
  ChainableActionBase__Execute(v63, 0LL);
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_1(
        UserPresentBoxWindow_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ServantCoinConfirmDialog_o *servantCoinConfirmDialog; // x0

  servantCoinConfirmDialog = this->fields.servantCoinConfirmDialog;
  if ( !servantCoinConfirmDialog )
    sub_B170D4();
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
    sub_B170D4();
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
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x20

  if ( (byte_40F97A4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&AtlasManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, v6);
    byte_40F97A4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetConnect(Instance, 1, 0LL);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v12, 1, 0LL);
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
  System_Collections_Generic_List_int__o *befSvtList; // x0

  if ( (byte_40F97BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    byte_40F97BA = 1;
  }
  if ( isNew )
  {
    v9 = UserPresentBoxWindow__checkOverlapSvt(this, svtId, (const MethodInfo *)isNew);
    v10 = !v9;
    if ( !v9 && isAddSvt )
    {
      befSvtList = this->fields.befSvtList;
      if ( !befSvtList )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        befSvtList,
        svtId,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
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
  __int64 v13; // x1
  UserPresentBoxWindow___c__DisplayClass99_0_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v20; // x23
  unsigned int Index; // w8
  _BOOL4 v22; // w0
  System_Collections_Generic_List_long__o *v23; // x0

  if ( (byte_40F97BC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, commandCodeId);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__FindIndex__, v9);
    sub_B16FFC(&Method_System_Predicate_long___ctor__, v10);
    sub_B16FFC(&System_Predicate_long__TypeInfo, v11);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__, v12);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo, v13);
    byte_40F97BC = 1;
  }
  v14 = (UserPresentBoxWindow___c__DisplayClass99_0_o *)sub_B170CC(
                                                          UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo,
                                                          commandCodeId,
                                                          isNew,
                                                          isAddCommandCode,
                                                          method);
  UserPresentBoxWindow___c__DisplayClass99_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  v14->fields.commandCodeId = commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v22) = 0;
    return v22;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v20 = (System_Predicate_long__o *)sub_B170CC(System_Predicate_long__TypeInfo, v15, v16, v17, v18);
  System_Predicate_long____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    (const MethodInfo_2B0A168 *)Method_System_Predicate_long___ctor__);
  if ( !befCommandCodeList )
    goto LABEL_12;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v20,
            (const MethodInfo_2F16F14 *)Method_System_Collections_Generic_List_long__FindIndex__);
  v22 = Index >> 31;
  if ( (Index & 0x80000000) != 0 && isAddCommandCode )
  {
    v23 = this->fields.befCommandCodeList;
    if ( v23 )
    {
      System_Collections_Generic_List_long___Add(
        v23,
        v14->fields.commandCodeId,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      LOBYTE(v22) = 1;
      return v22;
    }
LABEL_12:
    sub_B170D4();
  }
  return v22;
}


void __fastcall UserPresentBoxWindow__checkNextSvt(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v13; // x8

  if ( (byte_40F97B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    sub_B16FFC(&StringLiteral_9269, v9);
    sub_B16FFC(&StringLiteral_6332, v10);
    byte_40F97B9 = 1;
  }
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( this->fields.receiveIdx >= receiveList->fields._size )
  {
    this->fields.receiveList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.receiveList, 0LL, v2, v3, v4, v5, v6, v7);
    myFsm = this->fields.myFsm;
    this->fields.receiveIdx = 0;
    if ( myFsm )
    {
      v13 = &StringLiteral_6332;
      goto LABEL_9;
    }
LABEL_10:
    sub_B170D4();
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_10;
  v13 = &StringLiteral_9269;
LABEL_9:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkOverlapSvt(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v8; // w22

  if ( (byte_40F97BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_40F97BB = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B170D4();
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( befSvtList->fields._items->m_Items[v8 + 1] == svtId )
      return 1;
    if ( (int)++v8 >= size )
      return 0;
    befSvtList = this->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
  }
}


void __fastcall UserPresentBoxWindow__endPlay(
        UserPresentBoxWindow_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ServantRewardAction_o *svtGetAction; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x20

  if ( (byte_40F97B8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, v8);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, v9);
    byte_40F97B8 = 1;
  }
  v10 = sub_B170CC(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, end_act, method, v3, v4);
  UserPresentBoxWindow___c__DisplayClass95_0___ctor((UserPresentBoxWindow___c__DisplayClass95_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)end_act, v17, v18, v19, v20, v21, v22);
  svtGetAction = this->fields.svtGetAction;
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)v10, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtGetAction )
LABEL_9:
    sub_B170D4();
  ServantRewardAction__Play(svtGetAction, v28, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40F97BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    sub_B16FFC(&StringLiteral_9269, v3);
    byte_40F97BD = 1;
  }
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_8;
  receiveIdx = this->fields.receiveIdx;
  if ( receiveIdx < receiveList->fields._size )
    this->fields.receiveIdx = receiveIdx + 1;
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_8:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9269, 0LL);
}


System_String_o *__fastcall UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_String_o *v5; // x0
  int32_t m_stringLength; // w20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F97CB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23602, v2);
    sub_B16FFC(&StringLiteral_23387, v3);
    byte_40F97CB = 1;
  }
  v12 = 0;
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = System_Int32__ToString((unsigned int)v4->static_fields + 112, 0LL);
  if ( !v5
    || (m_stringLength = v5->fields.m_stringLength,
        (v7 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 116, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v8 = (Il2CppObject *)v7;
  v12 = v7->fields.m_stringLength + 2 * (m_stringLength - v7->fields.m_stringLength);
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  v10 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_23387,
          v9,
          (System_String_o *)StringLiteral_23602,
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
  __int64 v18; // x1
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int64_t UserId; // x0
  const MethodInfo *v22; // x3
  UserPresentBoxEntity_array *VaildList_24073068; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  int max_length; // w8
  System_Collections_Generic_IEnumerable_T__o *v29; // x23
  unsigned int v30; // w9
  UserPresentBoxEntity_o *v31; // x10
  int32_t giftType; // w10
  MissionNotifyManager_o *v33; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v34; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CommonUI_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  NetworkManager_ResultCallbackFunc_o *v46; // x23
  UserPresentReceiveRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v48; // x2

  if ( (byte_40F97A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, presentIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___66750464, v9);
    sub_B16FFC(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v10);
    sub_B16FFC(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v17);
    sub_B16FFC(&Method_UserPresentBoxWindow_CallbackReceiveRequest__, v18);
    byte_40F97A9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  VaildList_24073068 = UserPresentBoxMaster__getVaildList_24073068(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         presentIds,
                         v22);
  if ( !VaildList_24073068 )
    goto LABEL_28;
  max_length = VaildList_24073068->max_length;
  v29 = (System_Collections_Generic_IEnumerable_T__o *)VaildList_24073068;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
        sub_B17100(VaildList_24073068, v24, v25);
        sub_B170A0();
      }
      v31 = VaildList_24073068->m_Items[v30];
      if ( !v31 )
        goto LABEL_28;
      giftType = v31->fields.giftType;
      if ( giftType == 11 || giftType == 1 )
        break;
      if ( (int)++v30 >= max_length )
        goto LABEL_22;
    }
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v33 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( v33 )
    {
      MissionNotifyManager__StartPause(v33, 0LL);
      goto LABEL_22;
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_22:
  v34 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                                          v24,
                                                                          v25,
                                                                          v26,
                                                                          v27);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v34,
    v29,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___66750464);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.receiveList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.receiveIdx = 0;
  v41 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v41 )
    goto LABEL_28;
  CommonUI__SetConnectMarkFadeInLag(v41, 0, 0LL);
  v46 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v42,
                                                 v43,
                                                 v44,
                                                 v45);
  NetworkManager_ResultCallbackFunc___ctor(
    v46,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserPresentReceiveRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v46,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_28;
  UserPresentReceiveRequest__beginRequest(Request_WarBoardWallAttackRequest, presentIds, selectIdx, selectNum, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v48);
}


void __fastcall UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
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
      goto LABEL_12;
    case 2:
      userPresentListViewManager = this->fields.userPresentListViewManager;
      if ( userPresentListViewManager )
      {
        v4 = 1;
        goto LABEL_10;
      }
LABEL_12:
      sub_B170D4();
    case 1:
      userPresentListViewManager = this->fields.userPresentListViewManager;
      if ( userPresentListViewManager )
      {
        v4 = 0;
LABEL_10:
        UserPresentListViewManager__setJumpType(userPresentListViewManager, v4, 0LL);
        return;
      }
      goto LABEL_12;
  }
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
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x20
  __int64 receiveIdx; // x21
  int size; // w8
  UserPresentBoxEntity_o *v18; // x20
  int32_t giftType; // w21
  WebViewManager_o *v20; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x0
  _BOOL4 IsCombineMaterial; // w0
  GetSvts_array *getSvtList; // x22
  struct System_String_o *v24; // x23
  __int64 v25; // x24
  int32_t v26; // w23
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  _BOOL4 v31; // w23
  bool v32; // w22
  const MethodInfo *v33; // x4
  _BOOL4 v34; // w22
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  GetCommandCodes_array *getCommandCodeList; // x22
  struct System_String_o *age; // x23
  __int64 v39; // x24
  int32_t v40; // w23
  UnityEngine_Component_o *effectPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  GetCommandCodes_o *v45; // x0
  bool Eff; // w0
  const MethodInfo *v47; // x4
  int64_t userCommandCodeId; // x22
  bool isNew; // w23
  bool v50; // w0
  const MethodInfo *v51; // x7
  int32_t num; // w5
  bool v53; // w3
  UserPresentBoxWindow_o *v54; // x0
  int64_t v55; // x1
  bool v56; // w2
  int32_t v57; // w4
  int32_t presentDialogMessageId; // w6
  int32_t objectId; // w20
  WebViewManager_o *v60; // x0
  ServantCostumeMaster_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  const MethodInfo *v64; // x2
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  _BOOL8 IsEquip; // x0
  const MethodInfo *v68; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v70; // x2
  int32_t v71; // w21
  CommonUI_o *v72; // x0
  UnityEngine_Component_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  _BOOL8 activeSelf; // x0
  const MethodInfo *v76; // x2
  UnityEngine_Component_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  QuestRewardInfo_o *v79; // x0
  const MethodInfo *v80; // x2
  bool IsOrganization; // w0
  int64_t userSvtId; // x22
  _BOOL4 v83; // w23
  bool v84; // w0
  WebViewManager_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  int64_t v90; // x21
  CommonUI_o *v91; // x20
  CombineResultEffectComponent_ClickDelegate_o *v92; // x22
  ServantCostumeEntity_o *v93; // [xsp+8h] [xbp-58h] BYREF
  GetCommandCodes_o *v94; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v95; // [xsp+18h] [xbp-48h] BYREF
  GetSvts_o *data; // [xsp+20h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_40F97B1 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v9);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&Method_UserPresentBoxWindow__showEffect_b__88_0__, v14);
    byte_40F97B1 = 1;
  }
  data = 0LL;
  entity = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v93 = 0LL;
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_102;
  receiveIdx = this->fields.receiveIdx;
  size = receiveList->fields._size;
  if ( (int)receiveIdx >= size )
    goto LABEL_93;
  if ( size <= (unsigned int)receiveIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v18 = receiveList->fields._items->m_Items[receiveIdx];
  if ( !v18 )
    goto LABEL_102;
  giftType = v18->fields.giftType;
  if ( !Gift__IsServant(giftType, 0LL) )
  {
    if ( Gift__IsCommandCode(giftType, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_102;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_102;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &v95,
              v18->fields.objectId,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
        goto LABEL_93;
      if ( !v95 )
        goto LABEL_102;
      getCommandCodeList = this->fields.getCommandCodeList;
      v39 = *(_QWORD *)&v95->fields.id;
      age = v95->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v99.fields.currentCryptoKey = v39;
      *(_QWORD *)&v99.fields.fakeValue = age;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v99, 0LL);
      if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      if ( !MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v94, v40, 0LL) )
        goto LABEL_93;
      effectPanel = (UnityEngine_Component_o *)this->fields.effectPanel;
      if ( !effectPanel )
        goto LABEL_102;
      gameObject = UnityEngine_Component__get_gameObject(effectPanel, 0LL);
      if ( !gameObject )
        goto LABEL_102;
      if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
      {
        v43 = (UnityEngine_Component_o *)this->fields.effectPanel;
        if ( !v43 )
          goto LABEL_102;
        v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
        if ( !v44 )
          goto LABEL_102;
        UnityEngine_GameObject__SetActive(v44, 1, 0LL);
      }
      v45 = v94;
      if ( !v94 )
        goto LABEL_102;
      this->fields.gotServant = v94->fields.isNew;
      Eff = GetCommandCodes__isDoGetEff(v45, 0LL);
      if ( !v94 )
        goto LABEL_102;
      if ( !UserPresentBoxWindow__checkNewCommandCode(this, v94->fields.userCommandCodeId, Eff, 1, v47) )
        goto LABEL_93;
      if ( !v94 )
        goto LABEL_102;
      userCommandCodeId = v94->fields.userCommandCodeId;
      isNew = v94->fields.isNew;
      v50 = GetCommandCodes__isDoGetEff(v94, 0LL);
      num = v18->fields.num;
      v53 = v50;
      v54 = this;
      v55 = userCommandCodeId;
      v56 = isNew;
      v57 = giftType;
      presentDialogMessageId = 0;
LABEL_98:
      UserPresentBoxWindow__startRewardGetEffect(v54, v55, v56, v53, v57, num, presentDialogMessageId, v51);
      return;
    }
    if ( Gift__IsCostumeRelease(giftType, 0LL) )
    {
      objectId = v18->fields.objectId;
      v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v60 )
        goto LABEL_102;
      v61 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v60,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !v61 )
        goto LABEL_102;
      if ( !ServantCostumeMaster__TryGetEntity(v61, &v93, objectId / 100, objectId % 100, 0LL) )
        goto LABEL_93;
      v62 = (UnityEngine_Component_o *)this->fields.effectPanel;
      if ( v62 )
      {
        v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
        if ( v63 )
        {
          if ( !UnityEngine_GameObject__get_activeSelf(v63, 0LL) )
          {
            v65 = (UnityEngine_Component_o *)this->fields.effectPanel;
            if ( !v65 )
              goto LABEL_102;
            v66 = UnityEngine_Component__get_gameObject(v65, 0LL);
            if ( !v66 )
              goto LABEL_102;
            UnityEngine_GameObject__SetActive(v66, 1, 0LL);
          }
          if ( v93 )
          {
            UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(this, v93->fields.name, v64);
            return;
          }
        }
      }
    }
    else
    {
      IsEquip = Gift__IsEquip(giftType, 0LL);
      if ( IsEquip )
      {
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v18, v68);
        UserPresentBoxWindow__startRewardEquipGetEffect(this, QuestRewardInfo, v70);
        return;
      }
      if ( !Gift__IsItem(giftType, 0LL) )
        goto LABEL_93;
      v71 = v18->fields.objectId;
      v72 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v72 )
        goto LABEL_102;
      if ( !CommonUI__IsGetItemEffect(v72, v71, 0LL) )
        goto LABEL_93;
      v73 = (UnityEngine_Component_o *)this->fields.effectPanel;
      if ( v73 )
      {
        v74 = UnityEngine_Component__get_gameObject(v73, 0LL);
        if ( v74 )
        {
          activeSelf = UnityEngine_GameObject__get_activeSelf(v74, 0LL);
          if ( !activeSelf )
          {
            v77 = (UnityEngine_Component_o *)this->fields.effectPanel;
            if ( !v77 )
              goto LABEL_102;
            v78 = UnityEngine_Component__get_gameObject(v77, 0LL);
            if ( !v78 )
              goto LABEL_102;
            UnityEngine_GameObject__SetActive(v78, 1, 0LL);
          }
          v79 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v18, v76);
          UserPresentBoxWindow__startRewardSpecialItemGetEffect(this, v79, v80);
          return;
        }
      }
    }
LABEL_102:
    sub_B170D4();
  }
  v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v20 )
    goto LABEL_102;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v20,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v21 )
    goto LABEL_102;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v21,
          &entity,
          v18->fields.objectId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_93;
  if ( !entity )
    goto LABEL_102;
  IsCombineMaterial = SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
  if ( !entity )
    goto LABEL_102;
  if ( ((IsCombineMaterial | SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL)) & 1) != 0 )
    goto LABEL_93;
  if ( !entity )
    goto LABEL_102;
  getSvtList = this->fields.getSvtList;
  v25 = *(_QWORD *)&entity->fields.id;
  v24 = entity->fields.age;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v98.fields.currentCryptoKey = v25;
  *(_QWORD *)&v98.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v98, 0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  if ( !MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v26, giftType, 0LL) )
    goto LABEL_93;
  v27 = (UnityEngine_Component_o *)this->fields.effectPanel;
  if ( !v27 )
    goto LABEL_102;
  v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
  if ( !v28 )
    goto LABEL_102;
  if ( !UnityEngine_GameObject__get_activeSelf(v28, 0LL) )
  {
    v29 = (UnityEngine_Component_o *)this->fields.effectPanel;
    if ( !v29 )
      goto LABEL_102;
    v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
    if ( !v30 )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive(v30, 1, 0LL);
  }
  if ( !data )
    goto LABEL_102;
  v31 = data->fields.isNew;
  v32 = GetSvts__isDoGetEff(data, 0LL);
  if ( Gift__IsEventSvtJoin(giftType, 0LL) )
  {
    v34 = 0;
  }
  else
  {
    if ( !data )
      goto LABEL_102;
    v34 = !UserPresentBoxWindow__checkNew(this, data->fields.userSvtId, v32, 1, v33);
  }
  if ( !entity )
    goto LABEL_102;
  IsOrganization = ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL);
  if ( v31 && IsOrganization )
    this->fields.gotServant = 1;
  if ( !entity )
    goto LABEL_102;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0LL) )
  {
    if ( !entity )
      goto LABEL_102;
    if ( ((v34 | ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL)) & 1) == 0 )
    {
      if ( !data )
        goto LABEL_102;
      userSvtId = data->fields.userSvtId;
      v83 = data->fields.isNew;
      v84 = GetSvts__isDoGetEff(data, 0LL);
      if ( !data )
        goto LABEL_102;
      num = v18->fields.num;
      presentDialogMessageId = data->fields.presentDialogMessageId;
      v56 = v83;
      v53 = v84;
      v54 = this;
      v55 = userSvtId;
      v57 = giftType;
      goto LABEL_98;
    }
  }
  if ( !entity )
    goto LABEL_102;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0LL) )
  {
    if ( entity )
    {
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL) )
        goto LABEL_93;
      v85 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( data )
      {
        v90 = data->fields.userSvtId;
        v91 = (CommonUI_o *)v85;
        v92 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B170CC(
                                                                CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                v86,
                                                                v87,
                                                                v88,
                                                                v89);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v92,
          (Il2CppObject *)this,
          Method_UserPresentBoxWindow__showEffect_b__88_0__,
          0LL);
        if ( v91 )
        {
          CommonUI__OpenSecretTreasureDeviceForSvtGet(v91, v90, v92, 0LL);
          return;
        }
      }
    }
    goto LABEL_102;
  }
LABEL_93:
  UserPresentBoxWindow__EndEffect(this, method);
}


void __fastcall UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_40F97BE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v6);
    sub_B16FFC(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, v7);
    byte_40F97BE = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    goto LABEL_12;
  MissionNotifyManager__CancelPause(v8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v16, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_40F97B3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, name);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__, v9);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, v10);
    byte_40F97B3 = 1;
  }
  v11 = sub_B170CC(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, name, method, v3, v4);
  UserPresentBoxWindow___c__DisplayClass90_0___ctor((UserPresentBoxWindow___c__DisplayClass90_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)name, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_40F97B4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, questRewardInfo);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__, v9);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, v10);
    byte_40F97B4 = 1;
  }
  v11 = sub_B170CC(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, questRewardInfo, method, v3, v4);
  UserPresentBoxWindow___c__DisplayClass91_0___ctor((UserPresentBoxWindow___c__DisplayClass91_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = questRewardInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)questRewardInfo,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v11 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
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
  __int64 v27; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v37; // x21
  EventServantEntity_o *EventServant_21459540; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  EventServantEntity_o *v43; // x22
  __int64 v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **JoinMessage; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 *v58; // x8
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  CommonUI_o *v64; // x20
  AvalonSceneManager_c *v65; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v67; // x21
  System_Int32_array **Message; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  CommonUI_o *v86; // x19
  AvalonSceneManager_c *v87; // x8
  float v88; // s8
  System_Action_o *v89; // x21

  if ( (byte_40F97B2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, userSvtID);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__, v21);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, v22);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__, v23);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_12382, v25);
    sub_B16FFC(&StringLiteral_12383, v26);
    byte_40F97B2 = 1;
  }
  v27 = sub_B170CC(
          UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo,
          userSvtID,
          isNew,
          isDoEffect,
          *(_QWORD *)&giftType);
  UserPresentBoxWindow___c__DisplayClass89_0___ctor((UserPresentBoxWindow___c__DisplayClass89_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_31;
  *(_QWORD *)(v27 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_DWORD *)(v27 + 24) = giftType;
  *(_QWORD *)(v27 + 32) = userSvtID;
  *(_DWORD *)(v27 + 44) = num;
  *(_BYTE *)(v27 + 40) = isDoEffect;
  *(_BYTE *)(v27 + 48) = isNew;
  *(_DWORD *)(v27 + 52) = presentDialogMessageId;
  if ( !Gift__IsEventSvtJoin(giftType, 0LL) )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             *(_QWORD *)(v27 + 32),
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Entity )
    goto LABEL_31;
  v37 = Entity;
  EventServant_21459540 = UserServantEntity__getEventServant_21459540(Entity, 1, 0LL);
  if ( !EventServant_21459540 || (v43 = EventServant_21459540, EventServant_21459540->fields.type != 2) )
  {
LABEL_16:
    touchBlocker = this->fields.touchBlocker;
    if ( touchBlocker )
    {
      UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
      v64 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v65 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v65 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v65->static_fields->DEFAULT_FADE_TIME;
      v67 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
      System_Action___ctor(
        v67,
        (Il2CppObject *)v27,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v64 )
      {
        CommonUI__maskFadeout(v64, 1, DEFAULT_FADE_TIME, v67, 0LL);
        return;
      }
    }
LABEL_31:
    sub_B170D4();
  }
  v44 = sub_B170CC(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v39, v40, v41, v42);
  UserPresentBoxWindow___c__DisplayClass89_1___ctor((UserPresentBoxWindow___c__DisplayClass89_1_o *)v44, 0LL);
  if ( !v44 )
    goto LABEL_31;
  *(_QWORD *)(v44 + 32) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 32), (System_Int32_array **)v27, v45, v46, v47, v48, v49, v50);
  if ( UserServantEntity__HasStatus(v37, 64, 0LL) )
  {
    JoinMessage = (System_Int32_array **)EventServantEntity__GetJoinMessage(v43, 0LL);
    *(_QWORD *)(v44 + 24) = JoinMessage;
    sub_B16F98((BattleServantConfConponent_o *)(v44 + 24), JoinMessage, v52, v53, v54, v55, v56, v57);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = &StringLiteral_12383;
  }
  else
  {
    Message = (System_Int32_array **)EventServantEntity__GetGetMessage(v43, 0LL);
    *(_QWORD *)(v44 + 24) = Message;
    sub_B16F98((BattleServantConfConponent_o *)(v44 + 24), Message, v69, v70, v71, v72, v73, v74);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = &StringLiteral_12382;
  }
  v75 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v58, 0LL);
  *(_QWORD *)(v44 + 16) = v75;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 16), v75, v76, v77, v78, v79, v80, v81);
  v86 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v87 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v87 = AvalonSceneManager_TypeInfo;
  }
  v88 = v87->static_fields->DEFAULT_FADE_TIME;
  v89 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v82, v83, v84, v85);
  System_Action___ctor(
    v89,
    (Il2CppObject *)v44,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v86 )
    goto LABEL_31;
  CommonUI__maskFadein(v86, v88, v89, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_40F97B5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, questRewardInfo);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__, v9);
    sub_B16FFC(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, v10);
    byte_40F97B5 = 1;
  }
  v11 = sub_B170CC(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, questRewardInfo, method, v3, v4);
  UserPresentBoxWindow___c__DisplayClass92_0___ctor((UserPresentBoxWindow___c__DisplayClass92_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = questRewardInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)questRewardInfo,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v11 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow_ClickDelegate___ctor(
        UserPresentBoxWindow_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserPresentBoxWindow_ClickDelegate__BeginInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = hasGetServant;
  if ( (byte_40F799E & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, hasGetServant);
    byte_40F799E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow_ClickDelegate__Invoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  UserPresentBoxWindow_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  UserPresentBoxWindow_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  UserPresentBoxWindow_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (UserPresentBoxWindow_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, hasGetServant, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(hasGetServant, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, hasGetServant, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, hasGetServant, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            hasGetServant,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, hasGetServant, v20);
    goto LABEL_37;
  }
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
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B170D4();
  System_Action__Invoke(callback, 0LL);
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
  struct UserPresentBoxWindow_o *_4__this; // x8
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UserPresentBoxWindow_o *v13; // x8
  struct UserPresentListViewManager_o *v14; // x8
  System_Int32_array **v15; // x1

  if ( (byte_40F798E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F798E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (userPresentListViewManager = _4__this->fields.userPresentListViewManager) == 0LL
    || (UserPresentListViewManager__resetCheckStatus(userPresentListViewManager, 0LL),
        (v13 = this->fields.__4__this) == 0LL)
    || (v14 = v13->fields.userPresentListViewManager) == 0LL )
  {
    sub_B170D4();
  }
  v15 = (System_Int32_array **)StringLiteral_1;
  v14->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v14->fields._expiredPresents_k__BackingField,
    v15,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  __int64 v4; // x4
  __int64 v6; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F798F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isOk);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__, v6);
    byte_40F798F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isOk, method, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !evpDialog )
LABEL_8:
    sub_B170D4();
  UserPresentBoxEventPointRewardDialog__Close_24071824(evpDialog, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *_4__this; // x0
  UserPresentBoxWindow_o *v4; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxWindow__UpdateEventInfos(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  UserPresentBoxWindow__ShowEventPointReward(v4, this->fields.idx + 1, this->fields.callback, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7991 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__, v4);
    byte_40F7991 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v11 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v11 )
    sub_B170D4();
  SummonAssetManager__LoadSummonAssets(v11, _9__3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  UserPresentBoxWindow_o *_4__this; // x0

  if ( (byte_40F7990 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_40F7990 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  UserPresentBoxWindow__EndEffect(_4__this, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  UserPresentBoxWindow___c__DisplayClass89_0_Fields *p_fields; // x25
  UserServantEntity_o *v17; // x20
  WebViewManager_o *v18; // x0
  SummonAssetManager_o *v19; // x21
  UnityEngine_Component_o *effectPanel; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Prefab; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EventServantEntity_o *EventServant_21459540; // x0
  int32_t v30; // w21
  ServantRewardAction_o *svtGetAction; // x22
  __int64 v32; // x23
  __int64 v33; // x24
  int32_t v34; // w0
  __int128 v35; // q1
  int32_t v36; // w23
  int64_t v37; // x0
  __int64 v38; // x8
  int64_t v39; // x20
  int32_t v40; // w0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  struct ServantRewardAction_o *v45; // x8
  WebViewManager_o *v46; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v47; // x0
  UserServantEntity_o *v48; // x0
  struct UserPresentBoxWindow_o *v49; // x22
  UserServantEntity_o *v50; // x21
  WebViewManager_o *v51; // x0
  SummonAssetManager_o *v52; // x20
  UnityEngine_Component_o *v53; // x0
  UnityEngine_Transform_o *v54; // x0
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct UserPresentBoxWindow_o *v62; // x8
  ServantRewardAction_o *v63; // x20
  __int128 v64; // q1
  int64_t v65; // x0
  bool isNew; // w2
  int64_t v67; // x1
  bool v68; // w3
  int32_t v69; // w4
  ServantRewardAction_o *v70; // x0
  ServantRewardAction_o *v71; // x21
  __int64 v72; // x22
  __int64 v73; // x23
  int32_t v74; // w0
  __int128 v75; // q1
  int32_t v76; // w22
  int64_t v77; // x0
  __int64 v78; // x8
  int64_t v79; // x20
  int32_t v80; // w0
  __int128 v81; // q1
  int64_t v82; // x0
  Il2CppObject *v83; // x19
  System_Action_o *v84; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_40F7992 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_B16FFC(&Method_UserPresentBoxWindow_EndEffect__, v11);
    byte_40F7992 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_62;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               this->fields.userSvtID,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_fields = &this->fields;
    _4__this = this->fields.__4__this;
    v17 = Entity;
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !this->fields.__4__this )
      goto LABEL_62;
    v19 = (SummonAssetManager_o *)v18;
    effectPanel = (UnityEngine_Component_o *)this->fields.__4__this->fields.effectPanel;
    if ( !effectPanel )
      goto LABEL_62;
    transform = UnityEngine_Component__get_transform(effectPanel, 0LL);
    if ( !v19 )
      goto LABEL_62;
    Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(v19, transform, 0, 0LL);
    if ( !_4__this )
      goto LABEL_62;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Prefab;
    sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.svtGetAction, Prefab, v23, v24, v25, v26, v27, v28);
    if ( this->fields.isDoEffect )
    {
      if ( v17 )
      {
        EventServant_21459540 = UserServantEntity__getEventServant_21459540(v17, 1, 0LL);
        v30 = 14;
        if ( EventServant_21459540 )
        {
          if ( EventServant_21459540->fields.type == 2 )
            v30 = 6;
          else
            v30 = 14;
        }
        if ( p_fields->__4__this )
        {
          svtGetAction = p_fields->__4__this->fields.svtGetAction;
          v33 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v90.fields.currentCryptoKey = v33;
          *(_QWORD *)&v90.fields.fakeValue = v32;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v90, 0LL);
          v35 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
          v36 = v34;
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v35;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v88 = v89;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v88, 0LL);
          v38 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
          *(_QWORD *)&v91.fields.fakeValue = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
          v39 = v37;
          *(_QWORD *)&v91.fields.currentCryptoKey = v38;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v91, 0LL);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(svtGetAction, v36, v39, v40, this->fields.num, this->fields.isNew, 1, v30, 0LL);
            if ( !this->fields.isNew )
              goto LABEL_60;
            if ( p_fields->__4__this )
            {
              v45 = p_fields->__4__this->fields.svtGetAction;
              if ( v45 )
              {
                v45->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_60;
              }
            }
          }
        }
      }
LABEL_62:
      sub_B170D4();
    }
    if ( !p_fields->__4__this || !v17 )
      goto LABEL_62;
    v71 = p_fields->__4__this->fields.svtGetAction;
    v73 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
    v72 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v92.fields.currentCryptoKey = v73;
    *(_QWORD *)&v92.fields.fakeValue = v72;
    v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v92, 0LL);
    v75 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
    v76 = v74;
    *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v89.fields.fakeValue = v75;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v87 = v89;
    v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v87, 0LL);
    v78 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v93.fields.fakeValue = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
    v79 = v77;
    *(_QWORD *)&v93.fields.currentCryptoKey = v78;
    v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v93, 0LL);
    if ( !v71 )
      goto LABEL_62;
    ServantRewardAction__Setup(v71, v76, v79, v80, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v46 )
      goto LABEL_62;
    v47 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)v46,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !v47 )
      goto LABEL_62;
    v48 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            v47,
            this->fields.userSvtID,
            (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_fields = &this->fields;
    v49 = this->fields.__4__this;
    v50 = v48;
    v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !this->fields.__4__this )
      goto LABEL_62;
    v52 = (SummonAssetManager_o *)v51;
    v53 = (UnityEngine_Component_o *)this->fields.__4__this->fields.effectPanel;
    if ( !v53 )
      goto LABEL_62;
    v54 = UnityEngine_Component__get_transform(v53, 0LL);
    if ( !v52 )
      goto LABEL_62;
    v55 = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(v52, v54, 0, 0LL);
    if ( !v49 )
      goto LABEL_62;
    v49->fields.svtGetAction = (struct ServantRewardAction_o *)v55;
    sub_B16F98((BattleServantConfConponent_o *)&v49->fields.svtGetAction, v55, v56, v57, v58, v59, v60, v61);
    v62 = this->fields.__4__this;
    if ( !v62 || !v50 )
      goto LABEL_62;
    v63 = v62->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v64 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
      *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v89.fields.fakeValue = v64;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v86 = v89;
      v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v86, 0LL);
      if ( !v63 )
        goto LABEL_62;
      isNew = this->fields.isNew;
      v67 = v65;
      v68 = 1;
      v69 = 14;
      v70 = v63;
    }
    else
    {
      v81 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
      *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v89.fields.fakeValue = v81;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v85 = v89;
      v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v85, 0LL);
      if ( !v63 )
        goto LABEL_62;
      v67 = v82;
      v69 = 6;
      v70 = v63;
      isNew = 0;
      v68 = 0;
    }
    ServantRewardAction__SetupCommandCode_28281192(v70, v67, isNew, v68, v69, 0LL);
  }
  else
  {
    p_fields = &this->fields;
  }
LABEL_60:
  v83 = (Il2CppObject *)p_fields->__4__this;
  v84 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
  System_Action___ctor(v84, v83, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v83 )
    goto LABEL_62;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v83, v84, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F7993 & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__, v4);
    byte_40F7993 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v6, v7, v8, v9);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&CS___8__locals1->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
LABEL_8:
    sub_B170D4();
  CommonUI__OpenNotificationDialog_18239760(
    v14,
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__1; // x22
  CommonUI_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7994 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_40F7994 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__LoadCostumeReleaseEffect(v11, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__2; // x22
  CommonUI_o *v11; // x21
  System_String_o *name; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F7995 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_40F7995 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v11 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__OpenCostumeReleaseEffect(v11, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  UserPresentBoxWindow_o *_4__this; // x0

  if ( (byte_40F7996 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7996 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  UserPresentBoxWindow__EndEffect(_4__this, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__1; // x22
  CommonUI_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7997 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__, v4);
    byte_40F7997 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__LoadEquipGetEffect(v11, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__2; // x22
  CommonUI_o *v11; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F7998 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__, v4);
    byte_40F7998 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v11 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__OpenEquipGetEffect(v11, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  UserPresentBoxWindow_o *_4__this; // x0

  if ( (byte_40F7999 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7999 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  UserPresentBoxWindow__EndEffect(_4__this, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__1; // x22
  CommonUI_o *v11; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F799A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__, v4);
    byte_40F799A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v11 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__LoadItemGetEffect(v11, questRewardInfo, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  struct UserPresentBoxWindow_o *_4__this; // x8
  CommonUI_o *v7; // x20
  UnityEngine_Component_o *effectPanel; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v15; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F799B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__, v4);
    byte_40F799B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v7 = (CommonUI_o *)Instance;
  effectPanel = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !effectPanel )
    goto LABEL_9;
  transform = UnityEngine_Component__get_transform(effectPanel, 0LL);
  _9__2 = this->fields.__9__2;
  v15 = transform;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v7 )
LABEL_9:
    sub_B170D4();
  CommonUI__OpenItemGetEffect(v7, v15, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  UserPresentBoxWindow_o *_4__this; // x0

  if ( (byte_40F799C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F799C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  UserPresentBoxWindow__EndEffect(_4__this, 0LL);
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
  struct UserPresentBoxWindow_o *_4__this; // x8
  UnityEngine_Component_o *svtGetAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct UserPresentBoxWindow_o *v6; // x8
  UnityEngine_GameObject_o *touchBlocker; // x0

  if ( (byte_40F799D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F799D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  svtGetAction = (UnityEngine_Component_o *)_4__this->fields.svtGetAction;
  if ( !svtGetAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(svtGetAction, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
  v6 = this->fields.__4__this;
  if ( !v6 || (touchBlocker = v6->fields.touchBlocker) == 0LL )
LABEL_11:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(touchBlocker, 0, 0LL);
  ActionExtensions__Call(this->fields.end_act, 0LL);
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