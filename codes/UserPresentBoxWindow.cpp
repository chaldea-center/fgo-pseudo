void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_long__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AF028 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    byte_42AF028 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.befCommandCodeList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UserPresentBoxWindow_o *v13; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  System_Int32_array **klass; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UnityEngine_GameObject_o *v22; // x8
  System_Int32_array **monitor; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_GameObject_o *v30; // x8
  struct UnityEngine_GameObject_o *v31; // x8
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UnityEngine_GameObject_o *v39; // x8
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UnityEngine_GameObject_o *v47; // x8
  System_Int32_array **v48; // x1
  System_Action_o *v49; // x20
  const MethodInfo *v50; // x2
  __int64 v51; // x0

  v4 = this;
  if ( (byte_42AF002 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    this = (UserPresentBoxWindow_o *)sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42AF002 = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_44555656(result, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_44570600(
                         (System_String_o *)StringLiteral_15739/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_15976/*"]"*/,
                         0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                     v6,
                                     (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_23;
  v13 = this;
  if ( !LODWORD(this->fields.myFsm) )
    goto LABEL_24;
  bgObject = this->fields.bgObject;
  if ( !bgObject )
    goto LABEL_23;
  klass = (System_Int32_array **)bgObject[1].klass;
  v4->fields.getSvtList = (struct GetSvts_array *)klass;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.getSvtList, klass, v7, v8, v9, v10, v11, v12);
  if ( !LODWORD(v13->fields.myFsm) )
    goto LABEL_24;
  v22 = v13->fields.bgObject;
  if ( !v22 )
    goto LABEL_23;
  monitor = (System_Int32_array **)v22[1].monitor;
  v4->fields.getCommandCodeList = (struct GetCommandCodes_array *)monitor;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.getCommandCodeList, monitor, v16, v17, v18, v19, v20, v21);
  if ( !LODWORD(v13->fields.myFsm) )
    goto LABEL_24;
  v30 = v13->fields.bgObject;
  if ( !v30 )
    goto LABEL_23;
  v4->fields.presentOverflowType = v30->fields.m_CachedPtr;
  if ( !LODWORD(v13->fields.myFsm) )
    goto LABEL_24;
  v31 = v13->fields.bgObject;
  if ( !v31 )
    goto LABEL_23;
  v32 = *(System_Int32_array ***)&v31[1].fields.m_CachedPtr;
  v4->fields.evPointRewardList = (struct UserPresentBoxWindow_evPointReward_array *)v32;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.evPointRewardList, v32, v24, v25, v26, v27, v28, v29);
  if ( !LODWORD(v13->fields.myFsm) )
    goto LABEL_24;
  v39 = v13->fields.bgObject;
  if ( !v39 )
    goto LABEL_23;
  v40 = (System_Int32_array **)v39[2].klass;
  v4->fields.getSvtCoins = (struct GetSvtCoin_array *)v40;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.getSvtCoins, v40, v33, v34, v35, v36, v37, v38);
  if ( !LODWORD(v13->fields.myFsm) )
  {
LABEL_24:
    v51 = sub_B52A88(this);
    sub_B52A28(v51, 0LL);
  }
  v47 = v13->fields.bgObject;
  if ( !v47 )
LABEL_23:
    sub_B52A5C(this, result);
  v48 = (System_Int32_array **)v47[2].monitor;
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v48;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.overflowSvtCoinInfos, v48, v41, v42, v43, v44, v45, v46);
  v49 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v49, v50);
}


bool __fastcall UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  __int64 Filter_34021132; // x0
  ListViewSort_o **v9; // x8
  ListViewSort_o *v10; // x19
  char v11; // vf
  UserPresentBoxMaster_c *v12; // x8
  struct UserPresentBoxMaster_StaticFields *static_fields; // x9
  int32_t flag; // w10
  bool v15; // w8
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v17; // w1

  if ( (byte_42AEFFF & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&UserPresentBoxMaster_TypeInfo);
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AEFFF = 1;
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  Filter_34021132 = (__int64)UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_34021132 = (__int64)UserPresentListViewManager_TypeInfo;
  }
  v9 = *(ListViewSort_o ***)(Filter_34021132 + 184);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_60;
  Filter_34021132 = ListViewSort__GetFilter_34021132(*v9, 13, 0LL);
  if ( (Filter_34021132 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_60;
LABEL_25:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_34021132 = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_34021132 = (__int64)BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*(_QWORD *)(Filter_34021132 + 184) + 640LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( (*(_BYTE *)(Filter_34021132 + 307) & 4) != 0 && !*(_DWORD *)(Filter_34021132 + 224) )
          {
            j_il2cpp_runtime_class_init_0(Filter_34021132);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_34021132 = System_Array__IndexOf_int_(
                              PresentBoxFilterSvtEquipMaterial,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
          if ( (Filter_34021132 & 0x80000000) == 0 )
          {
            LOBYTE(Filter_34021132) = ListViewSort__GetFilter_34021132(v10, 4, 0LL);
            return Filter_34021132;
          }
        }
        if ( servantMaster )
        {
          Filter_34021132 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                       userPresentBoxEntity->fields.objectId,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_34021132 )
          {
            switch ( *(_DWORD *)(Filter_34021132 + 84) )
            {
              case 1:
              case 0xC:
                goto LABEL_26;
              case 3:
                v17 = 1;
                goto LABEL_47;
              case 6:
                v17 = 3;
                goto LABEL_47;
              case 7:
                v17 = 2;
                goto LABEL_47;
              case 8:
                v17 = 4;
                goto LABEL_47;
              default:
                goto LABEL_46;
            }
          }
        }
        break;
      case 2:
        if ( !itemMaster )
          break;
        Filter_34021132 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
                                     userPresentBoxEntity->fields.objectId,
                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_34021132 )
          break;
        switch ( *(_DWORD *)(Filter_34021132 + 48) )
        {
          case 2:
          case 0x11:
          case 0x14:
            v17 = 10;
            break;
          case 3:
          case 4:
            v17 = 6;
            break;
          case 5:
            v17 = 11;
            break;
          case 9:
            v17 = 8;
            break;
          case 0xA:
          case 0xB:
          case 0xC:
          case 0x19:
          case 0x1D:
            v17 = 7;
            break;
          case 0xE:
          case 0xF:
          case 0x12:
          case 0x13:
          case 0x1C:
            v17 = 12;
            break;
          case 0x18:
            v17 = 9;
            break;
          default:
            goto LABEL_46;
        }
LABEL_47:
        if ( ListViewSort__GetFilter_34021132(v10, v17, 0LL) )
LABEL_48:
          LOBYTE(Filter_34021132) = 1;
        else
          LOBYTE(Filter_34021132) = 0;
        return Filter_34021132;
      case 6:
      case 7:
LABEL_26:
        v15 = ListViewSort__GetFilter_34021132(v10, 0, 0LL);
        LOBYTE(Filter_34021132) = 0;
        if ( !v15 )
          return Filter_34021132;
        goto LABEL_48;
      case 0xB:
        v17 = 5;
        goto LABEL_47;
      default:
LABEL_46:
        v17 = 14;
        goto LABEL_47;
    }
LABEL_60:
    sub_B52A5C(Filter_34021132, servantMaster);
  }
  v12 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v12 = UserPresentBoxMaster_TypeInfo;
  }
  if ( !userPresentBoxEntity )
    goto LABEL_60;
  static_fields = v12->static_fields;
  flag = userPresentBoxEntity->fields.flag;
  LOBYTE(Filter_34021132) = 1;
  if ( (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) < 0) ^ v11 | (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) == 0) )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      flag = userPresentBoxEntity->fields.flag;
      static_fields = UserPresentBoxMaster_TypeInfo->static_fields;
    }
    Filter_34021132 = 1LL;
    if ( ((1 << static_fields->IMPORTANT_FOR_LIMIT) & flag) < 1 )
      goto LABEL_25;
  }
  return Filter_34021132;
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
  void *Filter_34021132; // x0
  ListViewSort_o **v12; // x8
  ListViewSort_o *v13; // x19
  struct UserPresentBoxMaster_StaticFields *static_fields; // x9
  int32_t flag; // w10
  bool v16; // w8
  int32_t giftType; // w8
  _DWORD *v18; // x8
  bool Filter_34021192; // w0
  int32_t v20; // w1

  if ( (byte_42AF000 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&UserPresentBoxMaster_TypeInfo);
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF000 = 1;
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  Filter_34021132 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_34021132 = UserPresentListViewManager_TypeInfo;
  }
  v12 = (ListViewSort_o **)*((_QWORD *)Filter_34021132 + 23);
  v13 = *v12;
  if ( isActiveFilterCategory )
  {
    if ( !v13 )
      goto LABEL_55;
    Filter_34021132 = (void *)ListViewSort__GetFilter_34021132(*v12, 13, 0LL);
    if ( ((unsigned __int8)Filter_34021132 & 1) == 0 )
    {
      if ( !userPresentBoxEntity )
        goto LABEL_55;
      goto LABEL_26;
    }
  }
  Filter_34021132 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    Filter_34021132 = UserPresentBoxMaster_TypeInfo;
  }
  if ( !userPresentBoxEntity )
    goto LABEL_55;
  static_fields = (struct UserPresentBoxMaster_StaticFields *)*((_QWORD *)Filter_34021132 + 23);
  flag = userPresentBoxEntity->fields.flag;
  v16 = 1;
  if ( (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) < 0) ^ v6 | (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) == 0) )
  {
    if ( (*((_BYTE *)Filter_34021132 + 307) & 4) != 0 && !*((_DWORD *)Filter_34021132 + 56) )
    {
      j_il2cpp_runtime_class_init_0(Filter_34021132);
      flag = userPresentBoxEntity->fields.flag;
      static_fields = UserPresentBoxMaster_TypeInfo->static_fields;
    }
    v16 = 1;
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
            Filter_34021132 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)commandCodeMaster,
                                userPresentBoxEntity->fields.objectId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
            if ( Filter_34021132 )
            {
              v18 = (char *)Filter_34021132 + 64;
LABEL_35:
              switch ( *v18 )
              {
                case 0:
                  if ( !v13 )
                    goto LABEL_55;
                  if ( !ListViewSort__CheckPresentBoxRarityFilterAll(v13, 0LL)
                    && !ListViewSort__UnCheckPresentBoxRarityFilterAll(v13, 0LL) )
                  {
                    goto LABEL_54;
                  }
                  return 1;
                case 1:
                  if ( !v13 )
                    goto LABEL_55;
                  Filter_34021192 = ListViewSort__GetFilter_34021192(v13, 0, 0LL);
                  v16 = 0;
                  if ( !Filter_34021192 )
                    return v16;
                  return 1;
                case 2:
                  if ( !v13 )
                    goto LABEL_55;
                  v20 = 1;
                  goto LABEL_51;
                case 3:
                  if ( !v13 )
                    goto LABEL_55;
                  v20 = 2;
                  goto LABEL_51;
                case 4:
                  if ( !v13 )
                    goto LABEL_55;
                  v20 = 3;
                  goto LABEL_51;
                case 5:
                  if ( !v13 )
                    goto LABEL_55;
                  v20 = 4;
LABEL_51:
                  if ( ListViewSort__GetFilter_34021192(v13, v20, 0LL) )
                    return 1;
LABEL_54:
                  v16 = 0;
                  break;
                default:
                  return 1;
              }
              return v16;
            }
            return 1;
          }
