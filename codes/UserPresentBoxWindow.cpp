void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_long__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_41870C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_41870C6 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.befCommandCodeList,
    (System_Int32_array **)v13,
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UserPresentBoxWindow_o *v19; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  System_Int32_array **klass; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_GameObject_o *v28; // x8
  System_Int32_array **monitor; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_GameObject_o *v36; // x8
  struct UnityEngine_GameObject_o *v37; // x8
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UnityEngine_GameObject_o *v45; // x8
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UnityEngine_GameObject_o *v53; // x8
  System_Int32_array **v54; // x1
  System_Action_o *v55; // x20
  const MethodInfo *v56; // x2
  __int64 v57; // x0

  v4 = this;
  if ( (byte_41870A0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___, v5);
    sub_B2C35C(&JsonManager_TypeInfo, v6);
    sub_B2C35C(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v9);
    this = (UserPresentBoxWindow_o *)sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_41870A0 = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(v4, v11);
    return;
  }
  v12 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                     v12,
                                     (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_23;
  v19 = this;
  if ( !LODWORD(this->fields.myFsm) )
    goto LABEL_24;
  bgObject = this->fields.bgObject;
  if ( !bgObject )
    goto LABEL_23;
  klass = (System_Int32_array **)bgObject[1].klass;
  v4->fields.getSvtList = (struct GetSvts_array *)klass;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.getSvtList, klass, v13, v14, v15, v16, v17, v18);
  if ( !LODWORD(v19->fields.myFsm) )
    goto LABEL_24;
  v28 = v19->fields.bgObject;
  if ( !v28 )
    goto LABEL_23;
  monitor = (System_Int32_array **)v28[1].monitor;
  v4->fields.getCommandCodeList = (struct GetCommandCodes_array *)monitor;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.getCommandCodeList, monitor, v22, v23, v24, v25, v26, v27);
  if ( !LODWORD(v19->fields.myFsm) )
    goto LABEL_24;
  v36 = v19->fields.bgObject;
  if ( !v36 )
    goto LABEL_23;
  v4->fields.presentOverflowType = v36->fields.m_CachedPtr;
  if ( !LODWORD(v19->fields.myFsm) )
    goto LABEL_24;
  v37 = v19->fields.bgObject;
  if ( !v37 )
    goto LABEL_23;
  v38 = *(System_Int32_array ***)&v37[1].fields.m_CachedPtr;
  v4->fields.evPointRewardList = (struct UserPresentBoxWindow_evPointReward_array *)v38;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.evPointRewardList, v38, v30, v31, v32, v33, v34, v35);
  if ( !LODWORD(v19->fields.myFsm) )
    goto LABEL_24;
  v45 = v19->fields.bgObject;
  if ( !v45 )
    goto LABEL_23;
  v46 = (System_Int32_array **)v45[2].klass;
  v4->fields.getSvtCoins = (struct GetSvtCoin_array *)v46;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.getSvtCoins, v46, v39, v40, v41, v42, v43, v44);
  if ( !LODWORD(v19->fields.myFsm) )
  {
LABEL_24:
    v57 = sub_B2C460(this);
    sub_B2C400(v57, 0LL);
  }
  v53 = v19->fields.bgObject;
  if ( !v53 )
LABEL_23:
    sub_B2C434(this, result);
  v54 = (System_Int32_array **)v53[2].monitor;
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v54;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.overflowSvtCoinInfos, v54, v47, v48, v49, v50, v51, v52);
  v55 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)v4, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(v4, v55, v56);
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
  __int64 Filter_33936092; // x0
  ListViewSort_o **v14; // x8
  ListViewSort_o *v15; // x19
  char v16; // vf
  UserPresentBoxMaster_c *v17; // x8
  struct UserPresentBoxMaster_StaticFields *static_fields; // x9
  int32_t flag; // w10
  bool v20; // w8
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v22; // w1

  if ( (byte_418709D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, servantMaster);
    sub_B2C35C(&BalanceConfig_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&UserPresentBoxMaster_TypeInfo, v11);
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v12);
    byte_418709D = 1;
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, servantMaster);
    byte_41870CC = 1;
  }
  Filter_33936092 = (__int64)UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_33936092 = (__int64)UserPresentListViewManager_TypeInfo;
  }
  v14 = *(ListViewSort_o ***)(Filter_33936092 + 184);
  v15 = *v14;
  if ( !*v14 )
    goto LABEL_60;
  Filter_33936092 = ListViewSort__GetFilter_33936092(*v14, 13, 0LL);
  if ( (Filter_33936092 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_60;
LABEL_25:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_33936092 = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_33936092 = (__int64)BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*(_QWORD *)(Filter_33936092 + 184) + 640LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( (*(_BYTE *)(Filter_33936092 + 307) & 4) != 0 && !*(_DWORD *)(Filter_33936092 + 224) )
          {
            j_il2cpp_runtime_class_init_0(Filter_33936092);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_33936092 = System_Array__IndexOf_int_(
                              PresentBoxFilterSvtEquipMaterial,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
          if ( (Filter_33936092 & 0x80000000) == 0 )
          {
            LOBYTE(Filter_33936092) = ListViewSort__GetFilter_33936092(v15, 4, 0LL);
            return Filter_33936092;
          }
        }
        if ( servantMaster )
        {
          Filter_33936092 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                       userPresentBoxEntity->fields.objectId,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_33936092 )
          {
            switch ( *(_DWORD *)(Filter_33936092 + 84) )
            {
              case 1:
              case 0xC:
                goto LABEL_26;
              case 3:
                v22 = 1;
                goto LABEL_47;
              case 6:
                v22 = 3;
                goto LABEL_47;
              case 7:
                v22 = 2;
                goto LABEL_47;
              case 8:
                v22 = 4;
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
        Filter_33936092 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
                                     userPresentBoxEntity->fields.objectId,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_33936092 )
          break;
        switch ( *(_DWORD *)(Filter_33936092 + 48) )
        {
          case 2:
          case 0x11:
          case 0x14:
            v22 = 10;
            break;
          case 3:
          case 4:
            v22 = 6;
            break;
          case 5:
            v22 = 11;
            break;
          case 9:
            v22 = 8;
            break;
          case 0xA:
          case 0xB:
          case 0xC:
          case 0x19:
          case 0x1D:
            v22 = 7;
            break;
          case 0xE:
          case 0xF:
          case 0x12:
          case 0x13:
          case 0x1C:
            v22 = 12;
            break;
          case 0x18:
            v22 = 9;
            break;
          default:
            goto LABEL_46;
        }
LABEL_47:
        if ( ListViewSort__GetFilter_33936092(v15, v22, 0LL) )
LABEL_48:
          LOBYTE(Filter_33936092) = 1;
        else
          LOBYTE(Filter_33936092) = 0;
        return Filter_33936092;
      case 6:
      case 7:
LABEL_26:
        v20 = ListViewSort__GetFilter_33936092(v15, 0, 0LL);
        LOBYTE(Filter_33936092) = 0;
        if ( !v20 )
          return Filter_33936092;
        goto LABEL_48;
      case 0xB:
        v22 = 5;
        goto LABEL_47;
      default:
LABEL_46:
        v22 = 14;
        goto LABEL_47;
    }
LABEL_60:
    sub_B2C434(Filter_33936092, servantMaster);
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
  LOBYTE(Filter_33936092) = 1;
  if ( (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) < 0) ^ v16 | (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) == 0) )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      flag = userPresentBoxEntity->fields.flag;
      static_fields = UserPresentBoxMaster_TypeInfo->static_fields;
    }
    Filter_33936092 = 1LL;
    if ( ((1 << static_fields->IMPORTANT_FOR_LIMIT) & flag) < 1 )
      goto LABEL_25;
  }
  return Filter_33936092;
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
  void *Filter_33936092; // x0
  ListViewSort_o **v14; // x8
  ListViewSort_o *v15; // x19
  struct UserPresentBoxMaster_StaticFields *static_fields; // x9
  int32_t flag; // w10
  bool v18; // w8
  int32_t giftType; // w8
  _DWORD *v20; // x8
  bool Filter_33936152; // w0
  int32_t v22; // w1

  if ( (byte_418709E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, servantLimitMaster);
    sub_B2C35C(&UserPresentBoxMaster_TypeInfo, v11);
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v12);
    byte_418709E = 1;
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, servantLimitMaster);
    byte_41870CC = 1;
  }
  Filter_33936092 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_33936092 = UserPresentListViewManager_TypeInfo;
  }
  v14 = (ListViewSort_o **)*((_QWORD *)Filter_33936092 + 23);
  v15 = *v14;
  if ( isActiveFilterCategory )
  {
    if ( !v15 )
      goto LABEL_55;
    Filter_33936092 = (void *)ListViewSort__GetFilter_33936092(*v14, 13, 0LL);
    if ( ((unsigned __int8)Filter_33936092 & 1) == 0 )
    {
      if ( !userPresentBoxEntity )
        goto LABEL_55;
      goto LABEL_26;
    }
  }
  Filter_33936092 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    Filter_33936092 = UserPresentBoxMaster_TypeInfo;
  }
  if ( !userPresentBoxEntity )
    goto LABEL_55;
  static_fields = (struct UserPresentBoxMaster_StaticFields *)*((_QWORD *)Filter_33936092 + 23);
  flag = userPresentBoxEntity->fields.flag;
  v18 = 1;
  if ( (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) < 0) ^ v6 | (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) == 0) )
  {
    if ( (*((_BYTE *)Filter_33936092 + 307) & 4) != 0 && !*((_DWORD *)Filter_33936092 + 56) )
    {
      j_il2cpp_runtime_class_init_0(Filter_33936092);
      flag = userPresentBoxEntity->fields.flag;
      static_fields = UserPresentBoxMaster_TypeInfo->static_fields;
    }
    v18 = 1;
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
            Filter_33936092 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)commandCodeMaster,
                                userPresentBoxEntity->fields.objectId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
            if ( Filter_33936092 )
            {
              v20 = (char *)Filter_33936092 + 64;
LABEL_35:
              switch ( *v20 )
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
                  Filter_33936152 = ListViewSort__GetFilter_33936152(v15, 0, 0LL);
                  v18 = 0;
                  if ( !Filter_33936152 )
                    return v18;
                  return 1;
                case 2:
                  if ( !v15 )
                    goto LABEL_55;
                  v22 = 1;
                  goto LABEL_51;
                case 3:
                  if ( !v15 )
                    goto LABEL_55;
                  v22 = 2;
                  goto LABEL_51;
                case 4:
                  if ( !v15 )
                    goto LABEL_55;
                  v22 = 3;
                  goto LABEL_51;
                case 5:
                  if ( !v15 )
                    goto LABEL_55;
                  v22 = 4;
LABEL_51:
                  if ( ListViewSort__GetFilter_33936152(v15, v22, 0LL) )
                    return 1;
LABEL_54:
                  v18 = 0;
                  break;
                default:
                  return 1;
              }
              return v18;
            }
            return 1;
          }
