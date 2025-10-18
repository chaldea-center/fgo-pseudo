void EventRecipeConfirmDialogComponent___ctor(EventRecipeConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3D5AC & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3D5AC = 1;
  }
  this->fields.iconScale = 0.65;
  this->fields.possesionRootMovePositionY = -95.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int64_t EventRecipeConfirmDialogComponent__CalcPossessionNum(
        EventRecipeConfirmDialogComponent_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  int64_t result; // x0
  UserGameEntity_o *SelfUserGame; // x20
  int baseWindow; // w8
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C3D5A2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D5A2 = 1;
  }
  if ( !gift )
    goto LABEL_35;
  if ( Gift__IsServant_40427180(gift->fields.type, 0) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
      {
        LODWORD(result) = UserServantMaster__GetServantHavingCount(
                            (UserServantMaster_o *)this,
                            gift->fields.objectId,
                            0,
                            0);
        return (int)result;
      }
    }
    goto LABEL_35;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
        LODWORD(result) = UserGameEntity__GetFriendPoint(SelfUserGame, 0);
        return (int)result;
      }
LABEL_35:
      sub_1C372B4(this);
    }
    if ( baseWindow == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_35;
      return SelfUserGame->fields.rarePri;
    }
  }
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
                                                  0);
  if ( !this )
    goto LABEL_35;
  return SHIDWORD(this->fields.m_CancellationTokenSource);
}


void EventRecipeConfirmDialogComponent__CallBackPresentBoxOverDialog(
        EventRecipeConfirmDialogComponent_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v8; // x20

  if ( (byte_4C3D5A8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__);
    sub_1C37058(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
    byte_4C3D5A8 = 1;
  }
  v5 = sub_1C372A4(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isOpenPresentBox,
        *(_QWORD *)(v5 + 24) = this,
        sub_1C36FFC(v5 + 24, this),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v5,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0),
        !presentBoxOverDlg) )
  {
    sub_1C372B4(v6);
  }
  PresentBoxOverDialog__Close_32362560(presentBoxOverDlg, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRecipeConfirmDialogComponent__CallOnDecide(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  EventRecipeConfirmDialogComponent_o *v4; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  System_String_o *v13; // x20
  BalanceConfig_c *v14; // x8
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v18; // x21
  PresentBoxOverDialog_ClickDelegate_o *v19; // x22
  __int64 v20; // x0
  struct System_Action_int__o **p_onDecide; // x0
  struct System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C3D5A9 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10976/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D5A9 = 1;
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
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10976/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0);
        v14 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v14 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v14->static_fields->PresentBoxMax;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax, v7, v8, v9, v10, v11, v12);
        v16 = System_String__Format(v13, v15, 0);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v18 = v16;
        v19 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1C372A4(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v19,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v18, v19, 0, 0);
          goto LABEL_12;
        }
      }
      else
      {
        p_onDecide = &v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        *p_onDecide = 0;
        v20 = sub_1C36FFC(p_onDecide, 0);
        if ( onDecide )
        {
          ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
            onDecide->fields.method_code,
            (unsigned int)result,
            onDecide->fields.method);
          return;
        }
      }
      sub_1C372B4(v20);
    }
LABEL_12:
    v4->fields.state = 2;
  }
}