LABEL_55:
          sub_B52A5C(Filter_34021132, servantLimitMaster);
        }
        if ( giftType != 1 )
          return 1;
      }
      if ( servantLimitMaster )
      {
        Filter_34021132 = ServantLimitMaster__GetEntity(
                            servantLimitMaster,
                            userPresentBoxEntity->fields.objectId,
                            0,
                            0LL);
        if ( Filter_34021132 )
        {
          v18 = (char *)Filter_34021132 + 24;
          goto LABEL_35;
        }
        return 1;
      }
      goto LABEL_55;
    }
  }
  return v16;
}


void __fastcall UserPresentBoxWindow__CheckSvtGetTutorial(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Action_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o **v14; // x22
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x21
  __int64 receiveIdx; // x20
  int size; // w8
  UserPresentBoxEntity_o *v18; // x21
  System_Action_o *v19; // x20

  if ( (byte_42AF017 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
    byte_42AF017 = 1;
  }
  v5 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass102_0___ctor((UserPresentBoxWindow___c__DisplayClass102_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = callback;
  v14 = (System_Action_o **)(v5 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_16;
  receiveIdx = this->fields.receiveIdx;
  size = receiveList->fields._size;
  if ( (int)receiveIdx < size )
  {
    if ( size <= (unsigned int)receiveIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v18 = receiveList->fields._items->m_Items[receiveIdx];
    if ( v18 )
    {
      if ( Gift__IsServant(v18->fields.giftType, 0LL) )
      {
        v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v19,
          (Il2CppObject *)v5,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v19, v18->fields.objectId, 0, 0, 0, 0LL);
        return;
      }
      v6 = *v14;
      if ( *v14 )
      {
        System_Action__Invoke(v6, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B52A5C(v6, v7);
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
  ListViewSort_o *sortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42AF027 & 1) == 0 )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF027 = 1;
  }
  if ( result )
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42AF02E )
    {
      sub_B52984(&UserPresentListViewManager_TypeInfo);
      byte_42AF02E = 1;
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
          (sortInfo = (ListViewSort_o *)this->fields.userPresentListViewManager) == 0LL) )
    {
LABEL_17:
      sub_B52A5C(sortInfo, result);
    }
    UserPresentListViewManager__resetCheckStatus((UserPresentListViewManager_o *)sortInfo, 0LL);
    this->fields.mIsScrlResetPosition = 1;
    UserPresentBoxWindow__ReDisp(this, v7);
  }
  sortInfo = (ListViewSort_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !sortInfo )
    goto LABEL_17;
  PresentBoxFilterSelectMenu__Close((PresentBoxFilterSelectMenu_o *)sortInfo, 0LL);
}


void __fastcall UserPresentBoxWindow__Close(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  __int64 v6; // x1

  if ( (byte_42AF01D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AF01D = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)userPresentListViewManager & 1) != 0 )
  {
    if ( !mInstance )
      goto LABEL_20;
    TerminalSceneComponent__UpdateQuestBoardList((TerminalSceneComponent_o *)mInstance, 0LL);
  }
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__DestroyList(userPresentListViewManager, 0LL),
        (userPresentListViewManager = (UserPresentListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL)) == 0LL) )
  {
LABEL_20:
    sub_B52A5C(userPresentListViewManager, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentListViewManager, 0, 0LL);
}


QuestRewardInfo_o *__fastcall UserPresentBoxWindow__CreateQuestRewardInfo(
        UserPresentBoxWindow_o *this,
        UserPresentBoxEntity_o *userPresentBox,
        const MethodInfo *method)
{
  QuestRewardInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  QuestRewardInfo_o *result; // x0

  if ( (byte_42AF00E & 1) == 0 )
  {
    sub_B52984(&QuestRewardInfo_TypeInfo);
    byte_42AF00E = 1;
  }
  v4 = (QuestRewardInfo_o *)sub_B52A54(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v4, 0LL);
  if ( !userPresentBox || !v4 )
    sub_B52A5C(v5, v6);
  result = v4;
  v4->fields.type = userPresentBox->fields.giftType;
  v4->fields.objectId = userPresentBox->fields.objectId;
  v4->fields.num = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AF00F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5524/*"END_EFFECT"*/);
    byte_42AF00F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5524/*"END_EFFECT"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42AF018 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3121/*"CLOSE"*/);
    byte_42AF018 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3121/*"CLOSE"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_42AF005 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_EndReceive__);
    byte_42AF005 = 1;
  }
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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

  if ( (byte_42AF006 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_EndEffectReceive__);
    byte_42AF006 = 1;
  }
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v4, v5);
}


bool __fastcall UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x21
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  char v9; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42AF003 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF003 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)receiveList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      sub_B52A5C(v4, v5);
    if ( !Gift__IsCostumeRelease((int32_t)v13.fields.current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_B52A5C(0LL, v8);
      if ( !CommonUI__IsGetItemEffect(Instance, HIDWORD(current[4].monitor), 0LL) )
        continue;
    }
    v9 = 1;
    v10 = 2;
    goto LABEL_14;
  }
  v10 = 0;
  v9 = 0;
LABEL_14:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return (v10 == 2) & v9;
}


void __fastcall UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  System_Action_o *v7; // x22
  System_Action_o *v8; // x23

  if ( (byte_42AF019 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_ProcessClickAll__);
    sub_B52984(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__);
    byte_42AF019 = 1;
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
    UserPresentListViewManager__SetMode_21410476(userPresentListViewManager, 2, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, 0LL),
          v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
          System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_15:
      sub_B52A5C(userPresentListViewManager, v3);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v7, v8, 0LL);
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

  if ( (byte_42AF01E & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF01E = 1;
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
  __int64 v3; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( (byte_42AF01B & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF01B = 1;
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
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_B52A5C(userPresentListViewManager, v3);
    }
    UserPresentListViewManager__SetMode_21410476(userPresentListViewManager, 2, 0LL);
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
  UnityEngine_Object_o *presentBoxFilterSelectMenu; // x21
  struct PresentBoxFilterSelectMenu_o **p_presentBoxFilterSelectMenu; // x20
  struct UnityEngine_GameObject_o *presentBoxFilterKindSelectMenuPrefab; // x21
  UnityEngine_GameObject_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  PresentBoxFilterSelectMenu_o *v17; // x20
  UserPresentListViewManager_c *v18; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v20; // x22

  if ( (byte_42AF026 & 1) == 0 )
  {
    sub_B52984(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_ClickFilterEnd__);
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF026 = 1;
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
    v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)presentBoxFilterKindSelectMenuPrefab,
                                       (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_32091088(v6, gameObject, 0LL);
    if ( !v6 )
LABEL_25:
      sub_B52A5C(v8, v9);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v6,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_srcLineSprite;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.presentBoxFilterSelectMenu,
      Component_srcLineSprite,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = *p_presentBoxFilterSelectMenu;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  v18 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v18 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v18->static_fields->sortInfo;
  v20 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_B52A54(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0LL);
  if ( !v17 )
    goto LABEL_25;
  PresentBoxFilterSelectMenu__Open(v17, sortInfo, v20, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_42AF024 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF024 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  UserPresentBoxWindow__OpenHelp(v2, v3);
}


void __fastcall UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( (byte_42AF01A & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF01A = 1;
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
          (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
    {
      sub_B52A5C(userPresentListViewManager, v3);
    }
    UserPresentListViewManager__SetMode_21410476(userPresentListViewManager, 2, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1

  if ( (byte_42AF01F & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__);
    byte_42AF01F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v3,
                                                         (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B52A5C(0LL, v5);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AEFF8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEFF8 = 1;
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
      sub_B52A5C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B52920((BattleServantConfConponent_o *)p_titleInfo, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *v20; // x0
  const MethodInfo *v21; // x3
  UserPresentBoxWindow_o *v22; // x0
  const MethodInfo *v23; // x1
  struct System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  struct UnityEngine_GameObject_o *titlePrefab; // x22
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  TitleInfoControl_o *v42; // x22
  TitleInfoControl_o *v43; // x21
  System_Action_o *v44; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v46; // x21
  System_Action_int__o *v47; // x22
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x2
  bool v57; // w20
  const MethodInfo *v58; // x2

  if ( (byte_42AEFF9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_OnClickBack__);
    sub_B52984(&Method_UserPresentBoxWindow__Open_b__69_0__);
    sub_B52984(&StringLiteral_5510/*"ENABLE_PRESENT_HISTORY"*/);
    byte_42AEFF9 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
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
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, 0, gameObject, v17);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_31;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v18, 0, v18, v19);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_31;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v20, 0, v20, v21);
  v24 = UserPresentBoxWindow__maxSelectable(v22, v23);
  this->fields.presentMaxSelectable = v24;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.presentMaxSelectable,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  UserPresentBoxWindow__SetSelectCount(this, 0, v31);
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
    bgObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)titlePrefab,
                                             (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               bgObject,
                                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = Component_srcLineSprite;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.titleInfo,
        (System_Int32_array **)Component_srcLineSprite,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v42 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v42 )
      {
        TitleInfoControl__SetParent(v42, (UnityEngine_Transform_o *)bgObject, 0LL);
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
                TitleInfoControl__changeTitleInfo_18255196((TitleInfoControl_o *)bgObject, 1, 42, 0, 0LL);
                v43 = this->fields.titleInfo;
                v44 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                System_Action___ctor(v44, (Il2CppObject *)this, Method_UserPresentBoxWindow_OnClickBack__, 0LL);
                if ( v43 )
                {
                  TitleInfoControl__SetBackBtnAct(v43, v44, 0LL);
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B52A5C(bgObject, isShowBg);
  }
LABEL_22:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v47 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v47,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__Open_b__69_0__,
    (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(v46, v47, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_31;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetFilterButtonImage(this, v48);
  bgObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !bgObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(bgObject, 1, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.sortBtn;
  if ( !bgObject )
    goto LABEL_31;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bgObject, 0, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.sortBtn;
  if ( !bgObject )
    goto LABEL_31;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))bgObject->klass[1]._1.implementedInterfaces)(
    bgObject,
    3LL,
    1LL,
    bgObject->klass[1]._1.interfaceOffsets);
  UserPresentBoxWindow__RequestPresentList(this, v49);
  this->fields.mReDispAct = redisp_act;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mReDispAct,
    (System_Int32_array **)redisp_act,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v56);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5510/*"ENABLE_PRESENT_HISTORY"*/, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_31;
  v57 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v57, v58);
}


