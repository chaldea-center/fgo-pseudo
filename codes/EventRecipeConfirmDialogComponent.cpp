void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_435264C & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_435264C = 1;
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
  UserGameEntity_o *SelfUserGame; // x20
  int maskSprite; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_4352642 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352642 = 1;
  }
  if ( !gift )
    goto LABEL_31;
  if ( Gift__IsServant_27751796(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
        return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)this, gift->fields.objectId, 0, 0LL);
    }
LABEL_31:
    sub_B7076C(this, gift);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
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


void __fastcall EventRecipeConfirmDialogComponent__CallBackPresentBoxOverDialog(
        EventRecipeConfirmDialogComponent_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v15; // x20

  if ( (byte_4352648 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__);
    sub_B70694(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
    byte_4352648 = 1;
  }
  v5 = sub_B70764(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  EventRecipeConfirmDialogComponent___c__DisplayClass63_0___ctor(
    (EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *)v5,
    0LL);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isOpenPresentBox,
        *(_QWORD *)(v5 + 24) = this,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_B7076C(v6, v7);
  }
  PresentBoxOverDialog__Close_25460164(presentBoxOverDlg, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__CallOnDecide(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  EventRecipeConfirmDialogComponent_o *v4; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x2
  System_String_o *v14; // x20
  BalanceConfig_c *v15; // x8
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v19; // x21
  PresentBoxOverDialog_ClickDelegate_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  BattleServantConfConponent_o *p_onDecide; // x0
  System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4352649 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int__Invoke__);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11182/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4352649 = 1;
  }
  if ( v4->fields.onDecide )
  {
    v5 = EventRecipeConfirmDialogComponent__CheckServant(this, *(const MethodInfo **)&result);
    if ( v5 )
    {
      if ( EventRecipeConfirmDialogComponent__CheckOverCapacity(
             (EventRecipeConfirmDialogComponent_o *)v5,
             v4->fields.eventRecipeGiftList,
             v6) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11182/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
        v15 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v15 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v15->static_fields->PresentBoxMax;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax, v13);
        v17 = System_String__Format(v14, v16, 0LL);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v19 = v17;
        v20 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B70764(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v19, v20, 0, 0LL);
          goto LABEL_14;
        }
      }
      else
      {
        p_onDecide = (BattleServantConfConponent_o *)&v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_B70630(p_onDecide, 0LL, v7, v8, v9, v10, v11, v12);
        if ( onDecide )
        {
          System_Action_int___Invoke(onDecide, result, (const MethodInfo_264ABCC *)Method_System_Action_int__Invoke__);
          return;
        }
      }
      sub_B7076C(v21, v22);
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
  UserPresentBoxMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v6; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v9; // x21
  signed int max_length; // w8
  unsigned int v11; // w24
  EventRecipeGiftEntity_o *v12; // x8
  __int64 v13; // x8
  int64_t v14; // x23
  __int64 v15; // x27
  __int64 v16; // x20
  int32_t v17; // w19
  BalanceConfig_c *v18; // x8
  __int64 v20; // x0
  UserPresentBoxEntity_array *v21; // [xsp+8h] [xbp-58h]

  if ( (byte_4352646 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Count_int___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352646 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  VaildList = UserPresentBoxMaster__getVaildList(Master_WarQuestSelectionMaster, UserId, 0LL);
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_33;
  v21 = VaildList;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)UserId,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_33;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_34;
      v12 = giftEnt->m_Items[v11];
      if ( !v12 )
        goto LABEL_33;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_33;
      UserId = (int64_t)GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v12->fields.giftId, 0LL);
      if ( !UserId )
        goto LABEL_33;
      v13 = *(_QWORD *)(UserId + 24);
      v14 = UserId;
      if ( v13 )
      {
        if ( (int)v13 >= 1 )
          break;
      }
LABEL_27:
      max_length = giftEnt->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_28;
    }
    v15 = 0LL;
    while ( (unsigned int)v15 < (unsigned int)v13 )
    {
      v16 = *(_QWORD *)(v14 + 32 + 8 * v15);
      if ( !v16 || !v9 )
        goto LABEL_33;
      UserId = System_Collections_Generic_List_int___Contains(
                 v9,
                 *(_DWORD *)(v16 + 20),
                 (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (UserId & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v9,
          *(_DWORD *)(v16 + 20),
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v13) = *(_DWORD *)(v14 + 24);
      if ( (int)++v15 >= (int)v13 )
        goto LABEL_27;
    }
LABEL_34:
    v20 = sub_B70798(UserId);
    sub_B70738(v20, 0LL);
  }
LABEL_28:
  if ( !v21 )
LABEL_33:
    sub_B7076C(UserId, v6);
  v17 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_1CB8220 *)Method_System_Linq_Enumerable_Count_int___);
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v17 + v21->max_length) > v18->static_fields->PresentBoxMax;
}