bool EventRecipeConfirmDialogComponent__CheckOverCapacity(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *giftEnt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  DataManager_o *Instance; // x0
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v8; // x21
  int max_length; // w8
  unsigned int v10; // w24
  EventRecipeGiftEntity_o *v11; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v13; // x23
  __int64 v14; // x27
  __int64 v15; // x29
  int32_t v16; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int32_t v20; // w0
  BalanceConfig_c *v21; // x8
  int32_t v22; // w19

  if ( (byte_4C3D5A6 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D5A6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
                0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_37;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        goto LABEL_38;
      v11 = giftEnt->m_Items[v10];
      if ( !v11 )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v11->fields.giftId, 0);
      if ( !Instance )
        goto LABEL_37;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      v13 = Instance;
      if ( m_CancellationTokenSource )
      {
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_32:
      max_length = giftEnt->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_33;
    }
    v14 = 0;
    while ( (unsigned int)v14 < (unsigned int)m_CancellationTokenSource )
    {
      v15 = *((_QWORD *)&v13->fields._DispLog + v14);
      if ( !v15 || !v8 )
        goto LABEL_37;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    v8,
                                    *(_DWORD *)(v15 + 20),
                                    (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        v16 = *(_DWORD *)(v15 + 20);
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v16,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = v16;
        }
      }
      LODWORD(m_CancellationTokenSource) = v13->fields.m_CancellationTokenSource;
      if ( (int)++v14 >= (int)m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_38:
    sub_1C372BC(Instance);
  }
LABEL_33:
  if ( !VaildList )
LABEL_37:
    sub_1C372B4(Instance);
  v20 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
  v21 = BalanceConfig_TypeInfo;
  v22 = v20;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  return v22 + LODWORD(VaildList->max_length) > v21->static_fields->PresentBoxMax;
}


bool EventRecipeConfirmDialogComponent__CheckServant(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  __int64 Instance; // x0
  UserServantMaster_o *v4; // x20
  Il2CppObject *MasterData_object; // x21
  CommonUI_o *v6; // x20
  int32_t v7; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v9; // x22
  Il2CppObject *v10; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0
  CommonUI_o *v12; // x0
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  CommonUI_o *v16; // x20
  int32_t v17; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v19; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v20; // x0
  int32_t Count; // w20
  CommonUI_o *v22; // x21
  BalanceConfig_c *v23; // x8
  Il2CppObject *v24; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v25; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D5A7 & 1) == 0 )
  {
    sub_1C37058(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__);
    sub_1C37058(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4C3D5A7 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v4 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v4, 1, 0) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v6 = (CommonUI_o *)Instance;
    v7 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v9 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 8LL);
    if ( !v9 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v10 = **(Il2CppObject ***)(Instance + 184);
      v9 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C372A4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v9,
        v10,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0);
      static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = v9;
      Instance = sub_1C36FFC(&static_fields->__9__62_0, v9);
    }
    if ( !v6 )
      goto LABEL_45;
    v12 = v6;
    v13 = v7;
    v14 = svtKeep;
    v15 = 0;
    goto LABEL_42;
  }
  Instance = UserServantMaster__CheckEquipAdd(v4, 1, 1, 0);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v16 = (CommonUI_o *)Instance;
    v17 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v9 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 16LL);
    if ( !v9 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v19 = **(Il2CppObject ***)(Instance + 184);
      v9 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C372A4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v9,
        v19,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0);
      v20 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v20->__9__62_1 = v9;
      Instance = sub_1C36FFC(&v20->__9__62_1, v9);
    }
    if ( !v16 )
      goto LABEL_45;
    v15 = 1;
    v12 = v16;
    v13 = v17;
LABEL_41:
    v14 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v12, v13, v14, v15, 1, v9, 3, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
      return 0;
    }
LABEL_45:
    sub_1C372B4(Instance);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v22 = (CommonUI_o *)Instance;
    if ( !byte_4C3D2E4 )
    {
      sub_1C37058(&BalanceConfig_TypeInfo);
      byte_4C3D2E4 = 1;
    }
    v23 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v23->static_fields->CommandCodeFrameMax;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v9 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 24LL);
    if ( !v9 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v24 = **(Il2CppObject ***)(Instance + 184);
      v9 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C372A4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v9,
        v24,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0);
      v25 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v25->__9__62_4 = v9;
      Instance = sub_1C36FFC(&v25->__9__62_4, v9);
    }
    if ( !v22 )
      goto LABEL_45;
    v15 = 2;
    v12 = v22;
    v13 = Count;
    goto LABEL_41;
  }
  return 1;
}


void EventRecipeConfirmDialogComponent__Close(EventRecipeConfirmDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v5; // x20
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3D5A5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D5A5 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v6.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void EventRecipeConfirmDialogComponent__EndOpen(EventRecipeConfirmDialogComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t EventRecipeConfirmDialogComponent__GetItemSliderMax(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v6; // x20
  __int64 v7; // x23
  struct CommonConsumeEntity_array *v8; // x8
  CommonConsumeEntity_o *v9; // x8
  CommonConsumeEntity_o *v10; // x10
  int32_t num; // w9
  int32_t v12; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v14; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3D59E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D59E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0) )
  {
LABEL_31:
    sub_1C372B4(Instance);
  }
  max = this->fields.max;
  v6 = (UserItemMaster_o *)Instance;
  v7 = 0;
  while ( (int)v7 < SLODWORD(exchangeOriginItemList->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v8 = this->fields.exchangeOriginItemList;
    if ( !v8 )
      goto LABEL_31;
    if ( (unsigned int)v7 >= LODWORD(v8->max_length) )
      goto LABEL_33;
    v9 = v8->m_Items[v7];
    if ( !v9 || !v6 )
      goto LABEL_31;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  v6,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v9->fields.objectId,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_31;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_31;
      if ( (unsigned int)v7 >= LODWORD(exchangeOriginItemList->max_length) )
        goto LABEL_33;
      v10 = exchangeOriginItemList->m_Items[v7];
      if ( !v10 )
        goto LABEL_31;
      num = entity->fields.num;
      v12 = v10->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v12 )
        max = num / v12;
      if ( !isShortage )
        goto LABEL_31;
      if ( (unsigned int)v7 >= LODWORD(isShortage->max_length) )
        goto LABEL_33;
      isShortage->m_Items[v7] = v12 > num;
    }
    else
    {
      v14 = this->fields.isShortage;
      if ( !v14 )
        goto LABEL_31;
      if ( (unsigned int)v7 >= LODWORD(v14->max_length) )
LABEL_33:
        sub_1C372BC(Instance);
      v14->m_Items[v7] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v7;
    if ( !exchangeOriginItemList )
      goto LABEL_31;
  }
  return max;
}