void __fastcall UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x19
  System_Array_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_42AF025 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_ImageId___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E);
    byte_42AF025 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (System_Array_o *)sub_B5299C(TutorialFlag_ImageId___TypeInfo, 3LL);
  v6.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v3, v6, 0LL);
  if ( !Instance )
    sub_B52A5C(v4, v5);
  CommonUI__OpenTutorialImageDialog(Instance, (TutorialFlag_ImageId_array *)v3, 201, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall UserPresentBoxWindow__ProcessClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v4; // x2

  userPresentListViewManager = this->fields.userPresentListViewManager;
  this->fields.mIsScrlResetPosition = 1;
  if ( !userPresentListViewManager
    || (UserPresentListViewManager__ReceiveMultiPresent(userPresentListViewManager, 1, 0LL),
        (userPresentListViewManager = this->fields.userPresentListViewManager) == 0LL) )
  {
    sub_B52A5C(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_21410476(userPresentListViewManager, 2, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v4);
}


void __fastcall UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x27
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  const MethodInfo *v5; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UserServantMaster_o *v14; // x8
  UserCommandCodeMaster_o *v15; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int v18; // w21
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
  const MethodInfo *v39; // x1
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x2
  __int64 v42; // x20
  BalanceConfig_c *v43; // x0
  __int64 v44; // x21
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
  System_String_o *v47; // x23
  Il2CppObject *v48; // x24
  Il2CppObject *v49; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v51; // x23
  Il2CppObject *v52; // x0
  UserPresentListViewManager_c *v53; // x0
  _BOOL4 v54; // w22
  UserPresentListViewManager_c *v55; // x0
  UserPresentListViewManager_c *v56; // x0
  _BOOL4 v57; // w28
  UserPresentListViewManager_c *v58; // x0
  ServantMaster_o *v59; // x23
  ItemMaster_o *v60; // x24
  CommandCodeMaster_o *v61; // x26
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v62; // x27
  const MethodInfo *v63; // x4
  const MethodInfo *v64; // x5
  unsigned __int64 v65; // x21
  __int64 v66; // x25
  int v67; // w24
  const MethodInfo *v68; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x21
  char v70; // w22
  char v71; // w23
  __int64 v72; // x25
  __int64 v73; // x8
  int v74; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v76; // x3
  UnityEngine_GameObject_o *v77; // x0
  const MethodInfo *v78; // x3
  UnityEngine_GameObject_o *v79; // x0
  const MethodInfo *v80; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  __int64 *v82; // x8
  UnityEngine_GameObject_o *v83; // x0
  const MethodInfo *v84; // x3
  UnityEngine_GameObject_o *v85; // x0
  const MethodInfo *v86; // x3
  UnityEngine_GameObject_o *v87; // x0
  const MethodInfo *v88; // x3
  __int64 v89; // x8
  const MethodInfo *v90; // x2
  _BOOL8 _29217932; // x0
  const MethodInfo *v92; // x1
  __int64 v93; // x0
  UserPresentBoxWindow_o *v94; // [xsp+0h] [xbp-C0h]
  int v95; // [xsp+8h] [xbp-B8h]
  ServantLimitMaster_o *servantLimitMaster; // [xsp+10h] [xbp-B0h]
  int v97; // [xsp+1Ch] [xbp-A4h] BYREF
  int v98; // [xsp+20h] [xbp-A0h] BYREF
  int v99; // [xsp+24h] [xbp-9Ch] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-98h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-94h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-90h] BYREF
  int v103; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-88h] BYREF
  int32_t v105; // [xsp+3Ch] [xbp-84h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-80h] BYREF
  int32_t v107; // [xsp+44h] [xbp-7Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_42AEFFD & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68526224);
    sub_B52984(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_10586/*"PRESENT_LIST_INFO"*/);
    sub_B52984(&StringLiteral_11113/*"RECEIVE_FILTER_NOTHING"*/);
    sub_B52984(&StringLiteral_11112/*"RECEIVE_ALL_DONE"*/);
    sub_B52984(&StringLiteral_3487/*"CURRENT_QP_UNIT"*/);
    sub_B52984(&StringLiteral_10587/*"PRESENT_LIST_NOTICE"*/);
    sub_B52984(&StringLiteral_3485/*"CURRENT_FRIEND_POINT_UNIT"*/);
    this = (UserPresentBoxWindow_o *)sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42AEFFD = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  entity = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &v2->fields.userServantMaster;
  v2->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_WarQuestSelectionMaster;
  sub_B52920(
    (BattleServantConfConponent_o *)&v2->fields.userServantMaster,
    MasterData_WarQuestSelectionMaster,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v14 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_160;
  v15 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v14, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !v15 )
    goto LABEL_160;
  Count = UserCommandCodeMaster__getCount(v15, 0LL);
  svtNumValLb = v2->fields.svtNumValLb;
  v18 = Count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
  v107 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v107);
  if ( !SelfUserGame )
    goto LABEL_160;
  v20 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44563852(v19, v20, v21, 0LL);
  if ( !svtNumValLb )
    goto LABEL_160;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0LL);
  svtEqNumValLb = v2->fields.svtEqNumValLb;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
  v105 = servantEquipSum[0];
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  Instance = (__int64)System_String__Format_44563852(v23, v24, v25, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_160;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0LL);
  commandCodeNumValLb = v2->fields.commandCodeNumValLb;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
  v103 = v18;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  if ( !byte_42AC2F5 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42AC2F5 = 1;
  }
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v29->static_fields->CommandCodeFrameMax;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax);
  Instance = (__int64)System_String__Format_44563852(v27, v28, v30, 0LL);
  if ( !commandCodeNumValLb )
    goto LABEL_160;
  UILabel__set_text(commandCodeNumValLb, (System_String_o *)Instance, 0LL);
  stoneNumValLb = v2->fields.stoneNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.stone, 0LL);
  if ( !stoneNumValLb )
    goto LABEL_160;
  UILabel__set_text(stoneNumValLb, (System_String_o *)Instance, 0LL);
  rpNumValLb = v2->fields.rpNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.rarePri, 0LL);
  if ( !rpNumValLb )
    goto LABEL_160;
  UILabel__set_text(rpNumValLb, (System_String_o *)Instance, 0LL);
  mpNumValLb = v2->fields.mpNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.mana, 0LL);
  if ( !mpNumValLb )
    goto LABEL_160;
  UILabel__set_text(mpNumValLb, (System_String_o *)Instance, 0LL);
  qpNumValLb = v2->fields.qpNumValLb;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3487/*"CURRENT_QP_UNIT"*/, 0LL);
  qp = SelfUserGame->fields.qp;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  Instance = (__int64)System_String__Format(v35, v36, 0LL);
  if ( !qpNumValLb )
    goto LABEL_160;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0LL);
  fpNumValLb = v2->fields.fpNumValLb;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3485/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, v39);
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint);
  Instance = (__int64)System_String__Format(v38, v40, 0LL);
  if ( !fpNumValLb )
    goto LABEL_160;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        v41);
  if ( !Instance )
    goto LABEL_160;
  v42 = Instance;
  v43 = BalanceConfig_TypeInfo;
  v44 = *(_QWORD *)(v42 + 24);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = v2->fields.presentInfoLabel;
  PresentBoxMax = v43->static_fields->PresentBoxMax;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10586/*"PRESENT_LIST_INFO"*/, 0LL);
  v99 = v44;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99);
  v98 = PresentBoxMax;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
  Instance = (__int64)System_String__Format_44563852(v47, v48, v49, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_160;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0LL);
  presentNoticeLabel = v2->fields.presentNoticeLabel;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10587/*"PRESENT_LIST_NOTICE"*/, 0LL);
  v97 = PresentBoxMax;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
  Instance = (__int64)System_String__Format(v51, v52, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_160;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0LL);
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  v53 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v53 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v53->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_160;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v54 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42AF02E )
    {
      sub_B52984(&UserPresentListViewManager_TypeInfo);
      byte_42AF02E = 1;
    }
    v55 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v55 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v55->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_160;
    v54 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  v56 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v56 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v56->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_160;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v57 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42AF02E )
    {
      sub_B52984(&UserPresentListViewManager_TypeInfo);
      byte_42AF02E = 1;
    }
    v58 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v58 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v58->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_160;
    v57 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( v57 || v54 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v59 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v60 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v94 = v2;
    servantLimitMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v61 = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v62 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B52A54(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v62,
      v44,
      (const MethodInfo_2FF0A10 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68526224);
    v95 = v44;
    if ( (int)v44 >= 1 )
    {
      v65 = 0LL;
      v66 = v42 + 32;
      do
      {
        if ( !v54 )
          goto LABEL_164;
        if ( v65 >= *(unsigned int *)(v42 + 24) )
          goto LABEL_161;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     v59,
                     v60,
                     *(UserPresentBoxEntity_o **)(v66 + 8 * v65),
                     v63);
        if ( (Instance & 1) != 0 )
        {
LABEL_164:
          if ( !v57 )
            goto LABEL_87;
          if ( v65 >= *(unsigned int *)(v42 + 24) )
            goto LABEL_161;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       servantLimitMaster,
                       v61,
                       *(UserPresentBoxEntity_o **)(v66 + 8 * v65),
                       v54,
                       v64);
          if ( (Instance & 1) != 0 )
          {
LABEL_87:
            if ( v65 >= *(unsigned int *)(v42 + 24) )
            {
LABEL_161:
              v93 = sub_B52A88(Instance);
              sub_B52A28(v93, 0LL);
            }
            if ( !v62 )
              goto LABEL_160;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v62,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v66 + 8 * v65),
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      while ( (__int64)++v65 < v95 );
    }
    if ( !v62
      || (Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v62,
                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__),
          LODWORD(v44) = v95,
          !Instance) )
    {
LABEL_160:
      sub_B52A5C(Instance, v5);
    }
    v67 = *(_DWORD *)(Instance + 24);
    v2 = v94;
    v42 = Instance;
  }
  else
  {
    v67 = v44;
  }
  UserPresentBoxWindow__SetFilterButtonImage(v2, v5);
  UserPresentBoxWindow__SetSelectCount(v2, 0, v68);
  if ( v67 < 1 )
  {
    Instance = (__int64)v2->fields.userPresentListViewManager;
    if ( Instance )
    {
      UserPresentListViewManager__DestroyList((UserPresentListViewManager_o *)Instance, 0LL);
      Instance = (__int64)v2->fields.allReceiveBtn;
      v2->fields.isReceiveFlg = 0;
      if ( Instance )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, 0, gameObject, v76);
        Instance = (__int64)v2->fields.itemReceiveBtn;
        v2->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v77, 0, v77, v78);
          Instance = (__int64)v2->fields.checkedItemBtn;
          v2->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v79, 0, v79, v80);
            nonPresentNoticeLabel = v2->fields.nonPresentNoticeLabel;
            if ( (_DWORD)v44 )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v82 = &StringLiteral_11113/*"RECEIVE_FILTER_NOTHING"*/;
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v82 = &StringLiteral_11112/*"RECEIVE_ALL_DONE"*/;
            }
            Instance = (__int64)LocalizationManager__Get((System_String_o *)*v82, 0LL);
            if ( nonPresentNoticeLabel )
            {
              UILabel__set_text(nonPresentNoticeLabel, (System_String_o *)Instance, 0LL);
              Instance = (__int64)v2->fields.nonPresentNoticeLabel;
              if ( Instance )
              {
                Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                  Instance = (__int64)v2->fields.userPresentListViewManager;
                  if ( Instance )
                  {
                    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      Instance = (__int64)v2->fields.sortBtn;
                      if ( Instance )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
                        Instance = (__int64)v2->fields.sortBtn;
                        if ( Instance )
                        {
                          v89 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v70 = 0;
  v71 = 0;
  v72 = 4LL;
  while ( 1 )
  {
    if ( (unsigned int)(v72 - 4) >= *(_DWORD *)(v42 + 24) )
      goto LABEL_161;
    v73 = *(_QWORD *)(v42 + 8 * v72);
    if ( !v73 )
      goto LABEL_160;
    v74 = *(_DWORD *)(v73 + 72);
    if ( v74 == 2 )
    {
      if ( !v69 )
        goto LABEL_160;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v69,
                   &entity,
                   *(_DWORD *)(v73 + 76),
                   (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_106;
      if ( !entity )
        goto LABEL_160;
      if ( entity->fields.bannerId != 24 )
      {
LABEL_106:
        v71 = 1;
        v70 = 1;
      }
      if ( (v71 & 1) == 0 )
        goto LABEL_111;
    }
    else
    {
      v70 |= v74 == 9;
      v71 = 1;
    }
    if ( (v70 & 1) != 0 )
      break;
LABEL_111:
    if ( (int)++v72 - 4 >= v67 )
      goto LABEL_122;
  }
  v71 = 1;
  v70 = 1;
LABEL_122:
  Instance = (__int64)v2->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)v2->fields.nonPresentNoticeLabel;
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)v2->fields.allReceiveBtn;
  v2->fields.isReceiveFlg = v71 & 1;
  if ( !Instance )
    goto LABEL_160;
  v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v83, v71 & 1, v83, v84);
  Instance = (__int64)v2->fields.itemReceiveBtn;
  v2->fields.isItemReceiveFlg = v70 & 1;
  if ( !Instance )
    goto LABEL_160;
  v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v85, v70 & 1, v85, v86);
  Instance = (__int64)v2->fields.checkedItemBtn;
  v2->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_160;
  v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v87, 0, v87, v88);
  if ( v2->fields.mIsScrlResetPosition )
    goto LABEL_132;
  Instance = (__int64)v2->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_160;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
  {
    scroll.fields.z = 0.0;
    offset = 0LL;
    *(_QWORD *)&scroll.fields.x = 0LL;
    Instance = (__int64)v2->fields.userPresentListViewManager;
    if ( Instance )
    {
      ListViewManager__GetScrollView((ListViewManager_o *)Instance, &scroll, &offset, 0LL);
      Instance = (__int64)v2->fields.userPresentListViewManager;
      if ( Instance )
      {
        UserPresentListViewManager__CreateList(
          (UserPresentListViewManager_o *)Instance,
          (UserPresentBoxEntity_array *)v42,
          0LL);
        Instance = (__int64)v2->fields.userPresentListViewManager;
        if ( Instance )
        {
          ListViewManager__SetScrollView((ListViewManager_o *)Instance, scroll, offset, 0LL);
          goto LABEL_134;
        }
      }
    }
    goto LABEL_160;
  }
