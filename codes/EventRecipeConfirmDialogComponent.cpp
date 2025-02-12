void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB88E3 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB88E3 = 1;
  }
  this->fields.iconScale = 0.65;
  this->fields.possesionRootMovePositionY = -95.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  int baseWindow; // w8
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4BB88D9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, gift);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1C13D24(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v8);
    byte_4BB88D9 = 1;
  }
  if ( !gift )
    goto LABEL_34;
  if ( Gift__IsServant_38830908(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
        return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)this, gift->fields.objectId, 0, 0LL);
    }
LABEL_34:
    sub_1C13F80(this, gift);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_34;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_3238624 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_34;
  baseWindow = (int)this->fields.baseWindow;
  if ( baseWindow <= 5 )
  {
    if ( baseWindow == 1 )
    {
      if ( !SelfUserGame )
        goto LABEL_34;
      return SelfUserGame->fields.qp;
    }
    if ( baseWindow == 5 )
    {
      if ( !SelfUserGame )
        goto LABEL_34;
      return SelfUserGame->fields.mana;
    }
  }
  else
  {
    if ( baseWindow == 13 )
    {
      if ( !SelfUserGame )
        goto LABEL_34;
      return UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
    }
    if ( baseWindow == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_34;
      return SelfUserGame->fields.rarePri;
    }
  }
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, gift);
    byte_4BAF1E5 = 1;
  }
  this = (EventRecipeConfirmDialogComponent_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (EventRecipeConfirmDialogComponent_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_34;
  this = (EventRecipeConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                  (UserItemMaster_o *)MasterData_object,
                                                  *(_QWORD *)&this->fields.exchangeOriginLb2->fields.updateAnchors,
                                                  gift->fields.objectId,
                                                  0LL);
  if ( !this )
    goto LABEL_34;
  return HIDWORD(this->fields.m_CancellationTokenSource);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v17; // x20

  if ( (byte_4BB88DF & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isOpenPresentBox);
    sub_1C13D24(
      &Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
      v5);
    sub_1C13D24(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, v6);
    byte_4BB88DF = 1;
  }
  v7 = sub_1C13F70(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_BYTE *)(v7 + 16) = isOpenPresentBox,
        *(_QWORD *)(v7 + 24) = this,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v17 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1C13F80(v8, v9);
  }
  PresentBoxOverDialog__Close_31480108(presentBoxOverDlg, v17, 0LL);
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
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_String_o *v22; // x20
  BalanceConfig_c *v23; // x8
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v27; // x21
  PresentBoxOverDialog_ClickDelegate_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  PartyOrganizationUtility_o *p_onDecide; // x0
  struct System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4BB88E0 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v5);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__, v6);
    sub_1C13D24(&int_TypeInfo, v7);
    sub_1C13D24(&LocalizationManager_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_11160/*"RARITY_TYPE_SSRARE"*/, v9);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB88E0 = 1;
  }
  if ( v4->fields.onDecide )
  {
    v11 = EventRecipeConfirmDialogComponent__CheckServant(this, *(const MethodInfo **)&result);
    if ( v11 )
    {
      if ( EventRecipeConfirmDialogComponent__CheckOverCapacity(
             (EventRecipeConfirmDialogComponent_o *)v11,
             v4->fields.eventRecipeGiftList,
             v12) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11160/*"RARITY_TYPE_SSRARE"*/, 0LL);
        v23 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v23 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v23->static_fields->PresentBoxMax;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax, v19, v20, v21);
        v25 = System_String__Format(v22, v24, 0LL);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v27 = v25;
        v28 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1C13F70(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v27, v28, 0, 0LL);
          goto LABEL_12;
        }
      }
      else
      {
        p_onDecide = (PartyOrganizationUtility_o *)&v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_1C13CC8(p_onDecide, 0LL, v13, v14, v15, v16, v17, v18);
        if ( onDecide )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
            onDecide->fields.original_method_info,
            (unsigned int)result,
            *(_QWORD *)&onDecide->fields.extra_arg);
          return;
        }
      }
      sub_1C13F80(v29, v30);
    }
