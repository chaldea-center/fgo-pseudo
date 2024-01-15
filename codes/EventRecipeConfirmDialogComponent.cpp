void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F60FF & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F60FF = 1;
  }
  this->fields.iconScale = 0.65;
  this->fields.possesionRootMovePositionY = -95.0;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventRecipeConfirmDialogComponent__CalcPossessionNum(
        EventRecipeConfirmDialogComponent_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserGameEntity_o *SelfUserGame; // x20
  WebViewManager_o *v13; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x0
  WarEntity_o *Entity; // x0
  int bannerId; // w8
  WebViewManager_o *v17; // x0
  UserItemMaster_o *v18; // x20
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0

  if ( (byte_40F60F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, gift);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F60F5 = 1;
  }
  if ( !gift )
    goto LABEL_31;
  if ( Gift__IsServant_28854740(gift->fields.type, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
        return UserServantMaster__GetServantHavingCount(
                 MasterData_WarQuestSelectionMaster,
                 gift->fields.objectId,
                 0,
                 0LL);
    }
LABEL_31:
    sub_B170D4();
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_31;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v13,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !v14 )
    goto LABEL_31;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v14,
             gift->fields.objectId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_31;
  bannerId = Entity->fields.bannerId;
  if ( bannerId <= 5 )
  {
    if ( bannerId == 1 )
    {
      if ( !SelfUserGame )
        goto LABEL_31;
      return SelfUserGame->fields.qp;
    }
    if ( bannerId == 5 )
    {
      if ( !SelfUserGame )
        goto LABEL_31;
      return SelfUserGame->fields.mana;
    }
  }
  else
  {
    if ( bannerId == 13 )
    {
      if ( !SelfUserGame )
        goto LABEL_31;
      return UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
    }
    if ( bannerId == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_31;
      return SelfUserGame->fields.rarePri;
    }
  }
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_31;
  v18 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v17,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v18 )
    goto LABEL_31;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(v18, UserId, gift->fields.objectId, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_31;
  return EntityDefinitely->fields.num;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__CallBackPresentBoxOverDialog(
        EventRecipeConfirmDialogComponent_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20

  if ( (byte_40F60FB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isOpenPresentBox);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__, v7);
    sub_B16FFC(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, v8);
    byte_40F60FB = 1;
  }
  v9 = sub_B170CC(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, isOpenPresentBox, method, v3, v4);
  EventRecipeConfirmDialogComponent___c__DisplayClass63_0___ctor(
    (EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_BYTE *)(v9 + 16) = isOpenPresentBox,
        *(_QWORD *)(v9 + 24) = this,
        sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v9,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_B170D4();
  }
  PresentBoxOverDialog__Close_25198280(presentBoxOverDlg, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__CallOnDecide(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  EventRecipeConfirmDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x2
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x20
  BalanceConfig_c *v21; // x8
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  PresentBoxOverDialog_ClickDelegate_o *v30; // x22
  BattleServantConfConponent_o *p_onDecide; // x0
  System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_40F60FC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    sub_B16FFC(&BalanceConfig_TypeInfo, v5);
    sub_B16FFC(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v6);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_10992/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, v10);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40F60FC = 1;
  }
  if ( v4->fields.onDecide )
  {
    v12 = EventRecipeConfirmDialogComponent__CheckServant(this, *(const MethodInfo **)&result);
    if ( v12 )
    {
      if ( EventRecipeConfirmDialogComponent__CheckOverCapacity(
             (EventRecipeConfirmDialogComponent_o *)v12,
             v4->fields.eventRecipeGiftList,
             v13) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10992/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
        v21 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v21 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v21->static_fields->PresentBoxMax;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax);
        v23 = System_String__Format(v20, v22, 0LL);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v25 = v23;
        v30 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B170CC(
                                                        PresentBoxOverDialog_ClickDelegate_TypeInfo,
                                                        v26,
                                                        v27,
                                                        v28,
                                                        v29);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v25, v30, 0, 0LL);
          goto LABEL_14;
        }
      }
      else
      {
        p_onDecide = (BattleServantConfConponent_o *)&v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_B16F98(p_onDecide, 0LL, v14, v15, v16, v17, v18, v19);
        if ( onDecide )
        {
          System_Action_int___Invoke(onDecide, result, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
          return;
        }
      }
      sub_B170D4();
    }
LABEL_14:
    v4->fields.state = 2;
  }
}


bool __fastcall EventRecipeConfirmDialogComponent__CheckOverCapacity(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *giftEnt,
        const MethodInfo *method)
{
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
  UserPresentBoxMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserPresentBoxEntity_array *VaildList; // x20
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_int__o *v23; // x21
  GiftEntity_array *GiftListById; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  signed int max_length; // w8
  unsigned int v28; // w24
  EventRecipeGiftEntity_o *v29; // x8
  __int64 v30; // x8
  GiftEntity_array *v31; // x23
  __int64 v32; // x27
  GiftEntity_o *v33; // x20
  int32_t v34; // w19
  BalanceConfig_c *v35; // x8
  UserPresentBoxEntity_array *v37; // [xsp+8h] [xbp-58h]

  if ( (byte_40F60F9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, giftEnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F60F9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  VaildList = UserPresentBoxMaster__getVaildList(Master_WarQuestSelectionMaster, UserId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v37 = VaildList;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_33;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= max_length )
        goto LABEL_34;
      v29 = giftEnt->m_Items[v28];
      if ( !v29 )
        goto LABEL_33;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_33;
      GiftListById = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v29->fields.giftId, 0LL);
      if ( !GiftListById )
        goto LABEL_33;
      v30 = *(_QWORD *)&GiftListById->max_length;
      v31 = GiftListById;
      if ( v30 )
      {
        if ( (int)v30 >= 1 )
          break;
      }
LABEL_27:
      max_length = giftEnt->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_28;
    }
    v32 = 0LL;
    while ( (unsigned int)v32 < (unsigned int)v30 )
    {
      v33 = v31->m_Items[v32];
      if ( !v33 || !v23 )
        goto LABEL_33;
      GiftListById = (GiftEntity_array *)System_Collections_Generic_List_int___Contains(
                                           v23,
                                           v33->fields.type,
                                           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)GiftListById & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v23,
          v33->fields.type,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v30) = v31->max_length;
      if ( (int)++v32 >= (int)v30 )
        goto LABEL_27;
    }