bool __fastcall EventRecipeConfirmDialogComponent__CheckServant(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x19
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  CommonUI_o *v7; // x19
  int32_t v8; // w20
  int32_t svtKeep; // w21
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__62_0; // x22
  Il2CppObject *v12; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *v20; // x0
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  CommonUI_o *v24; // x19
  int32_t v25; // w20
  int32_t svtEquipKeep; // w21
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v27; // x8
  Il2CppObject *v28; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t Count; // w19
  CommonUI_o *v37; // x20
  BalanceConfig_c *v38; // x8
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v39; // x8
  Il2CppObject *v40; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352647 & 1) == 0 )
  {
    sub_B70694(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__);
    sub_B70694(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4352647 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v7 = (CommonUI_o *)Instance;
      v8 = servantEquipSum[1];
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
        v12 = (Il2CppObject *)static_fields->__9;
        _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__62_0,
          v12,
          Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
          0LL);
        v13 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
        v13->__9__62_0 = _9__62_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v13->__9__62_0,
          (System_Int32_array **)_9__62_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      if ( v7 )
      {
        v20 = v7;
        v21 = v8;
        v22 = svtKeep;
        v23 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B7076C(Instance, v4);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v5, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v24 = (CommonUI_o *)Instance;
    v25 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v27 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v27->__9__62_1;
    if ( !_9__62_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v27 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)v27->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v28,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v29 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v29->__9__62_1 = _9__62_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v29->__9__62_1,
        (System_Int32_array **)_9__62_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    if ( !v24 )
      goto LABEL_53;
    v23 = 1;
    v20 = v24;
    v21 = v25;
  }
  else
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(MasterData_WarQuestSelectionMaster, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v37 = (CommonUI_o *)Instance;
    if ( !byte_434DEF6 )
    {
      sub_B70694(&BalanceConfig_TypeInfo);
      byte_434DEF6 = 1;
    }
    v38 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v38 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v38->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v39 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v39->__9__62_4;
    if ( !_9__62_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v39 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)v39->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v40,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v41 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v41->__9__62_4 = _9__62_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v41->__9__62_4,
        (System_Int32_array **)_9__62_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    if ( !v37 )
      goto LABEL_53;
    v23 = 2;
    v20 = v37;
    v21 = Count;
  }
  v22 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v20, v21, v22, v23, 1, _9__62_0, 3, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
  return 0;
}


