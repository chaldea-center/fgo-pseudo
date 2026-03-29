void EventRecipeConfirmDialogComponent___ctor(EventRecipeConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2AE0E & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2AE0E = 1;
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

  if ( (byte_4D2AE04 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2AE04 = 1;
  }
  if ( !gift )
    goto LABEL_35;
  if ( Gift__IsServant_41140096(gift->fields.type, 0) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      sub_1C93D2C(this, gift);
    }
    if ( baseWindow == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_35;
      return SelfUserGame->fields.rarePri;
    }
  }
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
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

  if ( (byte_4D2AE0A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__);
    sub_1C93AD4(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
    byte_4D2AE0A = 1;
  }
  v5 = sub_1C93D20(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isOpenPresentBox,
        *(_QWORD *)(v5 + 24) = this,
        sub_1C93A78(v5 + 24, this),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0),
        !presentBoxOverDlg) )
  {
    sub_1C93D2C(v6, v7);
  }
  PresentBoxOverDialog__Close_32974724(presentBoxOverDlg, v9, 0);
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
  System_String_o *v7; // x20
  BalanceConfig_c *v8; // x8
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v12; // x21
  PresentBoxOverDialog_ClickDelegate_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Action_int__o **p_onDecide; // x0
  struct System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4D2AE0B & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11055/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2AE0B = 1;
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
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11055/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0);
        v8 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v8 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v8->static_fields->PresentBoxMax;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax);
        v10 = System_String__Format(v7, v9, 0);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v12 = v10;
        v13 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1C93D20(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v13,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v12, v13, 0, 0);
          goto LABEL_12;
        }
      }
      else
      {
        p_onDecide = &v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        *p_onDecide = 0;
        v14 = sub_1C93A78(p_onDecide, 0);
        if ( onDecide )
        {
          ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
            onDecide->fields.method_code,
            (unsigned int)result,
            onDecide->fields.method);
          return;
        }
      }
      sub_1C93D2C(v14, v15);
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
  int max_length; // w8
  unsigned int v11; // w24
  EventRecipeGiftEntity_o *v12; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v14; // x23
  __int64 v15; // x27
  __int64 v16; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int32_t v20; // w0
  BalanceConfig_c *v21; // x8
  int32_t v22; // w19

  if ( (byte_4D2AE08 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2AE08 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_37;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_38;
      v12 = giftEnt->m_Items[v11];
      if ( !v12 )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v12->fields.giftId, 0);
      if ( !Instance )
        goto LABEL_37;
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      v14 = Instance;
      if ( m_CancellationTokenSource )
      {
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_32:
      max_length = giftEnt->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_33;
    }
    v15 = 0;
    while ( (unsigned int)v15 < (unsigned int)m_CancellationTokenSource )
    {
      v16 = *((_QWORD *)&v14->fields._DispLog + v15);
      if ( !v16 || !v9 )
        goto LABEL_37;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                    v9,
                                    *(_DWORD *)(v16 + 20),
                                    (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        v4 = *(unsigned int *)(v16 + 20);
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            v4,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size] = v4;
        }
      }
      LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
      if ( (int)++v15 >= (int)m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_38:
    sub_1C93D34(Instance);
  }
LABEL_33:
  if ( !VaildList )
LABEL_37:
    sub_1C93D2C(Instance, v4);
  v20 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
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

  if ( (byte_4D2AE09 & 1) == 0 )
  {
    sub_1C93AD4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__);
    sub_1C93AD4(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4D2AE09 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C93D20(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v11,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0);
      static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = v10;
      Instance = sub_1C93A78(&static_fields->__9__62_0, v10);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C93D20(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v20,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0);
      v21 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v21->__9__62_1 = v10;
      Instance = sub_1C93A78(&v21->__9__62_1, v10);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
      return 0;
    }