void EventRecipeConfirmDialogComponent__Init(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0;
  sub_1C36FFC(&this->fields.eventRecipeEntity, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventRecipeConfirmDialogComponent__InitItemSlider(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t makeCount; // w20
  UnityEngine_Component_o *itemSlider; // x0
  int32_t v5; // w1
  bool v6; // w2

  if ( (byte_4C3D59F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4C3D59F = 1;
  }
  makeCount = this->fields.makeCount;
  if ( !makeCount )
  {
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( itemSlider )
    {
      itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
      if ( itemSlider )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 0, 0);
        itemSlider = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( itemSlider )
        {
          itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
          if ( itemSlider )
          {
            itemSlider = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)itemSlider,
                                                      (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
            if ( itemSlider )
            {
              ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))itemSlider->klass[1]._1.name)(
                itemSlider,
                0,
                itemSlider->klass[1]._1.namespaze);
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
  itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
  if ( !itemSlider )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_19;
  if ( makeCount != 1 )
  {
    UISliderWithButton__normalMode((UISliderWithButton_o *)itemSlider, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( itemSlider )
    {
      v5 = this->fields.makeCount;
      v6 = 1;
      goto LABEL_18;
    }
LABEL_19:
    sub_1C372B4(itemSlider);
  }
  UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_19;
  v5 = this->fields.makeCount;
  v6 = 0;
LABEL_18:
  UISliderWithButton__init((UISliderWithButton_o *)itemSlider, v5, v6, 1, 0);
}


void EventRecipeConfirmDialogComponent__OnClickCancel(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C3D5A4 & 1) == 0 )
  {
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    byte_4C3D5A4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C372B4(0);
    UISliderWithButton__grayMode(itemSlider, 0);
    EventRecipeConfirmDialogComponent__Close(this, v6);
  }
}


void EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3D5A3 & 1) == 0 )
  {
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    byte_4C3D5A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    EventRecipeConfirmDialogComponent__CallOnDecide(this, this->fields.makeCount, v5);
  }
}


void EventRecipeConfirmDialogComponent__Open(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        System_Action_int__o *onDecide,
        PresentBoxOverDialog_o *boxOverDlg,
        System_Action_o *boxOverDlgCallBack,
        const MethodInfo *method)
{
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x25
  System_Collections_Generic_List_object__o *v14; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLb; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v25; // x0
  System_String_o *v26; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v31; // x0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v38; // x2
  System_Action_o *v39; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3D59D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&bool___TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent_EndOpen__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_10984/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/);
    sub_1C37058(&StringLiteral_10982/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/);
    sub_1C37058(&StringLiteral_20252/*"icon_{0}"*/);
    sub_1C37058(&StringLiteral_10983/*"RECIPE_CONFIRM_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_10981/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/);
    sub_1C37058(&StringLiteral_3687/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C3D59D = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_1C36FFC(&this->fields.eventRecipeEntity, eventRecipeEntity);
    this->fields.onDecide = onDecide;
    sub_1C36FFC(&this->fields.onDecide, onDecide);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_1C36FFC(&this->fields.boxOverDlgCloseCallBack, boxOverDlgCallBack);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_1C36FFC(&this->fields.presentBoxOverDlg, boxOverDlg);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_1C36FFC(&this->fields.eventRecipeGiftList, eventRecipeGiftEntities);
    v14 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v14;
    sub_1C36FFC(&this->fields.rewardItemObjList, v14);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10983/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !*p_eventRecipeEntity )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               (System_String_o *)gameObject,
                                               (Il2CppObject *)(*p_eventRecipeEntity)->fields.name,
                                               0);
    if ( !titleLb )
      goto LABEL_22;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
    if ( !eventRecipeEntity )
      goto LABEL_22;
    eventId = this->fields.eventId;
    eventItemIcon = this->fields.eventItemIcon;
    iconId = eventRecipeEntity->fields.iconId;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v17, v18, v19, v20, v21, v22);
    v26 = System_String__Format((System_String_o *)StringLiteral_20252/*"icon_{0}"*/, v25, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40606984(eventId, eventItemIcon, v26, 0);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3687/*"COMMON_CONFIRM_EXECUTE"*/, 0);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0);
    this->fields.exchangeOriginItemList = SortedEntityList;
    gameObject = (UnityEngine_GameObject_o *)sub_1C36FFC(&this->fields.exchangeOriginItemList, SortedEntityList);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    v31 = (struct System_Boolean_array *)sub_1C37100(bool___TypeInfo, LODWORD(exchangeOriginItemList->max_length));
    this->fields.isShortage = v31;
    sub_1C36FFC(&this->fields.isShortage, v31);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v32);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v33);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v34);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10982/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10981/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10984/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0),
          !topLabel) )
    {
LABEL_22:
      sub_1C372B4(gameObject);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v38);
    this->fields.state = 1;
    v39 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
  }
}


