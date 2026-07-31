void EventRecipeConfirmDialogComponent___ctor(EventRecipeConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w9

  if ( (byte_59328B2 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59328B2 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  v5 = *(&BaseDialog_TypeInfo->_2.cctor_finished + 1);
  this->fields.iconScale = 0.65;
  this->fields.possesionRootMovePositionY = -95.0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
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
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x20

  if ( (byte_59328A8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    this = (EventRecipeConfirmDialogComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59328A8 = 1;
  }
  if ( !gift )
    goto LABEL_35;
  if ( Gift__IsServant_47357416(gift->fields.type, 0) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_35;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      sub_21FFECC(this, gift);
    }
    if ( baseWindow == 22 )
    {
      if ( !SelfUserGame )
        goto LABEL_35;
      return SelfUserGame->fields.rarePri;
    }
  }
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, gift, v7);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  this = (EventRecipeConfirmDialogComponent_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, gift, v7);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v15; // x20

  if ( (byte_59328AE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__);
    sub_21FFC50(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
    byte_59328AE = 1;
  }
  v5 = sub_21FFEBC(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isOpenPresentBox,
        *(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0),
        !presentBoxOverDlg) )
  {
    sub_21FFECC(v6, v7);
  }
  PresentBoxOverDialog__Close_38898400(presentBoxOverDlg, v15, 0);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x20
  BalanceConfig_c *v17; // x8
  Il2CppObject *v18; // x0
  System_String_o *v19; // x20
  PresentBoxOverDialog_o *presentBoxOverDlg; // x21
  PresentBoxOverDialog_ClickDelegate_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Action_int__o *onDecide; // x21
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_59328AF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11433/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/);
    this = (EventRecipeConfirmDialogComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59328AF = 1;
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
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11433/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0);
        v17 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v15);
          v17 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v17->static_fields->PresentBoxMax;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &PresentBoxMax);
        v19 = System_String__Format(v16, v18, 0);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v21 = (PresentBoxOverDialog_ClickDelegate_o *)sub_21FFEBC(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v19, v21, 0, 0);
          goto LABEL_12;
        }
      }
      else
      {
        onDecide = v4->fields.onDecide;
        v4->fields.onDecide = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.onDecide, 0, v8, v9, v10, v11, v12, v13);
        if ( onDecide )
        {
          ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
            onDecide->fields.method_code,
            (unsigned int)result,
            onDecide->fields.method);
          return;
        }
      }
      sub_21FFECC(v22, v23);
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
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  void *Instance; // x0
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v10; // x21
  int max_length; // w8
  unsigned int v12; // w26
  EventRecipeGiftEntity_o *v13; // x8
  int v14; // w8
  void *v15; // x23
  __int64 v16; // x27
  __int64 v17; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int32_t v21; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  BalanceConfig_c *v24; // x8
  int32_t v25; // w19

  if ( (byte_59328AC & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59328AC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftEnt, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_36;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)Master_object,
                *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_36;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        goto LABEL_37;
      v13 = giftEnt->m_Items[v12];
      if ( !v13 )
        goto LABEL_36;
      if ( !MasterData_object )
        goto LABEL_36;
      Instance = GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v13->fields.giftId, 0);
      if ( !Instance )
        goto LABEL_36;
      v14 = *((_DWORD *)Instance + 6);
      v15 = Instance;
      if ( v14 >= 1 )
        break;
LABEL_31:
      max_length = giftEnt->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_32;
    }
    v16 = 0;
    while ( (unsigned int)v16 < v14 )
    {
      v17 = *((_QWORD *)v15 + v16 + 4);
      if ( !v17 || !v10 )
        goto LABEL_36;
      Instance = (void *)System_Collections_Generic_List_int___Contains(
                           v10,
                           *(_DWORD *)(v17 + 20),
                           (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        items = v10->fields._items;
        v4 = *(unsigned int *)(v17 + 20);
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            v4,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size] = v4;
        }
      }
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
        goto LABEL_31;
    }
LABEL_37:
    sub_21FFED4(Instance);
  }
LABEL_32:
  if ( !VaildList )
LABEL_36:
    sub_21FFECC(Instance, v4);
  v21 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
  v24 = BalanceConfig_TypeInfo;
  v25 = v21;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22, v23);
    v24 = BalanceConfig_TypeInfo;
  }
  return v25 + LODWORD(VaildList->max_length) > v24->static_fields->PresentBoxMax;
}


