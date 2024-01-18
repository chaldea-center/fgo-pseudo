void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418879B & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418879B = 1;
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

  if ( (byte_4188791 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, gift);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B2C35C(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v8);
    byte_4188791 = 1;
  }
  if ( !gift )
    goto LABEL_31;
  if ( Gift__IsServant_27324084(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
        return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)this, gift->fields.objectId, 0, 0LL);
    }
LABEL_31:
    sub_B2C434(this, gift);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v17; // x20

  if ( (byte_4188797 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isOpenPresentBox);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__, v5);
    sub_B2C35C(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, v6);
    byte_4188797 = 1;
  }
  v7 = sub_B2C42C(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  EventRecipeConfirmDialogComponent___c__DisplayClass63_0___ctor(
    (EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *)v7,
    0LL);
  if ( !v7
    || (*(_BYTE *)(v7 + 16) = isOpenPresentBox,
        *(_QWORD *)(v7 + 24) = this,
        sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_B2C434(v8, v9);
  }
  PresentBoxOverDialog__Close_25190412(presentBoxOverDlg, v17, 0LL);
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
  PresentBoxOverDialog_ClickDelegate_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  BattleServantConfConponent_o *p_onDecide; // x0
  System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4188798 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    sub_B2C35C(&BalanceConfig_TypeInfo, v5);
    sub_B2C35C(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v6);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_11028/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, v10);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_4188798 = 1;
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
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11028/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
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
        v26 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B2C42C(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v26,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v25, v26, 0, 0LL);
          goto LABEL_14;
        }
      }
      else
      {
        p_onDecide = (BattleServantConfConponent_o *)&v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_B2C2F8(p_onDecide, 0LL, v14, v15, v16, v17, v18, v19);
        if ( onDecide )
        {
          System_Action_int___Invoke(onDecide, result, (const MethodInfo_24BA55C *)Method_System_Action_int__Invoke__);
          return;
        }
      }
      sub_B2C434(v27, v28);
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
  __int64 v16; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v19; // x21
  signed int max_length; // w8
  unsigned int v21; // w24
  EventRecipeGiftEntity_o *v22; // x8
  __int64 v23; // x8
  int64_t v24; // x23
  __int64 v25; // x27
  __int64 v26; // x20
  int32_t v27; // w19
  BalanceConfig_c *v28; // x8
  __int64 v30; // x0
  UserPresentBoxEntity_array *v31; // [xsp+8h] [xbp-58h]

  if ( (byte_4188795 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, giftEnt);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4188795 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  VaildList = UserPresentBoxMaster__getVaildList(Master_WarQuestSelectionMaster, UserId, 0LL);
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_33;
  v31 = VaildList;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)UserId,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_33;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        goto LABEL_34;
      v22 = giftEnt->m_Items[v21];
      if ( !v22 )
        goto LABEL_33;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_33;
      UserId = (int64_t)GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v22->fields.giftId, 0LL);
      if ( !UserId )
        goto LABEL_33;
      v23 = *(_QWORD *)(UserId + 24);
      v24 = UserId;
      if ( v23 )
      {
        if ( (int)v23 >= 1 )
          break;
      }