void __fastcall EventRecipeConfirmDialogComponent__Close(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v5; // x20
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352645 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352645 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardItemObjList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v6.fields.current;
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
      UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
  int64_t Instance; // x0
  __int64 v4; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int32_t max; // w21
  UserItemMaster_o *v7; // x20
  __int64 v8; // x22
  struct CommonConsumeEntity_array *v9; // x8
  CommonConsumeEntity_o *v10; // x8
  struct CommonConsumeEntity_array *v11; // x9
  CommonConsumeEntity_o *v12; // x9
  struct CommonConsumeEntity_array *v13; // x8
  CommonConsumeEntity_o *v14; // x9
  struct System_Boolean_array *isShortage; // x8
  bool v16; // w9
  __int64 v18; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435263E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435263E = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_30:
    sub_B7076C(Instance, v4);
  }
  max = this->fields.max;
  v7 = (UserItemMaster_o *)Instance;
  v8 = 0LL;
  while ( (int)v8 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v9 = this->fields.exchangeOriginItemList;
    if ( !v9 )
      goto LABEL_30;
    if ( (unsigned int)v8 >= v9->max_length )
      goto LABEL_32;
    v10 = v9->m_Items[v8];
    if ( !v10 || !v7 )
      goto LABEL_30;
    Instance = UserItemMaster__TryGetEntity(v7, &entity, Instance, v10->fields.objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      v11 = this->fields.exchangeOriginItemList;
      if ( !v11 )
        goto LABEL_30;
      if ( (unsigned int)v8 >= v11->max_length )
        goto LABEL_32;
      v12 = v11->m_Items[v8];
      if ( !v12 )
        goto LABEL_30;
      Instance = UnityEngine_Mathf__Min_41127788(max, entity->fields.num / v12->fields.num, 0LL);
      v13 = this->fields.exchangeOriginItemList;
      if ( !v13 )
        goto LABEL_30;
      if ( (unsigned int)v8 >= v13->max_length )
        goto LABEL_32;
      v14 = v13->m_Items[v8];
      if ( !v14 )
        goto LABEL_30;
      if ( !entity )
        goto LABEL_30;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v8 >= isShortage->max_length )
        goto LABEL_32;
      max = Instance;
      v16 = v14->fields.num > entity->fields.num;
    }
    else
    {
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v8 >= isShortage->max_length )
      {
LABEL_32:
        v18 = sub_B70798(Instance);
        sub_B70738(v18, 0LL);
      }
      max = 0;
      v16 = 1;
    }
    isShortage->m_Items[v8 + 4] = v16;
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    ++v8;
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
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.eventRecipeEntity, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_435263F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_435263F = 1;
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
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B7076C(itemSlider, method);
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
  __int64 v3; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4352644 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352644 = 1;
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
      sub_B7076C(0LL, v3);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventRecipeConfirmDialogComponent__Close(this, v5);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4352643 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352643 = 1;
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
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x25
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
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
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x1
  UILabel_o *titleLb; // x22
  __int64 v49; // x2
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v52; // x0
  System_String_o *v53; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v77; // x2
  System_Action_o *v78; // x20
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_435263D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&bool___TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent_EndOpen__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_11190/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/);
    sub_B70694(&StringLiteral_11188/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/);
    sub_B70694(&StringLiteral_19682/*"icon_{0}"*/);
    sub_B70694(&StringLiteral_11189/*"RECIPE_CONFIRM_DIALOG_TITLE"*/);
    sub_B70694(&StringLiteral_11187/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_3338/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_B70694(&StringLiteral_3335/*"COMMON_CONFIRM_CANCEL"*/);
    byte_435263D = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeEntity,
      (System_Int32_array **)eventRecipeEntity,
      (System_String_array **)eventRecipeGiftEntities,
      (System_String_array **)onDecide,
      (System_Boolean_array **)boxOverDlg,
      (System_Int32_array **)boxOverDlgCallBack,
      (System_Int32_array *)method,
      v7);
    this->fields.onDecide = onDecide;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.boxOverDlgCloseCallBack,
      (System_Int32_array **)boxOverDlgCallBack,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.presentBoxOverDlg,
      (System_Int32_array **)boxOverDlg,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeGiftList,
      (System_Int32_array **)eventRecipeGiftEntities,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v39,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v39;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.rewardItemObjList,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11189/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v49);
    v53 = System_String__Format((System_String_o *)StringLiteral_19682/*"icon_{0}"*/, v52, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31552376(eventId, eventItemIcon, v53, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3338/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_24;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_24;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.exchangeOriginItemList,
      (System_Int32_array **)SortedEntityList,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_24;
    v64 = (struct System_Boolean_array *)sub_B706AC(bool___TypeInfo, exchangeOriginItemList->max_length);
    this->fields.isShortage = v64;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.isShortage,
      (System_Int32_array **)v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v71);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v72);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v73);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11188/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11187/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11190/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_24:
      sub_B7076C(gameObject, v47);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v77);
    this->fields.state = 1;
    v78 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v78, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
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
  UILabel_o *warningLb; // x20
  CommonConsumeEntity_o *Name; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v8; // x8
  il2cpp_array_size_t v9; // w23
  UILabel_o *exchangeOriginLb; // x20
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v12; // x9
  CommonConsumeEntity_o *v13; // x9
  UISprite_o *v14; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v17; // x9
  UILabel_o *v18; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v20; // x9
  CommonConsumeEntity_o *v21; // x9
  int32_t num; // w9
  UILabel_o *v23; // x20
  int v24; // w8
  struct UILabel_array *v25; // x8
  struct System_Boolean_array *isShortage; // x9
  UIWidget_o *v27; // x20
  int v28; // s0
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v33; // x20
  struct CommonConsumeEntity_array *v34; // x8
  il2cpp_array_size_t v35; // w23
  UILabel_o *exchangeOriginLb2; // x20
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v38; // x9
  CommonConsumeEntity_o *v39; // x9
  UISprite_o *v40; // x20
  int32_t v41; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v43; // x9
  UILabel_o *v44; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v46; // x9
  CommonConsumeEntity_o *v47; // x9
  int32_t v48; // w9
  UILabel_o *v49; // x20
  int v50; // w8
  struct UILabel_array *v51; // x8
  struct System_Boolean_array *v52; // x9
  UIWidget_o *v53; // x20
  int v54; // s0
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v59; // x20
  struct CommonConsumeEntity_array *v60; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v65; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v69; // x8
  int32_t v70; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19
  __int64 v73; // x0

  if ( (byte_4352640 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_bool___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11184/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/);
    sub_B70694(&StringLiteral_11191/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_B70694(&StringLiteral_11183/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    sub_B70694(&StringLiteral_11186/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_B70694(&StringLiteral_11185/*"RECIPE_CONFIRM_DIALOG_KIND"*/);
    byte_4352640 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11191/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
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
                                    (const MethodInfo_1CB55D8 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_124;
  v8 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v8 == 3 )
  {
    v9 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11186/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_124;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_124;
      if ( v9 >= exchangeOriginItemIcon->max_length )
        goto LABEL_125;
      v12 = this->fields.exchangeOriginItemList;
      if ( !v12 )
        goto LABEL_124;
      if ( v9 >= v12->max_length )
        goto LABEL_125;
      v13 = v12->m_Items[v9];
      if ( !v13 )
        goto LABEL_124;
      v14 = exchangeOriginItemIcon->m_Items[v9];
      objectId = v13->fields.objectId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v14, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_124;
      if ( v9 >= exchangeOriginItemNames->max_length )
        goto LABEL_125;
      v17 = this->fields.exchangeOriginItemList;
      if ( !v17 )
        goto LABEL_124;
      if ( v9 >= v17->max_length )
        goto LABEL_125;
      Name = v17->m_Items[v9];
      if ( !Name )
        goto LABEL_124;
      v18 = exchangeOriginItemNames->m_Items[v9];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
      if ( !v18 )
        goto LABEL_124;
      UILabel__set_text(v18, (System_String_o *)Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_124;
      if ( v9 >= exchangeOriginCounts->max_length )
        goto LABEL_125;
      v20 = this->fields.exchangeOriginItemList;
      if ( !v20 )
        goto LABEL_124;
      if ( v9 >= v20->max_length )
        goto LABEL_125;
      v21 = v20->m_Items[v9];
      if ( !v21 )
        goto LABEL_124;
      num = v21->fields.num;
      v23 = exchangeOriginCounts->m_Items[v9];
      v24 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v24 * num, 0LL);
      if ( !v23 )
        goto LABEL_124;
      UILabel__set_text(v23, (System_String_o *)Name, 0LL);
      v25 = this->fields.exchangeOriginCounts;
      if ( !v25 )
        goto LABEL_124;
      if ( v9 >= v25->max_length )
        goto LABEL_125;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_124;
      if ( v9 >= isShortage->max_length )
        goto LABEL_125;
      v27 = (UIWidget_o *)v25->m_Items[v9];
      if ( isShortage->m_Items[v9 + 4] )
      {
        *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_red(0LL);
        if ( !v27 )
          goto LABEL_124;
      }
      else
      {
        *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
        if ( !v27 )
          goto LABEL_124;
      }
      UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v28, 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_124;
      if ( v9 >= exchangeOriginCountKinds->max_length )
        goto LABEL_125;
      v33 = exchangeOriginCountKinds->m_Items[v9];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11185/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
      if ( !v33 )
        goto LABEL_124;
      UILabel__set_text(v33, (System_String_o *)Name, 0LL);
      v34 = this->fields.exchangeOriginItemList;
      if ( !v34 )
        goto LABEL_124;
      ++v9;
    }
    while ( (signed int)v9 < (signed int)v34->max_length );
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
    if ( (int)v8 >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11186/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v35 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_125;
        v38 = this->fields.exchangeOriginItemList;
        if ( !v38 )
          break;
        if ( v35 >= v38->max_length )
          goto LABEL_125;
        v39 = v38->m_Items[v35];
        if ( !v39 )
          break;
        v40 = exchangeOriginItemIcon2->m_Items[v35];
        v41 = v39->fields.objectId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v40, v41, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v35 >= exchangeOriginItemNames2->max_length )
          goto LABEL_125;
        v43 = this->fields.exchangeOriginItemList;
        if ( !v43 )
          break;
        if ( v35 >= v43->max_length )
          goto LABEL_125;
        Name = v43->m_Items[v35];
        if ( !Name )
          break;
        v44 = exchangeOriginItemNames2->m_Items[v35];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
        if ( !v44 )
          break;
        UILabel__set_text(v44, (System_String_o *)Name, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v35 >= exchangeOriginCounts2->max_length )
          goto LABEL_125;
        v46 = this->fields.exchangeOriginItemList;
        if ( !v46 )
          break;
        if ( v35 >= v46->max_length )
          goto LABEL_125;
        v47 = v46->m_Items[v35];
        if ( !v47 )
          break;
        v48 = v47->fields.num;
        v49 = exchangeOriginCounts2->m_Items[v35];
        v50 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v50 * v48, 0LL);
        if ( !v49 )
          break;
        UILabel__set_text(v49, (System_String_o *)Name, 0LL);
        v51 = this->fields.exchangeOriginCounts2;
        if ( !v51 )
          break;
        if ( v35 >= v51->max_length )
          goto LABEL_125;
        v52 = this->fields.isShortage;
        if ( !v52 )
          break;
        if ( v35 >= v52->max_length )
          goto LABEL_125;
        v53 = (UIWidget_o *)v51->m_Items[v35];
        if ( v52->m_Items[v35 + 4] )
        {
          *(UnityEngine_Color_o *)&v54 = UnityEngine_Color__get_red(0LL);
          if ( !v53 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v54 = UnityEngine_Color__get_white(0LL);
          if ( !v53 )
            break;
        }
        UIWidget__set_color(v53, *(UnityEngine_Color_o *)&v54, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v35 >= exchangeOriginCountKinds2->max_length )
        {
LABEL_125:
          v73 = sub_B70798(Name);
          sub_B70738(v73, 0LL);
        }
        v59 = exchangeOriginCountKinds2->m_Items[v35];
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11185/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
        if ( !v59 )
          break;
        UILabel__set_text(v59, (System_String_o *)Name, 0LL);
        v60 = this->fields.exchangeOriginItemList;
        if ( !v60 )
          break;
        if ( (signed int)++v35 >= (signed int)v60->max_length )
          goto LABEL_103;
      }
LABEL_124:
      sub_B7076C(Name, v5);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11183/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v65 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v65, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11185/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_124;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11184/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0LL);
  v69 = this->fields.eventRecipeEntity;
  if ( !v69 )
    goto LABEL_124;
  v70 = this->fields.makeCount;
  eventPointNum = v69->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v70 <= 1 )
    v70 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v70 * eventPointNum, 0LL);
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
  __int64 v7; // x1

  v6 = EventRecipeConfirmDialogComponent__CalcPossessionNum(this, gift, (const MethodInfo *)gift);
  if ( !item )
    sub_B7076C(v6, v7);
  ItemIconComponent__SetPossessionOneLabel(item, v6, 0LL);
  ItemIconComponent__SetPossessionRoot(item, this->fields.possesionRootMovePositionY, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__SetRewardList(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  unsigned int v8; // w9
  EventRecipeGiftEntity_o *v9; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v11; // x22
  unsigned int v12; // w26
  GiftEntity_o *v13; // x23
  struct UnityEngine_GameObject_o *rewardItemIcon; // x24
  UnityEngine_GameObject_o *v15; // x24
  UnityEngine_Transform_o *transform; // x25
  int v17; // s0
  ItemIconComponent_o *v20; // x25
  int32_t v21; // w3
  const MethodInfo *v22; // x3
  EventRecipeGiftEntity_o *v23; // x8
  int32_t topIconId; // w20
  bool v25; // zf
  UnityEngine_GameObject_o *v26; // x20
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x21
  float v28; // s0
  bool v29; // w1
  __int64 v30; // x0
  UnityEngine_GameObject_o *v31; // [xsp+8h] [xbp-68h]
  EventRecipeGiftEntity_array *v32; // [xsp+10h] [xbp-60h]
  unsigned int v33; // [xsp+1Ch] [xbp-54h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352641 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352641 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventRecipeGiftEntities )
    goto LABEL_47;
  v7 = *(_QWORD *)&eventRecipeGiftEntities->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0;
    v31 = Instance;
    v32 = eventRecipeGiftEntities;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        goto LABEL_48;
      v9 = eventRecipeGiftEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_47;
      v33 = v8;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                               (GiftMaster_o *)Instance,
                                               v9->fields.giftId,
                                               0LL);
      if ( !Instance )
        goto LABEL_47;
      klass = (int)Instance[1].klass;
      v11 = Instance;
      if ( klass >= 1 )
        break;
LABEL_28:
      Instance = (UnityEngine_GameObject_o *)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)Instance,
                                               (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      eventRecipeGiftEntities = v32;
      if ( !Instance )
        goto LABEL_47;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))Instance->klass[1]._1.castClass)(
        Instance,
        Instance->klass[1]._1.declaringType);
      v7 = *(_QWORD *)&v32->max_length;
      Instance = v31;
      v8 = v33 + 1;
      if ( (int)(v33 + 1) >= (int)v7 )
        goto LABEL_31;
    }
    v12 = 0;
    while ( v12 < klass )
    {
      v13 = (GiftEntity_o *)*((_QWORD *)&v11[1].monitor + (int)v12);
      rewardItemIcon = this->fields.rewardItemIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)rewardItemIcon,
                                               (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_47;
      v15 = Instance;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
      if ( !Instance )
        goto LABEL_47;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      transform = UnityEngine_GameObject__get_transform(v15, 0LL);
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
      if ( !Instance )
        goto LABEL_47;
      v34.fields.x = this->fields.iconScale;
      v34.fields.y = v34.fields.x;
      v34.fields.z = v34.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v34, 0LL);
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v15,
                                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v13 )
        goto LABEL_47;
      v20 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_47;
      v21 = v13->fields.num <= 1 ? -1 : v13->fields.num;
      ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v13->fields.type, v13->fields.objectId, v21, 0, 0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v20, v13, v22);
      UnityEngine_GameObject__SetActive(v15, 1, 0LL);
      Instance = (UnityEngine_GameObject_o *)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
      klass = (int)v11[1].klass;
      if ( (int)++v12 >= klass )
        goto LABEL_28;
    }