LABEL_12:
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
  __int64 v14; // x1
  Il2CppObject *Master_object; // x20
  DataManager_o *Instance; // x0
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v19; // x21
  signed int max_length; // w8
  unsigned int v21; // w24
  EventRecipeGiftEntity_o *v22; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v24; // x23
  __int64 v25; // x27
  __int64 v26; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int32_t v30; // w0
  BalanceConfig_c *v31; // x8
  int32_t v32; // w19

  if ( (byte_4BB88DD & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, giftEnt);
    sub_1C13D24(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1C13D24(&NetworkManager_TypeInfo, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BB88DD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v14);
    byte_4BAF1E5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_37;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)Master_object,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_GiftMaster___);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_37;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        goto LABEL_38;
      v22 = giftEnt->m_Items[v21];
      if ( !v22 )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                    (GiftMaster_o *)MasterData_object,
                                    v22->fields.giftId,
                                    0LL);
      if ( !Instance )
        goto LABEL_37;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      v24 = Instance;
      if ( m_CancellationTokenSource )
      {
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_32:
      max_length = giftEnt->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_33;
    }
    v25 = 0LL;
    while ( (unsigned int)v25 < (unsigned int)m_CancellationTokenSource )
    {
      v26 = *((_QWORD *)&v24->fields._DispLog + v25);
      if ( !v26 || !v19 )
        goto LABEL_37;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    v19,
                                    *(_DWORD *)(v26 + 20),
                                    (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        v14 = *(unsigned int *)(v26 + 20);
        items = v19->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            v14,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size + 1] = v14;
        }
      }
      LODWORD(m_CancellationTokenSource) = v24->fields.m_CancellationTokenSource;
      if ( (int)++v25 >= (int)m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_38:
    sub_1C13F88(Instance, v14);
  }
LABEL_33:
  if ( !VaildList )
LABEL_37:
    sub_1C13F80(Instance, v14);
  v30 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (const MethodInfo_2FA9F90 *)Method_System_Linq_Enumerable_Count_int___);
  v31 = BalanceConfig_TypeInfo;
  v32 = v30;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v32 + VaildList->max_length) > v31->static_fields->PresentBoxMax;
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
  UserGameEntity_o *SelfUserGame; // x19
  void *Instance; // x0
  __int64 v13; // x1
  UserServantMaster_o *v14; // x20
  Il2CppObject *MasterData_object; // x21
  CommonUI_o *v16; // x20
  int32_t v17; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v19; // x22
  Il2CppObject *v20; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  CommonUI_o *v28; // x0
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  CommonUI_o *v32; // x20
  int32_t v33; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v35; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int32_t Count; // w20
  CommonUI_o *v44; // x21
  BalanceConfig_c *v45; // x8
  Il2CppObject *v46; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB88DE & 1) == 0 )
  {
    sub_1C13D24(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__, v7);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__, v8);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__, v9);
    sub_1C13D24(&EventRecipeConfirmDialogComponent___c_TypeInfo, v10);
    byte_4BB88DE = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v14 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v16 = (CommonUI_o *)Instance;
    v17 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v19 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v20 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C13F70(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v20,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0LL);
      static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = v19;
      sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__62_0, (int64_t)v19, v22, v23, v24, v25, v26, v27);
    }
    if ( !v16 )
      goto LABEL_45;
    v28 = v16;
    v29 = v17;
    v30 = svtKeep;
    v31 = 0;
    goto LABEL_42;
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v32 = (CommonUI_o *)Instance;
    v33 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
    if ( !v19 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C13F70(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v35,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v36 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v36->__9__62_1 = v19;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v36->__9__62_1, (int64_t)v19, v37, v38, v39, v40, v41, v42);
    }
    if ( !v32 )
      goto LABEL_45;
    v31 = 1;
    v28 = v32;
    v29 = v33;
