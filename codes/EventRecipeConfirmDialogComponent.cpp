void EventRecipeConfirmDialogComponent___ctor(EventRecipeConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C218F3 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C218F3 = 1;
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

  if ( (byte_4C218E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C218E9 = 1;
  }
  if ( !gift )
    goto LABEL_35;
  if ( Gift__IsServant_40205568(gift->fields.type, 0) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      sub_1C2D6EC(this, gift);
    }
    if ( baseWindow == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_35;
      return SelfUserGame->fields.rarePri;
    }
  }
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  __int64 v7; // x1
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v9; // x20

  if ( (byte_4C218EF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__);
    sub_1C2D490(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
    byte_4C218EF = 1;
  }
  v5 = sub_1C2D6DC(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isOpenPresentBox,
        *(_QWORD *)(v5 + 24) = this,
        sub_1C2D434(v5 + 24),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0),
        !presentBoxOverDlg) )
  {
    sub_1C2D6EC(v6, v7);
  }
  PresentBoxOverDialog__Close_32153496(presentBoxOverDlg, v9, 0);
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
  System_String_o *v10; // x20
  BalanceConfig_c *v11; // x8
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v15; // x21
  PresentBoxOverDialog_ClickDelegate_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Action_int__o **p_onDecide; // x0
  struct System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C218F0 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10969/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C218F0 = 1;
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
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10969/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0);
        v11 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v11 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v11->static_fields->PresentBoxMax;
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax, v7, v8, v9);
        v13 = System_String__Format(v10, v12, 0);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v15 = v13;
        v16 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1C2D6DC(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v16,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v15, v16, 0, 0);
          goto LABEL_12;
        }
      }
      else
      {
        p_onDecide = &v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        *p_onDecide = 0;
        v17 = sub_1C2D434(p_onDecide);
        if ( onDecide )
        {
          ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
            onDecide->fields.method_code,
            (unsigned int)result,
            onDecide->fields.method);
          return;
        }
      }
      sub_1C2D6EC(v17, v18);
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
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  DataManager_o *Instance; // x0
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v9; // x21
  __int64 v10; // x2
  int max_length; // w8
  unsigned int v12; // w24
  EventRecipeGiftEntity_o *v13; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v15; // x23
  __int64 v16; // x27
  __int64 v17; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int32_t v21; // w0
  BalanceConfig_c *v22; // x8
  int32_t v23; // w19

  if ( (byte_4C218ED & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C218ED = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_37;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        goto LABEL_38;
      v13 = giftEnt->m_Items[v12];
      if ( !v13 )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v13->fields.giftId, 0);
      if ( !Instance )
        goto LABEL_37;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      v15 = Instance;
      if ( m_CancellationTokenSource )
      {
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_32:
      max_length = giftEnt->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_33;
    }
    v16 = 0;
    while ( (unsigned int)v16 < (unsigned int)m_CancellationTokenSource )
    {
      v17 = *((_QWORD *)&v15->fields._DispLog + v16);
      if ( !v17 || !v9 )
        goto LABEL_37;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    v9,
                                    *(_DWORD *)(v17 + 20),
                                    (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        v4 = *(unsigned int *)(v17 + 20);
        items = v9->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            v4,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size] = v4;
        }
      }
      LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= (int)m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_38:
    sub_1C2D6F4(Instance, v4, v10);
  }
LABEL_33:
  if ( !VaildList )
LABEL_37:
    sub_1C2D6EC(Instance, v4);
  v21 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
  v22 = BalanceConfig_TypeInfo;
  v23 = v21;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  return v23 + LODWORD(VaildList->max_length) > v22->static_fields->PresentBoxMax;
}