void EventRecipeConfirmDialogComponent__SerializeFieldNotNullCheck(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventRecipeConfirmDialogComponent__SetExchangeBase(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *warningLb; // x20
  CommonConsumeEntity_o *Name; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned int v8; // w25
  UILabel_o *exchangeOriginLb; // x20
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v11; // x9
  CommonConsumeEntity_o *v12; // x9
  UISprite_o *v13; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v16; // x9
  UILabel_o *v17; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v19; // x9
  CommonConsumeEntity_o *v20; // x9
  int32_t num; // w9
  UILabel_o *v22; // x20
  int v23; // w8
  struct UILabel_array *v24; // x8
  struct System_Boolean_array *isShortage; // x9
  float v26; // s1 OVERLAPPED
  float v27; // s0
  float v28; // s3
  float v29; // s2
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v31; // x20
  struct CommonConsumeEntity_array *v32; // x8
  unsigned int v33; // w25
  UILabel_o *exchangeOriginLb2; // x20
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v36; // x9
  CommonConsumeEntity_o *v37; // x9
  UISprite_o *v38; // x20
  int32_t v39; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v41; // x9
  UILabel_o *v42; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v44; // x9
  CommonConsumeEntity_o *v45; // x9
  int32_t v46; // w9
  UILabel_o *v47; // x20
  int v48; // w8
  struct UILabel_array *v49; // x8
  struct System_Boolean_array *v50; // x9
  float v51; // s1 OVERLAPPED
  float v52; // s0
  float v53; // s3
  float v54; // s2
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v56; // x20
  struct CommonConsumeEntity_array *v57; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v62; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v66; // x8
  int32_t v67; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19

  if ( (byte_4C3D5A0 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_bool___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10978/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/);
    sub_1C37058(&StringLiteral_10985/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_10977/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    sub_1C37058(&StringLiteral_10980/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C37058(&StringLiteral_10979/*"RECIPE_CONFIRM_DIALOG_KIND"*/);
    byte_4C3D5A0 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10985/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0);
  if ( !warningLb )
    goto LABEL_115;
  UILabel__set_text(warningLb, (System_String_o *)Name, 0);
  Name = (CommonConsumeEntity_o *)this->fields.warningLb;
  if ( !Name )
    goto LABEL_115;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Name, 0);
  Name = (CommonConsumeEntity_o *)System_Linq_Enumerable__Contains_bool_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.isShortage,
                                    1,
                                    (const MethodInfo_3104B0C *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_115;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_115;
  max_length = exchangeOriginItemList->max_length;
  if ( (_DWORD)max_length == 3 )
  {
    v8 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
      if ( !exchangeOriginLb )
        goto LABEL_115;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_115;
      if ( v8 >= LODWORD(exchangeOriginItemIcon->max_length) )
        goto LABEL_116;
      v11 = this->fields.exchangeOriginItemList;
      if ( !v11 )
        goto LABEL_115;
      if ( v8 >= LODWORD(v11->max_length) )
        goto LABEL_116;
      v12 = v11->m_Items[v8];
      if ( !v12 )
        goto LABEL_115;
      v13 = exchangeOriginItemIcon->m_Items[v8];
      objectId = v12->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v13, objectId, 0);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_115;
      if ( v8 >= LODWORD(exchangeOriginItemNames->max_length) )
        goto LABEL_116;
      v16 = this->fields.exchangeOriginItemList;
      if ( !v16 )
        goto LABEL_115;
      if ( v8 >= LODWORD(v16->max_length) )
        goto LABEL_116;
      Name = v16->m_Items[v8];
      if ( !Name )
        goto LABEL_115;
      v17 = exchangeOriginItemNames->m_Items[v8];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0);
      if ( !v17 )
        goto LABEL_115;
      UILabel__set_text(v17, (System_String_o *)Name, 0);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_115;
      if ( v8 >= LODWORD(exchangeOriginCounts->max_length) )
        goto LABEL_116;
      v19 = this->fields.exchangeOriginItemList;
      if ( !v19 )
        goto LABEL_115;
      if ( v8 >= LODWORD(v19->max_length) )
        goto LABEL_116;
      v20 = v19->m_Items[v8];
      if ( !v20 )
        goto LABEL_115;
      num = v20->fields.num;
      v22 = exchangeOriginCounts->m_Items[v8];
      v23 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v23 * num, 0);
      if ( !v22 )
        goto LABEL_115;
      UILabel__set_text(v22, (System_String_o *)Name, 0);
      v24 = this->fields.exchangeOriginCounts;
      if ( !v24 )
        goto LABEL_115;
      if ( v8 >= LODWORD(v24->max_length) )
        goto LABEL_116;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_115;
      if ( v8 >= LODWORD(isShortage->max_length) )
        goto LABEL_116;
      Name = (CommonConsumeEntity_o *)v24->m_Items[v8];
      v26 = isShortage->m_Items[v8] ? 0.0 : 1.0;
      if ( !Name )
        goto LABEL_115;
      v27 = 1.0;
      v28 = 1.0;
      v29 = v26;
      UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v26 - 1), 0);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_115;
      if ( v8 >= LODWORD(exchangeOriginCountKinds->max_length) )
        goto LABEL_116;
      v31 = exchangeOriginCountKinds->m_Items[v8];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
      if ( !v31 )
        goto LABEL_115;
      UILabel__set_text(v31, (System_String_o *)Name, 0);
      v32 = this->fields.exchangeOriginItemList;
      if ( !v32 )
        goto LABEL_115;
      ++v8;
    }
    while ( (signed int)v8 < SLODWORD(v32->max_length) );
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject;
    if ( !Name )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0);
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject2;
    if ( !Name )
      goto LABEL_115;
  }
  else
  {
    if ( (int)max_length >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v33 >= LODWORD(exchangeOriginItemIcon2->max_length) )
          goto LABEL_116;
        v36 = this->fields.exchangeOriginItemList;
        if ( !v36 )
          break;
        if ( v33 >= LODWORD(v36->max_length) )
          goto LABEL_116;
        v37 = v36->m_Items[v33];
        if ( !v37 )
          break;
        v38 = exchangeOriginItemIcon2->m_Items[v33];
        v39 = v37->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v38, v39, 0);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v33 >= LODWORD(exchangeOriginItemNames2->max_length) )
          goto LABEL_116;
        v41 = this->fields.exchangeOriginItemList;
        if ( !v41 )
          break;
        if ( v33 >= LODWORD(v41->max_length) )
          goto LABEL_116;
        Name = v41->m_Items[v33];
        if ( !Name )
          break;
        v42 = exchangeOriginItemNames2->m_Items[v33];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0);
        if ( !v42 )
          break;
        UILabel__set_text(v42, (System_String_o *)Name, 0);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v33 >= LODWORD(exchangeOriginCounts2->max_length) )
          goto LABEL_116;
        v44 = this->fields.exchangeOriginItemList;
        if ( !v44 )
          break;
        if ( v33 >= LODWORD(v44->max_length) )
          goto LABEL_116;
        v45 = v44->m_Items[v33];
        if ( !v45 )
          break;
        v46 = v45->fields.num;
        v47 = exchangeOriginCounts2->m_Items[v33];
        v48 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v48 * v46, 0);
        if ( !v47 )
          break;
        UILabel__set_text(v47, (System_String_o *)Name, 0);
        v49 = this->fields.exchangeOriginCounts2;
        if ( !v49 )
          break;
        if ( v33 >= LODWORD(v49->max_length) )
          goto LABEL_116;
        v50 = this->fields.isShortage;
        if ( !v50 )
          break;
        if ( v33 >= LODWORD(v50->max_length) )
          goto LABEL_116;
        Name = (CommonConsumeEntity_o *)v49->m_Items[v33];
        v51 = v50->m_Items[v33] ? 0.0 : 1.0;
        if ( !Name )
          break;
        v52 = 1.0;
        v53 = 1.0;
        v54 = v51;
        UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v51 - 1), 0);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v33 >= LODWORD(exchangeOriginCountKinds2->max_length) )