LABEL_55:
          sub_B2C434(Filter_33936092, servantLimitMaster);
        }
        if ( giftType != 1 )
          return 1;
      }
      if ( servantLimitMaster )
      {
        Filter_33936092 = ServantLimitMaster__GetEntity(
                            servantLimitMaster,
                            userPresentBoxEntity->fields.objectId,
                            0,
                            0LL);
        if ( Filter_33936092 )
        {
          v20 = (char *)Filter_33936092 + 24;
          goto LABEL_35;
        }
        return 1;
      }
      goto LABEL_55;
    }
  }
  return v18;
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
  System_Action_o *v10; // x0
  __int64 v11; // x1
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
  System_Action_o *v23; // x20

  if ( (byte_41870B5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v6);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__, v7);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, v8);
    byte_41870B5 = 1;
  }
  v9 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass102_0___ctor((UserPresentBoxWindow___c__DisplayClass102_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = callback;
  v18 = (System_Action_o **)(v9 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)callback, v12, v13, v14, v15, v16, v17);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_16;
  receiveIdx = this->fields.receiveIdx;
  size = receiveList->fields._size;
  if ( (int)receiveIdx < size )
  {
    if ( size <= (unsigned int)receiveIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v22 = receiveList->fields._items->m_Items[receiveIdx];
    if ( v22 )
    {
      if ( Gift__IsServant(v22->fields.giftType, 0LL) )
      {
        v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v23,
          (Il2CppObject *)v9,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v23, v22->fields.objectId, 0, 0, 0, 0LL);
        return;
      }
      v10 = *v18;
      if ( *v18 )
      {
        System_Action__Invoke(v10, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B2C434(v10, v11);
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
  const MethodInfo *v7; // x1

  if ( (byte_41870C5 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, result);
    byte_41870C5 = 1;
  }
  if ( result )
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_41870CC )
    {
      sub_B2C35C(&UserPresentListViewManager_TypeInfo, result);
      byte_41870CC = 1;
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
      sub_B2C434(sortInfo, result);
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
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  __int64 v7; // x1

  if ( (byte_41870BB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v3);
    byte_41870BB = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
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
    sub_B2C434(userPresentListViewManager, v7);
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

  if ( (byte_41870AC & 1) == 0 )
  {
    sub_B2C35C(&QuestRewardInfo_TypeInfo, userPresentBox);
    byte_41870AC = 1;
  }
  v4 = (QuestRewardInfo_o *)sub_B2C42C(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v4, 0LL);
  if ( !userPresentBox || !v4 )
    sub_B2C434(v5, v6);
  result = v4;
  v4->fields.type = userPresentBox->fields.giftType;
  v4->fields.objectId = userPresentBox->fields.objectId;
  v4->fields.num = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_41870AD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5482/*"END_EFFECT"*/, method);
    byte_41870AD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5482/*"END_EFFECT"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_41870B6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3089/*"CLOSE"*/, method);
    byte_41870B6 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3089/*"CLOSE"*/, 0LL);
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

  if ( (byte_41870A3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, res);
    sub_B2C35C(&Method_UserPresentBoxWindow_EndReceive__, v4);
    byte_41870A3 = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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

  if ( (byte_41870A4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, res);
    sub_B2C35C(&Method_UserPresentBoxWindow_EndEffectReceive__, v4);
    byte_41870A4 = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  Il2CppObject *current; // x21
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_41870A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_41870A1 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)receiveList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v17,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B2C434(v8, v9);
    if ( !Gift__IsCostumeRelease((int32_t)v17.fields.current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v12);
      if ( !CommonUI__IsGetItemEffect(Instance, HIDWORD(current[4].monitor), 0LL) )
        continue;
    }
    v13 = 1;
    v14 = 2;
    goto LABEL_14;
  }
  v14 = 0;
  v13 = 0;
LABEL_14:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return (v14 == 2) & v13;
}


void __fastcall UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  System_Action_o *v10; // x22
  System_Action_o *v11; // x23

  if ( (byte_41870B7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow_ProcessClickAll__, v4);
    sub_B2C35C(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__, v5);
    byte_41870B7 = 1;
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
    UserPresentListViewManager__SetMode_21554288(userPresentListViewManager, 2, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, 0LL),
          v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_15:
      sub_B2C434(userPresentListViewManager, v6);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v10, v11, 0LL);
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

  if ( (byte_41870BC & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41870BC = 1;
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

  if ( (byte_41870B9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41870B9 = 1;
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
      sub_B2C434(userPresentListViewManager, v3);
    }
    UserPresentListViewManager__SetMode_21554288(userPresentListViewManager, 2, 0LL);
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
  struct UnityEngine_GameObject_o *presentBoxFilterKindSelectMenuPrefab; // x21
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  PresentBoxFilterSelectMenu_o *v24; // x20
  UserPresentListViewManager_c *v25; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v27; // x22

  if ( (byte_41870C4 & 1) == 0 )
  {
    sub_B2C35C(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&Method_UserPresentBoxWindow_ClickFilterEnd__, v7);
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v8);
    byte_41870C4 = 1;
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
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)presentBoxFilterKindSelectMenuPrefab,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_31331952(v13, gameObject, 0LL);
    if ( !v13 )
LABEL_25:
      sub_B2C434(v15, v16);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v13,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.presentBoxFilterSelectMenu,
      Component_srcLineSprite,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = *p_presentBoxFilterSelectMenu;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v11);
    byte_41870CC = 1;
  }
  v25 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v25 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v25->static_fields->sortInfo;
  v27 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0LL);
  if ( !v24 )
    goto LABEL_25;
  PresentBoxFilterSelectMenu__Open(v24, sortInfo, v27, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_41870C2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41870C2 = 1;
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

  if ( (byte_41870B8 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41870B8 = 1;
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
      sub_B2C434(userPresentListViewManager, v3);
    }
    UserPresentListViewManager__SetMode_21554288(userPresentListViewManager, 2, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1

  if ( (byte_41870BD & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__, v6);
    byte_41870BD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v7,
                                                         (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v9);
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

  if ( (byte_4187096 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187096 = 1;
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
      sub_B2C434(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_titleInfo, 0LL, v8, v9, v10, v11, v12, v13);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x3
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x3
  UserPresentBoxWindow_o *v31; // x0
  const MethodInfo *v32; // x1
  struct System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  struct UnityEngine_GameObject_o *titlePrefab; // x22
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  TitleInfoControl_o *v51; // x22
  TitleInfoControl_o *v52; // x21
  System_Action_o *v53; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v55; // x21
  System_Action_int__o *v56; // x22
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x2
  bool v66; // w20
  const MethodInfo *v67; // x2

  if ( (byte_4187097 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, isShowBg);
    sub_B2C35C(&System_Action_int__TypeInfo, v9);
    sub_B2C35C(&System_Action_TypeInfo, v10);
    sub_B2C35C(&AtlasManager_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_UserPresentBoxWindow_OnClickBack__, v15);
    sub_B2C35C(&Method_UserPresentBoxWindow__Open_b__69_0__, v16);
    sub_B2C35C(&StringLiteral_5468/*"ENABLE_PRESENT_HISTORY"*/, v17);
    byte_4187097 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  bgObject = (UnityEngine_GameObject_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, 0, gameObject, v26);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_31;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v27, 0, v27, v28);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_31;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v29, 0, v29, v30);
  v33 = UserPresentBoxWindow__maxSelectable(v31, v32);
  this->fields.presentMaxSelectable = v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.presentMaxSelectable,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  UserPresentBoxWindow__SetSelectCount(this, 0, v40);
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
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               bgObject,
                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = Component_srcLineSprite;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.titleInfo,
        (System_Int32_array **)Component_srcLineSprite,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      v51 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v51 )
      {
        TitleInfoControl__SetParent(v51, (UnityEngine_Transform_o *)bgObject, 0LL);
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
                TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)bgObject, 1, 42, 0, 0LL);
                v52 = this->fields.titleInfo;
                v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(v53, (Il2CppObject *)this, Method_UserPresentBoxWindow_OnClickBack__, 0LL);
                if ( v52 )
                {
                  TitleInfoControl__SetBackBtnAct(v52, v53, 0LL);
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B2C434(bgObject, isShowBg);
  }
LABEL_22:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v56 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v56,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__Open_b__69_0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(v55, v56, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_31;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetFilterButtonImage(this, v57);
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
  UserPresentBoxWindow__RequestPresentList(this, v58);
  this->fields.mReDispAct = redisp_act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mReDispAct,
    (System_Int32_array **)redisp_act,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v65);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5468/*"ENABLE_PRESENT_HISTORY"*/, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_31;
  v66 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v66, v67);
}


void __fastcall UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  CommonUI_o *Instance; // x19
  System_Array_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_41870C3 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_ImageId___TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E,
      v3);
    byte_41870C3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Array_o *)sub_B2C374(TutorialFlag_ImageId___TypeInfo, 3LL);
  v8.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v8, 0LL);
  if ( !Instance )
    sub_B2C434(v6, v7);
  CommonUI__OpenTutorialImageDialog(Instance, (TutorialFlag_ImageId_array *)v5, 201, 0LL, 0LL, 0LL, 0LL);
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
    sub_B2C434(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_21554288(userPresentListViewManager, 2, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v4);
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
  __int64 Instance; // x0
  const MethodInfo *v29; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UserServantMaster_o *v38; // x8
  UserCommandCodeMaster_o *v39; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int v42; // w21
  System_String_o *v43; // x23
  Il2CppObject *v44; // x24
  Il2CppObject *v45; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v47; // x23
  Il2CppObject *v48; // x24
  Il2CppObject *v49; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v51; // x23
  __int64 v52; // x1
  Il2CppObject *v53; // x21
  BalanceConfig_c *v54; // x0
  Il2CppObject *v55; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v60; // x22
  Il2CppObject *v61; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v63; // x22
  const MethodInfo *v64; // x1
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x2
  __int64 v67; // x20
  BalanceConfig_c *v68; // x0
  __int64 v69; // x21
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
  System_String_o *v72; // x23
  Il2CppObject *v73; // x24
  Il2CppObject *v74; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v76; // x23
  Il2CppObject *v77; // x0
  UserPresentListViewManager_c *v78; // x0
  _BOOL4 v79; // w22
  UserPresentListViewManager_c *v80; // x0
  UserPresentListViewManager_c *v81; // x0
  _BOOL4 v82; // w28
  UserPresentListViewManager_c *v83; // x0
  ServantMaster_o *v84; // x23
  ItemMaster_o *v85; // x24
  CommandCodeMaster_o *v86; // x26
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v87; // x27
  const MethodInfo *v88; // x4
  const MethodInfo *v89; // x5
  unsigned __int64 v90; // x21
  __int64 v91; // x25
  int v92; // w24
  const MethodInfo *v93; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v94; // x21
  char v95; // w22
  char v96; // w23
  __int64 v97; // x25
  __int64 v98; // x8
  int v99; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v101; // x3
  UnityEngine_GameObject_o *v102; // x0
  const MethodInfo *v103; // x3
  UnityEngine_GameObject_o *v104; // x0
  const MethodInfo *v105; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  __int64 *v107; // x8
  UnityEngine_GameObject_o *v108; // x0
  const MethodInfo *v109; // x3
  UnityEngine_GameObject_o *v110; // x0
  const MethodInfo *v111; // x3
  UnityEngine_GameObject_o *v112; // x0
  const MethodInfo *v113; // x3
  __int64 v114; // x8
  const MethodInfo *v115; // x2
  _BOOL8 _28617756; // x0
  const MethodInfo *v117; // x1
  __int64 v118; // x0
  UserPresentBoxWindow_o *v119; // [xsp+0h] [xbp-C0h]
  int v120; // [xsp+8h] [xbp-B8h]
  ServantLimitMaster_o *servantLimitMaster; // [xsp+10h] [xbp-B0h]
  int v122; // [xsp+1Ch] [xbp-A4h] BYREF
  int v123; // [xsp+20h] [xbp-A0h] BYREF
  int v124; // [xsp+24h] [xbp-9Ch] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-98h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-94h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-90h] BYREF
  int v128; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-88h] BYREF
  int32_t v130; // [xsp+3Ch] [xbp-84h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-80h] BYREF
  int32_t v132; // [xsp+44h] [xbp-7Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_418709B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___67324728, v14);
    sub_B2C35C(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&TutorialFlag_TypeInfo, v18);
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_10513/*"PRESENT_LIST_INFO"*/, v20);
    sub_B2C35C(&StringLiteral_11026/*"RECEIVE_FILTER_NOTHING"*/, v21);
    sub_B2C35C(&StringLiteral_11025/*"RECEIVE_ALL_DONE"*/, v22);
    sub_B2C35C(&StringLiteral_3454/*"CURRENT_QP_UNIT"*/, v23);
    sub_B2C35C(&StringLiteral_10514/*"PRESENT_LIST_NOTICE"*/, v24);
    sub_B2C35C(&StringLiteral_3452/*"CURRENT_FRIEND_POINT_UNIT"*/, v25);
    this = (UserPresentBoxWindow_o *)sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v26);
    byte_418709B = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  entity = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &v2->fields.userServantMaster;
  v2->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.userServantMaster,
    MasterData_WarQuestSelectionMaster,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v38 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_160;
  v39 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v38, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !v39 )
    goto LABEL_160;
  Count = UserCommandCodeMaster__getCount(v39, 0LL);
  svtNumValLb = v2->fields.svtNumValLb;
  v42 = Count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  v132 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v132);
  if ( !SelfUserGame )
    goto LABEL_160;
  v44 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44301068(v43, v44, v45, 0LL);
  if ( !svtNumValLb )
    goto LABEL_160;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0LL);
  svtEqNumValLb = v2->fields.svtEqNumValLb;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  v130 = servantEquipSum[0];
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  Instance = (__int64)System_String__Format_44301068(v47, v48, v49, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_160;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0LL);
  commandCodeNumValLb = v2->fields.commandCodeNumValLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  v128 = v42;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
  if ( !byte_4183CB7 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v52);
    byte_4183CB7 = 1;
  }
  v54 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v54 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v54->static_fields->CommandCodeFrameMax;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax);
  Instance = (__int64)System_String__Format_44301068(v51, v53, v55, 0LL);
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
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3454/*"CURRENT_QP_UNIT"*/, 0LL);
  qp = SelfUserGame->fields.qp;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  Instance = (__int64)System_String__Format(v60, v61, 0LL);
  if ( !qpNumValLb )
    goto LABEL_160;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0LL);
  fpNumValLb = v2->fields.fpNumValLb;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3452/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, v64);
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint);
  Instance = (__int64)System_String__Format(v63, v65, 0LL);
  if ( !fpNumValLb )
    goto LABEL_160;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        v66);
  if ( !Instance )
    goto LABEL_160;
  v67 = Instance;
  v68 = BalanceConfig_TypeInfo;
  v69 = *(_QWORD *)(v67 + 24);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v68 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = v2->fields.presentInfoLabel;
  PresentBoxMax = v68->static_fields->PresentBoxMax;
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_10513/*"PRESENT_LIST_INFO"*/, 0LL);
  v124 = v69;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
  v123 = PresentBoxMax;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  Instance = (__int64)System_String__Format_44301068(v72, v73, v74, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_160;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0LL);
  presentNoticeLabel = v2->fields.presentNoticeLabel;
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_10514/*"PRESENT_LIST_NOTICE"*/, 0LL);
  v122 = PresentBoxMax;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122);
  Instance = (__int64)System_String__Format(v76, v77, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_160;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0LL);
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v29);
    byte_41870CC = 1;
  }
  v78 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v78 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v78->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_160;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v79 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_41870CC )
    {
      sub_B2C35C(&UserPresentListViewManager_TypeInfo, v29);
      byte_41870CC = 1;
    }
    v80 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v80 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v80->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_160;
    v79 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v29);
    byte_41870CC = 1;
  }
  v81 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v81 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v81->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_160;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v82 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_41870CC )
    {
      sub_B2C35C(&UserPresentListViewManager_TypeInfo, v29);
      byte_41870CC = 1;
    }
    v83 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v83 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v83->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_160;
    v82 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( v82 || v79 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v84 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v85 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v119 = v2;
    servantLimitMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v86 = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v87 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B2C42C(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v87,
      v69,
      (const MethodInfo_2EF386C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___67324728);
    v120 = v69;
    if ( (int)v69 >= 1 )
    {
      v90 = 0LL;
      v91 = v67 + 32;
      do
      {
        if ( !v79 )
          goto LABEL_164;
        if ( v90 >= *(unsigned int *)(v67 + 24) )
          goto LABEL_161;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     v84,
                     v85,
                     *(UserPresentBoxEntity_o **)(v91 + 8 * v90),
                     v88);
        if ( (Instance & 1) != 0 )
        {
LABEL_164:
          if ( !v82 )
            goto LABEL_87;
          if ( v90 >= *(unsigned int *)(v67 + 24) )
            goto LABEL_161;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       servantLimitMaster,
                       v86,
                       *(UserPresentBoxEntity_o **)(v91 + 8 * v90),
                       v79,
                       v89);
          if ( (Instance & 1) != 0 )
          {
LABEL_87:
            if ( v90 >= *(unsigned int *)(v67 + 24) )
            {
LABEL_161:
              v118 = sub_B2C460(Instance);
              sub_B2C400(v118, 0LL);
            }
            if ( !v87 )
              goto LABEL_160;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v87,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v91 + 8 * v90),
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      while ( (__int64)++v90 < v120 );
    }
    if ( !v87
      || (Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v87,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__),
          LODWORD(v69) = v120,
          !Instance) )
    {
LABEL_160:
      sub_B2C434(Instance, v29);
    }
    v92 = *(_DWORD *)(Instance + 24);
    v2 = v119;
    v67 = Instance;
  }
  else
  {
    v92 = v69;
  }
  UserPresentBoxWindow__SetFilterButtonImage(v2, v29);
  UserPresentBoxWindow__SetSelectCount(v2, 0, v93);
  if ( v92 < 1 )
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
        UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, 0, gameObject, v101);
        Instance = (__int64)v2->fields.itemReceiveBtn;
        v2->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v102, 0, v102, v103);
          Instance = (__int64)v2->fields.checkedItemBtn;
          v2->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v104, 0, v104, v105);
            nonPresentNoticeLabel = v2->fields.nonPresentNoticeLabel;
            if ( (_DWORD)v69 )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v107 = &StringLiteral_11026/*"RECEIVE_FILTER_NOTHING"*/;
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v107 = &StringLiteral_11025/*"RECEIVE_ALL_DONE"*/;
            }
            Instance = (__int64)LocalizationManager__Get((System_String_o *)*v107, 0LL);
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
                          v114 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v94 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v95 = 0;
  v96 = 0;
  v97 = 4LL;
  while ( 1 )
  {
    if ( (unsigned int)(v97 - 4) >= *(_DWORD *)(v67 + 24) )
      goto LABEL_161;
    v98 = *(_QWORD *)(v67 + 8 * v97);
    if ( !v98 )
      goto LABEL_160;
    v99 = *(_DWORD *)(v98 + 72);
    if ( v99 == 2 )
    {
      if ( !v94 )
        goto LABEL_160;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v94,
                   &entity,
                   *(_DWORD *)(v98 + 76),
                   (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_106;
      if ( !entity )
        goto LABEL_160;
      if ( entity->fields.bannerId != 24 )
      {
LABEL_106:
        v96 = 1;
        v95 = 1;
      }
      if ( (v96 & 1) == 0 )
        goto LABEL_111;
    }
    else
    {
      v95 |= v99 == 9;
      v96 = 1;
    }
    if ( (v95 & 1) != 0 )
      break;
LABEL_111:
    if ( (int)++v97 - 4 >= v92 )
      goto LABEL_122;
  }
  v96 = 1;
  v95 = 1;
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
  v2->fields.isReceiveFlg = v96 & 1;
  if ( !Instance )
    goto LABEL_160;
  v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v108, v96 & 1, v108, v109);
  Instance = (__int64)v2->fields.itemReceiveBtn;
  v2->fields.isItemReceiveFlg = v95 & 1;
  if ( !Instance )
    goto LABEL_160;
  v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v110, v95 & 1, v110, v111);
  Instance = (__int64)v2->fields.checkedItemBtn;
  v2->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_160;
  v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v112, 0, v112, v113);
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
          (UserPresentBoxEntity_array *)v67,
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
    (UserPresentBoxEntity_array *)v67,
    0LL);
