void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A31EF4 & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A31EF4 = 1;
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

  if ( (byte_4A31EEA & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_ItemMaster___, gift);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B761C0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B761C0(&NetworkManager_TypeInfo, v7);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1B761C0(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v8);
    byte_4A31EEA = 1;
  }
  if ( !gift )
    goto LABEL_30;
  if ( Gift__IsServant_37509564(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
        return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)this, gift->fields.objectId, 0, 0LL);
    }
LABEL_30:
    sub_1B7641C(this, gift);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_30;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_30FF780 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_30;
  baseWindow = (int)this->fields.baseWindow;
  if ( baseWindow <= 5 )
  {
    if ( baseWindow == 1 )
    {
      if ( !SelfUserGame )
        goto LABEL_30;
      return SelfUserGame->fields.qp;
    }
    if ( baseWindow == 5 )
    {
      if ( !SelfUserGame )
        goto LABEL_30;
      return SelfUserGame->fields.mana;
    }
  }
  else
  {
    if ( baseWindow == 13 )
    {
      if ( !SelfUserGame )
        goto LABEL_30;
      return UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
    }
    if ( baseWindow == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_30;
      return SelfUserGame->fields.rarePri;
    }
  }
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (EventRecipeConfirmDialogComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_30;
  this = (EventRecipeConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                  (UserItemMaster_o *)MasterData_object,
                                                  (int64_t)this,
                                                  gift->fields.objectId,
                                                  0LL);
  if ( !this )
    goto LABEL_30;
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
  int32_t v10; // w2
  int32_t v11; // w3
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v13; // x20

  if ( (byte_4A31EF0 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isOpenPresentBox);
    sub_1B761C0(
      &Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
      v5);
    sub_1B761C0(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, v6);
    byte_4A31EF0 = 1;
  }
  v7 = sub_1B7640C(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_BYTE *)(v7 + 16) = isOpenPresentBox,
        *(_QWORD *)(v7 + 24) = this,
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v13 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1B7641C(v8, v9);
  }
  PresentBoxOverDialog__Close_45947728(presentBoxOverDlg, v13, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_String_o *v18; // x20
  BalanceConfig_c *v19; // x8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v23; // x21
  PresentBoxOverDialog_ClickDelegate_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  ServantStatusBattleListViewItem_o *p_onDecide; // x0
  struct System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A31EF1 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, *(_QWORD *)&result);
    sub_1B761C0(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v5);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__, v6);
    sub_1B761C0(&int_TypeInfo, v7);
    sub_1B761C0(&LocalizationManager_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_10965/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, v9);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1B761C0(&StringLiteral_1/*""*/, v10);
    byte_4A31EF1 = 1;
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
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10965/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
        v19 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v19 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v19->static_fields->PresentBoxMax;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax, v15, v16, v17);
        v21 = System_String__Format(v18, v20, 0LL);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v23 = v21;
        v24 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1B7640C(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v23, v24, 0, 0LL);
          goto LABEL_12;
        }
      }
      else
      {
        p_onDecide = (ServantStatusBattleListViewItem_o *)&v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_1B76164(p_onDecide, 0, v13, v14);
        if ( onDecide )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
            onDecide->fields.original_method_info,
            (unsigned int)result,
            *(_QWORD *)&onDecide->fields.extra_arg);
          return;
        }
      }
      sub_1B7641C(v25, v26);
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
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v16; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v19; // x21
  signed int max_length; // w8
  unsigned int v21; // w24
  EventRecipeGiftEntity_o *v22; // x8
  __int64 v23; // x8
  int64_t v24; // x23
  __int64 v25; // x27
  __int64 v26; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int32_t v30; // w0
  BalanceConfig_c *v31; // x8
  int32_t v32; // w19

  if ( (byte_4A31EEE & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, giftEnt);
    sub_1B761C0(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_1B761C0(&DataManager_TypeInfo, v6);
    sub_1B761C0(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B761C0(&NetworkManager_TypeInfo, v12);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A31EEE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Master_object, UserId, 0LL);
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_GiftMaster___);
  v19 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
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
      if ( !MasterData_object )
        goto LABEL_33;
      UserId = (int64_t)GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v22->fields.giftId, 0LL);
      if ( !UserId )
        goto LABEL_33;
      v23 = *(_QWORD *)(UserId + 24);
      v24 = UserId;
      if ( v23 )
      {
        if ( (int)v23 >= 1 )
          break;
      }