LABEL_48:
    v30 = sub_B70798(Instance);
    sub_B70738(v30, 0LL);
  }
LABEL_31:
  if ( !(_DWORD)v7 )
    goto LABEL_48;
  v23 = eventRecipeGiftEntities->m_Items[0];
  if ( !v23 )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_47;
  topIconId = v23->fields.topIconId;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v25 = topIconId == 1;
  v26 = Instance;
  if ( !v25 )
  {
    if ( Instance )
    {
      v29 = 0;
      goto LABEL_46;
    }
LABEL_47:
    sub_B7076C(Instance, v6);
  }
  rewardItemObjList = this->fields.rewardItemObjList;
  if ( !rewardItemObjList )
    goto LABEL_47;
  if ( !rewardItemObjList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  Instance = rewardItemObjList->fields._items->m_Items[0];
  if ( !Instance )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  LODWORD(v28) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v26, v28, 0LL);
  Instance = (UnityEngine_GameObject_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_47;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v29 = 1;
LABEL_46:
  UnityEngine_GameObject__SetActive(Instance, v29, 0LL);
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

  if ( (byte_435264A & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_435264A = 1;
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
        v23 = sub_B70798(itemSlider);
        sub_B70738(v23, 0LL);
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
    sub_B7076C(itemSlider, method);
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
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_435264B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435264B = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B7076C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
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
  Il2CppObject *v1; // x19
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434EA2E & 1) == 0 )
  {
    sub_B70694(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_434EA2E = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall EventRecipeConfirmDialogComponent___c___ctor(
        EventRecipeConfirmDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_0(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_434EA2F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__);
    sub_B70694(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
    byte_434EA2F = 1;
  }
  v4 = sub_B70764(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_1(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_434EA30 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__);
    sub_B70694(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
    byte_434EA30 = 1;
  }
  v4 = sub_B70764(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_4(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_434EA31 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__);
    sub_B70694(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
    byte_434EA31 = 1;
  }
  v4 = sub_B70764(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
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
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  AvalonSceneManager_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_434EA32 & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    sub_B70694(&StringLiteral_12879/*"ServantCombine"*/);
    byte_434EA32 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523760(v5, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B7076C(v6, v7);
    case 1:
      v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v6, v8, 1, v9, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523664(v5, (System_String_o *)StringLiteral_12879/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        v6 = (AvalonSceneManager_o *)Instance;
        v9 = (Il2CppObject *)v5;
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
  int32_t result; // w8
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_434EA33 & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_12883/*"ServantEquipList"*/);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    sub_B70694(&StringLiteral_12882/*"ServantEQCombine"*/);
    byte_434EA33 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523760(v5, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523664(v5, (System_String_o *)StringLiteral_12883/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B7076C(v6, v7);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523664(v5, (System_String_o *)StringLiteral_12882/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v8, 1, (Il2CppObject *)v5, 0LL);
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
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434EA34 & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    byte_434EA34 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17523760(v4, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B7076C(v5, v6);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v4, 0LL);
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
      sub_B7076C(_4__this, method);
    }
    System_Action__Invoke((System_Action_o *)_4__this, 0LL);
  }
}