LABEL_27:
      max_length = giftEnt->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_28;
    }
    v25 = 0LL;
    while ( (unsigned int)v25 < (unsigned int)v23 )
    {
      v26 = *(_QWORD *)(v24 + 32 + 8 * v25);
      if ( !v26 || !v19 )
        goto LABEL_33;
      UserId = System_Collections_Generic_List_int___Contains(
                 v19,
                 *(_DWORD *)(v26 + 20),
                 (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (UserId & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v19,
          *(_DWORD *)(v26 + 20),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v23) = *(_DWORD *)(v24 + 24);
      if ( (int)++v25 >= (int)v23 )
        goto LABEL_27;
    }
LABEL_34:
    v30 = sub_B2C460(UserId);
    sub_B2C400(v30, 0LL);
  }
LABEL_28:
  if ( !v31 )
LABEL_33:
    sub_B2C434(UserId, v16);
  v27 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  v28 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v27 + v31->max_length) > v28->static_fields->PresentBoxMax;
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
  __int64 v13; // x1
  UserServantMaster_o *v14; // x19
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  CommonUI_o *v16; // x19
  int32_t v17; // w20
  int32_t svtKeep; // w21
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__62_0; // x22
  Il2CppObject *v21; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CommonUI_o *v29; // x0
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  CommonUI_o *v33; // x19
  int32_t v34; // w20
  int32_t svtEquipKeep; // w21
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v36; // x8
  Il2CppObject *v37; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t Count; // w19
  CommonUI_o *v46; // x20
  BalanceConfig_c *v47; // x8
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v48; // x8
  Il2CppObject *v49; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188796 & 1) == 0 )
  {
    sub_B2C35C(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__, v7);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__, v8);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__, v9);
    sub_B2C35C(&EventRecipeConfirmDialogComponent___c_TypeInfo, v10);
    byte_4188796 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v14 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v16 = (CommonUI_o *)Instance;
      v17 = servantEquipSum[1];
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
        v21 = (Il2CppObject *)static_fields->__9;
        _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__62_0,
          v21,
          Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
          0LL);
        v22 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
        v22->__9__62_0 = _9__62_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v22->__9__62_0,
          (System_Int32_array **)_9__62_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      if ( v16 )
      {
        v29 = v16;
        v30 = v17;
        v31 = svtKeep;
        v32 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B2C434(Instance, v13);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v33 = (CommonUI_o *)Instance;
    v34 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v36 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v36->__9__62_1;
    if ( !_9__62_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v36 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)v36->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v37,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v38 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v38->__9__62_1 = _9__62_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v38->__9__62_1,
        (System_Int32_array **)_9__62_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    if ( !v33 )
      goto LABEL_53;
    v32 = 1;
    v29 = v33;
    v30 = v34;
  }
  else
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(MasterData_WarQuestSelectionMaster, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v46 = (CommonUI_o *)Instance;
    if ( !byte_4183CB7 )
    {
      sub_B2C35C(&BalanceConfig_TypeInfo, v13);
      byte_4183CB7 = 1;
    }
    v47 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v47->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v48 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v48->__9__62_4;
    if ( !_9__62_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v48 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)v48->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v49,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v50 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v50->__9__62_4 = _9__62_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v50->__9__62_4,
        (System_Int32_array **)_9__62_0,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    if ( !v46 )
      goto LABEL_53;
    v32 = 2;
    v29 = v46;
    v30 = Count;
  }
  v31 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v29, v30, v31, v32, 1, _9__62_0, 3, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
  System_Action_o *v11; // x20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188794 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4188794 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardItemObjList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
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
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  __int64 v6; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int32_t max; // w21
  UserItemMaster_o *v9; // x20
  __int64 v10; // x22
  struct CommonConsumeEntity_array *v11; // x8
  CommonConsumeEntity_o *v12; // x8
  struct CommonConsumeEntity_array *v13; // x9
  CommonConsumeEntity_o *v14; // x9
  struct CommonConsumeEntity_array *v15; // x8
  CommonConsumeEntity_o *v16; // x9
  struct System_Boolean_array *isShortage; // x8
  bool v18; // w9
  __int64 v20; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418878D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418878D = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_30:
    sub_B2C434(Instance, v6);
  }
  max = this->fields.max;
  v9 = (UserItemMaster_o *)Instance;
  v10 = 0LL;
  while ( (int)v10 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v11 = this->fields.exchangeOriginItemList;
    if ( !v11 )
      goto LABEL_30;
    if ( (unsigned int)v10 >= v11->max_length )
      goto LABEL_32;
    v12 = v11->m_Items[v10];
    if ( !v12 || !v9 )
      goto LABEL_30;
    Instance = UserItemMaster__TryGetEntity(v9, &entity, Instance, v12->fields.objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      v13 = this->fields.exchangeOriginItemList;
      if ( !v13 )
        goto LABEL_30;
      if ( (unsigned int)v10 >= v13->max_length )
        goto LABEL_32;
      v14 = v13->m_Items[v10];
      if ( !v14 )
        goto LABEL_30;
      Instance = UnityEngine_Mathf__Min_40694704(max, entity->fields.num / v14->fields.num, 0LL);
      v15 = this->fields.exchangeOriginItemList;
      if ( !v15 )
        goto LABEL_30;
      if ( (unsigned int)v10 >= v15->max_length )
        goto LABEL_32;
      v16 = v15->m_Items[v10];
      if ( !v16 )
        goto LABEL_30;
      if ( !entity )
        goto LABEL_30;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v10 >= isShortage->max_length )
        goto LABEL_32;
      max = Instance;
      v18 = v16->fields.num > entity->fields.num;
    }
    else
    {
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v10 >= isShortage->max_length )
      {
LABEL_32:
        v20 = sub_B2C460(Instance);
        sub_B2C400(v20, 0LL);
      }
      max = 0;
      v18 = 1;
    }
    isShortage->m_Items[v10 + 4] = v18;
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
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventRecipeEntity, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_418878E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, method);
    byte_418878E = 1;
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
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B2C434(itemSlider, method);
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

  if ( (byte_4188793 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188793 = 1;
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
      sub_B2C434(0LL, v3);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventRecipeConfirmDialogComponent__Close(this, v5);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4188792 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188792 = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v63; // x1
  UILabel_o *titleLb; // x22
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v67; // x0
  System_String_o *v68; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x1
  const MethodInfo *v88; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v92; // x2
  System_Action_o *v93; // x20
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418878C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, eventRecipeEntity);
    sub_B2C35C(&AtlasManager_TypeInfo, v14);
    sub_B2C35C(&bool___TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v16);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent_EndOpen__, v17);
    sub_B2C35C(&int_TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&StringLiteral_11036/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, v23);
    sub_B2C35C(&StringLiteral_11034/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, v24);
    sub_B2C35C(&StringLiteral_19379/*"icon_{0}"*/, v25);
    sub_B2C35C(&StringLiteral_11035/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_11033/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, v27);
    sub_B2C35C(&StringLiteral_3263/*"COMMON_CONFIRM_EXECUTE"*/, v28);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v29);
    byte_418878C = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeEntity,
      (System_Int32_array **)eventRecipeEntity,
      (System_String_array **)eventRecipeGiftEntities,
      (System_String_array **)onDecide,
      (System_Boolean_array **)boxOverDlg,
      (System_Int32_array **)boxOverDlgCallBack,
      (System_Int32_array *)method,
      v7);
    this->fields.onDecide = onDecide;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.boxOverDlgCloseCallBack,
      (System_Int32_array **)boxOverDlgCallBack,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.presentBoxOverDlg,
      (System_Int32_array **)boxOverDlg,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeGiftList,
      (System_Int32_array **)eventRecipeGiftEntities,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v55,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v55;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.rewardItemObjList,
      (System_Int32_array **)v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11035/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
    v68 = System_String__Format((System_String_o *)StringLiteral_19379/*"icon_{0}"*/, v67, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28451336(eventId, eventItemIcon, v68, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3263/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_24;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_24;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.exchangeOriginItemList,
      (System_Int32_array **)SortedEntityList,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_24;
    v79 = (struct System_Boolean_array *)sub_B2C374(bool___TypeInfo, exchangeOriginItemList->max_length);
    this->fields.isShortage = v79;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.isShortage,
      (System_Int32_array **)v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v86);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v87);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v88);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11034/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11033/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11036/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_24:
      sub_B2C434(gameObject, v63);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v92);
    this->fields.state = 1;
    v93 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v93, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v93, 0, 0LL);
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v15; // x8
  il2cpp_array_size_t v16; // w23
  UILabel_o *exchangeOriginLb; // x20
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v19; // x9
  CommonConsumeEntity_o *v20; // x9
  UISprite_o *v21; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v24; // x9
  UILabel_o *v25; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v27; // x9
  CommonConsumeEntity_o *v28; // x9
  int32_t num; // w9
  UILabel_o *v30; // x20
  int v31; // w8
  struct UILabel_array *v32; // x8
  struct System_Boolean_array *isShortage; // x9
  UIWidget_o *v34; // x20
  int v35; // s0
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v40; // x20
  struct CommonConsumeEntity_array *v41; // x8
  il2cpp_array_size_t v42; // w23
  UILabel_o *exchangeOriginLb2; // x20
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v45; // x9
  CommonConsumeEntity_o *v46; // x9
  UISprite_o *v47; // x20
  int32_t v48; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v50; // x9
  UILabel_o *v51; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v53; // x9
  CommonConsumeEntity_o *v54; // x9
  int32_t v55; // w9
  UILabel_o *v56; // x20
  int v57; // w8
  struct UILabel_array *v58; // x8
  struct System_Boolean_array *v59; // x9
  UIWidget_o *v60; // x20
  int v61; // s0
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v66; // x20
  struct CommonConsumeEntity_array *v67; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v72; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v76; // x8
  int32_t v77; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19
  __int64 v80; // x0

  if ( (byte_418878F & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_bool___, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_11030/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, v5);
    sub_B2C35C(&StringLiteral_11037/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v6);
    sub_B2C35C(&StringLiteral_11029/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v7);
    sub_B2C35C(&StringLiteral_11032/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v8);
    sub_B2C35C(&StringLiteral_11031/*"RECIPE_CONFIRM_DIALOG_KIND"*/, v9);
    byte_418878F = 1;
  }
  warningLb = this->fields.warningLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11037/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
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
                                    (const MethodInfo_1A8A1FC *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_124;
  v15 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v15 == 3 )
  {
    v16 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_124;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_124;
      if ( v16 >= exchangeOriginItemIcon->max_length )
        goto LABEL_125;
      v19 = this->fields.exchangeOriginItemList;
      if ( !v19 )
        goto LABEL_124;
      if ( v16 >= v19->max_length )
        goto LABEL_125;
      v20 = v19->m_Items[v16];
      if ( !v20 )
        goto LABEL_124;
      v21 = exchangeOriginItemIcon->m_Items[v16];
      objectId = v20->fields.objectId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v21, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_124;
      if ( v16 >= exchangeOriginItemNames->max_length )
        goto LABEL_125;
      v24 = this->fields.exchangeOriginItemList;
      if ( !v24 )
        goto LABEL_124;
      if ( v16 >= v24->max_length )
        goto LABEL_125;
      Name = v24->m_Items[v16];
      if ( !Name )
        goto LABEL_124;
      v25 = exchangeOriginItemNames->m_Items[v16];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
      if ( !v25 )
        goto LABEL_124;
      UILabel__set_text(v25, (System_String_o *)Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_124;
      if ( v16 >= exchangeOriginCounts->max_length )
        goto LABEL_125;
      v27 = this->fields.exchangeOriginItemList;
      if ( !v27 )
        goto LABEL_124;
      if ( v16 >= v27->max_length )
        goto LABEL_125;
      v28 = v27->m_Items[v16];
      if ( !v28 )
        goto LABEL_124;
      num = v28->fields.num;
      v30 = exchangeOriginCounts->m_Items[v16];
      v31 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v31 * num, 0LL);
      if ( !v30 )
        goto LABEL_124;
      UILabel__set_text(v30, (System_String_o *)Name, 0LL);
      v32 = this->fields.exchangeOriginCounts;
      if ( !v32 )
        goto LABEL_124;
      if ( v16 >= v32->max_length )
        goto LABEL_125;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_124;
      if ( v16 >= isShortage->max_length )
        goto LABEL_125;
      v34 = (UIWidget_o *)v32->m_Items[v16];
      if ( isShortage->m_Items[v16 + 4] )
      {
        *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_red(0LL);
        if ( !v34 )
          goto LABEL_124;
      }
      else
      {
        *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
        if ( !v34 )
          goto LABEL_124;
      }
      UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_124;
      if ( v16 >= exchangeOriginCountKinds->max_length )
        goto LABEL_125;
      v40 = exchangeOriginCountKinds->m_Items[v16];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11031/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
      if ( !v40 )
        goto LABEL_124;
      UILabel__set_text(v40, (System_String_o *)Name, 0LL);
      v41 = this->fields.exchangeOriginItemList;
      if ( !v41 )
        goto LABEL_124;
      ++v16;
    }
    while ( (signed int)v16 < (signed int)v41->max_length );
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
    if ( (int)v15 >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v42 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_125;
        v45 = this->fields.exchangeOriginItemList;
        if ( !v45 )
          break;
        if ( v42 >= v45->max_length )
          goto LABEL_125;
        v46 = v45->m_Items[v42];
        if ( !v46 )
          break;
        v47 = exchangeOriginItemIcon2->m_Items[v42];
        v48 = v46->fields.objectId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v47, v48, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v42 >= exchangeOriginItemNames2->max_length )
          goto LABEL_125;
        v50 = this->fields.exchangeOriginItemList;
        if ( !v50 )
          break;
        if ( v42 >= v50->max_length )
          goto LABEL_125;
        Name = v50->m_Items[v42];
        if ( !Name )
          break;
        v51 = exchangeOriginItemNames2->m_Items[v42];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
        if ( !v51 )
          break;
        UILabel__set_text(v51, (System_String_o *)Name, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v42 >= exchangeOriginCounts2->max_length )
          goto LABEL_125;
        v53 = this->fields.exchangeOriginItemList;
        if ( !v53 )
          break;
        if ( v42 >= v53->max_length )
          goto LABEL_125;
        v54 = v53->m_Items[v42];
        if ( !v54 )
          break;
        v55 = v54->fields.num;
        v56 = exchangeOriginCounts2->m_Items[v42];
        v57 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v57 * v55, 0LL);
        if ( !v56 )
          break;
        UILabel__set_text(v56, (System_String_o *)Name, 0LL);
        v58 = this->fields.exchangeOriginCounts2;
        if ( !v58 )
          break;
        if ( v42 >= v58->max_length )
          goto LABEL_125;
        v59 = this->fields.isShortage;
        if ( !v59 )
          break;
        if ( v42 >= v59->max_length )
          goto LABEL_125;
        v60 = (UIWidget_o *)v58->m_Items[v42];
        if ( v59->m_Items[v42 + 4] )
        {
          *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_red(0LL);
          if ( !v60 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_white(0LL);
          if ( !v60 )
            break;
        }
        UIWidget__set_color(v60, *(UnityEngine_Color_o *)&v61, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v42 >= exchangeOriginCountKinds2->max_length )
        {
LABEL_125:
          v80 = sub_B2C460(Name);
          sub_B2C400(v80, 0LL);
        }
        v66 = exchangeOriginCountKinds2->m_Items[v42];
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11031/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
        if ( !v66 )
          break;
        UILabel__set_text(v66, (System_String_o *)Name, 0LL);
        v67 = this->fields.exchangeOriginItemList;
        if ( !v67 )
          break;
        if ( (signed int)++v42 >= (signed int)v67->max_length )
          goto LABEL_103;
      }