bool EventRecipeConfirmDialogComponent__CheckServant(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  void *Instance; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x20
  Il2CppObject *MasterData_object; // x21
  __int64 v7; // x2
  CommonUI_o *v8; // x20
  int32_t v9; // w21
  int32_t svtKeep; // w19
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__62_0; // x22
  Il2CppObject *v13; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  CommonUI_o *v21; // x0
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x2
  CommonUI_o *v26; // x20
  int32_t v27; // w21
  int32_t svtEquipKeep; // w19
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v29; // x8
  Il2CppObject *v30; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t Count; // w20
  __int64 v39; // x2
  CommonUI_o *v40; // x21
  BalanceConfig_c *v41; // x8
  int32_t CommandCodeFrameMax; // w19
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v43; // x8
  Il2CppObject *v44; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59328AD & 1) == 0 )
  {
    sub_21FFC50(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__);
    sub_21FFC50(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_59328AD = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  v5 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_44;
    v8 = (CommonUI_o *)Instance;
    v9 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !*(&EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo, v4, v7);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    static_fields = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v4, v7);
        static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v13,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0);
      v14 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v14->__9__62_0 = _9__62_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__62_0, (int32_t)_9__62_0, v15, v16, v17, v18, v19, v20);
    }
    if ( !v8 )
      goto LABEL_44;
    v21 = v8;
    v22 = v9;
    v23 = svtKeep;
    v24 = 0;
LABEL_41:
    CommonUI__OpenSvtFrameShortDlg(v21, v22, v23, v24, 1, _9__62_0, 3, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
      return 0;
    }
LABEL_44:
    sub_21FFECC(Instance, v4);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v5, 1, 1, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_44;
    v26 = (CommonUI_o *)Instance;
    v27 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !*(&EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo, v4, v25);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v29 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v29->__9__62_1;
    if ( !_9__62_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v4, v25);
        v29 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)v29->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v30,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0);
      v31 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v31->__9__62_1 = _9__62_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31->__9__62_1, (int32_t)_9__62_0, v32, v33, v34, v35, v36, v37);
    }
    if ( !v26 )
      goto LABEL_44;
    v21 = v26;
    v22 = v27;
    v23 = svtEquipKeep;
    v24 = 1;
    goto LABEL_41;
  }
  if ( !MasterData_object )
    goto LABEL_44;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_44;
    v40 = (CommonUI_o *)Instance;
    if ( !byte_59324C8 )
    {
      sub_21FFC50(&BalanceConfig_TypeInfo);
      byte_59324C8 = 1;
    }
    v41 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v39);
      v41 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    CommandCodeFrameMax = v41->static_fields->CommandCodeFrameMax;
    if ( !*(&EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo, v4, v39);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v43 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v43->__9__62_4;
    if ( !_9__62_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v4, v39);
        v43 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v43->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v44,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0);
      v45 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v45->__9__62_4 = _9__62_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->__9__62_4, (int32_t)_9__62_0, v46, v47, v48, v49, v50, v51);
    }
    if ( !v40 )
      goto LABEL_44;
    v21 = v40;
    v22 = Count;
    v23 = CommandCodeFrameMax;
    v24 = 2;
    goto LABEL_41;
  }
  return 1;
}


