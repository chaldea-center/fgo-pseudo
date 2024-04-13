void __fastcall UserPresentBoxWindow___ctor(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_int__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_long__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E7228 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v11, v12, v13);
    byte_42E7228 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.befSvtList = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.befCommandCodeList = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.befCommandCodeList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserPresentBoxWindow__CallbackReceiveRequest(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserPresentBoxWindow_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  const MethodInfo *v24; // x1
  Il2CppObject *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UserPresentBoxWindow_o *v32; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  System_Int32_array **klass; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UnityEngine_GameObject_o *v41; // x8
  System_Int32_array **monitor; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UnityEngine_GameObject_o *v49; // x8
  struct UnityEngine_GameObject_o *v50; // x8
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UnityEngine_GameObject_o *v58; // x8
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct UnityEngine_GameObject_o *v66; // x8
  System_Int32_array **v67; // x1
  System_Action_o *v68; // x20
  const MethodInfo *v69; // x2
  __int64 v70; // x0

  v5 = this;
  if ( (byte_42E7202 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___, v6, v7, v8);
    sub_B5D5C4(&JsonManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v18, v19, v20);
    this = (UserPresentBoxWindow_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v21, v22, v23);
    byte_42E7202 = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    UserPresentBoxWindow__ReDisp(v5, v24);
    return;
  }
  v25 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (UserPresentBoxWindow_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                     v25,
                                     (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_UserPresentBoxWindow_resData___);
  if ( !this )
    goto LABEL_23;
  v32 = this;
  if ( !LODWORD(this->fields.myFsm) )
    goto LABEL_24;
  bgObject = this->fields.bgObject;
  if ( !bgObject )
    goto LABEL_23;
  klass = (System_Int32_array **)bgObject[1].klass;
  v5->fields.getSvtList = (struct GetSvts_array *)klass;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.getSvtList, klass, v26, v27, v28, v29, v30, v31);
  if ( !LODWORD(v32->fields.myFsm) )
    goto LABEL_24;
  v41 = v32->fields.bgObject;
  if ( !v41 )
    goto LABEL_23;
  monitor = (System_Int32_array **)v41[1].monitor;
  v5->fields.getCommandCodeList = (struct GetCommandCodes_array *)monitor;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.getCommandCodeList, monitor, v35, v36, v37, v38, v39, v40);
  if ( !LODWORD(v32->fields.myFsm) )
    goto LABEL_24;
  v49 = v32->fields.bgObject;
  if ( !v49 )
    goto LABEL_23;
  v5->fields.presentOverflowType = v49->fields.m_CachedPtr;
  if ( !LODWORD(v32->fields.myFsm) )
    goto LABEL_24;
  v50 = v32->fields.bgObject;
  if ( !v50 )
    goto LABEL_23;
  v51 = *(System_Int32_array ***)&v50[1].fields.m_CachedPtr;
  v5->fields.evPointRewardList = (struct UserPresentBoxWindow_evPointReward_array *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.evPointRewardList, v51, v43, v44, v45, v46, v47, v48);
  if ( !LODWORD(v32->fields.myFsm) )
    goto LABEL_24;
  v58 = v32->fields.bgObject;
  if ( !v58 )
    goto LABEL_23;
  v59 = (System_Int32_array **)v58[2].klass;
  v5->fields.getSvtCoins = (struct GetSvtCoin_array *)v59;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.getSvtCoins, v59, v52, v53, v54, v55, v56, v57);
  if ( !LODWORD(v32->fields.myFsm) )
  {
LABEL_24:
    v70 = sub_B5D6C8(this);
    sub_B5D668(v70, 0LL);
  }
  v66 = v32->fields.bgObject;
  if ( !v66 )
LABEL_23:
    sub_B5D69C(this, result);
  v67 = (System_Int32_array **)v66[2].monitor;
  v5->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v67;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.overflowSvtCoinInfos, v67, v60, v61, v62, v63, v64, v65);
  v68 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v68, (Il2CppObject *)v5, Method_UserPresentBoxWindow__CallbackReceiveRequest_b__80_0__, 0LL);
  UserPresentBoxWindow__ShowExpiredPresents(v5, v68, v69);
}


bool __fastcall UserPresentBoxWindow__CheckFilter(
        UserPresentBoxWindow_o *this,
        ServantMaster_o *servantMaster,
        ItemMaster_o *itemMaster,
        UserPresentBoxEntity_o *userPresentBoxEntity,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 Filter_34050856; // x0
  ListViewSort_o **v24; // x8
  ListViewSort_o *v25; // x19
  char v26; // vf
  UserPresentBoxMaster_c *v27; // x8
  struct UserPresentBoxMaster_StaticFields *static_fields; // x9
  int32_t flag; // w10
  bool v30; // w8
  System_Int32_array *PresentBoxFilterSvtEquipMaterial; // x8
  int32_t v32; // w1

  if ( (byte_42E71FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)servantMaster, (_DWORD)itemMaster, userPresentBoxEntity);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v20, v21, v22);
    byte_42E71FF = 1;
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)servantMaster, (_DWORD)itemMaster, userPresentBoxEntity);
    byte_42E722E = 1;
  }
  Filter_34050856 = (__int64)UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_34050856 = (__int64)UserPresentListViewManager_TypeInfo;
  }
  v24 = *(ListViewSort_o ***)(Filter_34050856 + 184);
  v25 = *v24;
  if ( !*v24 )
    goto LABEL_60;
  Filter_34050856 = ListViewSort__GetFilter_34050856(*v24, 13, 0LL);
  if ( (Filter_34050856 & 1) == 0 )
  {
    if ( !userPresentBoxEntity )
      goto LABEL_60;
LABEL_25:
    switch ( userPresentBoxEntity->fields.giftType )
    {
      case 1:
        Filter_34050856 = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Filter_34050856 = (__int64)BalanceConfig_TypeInfo;
        }
        PresentBoxFilterSvtEquipMaterial = *(System_Int32_array **)(*(_QWORD *)(Filter_34050856 + 184) + 640LL);
        if ( PresentBoxFilterSvtEquipMaterial )
        {
          if ( (*(_BYTE *)(Filter_34050856 + 307) & 4) != 0 && !*(_DWORD *)(Filter_34050856 + 224) )
          {
            j_il2cpp_runtime_class_init_0(Filter_34050856);
            PresentBoxFilterSvtEquipMaterial = BalanceConfig_TypeInfo->static_fields->PresentBoxFilterSvtEquipMaterial;
          }
          Filter_34050856 = System_Array__IndexOf_int_(
                              PresentBoxFilterSvtEquipMaterial,
                              userPresentBoxEntity->fields.objectId,
                              (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
          if ( (Filter_34050856 & 0x80000000) == 0 )
          {
            LOBYTE(Filter_34050856) = ListViewSort__GetFilter_34050856(v25, 4, 0LL);
            return Filter_34050856;
          }
        }
        if ( servantMaster )
        {
          Filter_34050856 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                       userPresentBoxEntity->fields.objectId,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Filter_34050856 )
          {
            switch ( *(_DWORD *)(Filter_34050856 + 84) )
            {
              case 1:
              case 0xC:
                goto LABEL_26;
              case 3:
                v32 = 1;
                goto LABEL_47;
              case 6:
                v32 = 3;
                goto LABEL_47;
              case 7:
                v32 = 2;
                goto LABEL_47;
              case 8:
                v32 = 4;
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
        Filter_34050856 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
                                     userPresentBoxEntity->fields.objectId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Filter_34050856 )
          break;
        switch ( *(_DWORD *)(Filter_34050856 + 48) )
        {
          case 2:
          case 0x11:
          case 0x14:
            v32 = 10;
            break;
          case 3:
          case 4:
            v32 = 6;
            break;
          case 5:
            v32 = 11;
            break;
          case 9:
            v32 = 8;
            break;
          case 0xA:
          case 0xB:
          case 0xC:
          case 0x19:
          case 0x1D:
            v32 = 7;
            break;
          case 0xE:
          case 0xF:
          case 0x12:
          case 0x13:
          case 0x1C:
            v32 = 12;
            break;
          case 0x18:
            v32 = 9;
            break;
          default:
            goto LABEL_46;
        }
LABEL_47:
        if ( ListViewSort__GetFilter_34050856(v25, v32, 0LL) )
LABEL_48:
          LOBYTE(Filter_34050856) = 1;
        else
          LOBYTE(Filter_34050856) = 0;
        return Filter_34050856;
      case 6:
      case 7:
LABEL_26:
        v30 = ListViewSort__GetFilter_34050856(v25, 0, 0LL);
        LOBYTE(Filter_34050856) = 0;
        if ( !v30 )
          return Filter_34050856;
        goto LABEL_48;
      case 0xB:
        v32 = 5;
        goto LABEL_47;
      default:
LABEL_46:
        v32 = 14;
        goto LABEL_47;
    }
LABEL_60:
    sub_B5D69C(Filter_34050856, servantMaster);
  }
  v27 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v27 = UserPresentBoxMaster_TypeInfo;
  }
  if ( !userPresentBoxEntity )
    goto LABEL_60;
  static_fields = v27->static_fields;
  flag = userPresentBoxEntity->fields.flag;
  LOBYTE(Filter_34050856) = 1;
  if ( (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) < 0) ^ v26 | (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) == 0) )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      flag = userPresentBoxEntity->fields.flag;
      static_fields = UserPresentBoxMaster_TypeInfo->static_fields;
    }
    Filter_34050856 = 1LL;
    if ( ((1 << static_fields->IMPORTANT_FOR_LIMIT) & flag) < 1 )
      goto LABEL_25;
  }
  return Filter_34050856;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *Filter_34050856; // x0
  ListViewSort_o **v18; // x8
  ListViewSort_o *v19; // x19
  struct UserPresentBoxMaster_StaticFields *static_fields; // x9
  int32_t flag; // w10
  bool v22; // w8
  int32_t giftType; // w8
  _DWORD *v24; // x8
  bool Filter_34050916; // w0
  int32_t v26; // w1

  if ( (byte_42E7200 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__,
      (_DWORD)servantLimitMaster,
      (_DWORD)commandCodeMaster,
      userPresentBoxEntity);
    sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v14, v15, v16);
    byte_42E7200 = 1;
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(
      &UserPresentListViewManager_TypeInfo,
      (_DWORD)servantLimitMaster,
      (_DWORD)commandCodeMaster,
      userPresentBoxEntity);
    byte_42E722E = 1;
  }
  Filter_34050856 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    Filter_34050856 = UserPresentListViewManager_TypeInfo;
  }
  v18 = (ListViewSort_o **)*((_QWORD *)Filter_34050856 + 23);
  v19 = *v18;
  if ( isActiveFilterCategory )
  {
    if ( !v19 )
      goto LABEL_55;
    Filter_34050856 = (void *)ListViewSort__GetFilter_34050856(*v18, 13, 0LL);
    if ( ((unsigned __int8)Filter_34050856 & 1) == 0 )
    {
      if ( !userPresentBoxEntity )
        goto LABEL_55;
      goto LABEL_26;
    }
  }
  Filter_34050856 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    Filter_34050856 = UserPresentBoxMaster_TypeInfo;
  }
  if ( !userPresentBoxEntity )
    goto LABEL_55;
  static_fields = (struct UserPresentBoxMaster_StaticFields *)*((_QWORD *)Filter_34050856 + 23);
  flag = userPresentBoxEntity->fields.flag;
  v22 = 1;
  if ( (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) < 0) ^ v6 | (((1 << static_fields->IMPORTANT_FOR_EVENT) & flag) == 0) )
  {
    if ( (*((_BYTE *)Filter_34050856 + 307) & 4) != 0 && !*((_DWORD *)Filter_34050856 + 56) )
    {
      j_il2cpp_runtime_class_init_0(Filter_34050856);
      flag = userPresentBoxEntity->fields.flag;
      static_fields = UserPresentBoxMaster_TypeInfo->static_fields;
    }
    v22 = 1;
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
            Filter_34050856 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)commandCodeMaster,
                                userPresentBoxEntity->fields.objectId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
            if ( Filter_34050856 )
            {
              v24 = (char *)Filter_34050856 + 64;
LABEL_35:
              switch ( *v24 )
              {
                case 0:
                  if ( !v19 )
                    goto LABEL_55;
                  if ( !ListViewSort__CheckPresentBoxRarityFilterAll(v19, 0LL)
                    && !ListViewSort__UnCheckPresentBoxRarityFilterAll(v19, 0LL) )
                  {
                    goto LABEL_54;
                  }
                  return 1;
                case 1:
                  if ( !v19 )
                    goto LABEL_55;
                  Filter_34050916 = ListViewSort__GetFilter_34050916(v19, 0, 0LL);
                  v22 = 0;
                  if ( !Filter_34050916 )
                    return v22;
                  return 1;
                case 2:
                  if ( !v19 )
                    goto LABEL_55;
                  v26 = 1;
                  goto LABEL_51;
                case 3:
                  if ( !v19 )
                    goto LABEL_55;
                  v26 = 2;
                  goto LABEL_51;
                case 4:
                  if ( !v19 )
                    goto LABEL_55;
                  v26 = 3;
                  goto LABEL_51;
                case 5:
                  if ( !v19 )
                    goto LABEL_55;
                  v26 = 4;
LABEL_51:
                  if ( ListViewSort__GetFilter_34050916(v19, v26, 0LL) )
                    return 1;
LABEL_54:
                  v22 = 0;
                  break;
                default:
                  return 1;
              }
              return v22;
            }
            return 1;
          }
LABEL_55:
          sub_B5D69C(Filter_34050856, servantLimitMaster);
        }
        if ( giftType != 1 )
          return 1;
      }
      if ( servantLimitMaster )
      {
        Filter_34050856 = ServantLimitMaster__GetEntity(
                            servantLimitMaster,
                            userPresentBoxEntity->fields.objectId,
                            0,
                            0LL);
        if ( Filter_34050856 )
        {
          v24 = (char *)Filter_34050856 + 24;
          goto LABEL_35;
        }
        return 1;
      }
      goto LABEL_55;
    }
  }
  return v22;
}