LABEL_41:
    v30 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v28, v29, v30, v31, 1, v19, 3, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1C13F80(Instance, v13);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v44 = (CommonUI_o *)Instance;
    if ( !byte_4BAF6EA )
    {
      sub_1C13D24(&BalanceConfig_TypeInfo, v13);
      byte_4BAF6EA = 1;
    }
    v45 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v45 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v45->static_fields->CommandCodeFrameMax;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v19 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v46 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C13F70(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v46,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v47 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v47->__9__62_4 = v19;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v47->__9__62_4, (int64_t)v19, v48, v49, v50, v51, v52, v53);
    }
    if ( !v44 )
      goto LABEL_45;
    v31 = 2;
    v28 = v44;
    v29 = Count;
    goto LABEL_41;
  }
  return 1;
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB88DC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    byte_4BB88DC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v9; // x20
  __int64 v10; // x23
  struct CommonConsumeEntity_array *v11; // x8
  CommonConsumeEntity_o *v12; // x8
  CommonConsumeEntity_o *v13; // x10
  int32_t num; // w9
  int32_t v15; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v17; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB88D5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1C13D24(&NetworkManager_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BB88D5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_31:
    sub_1C13F80(Instance, v6);
  }
  max = this->fields.max;
  v9 = (UserItemMaster_o *)Instance;
  v10 = 0LL;
  while ( (int)v10 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BAF1E5 )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, v6);
      byte_4BAF1E5 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v11 = this->fields.exchangeOriginItemList;
    if ( !v11 )
      goto LABEL_31;
    if ( (unsigned int)v10 >= v11->max_length )
      goto LABEL_33;
    v12 = v11->m_Items[v10];
    if ( !v12 || !v9 )
      goto LABEL_31;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  v9,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v12->fields.objectId,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_31;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_31;
      if ( (unsigned int)v10 >= exchangeOriginItemList->max_length )
        goto LABEL_33;
      v13 = exchangeOriginItemList->m_Items[v10];
      if ( !v13 )
        goto LABEL_31;
      num = entity->fields.num;
      v15 = v13->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v15 )
        max = num / v15;
      if ( !isShortage )
        goto LABEL_31;
      if ( (unsigned int)v10 >= isShortage->max_length )
        goto LABEL_33;
      isShortage->m_Items[v10 + 4] = v15 > num;
    }
    else
    {
      v17 = this->fields.isShortage;
      if ( !v17 )
        goto LABEL_31;
      if ( (unsigned int)v10 >= v17->max_length )
LABEL_33:
        sub_1C13F88(Instance, v6);
      v17->m_Items[v10 + 4] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v10;
    if ( !exchangeOriginItemList )
      goto LABEL_31;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.eventRecipeEntity, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BB88D6 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, method);
    byte_4BB88D6 = 1;
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
            itemSlider = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)itemSlider,
                                                      (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1C13F80(itemSlider, method);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BB88DB & 1) == 0 )
  {
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__, method);
    byte_4BB88DB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C13F80(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventRecipeConfirmDialogComponent__Close(this, v7);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB88DA & 1) == 0 )
  {
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__, method);
    byte_4BB88DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    EventRecipeConfirmDialogComponent__CallOnDecide(this, this->fields.makeCount, v5);
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
  PartyListViewItem_o *v7; // x7
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_List_object__o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v63; // x1
  UILabel_o *titleLb; // x22
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v70; // x0
  System_String_o *v71; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v95; // x2
  System_Action_o *v96; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB88D4 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, eventRecipeEntity);
    sub_1C13D24(&AtlasManager_TypeInfo, v14);
    sub_1C13D24(&bool___TypeInfo, v15);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v16);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent_EndOpen__, v17);
    sub_1C13D24(&int_TypeInfo, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v19);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v20);
    sub_1C13D24(&LocalizationManager_TypeInfo, v21);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C13D24(&StringLiteral_11168/*"RECEIVE_ALL_DONE"*/, v23);
    sub_1C13D24(&StringLiteral_11166/*"RECEIPT_SELECT_CANCEL"*/, v24);
    sub_1C13D24(&StringLiteral_20524/*"icon_spot_next"*/, v25);
    sub_1C13D24(&StringLiteral_11167/*"RECEIPT_SELECT_OK"*/, v26);
    sub_1C13D24(&StringLiteral_11165/*"REAL"*/, v27);
    sub_1C13D24(&StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, v28);
    sub_1C13D24(&StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, v29);
    byte_4BB88D4 = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.eventRecipeEntity,
      (int64_t)eventRecipeEntity,
      (int64_t)eventRecipeGiftEntities,
      (int32_t)onDecide,
      (System_String_o *)boxOverDlg,
      (BattleSetupInfo_o *)boxOverDlgCallBack,
      (FollowerInfo_o *)method,
      v7);
    this->fields.onDecide = onDecide;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v31, v32, v33, v34, v35, v36);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.boxOverDlgCloseCallBack,
      (int64_t)boxOverDlgCallBack,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.presentBoxOverDlg,
      (int64_t)boxOverDlg,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.eventRecipeGiftList,
      (int64_t)eventRecipeGiftEntities,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v55 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v55;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.rewardItemObjList,
      (int64_t)v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11167/*"RECEIPT_SELECT_OK"*/, 0LL);
    if ( !*p_eventRecipeEntity )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               (System_String_o *)gameObject,
                                               (Il2CppObject *)(*p_eventRecipeEntity)->fields.name,
                                               0LL);
    if ( !titleLb )
      goto LABEL_22;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
    if ( !eventRecipeEntity )
      goto LABEL_22;
    eventId = this->fields.eventId;
    eventItemIcon = this->fields.eventItemIcon;
    iconId = eventRecipeEntity->fields.iconId;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v65, v66, v67);
    v71 = System_String__Format((System_String_o *)StringLiteral_20524/*"icon_spot_next"*/, v70, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39004844(eventId, eventItemIcon, v71, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.exchangeOriginItemList,
      (int64_t)SortedEntityList,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    v82 = (struct System_Boolean_array *)sub_1C13DCC(bool___TypeInfo, exchangeOriginItemList->max_length);
    this->fields.isShortage = v82;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.isShortage, (int64_t)v82, v83, v84, v85, v86, v87, v88);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v89);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v90);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v91);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11166/*"RECEIPT_SELECT_CANCEL"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11165/*"REAL"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11168/*"RECEIVE_ALL_DONE"*/, 0LL),
          !topLabel) )
    {
LABEL_22:
      sub_1C13F80(gameObject, v63);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v95);
    this->fields.state = 1;
    v96 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v15; // x8
  il2cpp_array_size_t v16; // w25
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
  float v34; // s1
  float v35; // s0
  float v36; // s3
  float v37; // s2
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v39; // x20
  struct CommonConsumeEntity_array *v40; // x8
  il2cpp_array_size_t v41; // w25
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
  float v59; // s1
  float v60; // s0
  float v61; // s3
  float v62; // s2
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v64; // x20
  struct CommonConsumeEntity_array *v65; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v70; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v74; // x8
  int32_t v75; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19

  if ( (byte_4BB88D7 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_bool___, v3);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_11162/*"RATIOS_OFF"*/, v5);
    sub_1C13D24(&StringLiteral_11169/*"RECEIVE_FILTER_NOTHING"*/, v6);
    sub_1C13D24(&StringLiteral_11161/*"RARITY_TYPE_UNCOMMON"*/, v7);
    sub_1C13D24(&StringLiteral_11164/*"RC4"*/, v8);
    sub_1C13D24(&StringLiteral_11163/*"RC2"*/, v9);
    byte_4BB88D7 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11169/*"RECEIVE_FILTER_NOTHING"*/, 0LL);
  if ( !warningLb )
    goto LABEL_115;
  UILabel__set_text(warningLb, (System_String_o *)Name, 0LL);
  Name = (CommonConsumeEntity_o *)this->fields.warningLb;
  if ( !Name )
    goto LABEL_115;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Name, 0LL);
  Name = (CommonConsumeEntity_o *)System_Linq_Enumerable__Contains_bool_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.isShortage,
                                    1,
                                    (const MethodInfo_2FA7254 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_115;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_115;
  v15 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v15 == 3 )
  {
    v16 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11164/*"RC4"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_115;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_115;
      if ( v16 >= exchangeOriginItemIcon->max_length )
        goto LABEL_116;
      v19 = this->fields.exchangeOriginItemList;
      if ( !v19 )
        goto LABEL_115;
      if ( v16 >= v19->max_length )
        goto LABEL_116;
      v20 = v19->m_Items[v16];
      if ( !v20 )
        goto LABEL_115;
      v21 = exchangeOriginItemIcon->m_Items[v16];
      objectId = v20->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v21, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_115;
      if ( v16 >= exchangeOriginItemNames->max_length )
        goto LABEL_116;
      v24 = this->fields.exchangeOriginItemList;
      if ( !v24 )
        goto LABEL_115;
      if ( v16 >= v24->max_length )
        goto LABEL_116;
      Name = v24->m_Items[v16];
      if ( !Name )
        goto LABEL_115;
      v25 = exchangeOriginItemNames->m_Items[v16];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
      if ( !v25 )
        goto LABEL_115;
      UILabel__set_text(v25, (System_String_o *)Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_115;
      if ( v16 >= exchangeOriginCounts->max_length )
        goto LABEL_116;
      v27 = this->fields.exchangeOriginItemList;
      if ( !v27 )
        goto LABEL_115;
      if ( v16 >= v27->max_length )
        goto LABEL_116;
      v28 = v27->m_Items[v16];
      if ( !v28 )
        goto LABEL_115;
      num = v28->fields.num;
      v30 = exchangeOriginCounts->m_Items[v16];
      v31 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v31 * num, 0LL);
      if ( !v30 )
        goto LABEL_115;
      UILabel__set_text(v30, (System_String_o *)Name, 0LL);
      v32 = this->fields.exchangeOriginCounts;
      if ( !v32 )
        goto LABEL_115;
      if ( v16 >= v32->max_length )
        goto LABEL_116;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_115;
      if ( v16 >= isShortage->max_length )
        goto LABEL_116;
      Name = (CommonConsumeEntity_o *)v32->m_Items[v16];
      v34 = isShortage->m_Items[v16 + 4] ? 0.0 : 1.0;
      if ( !Name )
        goto LABEL_115;
      v35 = 1.0;
      v36 = 1.0;
      v37 = v34;
      UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v34 - 1), 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_115;
      if ( v16 >= exchangeOriginCountKinds->max_length )
        goto LABEL_116;
      v39 = exchangeOriginCountKinds->m_Items[v16];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11163/*"RC2"*/, 0LL);
      if ( !v39 )
        goto LABEL_115;
      UILabel__set_text(v39, (System_String_o *)Name, 0LL);
      v40 = this->fields.exchangeOriginItemList;
      if ( !v40 )
        goto LABEL_115;
      ++v16;
    }
    while ( (signed int)v16 < (signed int)v40->max_length );
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject;
    if ( !Name )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject2;
    if ( !Name )
      goto LABEL_115;
  }
  else
  {
    if ( (int)v15 >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11164/*"RC4"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v41 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_116;
        v44 = this->fields.exchangeOriginItemList;
        if ( !v44 )
          break;
        if ( v41 >= v44->max_length )
          goto LABEL_116;
        v45 = v44->m_Items[v41];
        if ( !v45 )
          break;
        v46 = exchangeOriginItemIcon2->m_Items[v41];
        v47 = v45->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v46, v47, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v41 >= exchangeOriginItemNames2->max_length )
          goto LABEL_116;
        v49 = this->fields.exchangeOriginItemList;
        if ( !v49 )
          break;
        if ( v41 >= v49->max_length )
          goto LABEL_116;
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
          goto LABEL_116;
        v52 = this->fields.exchangeOriginItemList;
        if ( !v52 )
          break;
        if ( v41 >= v52->max_length )
          goto LABEL_116;
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
          goto LABEL_116;
        v58 = this->fields.isShortage;
        if ( !v58 )
          break;
        if ( v41 >= v58->max_length )
          goto LABEL_116;
        Name = (CommonConsumeEntity_o *)v57->m_Items[v41];
        v59 = v58->m_Items[v41 + 4] ? 0.0 : 1.0;
        if ( !Name )
          break;
        v60 = 1.0;
        v61 = 1.0;
        v62 = v59;
        UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v59 - 1), 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v41 >= exchangeOriginCountKinds2->max_length )
LABEL_116:
          sub_1C13F88(Name, v12);
        v64 = exchangeOriginCountKinds2->m_Items[v41];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11163/*"RC2"*/, 0LL);
        if ( !v64 )
          break;
        UILabel__set_text(v64, (System_String_o *)Name, 0LL);
        v65 = this->fields.exchangeOriginItemList;
        if ( !v65 )
          break;
        if ( (signed int)++v41 >= (signed int)v65->max_length )
          goto LABEL_96;
      }