LABEL_116:
          sub_1C372BC(Name);
        v56 = exchangeOriginCountKinds2->m_Items[v33];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
        if ( !v56 )
          break;
        UILabel__set_text(v56, (System_String_o *)Name, 0);
        v57 = this->fields.exchangeOriginItemList;
        if ( !v57 )
          break;
        if ( (signed int)++v33 >= SLODWORD(v57->max_length) )
          goto LABEL_96;
      }
LABEL_115:
      sub_1C372B4(Name);
    }
LABEL_96:
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject2;
    if ( !Name )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0);
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject;
    if ( !Name )
      goto LABEL_115;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0);
  exchangeDestinationLb = this->fields.exchangeDestinationLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10977/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v62 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v62, 0);
  if ( !exchangeDestinationItemCount )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
  if ( !exchangeDestinationCountKind )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_115;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10978/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0);
  if ( !exchangeDestinationPointName )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0);
  v66 = this->fields.eventRecipeEntity;
  if ( !v66 )
    goto LABEL_115;
  v67 = this->fields.makeCount;
  eventPointNum = v66->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v67 <= 1 )
    v67 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v67 * eventPointNum, 0);
  if ( !exchangeDestinationPointCount )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationPointCount, (System_String_o *)Name, 0);
}


void EventRecipeConfirmDialogComponent__SetPossession(
        EventRecipeConfirmDialogComponent_o *this,
        ItemIconComponent_o *item,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  int64_t v6; // x0

  v6 = EventRecipeConfirmDialogComponent__CalcPossessionNum(this, gift, (const MethodInfo *)gift);
  if ( !item )
    sub_1C372B4(v6);
  ItemIconComponent__SetPossessionOneLabel(item, v6, 0);
  ItemIconComponent__SetPossessionRoot(item, this->fields.possesionRootMovePositionY, 0);
}