void EventRecipeConfirmDialogComponent__Close(EventRecipeConfirmDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59328AB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328AB = 1;
  }
  rewardItemObjList = this->fields.rewardItemObjList;
  memset(&v10, 0, sizeof(v10));
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0);
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
  UserItemMaster_o *v7; // x20
  unsigned int v8; // w23
  int max; // w22
  struct CommonConsumeEntity_array *v10; // x8
  CommonConsumeEntity_o *v11; // x8
  CommonConsumeEntity_o *v12; // x10
  int32_t num; // w9
  int32_t v14; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v16; // x8
  char *v17; // x9
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59328A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59328A4 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___),
        exchangeOriginItemList = this->fields.exchangeOriginItemList,
        entity = 0,
        !exchangeOriginItemList) )
  {
LABEL_31:
    sub_21FFECC(Instance, v4);
  }
  v7 = (UserItemMaster_o *)Instance;
  v8 = 0;
  max = this->fields.max;
  while ( (signed int)v8 < SLODWORD(exchangeOriginItemList->max_length) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v10 = this->fields.exchangeOriginItemList;
    if ( !v10 )
      goto LABEL_31;
    if ( v8 >= LODWORD(v10->max_length) )
      goto LABEL_33;
    v11 = v10->m_Items[v8];
    if ( !v11 || !v7 )
      goto LABEL_31;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  v7,
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
      if ( v8 >= LODWORD(exchangeOriginItemList->max_length) )
        goto LABEL_33;
      v12 = exchangeOriginItemList->m_Items[v8];
      if ( !v12 )
        goto LABEL_31;
      num = entity->fields.num;
      v14 = v12->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v14 )
        max = num / v14;
      if ( !isShortage )
        goto LABEL_31;
      if ( v8 >= LODWORD(isShortage->max_length) )
        goto LABEL_33;
      isShortage->m_Items[v8] = v14 > num;
    }
    else
    {
      v16 = this->fields.isShortage;
      if ( !v16 )
        goto LABEL_31;
      if ( v8 >= LODWORD(v16->max_length) )
LABEL_33:
        sub_21FFED4(Instance);
      v17 = (char *)v16 + (int)v8;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
      v17[32] = 1;
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventRecipeEntity, 0, v7, v8, v9, v10, v11, v12);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventRecipeConfirmDialogComponent__InitItemSlider(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t makeCount; // w8
  UnityEngine_Component_o *itemSlider; // x0
  int32_t v5; // w1
  bool v6; // w2

  if ( (byte_59328A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_59328A5 = 1;
  }
  makeCount = this->fields.makeCount;
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( makeCount == 1 )
  {
    if ( !itemSlider )
      goto LABEL_22;
    itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
    if ( !itemSlider )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_22;
    UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_22;
    v5 = this->fields.makeCount;
    v6 = 0;
  }
  else
  {
    if ( !makeCount )
    {
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
                                                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
LABEL_22:
      sub_21FFECC(itemSlider, method);
    }
    if ( !itemSlider )
      goto LABEL_22;
    itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
    if ( !itemSlider )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_22;
    UISliderWithButton__normalMode((UISliderWithButton_o *)itemSlider, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_22;
    v5 = this->fields.makeCount;
    v6 = 1;
  }
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

  if ( (byte_59328AA & 1) == 0 )
  {
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    byte_59328AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_21FFECC(0, v5);
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

  if ( (byte_59328A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    byte_59328A9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_object__o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x2
  UILabel_o *titleLb; // x22
  struct EventRecipeEntity_o *v50; // x8
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  System_String_o *v56; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v80; // x2
  System_Action_o *v81; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59328A3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent_EndOpen__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11441/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_11439/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/);
    sub_21FFC50(&StringLiteral_21189/*"icon_{0}"*/);
    sub_21FFC50(&StringLiteral_11440/*"RECIPE_CONFIRM_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_11438/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_3825/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    byte_59328A3 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventRecipeEntity,
      (int32_t)eventRecipeEntity,
      (System_String_o *)eventRecipeGiftEntities,
      (System_String_o *)onDecide,
      (int32_t)boxOverDlg,
      (int32_t)boxOverDlgCallBack,
      (bool)method,
      v7);
    this->fields.onDecide = onDecide;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.boxOverDlgCloseCallBack,
      (int32_t)boxOverDlgCallBack,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.presentBoxOverDlg,
      (int32_t)boxOverDlg,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventRecipeGiftList,
      (int32_t)eventRecipeGiftEntities,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    v38 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v38,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v38;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rewardItemObjList,
      (int32_t)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLb = this->fields.titleLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11440/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0);
    v50 = this->fields.eventRecipeEntity;
    if ( !v50 )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               (System_String_o *)gameObject,
                                               (Il2CppObject *)v50->fields.name,
                                               0);
    if ( !titleLb )
      goto LABEL_22;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
    if ( !eventRecipeEntity )
      goto LABEL_22;
    eventId = this->fields.eventId;
    eventItemIcon = this->fields.eventItemIcon;
    iconId = eventRecipeEntity->fields.iconId;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconId);
    v56 = System_String__Format((System_String_o *)StringLiteral_21189/*"icon_{0}"*/, v53, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v54, v55);
    AtlasManager__SetEventUI_47538316(eventId, eventItemIcon, v56, 0);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3825/*"COMMON_CONFIRM_EXECUTE"*/, 0);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.exchangeOriginItemList,
      (int32_t)SortedEntityList,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    v67 = (struct System_Boolean_array *)sub_21FFD10(bool___TypeInfo, LODWORD(exchangeOriginItemList->max_length));
    this->fields.isShortage = v67;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.isShortage,
      (int32_t)v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v74);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v75);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v76);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11439/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11438/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11441/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0),
          !topLabel) )
    {
LABEL_22:
      sub_21FFECC(gameObject, v46);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v80);
    this->fields.state = 1;
    v81 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v81, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0, 0);
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
  __int64 v2; // x2
  UILabel_o *warningLb; // x20
  CommonConsumeEntity_o *Name; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v8; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  unsigned int v10; // w26
  UILabel_o *exchangeOriginLb; // x20
  __int64 v12; // x2
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v14; // x9
  CommonConsumeEntity_o *v15; // x9
  int32_t objectId; // w21
  UISprite_o *v17; // x20
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v19; // x9
  UILabel_o *v20; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v22; // x9
  CommonConsumeEntity_o *v23; // x9
  int32_t makeCount; // w10
  int32_t num; // w9
  UILabel_o *v26; // x20
  struct UILabel_array *v27; // x8
  struct System_Boolean_array *isShortage; // x9
  float v29; // s0 OVERLAPPED
  float v30; // s3
  float v31; // s1
  float v32; // s2
  __int64 v33; // x2
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v35; // x20
  unsigned int v36; // w26
  UILabel_o *exchangeOriginLb2; // x20
  __int64 v38; // x2
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v40; // x9
  CommonConsumeEntity_o *v41; // x9
  int32_t v42; // w21
  UISprite_o *v43; // x20
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v45; // x9
  UILabel_o *v46; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v48; // x9
  CommonConsumeEntity_o *v49; // x9
  int32_t v50; // w10
  int32_t v51; // w9
  UILabel_o *v52; // x20
  struct UILabel_array *v53; // x8
  struct System_Boolean_array *v54; // x9
  float v55; // s0 OVERLAPPED
  float v56; // s3
  float v57; // s1
  float v58; // s2
  __int64 v59; // x2
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v61; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  UILabel_o *exchangeDestinationLb; // x20
  __int64 v65; // x1
  __int64 v66; // x2
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t v68; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v70; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v74; // x8
  int32_t v75; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19

  if ( (byte_59328A6 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_bool___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11435/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/);
    sub_21FFC50(&StringLiteral_11442/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_11434/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    sub_21FFC50(&StringLiteral_11437/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_21FFC50(&StringLiteral_11436/*"RECIPE_CONFIRM_DIALOG_KIND"*/);
    byte_59328A6 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11442/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0);
  if ( !warningLb )
    goto LABEL_91;
  UILabel__set_text(warningLb, (System_String_o *)Name, 0);
  Name = (CommonConsumeEntity_o *)this->fields.warningLb;
  if ( !Name )
    goto LABEL_91;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Name, 0);
  Name = (CommonConsumeEntity_o *)System_Linq_Enumerable__Contains_bool_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.isShortage,
                                    1,
                                    (const MethodInfo_3843078 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_91;
  if ( LODWORD(exchangeOriginItemList->max_length) == 3 )
  {
    v10 = 0;
    while ( (signed int)v10 < SLODWORD(exchangeOriginItemList->max_length) )
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v8);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11437/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
      if ( exchangeOriginLb )
      {
        UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0);
        exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
        if ( exchangeOriginItemIcon )
        {
          if ( v10 >= LODWORD(exchangeOriginItemIcon->max_length) )
            goto LABEL_114;
          v14 = this->fields.exchangeOriginItemList;
          if ( v14 )
          {
            if ( v10 >= LODWORD(v14->max_length) )
              goto LABEL_114;
            v15 = v14->m_Items[v10];
            if ( v15 )
            {
              objectId = v15->fields.objectId;
              v17 = exchangeOriginItemIcon->m_Items[v10];
              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v12);
              Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v17, objectId, 0);
              exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
              if ( exchangeOriginItemNames )
              {
                if ( v10 >= LODWORD(exchangeOriginItemNames->max_length) )
                  goto LABEL_114;
                v19 = this->fields.exchangeOriginItemList;
                if ( v19 )
                {
                  if ( v10 >= LODWORD(v19->max_length) )
                    goto LABEL_114;
                  Name = v19->m_Items[v10];
                  if ( Name )
                  {
                    v20 = exchangeOriginItemNames->m_Items[v10];
                    Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0);
                    if ( v20 )
                    {
                      UILabel__set_text(v20, (System_String_o *)Name, 0);
                      exchangeOriginCounts = this->fields.exchangeOriginCounts;
                      if ( exchangeOriginCounts )
                      {
                        if ( v10 >= LODWORD(exchangeOriginCounts->max_length) )
                          goto LABEL_114;
                        v22 = this->fields.exchangeOriginItemList;
                        if ( v22 )
                        {
                          if ( v10 >= LODWORD(v22->max_length) )
                            goto LABEL_114;
                          v23 = v22->m_Items[v10];
                          if ( v23 )
                          {
                            makeCount = this->fields.makeCount;
                            num = v23->fields.num;
                            v26 = exchangeOriginCounts->m_Items[v10];
                            if ( makeCount <= 1 )
                              makeCount = 1;
                            Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(makeCount * num, 0);
                            if ( v26 )
                            {
                              UILabel__set_text(v26, (System_String_o *)Name, 0);
                              v27 = this->fields.exchangeOriginCounts;
                              if ( v27 )
                              {
                                if ( v10 >= LODWORD(v27->max_length) )
                                  goto LABEL_114;
                                isShortage = this->fields.isShortage;
                                if ( isShortage )
                                {
                                  if ( v10 >= LODWORD(isShortage->max_length) )
                                    goto LABEL_114;
                                  Name = (CommonConsumeEntity_o *)v27->m_Items[v10];
                                  if ( Name )
                                  {
                                    v29 = 1.0;
                                    v30 = 1.0;
                                    v31 = isShortage->m_Items[v10] ? 0.0 : 1.0;
                                    v32 = v31;
                                    UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)&v29, 0);
                                    exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
                                    if ( exchangeOriginCountKinds )
                                    {
                                      if ( v10 >= LODWORD(exchangeOriginCountKinds->max_length) )
                                        goto LABEL_114;
                                      v35 = exchangeOriginCountKinds->m_Items[v10];
                                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v33);
                                      Name = (CommonConsumeEntity_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_11436/*"RECIPE_CONFIRM_DIALOG_KIND"*/,
                                                                        0);
                                      if ( v35 )
                                      {
                                        ++v10;
                                        UILabel__set_text(v35, (System_String_o *)Name, 0);
                                        exchangeOriginItemList = this->fields.exchangeOriginItemList;
                                        if ( exchangeOriginItemList )
                                          continue;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_91;
    }
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject;
    if ( !Name )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0);
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject2;
    if ( !Name )
      goto LABEL_91;
  }
  else
  {
    v36 = 0;
    while ( (signed int)v36 < SLODWORD(exchangeOriginItemList->max_length) )
    {
      exchangeOriginLb2 = this->fields.exchangeOriginLb2;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v8);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11437/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
      if ( exchangeOriginLb2 )
      {
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( exchangeOriginItemIcon2 )
        {
          if ( v36 >= LODWORD(exchangeOriginItemIcon2->max_length) )
            goto LABEL_114;
          v40 = this->fields.exchangeOriginItemList;
          if ( v40 )
          {
            if ( v36 >= LODWORD(v40->max_length) )
              goto LABEL_114;
            v41 = v40->m_Items[v36];
            if ( v41 )
            {
              v42 = v41->fields.objectId;
              v43 = exchangeOriginItemIcon2->m_Items[v36];
              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v38);
              Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v43, v42, 0);
              exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
              if ( exchangeOriginItemNames2 )
              {
                if ( v36 >= LODWORD(exchangeOriginItemNames2->max_length) )
                  goto LABEL_114;
                v45 = this->fields.exchangeOriginItemList;
                if ( v45 )
                {
                  if ( v36 >= LODWORD(v45->max_length) )
                    goto LABEL_114;
                  Name = v45->m_Items[v36];
                  if ( Name )
                  {
                    v46 = exchangeOriginItemNames2->m_Items[v36];
                    Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0);
                    if ( v46 )
                    {
                      UILabel__set_text(v46, (System_String_o *)Name, 0);
                      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
                      if ( exchangeOriginCounts2 )
                      {
                        if ( v36 >= LODWORD(exchangeOriginCounts2->max_length) )
                          goto LABEL_114;
                        v48 = this->fields.exchangeOriginItemList;
                        if ( v48 )
                        {
                          if ( v36 >= LODWORD(v48->max_length) )
                            goto LABEL_114;
                          v49 = v48->m_Items[v36];
                          if ( v49 )
                          {
                            v50 = this->fields.makeCount;
                            v51 = v49->fields.num;
                            v52 = exchangeOriginCounts2->m_Items[v36];
                            if ( v50 <= 1 )
                              v50 = 1;
                            Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v50 * v51, 0);
                            if ( v52 )
                            {
                              UILabel__set_text(v52, (System_String_o *)Name, 0);
                              v53 = this->fields.exchangeOriginCounts2;
                              if ( v53 )
                              {
                                if ( v36 >= LODWORD(v53->max_length) )
                                  goto LABEL_114;
                                v54 = this->fields.isShortage;
                                if ( v54 )
                                {
                                  if ( v36 >= LODWORD(v54->max_length) )
                                    goto LABEL_114;
                                  Name = (CommonConsumeEntity_o *)v53->m_Items[v36];
                                  if ( Name )
                                  {
                                    v55 = 1.0;
                                    v56 = 1.0;
                                    v57 = v54->m_Items[v36] ? 0.0 : 1.0;
                                    v58 = v57;
                                    UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)&v55, 0);
                                    exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
                                    if ( exchangeOriginCountKinds2 )
                                    {
                                      if ( v36 >= LODWORD(exchangeOriginCountKinds2->max_length) )
LABEL_114:
                                        sub_21FFED4(Name);
                                      v61 = exchangeOriginCountKinds2->m_Items[v36];
                                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v59);
                                      Name = (CommonConsumeEntity_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_11436/*"RECIPE_CONFIRM_DIALOG_KIND"*/,
                                                                        0);
                                      if ( v61 )
                                      {
                                        ++v36;
                                        UILabel__set_text(v61, (System_String_o *)Name, 0);
                                        exchangeOriginItemList = this->fields.exchangeOriginItemList;
                                        if ( exchangeOriginItemList )
                                          continue;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_91;
    }
    Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject2;
    if ( !Name
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 1, 0),
          (Name = (CommonConsumeEntity_o *)this->fields.exchangeOriginDispObject) == 0) )
    {
LABEL_91:
      sub_21FFECC(Name, v6);
    }
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Name, 0, 0);
  exchangeDestinationLb = this->fields.exchangeDestinationLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62, v63);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11434/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_91;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v65, v66);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0);
  v68 = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v70 = v68 <= 1 ? 1LL : (unsigned int)v68;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v70, 0);
  if ( !exchangeDestinationItemCount )
    goto LABEL_91;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11436/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0);
  if ( !exchangeDestinationCountKind )
    goto LABEL_91;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_91;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11435/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0);
  if ( !exchangeDestinationPointName )
    goto LABEL_91;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0);
  v74 = this->fields.eventRecipeEntity;
  if ( !v74 )
    goto LABEL_91;
  v75 = this->fields.makeCount;
  eventPointNum = v74->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v75 <= 1 )
    v75 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v75 * eventPointNum, 0);
  if ( !exchangeDestinationPointCount )
    goto LABEL_91;
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
    sub_21FFECC(v6, v7);
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
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v8; // x24
  EventRecipeGiftEntity_o *v9; // x8
  __int64 v10; // x2
  int v11; // w8
  __int64 v12; // x23
  unsigned int v13; // w28
  Il2CppObject *rewardItemIcon; // x24
  GiftEntity_o *v15; // x25
  UnityEngine_GameObject_o *v16; // x24
  UnityEngine_Transform_o *v17; // x26
  ItemIconComponent_o *v18; // x26
  int num; // w8
  const MethodInfo *v20; // x3
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  EventRecipeGiftEntity_o *v31; // x8
  UnityEngine_GameObject_o *v32; // x20
  float v33; // s0
  bool v34; // w1
  __int64 v35; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v36; // [xsp+10h] [xbp-70h]
  unsigned __int64 v37; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59328A7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59328A7 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventRecipeGiftEntities )
    goto LABEL_49;
  max_length_low = LODWORD(eventRecipeGiftEntities->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v8 = 0;
    v35 = Instance;
    v36 = eventRecipeGiftEntities;
    while ( 1 )
    {
      if ( v8 >= max_length_low )
        goto LABEL_50;
      v9 = eventRecipeGiftEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_49;
      if ( !Instance )
        goto LABEL_49;
      v37 = v8;
      Instance = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v9->fields.giftId, 0);
      if ( !Instance )
        goto LABEL_49;
      v11 = *(_DWORD *)(Instance + 24);
      v12 = Instance;
      if ( v11 >= 1 )
        break;
LABEL_32:
      Instance = (__int64)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_49;
      Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      eventRecipeGiftEntities = v36;
      if ( !Instance )
        goto LABEL_49;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 448LL));
      max_length_low = LODWORD(v36->max_length);
      v8 = v37 + 1;
      Instance = v35;
      if ( (int)v37 + 1 >= (int)max_length_low )
        goto LABEL_35;
    }
    v13 = 0;
    while ( v13 < v11 )
    {
      rewardItemIcon = (Il2CppObject *)this->fields.rewardItemIcon;
      v15 = *(GiftEntity_o **)(v12 + 8LL * (int)v13 + 32);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v10);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            rewardItemIcon,
                            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_49;
      v16 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_49;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0);
      v17 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_5931940 )
      {
        Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( !v17 )
        goto LABEL_49;
      UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0);
      if ( !Instance )
        goto LABEL_49;
      v38.fields.x = this->fields.iconScale;
      v38.fields.y = v38.fields.x;
      v38.fields.z = v38.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v38, 0);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v16,
                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v15 )
        goto LABEL_49;
      v18 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_49;
      num = v15->fields.num;
      if ( num <= 1 )
        num = -1;
      ItemIconComponent__SetGift_47936840(
        (ItemIconComponent_o *)Instance,
        v15->fields.type,
        v15->fields.objectId,
        num,
        0,
        0);
      EventRecipeConfirmDialogComponent__SetPossession(this, v18, v15, v20);
      UnityEngine_GameObject__SetActive(v16, 1, 0);
      Instance = (__int64)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_49;
      v27 = *(_QWORD *)(Instance + 16);
      v28 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v27 )
        goto LABEL_49;
      v29 = *(int *)(Instance + 24);
      if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v16,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * v29;
        *(_DWORD *)(Instance + 24) = v29 + 1;
        *(_QWORD *)(v30 + 32) = v16;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 32), (int32_t)v16, v21, v22, v23, v24, v25, v26);
      }
      v11 = *(_DWORD *)(v12 + 24);
      if ( (int)++v13 >= v11 )
        goto LABEL_32;
    }