LABEL_28:
      max_length = giftEnt->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_29;
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
                 (const MethodInfo_34BA928 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (UserId & 1) == 0 )
      {
        v16 = *(unsigned int *)(v26 + 20);
        items = v19->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_33;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            v16,
            *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size + 1] = v16;
        }
      }
      LODWORD(v23) = *(_DWORD *)(v24 + 24);
      if ( (int)++v25 >= (int)v23 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1B76424(UserId, v16);
  }
LABEL_29:
  if ( !VaildList )
LABEL_33:
    sub_1B7641C(UserId, v16);
  v30 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (const MethodInfo_2E7F154 *)Method_System_Linq_Enumerable_Count_int___);
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
  int32_t v22; // w2
  int32_t v23; // w3
  CommonUI_o *v24; // x0
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  CommonUI_o *v28; // x20
  int32_t v29; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v31; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t Count; // w20
  CommonUI_o *v36; // x21
  BalanceConfig_c *v37; // x8
  Il2CppObject *v38; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A31EEF & 1) == 0 )
  {
    sub_1B761C0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__, v7);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__, v8);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__, v9);
    sub_1B761C0(&EventRecipeConfirmDialogComponent___c_TypeInfo, v10);
    byte_4A31EEF = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v14 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B7640C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v20,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0LL);
      static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = v19;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__62_0, (int32_t)v19, v22, v23);
    }
    if ( !v16 )
      goto LABEL_45;
    v24 = v16;
    v25 = v17;
    v26 = svtKeep;
    v27 = 0;
    goto LABEL_42;
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v28 = (CommonUI_o *)Instance;
    v29 = servantEquipSum[0];
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
      v31 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B7640C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v31,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v32 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v32->__9__62_1 = v19;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v32->__9__62_1, (int32_t)v19, v33, v34);
    }
    if ( !v28 )
      goto LABEL_45;
    v27 = 1;
    v24 = v28;
    v25 = v29;