void EventRecipeConfirmDialogComponent__SetRewardList(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned int v7; // w9
  EventRecipeGiftEntity_o *v8; // x8
  int m_CancellationTokenSource; // w8
  DataManager_o *v10; // x23
  unsigned int v11; // w28
  Il2CppObject *rewardItemIcon; // x24
  GiftEntity_o *v13; // x25
  UnityEngine_GameObject_o *v14; // x24
  UnityEngine_Transform_o *v15; // x26
  ItemIconComponent_o *v16; // x26
  int num; // w8
  const MethodInfo *v18; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8
  EventRecipeGiftEntity_o *v23; // x8
  int32_t topIconId; // w20
  bool v25; // zf
  UnityEngine_GameObject_o *v26; // x20
  float v27; // s0
  bool v28; // w1
  DataManager_o *v29; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v30; // [xsp+10h] [xbp-70h]
  unsigned int v31; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D5A1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D5A1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventRecipeGiftEntities )
    goto LABEL_49;
  max_length = eventRecipeGiftEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v29 = Instance;
    v30 = eventRecipeGiftEntities;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        goto LABEL_50;
      v8 = eventRecipeGiftEntities->m_Items[v7];
      if ( !v8 )
        goto LABEL_49;
      v31 = v7;
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v8->fields.giftId, 0);
      if ( !Instance )
        goto LABEL_49;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      v10 = Instance;
      if ( m_CancellationTokenSource >= 1 )
        break;