LABEL_115:
      sub_1C13F80(Name, v12);
    }
LABEL_96:
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject2;
    if ( !Name )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0LL);
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject;
    if ( !Name )
      goto LABEL_115;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0LL);
  exchangeDestinationLb = this->fields.exchangeDestinationLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11161/*"RARITY_TYPE_UNCOMMON"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v70 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v70, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11163/*"RC2"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_115;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11162/*"RATIOS_OFF"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0LL);
  v74 = this->fields.eventRecipeEntity;
  if ( !v74 )
    goto LABEL_115;
  v75 = this->fields.makeCount;
  eventPointNum = v74->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v75 <= 1 )
    v75 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v75 * eventPointNum, 0LL);
  if ( !exchangeDestinationPointCount )
    goto LABEL_115;
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
    sub_1C13F80(v6, v7);
  ItemIconComponent__SetPossessionOneLabel(item, v6, 0LL);
  ItemIconComponent__SetPossessionRoot(item, this->fields.possesionRootMovePositionY, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SetRewardList(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        const MethodInfo *method)
{
  EventRecipeGiftEntity_array *v3; // x23
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  unsigned int v15; // w9
  EventRecipeGiftEntity_o *v16; // x8
  int v17; // w8
  __int64 v18; // x23
  unsigned int v19; // w28
  Il2CppObject *rewardItemIcon; // x24
  GiftEntity_o *v21; // x25
  UnityEngine_GameObject_o *v22; // x24
  UnityEngine_Transform_o *v23; // x26
  ItemIconComponent_o *v24; // x26
  int32_t v25; // w3
  const MethodInfo *v26; // x3
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  EventRecipeGiftEntity_o *v37; // x8
  int32_t topIconId; // w20
  bool v39; // zf
  UnityEngine_GameObject_o *v40; // x20
  float v41; // s0
  bool v42; // w1
  __int64 v43; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v44; // [xsp+10h] [xbp-70h]
  unsigned int v45; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  v3 = eventRecipeGiftEntities;
  if ( (byte_4BB88D8 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIGrid___, eventRecipeGiftEntities);
    sub_1C13D24(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BB88D8 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v3 )
    goto LABEL_50;
  v14 = *(_QWORD *)&v3->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    v43 = Instance;
    v44 = v3;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        goto LABEL_51;
      v16 = v3->m_Items[v15];
      if ( !v16 )
        goto LABEL_50;
      v45 = v15;
      if ( !Instance )
        goto LABEL_50;
      Instance = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v16->fields.giftId, 0LL);
      if ( !Instance )
        goto LABEL_50;
      v17 = *(_DWORD *)(Instance + 24);
      v18 = Instance;
      if ( v17 >= 1 )
        break;
LABEL_33:
      Instance = (__int64)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_50;
      Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      v3 = v44;
      if ( !Instance )
        goto LABEL_50;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 448LL));
      v14 = *(_QWORD *)&v44->max_length;
      Instance = v43;
      v15 = v45 + 1;
      if ( (int)(v45 + 1) >= (int)v14 )
        goto LABEL_36;
    }
    v19 = 0;
    while ( v19 < v17 )
    {
      rewardItemIcon = (Il2CppObject *)this->fields.rewardItemIcon;
      v21 = *(GiftEntity_o **)(v18 + 8LL * (int)v19 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            rewardItemIcon,
                            (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_50;
      v22 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_50;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
      v23 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4BAEDA1 )
      {
        Instance = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v13);
        byte_4BAEDA1 = 1;
      }
      if ( !v23 )
        goto LABEL_50;
      UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
      if ( !Instance )
        goto LABEL_50;
      v46.fields.x = this->fields.iconScale;
      v46.fields.y = v46.fields.x;
      v46.fields.z = v46.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v46, 0LL);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v22,
                            (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v21 )
        goto LABEL_50;
      v24 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_50;
      v25 = v21->fields.num <= 1 ? -1 : v21->fields.num;
      ItemIconComponent__SetGift_39286592(
        (ItemIconComponent_o *)Instance,
        v21->fields.type,
        v21->fields.objectId,
        v25,
        0,
        0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v24, v21, v26);
      UnityEngine_GameObject__SetActive(v22, 1, 0LL);
      Instance = (__int64)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_50;
      v33 = *(_QWORD *)(Instance + 16);
      v34 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v33 )
        goto LABEL_50;
      v35 = *(int *)(Instance + 24);
      if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v22,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * v35;
        *(_DWORD *)(Instance + 24) = v35 + 1;
        *(_QWORD *)(v36 + 32) = v22;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v22, v27, v28, v29, v30, v31, v32);
      }
      v17 = *(_DWORD *)(v18 + 24);
      if ( (int)++v19 >= v17 )
        goto LABEL_33;
    }
LABEL_51:
    sub_1C13F88(Instance, v13);
  }
LABEL_36:
  if ( !(_DWORD)v14 )
    goto LABEL_51;
  v37 = v3->m_Items[0];
  if ( !v37 )
    goto LABEL_50;
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  topIconId = v37->fields.topIconId;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v39 = topIconId == 1;
  v40 = (UnityEngine_GameObject_o *)Instance;
  if ( !v39 )
  {
    if ( Instance )
    {
      v42 = 0;
      goto LABEL_49;
    }
LABEL_50:
    sub_1C13F80(Instance, v13);
  }
  Instance = (__int64)this->fields.rewardItemObjList;
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Instance,
                        0,
                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  LODWORD(v41) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v40, v41, 0LL);
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  v42 = 1;
LABEL_49:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v42, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v5; // x9
  unsigned int v6; // w22
  struct UILabel_array *exchangeOriginCounts; // x10
  CommonConsumeEntity_o *v8; // x8
  UILabel_o *v9; // x20
  int32_t num; // w23
  int32_t makeCount; // w24
  unsigned int v12; // w22
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

  if ( (byte_4BB88E1 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BB88E1 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_34;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  this->fields.makeCount = (int)itemSlider;
  if ( !exchangeOriginItemList )
    goto LABEL_34;
  v5 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v5 == 3 )
  {
    v6 = 0;
    while ( 1 )
    {
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_34;
      if ( v6 >= exchangeOriginCounts->max_length || v6 >= (unsigned int)v5 )
        goto LABEL_35;
      v8 = exchangeOriginItemList->m_Items[v6];
      if ( !v8 )
        goto LABEL_34;
      v9 = exchangeOriginCounts->m_Items[v6];
      num = v8->fields.num;
      makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(makeCount * num, 0LL);
      if ( !v9 )
        goto LABEL_34;
      UILabel__set_text(v9, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_34;
      LODWORD(v5) = exchangeOriginItemList->max_length;
      if ( (int)++v6 >= (int)v5 )
        goto LABEL_28;
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
LABEL_35:
        sub_1C13F88(itemSlider, method);
      v14 = exchangeOriginItemList->m_Items[v12];
      if ( !v14 )
        break;
      v15 = exchangeOriginCounts2->m_Items[v12];
      v16 = v14->fields.num;
      v17 = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v17 * v16, 0LL);
      if ( !v15 )
        break;
      UILabel__set_text(v15, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        break;
      LODWORD(v5) = exchangeOriginItemList->max_length;
      if ( (int)++v12 >= (int)v5 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1C13F80(itemSlider, method);
  }
LABEL_28:
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v19 = this->fields.makeCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v19, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_34;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)itemSlider, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_34;
  v21 = this->fields.makeCount;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(
                                         v21 * eventRecipeEntity->fields.eventPointNum,
                                         0LL);
  if ( !exchangeDestinationPointCount )
    goto LABEL_34;
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

  if ( (byte_4BB88E2 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB88E2 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C13F80(0LL, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB88E4 & 1) == 0 )
  {
    sub_1C13D24(&EventRecipeConfirmDialogComponent___c_TypeInfo, v1);
    byte_4BB88E4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4BB88E5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__, v5);
    sub_1C13D24(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, v6);
    byte_4BB88E5 = 1;
  }
  v7 = sub_1C13F70(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1C13F80(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4BB88E6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__, v5);
    sub_1C13D24(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, v6);
    byte_4BB88E6 = 1;
  }
  v7 = sub_1C13F70(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1C13F80(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4BB88E7 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__, v5);
    sub_1C13D24(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, v6);
    byte_4BB88E7 = 1;
  }
  v7 = sub_1C13F70(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1C13F80(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4BB88E8 & 1) == 0 )
  {
    sub_1C13D24(&SceneJumpInfo_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C13D24(&StringLiteral_12811/*"SelectBonusGetDialog"*/, v4);
    sub_1C13D24(&StringLiteral_12848/*"Serialization Callback '{1}' in type '{0}' must return void."*/, v5);
    byte_4BB88E8 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1C13F70(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39818028(v8, (System_String_o *)StringLiteral_12811/*"SelectBonusGetDialog"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C13F80(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1C13F70(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39817940(v8, (System_String_o *)StringLiteral_12848/*"Serialization Callback '{1}' in type '{0}' must return void."*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_10:
        v9 = Instance;
        v12 = (Il2CppObject *)v8;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, v11, 1, v12, 0LL);
        return;
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4BB88E9 & 1) == 0 )
  {
    sub_1C13D24(&SceneJumpInfo_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C13D24(&StringLiteral_12852/*"Serialized JSON: "*/, v4);
    sub_1C13D24(&StringLiteral_12811/*"SelectBonusGetDialog"*/, v5);
    sub_1C13D24(&StringLiteral_12851/*"Serialization error."*/, v6);
    byte_4BB88E9 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1C13F70(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39818028(v9, (System_String_o *)StringLiteral_12811/*"SelectBonusGetDialog"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C13F80(v10, v11);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1C13F70(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39817940(v9, (System_String_o *)StringLiteral_12852/*"Serialized JSON: "*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1C13F70(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39817940(v9, (System_String_o *)StringLiteral_12851/*"Serialization error."*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v12, 1, (Il2CppObject *)v9, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BB88EA & 1) == 0 )
  {
    sub_1C13D24(&SceneJumpInfo_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C13D24(&StringLiteral_12811/*"SelectBonusGetDialog"*/, v4);
    byte_4BB88EA = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_1C13F70(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_39818028(v6, (System_String_o *)StringLiteral_12811/*"SelectBonusGetDialog"*/, 2, 0LL);
    if ( !Instance )
      sub_1C13F80(v7, v8);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v6, 0LL);
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
  struct System_Action_o *boxOverDlgCloseCallBack; // x8

  if ( this->fields.isOpenPresentBox )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (EventRecipeConfirmDialogComponent__Close(_4__this, method), (v4 = this->fields.__4__this) == 0LL)
      || (boxOverDlgCloseCallBack = v4->fields.boxOverDlgCloseCallBack) == 0LL )
    {
      sub_1C13F80(_4__this, method);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))boxOverDlgCloseCallBack->fields.m_target)(
      boxOverDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&boxOverDlgCloseCallBack->fields.extra_arg);
  }
}