void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3F1D4 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B3F1D4 = 1;
  }
  this->fields.iconScale = 0.65;
  this->fields.possesionRootMovePositionY = -95.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int64_t __fastcall EventRecipeConfirmDialogComponent__CalcPossessionNum(
        EventRecipeConfirmDialogComponent_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t result; // x0
  UserGameEntity_o *SelfUserGame; // x20
  int baseWindow; // w8
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B3F1CA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, gift);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1BDB878(&NetworkManager_TypeInfo, v7);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1BDB878(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v8);
    byte_4B3F1CA = 1;
  }
  if ( !gift )
    goto LABEL_35;
  if ( Gift__IsServant_39448868(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
      {
        LODWORD(result) = UserServantMaster__GetServantHavingCount(
                            (UserServantMaster_o *)this,
                            gift->fields.objectId,
                            0,
                            0LL);
        return (int)result;
      }
    }
    goto LABEL_35;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_35;
  baseWindow = (int)this->fields.baseWindow;
  if ( baseWindow <= 5 )
  {
    if ( baseWindow == 1 )
    {
      if ( !SelfUserGame )
        goto LABEL_35;
      return SelfUserGame->fields.qp;
    }
    if ( baseWindow == 5 )
    {
      if ( !SelfUserGame )
        goto LABEL_35;
      return SelfUserGame->fields.mana;
    }
  }
  else
  {
    if ( baseWindow == 13 )
    {
      if ( SelfUserGame )
      {
        LODWORD(result) = UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
        return (int)result;
      }
LABEL_35:
      sub_1BDBAD4(this, gift);
    }
    if ( baseWindow == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_35;
      return SelfUserGame->fields.rarePri;
    }
  }
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, gift);
    byte_4B3ED56 = 1;
  }
  this = (EventRecipeConfirmDialogComponent_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (EventRecipeConfirmDialogComponent_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                  (UserItemMaster_o *)MasterData_object,
                                                  (int64_t)this->fields.exchangeOriginCountKinds->m_Items[4],
                                                  gift->fields.objectId,
                                                  0LL);
  if ( !this )
    goto LABEL_35;
  return SHIDWORD(this->fields.m_CancellationTokenSource);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__CallBackPresentBoxOverDialog(
        EventRecipeConfirmDialogComponent_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v11; // x20

  if ( (byte_4B3F1D0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isOpenPresentBox);
    sub_1BDB878(
      &Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
      v5);
    sub_1BDB878(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, v6);
    byte_4B3F1D0 = 1;
  }
  v7 = (EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *)sub_1BDBAC4(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  EventRecipeConfirmDialogComponent___c__DisplayClass63_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.isOpenPresentBox = isOpenPresentBox,
        v7->fields.__4__this = this,
        sub_1BDB81C(&v7->fields.__4__this),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1BDBAD4(v8, v9);
  }
  PresentBoxOverDialog__Close_31539752(presentBoxOverDlg, v11, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_String_o *v16; // x20
  BalanceConfig_c *v17; // x8
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v21; // x21
  PresentBoxOverDialog_ClickDelegate_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  struct System_Action_int__o **p_onDecide; // x0
  struct System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B3F1D1 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&result);
    sub_1BDB878(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v5);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__, v6);
    sub_1BDB878(&int_TypeInfo, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_10972/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, v9);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1BDB878(&StringLiteral_1/*""*/, v10);
    byte_4B3F1D1 = 1;
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
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
        v17 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v17->static_fields->PresentBoxMax;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax, v13, v14, v15);
        v19 = System_String__Format(v16, v18, 0LL);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v21 = v19;
        v22 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1BDBAC4(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v22,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v21, v22, 0, 0LL);
          goto LABEL_12;
        }
      }
      else
      {
        p_onDecide = &v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        *p_onDecide = 0LL;
        v23 = sub_1BDB81C(p_onDecide);
        if ( onDecide )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
            onDecide->fields.original_method_info,
            (unsigned int)result,
            *(_QWORD *)&onDecide->fields.extra_arg);
          return;
        }
      }
      sub_1BDBAD4(v23, v24);
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
  __int64 v20; // x2
  signed int max_length; // w8
  unsigned int v22; // w24
  EventRecipeGiftEntity_o *v23; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v25; // x23
  __int64 v26; // x27
  __int64 v27; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  int32_t v31; // w0
  BalanceConfig_c *v32; // x8
  int32_t v33; // w19

  if ( (byte_4B3F1CE & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, giftEnt);
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BDB878(&NetworkManager_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B3F1CE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v14);
    byte_4B3ED56 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___);
  v19 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_37;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        goto LABEL_38;
      v23 = giftEnt->m_Items[v22];
      if ( !v23 )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                    (GiftMaster_o *)MasterData_object,
                                    v23->fields.giftId,
                                    0LL);
      if ( !Instance )
        goto LABEL_37;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      v25 = Instance;
      if ( m_CancellationTokenSource )
      {
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_32:
      max_length = giftEnt->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_33;
    }
    v26 = 0LL;
    while ( (unsigned int)v26 < (unsigned int)m_CancellationTokenSource )
    {
      v27 = *((_QWORD *)&v25->fields._DispLog + v26);
      if ( !v27 || !v19 )
        goto LABEL_37;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    v19,
                                    *(_DWORD *)(v27 + 20),
                                    (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        v14 = *(unsigned int *)(v27 + 20);
        items = v19->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            v14,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size + 1] = v14;
        }
      }
      LODWORD(m_CancellationTokenSource) = v25->fields.m_CancellationTokenSource;
      if ( (int)++v26 >= (int)m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_38:
    sub_1BDBADC(Instance, v14, v20);
  }
