void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214A57 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4214A57 = 1;
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
  UserGameEntity_o *SelfUserGame; // x20
  int maskSprite; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_4214A4D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, gift);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B0D8A4(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v8);
    byte_4214A4D = 1;
  }
  if ( !gift )
    goto LABEL_31;
  if ( Gift__IsServant_26783204(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
        return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)this, gift->fields.objectId, 0, 0LL);
    }
LABEL_31:
    sub_B0D97C(this);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_31;
  maskSprite = (int)this->fields.maskSprite;
  if ( maskSprite <= 5 )
  {
    if ( maskSprite == 1 )
    {
      if ( !SelfUserGame )
        goto LABEL_31;
      return SelfUserGame->fields.qp;
    }
    if ( maskSprite == 5 )
    {
      if ( !SelfUserGame )
        goto LABEL_31;
      return SelfUserGame->fields.mana;
    }
  }
  else
  {
    if ( maskSprite == 13 )
    {
      if ( !SelfUserGame )
        goto LABEL_31;
      return UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
    }
    if ( maskSprite == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_31;
      return SelfUserGame->fields.rarePri;
    }
  }
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (EventRecipeConfirmDialogComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                  MasterData_WarQuestSelectionMaster,
                                                  (int64_t)this,
                                                  gift->fields.objectId,
                                                  0LL);
  if ( !this )
    goto LABEL_31;
  return HIDWORD(this->fields.basePanel);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__CallBackPresentBoxOverDialog(
        EventRecipeConfirmDialogComponent_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20

  if ( (byte_4214A53 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isOpenPresentBox);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__, v5);
    sub_B0D8A4(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, v6);
    byte_4214A53 = 1;
  }
  v7 = sub_B0D974(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, isOpenPresentBox, method);
  EventRecipeConfirmDialogComponent___c__DisplayClass63_0___ctor(
    (EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *)v7,
    0LL);
  if ( !v7
    || (*(_BYTE *)(v7 + 16) = isOpenPresentBox,
        *(_QWORD *)(v7 + 24) = this,
        sub_B0D840((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_B0D97C(v8);
  }
  PresentBoxOverDialog__Close_24354568(presentBoxOverDlg, v18, 0LL);
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
  PresentBoxOverDialog_ClickDelegate_o *v28; // x22
  __int64 v29; // x0
  BattleServantConfConponent_o *p_onDecide; // x0
  System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4214A54 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v5);
    sub_B0D8A4(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v6);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_11055/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, v10);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4214A54 = 1;
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
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11055/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
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
        v28 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B0D974(PresentBoxOverDialog_ClickDelegate_TypeInfo, v26, v27);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v25, v28, 0, 0LL);
          goto LABEL_14;
        }
      }
      else
      {
        p_onDecide = (BattleServantConfConponent_o *)&v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_B0D840(p_onDecide, 0LL, v14, v15, v16, v17, v18, v19);
        if ( onDecide )
        {
          System_Action_int___Invoke(onDecide, result, (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
          return;
        }
      }
      sub_B0D97C(v29);
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
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x21
  signed int max_length; // w8
  unsigned int v22; // w24
  EventRecipeGiftEntity_o *v23; // x8
  __int64 v24; // x8
  int64_t v25; // x23
  __int64 v26; // x27
  __int64 v27; // x20
  int32_t v28; // w19
  BalanceConfig_c *v29; // x8
  __int64 v31; // x0
  UserPresentBoxEntity_array *v32; // [xsp+8h] [xbp-58h]

  if ( (byte_4214A51 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, giftEnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4214A51 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  VaildList = UserPresentBoxMaster__getVaildList(Master_WarQuestSelectionMaster, UserId, 0LL);
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_33;
  v32 = VaildList;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)UserId,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v18, v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_33;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        goto LABEL_34;
      v23 = giftEnt->m_Items[v22];
      if ( !v23 )
        goto LABEL_33;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_33;
      UserId = (int64_t)GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v23->fields.giftId, 0LL);
      if ( !UserId )
        goto LABEL_33;
      v24 = *(_QWORD *)(UserId + 24);
      v25 = UserId;
      if ( v24 )
      {
        if ( (int)v24 >= 1 )
          break;
      }
LABEL_27:
      max_length = giftEnt->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_28;
    }
    v26 = 0LL;
    while ( (unsigned int)v26 < (unsigned int)v24 )
    {
      v27 = *(_QWORD *)(v25 + 32 + 8 * v26);
      if ( !v27 || !v20 )
        goto LABEL_33;
      UserId = System_Collections_Generic_List_int___Contains(
                 v20,
                 *(_DWORD *)(v27 + 20),
                 (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (UserId & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v20,
          *(_DWORD *)(v27 + 20),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v24) = *(_DWORD *)(v25 + 24);
      if ( (int)++v26 >= (int)v24 )
        goto LABEL_27;
    }
LABEL_34:
    v31 = sub_B0D9A8(UserId);
    sub_B0D948(v31, 0LL);
  }
LABEL_28:
  if ( !v32 )
LABEL_33:
    sub_B0D97C(UserId);
  v28 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v28 + v32->max_length) > v29->static_fields->PresentBoxMax;
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
  void *Instance; // x0
  UserServantMaster_o *v13; // x19
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *v17; // x19
  int32_t v18; // w20
  int32_t svtKeep; // w21
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__62_0; // x22
  Il2CppObject *v22; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CommonUI_o *v30; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  CommonUI_o *v36; // x19
  int32_t v37; // w20
  int32_t svtEquipKeep; // w21
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v39; // x8
  Il2CppObject *v40; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t Count; // w19
  __int64 v49; // x1
  __int64 v50; // x2
  CommonUI_o *v51; // x20
  BalanceConfig_c *v52; // x8
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v53; // x8
  Il2CppObject *v54; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214A52 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__, v7);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__, v8);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__, v9);
    sub_B0D8A4(&EventRecipeConfirmDialogComponent___c_TypeInfo, v10);
    byte_4214A52 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v13 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v13, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v17 = (CommonUI_o *)Instance;
      v18 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      static_fields = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__62_0 = static_fields->__9__62_0;
      if ( !_9__62_0 )
      {
        if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                     ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                     v15,
                                                                     v16);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__62_0,
          v22,
          Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
          0LL);
        v23 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
        v23->__9__62_0 = _9__62_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v23->__9__62_0,
          (System_Int32_array **)_9__62_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      if ( v17 )
      {
        v30 = v17;
        v31 = v18;
        v32 = svtKeep;
        v33 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B0D97C(Instance);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v13, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v36 = (CommonUI_o *)Instance;
    v37 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v39 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v39->__9__62_1;
    if ( !_9__62_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v39 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)v39->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                   ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                   v34,
                                                                   v35);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v40,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v41 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v41->__9__62_1 = _9__62_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v41->__9__62_1,
        (System_Int32_array **)_9__62_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    if ( !v36 )
      goto LABEL_53;
    v33 = 1;
    v30 = v36;
    v31 = v37;
  }
  else
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(MasterData_WarQuestSelectionMaster, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v51 = (CommonUI_o *)Instance;
    if ( !byte_421088F )
    {
      sub_B0D8A4(&BalanceConfig_TypeInfo, v49);
      byte_421088F = 1;
    }
    v52 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v52->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v53 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v53->__9__62_4;
    if ( !_9__62_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v53 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)v53->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                   ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                   v49,
                                                                   v50);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v54,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v55 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v55->__9__62_4 = _9__62_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v55->__9__62_4,
        (System_Int32_array **)_9__62_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    if ( !v51 )
      goto LABEL_53;
    v33 = 2;
    v30 = v51;
    v31 = Count;
  }
  v32 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v30, v31, v32, v33, 1, _9__62_0, 3, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
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
  System_Action_o *v13; // x20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214A50 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4214A50 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardItemObjList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v14.fields.current;
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
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  int64_t Instance; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int32_t max; // w21
  UserItemMaster_o *v8; // x20
  __int64 v9; // x22
  struct CommonConsumeEntity_array *v10; // x8
  CommonConsumeEntity_o *v11; // x8
  struct CommonConsumeEntity_array *v12; // x9
  CommonConsumeEntity_o *v13; // x9
  struct CommonConsumeEntity_array *v14; // x8
  CommonConsumeEntity_o *v15; // x9
  struct System_Boolean_array *isShortage; // x8
  bool v17; // w9
  __int64 v19; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214A49 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4214A49 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_30:
    sub_B0D97C(Instance);
  }
  max = this->fields.max;
  v8 = (UserItemMaster_o *)Instance;
  v9 = 0LL;
  while ( (int)v9 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v10 = this->fields.exchangeOriginItemList;
    if ( !v10 )
      goto LABEL_30;
    if ( (unsigned int)v9 >= v10->max_length )
      goto LABEL_32;
    v11 = v10->m_Items[v9];
    if ( !v11 || !v8 )
      goto LABEL_30;
    Instance = UserItemMaster__TryGetEntity(v8, &entity, Instance, v11->fields.objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      v12 = this->fields.exchangeOriginItemList;
      if ( !v12 )
        goto LABEL_30;
      if ( (unsigned int)v9 >= v12->max_length )
        goto LABEL_32;
      v13 = v12->m_Items[v9];
      if ( !v13 )
        goto LABEL_30;
      Instance = UnityEngine_Mathf__Min_40819044(max, entity->fields.num / v13->fields.num, 0LL);
      v14 = this->fields.exchangeOriginItemList;
      if ( !v14 )
        goto LABEL_30;
      if ( (unsigned int)v9 >= v14->max_length )
        goto LABEL_32;
      v15 = v14->m_Items[v9];
      if ( !v15 )
        goto LABEL_30;
      if ( !entity )
        goto LABEL_30;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v9 >= isShortage->max_length )
        goto LABEL_32;
      max = Instance;
      v17 = v15->fields.num > entity->fields.num;
    }
    else
    {
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v9 >= isShortage->max_length )
      {
LABEL_32:
        v19 = sub_B0D9A8(Instance);
        sub_B0D948(v19, 0LL);
      }
      max = 0;
      v17 = 1;
    }
    isShortage->m_Items[v9 + 4] = v17;
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    ++v9;
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventRecipeEntity, 0LL, v6, v7, v8, v9, v10, v11);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__InitItemSlider(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t makeCount; // w20
  UnityEngine_Component_o *itemSlider; // x0
  int32_t v5; // w1
  bool v6; // w2

  if ( (byte_4214A4A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, method);
    byte_4214A4A = 1;
  }
  makeCount = this->fields.makeCount;
  if ( !makeCount )
  {
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( itemSlider )
    {
      itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0LL);
      if ( itemSlider )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 0, 0LL);
        itemSlider = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( itemSlider )
        {
          itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0LL);
          if ( itemSlider )
          {
            itemSlider = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)itemSlider,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
            if ( itemSlider )
            {
              ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))itemSlider->klass[1]._1.namespaze)(
                itemSlider,
                0LL,
                itemSlider->klass[1]._1.byval_arg.data);
              return;
            }
          }
        }
      }
    }
    goto LABEL_19;
  }
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_19;
  itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0LL);
  if ( !itemSlider )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0LL);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_19;
  if ( makeCount != 1 )
  {
    UISliderWithButton__normalMode((UISliderWithButton_o *)itemSlider, 0LL);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( itemSlider )
    {
      v5 = this->fields.makeCount;
      v6 = 1;
      goto LABEL_18;
    }
LABEL_19:
    sub_B0D97C(itemSlider);
  }
  UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0LL);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_19;
  v5 = this->fields.makeCount;
  v6 = 0;