void __fastcall UserPresentBoxWindow__CheckSvtGetTutorial(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  System_Action_o *v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o **v27; // x22
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x21
  __int64 receiveIdx; // x20
  int size; // w8
  UserPresentBoxEntity_o *v31; // x21
  System_Action_o *v32; // x20

  if ( (byte_42E7217 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__, v12, v13, v14);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo, v15, v16, v17);
    byte_42E7217 = 1;
  }
  v18 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass102_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass102_0___ctor((UserPresentBoxWindow___c__DisplayClass102_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_16;
  *(_QWORD *)(v18 + 16) = callback;
  v27 = (System_Action_o **)(v18 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    goto LABEL_16;
  receiveIdx = this->fields.receiveIdx;
  size = receiveList->fields._size;
  if ( (int)receiveIdx < size )
  {
    if ( size <= (unsigned int)receiveIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v31 = receiveList->fields._items->m_Items[receiveIdx];
    if ( v31 )
    {
      if ( Gift__IsServant(v31->fields.giftType, 0LL) )
      {
        v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v32,
          (Il2CppObject *)v18,
          Method_UserPresentBoxWindow___c__DisplayClass102_0__CheckSvtGetTutorial_b__0__,
          0LL);
        EventTutorialMaster__CheckTutorial(-1, 11, v32, v31->fields.objectId, 0, 0, 0, 0LL);
        return;
      }
      v19 = *v27;
      if ( *v27 )
      {
        System_Action__Invoke(v19, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(v19, v20);
  }
  if ( *v27 )
    ActionExtensions__Call(*v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__ClickFilterEnd(
        UserPresentBoxWindow_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserPresentListViewManager_c *v6; // x0
  ListViewSort_o *sortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42E7227 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, result, (_DWORD)method, v3);
    byte_42E7227 = 1;
  }
  if ( result )
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42E722E )
    {
      sub_B5D5C4(&UserPresentListViewManager_TypeInfo, result, (_DWORD)method, v3);
      byte_42E722E = 1;
    }
    v6 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v6 = UserPresentListViewManager_TypeInfo;
    }
    sortInfo = v6->static_fields->sortInfo;
    if ( !sortInfo
      || (ListViewSort__Save(sortInfo, 0LL),
          (sortInfo = (ListViewSort_o *)this->fields.userPresentListViewManager) == 0LL) )
    {
LABEL_17:
      sub_B5D69C(sortInfo, result);
    }
    UserPresentListViewManager__resetCheckStatus((UserPresentListViewManager_o *)sortInfo, 0LL);
    this->fields.mIsScrlResetPosition = 1;
    UserPresentBoxWindow__ReDisp(this, v8);
  }
  sortInfo = (ListViewSort_o *)this->fields.presentBoxFilterSelectMenu;
  if ( !sortInfo )
    goto LABEL_17;
  PresentBoxFilterSelectMenu__Close((PresentBoxFilterSelectMenu_o *)sortInfo, 0LL);
}


void __fastcall UserPresentBoxWindow__Close(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalSceneComponent_c *v8; // x0
  UnityEngine_Object_o *mInstance; // x20
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  __int64 v11; // x1

  if ( (byte_42E721D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    byte_42E721D = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v8->static_fields->mInstance;
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
    sub_B5D69C(userPresentListViewManager, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentListViewManager, 0, 0LL);
}


QuestRewardInfo_o *__fastcall UserPresentBoxWindow__CreateQuestRewardInfo(
        UserPresentBoxWindow_o *this,
        UserPresentBoxEntity_o *userPresentBox,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRewardInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  QuestRewardInfo_o *result; // x0

  if ( (byte_42E720E & 1) == 0 )
  {
    sub_B5D5C4(&QuestRewardInfo_TypeInfo, (_DWORD)userPresentBox, (_DWORD)method, v3);
    byte_42E720E = 1;
  }
  v5 = (QuestRewardInfo_o *)sub_B5D694(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v5, 0LL);
  if ( !userPresentBox || !v5 )
    sub_B5D69C(v6, v7);
  result = v5;
  v5->fields.type = userPresentBox->fields.giftType;
  v5->fields.objectId = userPresentBox->fields.objectId;
  v5->fields.num = userPresentBox->fields.num;
  return result;
}


void __fastcall UserPresentBoxWindow__EndEffect(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E720F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5559/*"END_EFFECT"*/, (_DWORD)method, v2, v3);
    byte_42E720F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5559/*"END_EFFECT"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EndEffectReceive(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E7218 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E7218 = 1;
  }
  UserPresentBoxWindow__ReDisp(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall UserPresentBoxWindow__EventPointRewardWithOutSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3

  if ( (byte_42E7205 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserPresentBoxWindow_EndReceive__, v5, v6, v7);
    byte_42E7205 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v8, v9);
}


void __fastcall UserPresentBoxWindow__EventPointRewardWithSvtGet(
        UserPresentBoxWindow_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3

  if ( (byte_42E7206 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserPresentBoxWindow_EndEffectReceive__, v5, v6, v7);
    byte_42E7206 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffectReceive__, 0LL);
  UserPresentBoxWindow__ShowEventPointReward(this, 0, v8, v9);
}


bool __fastcall UserPresentBoxWindow__IsShowEffectPresent(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  CommonUI_o *Instance; // x0
  __int64 v22; // x1
  char v23; // w19
  int v24; // w20
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E7203 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42E7203 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  receiveList = this->fields.receiveList;
  if ( !receiveList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)receiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B5D69C(v18, v19);
    if ( !Gift__IsCostumeRelease((int32_t)v27.fields.current[4].monitor, 0LL)
      && !Gift__IsEquip((int32_t)current[4].monitor, 0LL) )
    {
      if ( !Gift__IsItem((int32_t)current[4].monitor, 0LL) )
        continue;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v22);
      if ( !CommonUI__IsGetItemEffect(Instance, HIDWORD(current[4].monitor), 0LL) )
        continue;
    }
    v23 = 1;
    v24 = 2;
    goto LABEL_14;
  }
  v24 = 0;
  v23 = 0;
LABEL_14:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserPresentBoxEntity__Dispose__);
  return (v24 == 2) & v23;
}


void __fastcall UserPresentBoxWindow__OnClickAll(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  UserPresentDialog_o *presentDialog; // x20
  System_String_o *AllPresentStrings; // x21
  System_Action_o *v18; // x22
  System_Action_o *v19; // x23

  if ( (byte_42E7219 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentBoxWindow_ProcessClickAll__, v8, v9, v10);
    sub_B5D5C4(&Method_UserPresentBoxWindow__OnClickAll_b__105_0__, v11, v12, v13);
    byte_42E7219 = 1;
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
    UserPresentListViewManager__SetMode_21741664(userPresentListViewManager, 2, 0LL);
    userPresentListViewManager = this->fields.userPresentListViewManager;
    if ( !userPresentListViewManager
      || (presentDialog = this->fields.presentDialog,
          AllPresentStrings = UserPresentListViewManager__GetAllPresentStrings(userPresentListViewManager, 0LL),
          v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(v18, (Il2CppObject *)this, Method_UserPresentBoxWindow__OnClickAll_b__105_0__, 0LL),
          v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(v19, (Il2CppObject *)this, Method_UserPresentBoxWindow_ProcessClickAll__, 0LL),
          !presentDialog) )
    {
LABEL_15:
      sub_B5D69C(userPresentListViewManager, v14);
    }
    UserPresentDialog__OpenRecieve(presentDialog, AllPresentStrings, v18, v19, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxWindow_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_42E721E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E721E = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E721B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E721B = 1;
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
      sub_B5D69C(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_21741664(userPresentListViewManager, 2, 0LL);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *presentBoxFilterSelectMenu; // x21
  struct PresentBoxFilterSelectMenu_o **p_presentBoxFilterSelectMenu; // x20
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  struct UnityEngine_GameObject_o *presentBoxFilterKindSelectMenuPrefab; // x21
  UnityEngine_GameObject_o *v29; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  PresentBoxFilterSelectMenu_o *v40; // x20
  UserPresentListViewManager_c *v41; // x0
  ListViewSort_o *sortInfo; // x21
  PresentBoxFilterSelectMenu_CallbackFunc_o *v43; // x22

  if ( (byte_42E7226 & 1) == 0 )
  {
    sub_B5D5C4(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UserPresentBoxWindow_ClickFilterEnd__, v17, v18, v19);
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v20, v21, v22);
    byte_42E7226 = 1;
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
    v29 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)presentBoxFilterKindSelectMenuPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(v29, gameObject, 0LL);
    if ( !v29 )
LABEL_25:
      sub_B5D69C(v31, v32);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v29,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PresentBoxFilterSelectMenu___);
    *p_presentBoxFilterSelectMenu = (struct PresentBoxFilterSelectMenu_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.presentBoxFilterSelectMenu,
      Component_srcLineSprite,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = *p_presentBoxFilterSelectMenu;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v25, v26, v27);
    byte_42E722E = 1;
  }
  v41 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v41 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v41->static_fields->sortInfo;
  v43 = (PresentBoxFilterSelectMenu_CallbackFunc_o *)sub_B5D694(PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
  PresentBoxFilterSelectMenu_CallbackFunc___ctor(
    v43,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_ClickFilterEnd__,
    0LL);
  if ( !v40 )
    goto LABEL_25;
  PresentBoxFilterSelectMenu__Open(v40, sortInfo, v43, 0LL);
}


void __fastcall UserPresentBoxWindow__OnClickHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxWindow_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E7224 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7224 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  UserPresentBoxWindow__OpenHelp(v4, v5);
}


void __fastcall UserPresentBoxWindow__OnClickItem(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UserPresentListViewManager_o *userPresentListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E721A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E721A = 1;
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
      sub_B5D69C(userPresentListViewManager, v5);
    }
    UserPresentListViewManager__SetMode_21741664(userPresentListViewManager, 2, 0LL);
    UserPresentBoxWindow__SetBtnEnable(this, 0, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v19; // x1

  if ( (byte_42E721F & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserPresentHistoryRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__, v14, v15, v16);
    byte_42E721F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__OnClickPresentHistoryButton_b__112_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v17,
                                                         (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserPresentHistoryRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v19);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall UserPresentBoxWindow__OnDestroy(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v6; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E71F8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E71F8 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v6 = (UnityEngine_Object_o *)titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_B5D69C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_titleInfo, 0LL, v10, v11, v12, v13, v14, v15);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_GameObject_o *bgObject; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v44; // x3
  UnityEngine_GameObject_o *v45; // x0
  const MethodInfo *v46; // x3
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x3
  UserPresentBoxWindow_o *v49; // x0
  const MethodInfo *v50; // x1
  struct System_String_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x2
  struct TitleInfoControl_o **p_titleInfo; // x21
  UnityEngine_Object_o *titleInfo; // x22
  struct UnityEngine_GameObject_o *titlePrefab; // x22
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  TitleInfoControl_o *v69; // x22
  TitleInfoControl_o *v70; // x21
  System_Action_o *v71; // x22
  UISprite_o *svtNumValIconSp; // x21
  UnityEngine_GameObject_o *v73; // x21
  System_Action_int__o *v74; // x22
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  const MethodInfo *v83; // x2
  bool v84; // w20
  const MethodInfo *v85; // x2

  if ( (byte_42E71F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, isShowBg, (_DWORD)callback, redisp_act);
    sub_B5D5C4(&System_Action_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Action_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&AtlasManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_UserPresentBoxWindow_OnClickBack__, v27, v28, v29);
    sub_B5D5C4(&Method_UserPresentBoxWindow__Open_b__69_0__, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_5545/*"ENABLE_PRESENT_HISTORY"*/, v33, v34, v35);
    byte_42E71F9 = 1;
  }
  bgObject = this->fields.bgObject;
  this->fields.mIsScrlResetPosition = 1;
  this->fields.gotServant = 0;
  if ( !bgObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(bgObject, isShowBg, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  bgObject = (UnityEngine_GameObject_o *)this->fields.allReceiveBtn;
  this->fields.presentOverflowType = 0;
  this->fields.isReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, 0, gameObject, v44);
  bgObject = (UnityEngine_GameObject_o *)this->fields.itemReceiveBtn;
  this->fields.isItemReceiveFlg = 0;
  if ( !bgObject )
    goto LABEL_31;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v45, 0, v45, v46);
  bgObject = (UnityEngine_GameObject_o *)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = 0;
  if ( !bgObject )
    goto LABEL_31;
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v47, 0, v47, v48);
  v51 = UserPresentBoxWindow__maxSelectable(v49, v50);
  this->fields.presentMaxSelectable = v51;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.presentMaxSelectable,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  UserPresentBoxWindow__SetSelectCount(this, 0, v58);
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
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( bgObject )
    {
      Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               bgObject,
                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
      this->fields.titleInfo = Component_srcLineSprite;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.titleInfo,
        (System_Int32_array **)Component_srcLineSprite,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      v69 = this->fields.titleInfo;
      bgObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v69 )
      {
        TitleInfoControl__SetParent(v69, (UnityEngine_Transform_o *)bgObject, 0LL);
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
                TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)bgObject, 1, 42, 0, 0LL);
                v70 = this->fields.titleInfo;
                v71 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(v71, (Il2CppObject *)this, Method_UserPresentBoxWindow_OnClickBack__, 0LL);
                if ( v70 )
                {
                  TitleInfoControl__SetBackBtnAct(v70, v71, 0LL);
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B5D69C(bgObject, isShowBg);
  }