LABEL_33:
  if ( !VaildList )
LABEL_37:
    sub_1BDBAD4(Instance, v14);
  v31 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (const MethodInfo_304F690 *)Method_System_Linq_Enumerable_Count_int___);
  v32 = BalanceConfig_TypeInfo;
  v33 = v31;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v33 + VaildList->max_length) > v32->static_fields->PresentBoxMax;
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
  __int64 Instance; // x0
  __int64 v13; // x1
  UserServantMaster_o *v14; // x20
  Il2CppObject *MasterData_object; // x21
  CommonUI_o *v16; // x20
  int32_t v17; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v19; // x22
  Il2CppObject *v20; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0
  CommonUI_o *v22; // x0
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  CommonUI_o *v26; // x20
  int32_t v27; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v29; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v30; // x0
  int32_t Count; // w20
  CommonUI_o *v32; // x21
  BalanceConfig_c *v33; // x8
  Il2CppObject *v34; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v35; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B3F1CF & 1) == 0 )
  {
    sub_1BDB878(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v2);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__, v7);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__, v8);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__, v9);
    sub_1BDB878(&EventRecipeConfirmDialogComponent___c_TypeInfo, v10);
    byte_4B3F1CF = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v14 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v16 = (CommonUI_o *)Instance;
    v17 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 8LL);
    if ( !v19 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v20 = **(Il2CppObject ***)(Instance + 184);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BDBAC4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v20,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0LL);
      static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = v19;
      Instance = sub_1BDB81C(&static_fields->__9__62_0);
    }
    if ( !v16 )
      goto LABEL_45;
    v22 = v16;
    v23 = v17;
    v24 = svtKeep;
    v25 = 0;
    goto LABEL_42;
  }
  Instance = UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v26 = (CommonUI_o *)Instance;
    v27 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 16LL);
    if ( !v19 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v29 = **(Il2CppObject ***)(Instance + 184);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BDBAC4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v29,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v30 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v30->__9__62_1 = v19;
      Instance = sub_1BDB81C(&v30->__9__62_1);
    }
    if ( !v26 )
      goto LABEL_45;
    v25 = 1;
    v22 = v26;
    v23 = v27;