LABEL_18:
  UISliderWithButton__init((UISliderWithButton_o *)itemSlider, v5, v6, 1, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickCancel(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4214A4F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214A4F = 1;
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
      sub_B0D97C(0LL);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventRecipeConfirmDialogComponent__Close(this, v4);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4214A4E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214A4E = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLb; // x22
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v68; // x0
  System_String_o *v69; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  const MethodInfo *v87; // x1
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  System_Action_o *v96; // x20
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4214A48 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, eventRecipeEntity);
    sub_B0D8A4(&AtlasManager_TypeInfo, v14);
    sub_B0D8A4(&bool___TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v16);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent_EndOpen__, v17);
    sub_B0D8A4(&int_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v20);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&StringLiteral_11063/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, v23);
    sub_B0D8A4(&StringLiteral_11061/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, v24);
    sub_B0D8A4(&StringLiteral_19440/*"icon_{0}"*/, v25);
    sub_B0D8A4(&StringLiteral_11062/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, v26);
    sub_B0D8A4(&StringLiteral_11060/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, v27);
    sub_B0D8A4(&StringLiteral_3276/*"COMMON_CONFIRM_EXECUTE"*/, v28);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v29);
    byte_4214A48 = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeEntity,
      (System_Int32_array **)eventRecipeEntity,
      (System_String_array **)eventRecipeGiftEntities,
      (System_String_array **)onDecide,
      (System_Boolean_array **)boxOverDlg,
      (System_Int32_array **)boxOverDlgCallBack,
      (System_Int32_array *)method,
      v7);
    this->fields.onDecide = onDecide;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.boxOverDlgCloseCallBack,
      (System_Int32_array **)boxOverDlgCallBack,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.presentBoxOverDlg,
      (System_Int32_array **)boxOverDlg,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeGiftList,
      (System_Int32_array **)eventRecipeGiftEntities,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    v55,
                                                                                                    v56);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v57,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v57;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.rewardItemObjList,
      (System_Int32_array **)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11062/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !*p_eventRecipeEntity )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               (System_String_o *)gameObject,
                                               (Il2CppObject *)(*p_eventRecipeEntity)->fields.name,
                                               0LL);
    if ( !titleLb )
      goto LABEL_24;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
    if ( !eventRecipeEntity )
      goto LABEL_24;
    eventId = this->fields.eventId;
    eventItemIcon = this->fields.eventItemIcon;
    iconId = eventRecipeEntity->fields.iconId;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
    v69 = System_String__Format((System_String_o *)StringLiteral_19440/*"icon_{0}"*/, v68, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_27921852(eventId, eventItemIcon, v69, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3276/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_24;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_24;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.exchangeOriginItemList,
      (System_Int32_array **)SortedEntityList,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_24;
    v80 = (struct System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, exchangeOriginItemList->max_length);
    this->fields.isShortage = v80;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.isShortage,
      (System_Int32_array **)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v87);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v88);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v89);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11061/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11060/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11063/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_24:
      sub_B0D97C(gameObject);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v93);
    this->fields.state = 1;
    v96 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v94, v95);
    System_Action___ctor(v96, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v96, 0, 0LL);
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
  CommonConsumeEntity_o *Name; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v14; // x8
  il2cpp_array_size_t v15; // w23
  UILabel_o *exchangeOriginLb; // x20
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v18; // x9
  CommonConsumeEntity_o *v19; // x9
  UISprite_o *v20; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v23; // x9
  UILabel_o *v24; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v26; // x9
  CommonConsumeEntity_o *v27; // x9
  int32_t num; // w9
  UILabel_o *v29; // x20
  int v30; // w8
  struct UILabel_array *v31; // x8
  struct System_Boolean_array *isShortage; // x9
  UIWidget_o *v33; // x20
  int v34; // s0
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v39; // x20
  struct CommonConsumeEntity_array *v40; // x8
  il2cpp_array_size_t v41; // w23
  UILabel_o *exchangeOriginLb2; // x20
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v44; // x9
  CommonConsumeEntity_o *v45; // x9
  UISprite_o *v46; // x20
  int32_t v47; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v49; // x9
  UILabel_o *v50; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v52; // x9
  CommonConsumeEntity_o *v53; // x9
  int32_t v54; // w9
  UILabel_o *v55; // x20
  int v56; // w8
  struct UILabel_array *v57; // x8
  struct System_Boolean_array *v58; // x9
  UIWidget_o *v59; // x20
  int v60; // s0
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v65; // x20
  struct CommonConsumeEntity_array *v66; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v71; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v75; // x8
  int32_t v76; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19
  __int64 v79; // x0

  if ( (byte_4214A4B & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_bool___, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_11057/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, v5);
    sub_B0D8A4(&StringLiteral_11064/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v6);
    sub_B0D8A4(&StringLiteral_11056/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v7);
    sub_B0D8A4(&StringLiteral_11059/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v8);
    sub_B0D8A4(&StringLiteral_11058/*"RECIPE_CONFIRM_DIALOG_KIND"*/, v9);
    byte_4214A4B = 1;
  }
  warningLb = this->fields.warningLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11064/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
  if ( !warningLb )
    goto LABEL_124;
  UILabel__set_text(warningLb, (System_String_o *)Name, 0LL);
  Name = (CommonConsumeEntity_o *)this->fields.warningLb;
  if ( !Name )
    goto LABEL_124;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Name, 0LL);
  Name = (CommonConsumeEntity_o *)System_Linq_Enumerable__Contains_bool_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.isShortage,
                                    1,
                                    (const MethodInfo_1B44FF0 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_124;
  v14 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v14 == 3 )
  {
    v15 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11059/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_124;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_124;
      if ( v15 >= exchangeOriginItemIcon->max_length )
        goto LABEL_125;
      v18 = this->fields.exchangeOriginItemList;
      if ( !v18 )
        goto LABEL_124;
      if ( v15 >= v18->max_length )
        goto LABEL_125;
      v19 = v18->m_Items[v15];
      if ( !v19 )
        goto LABEL_124;
      v20 = exchangeOriginItemIcon->m_Items[v15];
      objectId = v19->fields.objectId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v20, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_124;
      if ( v15 >= exchangeOriginItemNames->max_length )
        goto LABEL_125;
      v23 = this->fields.exchangeOriginItemList;
      if ( !v23 )
        goto LABEL_124;
      if ( v15 >= v23->max_length )
        goto LABEL_125;
      Name = v23->m_Items[v15];
      if ( !Name )
        goto LABEL_124;
      v24 = exchangeOriginItemNames->m_Items[v15];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
      if ( !v24 )
        goto LABEL_124;
      UILabel__set_text(v24, (System_String_o *)Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_124;
      if ( v15 >= exchangeOriginCounts->max_length )
        goto LABEL_125;
      v26 = this->fields.exchangeOriginItemList;
      if ( !v26 )
        goto LABEL_124;
      if ( v15 >= v26->max_length )
        goto LABEL_125;
      v27 = v26->m_Items[v15];
      if ( !v27 )
        goto LABEL_124;
      num = v27->fields.num;
      v29 = exchangeOriginCounts->m_Items[v15];
      v30 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v30 * num, 0LL);
      if ( !v29 )
        goto LABEL_124;
      UILabel__set_text(v29, (System_String_o *)Name, 0LL);
      v31 = this->fields.exchangeOriginCounts;
      if ( !v31 )
        goto LABEL_124;
      if ( v15 >= v31->max_length )
        goto LABEL_125;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_124;
      if ( v15 >= isShortage->max_length )
        goto LABEL_125;
      v33 = (UIWidget_o *)v31->m_Items[v15];
      if ( isShortage->m_Items[v15 + 4] )
      {
        *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_red(0LL);
        if ( !v33 )
          goto LABEL_124;
      }
      else
      {
        *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
        if ( !v33 )
          goto LABEL_124;
      }
      UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v34, 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_124;
      if ( v15 >= exchangeOriginCountKinds->max_length )
        goto LABEL_125;
      v39 = exchangeOriginCountKinds->m_Items[v15];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
      if ( !v39 )
        goto LABEL_124;
      UILabel__set_text(v39, (System_String_o *)Name, 0LL);
      v40 = this->fields.exchangeOriginItemList;
      if ( !v40 )
        goto LABEL_124;
      ++v15;
    }
    while ( (signed int)v15 < (signed int)v40->max_length );
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject;
    if ( !Name )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject2;
    if ( !Name )
      goto LABEL_124;
  }
  else
  {
    if ( (int)v14 >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11059/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v41 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_125;
        v44 = this->fields.exchangeOriginItemList;
        if ( !v44 )
          break;
        if ( v41 >= v44->max_length )
          goto LABEL_125;
        v45 = v44->m_Items[v41];
        if ( !v45 )
          break;
        v46 = exchangeOriginItemIcon2->m_Items[v41];
        v47 = v45->fields.objectId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v46, v47, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v41 >= exchangeOriginItemNames2->max_length )
          goto LABEL_125;
        v49 = this->fields.exchangeOriginItemList;
        if ( !v49 )
          break;
        if ( v41 >= v49->max_length )
          goto LABEL_125;
        Name = v49->m_Items[v41];
        if ( !Name )
          break;
        v50 = exchangeOriginItemNames2->m_Items[v41];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
        if ( !v50 )
          break;
        UILabel__set_text(v50, (System_String_o *)Name, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v41 >= exchangeOriginCounts2->max_length )
          goto LABEL_125;
        v52 = this->fields.exchangeOriginItemList;
        if ( !v52 )
          break;
        if ( v41 >= v52->max_length )
          goto LABEL_125;
        v53 = v52->m_Items[v41];
        if ( !v53 )
          break;
        v54 = v53->fields.num;
        v55 = exchangeOriginCounts2->m_Items[v41];
        v56 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v56 * v54, 0LL);
        if ( !v55 )
          break;
        UILabel__set_text(v55, (System_String_o *)Name, 0LL);
        v57 = this->fields.exchangeOriginCounts2;
        if ( !v57 )
          break;
        if ( v41 >= v57->max_length )
          goto LABEL_125;
        v58 = this->fields.isShortage;
        if ( !v58 )
          break;
        if ( v41 >= v58->max_length )
          goto LABEL_125;
        v59 = (UIWidget_o *)v57->m_Items[v41];
        if ( v58->m_Items[v41 + 4] )
        {
          *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_red(0LL);
          if ( !v59 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
          if ( !v59 )
            break;
        }
        UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v41 >= exchangeOriginCountKinds2->max_length )
        {
LABEL_125:
          v79 = sub_B0D9A8(Name);
          sub_B0D948(v79, 0LL);
        }
        v65 = exchangeOriginCountKinds2->m_Items[v41];
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
        if ( !v65 )
          break;
        UILabel__set_text(v65, (System_String_o *)Name, 0LL);
        v66 = this->fields.exchangeOriginItemList;
        if ( !v66 )
          break;
        if ( (signed int)++v41 >= (signed int)v66->max_length )
          goto LABEL_103;
      }