LABEL_124:
      sub_B2C434(Name, v12);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v72 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v72, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11031/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_124;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11030/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0LL);
  v76 = this->fields.eventRecipeEntity;
  if ( !v76 )
    goto LABEL_124;
  v77 = this->fields.makeCount;
  eventPointNum = v76->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v77 <= 1 )
    v77 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v77 * eventPointNum, 0LL);
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
    sub_B2C434(v6, v7);
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
  __int64 v13; // x1
  __int64 v14; // x8
  unsigned int v15; // w9
  EventRecipeGiftEntity_o *v16; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v18; // x22
  unsigned int v19; // w26
  GiftEntity_o *v20; // x23
  struct UnityEngine_GameObject_o *rewardItemIcon; // x24
  UnityEngine_GameObject_o *v22; // x24
  UnityEngine_Transform_o *transform; // x25
  int v24; // s0
  ItemIconComponent_o *v27; // x25
  int32_t v28; // w3
  const MethodInfo *v29; // x3
  EventRecipeGiftEntity_o *v30; // x8
  int32_t topIconId; // w20
  bool v32; // zf
  UnityEngine_GameObject_o *v33; // x20
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x21
  float v35; // s0
  bool v36; // w1
  __int64 v37; // x0
  UnityEngine_GameObject_o *v38; // [xsp+8h] [xbp-68h]
  EventRecipeGiftEntity_array *v39; // [xsp+10h] [xbp-60h]
  unsigned int v40; // [xsp+1Ch] [xbp-54h]
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v3 = eventRecipeGiftEntities;
  if ( (byte_4188790 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, eventRecipeGiftEntities);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4188790 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v3 )
    goto LABEL_47;
  v14 = *(_QWORD *)&v3->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    v38 = Instance;
    v39 = v3;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        goto LABEL_48;
      v16 = v3->m_Items[v15];
      if ( !v16 )
        goto LABEL_47;
      v40 = v15;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                               (GiftMaster_o *)Instance,
                                               v16->fields.giftId,
                                               0LL);
      if ( !Instance )
        goto LABEL_47;
      klass = (int)Instance[1].klass;
      v18 = Instance;
      if ( klass >= 1 )
        break;