bool EventRecipeConfirmDialogComponent__CheckServant(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  __int64 Instance; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x20
  Il2CppObject *MasterData_object; // x21
  CommonUI_o *v7; // x20
  int32_t v8; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v10; // x22
  Il2CppObject *v11; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0
  CommonUI_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  CommonUI_o *v17; // x20
  int32_t v18; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v20; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v21; // x0
  int32_t Count; // w20
  CommonUI_o *v23; // x21
  BalanceConfig_c *v24; // x8
  Il2CppObject *v25; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v26; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C218EE & 1) == 0 )
  {
    sub_1C2D490(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__);
    sub_1C2D490(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4C218EE = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v7 = (CommonUI_o *)Instance;
    v8 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 8LL);
    if ( !v10 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v11 = **(Il2CppObject ***)(Instance + 184);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v11,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0);
      static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = v10;
      Instance = sub_1C2D434(&static_fields->__9__62_0);
    }
    if ( !v7 )
      goto LABEL_45;
    v13 = v7;
    v14 = v8;
    v15 = svtKeep;
    v16 = 0;
    goto LABEL_42;
  }
  Instance = UserServantMaster__CheckEquipAdd(v5, 1, 1, 0);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v17 = (CommonUI_o *)Instance;
    v18 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 16LL);
    if ( !v10 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v20 = **(Il2CppObject ***)(Instance + 184);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v20,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0);
      v21 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v21->__9__62_1 = v10;
      Instance = sub_1C2D434(&v21->__9__62_1);
    }
    if ( !v17 )
      goto LABEL_45;
    v16 = 1;
    v13 = v17;
    v14 = v18;
LABEL_41:
    v15 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v13, v14, v15, v16, 1, v10, 3, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
      return 0;
    }