LABEL_134:
  Instance = (__int64)v2->fields.userPresentListViewManager;
  v2->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_160;
  UserPresentListViewManager__SetMode_21554288((UserPresentListViewManager_o *)Instance, 1, 0LL);
  Instance = (__int64)v2->fields.sortBtn;
  if ( !Instance )
    goto LABEL_160;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
  Instance = (__int64)v2->fields.sortBtn;
  if ( !Instance )
    goto LABEL_160;
  v114 = *(_QWORD *)Instance;
LABEL_150:
  (*(void (**)(void))(v114 + 536))();
  ActionExtensions__Call(v2->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(v2, 1, v115);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = TutorialFlag__Get_28617756(201, 0LL);
  if ( !_28617756 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_28617756, v117);
  EventTutorialMaster__CheckTutorial(0, 78, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v8; // x1

  if ( (byte_4187099 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_UserPresentListRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_UserPresentBoxWindow_callbackPresentList__, v5);
    byte_4187099 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v6,
                                                         (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v8);
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

  if ( (byte_41870BE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_41870BE = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B2C434(sortBtn, is_enable);
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

  if ( (byte_4187098 & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_B2C35C(
                                       &Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___,
                                       isVaild);
    byte_4187098 = 1;
  }
  if ( !btnObject
    || (this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                           btnObject,
                                           (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_15:
    sub_B2C434(this, isVaild);
  }
  myFsm = (int)this->fields.myFsm;
  v7 = this;
  if ( myFsm >= 1 )
  {
    for ( i = 0; i < myFsm; ++i )
    {
      if ( i >= (unsigned int)myFsm )
      {
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
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
  int64_t checkedItemBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *v22; // x0
  const MethodInfo *v23; // x3
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x3
  bool v26; // w1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v28; // x2
  UserPresentBoxEntity_array *VaildList; // x20
  ItemMaster_o *v30; // x24
  __int64 v31; // x21
  UserPresentListViewManager_c *v32; // x0
  _BOOL4 v33; // w27
  UserPresentListViewManager_c *v34; // x0
  UserPresentListViewManager_c *v35; // x0
  _BOOL4 v36; // w28
  UserPresentListViewManager_c *v37; // x0
  ServantMaster_o *v38; // x23
  CommandCodeMaster_o *v39; // x25
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v40; // x26
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x5
  unsigned __int64 v43; // x22
  UserPresentBoxEntity_o **m_Items; // x19
  UnityEngine_GameObject_o *v45; // x0
  const MethodInfo *v46; // x3
  int max_length; // w8
  unsigned int v48; // w19
  UserPresentBoxEntity_o *v49; // x8
  int32_t giftType; // w9
  __int64 v51; // x0
  UserPresentBoxWindow_o *v52; // [xsp+8h] [xbp-68h]
  ServantLimitMaster_o *servantLimitMaster; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_41870BA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, how);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___67324728, v14);
    sub_B2C35C(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, v18);
    byte_41870BA = 1;
  }
  entity = 0LL;
  checkedItemBtn = (int64_t)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = how;
  if ( !checkedItemBtn )
    goto LABEL_96;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, how, gameObject, v21);
  if ( !isSetOtherButtonsToo )
    return;
  if ( how )
  {
    checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( checkedItemBtn )
    {
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
      UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v22, 0, v22, v23);
      checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( checkedItemBtn )
      {
        v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
        v26 = 0;
        goto LABEL_94;
      }
    }
    goto LABEL_96;
  }
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)checkedItemBtn,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  checkedItemBtn = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_96;
  VaildList = UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, checkedItemBtn, v28);
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_96;
  checkedItemBtn = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)checkedItemBtn,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_96;
  v30 = (ItemMaster_o *)checkedItemBtn;
  v31 = *(_QWORD *)&VaildList->max_length;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, how);
    byte_41870CC = 1;
  }
  v32 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v32 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v32->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_96;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v33 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_41870CC )
    {
      sub_B2C35C(&UserPresentListViewManager_TypeInfo, how);
      byte_41870CC = 1;
    }
    v34 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v34 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v34->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_96;
    v33 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, how);
    byte_41870CC = 1;
  }
  v35 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v35 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v35->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_96;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v36 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_41870CC )
    {
      sub_B2C35C(&UserPresentListViewManager_TypeInfo, how);
      byte_41870CC = 1;
    }
    v37 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v37 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v37->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_96;
    v36 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( v33 || v36 )
  {
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v38 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)checkedItemBtn,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v52 = this;
    servantLimitMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)checkedItemBtn,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v39 = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)checkedItemBtn,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v40 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B2C42C(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v40,
      v31,
      (const MethodInfo_2EF386C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___67324728);
    if ( (int)v31 >= 1 )
    {
      v43 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v33 )
          goto LABEL_100;
        if ( v43 >= VaildList->max_length )
          goto LABEL_97;
        checkedItemBtn = UserPresentBoxWindow__CheckFilter(
                           (UserPresentBoxWindow_o *)checkedItemBtn,
                           v38,
                           v30,
                           m_Items[v43],
                           v41);
        if ( (checkedItemBtn & 1) != 0 )
        {
LABEL_100:
          if ( !v36 )
            goto LABEL_70;
          if ( v43 >= VaildList->max_length )
            goto LABEL_97;
          checkedItemBtn = UserPresentBoxWindow__CheckRarityFilter(
                             (UserPresentBoxWindow_o *)checkedItemBtn,
                             servantLimitMaster,
                             v39,
                             m_Items[v43],
                             v33,
                             v42);
          if ( (checkedItemBtn & 1) != 0 )
          {
LABEL_70:
            if ( v43 >= VaildList->max_length )
            {
LABEL_97:
              v51 = sub_B2C460(checkedItemBtn);
              sub_B2C400(v51, 0LL);
            }
            if ( !v40 )
              goto LABEL_96;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v40,
              (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v43],
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      while ( (__int64)++v43 < (int)v31 );
    }
    if ( !v40
      || (checkedItemBtn = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_96:
      sub_B2C434(checkedItemBtn, how);
    }
    LODWORD(v31) = *(_DWORD *)(checkedItemBtn + 24);
    this = v52;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
  }
  if ( (int)v31 < 1 )
    return;
  checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_96;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v45, 1, v45, v46);
  max_length = VaildList->max_length;
  if ( max_length < 1 )
    return;
  v48 = 0;
  while ( 1 )
  {
    if ( v48 >= max_length )
      goto LABEL_97;
    v49 = VaildList->m_Items[v48];
    if ( !v49 )
      goto LABEL_96;
    giftType = v49->fields.giftType;
    if ( giftType == 2 )
      break;
    if ( giftType == 9 )
      goto LABEL_92;
LABEL_90:
    max_length = VaildList->max_length;
    if ( (int)++v48 >= max_length )
      return;
  }
  if ( !v30 )
    goto LABEL_96;
  checkedItemBtn = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)v30,
                     &entity,
                     v49->fields.objectId,
                     (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  v26 = 1;
LABEL_94:
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v24, v26, v24, v25);
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

  if ( (byte_418709C & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, v3);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v4);
    byte_418709C = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, method);
    byte_41870CC = 1;
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
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0LL);
  v8 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_24;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_41870CC )
  {
    sub_B2C35C(&UserPresentListViewManager_TypeInfo, method);
    byte_41870CC = 1;
  }
  v9 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v9 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v9->static_fields->sortInfo;
  if ( !sortInfo )