LABEL_34:
    sub_B17100(GiftListById, v25, v26);
    sub_B170A0();
  }
LABEL_28:
  if ( !v37 )
LABEL_33:
    sub_B170D4();
  v34 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  v35 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v34 + v37->max_length) > v35->static_fields->PresentBoxMax;
}


bool __fastcall EventRecipeConfirmDialogComponent__CheckServant(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserGameEntity_o *SelfUserGame; // x21
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v14; // x19
  WebViewManager_o *v15; // x0
  UserCommandCodeMaster_o *v16; // x20
  WebViewManager_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CommonUI_o *v22; // x19
  int32_t v23; // w20
  int32_t svtKeep; // w21
  EventRecipeConfirmDialogComponent___c_c *v25; // x0
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__62_0; // x22
  Il2CppObject *v28; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  CommonUI_o *v36; // x0
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  WebViewManager_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  CommonUI_o *v45; // x19
  int32_t v46; // w20
  int32_t svtEquipKeep; // w21
  EventRecipeConfirmDialogComponent___c_c *v48; // x0
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v49; // x8
  Il2CppObject *v50; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t Count; // w19
  WebViewManager_o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  CommonUI_o *v64; // x20
  BalanceConfig_c *v65; // x8
  EventRecipeConfirmDialogComponent___c_c *v66; // x0
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v67; // x8
  Il2CppObject *v68; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ServantAssetLoadManager_o *v76; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F60FA & 1) == 0 )
  {
    sub_B16FFC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__, v7);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__, v8);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__, v9);
    sub_B16FFC(&EventRecipeConfirmDialogComponent___c_TypeInfo, v10);
    byte_40F60FA = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_53;
  v14 = MasterData_WarQuestSelectionMaster;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_53;
  v16 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v15,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v22 = (CommonUI_o *)v17;
      v23 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      v25 = EventRecipeConfirmDialogComponent___c_TypeInfo;
      if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
        v25 = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__62_0 = static_fields->__9__62_0;
      if ( !_9__62_0 )
      {
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                     ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                     v18,
                                                                     v19,
                                                                     v20,
                                                                     v21);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__62_0,
          v28,
          Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
          0LL);
        v29 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
        v29->__9__62_0 = _9__62_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v29->__9__62_0,
          (System_Int32_array **)_9__62_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      if ( v22 )
      {
        v36 = v22;
        v37 = v23;
        v38 = svtKeep;
        v39 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B170D4();
  }
  if ( UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL) )
  {
    v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v45 = (CommonUI_o *)v40;
    v46 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    v48 = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      v48 = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v49 = v48->static_fields;
    _9__62_0 = v49->__9__62_1;
    if ( !_9__62_0 )
    {
      if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v49 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)v49->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                   ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                   v41,
                                                                   v42,
                                                                   v43,
                                                                   v44);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v50,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v51 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v51->__9__62_1 = _9__62_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v51->__9__62_1,
        (System_Int32_array **)_9__62_0,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    if ( !v45 )
      goto LABEL_53;
    v39 = 1;
    v36 = v45;
    v37 = v46;
  }
  else
  {
    if ( !v16 )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(v16, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(v16, 0LL);
    v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v64 = (CommonUI_o *)v59;
    if ( !byte_40F6094 )
    {
      sub_B16FFC(&BalanceConfig_TypeInfo, v60);
      byte_40F6094 = 1;
    }
    v65 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v65 = BalanceConfig_TypeInfo;
    }
    v66 = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v65->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      v66 = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v67 = v66->static_fields;
    _9__62_0 = v67->__9__62_4;
    if ( !_9__62_0 )
    {
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        v67 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v68 = (Il2CppObject *)v67->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                   ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                   v60,
                                                                   v61,
                                                                   v62,
                                                                   v63);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v68,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v69 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v69->__9__62_4 = _9__62_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v69->__9__62_4,
        (System_Int32_array **)_9__62_0,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    if ( !v64 )
      goto LABEL_53;
    v39 = 2;
    v36 = v64;
    v37 = Count;
  }
  v38 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v36, v37, v38, v39, 1, _9__62_0, 3, 0LL);
  v76 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !v76 )
    goto LABEL_53;
  ServantAssetLoadManager__EndRetryTransition(v76, 0LL);
  return 0;
}