LABEL_132:
  Instance = (__int64)v2->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_160;
  UserPresentListViewManager__CreateList(
    (UserPresentListViewManager_o *)Instance,
    (UserPresentBoxEntity_array *)v42,
    0LL);
LABEL_134:
  Instance = (__int64)v2->fields.userPresentListViewManager;
  v2->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_160;
  UserPresentListViewManager__SetMode_21410476((UserPresentListViewManager_o *)Instance, 1, 0LL);
  Instance = (__int64)v2->fields.sortBtn;
  if ( !Instance )
    goto LABEL_160;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
  Instance = (__int64)v2->fields.sortBtn;
  if ( !Instance )
    goto LABEL_160;
  v89 = *(_QWORD *)Instance;
LABEL_150:
  (*(void (**)(void))(v89 + 536))();
  ActionExtensions__Call(v2->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(v2, 1, v90);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29217932 = TutorialFlag__Get_29217932(201, 0LL);
  if ( !_29217932 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_29217932, v92);
  EventTutorialMaster__CheckTutorial(0, 78, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1

  if ( (byte_42AEFFB & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_callbackPresentList__);
    byte_42AEFFB = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v3,
                                                         (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B52A5C(0LL, v5);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
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

  if ( (byte_42AF020 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_42AF020 = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0LL);
  sortBtn = (UnityEngine_Component_o *)this->fields.allReceiveBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0LL);
  sortBtn = (UnityEngine_Component_o *)this->fields.itemReceiveBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0LL);
  sortBtn = (UnityEngine_Component_o *)this->fields.checkedItemBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B52A5C(sortBtn, is_enable);
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
  int myFsm; // w8
  UserPresentBoxWindow_o *v7; // x20
  int i; // w22
  UIWidget_o *v9; // x21
  int v10; // s0
  __int64 v14; // x0

  if ( (byte_42AEFFA & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_42AEFFA = 1;
  }
  if ( !btnObject
    || (this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                           btnObject,
                                           (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_15:
    sub_B52A5C(this, isVaild);
  }
  myFsm = (int)this->fields.myFsm;
  v7 = this;
  if ( myFsm >= 1 )
  {
    for ( i = 0; i < myFsm; ++i )
    {
      if ( i >= (unsigned int)myFsm )
      {
        v14 = sub_B52A88(this);
        sub_B52A28(v14, 0LL);
      }
      v9 = (UIWidget_o *)*((_QWORD *)&v7->fields.bgObject + i);
      if ( isVaild )
      {
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
        if ( !v9 )
          goto LABEL_15;
      }
      else
      {
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_gray(0LL);
        if ( !v9 )
          goto LABEL_15;
      }
      UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v10, 0LL);
      myFsm = (int)v7->fields.myFsm;
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
  int64_t checkedItemBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x3
  bool v14; // w1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v16; // x2
  UserPresentBoxEntity_array *VaildList; // x20
  ItemMaster_o *v18; // x24
  __int64 v19; // x21
  UserPresentListViewManager_c *v20; // x0
  _BOOL4 v21; // w27
  UserPresentListViewManager_c *v22; // x0
  UserPresentListViewManager_c *v23; // x0
  _BOOL4 v24; // w28
  UserPresentListViewManager_c *v25; // x0
  ServantMaster_o *v26; // x23
  CommandCodeMaster_o *v27; // x25
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v28; // x26
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x5
  unsigned __int64 v31; // x22
  UserPresentBoxEntity_o **m_Items; // x19
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x3
  int max_length; // w8
  unsigned int v36; // w19
  UserPresentBoxEntity_o *v37; // x8
  int32_t giftType; // w9
  __int64 v39; // x0
  UserPresentBoxWindow_o *v40; // [xsp+8h] [xbp-68h]
  ServantLimitMaster_o *servantLimitMaster; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42AF01C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68526224);
    sub_B52984(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF01C = 1;
  }
  entity = 0LL;
  checkedItemBtn = (int64_t)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = how;
  if ( !checkedItemBtn )
    goto LABEL_96;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, how, gameObject, v9);
  if ( !isSetOtherButtonsToo )
    return;
  if ( how )
  {
    checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( checkedItemBtn )
    {
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
      UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v10, 0, v10, v11);
      checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( checkedItemBtn )
      {
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
        v14 = 0;
        goto LABEL_94;
      }
    }
    goto LABEL_96;
  }
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)checkedItemBtn,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  checkedItemBtn = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_96;
  VaildList = UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, checkedItemBtn, v16);
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_96;
  checkedItemBtn = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)checkedItemBtn,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_96;
  v18 = (ItemMaster_o *)checkedItemBtn;
  v19 = *(_QWORD *)&VaildList->max_length;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  v20 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v20 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v20->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_96;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v21 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42AF02E )
    {
      sub_B52984(&UserPresentListViewManager_TypeInfo);
      byte_42AF02E = 1;
    }
    v22 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v22 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v22->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_96;
    v21 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  v23 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v23 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v23->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_96;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v24 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42AF02E )
    {
      sub_B52984(&UserPresentListViewManager_TypeInfo);
      byte_42AF02E = 1;
    }
    v25 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v25 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v25->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_96;
    v24 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( v21 || v24 )
  {
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v26 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)checkedItemBtn,
                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v40 = this;
    servantLimitMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)checkedItemBtn,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v27 = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)checkedItemBtn,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v28 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B52A54(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v28,
      v19,
      (const MethodInfo_2FF0A10 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68526224);
    if ( (int)v19 >= 1 )
    {
      v31 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v21 )
          goto LABEL_100;
        if ( v31 >= VaildList->max_length )
          goto LABEL_97;
        checkedItemBtn = UserPresentBoxWindow__CheckFilter(
                           (UserPresentBoxWindow_o *)checkedItemBtn,
                           v26,
                           v18,
                           m_Items[v31],
                           v29);
        if ( (checkedItemBtn & 1) != 0 )
        {
LABEL_100:
          if ( !v24 )
            goto LABEL_70;
          if ( v31 >= VaildList->max_length )
            goto LABEL_97;
          checkedItemBtn = UserPresentBoxWindow__CheckRarityFilter(
                             (UserPresentBoxWindow_o *)checkedItemBtn,
                             servantLimitMaster,
                             v27,
                             m_Items[v31],
                             v21,
                             v30);
          if ( (checkedItemBtn & 1) != 0 )
          {
LABEL_70:
            if ( v31 >= VaildList->max_length )
            {
LABEL_97:
              v39 = sub_B52A88(checkedItemBtn);
              sub_B52A28(v39, 0LL);
            }
            if ( !v28 )
              goto LABEL_96;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v28,
              (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v31],
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      while ( (__int64)++v31 < (int)v19 );
    }
    if ( !v28
      || (checkedItemBtn = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_96:
      sub_B52A5C(checkedItemBtn, how);
    }
    LODWORD(v19) = *(_DWORD *)(checkedItemBtn + 24);
    this = v40;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
  }
  if ( (int)v19 < 1 )
    return;
  checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_96;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v33, 1, v33, v34);
  max_length = VaildList->max_length;
  if ( max_length < 1 )
    return;
  v36 = 0;
  while ( 1 )
  {
    if ( v36 >= max_length )
      goto LABEL_97;
    v37 = VaildList->m_Items[v36];
    if ( !v37 )
      goto LABEL_96;
    giftType = v37->fields.giftType;
    if ( giftType == 2 )
      break;
    if ( giftType == 9 )
      goto LABEL_92;
LABEL_90:
    max_length = VaildList->max_length;
    if ( (int)++v36 >= max_length )
      return;
  }
  if ( !v18 )
    goto LABEL_96;
  checkedItemBtn = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)v18,
                     &entity,
                     v37->fields.objectId,
                     (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (checkedItemBtn & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_96;
    if ( entity->fields.bannerId == 24 )
      goto LABEL_90;
  }
LABEL_92:
  checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_96;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  v14 = 1;
LABEL_94:
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v12, v14, v12, v13);
}