LABEL_45:
    sub_1C93D2C(Instance, v4);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v23 = (CommonUI_o *)Instance;
    if ( !byte_4D2AB39 )
    {
      sub_1C93AD4(&BalanceConfig_TypeInfo);
      byte_4D2AB39 = 1;
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
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C93D20(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v25,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0);
      v26 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v26->__9__62_4 = v10;
      Instance = sub_1C93A78(&v26->__9__62_4, v10);
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

  if ( (byte_4D2AE07 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AE07 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v6.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v7; // x20
  __int64 v8; // x23
  struct CommonConsumeEntity_array *v9; // x8
  CommonConsumeEntity_o *v10; // x8
  CommonConsumeEntity_o *v11; // x10
  int32_t num; // w9
  int32_t v13; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v15; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2AE00 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2AE00 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0) )
  {
LABEL_31:
    sub_1C93D2C(Instance, v4);
  }
  max = this->fields.max;
  v7 = (UserItemMaster_o *)Instance;
  v8 = 0;
  while ( (int)v8 < SLODWORD(exchangeOriginItemList->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v9 = this->fields.exchangeOriginItemList;
    if ( !v9 )
      goto LABEL_31;
    if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
      goto LABEL_33;
    v10 = v9->m_Items[v8];
    if ( !v10 || !v7 )
      goto LABEL_31;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  v7,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  v10->fields.objectId,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_31;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_31;
      if ( (unsigned int)v8 >= LODWORD(exchangeOriginItemList->max_length) )
        goto LABEL_33;
      v11 = exchangeOriginItemList->m_Items[v8];
      if ( !v11 )
        goto LABEL_31;
      num = entity->fields.num;
      v13 = v11->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v13 )
        max = num / v13;
      if ( !isShortage )
        goto LABEL_31;
      if ( (unsigned int)v8 >= LODWORD(isShortage->max_length) )
        goto LABEL_33;
      isShortage->m_Items[v8] = v13 > num;
    }
    else
    {
      v15 = this->fields.isShortage;
      if ( !v15 )
        goto LABEL_31;
      if ( (unsigned int)v8 >= LODWORD(v15->max_length) )
LABEL_33:
        sub_1C93D34(Instance);
      v15->m_Items[v8] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v8;
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
    sub_1C93D2C(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0;
  sub_1C93A78(&this->fields.eventRecipeEntity, 0);
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

  if ( (byte_4D2AE01 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4D2AE01 = 1;
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
                                                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1C93D2C(itemSlider, method);
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

  if ( (byte_4D2AE06 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    byte_4D2AE06 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C93D2C(0, v5);
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

  if ( (byte_4D2AE05 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    byte_4D2AE05 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v26; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v33; // x2
  System_Action_o *v34; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2ADFF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&bool___TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent_EndOpen__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_11063/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_11061/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/);
    sub_1C93AD4(&StringLiteral_20477/*"icon_{0}"*/);
    sub_1C93AD4(&StringLiteral_11062/*"RECIPE_CONFIRM_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_11060/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/);
    sub_1C93AD4(&StringLiteral_3709/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4D2ADFF = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_1C93A78(&this->fields.eventRecipeEntity, eventRecipeEntity);
    this->fields.onDecide = onDecide;
    sub_1C93A78(&this->fields.onDecide, onDecide);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_1C93A78(&this->fields.boxOverDlgCloseCallBack, boxOverDlgCallBack);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_1C93A78(&this->fields.presentBoxOverDlg, boxOverDlg);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_1C93A78(&this->fields.eventRecipeGiftList, eventRecipeGiftEntities);
    v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v14;
    sub_1C93A78(&this->fields.rewardItemObjList, v14);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11062/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0);
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
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
    v21 = System_String__Format((System_String_o *)StringLiteral_20477/*"icon_{0}"*/, v20, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_41320352(eventId, eventItemIcon, v21, 0);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3709/*"COMMON_CONFIRM_EXECUTE"*/, 0);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0);
    this->fields.exchangeOriginItemList = SortedEntityList;
    gameObject = (UnityEngine_GameObject_o *)sub_1C93A78(&this->fields.exchangeOriginItemList, SortedEntityList);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    v26 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, LODWORD(exchangeOriginItemList->max_length));
    this->fields.isShortage = v26;
    sub_1C93A78(&this->fields.isShortage, v26);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v27);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v28);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v29);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11061/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11060/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11063/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0),
          !topLabel) )
    {
LABEL_22:
      sub_1C93D2C(gameObject, v16);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v33);
    this->fields.state = 1;
    v34 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0, 0);
  }
}