LABEL_26:
    sub_B2C434(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0LL);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v8 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
LABEL_24:
  if ( !filterBtnSp )
    goto LABEL_26;
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
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v9; // x1

  if ( (byte_41870BF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_10753/*"PresentHistoryButton"*/, v6);
    byte_41870BF = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10753/*"PresentHistoryButton"*/,
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
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_B2C434(Component_srcLineSprite, v9);
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
  sub_B2C2F8(
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
  __int64 v10; // x1
  UIWidget_o *v11; // x20
  int32_t v12; // w21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = selected;
  if ( (byte_41870C0 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&selected);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_10520/*"PRESENT_SELECT_INFO"*/, v5);
    byte_41870C0 = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10520/*"PRESENT_SELECT_INFO"*/, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0LL);
  v9 = System_String__Format_44301068(v7, v8, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
  if ( !presentSelectNumLabel )
    goto LABEL_16;
  UILabel__set_text(presentSelectNumLabel, v9, 0LL);
  v11 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v12 = v18;
  v9 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v12 >= *(_DWORD *)(*(_QWORD *)&v9[7].fields + 116LL) )
  {
    presentNoticeLabel = this->fields.presentNoticeLabel;
    if ( presentNoticeLabel )
    {
      r = presentNoticeLabel->fields.mColor.fields.r;
      g = presentNoticeLabel->fields.mColor.fields.g;
      b = presentNoticeLabel->fields.mColor.fields.b;
      a = presentNoticeLabel->fields.mColor.fields.a;
      if ( v11 )
        goto LABEL_15;
    }
LABEL_16:
    sub_B2C434(v9, v10);
  }
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  if ( !v11 )
    goto LABEL_16;
LABEL_15:
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
  __int64 v24; // x0
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v26; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v29; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v30; // x22
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_41870A5 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__, v7);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, v8);
    byte_41870A5 = 1;
  }
  v9 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass85_0___ctor((UserPresentBoxWindow___c__DisplayClass85_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = callback;
  *(_DWORD *)(v9 + 24) = idx;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v26 = *(int *)(v9 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v26 < max_length )
    {
      if ( (unsigned int)v26 >= max_length )
      {
        v32 = sub_B2C460(v24);
        sub_B2C400(v32, 0LL);
      }
      evpDialog = this->fields.evpDialog;
      v29 = evPointRewardList->m_Items[v26];
      v30 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_B2C42C(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v30,
        (Il2CppObject *)v9,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        0LL);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v29, v30, v31);
        return;
      }
LABEL_10:
      sub_B2C434(v10, v11);
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
  System_Action_o *v31; // x22

  if ( (byte_41870A2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__, v7);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_10507/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v9);
    sub_B2C35C(&StringLiteral_27/*"\n\n"*/, v10);
    byte_41870A2 = 1;
  }
  v11 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass82_0___ctor((UserPresentBoxWindow___c__DisplayClass82_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields.m_stringLength >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10507/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
    v30 = System_String__Concat_44307816(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_27/*"\n\n"*/, v29, 0LL);
    v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog(Instance, 0LL, v30, v31, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(v12, v13);
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

  if ( (byte_41870A6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v2);
    byte_41870A6 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
  v5 = UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( v5 )
  {
    if ( !mInstance )
      sub_B2C434(v5, v6);
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
  const MethodInfo *v11; // x1

  if ( (byte_41870C9 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__, v3);
    sub_B2C35C(&StringLiteral_12239/*"SHOW_EFFECT"*/, v4);
    byte_41870C9 = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12239/*"SHOW_EFFECT"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v10 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B2C42C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      0LL);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v10, 0LL);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v11);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v7);
  }
}


void __fastcall UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_B2C434(0LL, method);
  UserPresentListViewManager__SetMode_21554288(userPresentListViewManager, 1, 0LL);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_B2C434(0LL, result);
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
  __int64 v7; // x1

  if ( (byte_41870C7 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_41870C7 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_B2C434(UnitInfo, v7);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_41870C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41870C8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__SetConnect(Instance, 0, 0LL);
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

  if ( (byte_41870CA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_UserPresentBoxWindow_EndEffect__, v4);
    byte_41870CA = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *touchBlocker; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x1
  System_Action_Action__array *v19; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ActionChain_o *v34; // x21
  System_Action_array *v35; // x20
  System_Action_o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  __int64 v44; // x0

  if ( (byte_41870CB & 1) == 0 )
  {
    sub_B2C35C(&ActionChain_TypeInfo, method);
    sub_B2C35C(&System_Action___TypeInfo, v3);
    sub_B2C35C(&System_Action_Action____TypeInfo, v4);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v5);
    sub_B2C35C(&System_Action_Action__TypeInfo, v6);
    sub_B2C35C(&System_Action_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__, v10);
    sub_B2C35C(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__, v11);
    sub_B2C35C(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__, v12);
    sub_B2C35C(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, v13);
    byte_41870CB = 1;
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
    v17 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B2C42C(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__,
      0LL);
    if ( userPresentListViewManager )
    {
      UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v17, 0LL);
      UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v18);
      return;
    }
LABEL_26:
    sub_B2C434(touchBlocker, v14);
  }
  v19 = (System_Action_Action__array *)sub_B2C374(System_Action_Action____TypeInfo, 2LL);
  v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v20,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( !v19 )
    goto LABEL_26;
  if ( v20 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B2C41C(v20, v19->obj.klass->_1.element_class);
    if ( !touchBlocker )
      goto LABEL_28;
  }
  if ( !v19->max_length )
    goto LABEL_27;
  v19->m_Items[0] = (System_Action_Action__o *)v20;
  sub_B2C2F8((BattleServantConfConponent_o *)v19->m_Items, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v27,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v27 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B2C41C(v27, v19->obj.klass->_1.element_class);
    if ( !touchBlocker )
      goto LABEL_28;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_27;
  v19->m_Items[1] = (System_Action_Action__o *)v27;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19->m_Items[1], (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  v34 = (ActionChain_o *)sub_B2C42C(ActionChain_TypeInfo);
  ActionChain___ctor_21119660(v34, v19, 0LL);
  v35 = (System_Action_array *)sub_B2C374(System_Action___TypeInfo, 1LL);
  v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
  if ( !v35 )
    goto LABEL_26;
  if ( v36 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B2C41C(v36, v35->obj.klass->_1.element_class);
    if ( !touchBlocker )
    {
LABEL_28:
      v44 = sub_B2C454();
      sub_B2C400(v44, 0LL);
    }
  }
  if ( !v35->max_length )
  {
LABEL_27:
    v43 = sub_B2C460(touchBlocker);
    sub_B2C400(v43, 0LL);
  }
  v35->m_Items[0] = v36;
  sub_B2C2F8((BattleServantConfConponent_o *)v35->m_Items, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
  if ( !v34 )
    goto LABEL_26;
  touchBlocker = (UnityEngine_GameObject_o *)ChainableActionBase__Final((ChainableActionBase_o *)v34, v35, 0LL);
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
    sub_B2C434(0LL, action);
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
    sub_B2C434(0LL, action);
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
  System_Action_o *v9; // x20

  if ( (byte_418709A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&AtlasManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, v6);
    byte_418709A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
  CommonUI__SetConnect(Instance, 1, 0LL);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_List_int__o *befSvtList; // x0

  if ( (byte_41870B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    byte_41870B0 = 1;
  }
  if ( isNew )
  {
    v9 = UserPresentBoxWindow__checkOverlapSvt(this, svtId, (const MethodInfo *)isNew);
    v11 = !v9;
    if ( !v9 && isAddSvt )
    {
      befSvtList = this->fields.befSvtList;
      if ( !befSvtList )
        sub_B2C434(0LL, v10);
      System_Collections_Generic_List_int___Add(
        befSvtList,
        svtId,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
  __int64 v13; // x1
  UserPresentBoxWindow___c__DisplayClass99_0_o *v14; // x21
  System_Collections_Generic_List_long__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v18; // x23
  unsigned int Index; // w8
  _BOOL4 v20; // w0

  if ( (byte_41870B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, commandCodeId);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__FindIndex__, v9);
    sub_B2C35C(&Method_System_Predicate_long___ctor__, v10);
    sub_B2C35C(&System_Predicate_long__TypeInfo, v11);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__, v12);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo, v13);
    byte_41870B2 = 1;
  }
  v14 = (UserPresentBoxWindow___c__DisplayClass99_0_o *)sub_B2C42C(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass99_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  v14->fields.commandCodeId = commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v20) = 0;
    return v20;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v18 = (System_Predicate_long__o *)sub_B2C42C(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    (const MethodInfo_2951B48 *)Method_System_Predicate_long___ctor__);
  if ( !befCommandCodeList )
    goto LABEL_12;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v18,
            (const MethodInfo_2F6DA1C *)Method_System_Collections_Generic_List_long__FindIndex__);
  v20 = Index >> 31;
  if ( (Index & 0x80000000) != 0 && isAddCommandCode )
  {
    v15 = this->fields.befCommandCodeList;
    if ( v15 )
    {
      System_Collections_Generic_List_long___Add(
        v15,
        v14->fields.commandCodeId,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      LOBYTE(v20) = 1;
      return v20;
    }
LABEL_12:
    sub_B2C434(v15, v16);
  }
  return v20;
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
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v12; // x8

  v8 = this;
  if ( (byte_41870AF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    sub_B2C35C(&StringLiteral_9299/*"NEXT_SVT"*/, v9);
    this = (UserPresentBoxWindow_o *)sub_B2C35C(&StringLiteral_6350/*"FINAL_SVT"*/, v10);
    byte_41870AF = 1;
  }
  receiveList = v8->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v8->fields.receiveIdx >= receiveList->fields._size )
  {
    v8->fields.receiveList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.receiveList, 0LL, v2, v3, v4, v5, v6, v7);
    this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
    v8->fields.receiveIdx = 0;
    if ( this )
    {
      v12 = &StringLiteral_6350/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(this, method);
  }
  this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v12 = &StringLiteral_9299/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkOverlapSvt(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v8; // w22

  v4 = this;
  if ( (byte_41870B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    this = (UserPresentBoxWindow_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_41870B1 = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( befSvtList->fields._items->m_Items[v8 + 1] == svtId )
      return 1;
    if ( (int)++v8 >= size )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  AvalonSceneManager_c *v9; // x0
  __int64 v10; // x1
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
  System_Action_o *v24; // x20

  if ( (byte_41870AE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, v6);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, v7);
    byte_41870AE = 1;
  }
  v8 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass95_0___ctor((UserPresentBoxWindow___c__DisplayClass95_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)end_act, v17, v18, v19, v20, v21, v22);
  svtGetAction = this->fields.svtGetAction;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v8, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtGetAction )
LABEL_9:
    sub_B2C434(v9, v10);
  ServantRewardAction__Play(svtGetAction, v24, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentBoxWindow_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v2 = this;
  if ( (byte_41870B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, method);
    this = (UserPresentBoxWindow_o *)sub_B2C35C(&StringLiteral_9299/*"NEXT_SVT"*/, v3);
    byte_41870B3 = 1;
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
    sub_B2C434(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9299/*"NEXT_SVT"*/, 0LL);
}


System_String_o *__fastcall UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t m_stringLength; // w20
  Il2CppObject *v8; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_41870C1 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23696/*"}"*/, v2);
    sub_B2C35C(&StringLiteral_23481/*"{0,"*/, v3);
    byte_41870C1 = 1;
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
        (v5 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 116, 0LL)) == 0LL) )
  {
    sub_B2C434(v5, v6);
  }
  v8 = (Il2CppObject *)v5;
  v12 = v5->fields.m_stringLength + 2 * (m_stringLength - v5->fields.m_stringLength);
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  v10 = System_String__Concat_44307816(
          (System_String_o *)StringLiteral_23481/*"{0,"*/,
          v9,
          (System_String_o *)StringLiteral_23696/*"}"*/,
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
  int64_t Instance; // x0
  __int64 v20; // x1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v22; // x3
  int v23; // w8
  System_Collections_Generic_IEnumerable_T__o *v24; // x23
  unsigned int v25; // w9
  __int64 v26; // x10
  int v27; // w10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v28; // x24
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  NetworkManager_ResultCallbackFunc_o *v35; // x23
  const MethodInfo *v36; // x2
  __int64 v37; // x0

  if ( (byte_418709F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, presentIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___67324720, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v10);
    sub_B2C35C(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v17);
    sub_B2C35C(&Method_UserPresentBoxWindow_CallbackReceiveRequest__, v18);
    byte_418709F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Instance = (int64_t)UserPresentBoxMaster__getVaildList_24030664(
                        MasterData_WarQuestSelectionMaster,
                        Instance,
                        presentIds,
                        v22);
  if ( !Instance )
    goto LABEL_28;
  v23 = *(_DWORD *)(Instance + 24);
  v24 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= v23 )
      {
        v37 = sub_B2C460(Instance);
        sub_B2C400(v37, 0LL);
      }
      v26 = *(_QWORD *)(Instance + 8LL * (int)v25 + 32);
      if ( !v26 )
        goto LABEL_28;
      v27 = *(_DWORD *)(v26 + 72);
      if ( v27 == 11 || v27 == 1 )
        break;
      if ( (int)++v25 >= v23 )
        goto LABEL_22;
    }
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_22;
    }
LABEL_28:
    sub_B2C434(Instance, v20);
  }