LABEL_45:
    sub_1C2D6EC(Instance, v4);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v23 = (CommonUI_o *)Instance;
    if ( !byte_4C2162B )
    {
      sub_1C2D490(&BalanceConfig_TypeInfo);
      byte_4C2162B = 1;
    }
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v24->static_fields->CommandCodeFrameMax;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Instance + 184) + 24LL);
    if ( !v10 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v25 = **(Il2CppObject ***)(Instance + 184);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v25,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0);
      v26 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v26->__9__62_4 = v10;
      Instance = sub_1C2D434(&v26->__9__62_4);
    }
    if ( !v23 )
      goto LABEL_45;
    v16 = 2;
    v13 = v23;
    v14 = Count;
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

  if ( (byte_4C218EC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C218EC = 1;
  }
  memset(&v6, 0, sizeof(v6));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v6.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  __int64 v4; // x1
  __int64 v5; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v8; // x20
  __int64 v9; // x23
  struct CommonConsumeEntity_array *v10; // x8
  CommonConsumeEntity_o *v11; // x8
  CommonConsumeEntity_o *v12; // x10
  int32_t num; // w9
  int32_t v14; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v16; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C218E5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C218E5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0) )
  {
LABEL_31:
    sub_1C2D6EC(Instance, v4);
  }
  max = this->fields.max;
  v8 = (UserItemMaster_o *)Instance;
  v9 = 0;
  while ( (int)v9 < SLODWORD(exchangeOriginItemList->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v10 = this->fields.exchangeOriginItemList;
    if ( !v10 )
      goto LABEL_31;
    if ( (unsigned int)v9 >= LODWORD(v10->max_length) )
      goto LABEL_33;
    v11 = v10->m_Items[v9];
    if ( !v11 || !v8 )
      goto LABEL_31;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  v8,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v11->fields.objectId,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_31;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_31;
      if ( (unsigned int)v9 >= LODWORD(exchangeOriginItemList->max_length) )
        goto LABEL_33;
      v12 = exchangeOriginItemList->m_Items[v9];
      if ( !v12 )
        goto LABEL_31;
      num = entity->fields.num;
      v14 = v12->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v14 )
        max = num / v14;
      if ( !isShortage )
        goto LABEL_31;
      if ( (unsigned int)v9 >= LODWORD(isShortage->max_length) )
        goto LABEL_33;
      isShortage->m_Items[v9] = v14 > num;
    }
    else
    {
      v16 = this->fields.isShortage;
      if ( !v16 )
        goto LABEL_31;
      if ( (unsigned int)v9 >= LODWORD(v16->max_length) )
LABEL_33:
        sub_1C2D6F4(Instance, v4, v5);
      v16->m_Items[v9] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v9;
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
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0;
  sub_1C2D434(&this->fields.eventRecipeEntity);
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

  if ( (byte_4C218E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4C218E6 = 1;
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
                                                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1C2D6EC(itemSlider, method);
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
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C218EB & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    byte_4C218EB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C2D6EC(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    EventRecipeConfirmDialogComponent__Close(this, v7);
  }
}


void EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C218EA & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    byte_4C218EA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  __int64 v16; // x1
  UILabel_o *titleLb; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v34; // x2
  System_Action_o *v35; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C218E4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent_EndOpen__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_10977/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_10975/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/);
    sub_1C2D490(&StringLiteral_20237/*"icon_{0}"*/);
    sub_1C2D490(&StringLiteral_10976/*"RECIPE_CONFIRM_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_10974/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/);
    sub_1C2D490(&StringLiteral_3680/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C218E4 = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_1C2D434(&this->fields.eventRecipeEntity);
    this->fields.onDecide = onDecide;
    sub_1C2D434(&this->fields.onDecide);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_1C2D434(&this->fields.boxOverDlgCloseCallBack);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_1C2D434(&this->fields.presentBoxOverDlg);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_1C2D434(&this->fields.eventRecipeGiftList);
    v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v14;
    sub_1C2D434(&this->fields.rewardItemObjList);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10976/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0);
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
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v18, v19, v20);
    v24 = System_String__Format((System_String_o *)StringLiteral_20237/*"icon_{0}"*/, v23, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40385372(eventId, eventItemIcon, v24, 0);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_EXECUTE"*/, 0);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    this->fields.exchangeOriginItemList = CommonConsumeMaster__GetSortedEntityList(
                                            (CommonConsumeMaster_o *)gameObject,
                                            eventRecipeEntity->fields.commonConsumeId,
                                            0);
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D434(&this->fields.exchangeOriginItemList);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    this->fields.isShortage = (struct System_Boolean_array *)sub_1C2D538(
                                                               bool___TypeInfo,
                                                               LODWORD(exchangeOriginItemList->max_length));
    sub_1C2D434(&this->fields.isShortage);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v28);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v29);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v30);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10975/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10974/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10977/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0),
          !topLabel) )
    {
LABEL_22:
      sub_1C2D6EC(gameObject, v16);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v34);
    this->fields.state = 1;
    v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned int v9; // w25
  UILabel_o *exchangeOriginLb; // x20
  __int64 v11; // x2
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v13; // x9
  CommonConsumeEntity_o *v14; // x9
  UISprite_o *v15; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v18; // x9
  UILabel_o *v19; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v21; // x9
  CommonConsumeEntity_o *v22; // x9
  int32_t num; // w9
  UILabel_o *v24; // x20
  int v25; // w8
  struct UILabel_array *v26; // x8
  struct System_Boolean_array *isShortage; // x9
  float v28; // s1 OVERLAPPED
  float v29; // s0
  float v30; // s3
  float v31; // s2
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v33; // x20
  struct CommonConsumeEntity_array *v34; // x8
  unsigned int v35; // w25
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
  float v53; // s1 OVERLAPPED
  float v54; // s0
  float v55; // s3
  float v56; // s2
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v58; // x20
  struct CommonConsumeEntity_array *v59; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v64; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v68; // x8
  int32_t v69; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19

  if ( (byte_4C218E7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_bool___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10971/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/);
    sub_1C2D490(&StringLiteral_10978/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_10970/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    sub_1C2D490(&StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C2D490(&StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_KIND"*/);
    byte_4C218E7 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10978/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0);
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
                                    (const MethodInfo_30EB804 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_115;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_115;
  max_length = exchangeOriginItemList->max_length;
  if ( (_DWORD)max_length == 3 )
  {
    v9 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
      if ( !exchangeOriginLb )
        goto LABEL_115;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_115;
      if ( v9 >= LODWORD(exchangeOriginItemIcon->max_length) )
        goto LABEL_116;
      v13 = this->fields.exchangeOriginItemList;
      if ( !v13 )
        goto LABEL_115;
      if ( v9 >= LODWORD(v13->max_length) )
        goto LABEL_116;
      v14 = v13->m_Items[v9];
      if ( !v14 )
        goto LABEL_115;
      v15 = exchangeOriginItemIcon->m_Items[v9];
      objectId = v14->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v15, objectId, 0);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_115;
      if ( v9 >= LODWORD(exchangeOriginItemNames->max_length) )
        goto LABEL_116;
      v18 = this->fields.exchangeOriginItemList;
      if ( !v18 )
        goto LABEL_115;
      if ( v9 >= LODWORD(v18->max_length) )
        goto LABEL_116;
      Name = v18->m_Items[v9];
      if ( !Name )
        goto LABEL_115;
      v19 = exchangeOriginItemNames->m_Items[v9];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0);
      if ( !v19 )
        goto LABEL_115;
      UILabel__set_text(v19, (System_String_o *)Name, 0);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_115;
      if ( v9 >= LODWORD(exchangeOriginCounts->max_length) )
        goto LABEL_116;
      v21 = this->fields.exchangeOriginItemList;
      if ( !v21 )
        goto LABEL_115;
      if ( v9 >= LODWORD(v21->max_length) )
        goto LABEL_116;
      v22 = v21->m_Items[v9];
      if ( !v22 )
        goto LABEL_115;
      num = v22->fields.num;
      v24 = exchangeOriginCounts->m_Items[v9];
      v25 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v25 * num, 0);
      if ( !v24 )
        goto LABEL_115;
      UILabel__set_text(v24, (System_String_o *)Name, 0);
      v26 = this->fields.exchangeOriginCounts;
      if ( !v26 )
        goto LABEL_115;
      if ( v9 >= LODWORD(v26->max_length) )
        goto LABEL_116;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_115;
      if ( v9 >= LODWORD(isShortage->max_length) )
        goto LABEL_116;
      Name = (CommonConsumeEntity_o *)v26->m_Items[v9];
      v28 = isShortage->m_Items[v9] ? 0.0 : 1.0;
      if ( !Name )
        goto LABEL_115;
      v29 = 1.0;
      v30 = 1.0;
      v31 = v28;
      UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v28 - 1), 0);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_115;
      if ( v9 >= LODWORD(exchangeOriginCountKinds->max_length) )
        goto LABEL_116;
      v33 = exchangeOriginCountKinds->m_Items[v9];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
      if ( !v33 )
        goto LABEL_115;
      UILabel__set_text(v33, (System_String_o *)Name, 0);
      v34 = this->fields.exchangeOriginItemList;
      if ( !v34 )
        goto LABEL_115;
      ++v9;
    }
    while ( (signed int)v9 < SLODWORD(v34->max_length) );
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
      v35 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10973/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v35 >= LODWORD(exchangeOriginItemIcon2->max_length) )
          goto LABEL_116;
        v38 = this->fields.exchangeOriginItemList;
        if ( !v38 )
          break;
        if ( v35 >= LODWORD(v38->max_length) )
          goto LABEL_116;
        v39 = v38->m_Items[v35];
        if ( !v39 )
          break;
        v40 = exchangeOriginItemIcon2->m_Items[v35];
        v41 = v39->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v40, v41, 0);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v35 >= LODWORD(exchangeOriginItemNames2->max_length) )
          goto LABEL_116;
        v43 = this->fields.exchangeOriginItemList;
        if ( !v43 )
          break;
        if ( v35 >= LODWORD(v43->max_length) )
          goto LABEL_116;
        Name = v43->m_Items[v35];
        if ( !Name )
          break;
        v44 = exchangeOriginItemNames2->m_Items[v35];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0);
        if ( !v44 )
          break;
        UILabel__set_text(v44, (System_String_o *)Name, 0);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v35 >= LODWORD(exchangeOriginCounts2->max_length) )
          goto LABEL_116;
        v46 = this->fields.exchangeOriginItemList;
        if ( !v46 )
          break;
        if ( v35 >= LODWORD(v46->max_length) )
          goto LABEL_116;
        v47 = v46->m_Items[v35];
        if ( !v47 )
          break;
        v48 = v47->fields.num;
        v49 = exchangeOriginCounts2->m_Items[v35];
        v50 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v50 * v48, 0);
        if ( !v49 )
          break;
        UILabel__set_text(v49, (System_String_o *)Name, 0);
        v51 = this->fields.exchangeOriginCounts2;
        if ( !v51 )
          break;
        if ( v35 >= LODWORD(v51->max_length) )
          goto LABEL_116;
        v52 = this->fields.isShortage;
        if ( !v52 )
          break;
        if ( v35 >= LODWORD(v52->max_length) )
          goto LABEL_116;
        Name = (CommonConsumeEntity_o *)v51->m_Items[v35];
        v53 = v52->m_Items[v35] ? 0.0 : 1.0;
        if ( !Name )
          break;
        v54 = 1.0;
        v55 = 1.0;
        v56 = v53;
        UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v53 - 1), 0);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v35 >= LODWORD(exchangeOriginCountKinds2->max_length) )