void EventRecipeConfirmDialogComponent__SerializeFieldNotNullCheck(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


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
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v28; // x20
  struct CommonConsumeEntity_array *v29; // x8
  unsigned int v30; // w25
  UILabel_o *exchangeOriginLb2; // x20
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v33; // x9
  CommonConsumeEntity_o *v34; // x9
  UISprite_o *v35; // x20
  int32_t v36; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v38; // x9
  UILabel_o *v39; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v41; // x9
  CommonConsumeEntity_o *v42; // x9
  int32_t v43; // w9
  UILabel_o *v44; // x20
  int v45; // w8
  struct UILabel_array *v46; // x8
  struct System_Boolean_array *v47; // x9
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v49; // x20
  struct CommonConsumeEntity_array *v50; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v55; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v59; // x8
  int32_t v60; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2AE02 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_bool___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11057/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/);
    sub_1C93AD4(&StringLiteral_11064/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_11056/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    sub_1C93AD4(&StringLiteral_11059/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C93AD4(&StringLiteral_11058/*"RECIPE_CONFIRM_DIALOG_KIND"*/);
    byte_4D2AE02 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11064/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0);
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
                                    (const MethodInfo_31C0F70 *)Method_System_Linq_Enumerable_Contains_bool___);
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
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11059/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
      if ( !exchangeOriginLb )
        goto LABEL_115;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_115;
      if ( v9 >= LODWORD(exchangeOriginItemIcon->max_length) )
        goto LABEL_116;
      v12 = this->fields.exchangeOriginItemList;
      if ( !v12 )
        goto LABEL_115;
      if ( v9 >= LODWORD(v12->max_length) )
        goto LABEL_116;
      v13 = v12->m_Items[v9];
      if ( !v13 )
        goto LABEL_115;
      v14 = exchangeOriginItemIcon->m_Items[v9];
      objectId = v13->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v14, objectId, 0);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_115;
      if ( v9 >= LODWORD(exchangeOriginItemNames->max_length) )
        goto LABEL_116;
      v17 = this->fields.exchangeOriginItemList;
      if ( !v17 )
        goto LABEL_115;
      if ( v9 >= LODWORD(v17->max_length) )
        goto LABEL_116;
      Name = v17->m_Items[v9];
      if ( !Name )
        goto LABEL_115;
      v18 = exchangeOriginItemNames->m_Items[v9];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0);
      if ( !v18 )
        goto LABEL_115;
      UILabel__set_text(v18, (System_String_o *)Name, 0);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_115;
      if ( v9 >= LODWORD(exchangeOriginCounts->max_length) )
        goto LABEL_116;
      v20 = this->fields.exchangeOriginItemList;
      if ( !v20 )
        goto LABEL_115;
      if ( v9 >= LODWORD(v20->max_length) )
        goto LABEL_116;
      v21 = v20->m_Items[v9];
      if ( !v21 )
        goto LABEL_115;
      num = v21->fields.num;
      v23 = exchangeOriginCounts->m_Items[v9];
      v24 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v24 * num, 0);
      if ( !v23 )
        goto LABEL_115;
      UILabel__set_text(v23, (System_String_o *)Name, 0);
      v25 = this->fields.exchangeOriginCounts;
      if ( !v25 )
        goto LABEL_115;
      if ( v9 >= LODWORD(v25->max_length) )
        goto LABEL_116;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_115;
      if ( v9 >= LODWORD(isShortage->max_length) )
        goto LABEL_116;
      Name = (CommonConsumeEntity_o *)v25->m_Items[v9];
      v63.fields.g = isShortage->m_Items[v9] ? 0.0 : 1.0;
      if ( !Name )
        goto LABEL_115;
      v63.fields.r = 1.0;
      v63.fields.a = 1.0;
      v63.fields.b = v63.fields.g;
      UIWidget__set_color((UIWidget_o *)Name, v63, 0);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_115;
      if ( v9 >= LODWORD(exchangeOriginCountKinds->max_length) )
        goto LABEL_116;
      v28 = exchangeOriginCountKinds->m_Items[v9];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
      if ( !v28 )
        goto LABEL_115;
      UILabel__set_text(v28, (System_String_o *)Name, 0);
      v29 = this->fields.exchangeOriginItemList;
      if ( !v29 )
        goto LABEL_115;
      ++v9;
    }
    while ( (signed int)v9 < SLODWORD(v29->max_length) );
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
      v30 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11059/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v30 >= LODWORD(exchangeOriginItemIcon2->max_length) )
          goto LABEL_116;
        v33 = this->fields.exchangeOriginItemList;
        if ( !v33 )
          break;
        if ( v30 >= LODWORD(v33->max_length) )
          goto LABEL_116;
        v34 = v33->m_Items[v30];
        if ( !v34 )
          break;
        v35 = exchangeOriginItemIcon2->m_Items[v30];
        v36 = v34->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v35, v36, 0);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v30 >= LODWORD(exchangeOriginItemNames2->max_length) )
          goto LABEL_116;
        v38 = this->fields.exchangeOriginItemList;
        if ( !v38 )
          break;
        if ( v30 >= LODWORD(v38->max_length) )
          goto LABEL_116;
        Name = v38->m_Items[v30];
        if ( !Name )
          break;
        v39 = exchangeOriginItemNames2->m_Items[v30];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0);
        if ( !v39 )
          break;
        UILabel__set_text(v39, (System_String_o *)Name, 0);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v30 >= LODWORD(exchangeOriginCounts2->max_length) )
          goto LABEL_116;
        v41 = this->fields.exchangeOriginItemList;
        if ( !v41 )
          break;
        if ( v30 >= LODWORD(v41->max_length) )
          goto LABEL_116;
        v42 = v41->m_Items[v30];
        if ( !v42 )
          break;
        v43 = v42->fields.num;
        v44 = exchangeOriginCounts2->m_Items[v30];
        v45 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v45 * v43, 0);
        if ( !v44 )
          break;
        UILabel__set_text(v44, (System_String_o *)Name, 0);
        v46 = this->fields.exchangeOriginCounts2;
        if ( !v46 )
          break;
        if ( v30 >= LODWORD(v46->max_length) )
          goto LABEL_116;
        v47 = this->fields.isShortage;
        if ( !v47 )
          break;
        if ( v30 >= LODWORD(v47->max_length) )
          goto LABEL_116;
        Name = (CommonConsumeEntity_o *)v46->m_Items[v30];
        v64.fields.g = v47->m_Items[v30] ? 0.0 : 1.0;
        if ( !Name )
          break;
        v64.fields.r = 1.0;
        v64.fields.a = 1.0;
        v64.fields.b = v64.fields.g;
        UIWidget__set_color((UIWidget_o *)Name, v64, 0);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v30 >= LODWORD(exchangeOriginCountKinds2->max_length) )