LABEL_28:
      Instance = (UnityEngine_GameObject_o *)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)Instance,
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      v3 = v39;
      if ( !Instance )
        goto LABEL_47;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))Instance->klass[1]._1.castClass)(
        Instance,
        Instance->klass[1]._1.declaringType);
      v14 = *(_QWORD *)&v39->max_length;
      Instance = v38;
      v15 = v40 + 1;
      if ( (int)(v40 + 1) >= (int)v14 )
        goto LABEL_31;
    }
    v19 = 0;
    while ( v19 < klass )
    {
      v20 = (GiftEntity_o *)*((_QWORD *)&v18[1].monitor + (int)v19);
      rewardItemIcon = this->fields.rewardItemIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)rewardItemIcon,
                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_47;
      v22 = Instance;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
      if ( !Instance )
        goto LABEL_47;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      transform = UnityEngine_GameObject__get_transform(v22, 0LL);
      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
      if ( !Instance )
        goto LABEL_47;
      v41.fields.x = this->fields.iconScale;
      v41.fields.y = v41.fields.x;
      v41.fields.z = v41.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v41, 0LL);
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v22,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v20 )
        goto LABEL_47;
      v27 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_47;
      v28 = v20->fields.num <= 1 ? -1 : v20->fields.num;
      ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v20->fields.type, v20->fields.objectId, v28, 0, 0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v27, v20, v29);
      UnityEngine_GameObject__SetActive(v22, 1, 0LL);
      Instance = (UnityEngine_GameObject_o *)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      klass = (int)v18[1].klass;
      if ( (int)++v19 >= klass )
        goto LABEL_28;
    }