LABEL_116:
          sub_1C2D6F4(Name, v5, v11);
        v58 = exchangeOriginCountKinds2->m_Items[v35];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
        if ( !v58 )
          break;
        UILabel__set_text(v58, (System_String_o *)Name, 0);
        v59 = this->fields.exchangeOriginItemList;
        if ( !v59 )
          break;
        if ( (signed int)++v35 >= SLODWORD(v59->max_length) )
          goto LABEL_96;
      }
LABEL_115:
      sub_1C2D6EC(Name, v5);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10970/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v64 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v64, 0);
  if ( !exchangeDestinationItemCount )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
  if ( !exchangeDestinationCountKind )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_115;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0);
  if ( !exchangeDestinationPointName )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0);
  v68 = this->fields.eventRecipeEntity;
  if ( !v68 )
    goto LABEL_115;
  v69 = this->fields.makeCount;
  eventPointNum = v68->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v69 <= 1 )
    v69 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v69 * eventPointNum, 0);
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
  __int64 v7; // x1

  v6 = EventRecipeConfirmDialogComponent__CalcPossessionNum(this, gift, (const MethodInfo *)gift);
  if ( !item )
    sub_1C2D6EC(v6, v7);
  ItemIconComponent__SetPossessionOneLabel(item, v6, 0);
  ItemIconComponent__SetPossessionRoot(item, this->fields.possesionRootMovePositionY, 0);
}