LABEL_22:
  v28 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v28,
    v24,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___67324720);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.receiveList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.receiveIdx = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v35,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                        v35,
                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_28;
  UserPresentReceiveRequest__beginRequest(
    (UserPresentReceiveRequest_o *)Instance,
    presentIds,
    selectIdx,
    selectNum,
    0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v36);
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
      sub_B2C434(userPresentListViewManager, method);
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
  int v20; // w22
  GetSvts_array *getSvtList; // x22
  struct System_String_o *v22; // x23
  __int64 v23; // x24
  int32_t v24; // w23
  _BOOL4 v25; // w23
  bool v26; // w22
  const MethodInfo *v27; // x4
  _BOOL4 v28; // w22
  GetCommandCodes_array *getCommandCodeList; // x22
  struct System_String_o *age; // x23
  __int64 v31; // x24
  int32_t v32; // w23
  const MethodInfo *v33; // x4
  int64_t userCommandCodeId; // x22
  bool isNew; // w23
  bool Eff; // w0
  const MethodInfo *v37; // x7
  int32_t num; // w5
  bool v39; // w3
  UserPresentBoxWindow_o *v40; // x0
  int64_t v41; // x1
  bool v42; // w2
  int32_t v43; // w4
  int32_t presentDialogMessageId; // w6
  int32_t objectId; // w20
  const MethodInfo *v46; // x2
  _BOOL8 IsEquip; // x0
  const MethodInfo *v48; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v50; // x2
  int32_t v51; // w21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v53; // x2
  QuestRewardInfo_o *v54; // x0
  const MethodInfo *v55; // x2
  bool IsOrganization; // w0
  int64_t userSvtId; // x22
  _BOOL4 v58; // w23
  int64_t v59; // x21
  CommonUI_o *v60; // x20
  CombineResultEffectComponent_ClickDelegate_o *v61; // x22
  ServantCostumeEntity_o *v62; // [xsp+8h] [xbp-58h] BYREF
  GetCommandCodes_o *v63; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v64; // [xsp+18h] [xbp-48h] BYREF
  GetSvts_o *data; // [xsp+20h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v2 = this;
  if ( (byte_41870A7 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v9);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    this = (UserPresentBoxWindow_o *)sub_B2C35C(&Method_UserPresentBoxWindow__showEffect_b__88_0__, v14);
    byte_41870A7 = 1;
  }
  data = 0LL;
  entity = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v62 = 0LL;
  receiveList = v2->fields.receiveList;
  if ( !receiveList )
    goto LABEL_102;
  receiveIdx = v2->fields.receiveIdx;
  size = receiveList->fields._size;
  if ( (int)receiveIdx >= size )
    goto LABEL_93;
  if ( size <= (unsigned int)receiveIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v18 = receiveList->fields._items->m_Items[receiveIdx];
  if ( !v18 )
    goto LABEL_102;
  giftType = v18->fields.giftType;
  if ( !Gift__IsServant(giftType, 0LL) )
  {
    if ( Gift__IsCommandCode(giftType, 0LL) )
    {
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                         &v64,
                                         v18->fields.objectId,
                                         (const MethodInfo_24E412C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_93;
      if ( !v64 )
        goto LABEL_102;
      getCommandCodeList = v2->fields.getCommandCodeList;
      v31 = *(_QWORD *)&v64->fields.id;
      age = v64->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v68.fields.currentCryptoKey = v31;
      *(_QWORD *)&v68.fields.fakeValue = age;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v68, 0LL);
      if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      if ( !MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v63, v32, 0LL) )
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
      this = (UserPresentBoxWindow_o *)v63;
      if ( !v63 )
        goto LABEL_102;
      v2->fields.gotServant = v63->fields.isNew;
      this = (UserPresentBoxWindow_o *)GetCommandCodes__isDoGetEff((GetCommandCodes_o *)this, 0LL);
      if ( !v63 )
        goto LABEL_102;
      if ( !UserPresentBoxWindow__checkNewCommandCode(
              v2,
              v63->fields.userCommandCodeId,
              (unsigned __int8)this & 1,
              1,
              v33) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v63;
      if ( !v63 )
        goto LABEL_102;
      userCommandCodeId = v63->fields.userCommandCodeId;
      isNew = v63->fields.isNew;
      Eff = GetCommandCodes__isDoGetEff(v63, 0LL);
      num = v18->fields.num;
      v39 = Eff;
      v40 = v2;
      v41 = userCommandCodeId;
      v42 = isNew;
      v43 = giftType;
      presentDialogMessageId = 0;
LABEL_98:
      UserPresentBoxWindow__startRewardGetEffect(v40, v41, v42, v39, v43, num, presentDialogMessageId, v37);
      return;
    }
    if ( Gift__IsCostumeRelease(giftType, 0LL) )
    {
      objectId = v18->fields.objectId;
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !this )
        goto LABEL_102;
      if ( !ServantCostumeMaster__TryGetEntity(
              (ServantCostumeMaster_o *)this,
              &v62,
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
          if ( v62 )
          {
            UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(v2, v62->fields.name, v46);
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
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v18, v48);
        UserPresentBoxWindow__startRewardEquipGetEffect(v2, QuestRewardInfo, v50);
        return;
      }
      if ( !Gift__IsItem(giftType, 0LL) )
        goto LABEL_93;
      v51 = v18->fields.objectId;
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_102;
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)this, v51, 0LL) )
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
          v54 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v18, v53);
          UserPresentBoxWindow__startRewardSpecialItemGetEffect(v2, v54, v55);
          return;
        }
      }
    }