LABEL_48:
    v37 = sub_B2C460(Instance);
    sub_B2C400(v37, 0LL);
  }
LABEL_31:
  if ( !(_DWORD)v14 )
    goto LABEL_48;
  v30 = v3->m_Items[0];
  if ( !v30 )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_47;
  topIconId = v30->fields.topIconId;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v32 = topIconId == 1;
  v33 = Instance;
  if ( !v32 )
  {
    if ( Instance )
    {
      v36 = 0;
      goto LABEL_46;
    }
LABEL_47:
    sub_B2C434(Instance, v13);
  }
  rewardItemObjList = this->fields.rewardItemObjList;
  if ( !rewardItemObjList )
    goto LABEL_47;
  if ( !rewardItemObjList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  Instance = rewardItemObjList->fields._items->m_Items[0];
  if ( !Instance )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  LODWORD(v35) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v33, v35, 0LL);
  Instance = (UnityEngine_GameObject_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_47;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v36 = 1;
LABEL_46:
  UnityEngine_GameObject__SetActive(Instance, v36, 0LL);
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

  if ( (byte_4188799 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4188799 = 1;
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
        v23 = sub_B2C460(itemSlider);
        sub_B2C400(v23, 0LL);
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
    sub_B2C434(itemSlider, method);
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

  if ( (byte_418879A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418879A = 1;
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
    sub_B2C434(0LL, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184B5A & 1) == 0 )
  {
    sub_B2C35C(&EventRecipeConfirmDialogComponent___c_TypeInfo, v1);
    byte_4184B5A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v9; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4184B5B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__, v5);
    sub_B2C35C(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, v6);
    byte_4184B5B = 1;
  }
  v7 = sub_B2C42C(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
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
  __int64 v9; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4184B5C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__, v5);
    sub_B2C35C(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, v6);
    byte_4184B5C = 1;
  }
  v7 = sub_B2C42C(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
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
  __int64 v9; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4184B5D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__, v5);
    sub_B2C35C(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, v6);
    byte_4184B5D = 1;
  }
  v7 = sub_B2C42C(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
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
  SceneJumpInfo_o *v8; // x20
  AvalonSceneManager_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4184B5E & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v4);
    sub_B2C35C(&StringLiteral_12707/*"ServantCombine"*/, v5);
    byte_4184B5E = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292968(v8, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B2C434(v9, v10);
    case 1:
      v9 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v9, v11, 1, v12, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v8, (System_String_o *)StringLiteral_12707/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_12:
        v9 = (AvalonSceneManager_o *)Instance;
        v12 = (Il2CppObject *)v8;
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
  SceneJumpInfo_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4184B5F & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12711/*"ServantEquipList"*/, v4);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v5);
    sub_B2C35C(&StringLiteral_12710/*"ServantEQCombine"*/, v6);
    byte_4184B5F = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292968(v9, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v9, (System_String_o *)StringLiteral_12711/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B2C434(v10, v11);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v9, (System_String_o *)StringLiteral_12710/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v12, 1, (Il2CppObject *)v9, 0LL);
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
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4184B60 & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v4);
    byte_4184B60 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17292968(v6, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B2C434(v7, v8);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v6, 0LL);
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
      sub_B2C434(_4__this, method);
    }
    System_Action__Invoke((System_Action_o *)_4__this, 0LL);
  }
}