LABEL_116:
          sub_1C93D34(Name);
        v49 = exchangeOriginCountKinds2->m_Items[v30];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
        if ( !v49 )
          break;
        UILabel__set_text(v49, (System_String_o *)Name, 0);
        v50 = this->fields.exchangeOriginItemList;
        if ( !v50 )
          break;
        if ( (signed int)++v30 >= SLODWORD(v50->max_length) )
          goto LABEL_96;
      }
LABEL_115:
      sub_1C93D2C(Name, v5);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11056/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v55 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v55, 0);
  if ( !exchangeDestinationItemCount )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
  if ( !exchangeDestinationCountKind )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_115;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11057/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0);
  if ( !exchangeDestinationPointName )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0);
  v59 = this->fields.eventRecipeEntity;
  if ( !v59 )
    goto LABEL_115;
  v60 = this->fields.makeCount;
  eventPointNum = v59->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v60 <= 1 )
    v60 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v60 * eventPointNum, 0);
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
    sub_1C93D2C(v6, v7);
  ItemIconComponent__SetPossessionOneLabel(item, v6, 0);
  ItemIconComponent__SetPossessionRoot(item, this->fields.possesionRootMovePositionY, 0);
}


void EventRecipeConfirmDialogComponent__SetRewardList(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned int v8; // w9
  EventRecipeGiftEntity_o *v9; // x8
  int v10; // w8
  __int64 v11; // x23
  unsigned int v12; // w28
  Il2CppObject *rewardItemIcon; // x24
  GiftEntity_o *v14; // x25
  UnityEngine_GameObject_o *v15; // x24
  UnityEngine_Transform_o *v16; // x26
  ItemIconComponent_o *v17; // x26
  int num; // w8
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  EventRecipeGiftEntity_o *v24; // x8
  int32_t topIconId; // w20
  bool v26; // zf
  UnityEngine_GameObject_o *v27; // x20
  bool v28; // w1
  float v29; // s0
  __int64 v30; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v31; // [xsp+10h] [xbp-70h]
  unsigned int v32; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2AE03 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2AE03 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventRecipeGiftEntities )
    goto LABEL_49;
  max_length = eventRecipeGiftEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    v30 = Instance;
    v31 = eventRecipeGiftEntities;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        goto LABEL_50;
      v9 = eventRecipeGiftEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_49;
      v32 = v8;
      if ( !Instance )
        goto LABEL_49;
      Instance = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v9->fields.giftId, 0);
      if ( !Instance )
        goto LABEL_49;
      v10 = *(_DWORD *)(Instance + 24);
      v11 = Instance;
      if ( v10 >= 1 )
        break;