LABEL_22:
  svtNumValIconSp = this->fields.svtNumValIconSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(svtNumValIconSp, 8008, 0LL);
  AtlasManager__SetItem(this->fields.svtEqNumValIconSp, 8009, 0LL);
  AtlasManager__SetItem(this->fields.commandCodeNumValIconSp, 8014, 0LL);
  AtlasManager__SetItem(this->fields.stoneNumValIconSp, 6, 0LL);
  v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v74 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v74,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__Open_b__69_0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(v73, v74, 1, 0LL);
  AtlasManager__SetItem(this->fields.rpNumValIconSp, 18, 0LL);
  AtlasManager__SetItem(this->fields.mpNumValIconSp, 7, 0LL);
  AtlasManager__SetItem(this->fields.qpNumValIconSp, 5, 0LL);
  AtlasManager__SetItem(this->fields.fpNumValIconSp, 12, 0LL);
  bgObject = (UnityEngine_GameObject_o *)this->fields.userPresentListViewManager;
  if ( !bgObject )
    goto LABEL_31;
  UserPresentListViewManager__Init((UserPresentListViewManager_o *)bgObject, 0LL);
  UserPresentBoxWindow__SetFilterButtonImage(this, v75);
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
  UserPresentBoxWindow__RequestPresentList(this, v76);
  this->fields.mReDispAct = redisp_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mReDispAct,
    (System_Int32_array **)redisp_act,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v83);
  bgObject = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_5545/*"ENABLE_PRESENT_HISTORY"*/, 0LL);
  if ( !this->fields.presentHistoryButtonPanel )
    goto LABEL_31;
  v84 = (int)bgObject > 0;
  UnityEngine_GameObject__SetActive(this->fields.presentHistoryButtonPanel, (int)bgObject > 0, 0LL);
  UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v84, v85);
}


void __fastcall UserPresentBoxWindow__OpenHelp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  CommonUI_o *Instance; // x19
  System_Array_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_RuntimeFieldHandle_o v14; // 0:w1.4

  if ( (byte_42E7225 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_ImageId___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E,
      v7,
      v8,
      v9);
    byte_42E7225 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Array_o *)sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 3LL);
  v14.fields.value = Field__PrivateImplementationDetails__5F16E08EADD1A2A2D3D16BD4B4C55938DC336BD93B4BFEB58328CA0A6DA33D2E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v11, v14, 0LL);
  if ( !Instance )
    sub_B5D69C(v12, v13);
  CommonUI__OpenTutorialImageDialog(Instance, (TutorialFlag_ImageId_array *)v11, 201, 0LL, 0LL, 0LL, 0LL);
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
    sub_B5D69C(userPresentListViewManager, method);
  }
  UserPresentListViewManager__SetMode_21741664(userPresentListViewManager, 2, 0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v4);
}