LABEL_102:
    sub_B2C434(this, method);
  }
  this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     &entity,
                                     v18->fields.objectId,
                                     (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_93;
  if ( !entity )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
  if ( !entity )
    goto LABEL_102;
  v20 = (int)this;
  this = (UserPresentBoxWindow_o *)SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL);
  if ( ((v20 | (unsigned int)this) & 1) != 0 )
    goto LABEL_93;
  if ( !entity )
    goto LABEL_102;
  getSvtList = v2->fields.getSvtList;
  v23 = *(_QWORD *)&entity->fields.id;
  v22 = entity->fields.age;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v67.fields.currentCryptoKey = v23;
  *(_QWORD *)&v67.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v67, 0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  if ( !MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v24, giftType, 0LL) )
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
  v25 = data->fields.isNew;
  v26 = GetSvts__isDoGetEff(data, 0LL);
  this = (UserPresentBoxWindow_o *)Gift__IsEventSvtJoin(giftType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v28 = 0;
  }
  else
  {
    if ( !data )
      goto LABEL_102;
    v28 = !UserPresentBoxWindow__checkNew(v2, data->fields.userSvtId, v26, 1, v27);
  }
  this = (UserPresentBoxWindow_o *)entity;
  if ( !entity )
    goto LABEL_102;
  IsOrganization = ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL);
  if ( v25 && IsOrganization )
    v2->fields.gotServant = 1;
  this = (UserPresentBoxWindow_o *)entity;
  if ( !entity )
    goto LABEL_102;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0LL) )
  {
    this = (UserPresentBoxWindow_o *)entity;
    if ( !entity )
      goto LABEL_102;
    if ( ((v28 | ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL)) & 1) == 0 )
    {
      this = (UserPresentBoxWindow_o *)data;
      if ( !data )
        goto LABEL_102;
      userSvtId = data->fields.userSvtId;
      v58 = data->fields.isNew;
      this = (UserPresentBoxWindow_o *)GetSvts__isDoGetEff(data, 0LL);
      if ( !data )
        goto LABEL_102;
      num = v18->fields.num;
      presentDialogMessageId = data->fields.presentDialogMessageId;
      v42 = v58;
      v39 = (unsigned __int8)this & 1;
      v40 = v2;
      v41 = userSvtId;
      v43 = giftType;
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
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( data )
      {
        v59 = data->fields.userSvtId;
        v60 = (CommonUI_o *)this;
        v61 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B2C42C(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v61,
          (Il2CppObject *)v2,
          Method_UserPresentBoxWindow__showEffect_b__88_0__,
          0LL);
        if ( v60 )
        {
          CommonUI__OpenSecretTreasureDeviceForSvtGet(v60, v59, v61, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_41870B4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v6);
    sub_B2C35C(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, v7);
    byte_41870B4 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    goto LABEL_12;
  MissionNotifyManager__CancelPause(v8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_B2C434(v8, v9);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v13, 0LL);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_41870A9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, name);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__, v7);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, v8);
    byte_41870A9 = 1;
  }
  v9 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass90_0___ctor((UserPresentBoxWindow___c__DisplayClass90_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = name;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)name, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(touchBlocker, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_41870AA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, questRewardInfo);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__, v7);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, v8);
    byte_41870AA = 1;
  }
  v9 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass91_0___ctor((UserPresentBoxWindow___c__DisplayClass91_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = questRewardInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)questRewardInfo,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(touchBlocker, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UserServantEntity_o *v37; // x21
  EventServantEntity_o *EventServant_21666156; // x0
  EventServantEntity_o *v39; // x22
  __int64 v40; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **JoinMessage; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 *v54; // x8
  CommonUI_o *v55; // x19
  AvalonSceneManager_c *v56; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v58; // x21
  System_Int32_array **Message; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  CommonUI_o *v73; // x20
  AvalonSceneManager_c *v74; // x8
  float v75; // s8
  System_Action_o *v76; // x21

  if ( (byte_41870A8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, userSvtID);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&ScriptManager_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__, v22);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, v23);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__, v24);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_12438/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v26);
    sub_B2C35C(&StringLiteral_12439/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/, v27);
    byte_41870A8 = 1;
  }
  v28 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_0___ctor((UserPresentBoxWindow___c__DisplayClass89_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_34;
  *(_QWORD *)(v28 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)(v28 + 24) = giftType;
  *(_QWORD *)(v28 + 32) = userSvtID;
  *(_DWORD *)(v28 + 44) = num;
  *(_DWORD *)(v28 + 52) = presentDialogMessageId;
  *(_BYTE *)(v28 + 40) = isDoEffect;
  *(_BYTE *)(v28 + 48) = isNew;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteDialogKey(0LL);
  if ( !Gift__IsEventSvtJoin(*(_DWORD *)(v28 + 24), 0LL) )
    goto LABEL_19;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                *(_QWORD *)(v28 + 32),
                                (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v37 = (UserServantEntity_o *)Instance;
  EventServant_21666156 = UserServantEntity__getEventServant_21666156((UserServantEntity_o *)Instance, 1, 0LL);
  if ( !EventServant_21666156 || (v39 = EventServant_21666156, EventServant_21666156->fields.type != 2) )
  {
LABEL_19:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v55 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v56 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v56 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v56->static_fields->DEFAULT_FADE_TIME;
      v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v58,
        (Il2CppObject *)v28,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v55 )
      {
        CommonUI__maskFadeout(v55, 1, DEFAULT_FADE_TIME, v58, 0LL);
        return;
      }
    }
LABEL_34:
    sub_B2C434(Instance, v30);
  }
  v40 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_1___ctor((UserPresentBoxWindow___c__DisplayClass89_1_o *)v40, 0LL);
  if ( !v40 )
    goto LABEL_34;
  *(_QWORD *)(v40 + 32) = v28;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 32), (System_Int32_array **)v28, v41, v42, v43, v44, v45, v46);
  if ( UserServantEntity__HasStatus(v37, 64, 0LL) )
  {
    JoinMessage = (System_Int32_array **)EventServantEntity__GetJoinMessage(v39, 0LL);
    *(_QWORD *)(v40 + 24) = JoinMessage;
    sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 24), JoinMessage, v48, v49, v50, v51, v52, v53);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = &StringLiteral_12439/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = (System_Int32_array **)EventServantEntity__GetGetMessage(v39, 0LL);
    *(_QWORD *)(v40 + 24) = Message;
    sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 24), Message, v60, v61, v62, v63, v64, v65);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = &StringLiteral_12438/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v66 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v54, 0LL);
  *(_QWORD *)(v40 + 16) = v66;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 16), v66, v67, v68, v69, v70, v71, v72);
  v73 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v74 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v74 = AvalonSceneManager_TypeInfo;
  }
  v75 = v74->static_fields->DEFAULT_FADE_TIME;
  v76 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v76,
    (Il2CppObject *)v40,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v73 )
    goto LABEL_34;
  CommonUI__maskFadein(v73, v75, v76, 0LL);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_41870AB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, questRewardInfo);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__, v7);
    sub_B2C35C(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, v8);
    byte_41870AB = 1;
  }
  v9 = sub_B2C42C(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass92_0___ctor((UserPresentBoxWindow___c__DisplayClass92_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = questRewardInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)questRewardInfo,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(touchBlocker, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow_ClickDelegate___ctor(
        UserPresentBoxWindow_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41856C6 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, hasGetServant);
    byte_41856C6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, hasGetServant, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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
    sub_B2C434(0LL, method);
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
  __int64 v5; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  struct UserPresentBoxWindow_o *v7; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  void *v9; // x1

  if ( (byte_41856B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_41856B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.userPresentListViewManager) == 0LL
    || (UserPresentListViewManager__resetCheckStatus((UserPresentListViewManager_o *)Instance, 0LL),
        (v7 = this->fields.__4__this) == 0LL)
    || (userPresentListViewManager = v7->fields.userPresentListViewManager) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  v9 = StringLiteral_1/*""*/;
  userPresentListViewManager->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&userPresentListViewManager->fields._expiredPresents_k__BackingField, v9);
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
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  UserPresentBoxEventPointRewardDialog_o *v6; // x20
  System_Action_o *monitor; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_41856B7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isOk);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_B2C35C(
                                                             &Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
                                                             v4);
    byte_41856B7 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_8;
  v6 = *(UserPresentBoxEventPointRewardDialog_o **)&klass->_2.interfaces_count;
  monitor = (System_Action_o *)v3[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v3,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    v3[2].monitor = monitor;
    sub_B2C2F8(&v3[2].monitor, monitor);
  }
  if ( !v6 )
LABEL_8:
    sub_B2C434(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_24029420(v6, monitor, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxWindow__UpdateEventInfos(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B2C434(_4__this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v8; // x20

  if ( (byte_41856B9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__, v4);
    byte_41856B9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  SummonAssetManager__LoadSummonAssets(v8, _9__3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_41856B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_41856B8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v5);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0LL);
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
  UserServantEntity_o *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  UserPresentBoxWindow___c__DisplayClass89_0_Fields *p_fields; // x25
  UserServantEntity_o *v17; // x20
  SummonAssetManager_o *v18; // x21
  int32_t v19; // w21
  ServantRewardAction_o *svtGetAction; // x22
  __int64 v21; // x23
  __int64 v22; // x24
  int32_t v23; // w0
  __int128 v24; // q1
  int32_t v25; // w23
  int64_t v26; // x0
  __int64 v27; // x8
  int64_t v28; // x20
  struct ServantRewardAction_o *v29; // x8
  UserServantEntity_o *v30; // x0
  struct UserPresentBoxWindow_o *v31; // x22
  UserServantEntity_o *v32; // x21
  SummonAssetManager_o *v33; // x20
  struct UserPresentBoxWindow_o *v34; // x8
  ServantRewardAction_o *v35; // x20
  __int128 v36; // q1
  bool isNew; // w2
  int64_t v38; // x1
  bool v39; // w3
  int32_t v40; // w4
  ServantRewardAction_o *v41; // x0
  ServantRewardAction_o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  int32_t v45; // w0
  __int128 v46; // q1
  int32_t v47; // w22
  int64_t v48; // x0
  __int64 v49; // x8
  int64_t v50; // x20
  __int128 v51; // q1
  Il2CppObject *v52; // x19
  System_Action_o *v53; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_41856BA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_B2C35C(&Method_UserPresentBoxWindow_EndEffect__, v11);
    byte_41856BA = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_62;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_fields = &this->fields;
    _4__this = this->fields.__4__this;
    v17 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !this->fields.__4__this )
      goto LABEL_62;
    v18 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)this->fields.__4__this->fields.effectPanel;
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v18 )
      goto LABEL_62;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v18, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_62;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_B2C2F8(&_4__this->fields.svtGetAction, Instance);
    if ( this->fields.isDoEffect )
    {
      if ( v17 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_21666156(v17, 1, 0LL);
        v19 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v19 = 6;
          else
            v19 = 14;
        }
        if ( p_fields->__4__this )
        {
          svtGetAction = p_fields->__4__this->fields.svtGetAction;
          v22 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
          v21 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v59.fields.currentCryptoKey = v22;
          *(_QWORD *)&v59.fields.fakeValue = v21;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v59, 0LL);
          v24 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
          v25 = v23;
          *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v58.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v58;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          v27 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
          *(_QWORD *)&v60.fields.fakeValue = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
          v28 = v26;
          *(_QWORD *)&v60.fields.currentCryptoKey = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v60, 0LL);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v25,
              v28,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v19,
              0LL);
            if ( !this->fields.isNew )
              goto LABEL_60;
            if ( p_fields->__4__this )
            {
              v29 = p_fields->__4__this->fields.svtGetAction;
              if ( v29 )
              {
                v29->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_60;
              }
            }
          }
        }
      }