LABEL_32:
      Instance = (__int64)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_49;
      Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      eventRecipeGiftEntities = v31;
      if ( !Instance )
        goto LABEL_49;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 448LL));
      max_length = v31->max_length;
      Instance = v30;
      v8 = v32 + 1;
      if ( (int)(v32 + 1) >= (int)max_length )
        goto LABEL_35;
    }
    v12 = 0;
    while ( v12 < v10 )
    {
      rewardItemIcon = (Il2CppObject *)this->fields.rewardItemIcon;
      v14 = *(GiftEntity_o **)(v11 + 8LL * (int)v12 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            rewardItemIcon,
                            (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_49;
      v15 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_49;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v15, 0);
      v16 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4D2A139 )
      {
        Instance = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      if ( !v16 )
        goto LABEL_49;
      UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v15, 0);
      if ( !Instance )
        goto LABEL_49;
      v33.fields.x = this->fields.iconScale;
      v33.fields.y = v33.fields.x;
      v33.fields.z = v33.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v33, 0);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v15,
                            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v14 )
        goto LABEL_49;
      v17 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_49;
      num = v14->fields.num;
      if ( num <= 1 )
        num = -1;
      ItemIconComponent__SetGift_41640856(
        (ItemIconComponent_o *)Instance,
        v14->fields.type,
        v14->fields.objectId,
        num,
        0,
        0);
      EventRecipeConfirmDialogComponent__SetPossession(this, v17, v14, v19);
      UnityEngine_GameObject__SetActive(v15, 1, 0);
      Instance = (__int64)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_49;
      v20 = *(_QWORD *)(Instance + 16);
      v21 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v20 )
        goto LABEL_49;
      v22 = *(int *)(Instance + 24);
      if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v15,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * v22;
        *(_DWORD *)(Instance + 24) = v22 + 1;
        *(_QWORD *)(v23 + 32) = v15;
        Instance = sub_1C93A78(v23 + 32, v15);
      }
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        goto LABEL_32;
    }
LABEL_50:
    sub_1C93D34(Instance);
  }
LABEL_35:
  if ( !(_DWORD)max_length )
    goto LABEL_50;
  v24 = eventRecipeGiftEntities->m_Items[0];
  if ( !v24 )
    goto LABEL_49;
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_49;
  topIconId = v24->fields.topIconId;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v26 = topIconId == 1;
  v27 = (UnityEngine_GameObject_o *)Instance;
  if ( !v26 )
  {
    if ( Instance )
    {
      v28 = 0;
      goto LABEL_48;
    }
LABEL_49:
    sub_1C93D2C(Instance, v6);
  }
  Instance = (__int64)this->fields.rewardItemObjList;
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Instance,
                        0,
                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_49;
  LODWORD(v29) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionX(v27, v29, 0);
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
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

  if ( (byte_4D2AE0C & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2AE0C = 1;
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
        sub_1C93D34(itemSlider);
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
    sub_1C93D2C(itemSlider, method);
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
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2AE0D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AE0D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
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

  if ( (byte_4D2AE0F & 1) == 0 )
  {
    sub_1C93AD4(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_4D2AE0F = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v1;
  sub_1C93A78(EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4D2AE10 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__);
    sub_1C93AD4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
    byte_4D2AE10 = 1;
  }
  v4 = sub_1C93D20(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2AE11 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__);
    sub_1C93AD4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
    byte_4D2AE11 = 1;
  }
  v4 = sub_1C93D20(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2AE12 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__);
    sub_1C93AD4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
    byte_4D2AE12 = 1;
  }
  v4 = sub_1C93D20(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2AE13 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12785/*"SellServant"*/);
    sub_1C93AD4(&StringLiteral_12821/*"ServantCombine"*/);
    byte_4D2AE13 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211596(v5, (System_String_o *)StringLiteral_12785/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C93D2C(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211508(v5, (System_String_o *)StringLiteral_12821/*"ServantCombine"*/, 0);
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

  if ( (byte_4D2AE14 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12825/*"ServantEquipList"*/);
    sub_1C93AD4(&StringLiteral_12785/*"SellServant"*/);
    sub_1C93AD4(&StringLiteral_12824/*"ServantEQCombine"*/);
    byte_4D2AE14 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211596(v5, (System_String_o *)StringLiteral_12785/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C93D2C(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211508(v5, (System_String_o *)StringLiteral_12825/*"ServantEquipList"*/, 0);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211508(v5, (System_String_o *)StringLiteral_12824/*"ServantEQCombine"*/, 0);
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

  if ( (byte_4D2AE15 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12785/*"SellServant"*/);
    byte_4D2AE15 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_42211596(v4, (System_String_o *)StringLiteral_12785/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_1C93D2C(v5, v6);
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
      sub_1C93D2C(_4__this, method);
    }
    ((void (__fastcall *)(intptr_t, intptr_t))boxOverDlgCloseCallBack->fields.invoke_impl)(
      boxOverDlgCloseCallBack->fields.method_code,
      boxOverDlgCloseCallBack->fields.method);
  }
}