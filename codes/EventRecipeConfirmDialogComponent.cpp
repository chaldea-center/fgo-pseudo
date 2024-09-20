void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F14D & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5F14D = 1;
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
  UserGameEntity_o *SelfUserGame; // x20
  int baseWindow; // w8
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5F143 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F143 = 1;
  }
  if ( !gift )
    goto LABEL_30;
  if ( Gift__IsServant_37687840(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
        return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)this, gift->fields.objectId, 0, 0LL);
    }
LABEL_30:
    sub_1B8880C(this, gift);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_30;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
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


void __fastcall EventRecipeConfirmDialogComponent__CallBackPresentBoxOverDialog(
        EventRecipeConfirmDialogComponent_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v11; // x20

  if ( (byte_4A5F149 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__);
    sub_1B885B0(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
    byte_4A5F149 = 1;
  }
  v5 = sub_1B887FC(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isOpenPresentBox,
        *(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1B8880C(v6, v7);
  }
  PresentBoxOverDialog__Close_46144496(presentBoxOverDlg, v11, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_String_o *v12; // x20
  BalanceConfig_c *v13; // x8
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v17; // x21
  PresentBoxOverDialog_ClickDelegate_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  ServantStatusBattleListViewItem_o *p_onDecide; // x0
  struct System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A5F14A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10968/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F14A = 1;
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10968/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
        v13 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v13 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v13->static_fields->PresentBoxMax;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax, v9, v10, v11);
        v15 = System_String__Format(v12, v14, 0LL);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v17 = v15;
        v18 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1B887FC(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v18,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v17, v18, 0, 0LL);
          goto LABEL_12;
        }
      }
      else
      {
        p_onDecide = (ServantStatusBattleListViewItem_o *)&v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_1B88554(p_onDecide, 0, v7, v8);
        if ( onDecide )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
            onDecide->fields.original_method_info,
            (unsigned int)result,
            *(_QWORD *)&onDecide->fields.extra_arg);
          return;
        }
      }
      sub_1B8880C(v19, v20);
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
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v6; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v9; // x21
  signed int max_length; // w8
  unsigned int v11; // w24
  EventRecipeGiftEntity_o *v12; // x8
  __int64 v13; // x8
  int64_t v14; // x23
  __int64 v15; // x27
  __int64 v16; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int32_t v20; // w0
  BalanceConfig_c *v21; // x8
  int32_t v22; // w19

  if ( (byte_4A5F147 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F147 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Master_object, UserId, 0LL);
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
      if ( !MasterData_object )
        goto LABEL_33;
      UserId = (int64_t)GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v12->fields.giftId, 0LL);
      if ( !UserId )
        goto LABEL_33;
      v13 = *(_QWORD *)(UserId + 24);
      v14 = UserId;
      if ( v13 )
      {
        if ( (int)v13 >= 1 )
          break;
      }
LABEL_28:
      max_length = giftEnt->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_29;
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
                 (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (UserId & 1) == 0 )
      {
        v6 = *(unsigned int *)(v16 + 20);
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_33;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            v6,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = v6;
        }
      }
      LODWORD(v13) = *(_DWORD *)(v14 + 24);
      if ( (int)++v15 >= (int)v13 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1B88814(UserId, v6);
  }
LABEL_29:
  if ( !VaildList )
LABEL_33:
    sub_1B8880C(UserId, v6);
  v20 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
  v21 = BalanceConfig_TypeInfo;
  v22 = v20;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v22 + VaildList->max_length) > v21->static_fields->PresentBoxMax;
}


bool __fastcall EventRecipeConfirmDialogComponent__CheckServant(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  void *Instance; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x20
  Il2CppObject *MasterData_object; // x21
  CommonUI_o *v7; // x20
  int32_t v8; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v10; // x22
  Il2CppObject *v11; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  CommonUI_o *v15; // x0
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  CommonUI_o *v19; // x20
  int32_t v20; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v22; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t Count; // w20
  CommonUI_o *v27; // x21
  BalanceConfig_c *v28; // x8
  Il2CppObject *v29; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F148 & 1) == 0 )
  {
    sub_1B885B0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__);
    sub_1B885B0(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4A5F148 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v7 = (CommonUI_o *)Instance;
    v8 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v11 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v11,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0LL);
      static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__62_0, (int32_t)v10, v13, v14);
    }
    if ( !v7 )
      goto LABEL_45;
    v15 = v7;
    v16 = v8;
    v17 = svtKeep;
    v18 = 0;
    goto LABEL_42;
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v5, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v19 = (CommonUI_o *)Instance;
    v20 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v22,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v23 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v23->__9__62_1 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->__9__62_1, (int32_t)v10, v24, v25);
    }
    if ( !v19 )
      goto LABEL_45;
    v18 = 1;
    v15 = v19;
    v16 = v20;