void __fastcall UserPresentBoxWindow__ReDisp(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxWindow_o *v4; // x27
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  const MethodInfo *v79; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  UserServantMaster_o *v88; // x8
  UserCommandCodeMaster_o *v89; // x21
  int32_t Count; // w0
  UILabel_o *svtNumValLb; // x22
  int v92; // w21
  System_String_o *v93; // x23
  Il2CppObject *v94; // x24
  Il2CppObject *v95; // x0
  UILabel_o *svtEqNumValLb; // x22
  System_String_o *v97; // x23
  Il2CppObject *v98; // x24
  Il2CppObject *v99; // x0
  UILabel_o *commandCodeNumValLb; // x22
  System_String_o *v101; // x23
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  Il2CppObject *v105; // x21
  BalanceConfig_c *v106; // x0
  Il2CppObject *v107; // x0
  UILabel_o *stoneNumValLb; // x21
  UILabel_o *rpNumValLb; // x21
  UILabel_o *mpNumValLb; // x21
  UILabel_o *qpNumValLb; // x21
  System_String_o *v112; // x22
  Il2CppObject *v113; // x0
  UILabel_o *fpNumValLb; // x21
  System_String_o *v115; // x22
  const MethodInfo *v116; // x1
  Il2CppObject *v117; // x0
  const MethodInfo *v118; // x2
  __int64 v119; // x20
  BalanceConfig_c *v120; // x0
  __int64 v121; // x21
  UILabel_o *presentInfoLabel; // x22
  int PresentBoxMax; // w19
  System_String_o *v124; // x23
  Il2CppObject *v125; // x24
  Il2CppObject *v126; // x0
  UILabel_o *presentNoticeLabel; // x22
  System_String_o *v128; // x23
  Il2CppObject *v129; // x0
  int v130; // w2
  __int64 v131; // x3
  UserPresentListViewManager_c *v132; // x0
  int v133; // w2
  __int64 v134; // x3
  _BOOL4 v135; // w22
  UserPresentListViewManager_c *v136; // x0
  UserPresentListViewManager_c *v137; // x0
  int v138; // w2
  __int64 v139; // x3
  _BOOL4 v140; // w28
  UserPresentListViewManager_c *v141; // x0
  ServantMaster_o *v142; // x23
  ItemMaster_o *v143; // x24
  CommandCodeMaster_o *v144; // x26
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v145; // x27
  const MethodInfo *v146; // x4
  const MethodInfo *v147; // x5
  unsigned __int64 v148; // x21
  __int64 v149; // x25
  int v150; // w24
  const MethodInfo *v151; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v152; // x21
  char v153; // w22
  char v154; // w23
  __int64 v155; // x25
  __int64 v156; // x8
  int v157; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v159; // x3
  UnityEngine_GameObject_o *v160; // x0
  const MethodInfo *v161; // x3
  UnityEngine_GameObject_o *v162; // x0
  const MethodInfo *v163; // x3
  UILabel_o *nonPresentNoticeLabel; // x20
  __int64 *v165; // x8
  UnityEngine_GameObject_o *v166; // x0
  const MethodInfo *v167; // x3
  UnityEngine_GameObject_o *v168; // x0
  const MethodInfo *v169; // x3
  UnityEngine_GameObject_o *v170; // x0
  const MethodInfo *v171; // x3
  __int64 v172; // x8
  const MethodInfo *v173; // x2
  _BOOL8 _29295864; // x0
  const MethodInfo *v175; // x1
  __int64 v176; // x0
  UserPresentBoxWindow_o *v177; // [xsp+0h] [xbp-C0h]
  int v178; // [xsp+8h] [xbp-B8h]
  ServantLimitMaster_o *servantLimitMaster; // [xsp+10h] [xbp-B0h]
  int v180; // [xsp+1Ch] [xbp-A4h] BYREF
  int v181; // [xsp+20h] [xbp-A0h] BYREF
  int v182; // [xsp+24h] [xbp-9Ch] BYREF
  int32_t FriendPoint; // [xsp+28h] [xbp-98h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-94h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+30h] [xbp-90h] BYREF
  int v186; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t svtEquipKeep; // [xsp+38h] [xbp-88h] BYREF
  int32_t v188; // [xsp+3Ch] [xbp-84h] BYREF
  int32_t svtKeep; // [xsp+40h] [xbp-80h] BYREF
  int32_t v190; // [xsp+44h] [xbp-7Ch] BYREF
  UnityEngine_Vector2_o offset; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o scroll; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_42E71FD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v26, v27, v28);
    sub_B5D5C4(&int_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68753680, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_10630/*"PRESENT_LIST_INFO"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_11159/*"RECEIVE_FILTER_NOTHING"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_11158/*"RECEIVE_ALL_DONE"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_3520/*"CURRENT_QP_UNIT"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_10631/*"PRESENT_LIST_NOTICE"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_3518/*"CURRENT_FRIEND_POINT_UNIT"*/, v71, v72, v73);
    this = (UserPresentBoxWindow_o *)sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v74, v75, v76);
    byte_42E71FD = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  entity = 0LL;
  scroll.fields.z = 0.0;
  offset = 0LL;
  *(_QWORD *)&scroll.fields.x = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &v4->fields.userServantMaster;
  v4->fields.userServantMaster = (struct UserServantMaster_o *)MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.userServantMaster,
    MasterData_WarQuestSelectionMaster,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v88 = *p_userServantMaster;
  if ( !*p_userServantMaster )
    goto LABEL_160;
  v89 = (UserCommandCodeMaster_o *)Instance;
  Instance = UserServantMaster__getCount(v88, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !v89 )
    goto LABEL_160;
  Count = UserCommandCodeMaster__getCount(v89, 0LL);
  svtNumValLb = v4->fields.svtNumValLb;
  v92 = Count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  v190 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v190);
  if ( !SelfUserGame )
    goto LABEL_160;
  v94 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44573324(v93, v94, v95, 0LL);
  if ( !svtNumValLb )
    goto LABEL_160;
  UILabel__set_text(svtNumValLb, (System_String_o *)Instance, 0LL);
  svtEqNumValLb = v4->fields.svtEqNumValLb;
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  v188 = servantEquipSum[0];
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v188);
  svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
  Instance = (__int64)System_String__Format_44573324(v97, v98, v99, 0LL);
  if ( !svtEqNumValLb )
    goto LABEL_160;
  UILabel__set_text(svtEqNumValLb, (System_String_o *)Instance, 0LL);
  commandCodeNumValLb = v4->fields.commandCodeNumValLb;
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  v186 = v92;
  v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
  if ( !byte_42E4B73 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v102, v103, v104);
    byte_42E4B73 = 1;
  }
  v106 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v106 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v106->static_fields->CommandCodeFrameMax;
  v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CommandCodeFrameMax);
  Instance = (__int64)System_String__Format_44573324(v101, v105, v107, 0LL);
  if ( !commandCodeNumValLb )
    goto LABEL_160;
  UILabel__set_text(commandCodeNumValLb, (System_String_o *)Instance, 0LL);
  stoneNumValLb = v4->fields.stoneNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.stone, 0LL);
  if ( !stoneNumValLb )
    goto LABEL_160;
  UILabel__set_text(stoneNumValLb, (System_String_o *)Instance, 0LL);
  rpNumValLb = v4->fields.rpNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.rarePri, 0LL);
  if ( !rpNumValLb )
    goto LABEL_160;
  UILabel__set_text(rpNumValLb, (System_String_o *)Instance, 0LL);
  mpNumValLb = v4->fields.mpNumValLb;
  Instance = (__int64)LocalizationManager__GetUnitInfo(SelfUserGame->fields.mana, 0LL);
  if ( !mpNumValLb )
    goto LABEL_160;
  UILabel__set_text(mpNumValLb, (System_String_o *)Instance, 0LL);
  qpNumValLb = v4->fields.qpNumValLb;
  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_3520/*"CURRENT_QP_UNIT"*/, 0LL);
  qp = SelfUserGame->fields.qp;
  v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  Instance = (__int64)System_String__Format(v112, v113, 0LL);
  if ( !qpNumValLb )
    goto LABEL_160;
  UILabel__set_text(qpNumValLb, (System_String_o *)Instance, 0LL);
  fpNumValLb = v4->fields.fpNumValLb;
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_3518/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
  FriendPoint = UserGameEntity__GetFriendPoint(SelfUserGame, v116);
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendPoint);
  Instance = (__int64)System_String__Format(v115, v117, 0LL);
  if ( !fpNumValLb )
    goto LABEL_160;
  UILabel__set_text(fpNumValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)UserPresentBoxMaster__getVaildList(
                        (UserPresentBoxMaster_o *)Instance,
                        SelfUserGame->fields.userId,
                        v118);
  if ( !Instance )
    goto LABEL_160;
  v119 = Instance;
  v120 = BalanceConfig_TypeInfo;
  v121 = *(_QWORD *)(v119 + 24);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v120 = BalanceConfig_TypeInfo;
  }
  presentInfoLabel = v4->fields.presentInfoLabel;
  PresentBoxMax = v120->static_fields->PresentBoxMax;
  v124 = LocalizationManager__Get((System_String_o *)StringLiteral_10630/*"PRESENT_LIST_INFO"*/, 0LL);
  v182 = v121;
  v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v182);
  v181 = PresentBoxMax;
  v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181);
  Instance = (__int64)System_String__Format_44573324(v124, v125, v126, 0LL);
  if ( !presentInfoLabel )
    goto LABEL_160;
  UILabel__set_text(presentInfoLabel, (System_String_o *)Instance, 0LL);
  presentNoticeLabel = v4->fields.presentNoticeLabel;
  v128 = LocalizationManager__Get((System_String_o *)StringLiteral_10631/*"PRESENT_LIST_NOTICE"*/, 0LL);
  v180 = PresentBoxMax;
  v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v180);
  Instance = (__int64)System_String__Format(v128, v129, 0LL);
  if ( !presentNoticeLabel )
    goto LABEL_160;
  UILabel__set_text(presentNoticeLabel, (System_String_o *)Instance, 0LL);
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)v79, v130, v131);
    byte_42E722E = 1;
  }
  v132 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v132 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v132->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_160;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v135 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42E722E )
    {
      sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)v79, v133, v134);
      byte_42E722E = 1;
    }
    v136 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v136 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v136->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_160;
    v135 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)v79, v133, v134);
    byte_42E722E = 1;
  }
  v137 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v137 = UserPresentListViewManager_TypeInfo;
  }
  Instance = (__int64)v137->static_fields->sortInfo;
  if ( !Instance )
    goto LABEL_160;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL) )
  {
    v140 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42E722E )
    {
      sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)v79, v138, v139);
      byte_42E722E = 1;
    }
    v141 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v141 = UserPresentListViewManager_TypeInfo;
    }
    Instance = (__int64)v141->static_fields->sortInfo;
    if ( !Instance )
      goto LABEL_160;
    v140 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)Instance, 0LL);
  }
  if ( v140 || v135 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v142 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v143 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v177 = v4;
    servantLimitMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    v144 = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v145 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v145,
      v121,
      (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68753680);
    v178 = v121;
    if ( (int)v121 >= 1 )
    {
      v148 = 0LL;
      v149 = v119 + 32;
      do
      {
        if ( !v135 )
          goto LABEL_164;
        if ( v148 >= *(unsigned int *)(v119 + 24) )
          goto LABEL_161;
        Instance = UserPresentBoxWindow__CheckFilter(
                     (UserPresentBoxWindow_o *)Instance,
                     v142,
                     v143,
                     *(UserPresentBoxEntity_o **)(v149 + 8 * v148),
                     v146);
        if ( (Instance & 1) != 0 )
        {
LABEL_164:
          if ( !v140 )
            goto LABEL_87;
          if ( v148 >= *(unsigned int *)(v119 + 24) )
            goto LABEL_161;
          Instance = UserPresentBoxWindow__CheckRarityFilter(
                       (UserPresentBoxWindow_o *)Instance,
                       servantLimitMaster,
                       v144,
                       *(UserPresentBoxEntity_o **)(v149 + 8 * v148),
                       v135,
                       v147);
          if ( (Instance & 1) != 0 )
          {
LABEL_87:
            if ( v148 >= *(unsigned int *)(v119 + 24) )
            {
LABEL_161:
              v176 = sub_B5D6C8(Instance);
              sub_B5D668(v176, 0LL);
            }
            if ( !v145 )
              goto LABEL_160;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v145,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v149 + 8 * v148),
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      while ( (__int64)++v148 < v178 );
    }
    if ( !v145
      || (Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v145,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__),
          LODWORD(v121) = v178,
          !Instance) )
    {
LABEL_160:
      sub_B5D69C(Instance, v79);
    }
    v150 = *(_DWORD *)(Instance + 24);
    v4 = v177;
    v119 = Instance;
  }
  else
  {
    v150 = v121;
  }
  UserPresentBoxWindow__SetFilterButtonImage(v4, v79);
  UserPresentBoxWindow__SetSelectCount(v4, 0, v151);
  if ( v150 < 1 )
  {
    Instance = (__int64)v4->fields.userPresentListViewManager;
    if ( Instance )
    {
      UserPresentListViewManager__DestroyList((UserPresentListViewManager_o *)Instance, 0LL);
      Instance = (__int64)v4->fields.allReceiveBtn;
      v4->fields.isReceiveFlg = 0;
      if ( Instance )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, 0, gameObject, v159);
        Instance = (__int64)v4->fields.itemReceiveBtn;
        v4->fields.isItemReceiveFlg = 0;
        if ( Instance )
        {
          v160 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v160, 0, v160, v161);
          Instance = (__int64)v4->fields.checkedItemBtn;
          v4->fields.isCheckedFlg = 0;
          if ( Instance )
          {
            v162 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v162, 0, v162, v163);
            nonPresentNoticeLabel = v4->fields.nonPresentNoticeLabel;
            if ( (_DWORD)v121 )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v165 = &StringLiteral_11159/*"RECEIVE_FILTER_NOTHING"*/;
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v165 = &StringLiteral_11158/*"RECEIVE_ALL_DONE"*/;
            }
            Instance = (__int64)LocalizationManager__Get((System_String_o *)*v165, 0LL);
            if ( nonPresentNoticeLabel )
            {
              UILabel__set_text(nonPresentNoticeLabel, (System_String_o *)Instance, 0LL);
              Instance = (__int64)v4->fields.nonPresentNoticeLabel;
              if ( Instance )
              {
                Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                  Instance = (__int64)v4->fields.userPresentListViewManager;
                  if ( Instance )
                  {
                    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      Instance = (__int64)v4->fields.sortBtn;
                      if ( Instance )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
                        Instance = (__int64)v4->fields.sortBtn;
                        if ( Instance )
                        {
                          v172 = *(_QWORD *)Instance;
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
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  v152 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v153 = 0;
  v154 = 0;
  v155 = 4LL;
  while ( 1 )
  {
    if ( (unsigned int)(v155 - 4) >= *(_DWORD *)(v119 + 24) )
      goto LABEL_161;
    v156 = *(_QWORD *)(v119 + 8 * v155);
    if ( !v156 )
      goto LABEL_160;
    v157 = *(_DWORD *)(v156 + 72);
    if ( v157 == 2 )
    {
      if ( !v152 )
        goto LABEL_160;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v152,
                   &entity,
                   *(_DWORD *)(v156 + 76),
                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) == 0 )
        goto LABEL_106;
      if ( !entity )
        goto LABEL_160;
      if ( entity->fields.bannerId != 24 )
      {
LABEL_106:
        v154 = 1;
        v153 = 1;
      }
      if ( (v154 & 1) == 0 )
        goto LABEL_111;
    }
    else
    {
      v153 |= v157 == 9;
      v154 = 1;
    }
    if ( (v153 & 1) != 0 )
      break;
LABEL_111:
    if ( (int)++v155 - 4 >= v150 )
      goto LABEL_122;
  }
  v154 = 1;
  v153 = 1;
LABEL_122:
  Instance = (__int64)v4->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)v4->fields.nonPresentNoticeLabel;
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)v4->fields.allReceiveBtn;
  v4->fields.isReceiveFlg = v154 & 1;
  if ( !Instance )
    goto LABEL_160;
  v166 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v166, v154 & 1, v166, v167);
  Instance = (__int64)v4->fields.itemReceiveBtn;
  v4->fields.isItemReceiveFlg = v153 & 1;
  if ( !Instance )
    goto LABEL_160;
  v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v168, v153 & 1, v168, v169);
  Instance = (__int64)v4->fields.checkedItemBtn;
  v4->fields.isCheckedFlg = 0;
  if ( !Instance )
    goto LABEL_160;
  v170 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v170, 0, v170, v171);
  if ( v4->fields.mIsScrlResetPosition )
    goto LABEL_132;
  Instance = (__int64)v4->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_160;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
  {
    scroll.fields.z = 0.0;
    offset = 0LL;
    *(_QWORD *)&scroll.fields.x = 0LL;
    Instance = (__int64)v4->fields.userPresentListViewManager;
    if ( Instance )
    {
      ListViewManager__GetScrollView((ListViewManager_o *)Instance, &scroll, &offset, 0LL);
      Instance = (__int64)v4->fields.userPresentListViewManager;
      if ( Instance )
      {
        UserPresentListViewManager__CreateList(
          (UserPresentListViewManager_o *)Instance,
          (UserPresentBoxEntity_array *)v119,
          0LL);
        Instance = (__int64)v4->fields.userPresentListViewManager;
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
  Instance = (__int64)v4->fields.userPresentListViewManager;
  if ( !Instance )
    goto LABEL_160;
  UserPresentListViewManager__CreateList(
    (UserPresentListViewManager_o *)Instance,
    (UserPresentBoxEntity_array *)v119,
    0LL);
LABEL_134:
  Instance = (__int64)v4->fields.userPresentListViewManager;
  v4->fields.mIsScrlResetPosition = 0;
  if ( !Instance )
    goto LABEL_160;
  UserPresentListViewManager__SetMode_21741664((UserPresentListViewManager_o *)Instance, 1, 0LL);
  Instance = (__int64)v4->fields.sortBtn;
  if ( !Instance )
    goto LABEL_160;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
  Instance = (__int64)v4->fields.sortBtn;
  if ( !Instance )
    goto LABEL_160;
  v172 = *(_QWORD *)Instance;
LABEL_150:
  (*(void (**)(void))(v172 + 536))();
  ActionExtensions__Call(v4->fields.mReDispAct, 0LL);
  UserPresentBoxWindow__SetBtnEnable(v4, 1, v173);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = TutorialFlag__Get_29295864(201, 0LL);
  if ( !_29295864 )
    UserPresentBoxWindow__OpenHelp((UserPresentBoxWindow_o *)_29295864, v175);
  EventTutorialMaster__CheckTutorial(0, 78, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall UserPresentBoxWindow__RequestPresentList(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1

  if ( (byte_42E71FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserPresentListRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UserPresentBoxWindow_callbackPresentList__, v11, v12, v13);
    byte_42E71FB = 1;
  }
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_callbackPresentList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v14,
                                                         (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v16);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__SetBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *sortBtn; // x0
  bool v7; // w21
  const MethodInfo *v8; // x2
  bool v9; // w20

  if ( (byte_42E7220 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable, (_DWORD)method, v3);
    byte_42E7220 = 1;
  }
  sortBtn = (UnityEngine_Component_o *)this->fields.sortBtn;
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(sortBtn, 0LL);
  if ( !sortBtn )
    goto LABEL_19;
  sortBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)sortBtn,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !sortBtn )
    goto LABEL_19;
  v7 = is_enable;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, is_enable, 0LL);
  sortBtn = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !sortBtn
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)sortBtn, v7, 0LL),
        UserPresentBoxWindow__SetPresentHistoryBtnEnable(this, v7, v8),
        (sortBtn = (UnityEngine_Component_o *)this->fields.helpBtn) == 0LL)
    || (v9 = is_enable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, v9, 0LL),
        (sortBtn = (UnityEngine_Component_o *)this->fields.filterBtn) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(sortBtn, is_enable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)sortBtn, v9, 0LL);
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

  if ( (byte_42E71FA & 1) == 0 )
  {
    this = (UserPresentBoxWindow_o *)sub_B5D5C4(
                                       &Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___,
                                       isVaild,
                                       (_DWORD)btnObject,
                                       method);
    byte_42E71FA = 1;
  }
  if ( !btnObject
    || (this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                           btnObject,
                                           (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(this, isVaild);
  }
  myFsm = (int)this->fields.myFsm;
  v7 = this;
  if ( myFsm >= 1 )
  {
    for ( i = 0; i < myFsm; ++i )
    {
      if ( i >= (unsigned int)myFsm )
      {
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int64_t checkedItemBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v45; // x3
  UnityEngine_GameObject_o *v46; // x0
  const MethodInfo *v47; // x3
  UnityEngine_GameObject_o *v48; // x0
  const MethodInfo *v49; // x3
  bool v50; // w1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v52; // x2
  UserPresentBoxEntity_array *VaildList; // x20
  char v54; // w2
  __int64 v55; // x3
  ItemMaster_o *v56; // x24
  __int64 v57; // x21
  UserPresentListViewManager_c *v58; // x0
  char v59; // w2
  __int64 v60; // x3
  _BOOL4 v61; // w27
  UserPresentListViewManager_c *v62; // x0
  UserPresentListViewManager_c *v63; // x0
  char v64; // w2
  __int64 v65; // x3
  _BOOL4 v66; // w28
  UserPresentListViewManager_c *v67; // x0
  ServantMaster_o *v68; // x23
  CommandCodeMaster_o *v69; // x25
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v70; // x26
  const MethodInfo *v71; // x4
  const MethodInfo *v72; // x5
  unsigned __int64 v73; // x22
  UserPresentBoxEntity_o **m_Items; // x19
  UnityEngine_GameObject_o *v75; // x0
  const MethodInfo *v76; // x3
  int max_length; // w8
  unsigned int v78; // w19
  UserPresentBoxEntity_o *v79; // x8
  int32_t giftType; // w9
  __int64 v81; // x0
  UserPresentBoxWindow_o *v82; // [xsp+8h] [xbp-68h]
  ServantLimitMaster_o *servantLimitMaster; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E721C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, how, isSetOtherButtonsToo, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68753680, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&NetworkManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, v40, v41, v42);
    byte_42E721C = 1;
  }
  entity = 0LL;
  checkedItemBtn = (int64_t)this->fields.checkedItemBtn;
  this->fields.isCheckedFlg = how;
  if ( !checkedItemBtn )
    goto LABEL_96;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)gameObject, how, gameObject, v45);
  if ( !isSetOtherButtonsToo )
    return;
  if ( how )
  {
    checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
    this->fields.isReceiveFlg = 0;
    if ( checkedItemBtn )
    {
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
      UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v46, 0, v46, v47);
      checkedItemBtn = (int64_t)this->fields.itemReceiveBtn;
      this->fields.isItemReceiveFlg = 0;
      if ( checkedItemBtn )
      {
        v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
        v50 = 0;
        goto LABEL_94;
      }
    }
    goto LABEL_96;
  }
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)checkedItemBtn,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  checkedItemBtn = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_96;
  VaildList = UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, checkedItemBtn, v52);
  checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkedItemBtn )
    goto LABEL_96;
  checkedItemBtn = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)checkedItemBtn,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !VaildList )
    goto LABEL_96;
  v56 = (ItemMaster_o *)checkedItemBtn;
  v57 = *(_QWORD *)&VaildList->max_length;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, how, v54, v55);
    byte_42E722E = 1;
  }
  v58 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v58 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v58->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_96;
  if ( ListViewSort__CheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v61 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42E722E )
    {
      sub_B5D5C4(&UserPresentListViewManager_TypeInfo, how, v59, v60);
      byte_42E722E = 1;
    }
    v62 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v62 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v62->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_96;
    v61 = !ListViewSort__UnCheckPresentBoxFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, how, v59, v60);
    byte_42E722E = 1;
  }
  v63 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v63 = UserPresentListViewManager_TypeInfo;
  }
  checkedItemBtn = (int64_t)v63->static_fields->sortInfo;
  if ( !checkedItemBtn )
    goto LABEL_96;
  if ( ListViewSort__CheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL) )
  {
    v66 = 0;
  }
  else
  {
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    }
    if ( !byte_42E722E )
    {
      sub_B5D5C4(&UserPresentListViewManager_TypeInfo, how, v64, v65);
      byte_42E722E = 1;
    }
    v67 = UserPresentListViewManager_TypeInfo;
    if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
      v67 = UserPresentListViewManager_TypeInfo;
    }
    checkedItemBtn = (int64_t)v67->static_fields->sortInfo;
    if ( !checkedItemBtn )
      goto LABEL_96;
    v66 = !ListViewSort__UnCheckPresentBoxRarityFilterAll((ListViewSort_o *)checkedItemBtn, 0LL);
  }
  if ( v61 || v66 )
  {
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v68 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)checkedItemBtn,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v82 = this;
    servantLimitMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)checkedItemBtn,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    checkedItemBtn = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !checkedItemBtn )
      goto LABEL_96;
    v69 = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)checkedItemBtn,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    v70 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v70,
      v57,
      (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68753680);
    if ( (int)v57 >= 1 )
    {
      v73 = 0LL;
      m_Items = VaildList->m_Items;
      do
      {
        if ( !v61 )
          goto LABEL_100;
        if ( v73 >= VaildList->max_length )
          goto LABEL_97;
        checkedItemBtn = UserPresentBoxWindow__CheckFilter(
                           (UserPresentBoxWindow_o *)checkedItemBtn,
                           v68,
                           v56,
                           m_Items[v73],
                           v71);
        if ( (checkedItemBtn & 1) != 0 )
        {
LABEL_100:
          if ( !v66 )
            goto LABEL_70;
          if ( v73 >= VaildList->max_length )
            goto LABEL_97;
          checkedItemBtn = UserPresentBoxWindow__CheckRarityFilter(
                             (UserPresentBoxWindow_o *)checkedItemBtn,
                             servantLimitMaster,
                             v69,
                             m_Items[v73],
                             v61,
                             v72);
          if ( (checkedItemBtn & 1) != 0 )
          {
LABEL_70:
            if ( v73 >= VaildList->max_length )
            {
LABEL_97:
              v81 = sub_B5D6C8(checkedItemBtn);
              sub_B5D668(v81, 0LL);
            }
            if ( !v70 )
              goto LABEL_96;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v70,
              (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v73],
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      while ( (__int64)++v73 < (int)v57 );
    }
    if ( !v70
      || (checkedItemBtn = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v70,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__)) == 0 )
    {
LABEL_96:
      sub_B5D69C(checkedItemBtn, how);
    }
    LODWORD(v57) = *(_DWORD *)(checkedItemBtn + 24);
    this = v82;
    VaildList = (UserPresentBoxEntity_array *)checkedItemBtn;
  }
  if ( (int)v57 < 1 )
    return;
  checkedItemBtn = (int64_t)this->fields.allReceiveBtn;
  this->fields.isReceiveFlg = 1;
  if ( !checkedItemBtn )
    goto LABEL_96;
  v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v75, 1, v75, v76);
  max_length = VaildList->max_length;
  if ( max_length < 1 )
    return;
  v78 = 0;
  while ( 1 )
  {
    if ( v78 >= max_length )
      goto LABEL_97;
    v79 = VaildList->m_Items[v78];
    if ( !v79 )
      goto LABEL_96;
    giftType = v79->fields.giftType;
    if ( giftType == 2 )
      break;
    if ( giftType == 9 )
      goto LABEL_92;
LABEL_90:
    max_length = VaildList->max_length;
    if ( (int)++v78 >= max_length )
      return;
  }
  if ( !v56 )
    goto LABEL_96;
  checkedItemBtn = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)v56,
                     &entity,
                     v79->fields.objectId,
                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkedItemBtn, 0LL);
  v50 = 1;