LABEL_50:
    sub_21FFED4(Instance);
  }
LABEL_35:
  if ( !max_length_low )
    goto LABEL_50;
  v31 = eventRecipeGiftEntities->m_Items[0];
  if ( !v31 )
    goto LABEL_49;
  Instance = (__int64)this->fields.topLabel;
  if ( v31->fields.topIconId != 1 )
  {
    if ( Instance )
    {
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( Instance )
      {
        v34 = 0;
        goto LABEL_48;
      }
    }
LABEL_49:
    sub_21FFECC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !this->fields.rewardItemObjList )
    goto LABEL_49;
  v32 = (UnityEngine_GameObject_o *)Instance;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)this->fields.rewardItemObjList,
                        0,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_49;
  LODWORD(v33) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionX(v32, v33, 0);
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_49;
  v34 = 1;
LABEL_48:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v34, 0);
}


void EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  __int64 v4; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  unsigned int v6; // w22
  unsigned int max_length; // w10
  struct UILabel_array *exchangeOriginCounts; // x9
  CommonConsumeEntity_o *v9; // x8
  int32_t num; // w23
  int32_t makeCount; // w24
  UILabel_o *v12; // x20
  unsigned int v13; // w22
  unsigned int v14; // w10
  struct UILabel_array *exchangeOriginCounts2; // x9
  CommonConsumeEntity_o *v16; // x8
  int32_t v17; // w23
  int32_t v18; // w24
  UILabel_o *v19; // x20
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v21; // x21
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v23; // w9
  UILabel_o *exchangeDestinationPointCount; // x19

  if ( (byte_59328B0 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59328B0 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_27;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  this->fields.makeCount = (int)itemSlider;
  if ( !exchangeOriginItemList )
    goto LABEL_27;
  if ( LODWORD(exchangeOriginItemList->max_length) == 3 )
  {
    v6 = 0;
    while ( 1 )
    {
      max_length = exchangeOriginItemList->max_length;
      if ( (int)v6 >= (int)max_length )
        break;
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_27;
      if ( v6 >= LODWORD(exchangeOriginCounts->max_length) || v6 >= max_length )
        goto LABEL_34;
      v9 = exchangeOriginItemList->m_Items[v6];
      if ( v9 )
      {
        num = v9->fields.num;
        makeCount = this->fields.makeCount;
        v12 = exchangeOriginCounts->m_Items[v6];
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v4);
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(makeCount * num, 0);
        if ( v12 )
        {
          ++v6;
          UILabel__set_text(v12, (System_String_o *)itemSlider, 0);
          exchangeOriginItemList = this->fields.exchangeOriginItemList;
          if ( exchangeOriginItemList )
            continue;
        }
      }
      goto LABEL_27;
    }
  }
  else
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = exchangeOriginItemList->max_length;
      if ( (int)v13 >= (int)v14 )
        break;
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( exchangeOriginCounts2 )
      {
        if ( v13 >= LODWORD(exchangeOriginCounts2->max_length) || v13 >= v14 )
LABEL_34:
          sub_21FFED4(itemSlider);
        v16 = exchangeOriginItemList->m_Items[v13];
        if ( v16 )
        {
          v17 = v16->fields.num;
          v18 = this->fields.makeCount;
          v19 = exchangeOriginCounts2->m_Items[v13];
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v4);
          itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v18 * v17, 0);
          if ( v19 )
          {
            ++v13;
            UILabel__set_text(v19, (System_String_o *)itemSlider, 0);
            exchangeOriginItemList = this->fields.exchangeOriginItemList;
            if ( exchangeOriginItemList )
              continue;
          }
        }
      }
      goto LABEL_27;
    }
  }
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v21 = this->fields.makeCount;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v4);
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v21, 0);
  if ( !exchangeDestinationItemCount
    || (UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)itemSlider, 0),
        (eventRecipeEntity = this->fields.eventRecipeEntity) == 0)
    || (v23 = this->fields.makeCount,
        exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount,
        itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(
                                               v23 * eventRecipeEntity->fields.eventPointNum,
                                               0),
        !exchangeDestinationPointCount) )
  {
LABEL_27:
    sub_21FFECC(itemSlider, method);
  }
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_59328B1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328B1 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59328B3 & 1) == 0 )
  {
    sub_21FFC50(&EventRecipeConfirmDialogComponent___c_TypeInfo);
    byte_59328B3 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_59328B4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__);
    sub_21FFC50(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
    byte_59328B4 = 1;
  }
  v4 = sub_21FFEBC(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
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

  if ( (byte_59328B5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__);
    sub_21FFC50(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
    byte_59328B5 = 1;
  }
  v4 = sub_21FFEBC(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
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

  if ( (byte_59328B6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__);
    sub_21FFC50(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
    byte_59328B6 = 1;
  }
  v4 = sub_21FFEBC(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
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
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3
  Il2CppObject *Instance; // x19

  if ( (byte_59328B7 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13235/*"ServantCombine"*/);
    byte_59328B7 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427172(v5, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v6 = Instance;
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_21FFECC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13235/*"ServantCombine"*/, 0);
      if ( v4 )
      {
        v6 = v4;
        v8 = 32;
LABEL_12:
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
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
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  AvalonSceneManager_o *v8; // x0
  int32_t v9; // w1
  Il2CppObject *v10; // x19
  Il2CppObject *Instance; // x19

  if ( (byte_59328B8 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13240/*"ServantEquipList"*/);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13239/*"ServantEQCombine"*/);
    byte_59328B8 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427172(v5, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = (AvalonSceneManager_o *)Instance;
        v9 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13240/*"ServantEquipList"*/, 0);
      if ( v10 )
      {
        v8 = (AvalonSceneManager_o *)v10;
        v9 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_21FFECC(v6, v7);
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13239/*"ServantEQCombine"*/, 0);
      if ( v4 )
      {
        v8 = (AvalonSceneManager_o *)v4;
        v9 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(v8, v9, 1, (Il2CppObject *)v5, 0);
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

  if ( (byte_59328B9 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    byte_59328B9 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48427172(v4, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_21FFECC(v5, v6);
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
      sub_21FFECC(_4__this, method);
    }
    ((void (__fastcall *)(intptr_t, intptr_t))boxOverDlgCloseCallBack->fields.invoke_impl)(
      boxOverDlgCloseCallBack->fields.method_code,
      boxOverDlgCloseCallBack->fields.method);
  }
}