LABEL_124:
      sub_B0D97C(Name);
    }
LABEL_103:
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject2;
    if ( !Name )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject;
    if ( !Name )
      goto LABEL_124;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
  exchangeDestinationLb = this->fields.exchangeDestinationLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11056/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v71 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v71, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_124;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11057/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0LL);
  v75 = this->fields.eventRecipeEntity;
  if ( !v75 )
    goto LABEL_124;
  v76 = this->fields.makeCount;
  eventPointNum = v75->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v76 <= 1 )
    v76 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v76 * eventPointNum, 0LL);
  if ( !exchangeDestinationPointCount )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationPointCount, (System_String_o *)Name, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SetPossession(
        EventRecipeConfirmDialogComponent_o *this,
        ItemIconComponent_o *item,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v6; // x0

  v6 = EventRecipeConfirmDialogComponent__CalcPossessionNum(this, gift, (const MethodInfo *)gift);
  if ( !item )
    sub_B0D97C(v6);
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
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v13; // x8
  unsigned int v14; // w9
  EventRecipeGiftEntity_o *v15; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v17; // x22
  unsigned int v18; // w26
  GiftEntity_o *v19; // x23
  struct UnityEngine_GameObject_o *rewardItemIcon; // x24
  UnityEngine_GameObject_o *v21; // x24
  UnityEngine_Transform_o *transform; // x25
  int v23; // s0
  ItemIconComponent_o *v26; // x25
  int32_t v27; // w3
  const MethodInfo *v28; // x3
  EventRecipeGiftEntity_o *v29; // x8
  int32_t topIconId; // w20
  bool v31; // zf
  UnityEngine_GameObject_o *v32; // x20
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x21
  float v34; // s0
  bool v35; // w1
  __int64 v36; // x0
  UnityEngine_GameObject_o *v37; // [xsp+8h] [xbp-68h]
  EventRecipeGiftEntity_array *v38; // [xsp+10h] [xbp-60h]
  unsigned int v39; // [xsp+1Ch] [xbp-54h]
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v3 = eventRecipeGiftEntities;
  if ( (byte_4214A4C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIGrid___, eventRecipeGiftEntities);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4214A4C = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v3 )
    goto LABEL_47;
  v13 = *(_QWORD *)&v3->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0;
    v37 = Instance;
    v38 = v3;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
        goto LABEL_48;
      v15 = v3->m_Items[v14];
      if ( !v15 )
        goto LABEL_47;
      v39 = v14;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                               (GiftMaster_o *)Instance,
                                               v15->fields.giftId,
                                               0LL);
      if ( !Instance )
        goto LABEL_47;
      klass = (int)Instance[1].klass;
      v17 = Instance;
      if ( klass >= 1 )
        break;