LABEL_41:
    v24 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v22, v23, v24, v25, 1, v19, 3, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1BDBAD4(Instance, v13);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v32 = (CommonUI_o *)Instance;
    if ( !byte_4B3F1D5 )
    {
      sub_1BDB878(&BalanceConfig_TypeInfo, v13);
      byte_4B3F1D5 = 1;
    }
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v33->static_fields->CommandCodeFrameMax;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 24LL);
    if ( !v19 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v34 = **(Il2CppObject ***)(Instance + 184);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BDBAC4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v34,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v35 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v35->__9__62_4 = v19;
      Instance = sub_1BDB81C(&v35->__9__62_4);
    }
    if ( !v32 )
      goto LABEL_45;
    v25 = 2;
    v22 = v32;
    v23 = Count;
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

  if ( (byte_4B3F1CD & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B3F1CD = 1;
  }
  memset(&v12, 0, sizeof(v12));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
  __int64 v7; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v10; // x20
  __int64 v11; // x23
  struct CommonConsumeEntity_array *v12; // x8
  CommonConsumeEntity_o *v13; // x8
  CommonConsumeEntity_o *v14; // x10
  int32_t num; // w9
  int32_t v16; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v18; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3F1C6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B3F1C6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_31:
    sub_1BDBAD4(Instance, v6);
  }
  max = this->fields.max;
  v10 = (UserItemMaster_o *)Instance;
  v11 = 0LL;
  while ( (int)v11 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v6);
      byte_4B3ED56 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v12 = this->fields.exchangeOriginItemList;
    if ( !v12 )
      goto LABEL_31;
    if ( (unsigned int)v11 >= v12->max_length )
      goto LABEL_33;
    v13 = v12->m_Items[v11];
    if ( !v13 || !v10 )
      goto LABEL_31;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  v10,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v13->fields.objectId,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_31;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_31;
      if ( (unsigned int)v11 >= exchangeOriginItemList->max_length )
        goto LABEL_33;
      v14 = exchangeOriginItemList->m_Items[v11];
      if ( !v14 )
        goto LABEL_31;
      num = entity->fields.num;
      v16 = v14->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v16 )
        max = num / v16;
      if ( !isShortage )
        goto LABEL_31;
      if ( (unsigned int)v11 >= isShortage->max_length )
        goto LABEL_33;
      isShortage->m_Items[v11 + 4] = v16 > num;
    }
    else
    {
      v18 = this->fields.isShortage;
      if ( !v18 )
        goto LABEL_31;
      if ( (unsigned int)v11 >= v18->max_length )
LABEL_33:
        sub_1BDBADC(Instance, v6, v7);
      v18->m_Items[v11 + 4] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v11;
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_1BDB81C(&this->fields.eventRecipeEntity);
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

  if ( (byte_4B3F1C7 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, method);
    byte_4B3F1C7 = 1;
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
                                                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1BDBAD4(itemSlider, method);
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

  if ( (byte_4B3F1CC & 1) == 0 )
  {
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__, method);
    byte_4B3F1CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BDBAD4(0LL, v5);
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

  if ( (byte_4B3F1CB & 1) == 0 )
  {
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__, method);
    byte_4B3F1CB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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
  System_Collections_Generic_List_object__o *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  UILabel_o *titleLb; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v39; // x0
  System_String_o *v40; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v50; // x2
  System_Action_o *v51; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B3F1C5 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, eventRecipeEntity);
    sub_1BDB878(&AtlasManager_TypeInfo, v13);
    sub_1BDB878(&bool___TypeInfo, v14);
    sub_1BDB878(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v15);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent_EndOpen__, v16);
    sub_1BDB878(&int_TypeInfo, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject___ctor__, v18);
    sub_1BDB878(&System_Collections_Generic_List_GameObject__TypeInfo, v19);
    sub_1BDB878(&LocalizationManager_TypeInfo, v20);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BDB878(&StringLiteral_10980/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, v22);
    sub_1BDB878(&StringLiteral_10978/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, v23);
    sub_1BDB878(&StringLiteral_20269/*"icon_{0}"*/, v24);
    sub_1BDB878(&StringLiteral_10979/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, v25);
    sub_1BDB878(&StringLiteral_10977/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, v26);
    sub_1BDB878(&StringLiteral_3719/*"COMMON_CONFIRM_EXECUTE"*/, v27);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v28);
    byte_4B3F1C5 = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_1BDB81C(&this->fields.eventRecipeEntity);
    this->fields.onDecide = onDecide;
    sub_1BDB81C(&this->fields.onDecide);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_1BDB81C(&this->fields.boxOverDlgCloseCallBack);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_1BDB81C(&this->fields.presentBoxOverDlg);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_1BDB81C(&this->fields.eventRecipeGiftList);
    v30 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v30;
    sub_1BDB81C(&this->fields.rewardItemObjList);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v34, v35, v36);
    v40 = System_String__Format((System_String_o *)StringLiteral_20269/*"icon_{0}"*/, v39, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39626228(eventId, eventItemIcon, v40, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3719/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    this->fields.exchangeOriginItemList = CommonConsumeMaster__GetSortedEntityList(
                                            (CommonConsumeMaster_o *)gameObject,
                                            eventRecipeEntity->fields.commonConsumeId,
                                            0LL);
    gameObject = (UnityEngine_GameObject_o *)sub_1BDB81C(&this->fields.exchangeOriginItemList);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    this->fields.isShortage = (struct System_Boolean_array *)sub_1BDB920(
                                                               bool___TypeInfo,
                                                               exchangeOriginItemList->max_length);
    sub_1BDB81C(&this->fields.isShortage);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v44);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v45);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v46);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10978/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10977/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_22:
      sub_1BDBAD4(gameObject, v32);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v50);
    this->fields.state = 1;
    v51 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
  __int64 v18; // x2
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v20; // x9
  CommonConsumeEntity_o *v21; // x9
  UISprite_o *v22; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v25; // x9
  UILabel_o *v26; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v28; // x9
  CommonConsumeEntity_o *v29; // x9
  int32_t num; // w9
  UILabel_o *v31; // x20
  int v32; // w8
  struct UILabel_array *v33; // x8
  struct System_Boolean_array *isShortage; // x9
  float v35; // s1
  float v36; // s0
  float v37; // s3
  float v38; // s2
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v40; // x20
  struct CommonConsumeEntity_array *v41; // x8
  il2cpp_array_size_t v42; // w25
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
  float v60; // s1
  float v61; // s0
  float v62; // s3
  float v63; // s2
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

  if ( (byte_4B3F1C8 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_bool___, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_10974/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, v5);
    sub_1BDB878(&StringLiteral_10981/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v6);
    sub_1BDB878(&StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v7);
    sub_1BDB878(&StringLiteral_10976/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v8);
    sub_1BDB878(&StringLiteral_10975/*"RECIPE_CONFIRM_DIALOG_KIND"*/, v9);
    byte_4B3F1C8 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10981/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
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
                                    (const MethodInfo_304C954 *)Method_System_Linq_Enumerable_Contains_bool___);
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
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10976/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_115;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_115;
      if ( v16 >= exchangeOriginItemIcon->max_length )
        goto LABEL_116;
      v20 = this->fields.exchangeOriginItemList;
      if ( !v20 )
        goto LABEL_115;
      if ( v16 >= v20->max_length )
        goto LABEL_116;
      v21 = v20->m_Items[v16];
      if ( !v21 )
        goto LABEL_115;
      v22 = exchangeOriginItemIcon->m_Items[v16];
      objectId = v21->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v22, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_115;
      if ( v16 >= exchangeOriginItemNames->max_length )
        goto LABEL_116;
      v25 = this->fields.exchangeOriginItemList;
      if ( !v25 )
        goto LABEL_115;
      if ( v16 >= v25->max_length )
        goto LABEL_116;
      Name = v25->m_Items[v16];
      if ( !Name )
        goto LABEL_115;
      v26 = exchangeOriginItemNames->m_Items[v16];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
      if ( !v26 )
        goto LABEL_115;
      UILabel__set_text(v26, (System_String_o *)Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_115;
      if ( v16 >= exchangeOriginCounts->max_length )
        goto LABEL_116;
      v28 = this->fields.exchangeOriginItemList;
      if ( !v28 )
        goto LABEL_115;
      if ( v16 >= v28->max_length )
        goto LABEL_116;
      v29 = v28->m_Items[v16];
      if ( !v29 )
        goto LABEL_115;
      num = v29->fields.num;
      v31 = exchangeOriginCounts->m_Items[v16];
      v32 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v32 * num, 0LL);
      if ( !v31 )
        goto LABEL_115;
      UILabel__set_text(v31, (System_String_o *)Name, 0LL);
      v33 = this->fields.exchangeOriginCounts;
      if ( !v33 )
        goto LABEL_115;
      if ( v16 >= v33->max_length )
        goto LABEL_116;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_115;
      if ( v16 >= isShortage->max_length )
        goto LABEL_116;
      Name = (CommonConsumeEntity_o *)v33->m_Items[v16];
      v35 = isShortage->m_Items[v16 + 4] ? 0.0 : 1.0;
      if ( !Name )
        goto LABEL_115;
      v36 = 1.0;
      v37 = 1.0;
      v38 = v35;
      UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v35 - 1), 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_115;
      if ( v16 >= exchangeOriginCountKinds->max_length )
        goto LABEL_116;
      v40 = exchangeOriginCountKinds->m_Items[v16];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10975/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
      if ( !v40 )
        goto LABEL_115;
      UILabel__set_text(v40, (System_String_o *)Name, 0LL);
      v41 = this->fields.exchangeOriginItemList;
      if ( !v41 )
        goto LABEL_115;
      ++v16;
    }
    while ( (signed int)v16 < (signed int)v41->max_length );
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
      v42 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10976/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v42 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_116;
        v45 = this->fields.exchangeOriginItemList;
        if ( !v45 )
          break;
        if ( v42 >= v45->max_length )
          goto LABEL_116;
        v46 = v45->m_Items[v42];
        if ( !v46 )
          break;
        v47 = exchangeOriginItemIcon2->m_Items[v42];
        v48 = v46->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v47, v48, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v42 >= exchangeOriginItemNames2->max_length )
          goto LABEL_116;
        v50 = this->fields.exchangeOriginItemList;
        if ( !v50 )
          break;
        if ( v42 >= v50->max_length )
          goto LABEL_116;
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
          goto LABEL_116;
        v53 = this->fields.exchangeOriginItemList;
        if ( !v53 )
          break;
        if ( v42 >= v53->max_length )
          goto LABEL_116;
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
          goto LABEL_116;
        v59 = this->fields.isShortage;
        if ( !v59 )
          break;
        if ( v42 >= v59->max_length )
          goto LABEL_116;
        Name = (CommonConsumeEntity_o *)v58->m_Items[v42];
        v60 = v59->m_Items[v42 + 4] ? 0.0 : 1.0;
        if ( !Name )
          break;
        v61 = 1.0;
        v62 = 1.0;
        v63 = v60;
        UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v60 - 1), 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v42 >= exchangeOriginCountKinds2->max_length )