LABEL_94:
  UserPresentBoxWindow__SetButtonTxtColor((UserPresentBoxWindow_o *)v48, v50, v48, v49);
}


void __fastcall UserPresentBoxWindow__SetFilterButtonImage(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UISprite_o *filterBtnSp; // x19
  UserPresentListViewManager_c *v12; // x0
  ListViewSort_o *sortInfo; // x0
  int v14; // w2
  __int64 v15; // x3
  System_String_o **v16; // x22
  UserPresentListViewManager_c *v17; // x0

  if ( (byte_42E71FE & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v8, v9, v10);
    byte_42E71FE = 1;
  }
  filterBtnSp = this->fields.filterBtnSp;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E722E = 1;
  }
  v12 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v12 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v12->static_fields->sortInfo;
  if ( !sortInfo )
    goto LABEL_26;
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxFilterAll(sortInfo, 0LL);
  v16 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  if ( ((unsigned __int8)sortInfo & 1) == 0 )
    goto LABEL_24;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
  }
  if ( !byte_42E722E )
  {
    sub_B5D5C4(&UserPresentListViewManager_TypeInfo, (_DWORD)method, v14, v15);
    byte_42E722E = 1;
  }
  v17 = UserPresentListViewManager_TypeInfo;
  if ( (BYTE3(UserPresentListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentListViewManager_TypeInfo);
    v17 = UserPresentListViewManager_TypeInfo;
  }
  sortInfo = v17->static_fields->sortInfo;
  if ( !sortInfo )
LABEL_26:
    sub_B5D69C(sortInfo, method);
  sortInfo = (ListViewSort_o *)ListViewSort__UnCheckPresentBoxRarityFilterAll(sortInfo, 0LL);
  if ( ((unsigned __int8)sortInfo & 1) != 0 )
    v16 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
LABEL_24:
  if ( !filterBtnSp )
    goto LABEL_26;
  UISprite__set_spriteName(filterBtnSp, *v16, 0LL);
}


void __fastcall UserPresentBoxWindow__SetPresentHistoryBtnEnable(
        UserPresentBoxWindow_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *GameObject; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v14; // x1

  if ( (byte_42E7221 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10882/*"PresentHistoryButton"*/, v9, v10, v11);
    byte_42E7221 = 1;
  }
  GameObject = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObject(
                                         this->fields.presentHistoryButtonPanel,
                                         (System_String_o *)StringLiteral_10882/*"PresentHistoryButton"*/,
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
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_B5D69C(Component_srcLineSprite, v14);
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *presentSelectNumLabel; // x20
  System_String_o *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  UIWidget_o *v16; // x20
  int32_t v17; // w21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UILabel_o *presentNoticeLabel; // x8
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  v23 = selected;
  if ( (byte_42E7222 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, selected, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10637/*"PRESENT_SELECT_INFO"*/, v8, v9, v10);
    byte_42E7222 = 1;
  }
  presentSelectNumLabel = this->fields.presentSelectNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10637/*"PRESENT_SELECT_INFO"*/, 0LL);
  v13 = (Il2CppObject *)System_Int32__ToString((int32_t)&v23, 0LL);
  v14 = System_String__Format_44573324(v12, v13, (Il2CppObject *)this->fields.presentMaxSelectable, 0LL);
  if ( !presentSelectNumLabel )
    goto LABEL_16;
  UILabel__set_text(presentSelectNumLabel, v14, 0LL);
  v16 = (UIWidget_o *)this->fields.presentSelectNumLabel;
  v17 = v23;
  v14 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( v17 >= *(_DWORD *)(*(_QWORD *)&v14[7].fields + 116LL) )
  {
    presentNoticeLabel = this->fields.presentNoticeLabel;
    if ( presentNoticeLabel )
    {
      r = presentNoticeLabel->fields.mColor.fields.r;
      g = presentNoticeLabel->fields.mColor.fields.g;
      b = presentNoticeLabel->fields.mColor.fields.b;
      a = presentNoticeLabel->fields.mColor.fields.a;
      if ( v16 )
        goto LABEL_15;
    }
LABEL_16:
    sub_B5D69C(v14, v15);
  }
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
  if ( !v16 )
    goto LABEL_16;
LABEL_15:
  UIWidget__set_color(v16, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall UserPresentBoxWindow__ShowEventPointReward(
        UserPresentBoxWindow_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0
  struct UserPresentBoxWindow_evPointReward_array *evPointRewardList; // x8
  __int64 v30; // x9
  int max_length; // w10
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x19
  UserPresentBoxWindow_evPointReward_o *v33; // x21
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v34; // x22
  const MethodInfo *v35; // x3
  __int64 v36; // x0

  if ( (byte_42E7207 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo, idx, (_DWORD)callback, method);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__, v7, v8, v9);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo, v10, v11, v12);
    byte_42E7207 = 1;
  }
  v13 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass85_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass85_0___ctor((UserPresentBoxWindow___c__DisplayClass85_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  *(_DWORD *)(v13 + 24) = idx;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  evPointRewardList = this->fields.evPointRewardList;
  if ( evPointRewardList )
  {
    v30 = *(int *)(v13 + 24);
    max_length = evPointRewardList->max_length;
    if ( (int)v30 < max_length )
    {
      if ( (unsigned int)v30 >= max_length )
      {
        v36 = sub_B5D6C8(v28);
        sub_B5D668(v36, 0LL);
      }
      evpDialog = this->fields.evpDialog;
      v33 = evPointRewardList->m_Items[v30];
      v34 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o *)sub_B5D694(UserPresentBoxEventPointRewardDialog_ClickDelegate_TypeInfo);
      UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        v34,
        (Il2CppObject *)v13,
        Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__0__,
        0LL);
      if ( evpDialog )
      {
        UserPresentBoxEventPointRewardDialog__Open(evpDialog, v33, v34, v35);
        return;
      }
LABEL_10:
      sub_B5D69C(v14, v15);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v13 + 32), 0LL);
}


void __fastcall UserPresentBoxWindow__ShowExpiredPresents(
        UserPresentBoxWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_String_o *expiredPresents_k__BackingField; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x21
  System_Action_o *v44; // x22

  if ( (byte_42E7204 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__, v12, v13, v14);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_10624/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_27/*"\n\n"*/, v21, v22, v23);
    byte_42E7204 = 1;
  }
  v24 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass82_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass82_0___ctor((UserPresentBoxWindow___c__DisplayClass82_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_13;
  *(_QWORD *)(v24 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)callback, v33, v34, v35, v36, v37, v38);
  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    goto LABEL_13;
  expiredPresents_k__BackingField = userPresentListViewManager->fields._expiredPresents_k__BackingField;
  if ( expiredPresents_k__BackingField && expiredPresents_k__BackingField->fields.m_stringLength >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_10624/*"PRESENT_EXPIRED_ERROR_MESSAGE"*/, 0LL);
    v43 = System_String__Concat_44580072(expiredPresents_k__BackingField, (System_String_o *)StringLiteral_27/*"\n\n"*/, v42, 0LL);
    v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v24,
      Method_UserPresentBoxWindow___c__DisplayClass82_0__ShowExpiredPresents_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog(Instance, 0LL, v43, v44, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(v25, v26);
  }
  ActionExtensions__Call(*(System_Action_o **)(v24 + 24), 0LL);
}


void __fastcall UserPresentBoxWindow__UpdateEventInfos(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalSceneComponent_c *v7; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_42E7208 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v4, v5, v6);
    byte_42E7208 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v7->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( v9 )
  {
    if ( !mInstance )
      sub_B5D69C(v9, v10);
    TerminalSceneComponent__UpdateTitleEventInfo((TerminalSceneComponent_o *)mInstance, 0LL);
  }
}