LABEL_41:
    v17 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v15, v16, v17, v18, 1, v10, 3, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1B8880C(Instance, v4);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v27 = (CommonUI_o *)Instance;
    if ( !byte_4A567BB )
    {
      sub_1B885B0(&BalanceConfig_TypeInfo);
      byte_4A567BB = 1;
    }
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v28->static_fields->CommandCodeFrameMax;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v29 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v29,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v30 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v30->__9__62_4 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->__9__62_4, (int32_t)v10, v31, v32);
    }
    if ( !v27 )
      goto LABEL_45;
    v18 = 2;
    v15 = v27;
    v16 = Count;
    goto LABEL_41;
  }
  return 1;
}


void __fastcall EventRecipeConfirmDialogComponent__Close(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v5; // x20
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5F146 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F146 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v6.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
  int max; // w21
  UserItemMaster_o *v7; // x20
  __int64 v8; // x22
  struct CommonConsumeEntity_array *v9; // x8
  CommonConsumeEntity_o *v10; // x8
  CommonConsumeEntity_o *v11; // x10
  int32_t num; // w9
  int32_t v13; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v15; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F13F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F13F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_27:
    sub_1B8880C(Instance, v4);
  }
  max = this->fields.max;
  v7 = (UserItemMaster_o *)Instance;
  v8 = 0LL;
  while ( (int)v8 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v9 = this->fields.exchangeOriginItemList;
    if ( !v9 )
      goto LABEL_27;
    if ( (unsigned int)v8 >= v9->max_length )
      goto LABEL_29;
    v10 = v9->m_Items[v8];
    if ( !v10 || !v7 )
      goto LABEL_27;
    Instance = UserItemMaster__TryGetEntity(v7, &entity, Instance, v10->fields.objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_27;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_27;
      if ( (unsigned int)v8 >= exchangeOriginItemList->max_length )
        goto LABEL_29;
      v11 = exchangeOriginItemList->m_Items[v8];
      if ( !v11 )
        goto LABEL_27;
      num = entity->fields.num;
      v13 = v11->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v13 )
        max = num / v13;
      if ( !isShortage )
        goto LABEL_27;
      if ( (unsigned int)v8 >= isShortage->max_length )
        goto LABEL_29;
      isShortage->m_Items[v8 + 4] = v13 > num;
    }
    else
    {
      v15 = this->fields.isShortage;
      if ( !v15 )
        goto LABEL_27;
      if ( (unsigned int)v8 >= v15->max_length )
LABEL_29:
        sub_1B88814(Instance, v4);
      v15->m_Items[v8 + 4] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v8;
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
    sub_1B8880C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventRecipeEntity, 0, v7, v8);
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

  if ( (byte_4A5F140 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4A5F140 = 1;
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
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1B8880C(itemSlider, method);
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

  if ( (byte_4A5F145 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    byte_4A5F145 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B8880C(0LL, v5);
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

  if ( (byte_4A5F144 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    byte_4A5F144 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x25
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  UILabel_o *titleLb; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v33; // x0
  System_String_o *v34; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v50; // x2
  System_Action_o *v51; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5F13E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent_EndOpen__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10976/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10974/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/);
    sub_1B885B0(&StringLiteral_20198/*"icon_{0}"*/);
    sub_1B885B0(&StringLiteral_10975/*"RECIPE_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_3758/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4A5F13E = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventRecipeEntity,
      (int32_t)eventRecipeEntity,
      (int32_t)eventRecipeGiftEntities,
      (int32_t)onDecide);
    this->fields.onDecide = onDecide;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v14, v15);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.boxOverDlgCloseCallBack,
      (int32_t)boxOverDlgCallBack,
      v16,
      v17);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.presentBoxOverDlg, (int32_t)boxOverDlg, v18, v19);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventRecipeGiftList,
      (int32_t)eventRecipeGiftEntities,
      v20,
      v21);
    v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardItemObjList, (int32_t)v22, v23, v24);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10975/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v28, v29, v30);
    v34 = System_String__Format((System_String_o *)StringLiteral_20198/*"icon_{0}"*/, v33, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(eventId, eventItemIcon, v34, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.exchangeOriginItemList,
      (int32_t)SortedEntityList,
      v38,
      v39);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    v41 = (struct System_Boolean_array *)sub_1B88658(bool___TypeInfo, exchangeOriginItemList->max_length);
    this->fields.isShortage = v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isShortage, (int32_t)v41, v42, v43);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v44);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v45);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v46);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10974/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10976/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_22:
      sub_1B8880C(gameObject, v26);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v50);
    this->fields.state = 1;
    v51 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
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
  il2cpp_array_size_t v9; // w25
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
  float v27; // s1
  float v28; // s0
  float v29; // s3
  float v30; // s2
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v32; // x20
  struct CommonConsumeEntity_array *v33; // x8
  il2cpp_array_size_t v34; // w25
  UILabel_o *exchangeOriginLb2; // x20
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v37; // x9
  CommonConsumeEntity_o *v38; // x9
  UISprite_o *v39; // x20
  int32_t v40; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v42; // x9
  UILabel_o *v43; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v45; // x9
  CommonConsumeEntity_o *v46; // x9
  int32_t v47; // w9
  UILabel_o *v48; // x20
  int v49; // w8
  struct UILabel_array *v50; // x8
  struct System_Boolean_array *v51; // x9
  float v52; // s1
  float v53; // s0
  float v54; // s3
  float v55; // s2
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v57; // x20
  struct CommonConsumeEntity_array *v58; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v63; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v67; // x8
  int32_t v68; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19

  if ( (byte_4A5F141 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_bool___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10970/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/);
    sub_1B885B0(&StringLiteral_10977/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10969/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    sub_1B885B0(&StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1B885B0(&StringLiteral_10971/*"RECIPE_CONFIRM_DIALOG_KIND"*/);
    byte_4A5F141 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10977/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
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
                                    (const MethodInfo_2E99918 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_115;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_115;
  v8 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v8 == 3 )
  {
    v9 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_115;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_115;
      if ( v9 >= exchangeOriginItemIcon->max_length )
        goto LABEL_116;
      v12 = this->fields.exchangeOriginItemList;
      if ( !v12 )
        goto LABEL_115;
      if ( v9 >= v12->max_length )
        goto LABEL_116;
      v13 = v12->m_Items[v9];
      if ( !v13 )
        goto LABEL_115;
      v14 = exchangeOriginItemIcon->m_Items[v9];
      objectId = v13->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v14, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_115;
      if ( v9 >= exchangeOriginItemNames->max_length )
        goto LABEL_116;
      v17 = this->fields.exchangeOriginItemList;
      if ( !v17 )
        goto LABEL_115;
      if ( v9 >= v17->max_length )
        goto LABEL_116;
      Name = v17->m_Items[v9];
      if ( !Name )
        goto LABEL_115;
      v18 = exchangeOriginItemNames->m_Items[v9];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
      if ( !v18 )
        goto LABEL_115;
      UILabel__set_text(v18, (System_String_o *)Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_115;
      if ( v9 >= exchangeOriginCounts->max_length )
        goto LABEL_116;
      v20 = this->fields.exchangeOriginItemList;
      if ( !v20 )
        goto LABEL_115;
      if ( v9 >= v20->max_length )
        goto LABEL_116;
      v21 = v20->m_Items[v9];
      if ( !v21 )
        goto LABEL_115;
      num = v21->fields.num;
      v23 = exchangeOriginCounts->m_Items[v9];
      v24 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v24 * num, 0LL);
      if ( !v23 )
        goto LABEL_115;
      UILabel__set_text(v23, (System_String_o *)Name, 0LL);
      v25 = this->fields.exchangeOriginCounts;
      if ( !v25 )
        goto LABEL_115;
      if ( v9 >= v25->max_length )
        goto LABEL_116;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_115;
      if ( v9 >= isShortage->max_length )
        goto LABEL_116;
      Name = (CommonConsumeEntity_o *)v25->m_Items[v9];
      v27 = isShortage->m_Items[v9 + 4] ? 0.0 : 1.0;
      if ( !Name )
        goto LABEL_115;
      v28 = 1.0;
      v29 = 1.0;
      v30 = v27;
      UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v27 - 1), 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_115;
      if ( v9 >= exchangeOriginCountKinds->max_length )
        goto LABEL_116;
      v32 = exchangeOriginCountKinds->m_Items[v9];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
      if ( !v32 )
        goto LABEL_115;
      UILabel__set_text(v32, (System_String_o *)Name, 0LL);
      v33 = this->fields.exchangeOriginItemList;
      if ( !v33 )
        goto LABEL_115;
      ++v9;
    }
    while ( (signed int)v9 < (signed int)v33->max_length );
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
    if ( (int)v8 >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v34 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_116;
        v37 = this->fields.exchangeOriginItemList;
        if ( !v37 )
          break;
        if ( v34 >= v37->max_length )
          goto LABEL_116;
        v38 = v37->m_Items[v34];
        if ( !v38 )
          break;
        v39 = exchangeOriginItemIcon2->m_Items[v34];
        v40 = v38->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v39, v40, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v34 >= exchangeOriginItemNames2->max_length )
          goto LABEL_116;
        v42 = this->fields.exchangeOriginItemList;
        if ( !v42 )
          break;
        if ( v34 >= v42->max_length )
          goto LABEL_116;
        Name = v42->m_Items[v34];
        if ( !Name )
          break;
        v43 = exchangeOriginItemNames2->m_Items[v34];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
        if ( !v43 )
          break;
        UILabel__set_text(v43, (System_String_o *)Name, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v34 >= exchangeOriginCounts2->max_length )
          goto LABEL_116;
        v45 = this->fields.exchangeOriginItemList;
        if ( !v45 )
          break;
        if ( v34 >= v45->max_length )
          goto LABEL_116;
        v46 = v45->m_Items[v34];
        if ( !v46 )
          break;
        v47 = v46->fields.num;
        v48 = exchangeOriginCounts2->m_Items[v34];
        v49 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v49 * v47, 0LL);
        if ( !v48 )
          break;
        UILabel__set_text(v48, (System_String_o *)Name, 0LL);
        v50 = this->fields.exchangeOriginCounts2;
        if ( !v50 )
          break;
        if ( v34 >= v50->max_length )
          goto LABEL_116;
        v51 = this->fields.isShortage;
        if ( !v51 )
          break;
        if ( v34 >= v51->max_length )
          goto LABEL_116;
        Name = (CommonConsumeEntity_o *)v50->m_Items[v34];
        v52 = v51->m_Items[v34 + 4] ? 0.0 : 1.0;
        if ( !Name )
          break;
        v53 = 1.0;
        v54 = 1.0;
        v55 = v52;
        UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v52 - 1), 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v34 >= exchangeOriginCountKinds2->max_length )