LABEL_116:
          sub_1BDBADC(Name, v12, v18);
        v65 = exchangeOriginCountKinds2->m_Items[v42];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10975/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
        if ( !v65 )
          break;
        UILabel__set_text(v65, (System_String_o *)Name, 0LL);
        v66 = this->fields.exchangeOriginItemList;
        if ( !v66 )
          break;
        if ( (signed int)++v42 >= (signed int)v66->max_length )
          goto LABEL_96;
      }
LABEL_115:
      sub_1BDBAD4(Name, v12);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v71 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v71, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10975/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_115;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10974/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0LL);
  v75 = this->fields.eventRecipeEntity;
  if ( !v75 )
    goto LABEL_115;
  v76 = this->fields.makeCount;
  eventPointNum = v75->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v76 <= 1 )
    v76 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v76 * eventPointNum, 0LL);
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
  int64_t v6; // x0
  __int64 v7; // x1

  v6 = EventRecipeConfirmDialogComponent__CalcPossessionNum(this, gift, (const MethodInfo *)gift);
  if ( !item )
    sub_1BDBAD4(v6, v7);
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
  __int64 v14; // x2
  __int64 v15; // x8
  unsigned int v16; // w9
  EventRecipeGiftEntity_o *v17; // x8
  int v18; // w8
  __int64 v19; // x23
  unsigned int v20; // w28
  Il2CppObject *rewardItemIcon; // x24
  GiftEntity_o *v22; // x25
  UnityEngine_GameObject_o *v23; // x24
  UnityEngine_Transform_o *v24; // x26
  ItemIconComponent_o *v25; // x26
  int32_t v26; // w3
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  EventRecipeGiftEntity_o *v32; // x8
  int32_t topIconId; // w20
  bool v34; // zf
  UnityEngine_GameObject_o *v35; // x20
  float v36; // s0
  bool v37; // w1
  __int64 v38; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v39; // [xsp+10h] [xbp-70h]
  unsigned int v40; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v3 = eventRecipeGiftEntities;
  if ( (byte_4B3F1C9 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIGrid___, eventRecipeGiftEntities);
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B3F1C9 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v3 )
    goto LABEL_50;
  v15 = *(_QWORD *)&v3->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0;
    v38 = Instance;
    v39 = v3;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        goto LABEL_51;
      v17 = v3->m_Items[v16];
      if ( !v17 )
        goto LABEL_50;
      v40 = v16;
      if ( !Instance )
        goto LABEL_50;
      Instance = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v17->fields.giftId, 0LL);
      if ( !Instance )
        goto LABEL_50;
      v18 = *(_DWORD *)(Instance + 24);
      v19 = Instance;
      if ( v18 >= 1 )
        break;