void __fastcall UserPresentBoxWindow__SetFilterButtonImage(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UISprite_o *filterBtnSp; // x19
  UserPresentListViewManager_c *v4; // x0
  ListViewSort_o *sortInfo; // x0
  System_String_o **v6; // x22
  UserPresentListViewManager_c *v7; // x0

  if ( (byte_42AEFFE & 1) == 0 )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_17111/*"btn_filter_on"*/);
    sub_B52984(&StringLiteral_17110/*"btn_filter"*/);
    byte_42AEFFE = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  v4 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v4 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v4->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_26;
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0LL);
  v6 = (System_String_o **)&StringLiteral_17111/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_24;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42AF02E )
  {
    sub_B52984(&UserPresentListViewManager_TypeInfo);
    byte_42AF02E = 1;
  }
  v7 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v7 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v7->static_fields->sortInfo;
  if ( !sortInfo )
LABEL_26:
    sub_B52A5C(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0LL);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v6 = (System_String_o **)&StringLiteral_17110/*"btn_filter"*/;
LABEL_24:
  if ( !filterBtnSp )
    goto LABEL_26;
  UISprite__set_spriteName(filterBtnSp, *v6, 0LL);
}


void __fastcall UserPresentBoxWindow__SetPresentHistoryBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *GameObject; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v7; // x1

  if ( (byte_42AF021 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10836/*"PresentHistoryButton"*/);
    byte_42AF021 = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10836/*"PresentHistoryButton"*/,
                                         0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(GameObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !GameObject
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)GameObject,
                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_B52A5C(Component_srcLineSprite, v7);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_srcLineSprite, is_enable, 0LL);
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
  sub_B52920(
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
  UILabel_o *presentSelectNumLabel; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  UIWidget_o *v9; // x20
  int32_t v10; // w21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = selected;
  if ( (byte_42AF022 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10593/*"PRESENT_SELECT_INFO"*/);
    byte_42AF022 = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10593/*"PRESENT_SELECT_INFO"*/, 0LL);
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v16, 0LL);
  v7 = System_String__Format_44563852(v5, v6, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
  if ( !presentSelectNumLabel )
    goto LABEL_16;
  UILabel__set_text(presentSelectNumLabel, v7, 0LL);
  v9 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v10 = v16;
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v10 >= *(_DWORD *)(*(_QWORD *)&v7[7].fields + 116LL) )
  {
    presentNoticeLabel = this->fields.presentNoticeLabel;
    if ( presentNoticeLabel )
    {
      r = presentNoticeLabel->fields.mColor.fields.r;
      g = presentNoticeLabel->fields.mColor.fields.g;
      b = presentNoticeLabel->fields.mColor.fields.b;
      a = presentNoticeLabel->fields.mColor.fields.a;
      if ( v9 )
        goto LABEL_15;
    }
LABEL_16:
    sub_B52A5C(v7, v8);
  }
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  if ( !v9 )
    goto LABEL_16;