void EventRecipeConfirmDialogComponent__SetRewardList(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned int v9; // w9
  EventRecipeGiftEntity_o *v10; // x8
  int m_CancellationTokenSource; // w8
  DataManager_o *v12; // x23
  unsigned int v13; // w28
  Il2CppObject *rewardItemIcon; // x24
  GiftEntity_o *v15; // x25
  UnityEngine_GameObject_o *v16; // x24
  UnityEngine_Transform_o *v17; // x26
  ItemIconComponent_o *v18; // x26
  int num; // w8
  const MethodInfo *v20; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v24; // x8
  EventRecipeGiftEntity_o *v25; // x8
  int32_t topIconId; // w20
  bool v27; // zf
  UnityEngine_GameObject_o *v28; // x20
  float v29; // s0
  bool v30; // w1
  DataManager_o *v31; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v32; // [xsp+10h] [xbp-70h]
  unsigned int v33; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C218E8 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C218E8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventRecipeGiftEntities )
    goto LABEL_49;
  max_length = eventRecipeGiftEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    v31 = Instance;
    v32 = eventRecipeGiftEntities;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_50;
      v10 = eventRecipeGiftEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_49;
      v33 = v9;
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v10->fields.giftId, 0);
      if ( !Instance )
        goto LABEL_49;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      v12 = Instance;
      if ( m_CancellationTokenSource >= 1 )
        break;
LABEL_32:
      Instance = (DataManager_o *)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      eventRecipeGiftEntities = v32;
      if ( !Instance )
        goto LABEL_49;
      ((void (__fastcall *)(DataManager_o *, Il2CppClass *))Instance->klass[1]._1.element_class)(
        Instance,
        Instance->klass[1]._1.castClass);
      max_length = v32->max_length;
      Instance = v31;
      v9 = v33 + 1;
      if ( (int)(v33 + 1) >= (int)max_length )
        goto LABEL_35;
    }
    v13 = 0;
    while ( v13 < m_CancellationTokenSource )
    {
      rewardItemIcon = (Il2CppObject *)this->fields.rewardItemIcon;
      v15 = (GiftEntity_o *)*((_QWORD *)&v12->fields._DispLog + (int)v13);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                    rewardItemIcon,
                                    (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_49;
      v16 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_49;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v16, 0);
      v17 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4C20DA1 )
      {
        Instance = (DataManager_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v17 )
        goto LABEL_49;
      UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v16, 0);
      if ( !Instance )
        goto LABEL_49;
      v34.fields.x = this->fields.iconScale;
      v34.fields.y = v34.fields.x;
      v34.fields.z = v34.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v34, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v16,
                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v15 )
        goto LABEL_49;
      v18 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_49;
      num = v15->fields.num;
      if ( num <= 1 )
        num = -1;
      ItemIconComponent__SetGift_40700316(
        (ItemIconComponent_o *)Instance,
        v15->fields.type,
        v15->fields.objectId,
        num,
        0,
        0);
      EventRecipeConfirmDialogComponent__SetPossession(this, v18, v15, v20);
      UnityEngine_GameObject__SetActive(v16, 1, 0);
      Instance = (DataManager_o *)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_49;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v22 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_49;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v16,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v24 + 32) = v16;
        Instance = (DataManager_o *)sub_1C2D434(v24 + 32);
      }
      m_CancellationTokenSource = (int)v12->fields.m_CancellationTokenSource;
      if ( (int)++v13 >= m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_50:
    sub_1C2D6F4(Instance, v6, v7);
  }