LABEL_116:
          sub_1B88814(Name, v5);
        v57 = exchangeOriginCountKinds2->m_Items[v34];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
        if ( !v57 )
          break;
        UILabel__set_text(v57, (System_String_o *)Name, 0LL);
        v58 = this->fields.exchangeOriginItemList;
        if ( !v58 )
          break;
        if ( (signed int)++v34 >= (signed int)v58->max_length )
          goto LABEL_96;
      }
LABEL_115:
      sub_1B8880C(Name, v5);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10969/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v63 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v63, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_115;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10970/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0LL);
  v67 = this->fields.eventRecipeEntity;
  if ( !v67 )
    goto LABEL_115;
  v68 = this->fields.makeCount;
  eventPointNum = v67->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v68 <= 1 )
    v68 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v68 * eventPointNum, 0LL);
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
    sub_1B8880C(v6, v7);
  ItemIconComponent__SetPossessionOneLabel(item, v6, 0LL);
  ItemIconComponent__SetPossessionRoot(item, this->fields.possesionRootMovePositionY, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SetRewardList(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  unsigned int v8; // w9
  EventRecipeGiftEntity_o *v9; // x8
  int m_CancellationTokenSource; // w8
  DataManager_o *v11; // x23
  unsigned int v12; // w28
  Il2CppObject *rewardItemIcon; // x24
  GiftEntity_o *v14; // x25
  UnityEngine_GameObject_o *v15; // x24
  UnityEngine_Transform_o *v16; // x26
  ItemIconComponent_o *v17; // x26
  int32_t v18; // w3
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8
  EventRecipeGiftEntity_o *v26; // x8
  int32_t topIconId; // w20
  bool v28; // zf
  UnityEngine_GameObject_o *v29; // x20
  float v30; // s0
  bool v31; // w1
  DataManager_o *v32; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v33; // [xsp+10h] [xbp-70h]
  unsigned int v34; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5F142 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F142 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventRecipeGiftEntities )
    goto LABEL_50;
  v7 = *(_QWORD *)&eventRecipeGiftEntities->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0;
    v32 = Instance;
    v33 = eventRecipeGiftEntities;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        goto LABEL_51;
      v9 = eventRecipeGiftEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_50;
      v34 = v8;
      if ( !Instance )
        goto LABEL_50;
      Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v9->fields.giftId, 0LL);
      if ( !Instance )
        goto LABEL_50;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      v11 = Instance;
      if ( m_CancellationTokenSource >= 1 )
        break;