LABEL_62:
      sub_B2C434(Instance, v13);
    }
    if ( !p_fields->__4__this || !v17 )
      goto LABEL_62;
    v42 = p_fields->__4__this->fields.svtGetAction;
    v44 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v61.fields.currentCryptoKey = v44;
    *(_QWORD *)&v61.fields.fakeValue = v43;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61, 0LL);
    v46 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
    v47 = v45;
    *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v58.fields.fakeValue = v46;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v56 = v58;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v56, 0LL);
    v49 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v62.fields.fakeValue = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
    v50 = v48;
    *(_QWORD *)&v62.fields.currentCryptoKey = v49;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62, 0LL);
    if ( !v42 )
      goto LABEL_62;
    ServantRewardAction__Setup(v42, v47, v50, Instance, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_62;
    v30 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_fields = &this->fields;
    v31 = this->fields.__4__this;
    v32 = v30;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !this->fields.__4__this )
      goto LABEL_62;
    v33 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)this->fields.__4__this->fields.effectPanel;
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v33 )
      goto LABEL_62;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v33, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !v31 )
      goto LABEL_62;
    v31->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_B2C2F8(&v31->fields.svtGetAction, Instance);
    v34 = this->fields.__4__this;
    if ( !v34 || !v32 )
      goto LABEL_62;
    v35 = v34->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v36 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v58.fields.fakeValue = v36;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v55 = v58;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v55, 0LL);
      if ( !v35 )
        goto LABEL_62;
      isNew = this->fields.isNew;
      v38 = Instance;
      v39 = 1;
      v40 = 14;
      v41 = v35;
    }
    else
    {
      v51 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v58.fields.fakeValue = v51;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v54 = v58;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v54, 0LL);
      if ( !v35 )
        goto LABEL_62;
      v38 = Instance;
      v40 = 6;
      v41 = v35;
      isNew = 0;
      v39 = 0;
    }
    ServantRewardAction__SetupCommandCode_28839180(v41, v38, isNew, v39, v40, 0LL);
  }
  else
  {
    p_fields = &this->fields;
  }