LABEL_32:
      Instance = (DataManager_o *)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      eventRecipeGiftEntities = v30;
      if ( !Instance )
        goto LABEL_49;
      ((void (__fastcall *)(DataManager_o *, Il2CppClass *))Instance->klass[1]._1.element_class)(
        Instance,
        Instance->klass[1]._1.castClass);
      max_length = v30->max_length;
      Instance = v29;
      v7 = v31 + 1;
      if ( (int)(v31 + 1) >= (int)max_length )
        goto LABEL_35;
    }
    v11 = 0;
    while ( v11 < m_CancellationTokenSource )
    {
      rewardItemIcon = (Il2CppObject *)this->fields.rewardItemIcon;
      v13 = (GiftEntity_o *)*((_QWORD *)&v10->fields._DispLog + (int)v11);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                    rewardItemIcon,
                                    (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_49;
      v14 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_49;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v14, 0);
      v15 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4C3C921 )
      {
        Instance = (DataManager_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( !v15 )
        goto LABEL_49;
      UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v14, 0);
      if ( !Instance )
        goto LABEL_49;
      v32.fields.x = this->fields.iconScale;
      v32.fields.y = v32.fields.x;
      v32.fields.z = v32.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v32, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v14,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v13 )
        goto LABEL_49;
      v16 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_49;
      num = v13->fields.num;
      if ( num <= 1 )
        num = -1;
      ItemIconComponent__SetGift_40921900(
        (ItemIconComponent_o *)Instance,
        v13->fields.type,
        v13->fields.objectId,
        num,
        0,
        0);
      EventRecipeConfirmDialogComponent__SetPossession(this, v16, v13, v18);
      UnityEngine_GameObject__SetActive(v14, 1, 0);
      Instance = (DataManager_o *)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_49;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v20 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_49;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v14,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = v14;
        Instance = (DataManager_o *)sub_1C36FFC(v22 + 32, v14);
      }
      m_CancellationTokenSource = (int)v10->fields.m_CancellationTokenSource;
      if ( (int)++v11 >= m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_50:
    sub_1C372BC(Instance);
  }
LABEL_35:
  if ( !(_DWORD)max_length )
    goto LABEL_50;
  v23 = eventRecipeGiftEntities->m_Items[0];
  if ( !v23 )
    goto LABEL_49;
  Instance = (DataManager_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_49;
  topIconId = v23->fields.topIconId;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v25 = topIconId == 1;
  v26 = (UnityEngine_GameObject_o *)Instance;
  if ( !v25 )
  {
    if ( Instance )
    {
      v28 = 0;
      goto LABEL_48;
    }
LABEL_49:
    sub_1C372B4(Instance);
  }
  Instance = (DataManager_o *)this->fields.rewardItemObjList;
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                0,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_49;
  LODWORD(v27) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionX(v26, v27, 0);
  Instance = (DataManager_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_49;
  v28 = 1;
LABEL_48:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v28, 0);
}


void EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
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

  if ( (byte_4C3D5AA & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C3D5AA = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_34;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  this->fields.makeCount = (int)itemSlider;
  if ( !exchangeOriginItemList )
    goto LABEL_34;
  max_length = exchangeOriginItemList->max_length;
  if ( (_DWORD)max_length == 3 )
  {
    v6 = 0;
    while ( 1 )
    {
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_34;
      if ( v6 >= LODWORD(exchangeOriginCounts->max_length) || v6 >= (unsigned int)max_length )
        goto LABEL_35;
      v8 = exchangeOriginItemList->m_Items[v6];
      if ( !v8 )
        goto LABEL_34;
      v9 = exchangeOriginCounts->m_Items[v6];
      num = v8->fields.num;
      makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(makeCount * num, 0);
      if ( !v9 )
        goto LABEL_34;
      UILabel__set_text(v9, (System_String_o *)itemSlider, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_34;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      if ( (int)++v6 >= (int)max_length )
        goto LABEL_28;
    }
  }
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        break;
      if ( v12 >= LODWORD(exchangeOriginCounts2->max_length) || v12 >= (unsigned int)max_length )
LABEL_35:
        sub_1C372BC(itemSlider);
      v14 = exchangeOriginItemList->m_Items[v12];
      if ( !v14 )
        break;
      v15 = exchangeOriginCounts2->m_Items[v12];
      v16 = v14->fields.num;
      v17 = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v17 * v16, 0);
      if ( !v15 )
        break;
      UILabel__set_text(v15, (System_String_o *)itemSlider, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        break;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      if ( (int)++v12 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_34:
    sub_1C372B4(itemSlider);
  }
LABEL_28:
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v19 = this->fields.makeCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v19, 0);
  if ( !exchangeDestinationItemCount )
    goto LABEL_34;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)itemSlider, 0);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_34;
  v21 = this->fields.makeCount;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(
                                         v21 * eventRecipeEntity->fields.eventPointNum,
                                         0);
  if ( !exchangeDestinationPointCount )
    goto LABEL_34;
  UILabel__set_text(exchangeDestinationPointCount, (System_String_o *)itemSlider, 0);
}


void EventRecipeConfirmDialogComponent___Close_b__60_0(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventRecipeConfirmDialogComponent__Init(this, this->fields.eventId, v2);
}