LABEL_33:
      Instance = (DataManager_o *)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_50;
      Instance = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      eventRecipeGiftEntities = v33;
      if ( !Instance )
        goto LABEL_50;
      ((void (__fastcall *)(DataManager_o *, Il2CppClass *))Instance->klass[1]._1.castClass)(
        Instance,
        Instance->klass[1]._1.declaringType);
      v7 = *(_QWORD *)&v33->max_length;
      Instance = v32;
      v8 = v34 + 1;
      if ( (int)(v34 + 1) >= (int)v7 )
        goto LABEL_36;
    }
    v12 = 0;
    while ( v12 < m_CancellationTokenSource )
    {
      rewardItemIcon = (Il2CppObject *)this->fields.rewardItemIcon;
      v14 = (GiftEntity_o *)*((_QWORD *)&v11->fields._DispLog + (int)v12);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                    rewardItemIcon,
                                    (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_50;
      v15 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_50;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
      v16 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4A55CE1 )
      {
        Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v16 )
        goto LABEL_50;
      UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
      if ( !Instance )
        goto LABEL_50;
      v35.fields.x = this->fields.iconScale;
      v35.fields.y = v35.fields.x;
      v35.fields.z = v35.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v35, 0LL);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v15,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v14 )
        goto LABEL_50;
      v17 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_50;
      v18 = v14->fields.num <= 1 ? -1 : v14->fields.num;
      ItemIconComponent__SetGift_38144896(
        (ItemIconComponent_o *)Instance,
        v14->fields.type,
        v14->fields.objectId,
        v18,
        0,
        0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v17, v14, v19);
      UnityEngine_GameObject__SetActive(v15, 1, 0LL);
      Instance = (DataManager_o *)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_50;
      v22 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v22 )
        goto LABEL_50;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = v22 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v15, v20, v21);
      }
      m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
      if ( (int)++v12 >= m_CancellationTokenSource )
        goto LABEL_33;
    }