LABEL_35:
  if ( !(_DWORD)max_length )
    goto LABEL_50;
  v25 = eventRecipeGiftEntities->m_Items[0];
  if ( !v25 )
    goto LABEL_49;
  Instance = (DataManager_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_49;
  topIconId = v25->fields.topIconId;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v27 = topIconId == 1;
  v28 = (UnityEngine_GameObject_o *)Instance;
  if ( !v27 )
  {
    if ( Instance )
    {
      v30 = 0;
      goto LABEL_48;
    }
LABEL_49:
    sub_1C2D6EC(Instance, v6);
  }
  Instance = (DataManager_o *)this->fields.rewardItemObjList;
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                0,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_49;
  LODWORD(v29) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionX(v28, v29, 0);
  Instance = (DataManager_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_49;
  v30 = 1;
LABEL_48:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v30, 0);
}


void EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  __int64 v4; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
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

  if ( (byte_4C218F1 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C218F1 = 1;
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
    v7 = 0;
    while ( 1 )
    {
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_34;
      if ( v7 >= LODWORD(exchangeOriginCounts->max_length) || v7 >= (unsigned int)max_length )
        goto LABEL_35;
      v9 = exchangeOriginItemList->m_Items[v7];
      if ( !v9 )
        goto LABEL_34;
      v10 = exchangeOriginCounts->m_Items[v7];
      num = v9->fields.num;
      makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(makeCount * num, 0);
      if ( !v10 )
        goto LABEL_34;
      UILabel__set_text(v10, (System_String_o *)itemSlider, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_34;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      if ( (int)++v7 >= (int)max_length )
        goto LABEL_28;
    }
  }
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        break;
      if ( v13 >= LODWORD(exchangeOriginCounts2->max_length) || v13 >= (unsigned int)max_length )
LABEL_35:
        sub_1C2D6F4(itemSlider, method, v4);
      v15 = exchangeOriginItemList->m_Items[v13];
      if ( !v15 )
        break;
      v16 = exchangeOriginCounts2->m_Items[v13];
      v17 = v15->fields.num;
      v18 = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v18 * v17, 0);
      if ( !v16 )
        break;
      UILabel__set_text(v16, (System_String_o *)itemSlider, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        break;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      if ( (int)++v13 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_34:
    sub_1C2D6EC(itemSlider, method);
  }
LABEL_28:
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v20 = this->fields.makeCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v20, 0);
  if ( !exchangeDestinationItemCount )
    goto LABEL_34;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)itemSlider, 0);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_34;
  v22 = this->fields.makeCount;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(
                                         v22 * eventRecipeEntity->fields.eventPointNum,
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
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C218F2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C218F2 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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

  if ( (byte_4C218F4 & 1) == 0 )
  {
    sub_1C2D490(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4C218F4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v1;
  sub_1C2D434(EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields);
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4C218F5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__);
    sub_1C2D490(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
    byte_4C218F5 = 1;
  }
  v4 = sub_1C2D6DC(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventRecipeConfirmDialogComponent___c___CheckServant_b__62_1(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4C218F6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__);
    sub_1C2D490(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
    byte_4C218F6 = 1;
  }
  v4 = sub_1C2D6DC(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventRecipeConfirmDialogComponent___c___CheckServant_b__62_4(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4C218F7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__);
    sub_1C2D490(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
    byte_4C218F7 = 1;
  }
  v4 = sub_1C2D6DC(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
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
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4C218F8 & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    sub_1C2D490(&StringLiteral_12718/*"ServantCombine"*/);
    byte_4C218F8 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257388(v5, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C2D6EC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12718/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
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
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4C218F9 & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12722/*"ServantEquipList"*/);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    sub_1C2D490(&StringLiteral_12721/*"ServantEQCombine"*/);
    byte_4C218F9 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257388(v5, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C2D6EC(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12722/*"ServantEquipList"*/, 0);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12721/*"ServantEQCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0);
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
  __int64 v6; // x1

  if ( (byte_4C218FA & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    byte_4C218FA = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_41257388(v4, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_1C2D6EC(v5, v6);
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
      sub_1C2D6EC(_4__this, method);
    }
    ((void (__fastcall *)(intptr_t, intptr_t))boxOverDlgCloseCallBack->fields.invoke_impl)(
      boxOverDlgCloseCallBack->fields.method_code,
      boxOverDlgCloseCallBack->fields.method);
  }
}