LABEL_33:
      Instance = (__int64)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_50;
      Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      v3 = v39;
      if ( !Instance )
        goto LABEL_50;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 448LL));
      v15 = *(_QWORD *)&v39->max_length;
      Instance = v38;
      v16 = v40 + 1;
      if ( (int)(v40 + 1) >= (int)v15 )
        goto LABEL_36;
    }
    v20 = 0;
    while ( v20 < v18 )
    {
      rewardItemIcon = (Il2CppObject *)this->fields.rewardItemIcon;
      v22 = *(GiftEntity_o **)(v19 + 8LL * (int)v20 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            rewardItemIcon,
                            (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_50;
      v23 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_50;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v23, 0LL);
      v24 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4B3E911 )
      {
        Instance = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v13);
        byte_4B3E911 = 1;
      }
      if ( !v24 )
        goto LABEL_50;
      UnityEngine_Transform__set_localPosition(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v23, 0LL);
      if ( !Instance )
        goto LABEL_50;
      v41.fields.x = this->fields.iconScale;
      v41.fields.y = v41.fields.x;
      v41.fields.z = v41.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v41, 0LL);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v23,
                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v22 )
        goto LABEL_50;
      v25 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_50;
      v26 = v22->fields.num <= 1 ? -1 : v22->fields.num;
      ItemIconComponent__SetGift_39935088(
        (ItemIconComponent_o *)Instance,
        v22->fields.type,
        v22->fields.objectId,
        v26,
        0,
        0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v25, v22, v27);
      UnityEngine_GameObject__SetActive(v23, 1, 0LL);
      Instance = (__int64)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_50;
      v28 = *(_QWORD *)(Instance + 16);
      v29 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v28 )
        goto LABEL_50;
      v30 = *(int *)(Instance + 24);
      if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v23,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = v28 + 8 * v30;
        *(_DWORD *)(Instance + 24) = v30 + 1;
        *(_QWORD *)(v31 + 32) = v23;
        Instance = sub_1BDB81C(v31 + 32);
      }
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v20 >= v18 )
        goto LABEL_33;
    }