LABEL_51:
    sub_1B88814(Instance, v6);
  }
LABEL_36:
  if ( !(_DWORD)v7 )
    goto LABEL_51;
  v26 = eventRecipeGiftEntities->m_Items[0];
  if ( !v26 )
    goto LABEL_50;
  Instance = (DataManager_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  topIconId = v26->fields.topIconId;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v28 = topIconId == 1;
  v29 = (UnityEngine_GameObject_o *)Instance;
  if ( !v28 )
  {
    if ( Instance )
    {
      v31 = 0;
      goto LABEL_49;
    }
LABEL_50:
    sub_1B8880C(Instance, v6);
  }
  Instance = (DataManager_o *)this->fields.rewardItemObjList;
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                0,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  LODWORD(v30) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v29, v30, 0LL);
  Instance = (DataManager_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  v31 = 1;
LABEL_49:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v31, 0LL);
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

  if ( (byte_4A5F14B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5F14B = 1;
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
        sub_1B88814(itemSlider, method);
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
    sub_1B8880C(itemSlider, method);
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

  if ( (byte_4A5F14C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F14C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F14E & 1) == 0 )
  {
    sub_1B885B0(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4A5F14E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A5F14F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__);
    sub_1B885B0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
    byte_4A5F14F = 1;
  }
  v4 = sub_1B887FC(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_1(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A5F150 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__);
    sub_1B885B0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
    byte_4A5F150 = 1;
  }
  v4 = sub_1B887FC(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_4(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A5F151 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__);
    sub_1B885B0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
    byte_4A5F151 = 1;
  }
  v4 = sub_1B887FC(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4A5F152 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12623/*"ServantCombine"*/);
    byte_4A5F152 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664432(v5, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B8880C(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12623/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0LL);
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
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4A5F153 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12627/*"ServantEquipList"*/);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12626/*"ServantEQCombine"*/);
    byte_4A5F153 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664432(v5, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B8880C(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12627/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12626/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5F154 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    byte_4A5F154 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_38664432(v4, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B8880C(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0LL);
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
      sub_1B8880C(_4__this, method);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))boxOverDlgCloseCallBack->fields.m_target)(
      boxOverDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&boxOverDlgCloseCallBack->fields.extra_arg);
  }
}