LABEL_60:
  v52 = (Il2CppObject *)p_fields->__4__this;
  v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v53, v52, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v52 )
    goto LABEL_62;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v52, v53, 0LL);
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
  Il2CppObject *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *monitor; // x22
  CommonUI_o *v11; // x19

  if ( (byte_41856BB & 1) == 0 )
  {
    sub_B2C35C(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__, v4);
    byte_41856BB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  monitor = (NotificationDialog_ClickDelegate_o *)CS___8__locals1[3].monitor;
  v11 = (CommonUI_o *)Instance;
  if ( !monitor )
  {
    monitor = (NotificationDialog_ClickDelegate_o *)sub_B2C42C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      monitor,
      CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1[3].monitor = monitor;
    sub_B2C2F8(&CS___8__locals1[3].monitor, monitor);
  }
  if ( !v11 )
LABEL_8:
    sub_B2C434(Instance, v6);
  CommonUI__OpenNotificationDialog_17973524(
    v11,
    title,
    message,
    monitor,
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
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41856BC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_41856BC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__LoadCostumeReleaseEffect(v8, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x21
  System_String_o *name; // x20

  if ( (byte_41856BD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_41856BD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__OpenCostumeReleaseEffect(v8, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41856BE & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41856BE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41856BF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__, v4);
    byte_41856BF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__LoadEquipGetEffect(v8, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_41856C0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__, v4);
    byte_41856C0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__OpenEquipGetEffect(v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41856C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41856C1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_41856C2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__, v4);
    byte_41856C2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
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

  if ( (byte_41856C3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__, v4);
    byte_41856C3 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
LABEL_9:
    sub_B2C434(Instance, v6);
  CommonUI__OpenItemGetEffect(v8, v10, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41856C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41856C4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  if ( (byte_41856C5 & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41856C5 = 1;
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
  UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v5->fields.touchBlocker) == 0LL )
LABEL_11:
    sub_B2C434(this, method);
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