void __fastcall UserPresentBoxWindow___CallbackReceiveRequest_b__80_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct GetSvts_array *getSvtList; // x8
  struct GetCommandCodes_array *getCommandCodeList; // x8
  const MethodInfo *v13; // x2
  PlayMakerFSM_o *myFsm; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x1

  if ( (byte_42E722B & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12386/*"SHOW_EFFECT"*/, v8, v9, v10);
    byte_42E722B = 1;
  }
  getSvtList = this->fields.getSvtList;
  if ( getSvtList && *(_QWORD *)&getSvtList->max_length
    || (getCommandCodeList = this->fields.getCommandCodeList) != 0LL && *(_QWORD *)&getCommandCodeList->max_length
    || UserPresentBoxWindow__IsShowEffectPresent(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12386/*"SHOW_EFFECT"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(myFsm, method);
  }
  if ( this->fields.presentOverflowType )
  {
    userPresentListViewManager = this->fields.userPresentListViewManager;
    v16 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B5D694(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithOutSvtGet__,
      0LL);
    if ( !userPresentListViewManager )
      goto LABEL_14;
    UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v16, 0LL);
    UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v17);
  }
  else
  {
    UserPresentBoxWindow__EventPointRewardWithOutSvtGet(this, 0, v13);
  }
}


void __fastcall UserPresentBoxWindow___OnClickAll_b__105_0(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  UserPresentListViewManager_o *userPresentListViewManager; // x0

  userPresentListViewManager = this->fields.userPresentListViewManager;
  if ( !userPresentListViewManager )
    sub_B5D69C(0LL, method);
  UserPresentListViewManager__SetMode_21741664(userPresentListViewManager, 1, 0LL);
}


void __fastcall UserPresentBoxWindow___OnClickPresentHistoryButton_b__112_0(
        UserPresentBoxWindow_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserPresentHistoryDialog_o *presentHistoryDialog; // x0

  presentHistoryDialog = this->fields.presentHistoryDialog;
  if ( !presentHistoryDialog )
    sub_B5D69C(0LL, result);
  UserPresentHistoryDialog__Open(presentHistoryDialog, 0LL);
}


void __fastcall UserPresentBoxWindow___Open_b__69_0(
        UserPresentBoxWindow_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UILabel_o *stoneNumValLb; // x20
  System_String_o *UnitInfo; // x0
  __int64 v8; // x1

  if ( (byte_42E7229 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stoneCount, (_DWORD)method, v3);
    byte_42E7229 = 1;
  }
  stoneNumValLb = this->fields.stoneNumValLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !stoneNumValLb )
    sub_B5D69C(UnitInfo, v8);
  UILabel__set_text(stoneNumValLb, UnitInfo, 0LL);
}


void __fastcall UserPresentBoxWindow___callbackPresentList_b__72_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42E722A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E722A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__SetConnect(Instance, 0, 0LL);
  UserPresentBoxWindow__ReDisp(this, v7);
}


void __fastcall UserPresentBoxWindow___showEffect_b__88_0(
        UserPresentBoxWindow_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E722C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserPresentBoxWindow_EndEffect__, v5, v6, v7);
    byte_42E722C = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  UserPresentBoxWindow__CheckSvtGetTutorial(this, v8, v9);
}


void __fastcall UserPresentBoxWindow___showReceiveResultDlg_b__101_0(
        UserPresentBoxWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  __int64 v38; // x1
  UnityEngine_GameObject_o *touchBlocker; // x0
  UserPresentListViewManager_o *userPresentListViewManager; // x20
  UserPresentListViewManager_ReceiveCallbackFunc_o *v41; // x21
  const MethodInfo *v42; // x1
  System_Action_Action__array *v43; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  ActionChain_o *v58; // x21
  System_Action_array *v59; // x20
  System_Action_o *v60; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x0
  __int64 v68; // x0

  if ( (byte_42E722D & 1) == 0 )
  {
    sub_B5D5C4(&ActionChain_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_Action____TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Action_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__, v26, v27, v28);
    sub_B5D5C4(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__, v29, v30, v31);
    sub_B5D5C4(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__, v32, v33, v34);
    sub_B5D5C4(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, v35, v36, v37);
    byte_42E722D = 1;
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
    v41 = (UserPresentListViewManager_ReceiveCallbackFunc_o *)sub_B5D694(UserPresentListViewManager_ReceiveCallbackFunc_TypeInfo);
    UserPresentListViewManager_ReceiveCallbackFunc___ctor(
      v41,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow_EventPointRewardWithSvtGet__,
      0LL);
    if ( userPresentListViewManager )
    {
      UserPresentListViewManager__showErrorResultDlg(userPresentListViewManager, v41, 0LL);
      UserPresentBoxWindow__setPresentBoxErrorDlgCombineType(this, v42);
      return;
    }
LABEL_26:
    sub_B5D69C(touchBlocker, v38);
  }
  v43 = (System_Action_Action__array *)sub_B5D5DC(System_Action_Action____TypeInfo, 2LL);
  v44 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v44,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_1__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( !v43 )
    goto LABEL_26;
  if ( v44 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !touchBlocker )
      goto LABEL_28;
  }
  if ( !v43->max_length )
    goto LABEL_27;
  v43->m_Items[0] = (System_Action_Action__o *)v44;
  sub_B5D560((BattleServantConfConponent_o *)v43->m_Items, (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v51,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_2__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v51 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B5D684(v51, v43->obj.klass->_1.element_class);
    if ( !touchBlocker )
      goto LABEL_28;
  }
  if ( v43->max_length <= 1 )
    goto LABEL_27;
  v43->m_Items[1] = (System_Action_Action__o *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v43->m_Items[1], (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  v58 = (ActionChain_o *)sub_B5D694(ActionChain_TypeInfo);
  ActionChain___ctor_21252180(v58, v43, 0LL);
  v59 = (System_Action_array *)sub_B5D5DC(System_Action___TypeInfo, 1LL);
  v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_3__, 0LL);
  if ( !v59 )
    goto LABEL_26;
  if ( v60 )
  {
    touchBlocker = (UnityEngine_GameObject_o *)sub_B5D684(v60, v59->obj.klass->_1.element_class);
    if ( !touchBlocker )
    {
LABEL_28:
      v68 = sub_B5D6BC();
      sub_B5D668(v68, 0LL);
    }
  }
  if ( !v59->max_length )
  {
LABEL_27:
    v67 = sub_B5D6C8(touchBlocker);
    sub_B5D668(v67, 0LL);
  }
  v59->m_Items[0] = v60;
  sub_B5D560((BattleServantConfConponent_o *)v59->m_Items, (System_Int32_array **)v60, v61, v62, v63, v64, v65, v66);
  if ( !v58 )
    goto LABEL_26;
  touchBlocker = (UnityEngine_GameObject_o *)ChainableActionBase__Final((ChainableActionBase_o *)v58, v59, 0LL);
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
    sub_B5D69C(0LL, action);
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
    sub_B5D69C(0LL, action);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_42E71FC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, v11, v12, v13);
    byte_42E71FC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v15);
  CommonUI__SetConnect(Instance, 1, 0LL);
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_UserPresentBoxWindow__callbackPresentList_b__72_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v16, 1, 0LL);
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

  if ( (byte_42E7212 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, svtId, isNew, isAddSvt);
    byte_42E7212 = 1;
  }
  if ( isNew )
  {
    v9 = UserPresentBoxWindow__checkOverlapSvt(this, svtId, (const MethodInfo *)isNew);
    v11 = !v9;
    if ( !v9 && isAddSvt )
    {
      befSvtList = this->fields.befSvtList;
      if ( !befSvtList )
        sub_B5D69C(0LL, v10);
      System_Collections_Generic_List_int___Add(
        befSvtList,
        svtId,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  return v11 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkNewCommandCode(
        UserPresentBoxWindow_o *this,
        int64_t commandCodeId,
        bool isNew,
        bool isAddCommandCode,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  UserPresentBoxWindow___c__DisplayClass99_0_o *v24; // x21
  System_Collections_Generic_List_long__o *v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_long__o *befCommandCodeList; // x22
  System_Predicate_long__o *v28; // x23
  unsigned int Index; // w8
  _BOOL4 v30; // w0

  if ( (byte_42E7214 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, commandCodeId, isNew, isAddCommandCode);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__FindIndex__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Predicate_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Predicate_long__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__, v18, v19, v20);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo, v21, v22, v23);
    byte_42E7214 = 1;
  }
  v24 = (UserPresentBoxWindow___c__DisplayClass99_0_o *)sub_B5D694(UserPresentBoxWindow___c__DisplayClass99_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass99_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_12;
  v24->fields.commandCodeId = commandCodeId;
  if ( !isNew )
  {
    LOBYTE(v30) = 0;
    return v30;
  }
  befCommandCodeList = this->fields.befCommandCodeList;
  v28 = (System_Predicate_long__o *)sub_B5D694(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v28,
    (Il2CppObject *)v24,
    Method_UserPresentBoxWindow___c__DisplayClass99_0__checkNewCommandCode_b__0__,
    (const MethodInfo_2B92170 *)Method_System_Predicate_long___ctor__);
  if ( !befCommandCodeList )
    goto LABEL_12;
  Index = System_Collections_Generic_List_long___FindIndex(
            befCommandCodeList,
            (System_Predicate_T__o *)v28,
            (const MethodInfo_30481FC *)Method_System_Collections_Generic_List_long__FindIndex__);
  v30 = Index >> 31;
  if ( (Index & 0x80000000) != 0 && isAddCommandCode )
  {
    v25 = this->fields.befCommandCodeList;
    if ( v25 )
    {
      System_Collections_Generic_List_long___Add(
        v25,
        v24->fields.commandCodeId,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      LOBYTE(v30) = 1;
      return v30;
    }
LABEL_12:
    sub_B5D69C(v25, v26);
  }
  return v30;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x8
  __int64 *v16; // x8

  v8 = this;
  if ( (byte_42E7211 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&StringLiteral_9394/*"NEXT_SVT"*/, v9, v10, v11);
    this = (UserPresentBoxWindow_o *)sub_B5D5C4(&StringLiteral_6429/*"FINAL_SVT"*/, v12, v13, v14);
    byte_42E7211 = 1;
  }
  receiveList = v8->fields.receiveList;
  if ( !receiveList )
    goto LABEL_10;
  if ( v8->fields.receiveIdx >= receiveList->fields._size )
  {
    v8->fields.receiveList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields.receiveList, 0LL, v2, v3, v4, v5, v6, v7);
    this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
    v8->fields.receiveIdx = 0;
    if ( this )
    {
      v16 = &StringLiteral_6429/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B5D69C(this, method);
  }
  this = (UserPresentBoxWindow_o *)v8->fields.myFsm;
  if ( !this )
    goto LABEL_10;
  v16 = &StringLiteral_9394/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxWindow__checkOverlapSvt(
        UserPresentBoxWindow_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserPresentBoxWindow_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v11; // w22

  v5 = this;
  if ( (byte_42E7213 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, svtId, (_DWORD)method, v3);
    this = (UserPresentBoxWindow_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7, v8);
    byte_42E7213 = 1;
  }
  befSvtList = v5->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( befSvtList->fields._items->m_Items[v11 + 1] == svtId )
      return 1;
    if ( (int)++v11 >= size )
      return 0;
    befSvtList = v5->fields.befSvtList;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  AvalonSceneManager_c *v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ServantRewardAction_o *svtGetAction; // x19
  System_Action_o *v31; // x20

  if ( (byte_42E7210 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, v9, v10, v11);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo, v12, v13, v14);
    byte_42E7210 = 1;
  }
  v15 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass95_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass95_0___ctor((UserPresentBoxWindow___c__DisplayClass95_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_9;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)end_act, v24, v25, v26, v27, v28, v29);
  svtGetAction = this->fields.svtGetAction;
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v15, Method_UserPresentBoxWindow___c__DisplayClass95_0__endPlay_b__0__, 0LL);
  v16 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtGetAction )
LABEL_9:
    sub_B5D69C(v16, v17);
  ServantRewardAction__Play(svtGetAction, v31, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


void __fastcall UserPresentBoxWindow__incereIdx(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxWindow_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x9
  int32_t receiveIdx; // w8

  v4 = this;
  if ( (byte_42E7215 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, (_DWORD)method, v2, v3);
    this = (UserPresentBoxWindow_o *)sub_B5D5C4(&StringLiteral_9394/*"NEXT_SVT"*/, v5, v6, v7);
    byte_42E7215 = 1;
  }
  receiveList = v4->fields.receiveList;
  if ( !receiveList )
    goto LABEL_8;
  receiveIdx = v4->fields.receiveIdx;
  if ( receiveIdx < receiveList->fields._size )
    v4->fields.receiveIdx = receiveIdx + 1;
  this = (UserPresentBoxWindow_o *)v4->fields.myFsm;
  if ( !this )
LABEL_8:
    sub_B5D69C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9394/*"NEXT_SVT"*/, 0LL);
}


System_String_o *__fastcall UserPresentBoxWindow__maxSelectable(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BalanceConfig_c *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int32_t m_stringLength; // w20
  Il2CppObject *v14; // x19
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  int v18; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7223 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_24008/*"}"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_23792/*"{0,"*/, v7, v8, v9);
    byte_42E7223 = 1;
  }
  v18 = 0;
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = System_Int32__ToString((unsigned int)v10->static_fields + 112, 0LL);
  if ( !v11
    || (m_stringLength = v11->fields.m_stringLength,
        (v11 = System_Int32__ToString((unsigned int)BalanceConfig_TypeInfo->static_fields + 116, 0LL)) == 0LL) )
  {
    sub_B5D69C(v11, v12);
  }
  v14 = (Il2CppObject *)v11;
  v18 = v11->fields.m_stringLength + 2 * (m_stringLength - v11->fields.m_stringLength);
  v15 = System_Int32__ToString((int32_t)&v18, 0LL);
  v16 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_23792/*"{0,"*/,
          v15,
          (System_String_o *)StringLiteral_24008/*"}"*/,
          0LL);
  return System_String__Format(v16, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxWindow__receivePresent(
        UserPresentBoxWindow_o *this,
        System_Int64_array *presentIds,
        int32_t selectIdx,
        int32_t selectNum,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int64_t Instance; // x0
  __int64 v40; // x1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v42; // x3
  int v43; // w8
  System_Collections_Generic_IEnumerable_T__o *v44; // x23
  unsigned int v45; // w9
  __int64 v46; // x10
  int v47; // w10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v48; // x24
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  NetworkManager_ResultCallbackFunc_o *v55; // x23
  const MethodInfo *v56; // x2
  __int64 v57; // x0

  if ( (byte_42E7201 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserPresentBoxMaster___,
      (_DWORD)presentIds,
      selectIdx,
      *(_QWORD *)&selectNum);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68753672, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserPresentReceiveRequest___, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_UserPresentBoxWindow_CallbackReceiveRequest__, v36, v37, v38);
    byte_42E7201 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Instance = (int64_t)UserPresentBoxMaster__getVaildList_22554948(
                        MasterData_WarQuestSelectionMaster,
                        Instance,
                        presentIds,
                        v42);
  if ( !Instance )
    goto LABEL_28;
  v43 = *(_DWORD *)(Instance + 24);
  v44 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( v43 >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= v43 )
      {
        v57 = sub_B5D6C8(Instance);
        sub_B5D668(v57, 0LL);
      }
      v46 = *(_QWORD *)(Instance + 8LL * (int)v45 + 32);
      if ( !v46 )
        goto LABEL_28;
      v47 = *(_DWORD *)(v46 + 72);
      if ( v47 == 11 || v47 == 1 )
        break;
      if ( (int)++v45 >= v43 )
        goto LABEL_22;
    }
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_22;
    }
LABEL_28:
    sub_B5D69C(Instance, v40);
  }