UnityEngine_GameObject_o *EventRecipeConfirmDialogComponent__get_closeBtnObject(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3D5AB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D5AB = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C372B4(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


int32_t EventRecipeConfirmDialogComponent__makeCountAtLeast1(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t makeCount,
        const MethodInfo *method)
{
  if ( makeCount <= 1 )
    return 1;
  else
    return makeCount;
}


void EventRecipeConfirmDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3D5AD & 1) == 0 )
  {
    sub_1C37058(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4C3D5AD = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v1;
  sub_1C36FFC(EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields, v1);
}


void EventRecipeConfirmDialogComponent___c___ctor(
        EventRecipeConfirmDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRecipeConfirmDialogComponent___c___CheckServant_b__62_0(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v7; // x21

  if ( (byte_4C3D5AE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__);
    sub_1C37058(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
    byte_4C3D5AE = 1;
  }
  v4 = sub_1C372A4(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0),
        !Instance) )
  {
    sub_1C372B4(v5);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v7, 0);
}


void EventRecipeConfirmDialogComponent___c___CheckServant_b__62_1(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v7; // x21

  if ( (byte_4C3D5AF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__);
    sub_1C37058(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
    byte_4C3D5AF = 1;
  }
  v4 = sub_1C372A4(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0),
        !Instance) )
  {
    sub_1C372B4(v5);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v7, 0);
}


void EventRecipeConfirmDialogComponent___c___CheckServant_b__62_4(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v7; // x21

  if ( (byte_4C3D5B0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__);
    sub_1C37058(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
    byte_4C3D5B0 = 1;
  }
  v4 = sub_1C372A4(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0),
        !Instance) )
  {
    sub_1C372B4(v5);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v7, 0);
}


void EventRecipeConfirmDialogComponent___c__DisplayClass62_0___ctor(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRecipeConfirmDialogComponent___c__DisplayClass62_0___CheckServant_b__2(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  int32_t v7; // w1
  Il2CppObject *v8; // x3

  if ( (byte_4C3D5B1 & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&StringLiteral_12687/*"SellServant"*/);
    sub_1C37058(&StringLiteral_12723/*"ServantCombine"*/);
    byte_4C3D5B1 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41479120(v5, (System_String_o *)StringLiteral_12687/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v7 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C372B4(v6);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v7 = 71;
        v8 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41479032(v5, (System_String_o *)StringLiteral_12723/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v7 = 32;
LABEL_10:
        v6 = Instance;
        v8 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v7, 1, v8, 0);
        return;
      }
      goto LABEL_15;
  }
}


void EventRecipeConfirmDialogComponent___c__DisplayClass62_1___ctor(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRecipeConfirmDialogComponent___c__DisplayClass62_1___CheckServant_b__3(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_1_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  int32_t v7; // w1

  if ( (byte_4C3D5B2 & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&StringLiteral_12727/*"ServantEquipList"*/);
    sub_1C37058(&StringLiteral_12687/*"SellServant"*/);
    sub_1C37058(&StringLiteral_12726/*"ServantEQCombine"*/);
    byte_4C3D5B2 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41479120(v5, (System_String_o *)StringLiteral_12687/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v7 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C372B4(v6);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41479032(v5, (System_String_o *)StringLiteral_12727/*"ServantEquipList"*/, 0);
      if ( Instance )
      {
        v7 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41479032(v5, (System_String_o *)StringLiteral_12726/*"ServantEQCombine"*/, 0);
      if ( Instance )
      {
        v7 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v7, 1, (Il2CppObject *)v5, 0);
        return;
      }
      goto LABEL_14;
  }
}


void EventRecipeConfirmDialogComponent___c__DisplayClass62_2___ctor(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRecipeConfirmDialogComponent___c__DisplayClass62_2___CheckServant_b__5(
        EventRecipeConfirmDialogComponent___c__DisplayClass62_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4C3D5B3 & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&StringLiteral_12687/*"SellServant"*/);
    byte_4C3D5B3 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_41479120(v4, (System_String_o *)StringLiteral_12687/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_1C372B4(v5);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
  }
}


void EventRecipeConfirmDialogComponent___c__DisplayClass63_0___ctor(
        EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRecipeConfirmDialogComponent___c__DisplayClass63_0___CallBackPresentBoxOverDialog_b__0(
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
      || (EventRecipeConfirmDialogComponent__Close(_4__this, method), (v4 = this->fields.__4__this) == 0)
      || (boxOverDlgCloseCallBack = v4->fields.boxOverDlgCloseCallBack) == 0 )
    {
      sub_1C372B4(_4__this);
    }
    ((void (__fastcall *)(intptr_t, intptr_t))boxOverDlgCloseCallBack->fields.invoke_impl)(
      boxOverDlgCloseCallBack->fields.method_code,
      boxOverDlgCloseCallBack->fields.method);
  }
}