LABEL_15:
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v24; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v27; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v28; // x22
  const MethodInfo *v29; // x3
  __int64 v30; // x0

  if ( (byte_42AF007 & 1) == 0 )
  {
    sub_B52984(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
    byte_42AF007 = 1;
  }
  v7 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass85_0___ctor((UserPresentBoxWindow___c__DisplayClass85_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = idx;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v24 = *(int *)(v7 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v24 < max_length )
    {
      if ( (unsigned int)v24 >= max_length )
      {
        v30 = sub_B52A88(v22);
        sub_B52A28(v30, 0LL);
      }
      evpDialog = this->fields.evpDialog;
      v27 = evPointRewardList->m_Items[v24];
      v28 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_B52A54(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v28,
        (Il2CppObject *)v7,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        0LL);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v27, v28, v29);
        return;
      }
LABEL_10:
      sub_B52A5C(v8, v9);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  System_Action_o *v25; // x22

  if ( (byte_42AF004 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
    sub_B52984(&StringLiteral_10580/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/);
    sub_B52984(&StringLiteral_27/*"\n\n"*/);
    byte_42AF004 = 1;
  }
  v5 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass82_0___ctor((UserPresentBoxWindow___c__DisplayClass82_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields.m_stringLength >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10580/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
    v24 = System_String__Concat_44570600(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_27/*"\n\n"*/, v23, 0LL);
    v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v5,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog(Instance, 0LL, v24, v25, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
      return;
    }
LABEL_13:
    sub_B52A5C(v6, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
}


void __fastcall UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_42AF008 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AF008 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( v4 )
  {
    if ( !mInstance )
      sub_B52A5C(v4, v5);
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
  const MethodInfo *v9; // x1

  if ( (byte_42AF02B & 1) == 0 )
  {
    sub_B52984(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__);
    sub_B52984(&StringLiteral_12328/*"SHOW_EFFECT"*/);
    byte_42AF02B = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12328/*"SHOW_EFFECT"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B52A5C(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v8 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B52A54(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      0LL);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v8, 0LL);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v9);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v5);
  }
}


void __fastcall UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_B52A5C(0LL, method);
  UserPresentListViewManager__SetMode_21410476(userPresentListViewManager, 1, 0LL);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_B52A5C(0LL, result);
  UserPresentHistoryDialog__Open(presentHistoryDialog, 0LL);
}


void __fastcall UserPresentBoxWindow___Open_b__69_0(
        UserPresentBoxWindow_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_42AF029 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42AF029 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_B52A5C(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_42AF02A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF02A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__SetConnect(Instance, 0, 0LL);
  UserPresentBoxWindow__ReDisp(this, v5);
}


void __fastcall UserPresentBoxWindow___showEffect_b__88_0(
        UserPresentBoxWindow_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_42AF02C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_EndEffect__);
    byte_42AF02C = 1;
  }
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  const MethodInfo *v7; // x1
  System_Action_Action__array *v8; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ActionChain_o *v23; // x21
  System_Action_array *v24; // x20
  System_Action_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  __int64 v33; // x0

  if ( (byte_42AF02D & 1) == 0 )
  {
    sub_B52984(&ActionChain_TypeInfo);
    sub_B52984(&System_Action___TypeInfo);
    sub_B52984(&System_Action_Action____TypeInfo);
    sub_B52984(&Method_System_Action_Action___ctor__);
    sub_B52984(&System_Action_Action__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__);
    sub_B52984(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__);
    sub_B52984(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__);
    sub_B52984(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__);
    byte_42AF02D = 1;
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
    v6 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B52A54(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__,
      0LL);
    if ( userPresentListViewManager )
    {
      UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v6, 0LL);
      UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v7);
      return;
    }
LABEL_26:
    sub_B52A5C(touchBlocker, v3);
  }
  v8 = (System_Action_Action__array *)sub_B5299C(System_Action_Action____TypeInfo, 2LL);
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( !v8 )
    goto LABEL_26;
  if ( v9 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B52A44(v9, v8->obj.klass->_1.element_class);
    if ( !touchBlocker )
      goto LABEL_28;
  }
  if ( !v8->max_length )
    goto LABEL_27;
  v8->m_Items[0] = (System_Action_Action__o *)v9;
  sub_B52920((BattleServantConfConponent_o *)v8->m_Items, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v16,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v16 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B52A44(v16, v8->obj.klass->_1.element_class);
    if ( !touchBlocker )
      goto LABEL_28;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_27;
  v8->m_Items[1] = (System_Action_Action__o *)v16;
  sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[1], (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (ActionChain_o *)sub_B52A54(ActionChain_TypeInfo);
  ActionChain___ctor_21209932(v23, v8, 0LL);
  v24 = (System_Action_array *)sub_B5299C(System_Action___TypeInfo, 1LL);
  v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
  if ( !v24 )
    goto LABEL_26;
  if ( v25 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B52A44(v25, v24->obj.klass->_1.element_class);
    if ( !touchBlocker )
    {
LABEL_28:
      v33 = sub_B52A7C();
      sub_B52A28(v33, 0LL);
    }
  }
  if ( !v24->max_length )
  {
LABEL_27:
    v32 = sub_B52A88(touchBlocker);
    sub_B52A28(v32, 0LL);
  }
  v24->m_Items[0] = v25;
  sub_B52920((BattleServantConfConponent_o *)v24->m_Items, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
  if ( !v23 )
    goto LABEL_26;
  touchBlocker = (UnityEngine_GameObject_o *)ChainableActionBase__Final((ChainableActionBase_o *)v23, v24, 0LL);
  if ( !touchBlocker )
    goto LABEL_26;
  ChainableActionBase__Execute((ChainableActionBase_o *)touchBlocker, 0LL);
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_1(
        UserPresentBoxWindow_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ServantCoinConfirmDialog_o *servantCoinConfirmDialog; // x0

  servantCoinConfirmDialog = this->fields.servantCoinConfirmDialog;
  if ( !servantCoinConfirmDialog )
    sub_B52A5C(0LL, action);
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
    sub_B52A5C(0LL, action);
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
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_42AEFFC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__);
    byte_42AEFFC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  CommonUI__SetConnect(Instance, 1, 0LL);
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_List_int__o *befSvtList; // x0

  if ( (byte_42AF012 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    byte_42AF012 = 1;
  }
  if ( isNew )
  {
    v9 = UserPresentBoxWindow__checkOverlapSvt(this, svtId, (const MethodInfo *)isNew);
    v11 = !v9;
    if ( !v9 && isAddSvt )
    {
      befSvtList = this->fields.befSvtList;
      if ( !befSvtList )
        sub_B52A5C(0LL, v10);
      System_Collections_Generic_List_int___Add(
        befSvtList,
        svtId,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
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
  UserPresentBoxWindow___c__DisplayClass99_0_o *v9; // x21
  System_Collections_Generic_List_long__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v13; // x23
  unsigned int Index; // w8
  _BOOL4 v15; // w0

  if ( (byte_42AF014 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_B52984(&Method_System_Predicate_long___ctor__);
    sub_B52984(&System_Predicate_long__TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
    byte_42AF014 = 1;
  }
  v9 = (UserPresentBoxWindow___c__DisplayClass99_0_o *)sub_B52A54(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass99_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  v9->fields.commandCodeId = commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v15) = 0;
    return v15;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v13 = (System_Predicate_long__o *)sub_B52A54(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    (const MethodInfo_28D1D20 *)Method_System_Predicate_long___ctor__);
  if ( !befCommandCodeList )
    goto LABEL_12;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v13,
            (const MethodInfo_2FE2840 *)Method_System_Collections_Generic_List_long__FindIndex__);
  v15 = Index >> 31;
  if ( (Index & 0x80000000) != 0 && isAddCommandCode )
  {
    v10 = this->fields.befCommandCodeList;
    if ( v10 )
    {
      System_Collections_Generic_List_long___Add(
        v10,
        v9->fields.commandCodeId,
        (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      LOBYTE(v15) = 1;
      return v15;
    }
LABEL_12:
    sub_B52A5C(v10, v11);
  }
  return v15;
}


void __fastcall UserPresentBoxWindow__checkNextSvt(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UserPresentBoxWindow_o *v8; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v10; // x8

  v8 = this;
  if ( (byte_42AF011 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_B52984(&StringLiteral_9356/*"NEXT_SVT"*/);
    this = (UserPresentBoxWindow_o *)sub_B52984(&StringLiteral_6393/*"FINAL_SVT"*/);
    byte_42AF011 = 1;
  }
  receiveList = v8->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v8->fields.receiveIdx >= receiveList->fields._size )
  {
    v8->fields.receiveList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v8->fields.receiveList, 0LL, v2, v3, v4, v5, v6, v7);
    this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
    v8->fields.receiveIdx = 0;
    if ( this )
    {
      v10 = &StringLiteral_6393/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B52A5C(this, method);
  }
  this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v10 = &StringLiteral_9356/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkOverlapSvt(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *v4; // x20
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v7; // w22

  v4 = this;
  if ( (byte_42AF013 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (UserPresentBoxWindow_o *)sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_42AF013 = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B52A5C(this, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( befSvtList->fields._items->m_Items[v7 + 1] == svtId )
      return 1;
    if ( (int)++v7 >= size )
      return 0;
    befSvtList = v4->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v21; // x20

  if ( (byte_42AF010 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
    byte_42AF010 = 1;
  }
  v5 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass95_0___ctor((UserPresentBoxWindow___c__DisplayClass95_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)end_act, v14, v15, v16, v17, v18, v19);
  svtGetAction = this->fields.svtGetAction;
  v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v5, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtGetAction )
LABEL_9:
    sub_B52A5C(v6, v7);
  ServantRewardAction__Play(svtGetAction, v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_42AF015 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    this = (UserPresentBoxWindow_o *)sub_B52984(&StringLiteral_9356/*"NEXT_SVT"*/);
    byte_42AF015 = 1;
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
    sub_B52A5C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9356/*"NEXT_SVT"*/, 0LL);
}


System_String_o *__fastcall UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  System_String_o *v3; // x0
  __int64 v4; // x1
  int32_t m_stringLength; // w20
  Il2CppObject *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AF023 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&StringLiteral_23890/*"}"*/);
    sub_B52984(&StringLiteral_23674/*"{0,"*/);
    byte_42AF023 = 1;
  }
  v10 = 0;
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  v3 = System_Int32__ToString((unsigned int)v2->static_fields + 112, 0LL);
  if ( !v3
    || (m_stringLength = v3->fields.m_stringLength,
        (v3 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 116, 0LL)) == 0LL) )
  {
    sub_B52A5C(v3, v4);
  }
  v6 = (Il2CppObject *)v3;
  v10 = v3->fields.m_stringLength + 2 * (m_stringLength - v3->fields.m_stringLength);
  v7 = System_Int32__ToString((int32_t)&v10, 0LL);
  v8 = System_String__Concat_44570600(
         (System_String_o *)StringLiteral_23674/*"{0,"*/,
         v7,
         (System_String_o *)StringLiteral_23890/*"}"*/,
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
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v12; // x3
  int v13; // w8
  System_Collections_Generic_IEnumerable_T__o *v14; // x23
  unsigned int v15; // w9
  __int64 v16; // x10
  int v17; // w10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v18; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x23
  const MethodInfo *v26; // x2
  __int64 v27; // x0

  if ( (byte_42AF001 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68526216);
    sub_B52984(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_B52984(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow_CallbackReceiveRequest__);
    byte_42AF001 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Instance = (int64_t)UserPresentBoxMaster__getVaildList_23264092(
                        MasterData_WarQuestSelectionMaster,
                        Instance,
                        presentIds,
                        v12);
  if ( !Instance )
    goto LABEL_28;
  v13 = *(_DWORD *)(Instance + 24);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v27 = sub_B52A88(Instance);
        sub_B52A28(v27, 0LL);
      }
      v16 = *(_QWORD *)(Instance + 8LL * (int)v15 + 32);
      if ( !v16 )
        goto LABEL_28;
      v17 = *(_DWORD *)(v16 + 72);
      if ( v17 == 11 || v17 == 1 )
        break;
      if ( (int)++v15 >= v13 )
        goto LABEL_22;
    }
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_22;
    }
LABEL_28:
    sub_B52A5C(Instance, v10);
  }
LABEL_22:
  v18 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v18,
    v14,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68526216);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v18;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.receiveList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.receiveIdx = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                        v25,
                        (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_28;
  UserPresentReceiveRequest__beginRequest(
    (UserPresentReceiveRequest_o *)Instance,
    presentIds,
    selectIdx,
    selectNum,
    0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v26);
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
      sub_B52A5C(userPresentListViewManager, method);
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
  UserPresentBoxWindow_o *v2; // x19
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x20
  __int64 receiveIdx; // x21
  int size; // w8
  UserPresentBoxEntity_o *v6; // x20
  int32_t giftType; // w21
  int v8; // w22
  GetSvts_array *getSvtList; // x22
  struct System_String_o *v10; // x23
  __int64 v11; // x24
  int32_t v12; // w23
  _BOOL4 v13; // w23
  bool v14; // w22
  const MethodInfo *v15; // x4
  _BOOL4 v16; // w22
  GetCommandCodes_array *getCommandCodeList; // x22
  struct System_String_o *age; // x23
  __int64 v19; // x24
  int32_t v20; // w23
  const MethodInfo *v21; // x4
  int64_t userCommandCodeId; // x22
  bool isNew; // w23
  bool Eff; // w0
  const MethodInfo *v25; // x7
  int32_t num; // w5
  bool v27; // w3
  UserPresentBoxWindow_o *v28; // x0
  int64_t v29; // x1
  bool v30; // w2
  int32_t v31; // w4
  int32_t presentDialogMessageId; // w6
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
  bool IsOrganization; // w0
  int64_t userSvtId; // x22
  _BOOL4 v46; // w23
  int64_t v47; // x21
  CommonUI_o *v48; // x20
  CombineResultEffectComponent_ClickDelegate_o *v49; // x22
  ServantCostumeEntity_o *v50; // [xsp+8h] [xbp-58h] BYREF
  GetCommandCodes_o *v51; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v52; // [xsp+18h] [xbp-48h] BYREF
  GetSvts_o *data; // [xsp+20h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v2 = this;
  if ( (byte_42AF009 & 1) == 0 )
  {
    sub_B52984(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__);
    sub_B52984(&MissionInfoMaker_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (UserPresentBoxWindow_o *)sub_B52984(&Method_UserPresentBoxWindow__showEffect_b__88_0__);
    byte_42AF009 = 1;
  }
  data = 0LL;
  entity = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  receiveList = v2->fields.receiveList;
  if ( !receiveList )
    goto LABEL_102;
  receiveIdx = v2->fields.receiveIdx;
  size = receiveList->fields._size;
  if ( (int)receiveIdx >= size )
    goto LABEL_93;
  if ( size <= (unsigned int)receiveIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = receiveList->fields._items->m_Items[receiveIdx];
  if ( !v6 )
    goto LABEL_102;
  giftType = v6->fields.giftType;
  if ( !Gift__IsServant(giftType, 0LL) )
  {
    if ( Gift__IsCommandCode(giftType, 0LL) )
    {
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                         &v52,
                                         v6->fields.objectId,
                                         (const MethodInfo_23E2334 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_93;
      if ( !v52 )
        goto LABEL_102;
      getCommandCodeList = v2->fields.getCommandCodeList;
      v19 = *(_QWORD *)&v52->fields.id;
      age = v52->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v56.fields.currentCryptoKey = v19;
      *(_QWORD *)&v56.fields.fakeValue = age;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v56, 0LL);
      if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      if ( !MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v51, v20, 0LL) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v2->fields.effectPanel;
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_102;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        this = (UserPresentBoxWindow_o *)v2->fields.effectPanel;
        if ( !this )
          goto LABEL_102;
        this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      this = (UserPresentBoxWindow_o *)v51;
      if ( !v51 )
        goto LABEL_102;
      v2->fields.gotServant = v51->fields.isNew;
      this = (UserPresentBoxWindow_o *)GetCommandCodes__isDoGetEff((GetCommandCodes_o *)this, 0LL);
      if ( !v51 )
        goto LABEL_102;
      if ( !UserPresentBoxWindow__checkNewCommandCode(
              v2,
              v51->fields.userCommandCodeId,
              (unsigned __int8)this & 1,
              1,
              v21) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v51;
      if ( !v51 )
        goto LABEL_102;
      userCommandCodeId = v51->fields.userCommandCodeId;
      isNew = v51->fields.isNew;
      Eff = GetCommandCodes__isDoGetEff(v51, 0LL);
      num = v6->fields.num;
      v27 = Eff;
      v28 = v2;
      v29 = userCommandCodeId;
      v30 = isNew;
      v31 = giftType;
      presentDialogMessageId = 0;
LABEL_98:
      UserPresentBoxWindow__startRewardGetEffect(v28, v29, v30, v27, v31, num, presentDialogMessageId, v25);
      return;
    }
    if ( Gift__IsCostumeRelease(giftType, 0LL) )
    {
      objectId = v6->fields.objectId;
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !this )
        goto LABEL_102;
      if ( !ServantCostumeMaster__TryGetEntity(
              (ServantCostumeMaster_o *)this,
              &v50,
              objectId / 100,
              objectId % 100,
              0LL) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v2->fields.effectPanel;
      if ( this )
      {
        this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (UserPresentBoxWindow_o *)v2->fields.effectPanel;
            if ( !this )
              goto LABEL_102;
            this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_102;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          }
          if ( v50 )
          {
            UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(v2, v50->fields.name, v34);
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
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v6, v36);
        UserPresentBoxWindow__startRewardEquipGetEffect(v2, QuestRewardInfo, v38);
        return;
      }
      if ( !Gift__IsItem(giftType, 0LL) )
        goto LABEL_93;
      v39 = v6->fields.objectId;
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_102;
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)this, v39, 0LL) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v2->fields.effectPanel;
      if ( this )
      {
        this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          if ( !activeSelf )
          {
            this = (UserPresentBoxWindow_o *)v2->fields.effectPanel;
            if ( !this )
              goto LABEL_102;
            this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_102;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          }
          v42 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v6, v41);
          UserPresentBoxWindow__startRewardSpecialItemGetEffect(v2, v42, v43);
          return;
        }
      }
    }
LABEL_102:
    sub_B52A5C(this, method);
  }
  this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     &entity,
                                     v6->fields.objectId,
                                     (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_93;
  if ( !entity )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
  if ( !entity )
    goto LABEL_102;
  v8 = (int)this;
  this = (UserPresentBoxWindow_o *)SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL);
  if ( ((v8 | (unsigned int)this) & 1) != 0 )
    goto LABEL_93;
  if ( !entity )
    goto LABEL_102;
  getSvtList = v2->fields.getSvtList;
  v11 = *(_QWORD *)&entity->fields.id;
  v10 = entity->fields.age;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v11;
  *(_QWORD *)&v55.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v55, 0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  if ( !MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v12, giftType, 0LL) )
    goto LABEL_93;
  this = (UserPresentBoxWindow_o *)v2->fields.effectPanel;
  if ( !this )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_102;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (UserPresentBoxWindow_o *)v2->fields.effectPanel;
    if ( !this )
      goto LABEL_102;
    this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  this = (UserPresentBoxWindow_o *)data;
  if ( !data )
    goto LABEL_102;
  v13 = data->fields.isNew;
  v14 = GetSvts__isDoGetEff(data, 0LL);
  this = (UserPresentBoxWindow_o *)Gift__IsEventSvtJoin(giftType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = 0;
  }
  else
  {
    if ( !data )
      goto LABEL_102;
    v16 = !UserPresentBoxWindow__checkNew(v2, data->fields.userSvtId, v14, 1, v15);
  }
  this = (UserPresentBoxWindow_o *)entity;
  if ( !entity )
    goto LABEL_102;
  IsOrganization = ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL);
  if ( v13 && IsOrganization )
    v2->fields.gotServant = 1;
  this = (UserPresentBoxWindow_o *)entity;
  if ( !entity )
    goto LABEL_102;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0LL) )
  {
    this = (UserPresentBoxWindow_o *)entity;
    if ( !entity )
      goto LABEL_102;
    if ( ((v16 | ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL)) & 1) == 0 )
    {
      this = (UserPresentBoxWindow_o *)data;
      if ( !data )
        goto LABEL_102;
      userSvtId = data->fields.userSvtId;
      v46 = data->fields.isNew;
      this = (UserPresentBoxWindow_o *)GetSvts__isDoGetEff(data, 0LL);
      if ( !data )
        goto LABEL_102;
      num = v6->fields.num;
      presentDialogMessageId = data->fields.presentDialogMessageId;
      v30 = v46;
      v27 = (unsigned __int8)this & 1;
      v28 = v2;
      v29 = userSvtId;
      v31 = giftType;
      goto LABEL_98;
    }
  }
  this = (UserPresentBoxWindow_o *)entity;
  if ( !entity )
    goto LABEL_102;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0LL) )
  {
    this = (UserPresentBoxWindow_o *)entity;
    if ( entity )
    {
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( data )
      {
        v47 = data->fields.userSvtId;
        v48 = (CommonUI_o *)this;
        v49 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B52A54(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v49,
          (Il2CppObject *)v2,
          Method_UserPresentBoxWindow__showEffect_b__88_0__,
          0LL);
        if ( v48 )
        {
          CommonUI__OpenSecretTreasureDeviceForSvtGet(v48, v47, v49, 0LL);
          return;
        }
      }
    }
    goto LABEL_102;
  }