void __fastcall EventRecipeConfirmDialogComponent__Close(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F60F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F60F8 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardItemObjList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v16.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__EndOpen(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall EventRecipeConfirmDialogComponent__GetItemSliderMax(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int32_t max; // w21
  UserItemMaster_o *v9; // x20
  __int64 v10; // x22
  int64_t UserId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct CommonConsumeEntity_array *v14; // x8
  CommonConsumeEntity_o *v15; // x8
  struct CommonConsumeEntity_array *v16; // x9
  CommonConsumeEntity_o *v17; // x9
  struct CommonConsumeEntity_array *v18; // x8
  CommonConsumeEntity_o *v19; // x9
  struct System_Boolean_array *isShortage; // x8
  bool v21; // w9
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F60F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F60F1 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_30:
    sub_B170D4();
  }
  max = this->fields.max;
  v9 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
  v10 = 0LL;
  while ( (int)v10 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v14 = this->fields.exchangeOriginItemList;
    if ( !v14 )
      goto LABEL_30;
    if ( (unsigned int)v10 >= v14->max_length )
      goto LABEL_32;
    v15 = v14->m_Items[v10];
    if ( !v15 || !v9 )
      goto LABEL_30;
    UserId = UserItemMaster__TryGetEntity(v9, &entity, UserId, v15->fields.objectId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      v16 = this->fields.exchangeOriginItemList;
      if ( !v16 )
        goto LABEL_30;
      if ( (unsigned int)v10 >= v16->max_length )
        goto LABEL_32;
      v17 = v16->m_Items[v10];
      if ( !v17 )
        goto LABEL_30;
      UserId = UnityEngine_Mathf__Min_40727532(max, entity->fields.num / v17->fields.num, 0LL);
      v18 = this->fields.exchangeOriginItemList;
      if ( !v18 )
        goto LABEL_30;
      if ( (unsigned int)v10 >= v18->max_length )
        goto LABEL_32;
      v19 = v18->m_Items[v10];
      if ( !v19 )
        goto LABEL_30;
      if ( !entity )
        goto LABEL_30;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v10 >= isShortage->max_length )
        goto LABEL_32;
      max = UserId;
      v21 = v19->fields.num > entity->fields.num;
    }
    else
    {
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v10 >= isShortage->max_length )
      {
LABEL_32:
        sub_B17100(UserId, v12, v13);
        sub_B170A0();
      }
      max = 0;
      v21 = 1;
    }
    isShortage->m_Items[v10 + 4] = v21;
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    ++v10;
    if ( !exchangeOriginItemList )
      goto LABEL_30;
  }
  return max;
}


void __fastcall EventRecipeConfirmDialogComponent__Init(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventRecipeEntity, 0LL, v6, v7, v8, v9, v10, v11);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__InitItemSlider(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t makeCount; // w20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *v5; // x0
  UISliderWithButton_o *v6; // x0
  UISliderWithButton_o *v7; // x0
  int32_t v8; // w1
  bool v9; // w2
  UnityEngine_Component_o *itemSlider; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v13; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40F60F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, method);
    byte_40F60F2 = 1;
  }
  makeCount = this->fields.makeCount;
  if ( !makeCount )
  {
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( itemSlider )
    {
      gameObject = UnityEngine_Component__get_gameObject(itemSlider, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( decideButton )
        {
          v13 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
          if ( v13 )
          {
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v13,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
            if ( Component_srcLineSprite )
            {
              ((void (__fastcall *)(srcLineSprite_o *, _QWORD, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
                Component_srcLineSprite,
                0LL,
                Component_srcLineSprite->klass[1]._1.byval_arg.data);
              return;
            }
          }
        }
      }
    }
    goto LABEL_19;
  }
  v4 = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !v4 )
    goto LABEL_19;
  v5 = UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !v5 )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(v5, 1, 0LL);
  v6 = this->fields.itemSlider;
  if ( !v6 )
    goto LABEL_19;
  if ( makeCount != 1 )
  {
    UISliderWithButton__normalMode(v6, 0LL);
    v7 = this->fields.itemSlider;
    if ( v7 )
    {
      v8 = this->fields.makeCount;
      v9 = 1;
      goto LABEL_18;
    }
LABEL_19:
    sub_B170D4();
  }
  UISliderWithButton__grayMode(v6, 0LL);
  v7 = this->fields.itemSlider;
  if ( !v7 )
    goto LABEL_19;
  v8 = this->fields.makeCount;
  v9 = 0;