LABEL_51:
    sub_1BDBADC(Instance, v13, v14);
  }
LABEL_36:
  if ( !(_DWORD)v15 )
    goto LABEL_51;
  v32 = v3->m_Items[0];
  if ( !v32 )
    goto LABEL_50;
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  topIconId = v32->fields.topIconId;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v34 = topIconId == 1;
  v35 = (UnityEngine_GameObject_o *)Instance;
  if ( !v34 )
  {
    if ( Instance )
    {
      v37 = 0;
      goto LABEL_49;
    }
LABEL_50:
    sub_1BDBAD4(Instance, v13);
  }
  Instance = (__int64)this->fields.rewardItemObjList;
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Instance,
                        0,
                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  LODWORD(v36) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v35, v36, 0LL);
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  v37 = 1;
LABEL_49:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v37, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  __int64 v4; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v6; // x9
  unsigned int v7; // w22
  struct UILabel_array *exchangeOriginCounts; // x10
  CommonConsumeEntity_o *v9; // x8
  UILabel_o *v10; // x20
  int32_t num; // w23
  int32_t makeCount; // w24
  unsigned int v13; // w22
  struct UILabel_array *exchangeOriginCounts2; // x10
  CommonConsumeEntity_o *v15; // x8
  UILabel_o *v16; // x20
  int32_t v17; // w23
  int32_t v18; // w24
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v20; // x21
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v22; // w9
  UILabel_o *exchangeDestinationPointCount; // x19

  if ( (byte_4B3F1D2 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    byte_4B3F1D2 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_34;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  this->fields.makeCount = (int)itemSlider;
  if ( !exchangeOriginItemList )
    goto LABEL_34;
  v6 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v6 == 3 )
  {
    v7 = 0;
    while ( 1 )
    {
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_34;
      if ( v7 >= exchangeOriginCounts->max_length || v7 >= (unsigned int)v6 )
        goto LABEL_35;
      v9 = exchangeOriginItemList->m_Items[v7];
      if ( !v9 )
        goto LABEL_34;
      v10 = exchangeOriginCounts->m_Items[v7];
      num = v9->fields.num;
      makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(makeCount * num, 0LL);
      if ( !v10 )
        goto LABEL_34;
      UILabel__set_text(v10, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_34;
      LODWORD(v6) = exchangeOriginItemList->max_length;
      if ( (int)++v7 >= (int)v6 )
        goto LABEL_28;
    }
  }
  if ( (int)v6 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        break;
      if ( v13 >= exchangeOriginCounts2->max_length || v13 >= (unsigned int)v6 )
LABEL_35:
        sub_1BDBADC(itemSlider, method, v4);
      v15 = exchangeOriginItemList->m_Items[v13];
      if ( !v15 )
        break;
      v16 = exchangeOriginCounts2->m_Items[v13];
      v17 = v15->fields.num;
      v18 = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v18 * v17, 0LL);
      if ( !v16 )
        break;
      UILabel__set_text(v16, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        break;
      LODWORD(v6) = exchangeOriginItemList->max_length;
      if ( (int)++v13 >= (int)v6 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1BDBAD4(itemSlider, method);
  }
LABEL_28:
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v20 = this->fields.makeCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v20, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_34;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)itemSlider, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_34;
  v22 = this->fields.makeCount;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(
                                         v22 * eventRecipeEntity->fields.eventPointNum,
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

  if ( (byte_4B3F1D3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F1D3 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
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

  if ( (byte_4B3F1D6 & 1) == 0 )
  {
    sub_1BDB878(&EventRecipeConfirmDialogComponent___c_TypeInfo, v1);
    byte_4B3F1D6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v2;
  sub_1BDB81C(EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields);
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

  if ( (byte_4B3F1D7 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__, v5);
    sub_1BDB878(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, v6);
    byte_4B3F1D7 = 1;
  }
  v7 = sub_1BDBAC4(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1BDBAD4(v8, v9);
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

  if ( (byte_4B3F1D8 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__, v5);
    sub_1BDB878(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, v6);
    byte_4B3F1D8 = 1;
  }
  v7 = sub_1BDBAC4(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1BDBAD4(v8, v9);
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

  if ( (byte_4B3F1D9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__, v5);
    sub_1BDB878(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, v6);
    byte_4B3F1D9 = 1;
  }
  v7 = sub_1BDBAC4(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1BDBAD4(v8, v9);
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

  if ( (byte_4B3F1DA & 1) == 0 )
  {
    sub_1BDB878(&SceneJumpInfo_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BDB878(&StringLiteral_12651/*"SellServant"*/, v4);
    sub_1BDB878(&StringLiteral_12687/*"ServantCombine"*/, v5);
    byte_4B3F1DA = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40482296(v8, (System_String_o *)StringLiteral_12651/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BDBAD4(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40482208(v8, (System_String_o *)StringLiteral_12687/*"ServantCombine"*/, 0LL);
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

  if ( (byte_4B3F1DB & 1) == 0 )
  {
    sub_1BDB878(&SceneJumpInfo_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BDB878(&StringLiteral_12691/*"ServantEquipList"*/, v4);
    sub_1BDB878(&StringLiteral_12651/*"SellServant"*/, v5);
    sub_1BDB878(&StringLiteral_12690/*"ServantEQCombine"*/, v6);
    byte_4B3F1DB = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40482296(v9, (System_String_o *)StringLiteral_12651/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1BDBAD4(v10, v11);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40482208(v9, (System_String_o *)StringLiteral_12691/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40482208(v9, (System_String_o *)StringLiteral_12690/*"ServantEQCombine"*/, 0LL);
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

  if ( (byte_4B3F1DC & 1) == 0 )
  {
    sub_1BDB878(&SceneJumpInfo_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BDB878(&StringLiteral_12651/*"SellServant"*/, v4);
    byte_4B3F1DC = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_40482296(v6, (System_String_o *)StringLiteral_12651/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1BDBAD4(v7, v8);
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
      || (EventRecipeConfirmDialogComponent__Close(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL)
      || (boxOverDlgCloseCallBack = v4->fields.boxOverDlgCloseCallBack) == 0LL )
    {
      sub_1BDBAD4(_4__this, method);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))boxOverDlgCloseCallBack->fields.m_target)(
      boxOverDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&boxOverDlgCloseCallBack->fields.extra_arg);
  }
}