LABEL_41:
    v26 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v24, v25, v26, v27, 1, v19, 3, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1B7641C(Instance, v13);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v36 = (CommonUI_o *)Instance;
    if ( !byte_4A295AF )
    {
      sub_1B761C0(&BalanceConfig_TypeInfo, v13);
      byte_4A295AF = 1;
    }
    v37 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v37->static_fields->CommandCodeFrameMax;
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
      v38 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B7640C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v38,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v39 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v39->__9__62_4 = v19;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v39->__9__62_4, (int32_t)v19, v40, v41);
    }
    if ( !v36 )
      goto LABEL_45;
    v27 = 2;
    v24 = v36;
    v25 = Count;
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

  if ( (byte_4A31EED & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    byte_4A31EED = 1;
  }
  memset(&v12, 0, sizeof(v12));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_1B7641C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69287408((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v11 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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
  int max; // w21
  UserItemMaster_o *v9; // x20
  __int64 v10; // x22
  struct CommonConsumeEntity_array *v11; // x8
  CommonConsumeEntity_o *v12; // x8
  CommonConsumeEntity_o *v13; // x10
  int32_t num; // w9
  int32_t v15; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v17; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A31EE6 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1B761C0(&NetworkManager_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A31EE6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_27:
    sub_1B7641C(Instance, v6);
  }
  max = this->fields.max;
  v9 = (UserItemMaster_o *)Instance;
  v10 = 0LL;
  while ( (int)v10 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v11 = this->fields.exchangeOriginItemList;
    if ( !v11 )
      goto LABEL_27;
    if ( (unsigned int)v10 >= v11->max_length )
      goto LABEL_29;
    v12 = v11->m_Items[v10];
    if ( !v12 || !v9 )
      goto LABEL_27;
    Instance = UserItemMaster__TryGetEntity(v9, &entity, Instance, v12->fields.objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_27;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_27;
      if ( (unsigned int)v10 >= exchangeOriginItemList->max_length )
        goto LABEL_29;
      v13 = exchangeOriginItemList->m_Items[v10];
      if ( !v13 )
        goto LABEL_27;
      num = entity->fields.num;
      v15 = v13->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v15 )
        max = num / v15;
      if ( !isShortage )
        goto LABEL_27;
      if ( (unsigned int)v10 >= isShortage->max_length )
        goto LABEL_29;
      isShortage->m_Items[v10 + 4] = v15 > num;
    }
    else
    {
      v17 = this->fields.isShortage;
      if ( !v17 )
        goto LABEL_27;
      if ( (unsigned int)v10 >= v17->max_length )
LABEL_29:
        sub_1B76424(Instance, v6);
      v17->m_Items[v10 + 4] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v10;
    if ( !exchangeOriginItemList )
      goto LABEL_27;
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
  int32_t v7; // w2
  int32_t v8; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.eventRecipeEntity, 0, v7, v8);
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

  if ( (byte_4A31EE7 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, method);
    byte_4A31EE7 = 1;
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
                                                      (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1B7641C(itemSlider, method);
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

  if ( (byte_4A31EEC & 1) == 0 )
  {
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__, method);
    byte_4A31EEC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B7641C(0LL, v5);
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

  if ( (byte_4A31EEB & 1) == 0 )
  {
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__, method);
    byte_4A31EEB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
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
  __int64 v27; // x1
  __int64 v28; // x1
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_List_object__o *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  UILabel_o *titleLb; // x22
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v49; // x0
  System_String_o *v50; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v66; // x2
  System_Action_o *v67; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A31EE5 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, eventRecipeEntity);
    sub_1B761C0(&AtlasManager_TypeInfo, v13);
    sub_1B761C0(&bool___TypeInfo, v14);
    sub_1B761C0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v15);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent_EndOpen__, v16);
    sub_1B761C0(&int_TypeInfo, v17);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject___ctor__, v18);
    sub_1B761C0(&System_Collections_Generic_List_GameObject__TypeInfo, v19);
    sub_1B761C0(&LocalizationManager_TypeInfo, v20);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B761C0(&StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, v22);
    sub_1B761C0(&StringLiteral_10971/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, v23);
    sub_1B761C0(&StringLiteral_20191/*"icon_{0}"*/, v24);
    sub_1B761C0(&StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, v25);
    sub_1B761C0(&StringLiteral_10970/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, v26);
    sub_1B761C0(&StringLiteral_3757/*"COMMON_CONFIRM_EXECUTE"*/, v27);
    sub_1B761C0(&StringLiteral_3754/*"COMMON_CONFIRM_CANCEL"*/, v28);
    byte_4A31EE5 = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_1B76164(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventRecipeEntity,
      (int32_t)eventRecipeEntity,
      (int32_t)eventRecipeGiftEntities,
      (int32_t)onDecide);
    this->fields.onDecide = onDecide;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v30, v31);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_1B76164(
      (ServantStatusBattleListViewItem_o *)&this->fields.boxOverDlgCloseCallBack,
      (int32_t)boxOverDlgCallBack,
      v32,
      v33);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.presentBoxOverDlg, (int32_t)boxOverDlg, v34, v35);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_1B76164(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventRecipeGiftList,
      (int32_t)eventRecipeGiftEntities,
      v36,
      v37);
    v38 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v38,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v38;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.rewardItemObjList, (int32_t)v38, v39, v40);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v44, v45, v46);
    v50 = System_String__Format((System_String_o *)StringLiteral_20191/*"icon_{0}"*/, v49, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37679488(eventId, eventItemIcon, v50, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_1B76164(
      (ServantStatusBattleListViewItem_o *)&this->fields.exchangeOriginItemList,
      (int32_t)SortedEntityList,
      v54,
      v55);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    v57 = (struct System_Boolean_array *)sub_1B76268(bool___TypeInfo, exchangeOriginItemList->max_length);
    this->fields.isShortage = v57;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.isShortage, (int32_t)v57, v58, v59);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v60);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v61);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v62);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10970/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_22:
      sub_1B7641C(gameObject, v42);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v66);
    this->fields.state = 1;
    v67 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v67, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0LL);
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

  if ( (byte_4A31EE8 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, method);
    sub_1B761C0(&Method_System_Linq_Enumerable_Contains_bool___, v3);
    sub_1B761C0(&LocalizationManager_TypeInfo, v4);
    sub_1B761C0(&StringLiteral_10967/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, v5);
    sub_1B761C0(&StringLiteral_10974/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v6);
    sub_1B761C0(&StringLiteral_10966/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v7);
    sub_1B761C0(&StringLiteral_10969/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v8);
    sub_1B761C0(&StringLiteral_10968/*"RECIPE_CONFIRM_DIALOG_KIND"*/, v9);
    byte_4A31EE8 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10974/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
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
                                    (const MethodInfo_2E7C418 *)Method_System_Linq_Enumerable_Contains_bool___);
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
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10969/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
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
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10968/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
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
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10969/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
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
          sub_1B76424(Name, v12);
        v64 = exchangeOriginCountKinds2->m_Items[v41];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10968/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
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
      sub_1B7641C(Name, v12);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10966/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10968/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_115;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10967/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
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
    sub_1B7641C(v6, v7);
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
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  EventRecipeGiftEntity_o *v33; // x8
  int32_t topIconId; // w20
  bool v35; // zf
  UnityEngine_GameObject_o *v36; // x20
  float v37; // s0
  bool v38; // w1
  __int64 v39; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v40; // [xsp+10h] [xbp-70h]
  unsigned int v41; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v3 = eventRecipeGiftEntities;
  if ( (byte_4A31EE9 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UIGrid___, eventRecipeGiftEntities);
    sub_1B761C0(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A31EE9 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v3 )
    goto LABEL_50;
  v14 = *(_QWORD *)&v3->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    v39 = Instance;
    v40 = v3;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        goto LABEL_51;
      v16 = v3->m_Items[v15];
      if ( !v16 )
        goto LABEL_50;
      v41 = v15;
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
                            (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      v3 = v40;
      if ( !Instance )
        goto LABEL_50;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 448LL));
      v14 = *(_QWORD *)&v40->max_length;
      Instance = v39;
      v15 = v41 + 1;
      if ( (int)(v41 + 1) >= (int)v14 )
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
                            (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_50;
      v22 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_50;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
      v23 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4A28BB1 )
      {
        Instance = sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v13);
        byte_4A28BB1 = 1;
      }
      if ( !v23 )
        goto LABEL_50;
      UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
      if ( !Instance )
        goto LABEL_50;
      v42.fields.x = this->fields.iconScale;
      v42.fields.y = v42.fields.x;
      v42.fields.z = v42.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v42, 0LL);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v22,
                            (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v21 )
        goto LABEL_50;
      v24 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_50;
      v25 = v21->fields.num <= 1 ? -1 : v21->fields.num;
      ItemIconComponent__SetGift_37964100(
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
      v29 = *(_QWORD *)(Instance + 16);
      v30 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v29 )
        goto LABEL_50;
      v31 = *(int *)(Instance + 24);
      if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v22,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * v31;
        *(_DWORD *)(Instance + 24) = v31 + 1;
        *(_QWORD *)(v32 + 32) = v22;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v22, v27, v28);
      }
      v17 = *(_DWORD *)(v18 + 24);
      if ( (int)++v19 >= v17 )
        goto LABEL_33;
    }