LABEL_18:
  UISliderWithButton__init(v7, v8, v9, 1, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickCancel(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40F60F7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F60F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_B170D4();
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventRecipeConfirmDialogComponent__Close(this, v4);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F60F6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F60F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    EventRecipeConfirmDialogComponent__CallOnDecide(this, this->fields.makeCount, v3);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__Open(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        System_Action_int__o *onDecide,
        PresentBoxOverDialog_o *boxOverDlg,
        System_Action_o *boxOverDlgCallBack,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x25
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLb; // x22
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v72; // x0
  System_String_o *v73; // x24
  UILabel_o *cancelButtonLb; // x22
  System_String_o *v75; // x0
  UILabel_o *decideButtonLb; // x22
  System_String_o *v77; // x0
  WebViewManager_o *Instance; // x0
  CommonConsumeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // x1
  UILabel_o *rewardListTitleLb; // x21
  System_String_o *v100; // x0
  UILabel_o *rewardListDescriptionLb; // x21
  System_String_o *v102; // x0
  UILabel_o *topLabel; // x21
  System_String_o *v104; // x0
  const MethodInfo *v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  System_Action_o *v110; // x20
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F60F0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, eventRecipeEntity);
    sub_B16FFC(&AtlasManager_TypeInfo, v14);
    sub_B16FFC(&bool___TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v16);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent_EndOpen__, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_11000/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, v23);
    sub_B16FFC(&StringLiteral_10998/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, v24);
    sub_B16FFC(&StringLiteral_19305/*"icon_{0}"*/, v25);
    sub_B16FFC(&StringLiteral_10999/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, v26);
    sub_B16FFC(&StringLiteral_10997/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, v27);
    sub_B16FFC(&StringLiteral_3254/*"COMMON_CONFIRM_EXECUTE"*/, v28);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v29);
    byte_40F60F0 = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeEntity,
      (System_Int32_array **)eventRecipeEntity,
      (System_String_array **)eventRecipeGiftEntities,
      (System_String_array **)onDecide,
      (System_Boolean_array **)boxOverDlg,
      (System_Int32_array **)boxOverDlgCallBack,
      (System_Int32_array *)method,
      v7);
    this->fields.onDecide = onDecide;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.boxOverDlgCloseCallBack,
      (System_Int32_array **)boxOverDlgCallBack,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.presentBoxOverDlg,
      (System_Int32_array **)boxOverDlg,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeGiftList,
      (System_Int32_array **)eventRecipeGiftEntities,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    v55,
                                                                                                    v56,
                                                                                                    v57,
                                                                                                    v58);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v59,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v59;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.rewardItemObjList,
      (System_Int32_array **)v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10999/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !*p_eventRecipeEntity )
      goto LABEL_24;
    v69 = System_String__Format(v68, (Il2CppObject *)(*p_eventRecipeEntity)->fields.name, 0LL);
    if ( !titleLb )
      goto LABEL_24;
    UILabel__set_text(titleLb, v69, 0LL);
    if ( !eventRecipeEntity )
      goto LABEL_24;
    eventId = this->fields.eventId;
    eventItemIcon = this->fields.eventItemIcon;
    iconId = eventRecipeEntity->fields.iconId;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
    v73 = System_String__Format((System_String_o *)StringLiteral_19305/*"icon_{0}"*/, v72, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, eventItemIcon, v73, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLb, v75, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    v77 = LocalizationManager__Get((System_String_o *)StringLiteral_3254/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_24;
    UILabel__set_text(decideButtonLb, v77, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_24;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         MasterData_WarQuestSelectionMaster,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.exchangeOriginItemList,
      (System_Int32_array **)SortedEntityList,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_24;
    v89 = (struct System_Boolean_array *)sub_B17014(bool___TypeInfo, exchangeOriginItemList->max_length, v87);
    this->fields.isShortage = v89;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.isShortage,
      (System_Int32_array **)v89,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v96);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v97);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v98);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_10998/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, v100, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          v102 = LocalizationManager__Get((System_String_o *)StringLiteral_10997/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, v102, 0LL),
          topLabel = this->fields.topLabel,
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11000/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_24:
      sub_B170D4();
    }
    UILabel__set_text(topLabel, v104, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v105);
    this->fields.state = 1;
    v110 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v106, v107, v108, v109);
    System_Action___ctor(v110, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v110, 0, 0LL);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__SerializeFieldNotNullCheck(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__SetExchangeBase(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *warningLb; // x20
  System_String_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool v14; // w0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v16; // x8
  il2cpp_array_size_t v17; // w23
  UILabel_o *exchangeOriginLb; // x20
  System_String_o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v24; // x9
  CommonConsumeEntity_o *v25; // x9
  UISprite_o *v26; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v29; // x9
  CommonConsumeEntity_o *v30; // x0
  UILabel_o *v31; // x20
  System_String_o *Name; // x0
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v34; // x9
  CommonConsumeEntity_o *v35; // x9
  int32_t num; // w9
  UILabel_o *v37; // x20
  int v38; // w8
  System_String_o *NumberFormatLong; // x0
  struct UILabel_array *v40; // x8
  struct System_Boolean_array *isShortage; // x9
  UIWidget_o *v42; // x20
  int v43; // s0
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v48; // x20
  System_String_o *v49; // x0
  struct CommonConsumeEntity_array *v50; // x8
  UnityEngine_GameObject_o *exchangeOriginDispObject; // x0
  UnityEngine_GameObject_o *exchangeOriginDispObject2; // x0
  il2cpp_array_size_t v53; // w23
  UILabel_o *exchangeOriginLb2; // x20
  System_String_o *v55; // x0
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v57; // x9
  CommonConsumeEntity_o *v58; // x9
  UISprite_o *v59; // x20
  int32_t v60; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v62; // x9
  CommonConsumeEntity_o *v63; // x0
  UILabel_o *v64; // x20
  System_String_o *v65; // x0
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v67; // x9
  CommonConsumeEntity_o *v68; // x9
  int32_t v69; // w9
  UILabel_o *v70; // x20
  int v71; // w8
  System_String_o *v72; // x0
  struct UILabel_array *v73; // x8
  struct System_Boolean_array *v74; // x9
  UIWidget_o *v75; // x20
  int v76; // s0
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v81; // x20
  System_String_o *v82; // x0
  struct CommonConsumeEntity_array *v83; // x8
  UnityEngine_GameObject_o *v84; // x0
  UILabel_o *exchangeDestinationLb; // x20
  System_String_o *v86; // x0
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v90; // x0
  System_String_o *v91; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  System_String_o *v93; // x0
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  System_String_o *v96; // x0
  struct EventRecipeEntity_o *v97; // x8
  int32_t v98; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19
  System_String_o *v101; // x0

  if ( (byte_40F60F3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_bool___, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_10994/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, v5);
    sub_B16FFC(&StringLiteral_11001/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v6);
    sub_B16FFC(&StringLiteral_10993/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v7);
    sub_B16FFC(&StringLiteral_10996/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v8);
    sub_B16FFC(&StringLiteral_10995/*"RECIPE_CONFIRM_DIALOG_KIND"*/, v9);
    byte_40F60F3 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11001/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  if ( !warningLb )
    goto LABEL_124;
  UILabel__set_text(warningLb, v11, 0LL);
  v12 = (UnityEngine_Component_o *)this->fields.warningLb;
  if ( !v12 )
    goto LABEL_124;
  gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
  v14 = System_Linq_Enumerable__Contains_bool_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.isShortage,
          1,
          (const MethodInfo_18D1944 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(gameObject, v14, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_124;
  v16 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v16 == 3 )
  {
    v17 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10996/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_124;
      UILabel__set_text(exchangeOriginLb, v19, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_124;
      if ( v17 >= exchangeOriginItemIcon->max_length )
        goto LABEL_125;
      v24 = this->fields.exchangeOriginItemList;
      if ( !v24 )
        goto LABEL_124;
      if ( v17 >= v24->max_length )
        goto LABEL_125;
      v25 = v24->m_Items[v17];
      if ( !v25 )
        goto LABEL_124;
      v26 = exchangeOriginItemIcon->m_Items[v17];
      objectId = v25->fields.objectId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v20 = AtlasManager__SetItem(v26, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_124;
      if ( v17 >= exchangeOriginItemNames->max_length )
        goto LABEL_125;
      v29 = this->fields.exchangeOriginItemList;
      if ( !v29 )
        goto LABEL_124;
      if ( v17 >= v29->max_length )
        goto LABEL_125;
      v30 = v29->m_Items[v17];
      if ( !v30 )
        goto LABEL_124;
      v31 = exchangeOriginItemNames->m_Items[v17];
      Name = CommonConsumeEntity__GetName(v30, 0LL);
      if ( !v31 )
        goto LABEL_124;
      UILabel__set_text(v31, Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_124;
      if ( v17 >= exchangeOriginCounts->max_length )
        goto LABEL_125;
      v34 = this->fields.exchangeOriginItemList;
      if ( !v34 )
        goto LABEL_124;
      if ( v17 >= v34->max_length )
        goto LABEL_125;
      v35 = v34->m_Items[v17];
      if ( !v35 )
        goto LABEL_124;
      num = v35->fields.num;
      v37 = exchangeOriginCounts->m_Items[v17];
      v38 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      NumberFormatLong = LocalizationManager__GetNumberFormatLong(v38 * num, 0LL);
      if ( !v37 )
        goto LABEL_124;
      UILabel__set_text(v37, NumberFormatLong, 0LL);
      v40 = this->fields.exchangeOriginCounts;
      if ( !v40 )
        goto LABEL_124;
      if ( v17 >= v40->max_length )
        goto LABEL_125;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_124;
      if ( v17 >= isShortage->max_length )
        goto LABEL_125;
      v42 = (UIWidget_o *)v40->m_Items[v17];
      if ( isShortage->m_Items[v17 + 4] )
      {
        *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_red(0LL);
        if ( !v42 )
          goto LABEL_124;
      }
      else
      {
        *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_white(0LL);
        if ( !v42 )
          goto LABEL_124;
      }
      UIWidget__set_color(v42, *(UnityEngine_Color_o *)&v43, 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_124;
      if ( v17 >= exchangeOriginCountKinds->max_length )
        goto LABEL_125;
      v48 = exchangeOriginCountKinds->m_Items[v17];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10995/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
      if ( !v48 )
        goto LABEL_124;
      UILabel__set_text(v48, v49, 0LL);
      v50 = this->fields.exchangeOriginItemList;
      if ( !v50 )
        goto LABEL_124;
      ++v17;
    }
    while ( (signed int)v17 < (signed int)v50->max_length );
    exchangeOriginDispObject = this->fields.exchangeOriginDispObject;
    if ( !exchangeOriginDispObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(exchangeOriginDispObject, 1, 0LL);
    exchangeOriginDispObject2 = this->fields.exchangeOriginDispObject2;
    if ( !exchangeOriginDispObject2 )
      goto LABEL_124;
  }
  else
  {
    if ( (int)v16 >= 1 )
    {
      v53 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_10996/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, v55, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v53 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_125;
        v57 = this->fields.exchangeOriginItemList;
        if ( !v57 )
          break;
        if ( v53 >= v57->max_length )
          goto LABEL_125;
        v58 = v57->m_Items[v53];
        if ( !v58 )
          break;
        v59 = exchangeOriginItemIcon2->m_Items[v53];
        v60 = v58->fields.objectId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v20 = AtlasManager__SetItem(v59, v60, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v53 >= exchangeOriginItemNames2->max_length )
          goto LABEL_125;
        v62 = this->fields.exchangeOriginItemList;
        if ( !v62 )
          break;
        if ( v53 >= v62->max_length )
          goto LABEL_125;
        v63 = v62->m_Items[v53];
        if ( !v63 )
          break;
        v64 = exchangeOriginItemNames2->m_Items[v53];
        v65 = CommonConsumeEntity__GetName(v63, 0LL);
        if ( !v64 )
          break;
        UILabel__set_text(v64, v65, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v53 >= exchangeOriginCounts2->max_length )
          goto LABEL_125;
        v67 = this->fields.exchangeOriginItemList;
        if ( !v67 )
          break;
        if ( v53 >= v67->max_length )
          goto LABEL_125;
        v68 = v67->m_Items[v53];
        if ( !v68 )
          break;
        v69 = v68->fields.num;
        v70 = exchangeOriginCounts2->m_Items[v53];
        v71 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        v72 = LocalizationManager__GetNumberFormatLong(v71 * v69, 0LL);
        if ( !v70 )
          break;
        UILabel__set_text(v70, v72, 0LL);
        v73 = this->fields.exchangeOriginCounts2;
        if ( !v73 )
          break;
        if ( v53 >= v73->max_length )
          goto LABEL_125;
        v74 = this->fields.isShortage;
        if ( !v74 )
          break;
        if ( v53 >= v74->max_length )
          goto LABEL_125;
        v75 = (UIWidget_o *)v73->m_Items[v53];
        if ( v74->m_Items[v53 + 4] )
        {
          *(UnityEngine_Color_o *)&v76 = UnityEngine_Color__get_red(0LL);
          if ( !v75 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v76 = UnityEngine_Color__get_white(0LL);
          if ( !v75 )
            break;
        }
        UIWidget__set_color(v75, *(UnityEngine_Color_o *)&v76, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v53 >= exchangeOriginCountKinds2->max_length )
        {
LABEL_125:
          sub_B17100(v20, v21, v22);
          sub_B170A0();
        }
        v81 = exchangeOriginCountKinds2->m_Items[v53];
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v82 = LocalizationManager__Get((System_String_o *)StringLiteral_10995/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
        if ( !v81 )
          break;
        UILabel__set_text(v81, v82, 0LL);
        v83 = this->fields.exchangeOriginItemList;
        if ( !v83 )
          break;
        if ( (signed int)++v53 >= (signed int)v83->max_length )
          goto LABEL_103;
      }
LABEL_124:
      sub_B170D4();
    }
LABEL_103:
    v84 = this->fields.exchangeOriginDispObject2;
    if ( !v84 )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(v84, 1, 0LL);
    exchangeOriginDispObject2 = this->fields.exchangeOriginDispObject;
    if ( !exchangeOriginDispObject2 )
      goto LABEL_124;
  }
  UnityEngine_GameObject__SetActive(exchangeOriginDispObject2, 0, 0LL);
  exchangeDestinationLb = this->fields.exchangeDestinationLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10993/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationLb, v86, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v90 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  v91 = LocalizationManager__GetNumberFormatLong(v90, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationItemCount, v91, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10995/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationCountKind, v93, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_124;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_10994/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationPointName, v96, 0LL);
  v97 = this->fields.eventRecipeEntity;
  if ( !v97 )
    goto LABEL_124;
  v98 = this->fields.makeCount;
  eventPointNum = v97->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v98 <= 1 )
    v98 = 1;
  v101 = LocalizationManager__GetNumberFormatLong(v98 * eventPointNum, 0LL);
  if ( !exchangeDestinationPointCount )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationPointCount, v101, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SetPossession(
        EventRecipeConfirmDialogComponent_o *this,
        ItemIconComponent_o *item,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  int32_t v6; // w0

  v6 = EventRecipeConfirmDialogComponent__CalcPossessionNum(this, gift, (const MethodInfo *)gift);
  if ( !item )
    sub_B170D4();
  ItemIconComponent__SetPossessionOneLabel(item, v6, 0LL);
  ItemIconComponent__SetPossessionRoot(item, this->fields.possesionRootMovePositionY, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__SetRewardList(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        const MethodInfo *method)
{
  EventRecipeGiftEntity_array *v3; // x22
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  unsigned int v17; // w9
  EventRecipeGiftEntity_o *v18; // x8
  int v19; // w8
  void *v20; // x22
  unsigned int v21; // w26
  GiftEntity_o *v22; // x23
  struct UnityEngine_GameObject_o *rewardItemIcon; // x24
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v27; // x25
  int v28; // s0
  UnityEngine_Transform_o *v31; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  ItemIconComponent_o *v33; // x25
  int32_t v34; // w3
  const MethodInfo *v35; // x3
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  EventRecipeGiftEntity_o *v39; // x8
  UnityEngine_Component_o *topLabel; // x0
  int32_t topIconId; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  bool v43; // zf
  UnityEngine_GameObject_o *v44; // x20
  struct System_Collections_Generic_List_GameObject__o *v45; // x21
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Transform_o *v47; // x0
  float v48; // s0
  UnityEngine_Component_o *v49; // x0
  bool v50; // w1
  void *v51; // [xsp+8h] [xbp-68h]
  EventRecipeGiftEntity_array *v52; // [xsp+10h] [xbp-60h]
  unsigned int v53; // [xsp+1Ch] [xbp-54h]
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  v3 = eventRecipeGiftEntities;
  if ( (byte_40F60F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, eventRecipeGiftEntities);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F60F4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v3 )
    goto LABEL_47;
  v16 = *(_QWORD *)&v3->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0;
    v51 = MasterData_WarQuestSelectionMaster;
    v52 = v3;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_48;
      v18 = v3->m_Items[v17];
      if ( !v18 )
        goto LABEL_47;
      v53 = v17;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      MasterData_WarQuestSelectionMaster = GiftMaster__GetGiftListById(
                                             (GiftMaster_o *)MasterData_WarQuestSelectionMaster,
                                             v18->fields.giftId,
                                             0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      v19 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
      v20 = MasterData_WarQuestSelectionMaster;
      if ( v19 >= 1 )
        break;
LABEL_28:
      listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
      if ( !listRoot )
        goto LABEL_47;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  listRoot,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      v3 = v52;
      if ( !Component_WebViewObject )
        goto LABEL_47;
      (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
        Component_WebViewObject,
        Component_WebViewObject->klass[1]._1.element_class);
      v16 = *(_QWORD *)&v52->max_length;
      MasterData_WarQuestSelectionMaster = v51;
      v17 = v53 + 1;
      if ( (int)(v53 + 1) >= (int)v16 )
        goto LABEL_31;
    }
    v21 = 0;
    while ( v21 < v19 )
    {
      v22 = (GiftEntity_o *)*((_QWORD *)v20 + (int)v21 + 4);
      rewardItemIcon = this->fields.rewardItemIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)rewardItemIcon,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v24 )
        goto LABEL_47;
      v25 = v24;
      transform = UnityEngine_GameObject__get_transform(v24, 0LL);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Transform__set_parent(transform, this->fields.listRoot, 0LL);
      v27 = UnityEngine_GameObject__get_transform(v25, 0LL);
      *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v27 )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
      v31 = UnityEngine_GameObject__get_transform(v25, 0LL);
      if ( !v31 )
        goto LABEL_47;
      v54.fields.x = this->fields.iconScale;
      v54.fields.y = v54.fields.x;
      v54.fields.z = v54.fields.x;
      UnityEngine_Transform__set_localScale(v31, v54, 0LL);
      Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v25,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v22 )
        goto LABEL_47;
      v33 = Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        goto LABEL_47;
      v34 = v22->fields.num <= 1 ? -1 : v22->fields.num;
      ItemIconComponent__SetGift(Component_srcLineSprite, v22->fields.type, v22->fields.objectId, v34, 0, 0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v33, v22, v35);
      UnityEngine_GameObject__SetActive(v25, 1, 0LL);
      rewardItemObjList = this->fields.rewardItemObjList;
      if ( !rewardItemObjList )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)rewardItemObjList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        goto LABEL_28;
    }
LABEL_48:
    sub_B17100(MasterData_WarQuestSelectionMaster, v14, v15);
    sub_B170A0();
  }
LABEL_31:
  if ( !(_DWORD)v16 )
    goto LABEL_48;
  v39 = v3->m_Items[0];
  if ( !v39 )
    goto LABEL_47;
  topLabel = (UnityEngine_Component_o *)this->fields.topLabel;
  if ( !topLabel )
    goto LABEL_47;
  topIconId = v39->fields.topIconId;
  gameObject = UnityEngine_Component__get_gameObject(topLabel, 0LL);
  v43 = topIconId == 1;
  v44 = gameObject;
  if ( !v43 )
  {
    if ( gameObject )
    {
      v50 = 0;
      goto LABEL_46;
    }
LABEL_47:
    sub_B170D4();
  }
  v45 = this->fields.rewardItemObjList;
  if ( !v45 )
    goto LABEL_47;
  if ( !v45->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v46 = v45->fields._items->m_Items[0];
  if ( !v46 )
    goto LABEL_47;
  v47 = UnityEngine_GameObject__get_transform(v46, 0LL);
  if ( !v47 )
    goto LABEL_47;
  LODWORD(v48) = (unsigned int)UnityEngine_Transform__get_localPosition(v47, 0LL);
  GameObjectExtensions__SetLocalPositionX(v44, v48, 0LL);
  v49 = (UnityEngine_Component_o *)this->fields.topLabel;
  if ( !v49 )
    goto LABEL_47;
  gameObject = UnityEngine_Component__get_gameObject(v49, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  v50 = 1;
LABEL_46:
  UnityEngine_GameObject__SetActive(gameObject, v50, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v8; // x9
  unsigned int v9; // w21
  struct UILabel_array *exchangeOriginCounts; // x10
  CommonConsumeEntity_o *v11; // x8
  UILabel_o *v12; // x20
  int32_t num; // w23
  int32_t makeCount; // w24
  System_String_o *NumberFormatLong; // x0
  unsigned int v16; // w21
  struct UILabel_array *exchangeOriginCounts2; // x10
  CommonConsumeEntity_o *v18; // x8
  UILabel_o *v19; // x20
  int32_t v20; // w23
  int32_t v21; // w24
  System_String_o *v22; // x0
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v24; // x21
  System_String_o *v25; // x0
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v27; // w9
  UILabel_o *exchangeDestinationPointCount; // x19
  System_String_o *v29; // x0

  if ( (byte_40F60FD & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F60FD = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_37;
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  this->fields.makeCount = v4;
  if ( !exchangeOriginItemList )
    goto LABEL_37;
  v8 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v8 == 3 )
  {
    v9 = 0;
    while ( 1 )
    {
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_37;
      if ( v9 >= exchangeOriginCounts->max_length || v9 >= (unsigned int)v8 )
        goto LABEL_38;
      v11 = exchangeOriginItemList->m_Items[v9];
      if ( !v11 )
        goto LABEL_37;
      v12 = exchangeOriginCounts->m_Items[v9];
      num = v11->fields.num;
      makeCount = this->fields.makeCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      NumberFormatLong = LocalizationManager__GetNumberFormatLong(makeCount * num, 0LL);
      if ( !v12 )
        goto LABEL_37;
      UILabel__set_text(v12, NumberFormatLong, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_37;
      LODWORD(v8) = exchangeOriginItemList->max_length;
      if ( (int)++v9 >= (int)v8 )
        goto LABEL_30;
    }
  }
  if ( (int)v8 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        break;
      if ( v16 >= exchangeOriginCounts2->max_length || v16 >= (unsigned int)v8 )
      {
LABEL_38:
        sub_B17100(v4, v5, v6);
        sub_B170A0();
      }
      v18 = exchangeOriginItemList->m_Items[v16];
      if ( !v18 )
        break;
      v19 = exchangeOriginCounts2->m_Items[v16];
      v20 = v18->fields.num;
      v21 = this->fields.makeCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__GetNumberFormatLong(v21 * v20, 0LL);
      if ( !v19 )
        break;
      UILabel__set_text(v19, v22, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        break;
      LODWORD(v8) = exchangeOriginItemList->max_length;
      if ( (int)++v16 >= (int)v8 )
        goto LABEL_30;
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_30:
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v24 = this->fields.makeCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__GetNumberFormatLong(v24, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_37;
  UILabel__set_text(exchangeDestinationItemCount, v25, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_37;
  v27 = this->fields.makeCount;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  v29 = LocalizationManager__GetNumberFormatLong(v27 * eventRecipeEntity->fields.eventPointNum, 0LL);
  if ( !exchangeDestinationPointCount )
    goto LABEL_37;
  UILabel__set_text(exchangeDestinationPointCount, v29, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___Close_b__60_0(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventRecipeConfirmDialogComponent__Init(this, this->fields.eventId, v2);
}


UnityEngine_GameObject_o *__fastcall EventRecipeConfirmDialogComponent__get_closeBtnObject(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40F60FE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F60FE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


int32_t __fastcall EventRecipeConfirmDialogComponent__makeCountAtLeast1(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t makeCount,
        const MethodInfo *method)
{
  if ( makeCount <= 1 )
    return 1;
  else
    return makeCount;
}


void __fastcall EventRecipeConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7026 & 1) == 0 )
  {
    sub_B16FFC(&EventRecipeConfirmDialogComponent___c_TypeInfo, v1);
    byte_40F7026 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventRecipeConfirmDialogComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventRecipeConfirmDialogComponent___c___ctor(
        EventRecipeConfirmDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_0(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F7027 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__, v7);
    sub_B16FFC(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, v8);
    byte_40F7027 = 1;
  }
  v9 = sub_B170CC(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_1(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F7028 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__, v7);
    sub_B16FFC(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, v8);
    byte_40F7028 = 1;
  }
  v9 = sub_B170CC(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_4(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F7029 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__, v7);
    sub_B16FFC(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, v8);
    byte_40F7029 = 1;
  }
  v9 = sub_B170CC(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c__DisplayClass62_0___ctor(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c__DisplayClass62_0___CheckServant_b__2(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  SceneJumpInfo_o *v12; // x20
  int32_t v13; // w1
  AvalonSceneManager_o *v14; // x0
  Il2CppObject *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4

  if ( (byte_40F702A & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12612/*"SellServant"*/, v4);
    sub_B16FFC(&StringLiteral_12651/*"ServantCombine"*/, v5);
    byte_40F702A = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v16, v17, v18, v19);
      SceneJumpInfo___ctor_29748028(v12, (System_String_o *)StringLiteral_12612/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B170D4();
    case 1:
      v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v14 )
      {
        v13 = 71;
        v15 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v14, v13, 1, v15, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v8, v9, v10, v11);
      SceneJumpInfo___ctor_29747932(v12, (System_String_o *)StringLiteral_12651/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        v14 = (AvalonSceneManager_o *)Instance;
        v15 = (Il2CppObject *)v12;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}


void __fastcall EventRecipeConfirmDialogComponent___c__DisplayClass62_1___ctor(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c__DisplayClass62_1___CheckServant_b__3(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t result; // w8
  AvalonSceneManager_o *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  SceneJumpInfo_o *v13; // x20
  int32_t v14; // w1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4

  if ( (byte_40F702B & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12655/*"ServantEquipList"*/, v4);
    sub_B16FFC(&StringLiteral_12612/*"SellServant"*/, v5);
    sub_B16FFC(&StringLiteral_12654/*"ServantEQCombine"*/, v6);
    byte_40F702B = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v19, v20, v21, v22);
      SceneJumpInfo___ctor_29748028(v13, (System_String_o *)StringLiteral_12612/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v14 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v15, v16, v17, v18);
      SceneJumpInfo___ctor_29747932(v13, (System_String_o *)StringLiteral_12655/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v14 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B170D4();
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v9, v10, v11, v12);
      SceneJumpInfo___ctor_29747932(v13, (System_String_o *)StringLiteral_12654/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v14 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v14, 1, (Il2CppObject *)v13, 0LL);
        return;
      }
      goto LABEL_14;
  }
}


void __fastcall EventRecipeConfirmDialogComponent___c__DisplayClass62_2___ctor(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c__DisplayClass62_2___CheckServant_b__5(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_2_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  SceneJumpInfo_o *v10; // x20

  if ( (byte_40F702C & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12612/*"SellServant"*/, v4);
    byte_40F702C = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v10 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v6, v7, v8, v9);
    SceneJumpInfo___ctor_29748028(v10, (System_String_o *)StringLiteral_12612/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B170D4();
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v10, 0LL);
  }
}


void __fastcall EventRecipeConfirmDialogComponent___c__DisplayClass63_0___ctor(
        EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c__DisplayClass63_0___CallBackPresentBoxOverDialog_b__0(
        EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  EventRecipeConfirmDialogComponent_o *_4__this; // x0
  struct EventRecipeConfirmDialogComponent_o *v4; // x8
  System_Action_o *boxOverDlgCloseCallBack; // x0

  if ( this->fields.isOpenPresentBox )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (EventRecipeConfirmDialogComponent__Close(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL)
      || (boxOverDlgCloseCallBack = v4->fields.boxOverDlgCloseCallBack) == 0LL )
    {
      sub_B170D4();
    }
    System_Action__Invoke(boxOverDlgCloseCallBack, 0LL);
  }
}