LABEL_22:
  v48 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v48,
    v44,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor___68753672);
  this->fields.receiveList = (struct System_Collections_Generic_List_UserPresentBoxEntity__o *)v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.receiveList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.receiveIdx = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v55 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v55,
    (Il2CppObject *)this,
    Method_UserPresentBoxWindow_CallbackReceiveRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                        v55,
                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserPresentReceiveRequest___);
  if ( !Instance )
    goto LABEL_28;
  UserPresentReceiveRequest__beginRequest(
    (UserPresentReceiveRequest_o *)Instance,
    presentIds,
    selectIdx,
    selectNum,
    0LL);
  UserPresentBoxWindow__SetBtnEnable(this, 0, v56);
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
      sub_B5D69C(userPresentListViewManager, method);
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
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxWindow_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  struct System_Collections_Generic_List_UserPresentBoxEntity__o *receiveList; // x20
  __int64 receiveIdx; // x21
  int size; // w8
  UserPresentBoxEntity_o *v44; // x20
  int32_t giftType; // w21
  int v46; // w22
  GetSvts_array *getSvtList; // x22
  struct System_String_o *v48; // x23
  __int64 v49; // x24
  int32_t v50; // w23
  _BOOL4 v51; // w23
  bool v52; // w22
  const MethodInfo *v53; // x4
  _BOOL4 v54; // w22
  GetCommandCodes_array *getCommandCodeList; // x22
  struct System_String_o *age; // x23
  __int64 v57; // x24
  int32_t v58; // w23
  const MethodInfo *v59; // x4
  int64_t userCommandCodeId; // x22
  bool isNew; // w23
  bool Eff; // w0
  const MethodInfo *v63; // x7
  int32_t num; // w5
  bool v65; // w3
  UserPresentBoxWindow_o *v66; // x0
  int64_t v67; // x1
  bool v68; // w2
  int32_t v69; // w4
  int32_t presentDialogMessageId; // w6
  int32_t objectId; // w20
  const MethodInfo *v72; // x2
  _BOOL8 IsEquip; // x0
  const MethodInfo *v74; // x2
  QuestRewardInfo_o *QuestRewardInfo; // x0
  const MethodInfo *v76; // x2
  int32_t v77; // w21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v79; // x2
  QuestRewardInfo_o *v80; // x0
  const MethodInfo *v81; // x2
  bool IsOrganization; // w0
  int64_t userSvtId; // x22
  _BOOL4 v84; // w23
  int64_t v85; // x21
  CommonUI_o *v86; // x20
  CombineResultEffectComponent_ClickDelegate_o *v87; // x22
  ServantCostumeEntity_o *v88; // [xsp+8h] [xbp-58h] BYREF
  GetCommandCodes_o *v89; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v90; // [xsp+18h] [xbp-48h] BYREF
  GetSvts_o *data; // [xsp+20h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  v4 = this;
  if ( (byte_42E7209 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__get_Item__, v23, v24, v25);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35, v36, v37);
    this = (UserPresentBoxWindow_o *)sub_B5D5C4(&Method_UserPresentBoxWindow__showEffect_b__88_0__, v38, v39, v40);
    byte_42E7209 = 1;
  }
  data = 0LL;
  entity = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v88 = 0LL;
  receiveList = v4->fields.receiveList;
  if ( !receiveList )
    goto LABEL_102;
  receiveIdx = v4->fields.receiveIdx;
  size = receiveList->fields._size;
  if ( (int)receiveIdx >= size )
    goto LABEL_93;
  if ( size <= (unsigned int)receiveIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v44 = receiveList->fields._items->m_Items[receiveIdx];
  if ( !v44 )
    goto LABEL_102;
  giftType = v44->fields.giftType;
  if ( !Gift__IsServant(giftType, 0LL) )
  {
    if ( Gift__IsCommandCode(giftType, 0LL) )
    {
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                         &v90,
                                         v44->fields.objectId,
                                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_93;
      if ( !v90 )
        goto LABEL_102;
      getCommandCodeList = v4->fields.getCommandCodeList;
      v57 = *(_QWORD *)&v90->fields.id;
      age = v90->fields.age;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v94.fields.currentCryptoKey = v57;
      *(_QWORD *)&v94.fields.fakeValue = age;
      v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v94, 0LL);
      if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      if ( !MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v89, v58, 0LL) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v4->fields.effectPanel;
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_102;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        this = (UserPresentBoxWindow_o *)v4->fields.effectPanel;
        if ( !this )
          goto LABEL_102;
        this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      this = (UserPresentBoxWindow_o *)v89;
      if ( !v89 )
        goto LABEL_102;
      v4->fields.gotServant = v89->fields.isNew;
      this = (UserPresentBoxWindow_o *)GetCommandCodes__isDoGetEff((GetCommandCodes_o *)this, 0LL);
      if ( !v89 )
        goto LABEL_102;
      if ( !UserPresentBoxWindow__checkNewCommandCode(
              v4,
              v89->fields.userCommandCodeId,
              (unsigned __int8)this & 1,
              1,
              v59) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v89;
      if ( !v89 )
        goto LABEL_102;
      userCommandCodeId = v89->fields.userCommandCodeId;
      isNew = v89->fields.isNew;
      Eff = GetCommandCodes__isDoGetEff(v89, 0LL);
      num = v44->fields.num;
      v65 = Eff;
      v66 = v4;
      v67 = userCommandCodeId;
      v68 = isNew;
      v69 = giftType;
      presentDialogMessageId = 0;
LABEL_98:
      UserPresentBoxWindow__startRewardGetEffect(v66, v67, v68, v65, v69, num, presentDialogMessageId, v63);
      return;
    }
    if ( Gift__IsCostumeRelease(giftType, 0LL) )
    {
      objectId = v44->fields.objectId;
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !this )
        goto LABEL_102;
      if ( !ServantCostumeMaster__TryGetEntity(
              (ServantCostumeMaster_o *)this,
              &v88,
              objectId / 100,
              objectId % 100,
              0LL) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v4->fields.effectPanel;
      if ( this )
      {
        this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          this = (UserPresentBoxWindow_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (UserPresentBoxWindow_o *)v4->fields.effectPanel;
            if ( !this )
              goto LABEL_102;
            this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_102;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          }
          if ( v88 )
          {
            UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(v4, v88->fields.name, v72);
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
        QuestRewardInfo = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)IsEquip, v44, v74);
        UserPresentBoxWindow__startRewardEquipGetEffect(v4, QuestRewardInfo, v76);
        return;
      }
      if ( !Gift__IsItem(giftType, 0LL) )
        goto LABEL_93;
      v77 = v44->fields.objectId;
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_102;
      if ( !CommonUI__IsGetItemEffect((CommonUI_o *)this, v77, 0LL) )
        goto LABEL_93;
      this = (UserPresentBoxWindow_o *)v4->fields.effectPanel;
      if ( this )
      {
        this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          if ( !activeSelf )
          {
            this = (UserPresentBoxWindow_o *)v4->fields.effectPanel;
            if ( !this )
              goto LABEL_102;
            this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_102;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          }
          v80 = UserPresentBoxWindow__CreateQuestRewardInfo((UserPresentBoxWindow_o *)activeSelf, v44, v79);
          UserPresentBoxWindow__startRewardSpecialItemGetEffect(v4, v80, v81);
          return;
        }
      }
    }
LABEL_102:
    sub_B5D69C(this, method);
  }
  this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     &entity,
                                     v44->fields.objectId,
                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_93;
  if ( !entity )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
  if ( !entity )
    goto LABEL_102;
  v46 = (int)this;
  this = (UserPresentBoxWindow_o *)SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL);
  if ( ((v46 | (unsigned int)this) & 1) != 0 )
    goto LABEL_93;
  if ( !entity )
    goto LABEL_102;
  getSvtList = v4->fields.getSvtList;
  v49 = *(_QWORD *)&entity->fields.id;
  v48 = entity->fields.age;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v93.fields.currentCryptoKey = v49;
  *(_QWORD *)&v93.fields.fakeValue = v48;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v93, 0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  if ( !MissionInfoMaker__TryGetSvtListData(getSvtList, &data, v50, giftType, 0LL) )
    goto LABEL_93;
  this = (UserPresentBoxWindow_o *)v4->fields.effectPanel;
  if ( !this )
    goto LABEL_102;
  this = (UserPresentBoxWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_102;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (UserPresentBoxWindow_o *)v4->fields.effectPanel;
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
  v51 = data->fields.isNew;
  v52 = GetSvts__isDoGetEff(data, 0LL);
  this = (UserPresentBoxWindow_o *)Gift__IsEventSvtJoin(giftType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v54 = 0;
  }
  else
  {
    if ( !data )
      goto LABEL_102;
    v54 = !UserPresentBoxWindow__checkNew(v4, data->fields.userSvtId, v52, 1, v53);
  }
  this = (UserPresentBoxWindow_o *)entity;
  if ( !entity )
    goto LABEL_102;
  IsOrganization = ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL);
  if ( v51 && IsOrganization )
    v4->fields.gotServant = 1;
  this = (UserPresentBoxWindow_o *)entity;
  if ( !entity )
    goto LABEL_102;
  if ( !ServantEntity__get_IsExpUp((ServantEntity_o *)entity, 0LL) )
  {
    this = (UserPresentBoxWindow_o *)entity;
    if ( !entity )
      goto LABEL_102;
    if ( ((v54 | ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL)) & 1) == 0 )
    {
      this = (UserPresentBoxWindow_o *)data;
      if ( !data )
        goto LABEL_102;
      userSvtId = data->fields.userSvtId;
      v84 = data->fields.isNew;
      this = (UserPresentBoxWindow_o *)GetSvts__isDoGetEff(data, 0LL);
      if ( !data )
        goto LABEL_102;
      num = v44->fields.num;
      presentDialogMessageId = data->fields.presentDialogMessageId;
      v68 = v84;
      v65 = (unsigned __int8)this & 1;
      v66 = v4;
      v67 = userSvtId;
      v69 = giftType;
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
      this = (UserPresentBoxWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( data )
      {
        v85 = data->fields.userSvtId;
        v86 = (CommonUI_o *)this;
        v87 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B5D694(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v87,
          (Il2CppObject *)v4,
          Method_UserPresentBoxWindow__showEffect_b__88_0__,
          0LL);
        if ( v86 )
        {
          CommonUI__OpenSecretTreasureDeviceForSvtGet(v86, v85, v87, 0LL);
          return;
        }
      }
    }
    goto LABEL_102;
  }
LABEL_93:
  UserPresentBoxWindow__EndEffect(v4, method);
}


void __fastcall UserPresentBoxWindow__showReceiveResultDlg(UserPresentBoxWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  MissionNotifyManager_o *v20; // x0
  __int64 v21; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_42E7216 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, v17, v18, v19);
    byte_42E7216 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v20 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v20 )
    goto LABEL_12;
  MissionNotifyManager__CancelPause(v20, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_UserPresentBoxWindow__showReceiveResultDlg_b__101_0__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_B5D69C(v20, v21);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v25, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardCostumeReleaseGetEffect(
        UserPresentBoxWindow_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_42E720B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo, v15, v16, v17);
    byte_42E720B = 1;
  }
  v18 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass90_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass90_0___ctor((UserPresentBoxWindow___c__DisplayClass90_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)name, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v18,
    Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(touchBlocker, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardEquipGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_42E720C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)questRewardInfo, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__, v12, v13, v14);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo, v15, v16, v17);
    byte_42E720C = 1;
  }
  v18 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass91_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass91_0___ctor((UserPresentBoxWindow___c__DisplayClass91_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = questRewardInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)questRewardInfo,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v18,
    Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(touchBlocker, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
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
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  __int64 v54; // x20
  DataManager_o *Instance; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UserServantEntity_o *v63; // x21
  EventServantEntity_o *EventServant_21854464; // x0
  EventServantEntity_o *v65; // x22
  __int64 v66; // x19
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **JoinMessage; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 *v80; // x8
  CommonUI_o *v81; // x19
  AvalonSceneManager_c *v82; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v84; // x21
  System_Int32_array **Message; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  CommonUI_o *v99; // x20
  AvalonSceneManager_c *v100; // x8
  float v101; // s8
  System_Action_o *v102; // x21

  if ( (byte_42E720A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, userSvtID, isNew, isDoEffect);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ScriptManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__, v36, v37, v38);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__, v42, v43, v44);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12586/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12587/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/, v51, v52, v53);
    byte_42E720A = 1;
  }
  v54 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass89_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_0___ctor((UserPresentBoxWindow___c__DisplayClass89_0_o *)v54, 0LL);
  if ( !v54 )
    goto LABEL_34;
  *(_QWORD *)(v54 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
  *(_DWORD *)(v54 + 24) = giftType;
  *(_QWORD *)(v54 + 32) = userSvtID;
  *(_DWORD *)(v54 + 44) = num;
  *(_DWORD *)(v54 + 52) = presentDialogMessageId;
  *(_BYTE *)(v54 + 40) = isDoEffect;
  *(_BYTE *)(v54 + 48) = isNew;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteDialogKey(0LL);
  if ( !Gift__IsEventSvtJoin(*(_DWORD *)(v54 + 24), 0LL) )
    goto LABEL_19;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                *(_QWORD *)(v54 + 32),
                                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v63 = (UserServantEntity_o *)Instance;
  EventServant_21854464 = UserServantEntity__getEventServant_21854464((UserServantEntity_o *)Instance, 1, 0LL);
  if ( !EventServant_21854464 || (v65 = EventServant_21854464, EventServant_21854464->fields.type != 2) )
  {
LABEL_19:
    Instance = (DataManager_o *)this->fields.touchBlocker;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v81 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v82 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v82 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v82->static_fields->DEFAULT_FADE_TIME;
      v84 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v84,
        (Il2CppObject *)v54,
        Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__0__,
        0LL);
      if ( v81 )
      {
        CommonUI__maskFadeout(v81, 1, DEFAULT_FADE_TIME, v84, 0LL);
        return;
      }
    }
LABEL_34:
    sub_B5D69C(Instance, v56);
  }
  v66 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass89_1_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass89_1___ctor((UserPresentBoxWindow___c__DisplayClass89_1_o *)v66, 0LL);
  if ( !v66 )
    goto LABEL_34;
  *(_QWORD *)(v66 + 32) = v54;
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 32), (System_Int32_array **)v54, v67, v68, v69, v70, v71, v72);
  if ( UserServantEntity__HasStatus(v63, 64, 0LL) )
  {
    JoinMessage = (System_Int32_array **)EventServantEntity__GetJoinMessage(v65, 0LL);
    *(_QWORD *)(v66 + 24) = JoinMessage;
    sub_B5D560((BattleServantConfConponent_o *)(v66 + 24), JoinMessage, v74, v75, v76, v77, v78, v79);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v80 = &StringLiteral_12587/*"SUMMON_EVENT_SERVANT_TITLE_JOIN"*/;
  }
  else
  {
    Message = (System_Int32_array **)EventServantEntity__GetGetMessage(v65, 0LL);
    *(_QWORD *)(v66 + 24) = Message;
    sub_B5D560((BattleServantConfConponent_o *)(v66 + 24), Message, v86, v87, v88, v89, v90, v91);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v80 = &StringLiteral_12586/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/;
  }
  v92 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v80, 0LL);
  *(_QWORD *)(v66 + 16) = v92;
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 16), v92, v93, v94, v95, v96, v97, v98);
  v99 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v100 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v100 = AvalonSceneManager_TypeInfo;
  }
  v101 = v100->static_fields->DEFAULT_FADE_TIME;
  v102 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v102,
    (Il2CppObject *)v66,
    Method_UserPresentBoxWindow___c__DisplayClass89_1__startRewardGetEffect_b__1__,
    0LL);
  if ( !v99 )
    goto LABEL_34;
  CommonUI__maskFadein(v99, v101, v102, 0LL);
}