LABEL_28:
      Instance = (UnityEngine_GameObject_o *)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)Instance,
                                               (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      v3 = v38;
      if ( !Instance )
        goto LABEL_47;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))Instance->klass[1]._1.castClass)(
        Instance,
        Instance->klass[1]._1.declaringType);
      v13 = *(_QWORD *)&v38->max_length;
      Instance = v37;
      v14 = v39 + 1;
      if ( (int)(v39 + 1) >= (int)v13 )
        goto LABEL_31;
    }
    v18 = 0;
    while ( v18 < klass )
    {
      v19 = (GiftEntity_o *)*((_QWORD *)&v17[1].monitor + (int)v18);
      rewardItemIcon = this->fields.rewardItemIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)rewardItemIcon,
                                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_47;
      v21 = Instance;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
      if ( !Instance )
        goto LABEL_47;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      transform = UnityEngine_GameObject__get_transform(v21, 0LL);
      *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
      if ( !Instance )
        goto LABEL_47;
      v40.fields.x = this->fields.iconScale;
      v40.fields.y = v40.fields.x;
      v40.fields.z = v40.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v40, 0LL);
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v21,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v19 )
        goto LABEL_47;
      v26 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_47;
      v27 = v19->fields.num <= 1 ? -1 : v19->fields.num;
      ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v19->fields.type, v19->fields.objectId, v27, 0, 0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v26, v19, v28);
      UnityEngine_GameObject__SetActive(v21, 1, 0LL);
      Instance = (UnityEngine_GameObject_o *)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      klass = (int)v17[1].klass;
      if ( (int)++v18 >= klass )
        goto LABEL_28;
    }