LABEL_51:
    sub_1B76424(Instance, v13);
  }
LABEL_36:
  if ( !(_DWORD)v14 )
    goto LABEL_51;
  v33 = v3->m_Items[0];
  if ( !v33 )
    goto LABEL_50;
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  topIconId = v33->fields.topIconId;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v35 = topIconId == 1;
  v36 = (UnityEngine_GameObject_o *)Instance;
  if ( !v35 )
  {
    if ( Instance )
    {
      v38 = 0;
      goto LABEL_49;
    }
LABEL_50:
    sub_1B7641C(Instance, v13);
  }
  Instance = (__int64)this->fields.rewardItemObjList;
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Instance,
                        0,
                        (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  LODWORD(v37) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v36, v37, 0LL);
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  v38 = 1;
LABEL_49:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v38, 0LL);
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

  if ( (byte_4A31EF2 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    byte_4A31EF2 = 1;
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
        sub_1B76424(itemSlider, method);
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
    sub_1B7641C(itemSlider, method);
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

  if ( (byte_4A31EF3 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A31EF3 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B7641C(0LL, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A31EF5 & 1) == 0 )
  {
    sub_1B761C0(&EventRecipeConfirmDialogComponent___c_TypeInfo, v1);
    byte_4A31EF5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A31EF6 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__, v5);
    sub_1B761C0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, v6);
    byte_4A31EF6 = 1;
  }
  v7 = sub_1B7640C(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1B7641C(v8, v9);
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

  if ( (byte_4A31EF7 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__, v5);
    sub_1B761C0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, v6);
    byte_4A31EF7 = 1;
  }
  v7 = sub_1B7640C(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1B7641C(v8, v9);
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

  if ( (byte_4A31EF8 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__, v5);
    sub_1B761C0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, v6);
    byte_4A31EF8 = 1;
  }
  v7 = sub_1B7640C(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B7641C(v8, v9);
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

  if ( (byte_4A31EF9 & 1) == 0 )
  {
    sub_1B761C0(&SceneJumpInfo_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B761C0(&StringLiteral_12580/*"SellServant"*/, v4);
    sub_1B761C0(&StringLiteral_12617/*"ServantCombine"*/, v5);
    byte_4A31EF9 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38409780(v8, (System_String_o *)StringLiteral_12580/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B7641C(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38409692(v8, (System_String_o *)StringLiteral_12617/*"ServantCombine"*/, 0LL);
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

  if ( (byte_4A31EFA & 1) == 0 )
  {
    sub_1B761C0(&SceneJumpInfo_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B761C0(&StringLiteral_12621/*"ServantEquipList"*/, v4);
    sub_1B761C0(&StringLiteral_12580/*"SellServant"*/, v5);
    sub_1B761C0(&StringLiteral_12620/*"ServantEQCombine"*/, v6);
    byte_4A31EFA = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38409780(v9, (System_String_o *)StringLiteral_12580/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B7641C(v10, v11);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38409692(v9, (System_String_o *)StringLiteral_12621/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38409692(v9, (System_String_o *)StringLiteral_12620/*"ServantEQCombine"*/, 0LL);
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

  if ( (byte_4A31EFB & 1) == 0 )
  {
    sub_1B761C0(&SceneJumpInfo_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B761C0(&StringLiteral_12580/*"SellServant"*/, v4);
    byte_4A31EFB = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_38409780(v6, (System_String_o *)StringLiteral_12580/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B7641C(v7, v8);
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
      sub_1B7641C(_4__this, method);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))boxOverDlgCloseCallBack->fields.m_target)(
      boxOverDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&boxOverDlgCloseCallBack->fields.extra_arg);
  }
}