void __fastcall UserPresentBoxWindow__startRewardSpecialItemGetEffect(
        UserPresentBoxWindow_o *this,
        QuestRewardInfo_o *questRewardInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  UnityEngine_GameObject_o *touchBlocker; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_42E720D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)questRewardInfo, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo, v15, v16, v17);
    byte_42E720D = 1;
  }
  v18 = sub_B5D694(UserPresentBoxWindow___c__DisplayClass92_0_TypeInfo);
  UserPresentBoxWindow___c__DisplayClass92_0___ctor((UserPresentBoxWindow___c__DisplayClass92_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = questRewardInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)questRewardInfo,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  touchBlocker = this->fields.touchBlocker;
  if ( !touchBlocker )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlocker, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v18,
    Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(touchBlocker, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
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
  sub_B5D560(
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
  if ( (byte_42E7018 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, hasGetServant, (_DWORD)callback, object);
    byte_42E7018 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall UserPresentBoxWindow_ClickDelegate__EndInvoke(
        UserPresentBoxWindow_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  UserPresentBoxWindow_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  UserPresentBoxWindow_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, hasGetServant, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(hasGetServant, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, hasGetServant, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, hasGetServant, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            hasGetServant,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, hasGetServant, v21);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UserPresentBoxWindow_o *v17; // x8
  struct UserPresentListViewManager_o *userPresentListViewManager; // x8
  System_Int32_array **v19; // x1

  if ( (byte_42E7008 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E7008 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.userPresentListViewManager) == 0LL
    || (UserPresentListViewManager__resetCheckStatus((UserPresentListViewManager_o *)Instance, 0LL),
        (v17 = this->fields.__4__this) == 0LL)
    || (userPresentListViewManager = v17->fields.userPresentListViewManager) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  userPresentListViewManager->fields._expiredPresents_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&userPresentListViewManager->fields._expiredPresents_k__BackingField,
    v19,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  UserPresentBoxWindow___c__DisplayClass85_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UserPresentBoxWindow_o *_4__this; // x8
  UserPresentBoxEventPointRewardDialog_o *evpDialog; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v4 = this;
  if ( (byte_42E7009 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isOk, (_DWORD)method, v3);
    this = (UserPresentBoxWindow___c__DisplayClass85_0_o *)sub_B5D5C4(
                                                             &Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
                                                             v5,
                                                             v6,
                                                             v7);
    byte_42E7009 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  evpDialog = _4__this->fields.evpDialog;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_UserPresentBoxWindow___c__DisplayClass85_0__ShowEventPointReward_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !evpDialog )
LABEL_8:
    sub_B5D69C(this, isOk);
  UserPresentBoxEventPointRewardDialog__Close_22553704(evpDialog, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass85_0___ShowEventPointReward_b__1(
        UserPresentBoxWindow___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxWindow_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxWindow__UpdateEventInfos(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B5D69C(_4__this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__3; // x22
  SummonAssetManager_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E700B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__, v8, v9, v10);
    byte_42E700B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v14 = (SummonAssetManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  SummonAssetManager__LoadSummonAssets(v14, _9__3, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E700A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide, (_DWORD)method, v3);
    byte_42E700A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  UserPresentBoxWindow__EndEffect((UserPresentBoxWindow_o *)Instance, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass89_0___startRewardGetEffect_b__3(
        UserPresentBoxWindow___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int64_t Instance; // x0
  __int64 v33; // x1
  UserServantEntity_o *Entity; // x0
  struct UserPresentBoxWindow_o *_4__this; // x22
  UserPresentBoxWindow___c__DisplayClass89_0_Fields *p_fields; // x25
  UserServantEntity_o *v37; // x20
  SummonAssetManager_o *v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w21
  ServantRewardAction_o *svtGetAction; // x22
  __int64 v47; // x23
  __int64 v48; // x24
  int32_t v49; // w0
  __int128 v50; // q1
  int32_t v51; // w23
  int64_t v52; // x0
  __int64 v53; // x8
  int64_t v54; // x20
  struct ServantRewardAction_o *v55; // x8
  UserServantEntity_o *v56; // x0
  struct UserPresentBoxWindow_o *v57; // x22
  UserServantEntity_o *v58; // x21
  SummonAssetManager_o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct UserPresentBoxWindow_o *v66; // x8
  ServantRewardAction_o *v67; // x20
  __int128 v68; // q1
  bool isNew; // w2
  int64_t v70; // x1
  bool v71; // w3
  int32_t v72; // w4
  ServantRewardAction_o *v73; // x0
  ServantRewardAction_o *v74; // x21
  __int64 v75; // x22
  __int64 v76; // x23
  int32_t v77; // w0
  __int128 v78; // q1
  int32_t v79; // w22
  int64_t v80; // x0
  __int64 v81; // x8
  int64_t v82; // x20
  __int128 v83; // q1
  Il2CppObject *v84; // x19
  System_Action_o *v85; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_42E700C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_UserPresentBoxWindow_EndEffect__, v29, v30, v31);
    byte_42E700C = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_62;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               this->fields.userSvtID,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_fields = &this->fields;
    _4__this = this->fields.__4__this;
    v37 = Entity;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !this->fields.__4__this )
      goto LABEL_62;
    v38 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)this->fields.__4__this->fields.effectPanel;
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v38 )
      goto LABEL_62;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v38, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_62;
    _4__this->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_B5D560(
      (BattleServantConfConponent_o *)&_4__this->fields.svtGetAction,
      (System_Int32_array **)Instance,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    if ( this->fields.isDoEffect )
    {
      if ( v37 )
      {
        Instance = (int64_t)UserServantEntity__getEventServant_21854464(v37, 1, 0LL);
        v45 = 14;
        if ( Instance )
        {
          if ( *(_DWORD *)(Instance + 24) == 2 )
            v45 = 6;
          else
            v45 = 14;
        }
        if ( p_fields->__4__this )
        {
          svtGetAction = p_fields->__4__this->fields.svtGetAction;
          v48 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
          v47 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v91.fields.currentCryptoKey = v48;
          *(_QWORD *)&v91.fields.fakeValue = v47;
          v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v91, 0LL);
          v50 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
          v51 = v49;
          *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v90.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v89 = v90;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v89, 0LL);
          v53 = *(_QWORD *)&v37->fields.limitCount.fields.currentCryptoKey;
          *(_QWORD *)&v92.fields.fakeValue = *(_QWORD *)&v37->fields.limitCount.fields.fakeValue;
          v54 = v52;
          *(_QWORD *)&v92.fields.currentCryptoKey = v53;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v92, 0LL);
          if ( svtGetAction )
          {
            ServantRewardAction__Setup(
              svtGetAction,
              v51,
              v54,
              Instance,
              this->fields.num,
              this->fields.isNew,
              1,
              v45,
              0LL);
            if ( !this->fields.isNew )
              goto LABEL_60;
            if ( p_fields->__4__this )
            {
              v55 = p_fields->__4__this->fields.svtGetAction;
              if ( v55 )
              {
                v55->fields._PresentDialogMessageId_k__BackingField = this->fields.presentDialogMessageId;
                goto LABEL_60;
              }
            }
          }
        }
      }
LABEL_62:
      sub_B5D69C(Instance, v33);
    }
    if ( !p_fields->__4__this || !v37 )
      goto LABEL_62;
    v74 = p_fields->__4__this->fields.svtGetAction;
    v76 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
    v75 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v93.fields.currentCryptoKey = v76;
    *(_QWORD *)&v93.fields.fakeValue = v75;
    v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v93, 0LL);
    v78 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
    v79 = v77;
    *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v90.fields.fakeValue = v78;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v88 = v90;
    v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v88, 0LL);
    v81 = *(_QWORD *)&v37->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v94.fields.fakeValue = *(_QWORD *)&v37->fields.limitCount.fields.fakeValue;
    v82 = v80;
    *(_QWORD *)&v94.fields.currentCryptoKey = v81;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v94, 0LL);
    if ( !v74 )
      goto LABEL_62;
    ServantRewardAction__Setup(v74, v79, v82, Instance, this->fields.num, 0, 0, 6, 0LL);
  }
  else if ( Gift__IsCommandCode(this->fields.giftType, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_62;
    v56 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            this->fields.userSvtID,
            (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_fields = &this->fields;
    v57 = this->fields.__4__this;
    v58 = v56;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !this->fields.__4__this )
      goto LABEL_62;
    v59 = (SummonAssetManager_o *)Instance;
    Instance = (int64_t)this->fields.__4__this->fields.effectPanel;
    if ( !Instance )
      goto LABEL_62;
    Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v59 )
      goto LABEL_62;
    Instance = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(v59, (UnityEngine_Transform_o *)Instance, 0, 0LL);
    if ( !v57 )
      goto LABEL_62;
    v57->fields.svtGetAction = (struct ServantRewardAction_o *)Instance;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->fields.svtGetAction,
      (System_Int32_array **)Instance,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v66 = this->fields.__4__this;
    if ( !v66 || !v58 )
      goto LABEL_62;
    v67 = v66->fields.svtGetAction;
    if ( this->fields.isDoEffect )
    {
      v68 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
      *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v90.fields.fakeValue = v68;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v87 = v90;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v87, 0LL);
      if ( !v67 )
        goto LABEL_62;
      isNew = this->fields.isNew;
      v70 = Instance;
      v71 = 1;
      v72 = 14;
      v73 = v67;
    }
    else
    {
      v83 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
      *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v90.fields.fakeValue = v83;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v86 = v90;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v86, 0LL);
      if ( !v67 )
        goto LABEL_62;
      v70 = Instance;
      v72 = 6;
      v73 = v67;
      isNew = 0;
      v71 = 0;
    }
    ServantRewardAction__SetupCommandCode_29038332(v73, v70, isNew, v71, v72, 0LL);
  }
  else
  {
    p_fields = &this->fields;
  }
LABEL_60:
  v84 = (Il2CppObject *)p_fields->__4__this;
  v85 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v85, v84, Method_UserPresentBoxWindow_EndEffect__, 0LL);
  if ( !v84 )
    goto LABEL_62;
  UserPresentBoxWindow__endPlay((UserPresentBoxWindow_o *)v84, v85, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  struct UserPresentBoxWindow___c__DisplayClass89_0_o *CS___8__locals1; // x23
  System_String_o *title; // x20
  System_String_o *message; // x21
  NotificationDialog_ClickDelegate_o *_9__2; // x22
  CommonUI_o *v17; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E700D & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__, v8, v9, v10);
    byte_42E700D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  title = this->fields.title;
  message = this->fields.message;
  _9__2 = CS___8__locals1->fields.__9__2;
  v17 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_UserPresentBoxWindow___c__DisplayClass89_0__startRewardGetEffect_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&CS___8__locals1->fields.__9__2,
      (System_Int32_array **)_9__2,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v17 )
LABEL_8:
    sub_B5D69C(Instance, v12);
  CommonUI__OpenNotificationDialog_18204284(
    v17,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E700E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(
      &Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      v8,
      v9,
      v10);
    byte_42E700E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__LoadCostumeReleaseEffect(v14, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x21
  System_String_o *name; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E700F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(
      &Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      v8,
      v9,
      v10);
    byte_42E700F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass90_0__startRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__OpenCostumeReleaseEffect(v14, 0, name, _9__2, 23, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass90_0___startRewardCostumeReleaseGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7010 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7010 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E7011 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__, v8, v9, v10);
    byte_42E7011 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__LoadEquipGetEffect(v14, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E7012 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__, v8, v9, v10);
    byte_42E7012 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass91_0__startRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__OpenEquipGetEffect(v14, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass91_0___startRewardEquipGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7013 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7013 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v14; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E7014 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__, v8, v9, v10);
    byte_42E7014 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v14 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__LoadItemGetEffect(v14, questRewardInfo, _9__1, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__1(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *Instance; // x0
  __int64 v12; // x1
  struct UserPresentBoxWindow_o *_4__this; // x8
  CommonUI_o *v14; // x20
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v16; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E7015 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__, v8, v9, v10);
    byte_42E7015 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v14 = (CommonUI_o *)Instance;
  Instance = (UnityEngine_Component_o *)_4__this->fields.effectPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v16 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_UserPresentBoxWindow___c__DisplayClass92_0__startRewardSpecialItemGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v14 )
LABEL_9:
    sub_B5D69C(Instance, v12);
  CommonUI__OpenItemGetEffect(v14, v16, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall UserPresentBoxWindow___c__DisplayClass92_0___startRewardSpecialItemGetEffect_b__2(
        UserPresentBoxWindow___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7016 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7016 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseItemGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxWindow___c__DisplayClass95_0_o *v4; // x19
  struct UserPresentBoxWindow_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UserPresentBoxWindow_o *v7; // x8

  v4 = this;
  if ( (byte_42E7017 & 1) == 0 )
  {
    this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)sub_B5D5C4(
                                                             &UnityEngine_Object_TypeInfo,
                                                             (_DWORD)method,
                                                             v2,
                                                             v3);
    byte_42E7017 = 1;
  }
  _4__this = v4->fields.__4__this;
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
  UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
  v7 = v4->fields.__4__this;
  if ( !v7 || (this = (UserPresentBoxWindow___c__DisplayClass95_0_o *)v7->fields.touchBlocker) == 0LL )
LABEL_11:
    sub_B5D69C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.end_act, 0LL);
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