LABEL_48:
    v36 = sub_B0D9A8(Instance);
    sub_B0D948(v36, 0LL);
  }
LABEL_31:
  if ( !(_DWORD)v13 )
    goto LABEL_48;
  v29 = v3->m_Items[0];
  if ( !v29 )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_47;
  topIconId = v29->fields.topIconId;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v31 = topIconId == 1;
  v32 = Instance;
  if ( !v31 )
  {
    if ( Instance )
    {
      v35 = 0;
      goto LABEL_46;
    }
LABEL_47:
    sub_B0D97C(Instance);
  }
  rewardItemObjList = this->fields.rewardItemObjList;
  if ( !rewardItemObjList )
    goto LABEL_47;
  if ( !rewardItemObjList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  Instance = rewardItemObjList->fields._items->m_Items[0];
  if ( !Instance )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  LODWORD(v34) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v32, v34, 0LL);
  Instance = (UnityEngine_GameObject_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_47;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v35 = 1;
LABEL_46:
  UnityEngine_GameObject__SetActive(Instance, v35, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v5; // x9
  unsigned int v6; // w21
  struct UILabel_array *exchangeOriginCounts; // x10
  CommonConsumeEntity_o *v8; // x8
  UILabel_o *v9; // x20
  int32_t num; // w23
  int32_t makeCount; // w24
  unsigned int v12; // w21
  struct UILabel_array *exchangeOriginCounts2; // x10
  CommonConsumeEntity_o *v14; // x8
  UILabel_o *v15; // x20
  int32_t v16; // w23
  int32_t v17; // w24
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v19; // x21
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v21; // w9
  UILabel_o *exchangeDestinationPointCount; // x19
  __int64 v23; // x0

  if ( (byte_4214A55 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_4214A55 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_37;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  this->fields.makeCount = (int)itemSlider;
  if ( !exchangeOriginItemList )
    goto LABEL_37;
  v5 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v5 == 3 )
  {
    v6 = 0;
    while ( 1 )
    {
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_37;
      if ( v6 >= exchangeOriginCounts->max_length || v6 >= (unsigned int)v5 )
        goto LABEL_38;
      v8 = exchangeOriginItemList->m_Items[v6];
      if ( !v8 )
        goto LABEL_37;
      v9 = exchangeOriginCounts->m_Items[v6];
      num = v8->fields.num;
      makeCount = this->fields.makeCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(makeCount * num, 0LL);
      if ( !v9 )
        goto LABEL_37;
      UILabel__set_text(v9, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_37;
      LODWORD(v5) = exchangeOriginItemList->max_length;
      if ( (int)++v6 >= (int)v5 )
        goto LABEL_30;
    }
  }
  if ( (int)v5 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        break;
      if ( v12 >= exchangeOriginCounts2->max_length || v12 >= (unsigned int)v5 )
      {
LABEL_38:
        v23 = sub_B0D9A8(itemSlider);
        sub_B0D948(v23, 0LL);
      }
      v14 = exchangeOriginItemList->m_Items[v12];
      if ( !v14 )
        break;
      v15 = exchangeOriginCounts2->m_Items[v12];
      v16 = v14->fields.num;
      v17 = this->fields.makeCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v17 * v16, 0LL);
      if ( !v15 )
        break;
      UILabel__set_text(v15, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        break;
      LODWORD(v5) = exchangeOriginItemList->max_length;
      if ( (int)++v12 >= (int)v5 )
        goto LABEL_30;
    }
LABEL_37:
    sub_B0D97C(itemSlider);
  }
LABEL_30:
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v19 = this->fields.makeCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v19, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_37;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)itemSlider, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_37;
  v21 = this->fields.makeCount;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(
                                         v21 * eventRecipeEntity->fields.eventPointNum,
                                         0LL);
  if ( !exchangeDestinationPointCount )
    goto LABEL_37;
  UILabel__set_text(exchangeDestinationPointCount, (System_String_o *)itemSlider, 0LL);
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

  if ( (byte_4214A56 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214A56 = 1;
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
    sub_B0D97C(0LL);
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
  Il2CppObject *v3; // x19
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211BC1 & 1) == 0 )
  {
    sub_B0D8A4(&EventRecipeConfirmDialogComponent___c_TypeInfo, v1);
    byte_4211BC1 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventRecipeConfirmDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211BC2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__, v5);
    sub_B0D8A4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, v6);
    byte_4211BC2 = 1;
  }
  v7 = sub_B0D974(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_1(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211BC3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__, v5);
    sub_B0D8A4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, v6);
    byte_4211BC3 = 1;
  }
  v7 = sub_B0D974(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_4(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211BC4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__, v5);
    sub_B0D8A4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, v6);
    byte_4211BC4 = 1;
  }
  v7 = sub_B0D974(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
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
  SceneJumpInfo_o *v10; // x20
  AvalonSceneManager_o *v11; // x0
  int32_t v12; // w1
  Il2CppObject *v13; // x3
  __int64 v14; // x1
  __int64 v15; // x2

  if ( (byte_4211BC5 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v4);
    sub_B0D8A4(&StringLiteral_12746/*"ServantCombine"*/, v5);
    byte_4211BC5 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_16651652(v10, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B0D97C(v11);
    case 1:
      v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v11 )
      {
        v12 = 71;
        v13 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v11, v12, 1, v13, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v8, v9);
      SceneJumpInfo___ctor_16651556(v10, (System_String_o *)StringLiteral_12746/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        v11 = (AvalonSceneManager_o *)Instance;
        v13 = (Il2CppObject *)v10;
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
  SceneJumpInfo_o *v11; // x20
  __int64 v12; // x0
  int32_t v13; // w1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_4211BC6 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12750/*"ServantEquipList"*/, v4);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v5);
    sub_B0D8A4(&StringLiteral_12749/*"ServantEQCombine"*/, v6);
    byte_4211BC6 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v16, v17);
      SceneJumpInfo___ctor_16651652(v11, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_16651556(v11, (System_String_o *)StringLiteral_12750/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v13 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B0D97C(v12);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v9, v10);
      SceneJumpInfo___ctor_16651556(v11, (System_String_o *)StringLiteral_12749/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v13, 1, (Il2CppObject *)v11, 0LL);
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
  SceneJumpInfo_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_4211BC7 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v4);
    byte_4211BC7 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v8 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v6, v7);
    SceneJumpInfo___ctor_16651652(v8, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B0D97C(v9);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v8, 0LL);
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

  if ( this->fields.isOpenPresentBox )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (EventRecipeConfirmDialogComponent__Close(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL)
      || (_4__this = (EventRecipeConfirmDialogComponent_o *)v4->fields.boxOverDlgCloseCallBack) == 0LL )
    {
      sub_B0D97C(_4__this);
    }
    System_Action__Invoke((System_Action_o *)_4__this, 0LL);
  }
}