LABEL_93:
  UserPresentBoxWindow__EndEffect(v2, method);
}


void __fastcall UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21

  if ( (byte_42AF016 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__);
    byte_42AF016 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    goto LABEL_12;
  MissionNotifyManager__CancelPause(v3, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_B52A5C(v3, v4);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v8, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_42AF00B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
    byte_42AF00B = 1;
  }
  v5 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass90_0___ctor((UserPresentBoxWindow___c__DisplayClass90_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = name;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)name, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B52A5C(touchBlocker, v7);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v23, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_42AF00C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
    byte_42AF00C = 1;
  }
  v5 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass91_0___ctor((UserPresentBoxWindow___c__DisplayClass91_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)questRewardInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B52A5C(touchBlocker, v7);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v23, 0LL);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UserServantEntity_o *v24; // x21
  EventServantEntity_o *EventServant_21522844; // x0
  EventServantEntity_o *v26; // x22
  __int64 v27; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **JoinMessage; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 *v41; // x8
  CommonUI_o *v42; // x19
  AvalonSceneManager_c *v43; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21
  System_Int32_array **Message; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  CommonUI_o *v60; // x20
  AvalonSceneManager_c *v61; // x8
  float v62; // s8
  System_Action_o *v63; // x21

  if ( (byte_42AF00A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
    sub_B52984(&StringLiteral_12527/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_B52984(&StringLiteral_12528/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/);
    byte_42AF00A = 1;
  }
  v15 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_0___ctor((UserPresentBoxWindow___c__DisplayClass89_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_34;
  *(_QWORD *)(v15 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = giftType;
  *(_QWORD *)(v15 + 32) = userSvtID;
  *(_DWORD *)(v15 + 44) = num;
  *(_DWORD *)(v15 + 52) = presentDialogMessageId;
  *(_BYTE *)(v15 + 40) = isDoEffect;
  *(_BYTE *)(v15 + 48) = isNew;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteDialogKey(0LL);
  if ( !Gift__IsEventSvtJoin(*(_DWORD *)(v15 + 24), 0LL) )
    goto LABEL_19;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                *(_QWORD *)(v15 + 32),
                                (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v24 = (UserServantEntity_o *)Instance;
  EventServant_21522844 = UserServantEntity__getEventServant_21522844((UserServantEntity_o *)Instance, 1, 0LL);
  if ( !EventServant_21522844 || (v26 = EventServant_21522844, EventServant_21522844->fields.type != 2) )
  {
LABEL_19:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v42 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v43 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
      v45 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v45,
        (Il2CppObject *)v15,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v42 )
      {
        CommonUI__maskFadeout(v42, 1, DEFAULT_FADE_TIME, v45, 0LL);
        return;
      }
    }
LABEL_34:
    sub_B52A5C(Instance, v17);
  }
  v27 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_1___ctor((UserPresentBoxWindow___c__DisplayClass89_1_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_34;
  *(_QWORD *)(v27 + 32) = v15;
  sub_B52920((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)v15, v28, v29, v30, v31, v32, v33);
  if ( UserServantEntity__HasStatus(v24, 64, 0LL) )
  {
    JoinMessage = (System_Int32_array **)EventServantEntity__GetJoinMessage(v26, 0LL);
    *(_QWORD *)(v27 + 24) = JoinMessage;
    sub_B52920((BattleServantConfConponent_o *)(v27 + 24), JoinMessage, v35, v36, v37, v38, v39, v40);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = &StringLiteral_12528/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = (System_Int32_array **)EventServantEntity__GetGetMessage(v26, 0LL);
    *(_QWORD *)(v27 + 24) = Message;
    sub_B52920((BattleServantConfConponent_o *)(v27 + 24), Message, v47, v48, v49, v50, v51, v52);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = &StringLiteral_12527/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v53 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v41, 0LL);
  *(_QWORD *)(v27 + 16) = v53;
  sub_B52920((BattleServantConfConponent_o *)(v27 + 16), v53, v54, v55, v56, v57, v58, v59);
  v60 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v61 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v61 = AvalonSceneManager_TypeInfo;
  }
  v62 = v61->static_fields->DEFAULT_FADE_TIME;
  v63 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v27,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v60 )
    goto LABEL_34;
  CommonUI__maskFadein(v60, v62, v63, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_42AF00D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__);
    sub_B52984(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
    byte_42AF00D = 1;
  }
  v5 = sub_B52A54(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass92_0___ctor((UserPresentBoxWindow___c__DisplayClass92_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = questRewardInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)questRewardInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B52A5C(touchBlocker, v7);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v23, 0LL);
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
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_42AE5A5 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AE5A5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow_ClickDelegate__Invoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  UserPresentBoxWindow_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  UserPresentBoxWindow_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  UserPresentBoxWindow_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (UserPresentBoxWindow_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, hasGetServant, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(hasGetServant, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, hasGetServant, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, hasGetServant, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            hasGetServant,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, hasGetServant, v22);
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
    sub_B52A5C(0LL, method);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UserPresentBoxWindow_o *v12; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_Int32_array **v14; // x1

  if ( (byte_42AE595 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE595 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.userPresentListViewManager) == 0LL
    || (UserPresentListViewManager__resetCheckStatus((UserPresentListViewManager_o *)Instance, 0LL),
        (v12 = this->fields.__4__this) == 0LL)
    || (userPresentListViewManager = v12->fields.userPresentListViewManager) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  userPresentListViewManager->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&userPresentListViewManager->fields._expiredPresents_k__BackingField,
    v14,
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
  struct UserPresentBoxWindow_o *_4__this; // x8
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v3 = this;
  if ( (byte_42AE596 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__);
    byte_42AE596 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v3->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !evpDialog )
LABEL_8:
    sub_B52A5C(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_23262848(evpDialog, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxWindow__UpdateEventInfos(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B52A5C(_4__this, method);
  UserPresentBoxWindow__ShowEventPointReward(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42AE598 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__);
    byte_42AE598 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v6, _9__3, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AE597 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE597 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__3(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserServantEntity_o *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  UserPresentBoxWindow___c__DisplayClass89_0_Fields *p_fields; // x25
  UserServantEntity_o *v8; // x20
  SummonAssetManager_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w21
  ServantRewardAction_o *svtGetAction; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t v20; // w0
  __int128 v21; // q1
  int32_t v22; // w23
  int64_t v23; // x0
  __int64 v24; // x8
  int64_t v25; // x20
  struct ServantRewardAction_o *v26; // x8
  UserServantEntity_o *v27; // x0
  struct UserPresentBoxWindow_o *v28; // x22
  UserServantEntity_o *v29; // x21
  SummonAssetManager_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserPresentBoxWindow_o *v37; // x8
  ServantRewardAction_o *v38; // x20
  __int128 v39; // q1
  bool isNew; // w2
  int64_t v41; // x1
  bool v42; // w3
  int32_t v43; // w4
  ServantRewardAction_o *v44; // x0
  ServantRewardAction_o *v45; // x21
  __int64 v46; // x22
  __int64 v47; // x23
  int32_t v48; // w0
  __int128 v49; // q1
  int32_t v50; // w22
  int64_t v51; // x0
  __int64 v52; // x8
  int64_t v53; // x20
  __int128 v54; // q1
  Il2CppObject *v55; // x19
  System_Action_o *v56; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42AE599 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow_EndEffect__);
    byte_42AE599 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_62;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_fields = &this->fields;
    _4__this = this->fields.__4__this;
    v8 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !this->fields.__4__this )
      goto LABEL_62;
    v9 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)this->fields.__4__this->fields.effectPanel;
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v9 )
      goto LABEL_62;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v9, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_62;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_B52920(
      (BattleServantConfConponent_o *)&_4__this->fields.svtGetAction,
      (System_Int32_array **)Instance,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( this->fields.isDoEffect )
    {
      if ( v8 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_21522844(v8, 1, 0LL);
        v16 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v16 = 6;
          else
            v16 = 14;
        }
        if ( p_fields->__4__this )
        {
          svtGetAction = p_fields->__4__this->fields.svtGetAction;
          v19 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
          v18 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v62.fields.currentCryptoKey = v19;
          *(_QWORD *)&v62.fields.fakeValue = v18;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v62, 0LL);
          v21 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
          v22 = v20;
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v61.fields.fakeValue = v21;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v60 = v61;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v60, 0LL);
          v24 = *(_QWORD *)&v8->fields.limitCount.fields.currentCryptoKey;
          *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&v8->fields.limitCount.fields.fakeValue;
          v25 = v23;
          *(_QWORD *)&v63.fields.currentCryptoKey = v24;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v63, 0LL);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v22,
              v25,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v16,
              0LL);
            if ( !this->fields.isNew )
              goto LABEL_60;
            if ( p_fields->__4__this )
            {
              v26 = p_fields->__4__this->fields.svtGetAction;
              if ( v26 )
              {
                v26->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_60;
              }
            }
          }
        }
      }
LABEL_62:
      sub_B52A5C(Instance, v4);
    }
    if ( !p_fields->__4__this || !v8 )
      goto LABEL_62;
    v45 = p_fields->__4__this->fields.svtGetAction;
    v47 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
    v46 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v64.fields.currentCryptoKey = v47;
    *(_QWORD *)&v64.fields.fakeValue = v46;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v64, 0LL);
    v49 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
    v50 = v48;
    *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v61.fields.fakeValue = v49;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v59 = v61;
    v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v59, 0LL);
    v52 = *(_QWORD *)&v8->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&v8->fields.limitCount.fields.fakeValue;
    v53 = v51;
    *(_QWORD *)&v65.fields.currentCryptoKey = v52;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v65, 0LL);
    if ( !v45 )
      goto LABEL_62;
    ServantRewardAction__Setup(v45, v50, v53, Instance, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_62;
    v27 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_fields = &this->fields;
    v28 = this->fields.__4__this;
    v29 = v27;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !this->fields.__4__this )
      goto LABEL_62;
    v30 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)this->fields.__4__this->fields.effectPanel;
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v30 )
      goto LABEL_62;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v30, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !v28 )
      goto LABEL_62;
    v28->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_B52920(
      (BattleServantConfConponent_o *)&v28->fields.svtGetAction,
      (System_Int32_array **)Instance,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    v37 = this->fields.__4__this;
    if ( !v37 || !v29 )
      goto LABEL_62;
    v38 = v37->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v39 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
      *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v61.fields.fakeValue = v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v58 = v61;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v58, 0LL);
      if ( !v38 )
        goto LABEL_62;
      isNew = this->fields.isNew;
      v41 = Instance;
      v42 = 1;
      v43 = 14;
      v44 = v38;
    }
    else
    {
      v54 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
      *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v61.fields.fakeValue = v54;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v57 = v61;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v57, 0LL);
      if ( !v38 )
        goto LABEL_62;
      v41 = Instance;
      v43 = 6;
      v44 = v38;
      isNew = 0;
      v42 = 0;
    }
    ServantRewardAction__SetupCommandCode_28961064(v44, v41, isNew, v42, v43, 0LL);
  }
  else
  {
    p_fields = &this->fields;
  }
LABEL_60:
  v55 = (Il2CppObject *)p_fields->__4__this;
  v56 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v56, v55, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v55 )
    goto LABEL_62;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v55, v56, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42AE59A & 1) == 0 )
  {
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__);
    byte_42AE59A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&CS___8__locals1->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v9 )
LABEL_8:
    sub_B52A5C(Instance, v4);
  CommonUI__OpenNotificationDialog_18160348(
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42AE59B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__);
    byte_42AE59B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v6, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  System_String_o *name; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AE59C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__);
    byte_42AE59C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v6, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AE59D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE59D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42AE59E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__);
    byte_42AE59E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__LoadEquipGetEffect(v6, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AE59F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__);
    byte_42AE59F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__OpenEquipGetEffect(v6, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AE5A0 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE5A0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AE5A1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__);
    byte_42AE5A1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42AE5A2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__);
    byte_42AE5A2 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v6 )
LABEL_9:
    sub_B52A5C(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AE5A3 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE5A3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0LL);
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
  if ( (byte_42AE5A4 & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE5A4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)_4__this->fields.svtGetAction;
  if ( !this )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0LL )
LABEL_11:
    sub_B52A5C(this, method);
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