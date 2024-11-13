void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A33F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A33F = 1;
  }
  this->fields.iconScale = 0.65;
  this->fields.possesionRootMovePositionY = -95.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventRecipeConfirmDialogComponent__CalcPossessionNum(
        EventRecipeConfirmDialogComponent_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UserGameEntity_o *SelfUserGame; // x20
  int baseWindow; // w8
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B1A335 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, gift, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1BCA7E0(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v12,
                                                    v13);
    byte_4B1A335 = 1;
  }
  if ( !gift )
    goto LABEL_30;
  if ( Gift__IsServant_38401528(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
        return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)this, gift->fields.objectId, 0, 0LL);
    }
LABEL_30:
    sub_1BCAA3C(this, gift);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_30;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x20

  if ( (byte_4B1A33B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isOpenPresentBox, method);
    sub_1BCA7E0(
      &Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
      v6,
      v7);
    sub_1BCA7E0(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, v8, v9);
    byte_4B1A33B = 1;
  }
  v10 = sub_1BCAA2C(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, isOpenPresentBox, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_BYTE *)(v10 + 16) = isOpenPresentBox,
        *(_QWORD *)(v10 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v13, v14, v15, v16, v17, v18),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v10,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1BCAA3C(v11, v12);
  }
  PresentBoxOverDialog__Close_31185648(presentBoxOverDlg, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__CallOnDecide(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  EventRecipeConfirmDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  System_String_o *v27; // x20
  BalanceConfig_c *v28; // x8
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  PresentBoxOverDialog_ClickDelegate_o *v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  PartyOrganizationUtility_o *p_onDecide; // x0
  struct System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B1A33C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_11104/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, v13, v14);
    this = (EventRecipeConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B1A33C = 1;
  }
  if ( v4->fields.onDecide )
  {
    v17 = EventRecipeConfirmDialogComponent__CheckServant(this, *(const MethodInfo **)&result);
    if ( v17 )
    {
      if ( EventRecipeConfirmDialogComponent__CheckOverCapacity(
             (EventRecipeConfirmDialogComponent_o *)v17,
             v4->fields.eventRecipeGiftList,
             v18) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11104/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
        v28 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
          v28 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v28->static_fields->PresentBoxMax;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax);
        v30 = System_String__Format(v27, v29, 0LL);
        presentBoxOverDlg = v4->fields.presentBoxOverDlg;
        v32 = v30;
        v36 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        PresentBoxOverDialog_ClickDelegate_TypeInfo,
                                                        v33,
                                                        v34,
                                                        v35);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v36,
          (Il2CppObject *)v4,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v32, v36, 0, 0LL);
          goto LABEL_12;
        }
      }
      else
      {
        p_onDecide = (PartyOrganizationUtility_o *)&v4->fields.onDecide;
        onDecide = v4->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_1BCA784(p_onDecide, 0LL, v20, v21, v22, v23, v24, v25);
        if ( onDecide )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
            onDecide->fields.original_method_info,
            (unsigned int)result,
            *(_QWORD *)&onDecide->fields.extra_arg);
          return;
        }
      }
      sub_1BCAA3C(v37, v38);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v27; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *MasterData_object; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_int__o *v33; // x21
  signed int max_length; // w8
  unsigned int v35; // w24
  EventRecipeGiftEntity_o *v36; // x8
  __int64 v37; // x8
  int64_t v38; // x23
  __int64 v39; // x27
  __int64 v40; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  int32_t v44; // w0
  __int64 v45; // x1
  BalanceConfig_c *v46; // x8
  int32_t v47; // w19

  if ( (byte_4B1A339 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, giftEnt, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B1A339 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_33;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Master_object, UserId, 0LL);
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  v33 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !giftEnt )
    goto LABEL_33;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
        goto LABEL_34;
      v36 = giftEnt->m_Items[v35];
      if ( !v36 )
        goto LABEL_33;
      if ( !MasterData_object )
        goto LABEL_33;
      UserId = (int64_t)GiftMaster__GetGiftListById((GiftMaster_o *)MasterData_object, v36->fields.giftId, 0LL);
      if ( !UserId )
        goto LABEL_33;
      v37 = *(_QWORD *)(UserId + 24);
      v38 = UserId;
      if ( v37 )
      {
        if ( (int)v37 >= 1 )
          break;
      }
LABEL_28:
      max_length = giftEnt->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_29;
    }
    v39 = 0LL;
    while ( (unsigned int)v39 < (unsigned int)v37 )
    {
      v40 = *(_QWORD *)(v38 + 32 + 8 * v39);
      if ( !v40 || !v33 )
        goto LABEL_33;
      UserId = System_Collections_Generic_List_int___Contains(
                 v33,
                 *(_DWORD *)(v40 + 20),
                 (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (UserId & 1) == 0 )
      {
        v27 = *(unsigned int *)(v40 + 20);
        items = v33->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v33->fields._version;
        if ( !items )
          goto LABEL_33;
        size = v33->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v33,
            v27,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v33->fields._size = size + 1;
          items->m_Items[size + 1] = v27;
        }
      }
      LODWORD(v37) = *(_DWORD *)(v38 + 24);
      if ( (int)++v39 >= (int)v37 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1BCAA44(UserId, v27);
  }
LABEL_29:
  if ( !VaildList )
LABEL_33:
    sub_1BCAA3C(UserId, v27);
  v44 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
  v46 = BalanceConfig_TypeInfo;
  v47 = v44;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v45);
    v46 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v47 + VaildList->max_length) > v46->static_fields->PresentBoxMax;
}


bool __fastcall EventRecipeConfirmDialogComponent__CheckServant(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UserGameEntity_o *SelfUserGame; // x19
  void *Instance; // x0
  __int64 v23; // x1
  UserServantMaster_o *v24; // x20
  Il2CppObject *MasterData_object; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  CommonUI_o *v28; // x20
  int32_t v29; // w21
  int32_t svtKeep; // w19
  ServantFrameShortDlgComponent_CallbackFunc_o *v31; // x22
  Il2CppObject *v32; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  CommonUI_o *v40; // x0
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x2
  __int64 v45; // x3
  CommonUI_o *v46; // x20
  int32_t v47; // w21
  int32_t svtEquipKeep; // w19
  Il2CppObject *v49; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int32_t Count; // w20
  __int64 v58; // x2
  __int64 v59; // x3
  CommonUI_o *v60; // x21
  BalanceConfig_c *v61; // x8
  Il2CppObject *v62; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A33A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__, v13, v14);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__, v15, v16);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__, v17, v18);
    sub_1BCA7E0(&EventRecipeConfirmDialogComponent___c_TypeInfo, v19, v20);
    byte_4B1A33A = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  v24 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v24, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v28 = (CommonUI_o *)Instance;
    v29 = servantEquipSum[1];
    svtKeep = SelfUserGame->fields.svtKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo, v23);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v31 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v31 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v23);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v23,
                                                              v26,
                                                              v27);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v31,
        v32,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
        0LL);
      static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__62_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
    }
    if ( !v28 )
      goto LABEL_45;
    v40 = v28;
    v41 = v29;
    v42 = svtKeep;
    v43 = 0;
    goto LABEL_42;
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v24, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v46 = (CommonUI_o *)Instance;
    v47 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo, v23);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v31 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 16LL);
    if ( !v31 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v23);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v49 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v23,
                                                              v44,
                                                              v45);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v31,
        v49,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v50 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v50->__9__62_1 = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&v50->__9__62_1, (int64_t)v31, v51, v52, v53, v54, v55, v56);
    }
    if ( !v46 )
      goto LABEL_45;
    v43 = 1;
    v40 = v46;
    v41 = v47;
LABEL_41:
    v42 = svtEquipKeep;
LABEL_42:
    CommonUI__OpenSvtFrameShortDlg(v40, v41, v42, v43, 1, v31, 3, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
      return 0;
    }
LABEL_45:
    sub_1BCAA3C(Instance, v23);
  }
  if ( !MasterData_object )
    goto LABEL_45;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v60 = (CommonUI_o *)Instance;
    if ( !byte_4B112D7 )
    {
      sub_1BCA7E0(&BalanceConfig_TypeInfo, v23, v58);
      byte_4B112D7 = 1;
    }
    v61 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
      v61 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v61->static_fields->CommandCodeFrameMax;
    if ( !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo, v23);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v31 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v31 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v23);
        Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
      }
      v62 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v23,
                                                              v58,
                                                              v59);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v31,
        v62,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v63 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v63->__9__62_4 = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&v63->__9__62_4, (int64_t)v31, v64, v65, v66, v67, v68, v69);
    }
    if ( !v60 )
      goto LABEL_45;
    v43 = 2;
    v40 = v60;
    v41 = Count;
    goto LABEL_41;
  }
  return 1;
}


void __fastcall EventRecipeConfirmDialogComponent__Close(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1A338 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B1A338 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)rewardItemObjList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v23, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w21
  UserItemMaster_o *v12; // x20
  __int64 v13; // x22
  struct CommonConsumeEntity_array *v14; // x8
  CommonConsumeEntity_o *v15; // x8
  CommonConsumeEntity_o *v16; // x10
  int32_t num; // w9
  int32_t v18; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v20; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A331 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1A331 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_27:
    sub_1BCAA3C(Instance, v9);
  }
  max = this->fields.max;
  v12 = (UserItemMaster_o *)Instance;
  v13 = 0LL;
  while ( (int)v13 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    Instance = NetworkManager__get_UserId(0LL);
    v14 = this->fields.exchangeOriginItemList;
    if ( !v14 )
      goto LABEL_27;
    if ( (unsigned int)v13 >= v14->max_length )
      goto LABEL_29;
    v15 = v14->m_Items[v13];
    if ( !v15 || !v12 )
      goto LABEL_27;
    Instance = UserItemMaster__TryGetEntity(v12, &entity, Instance, v15->fields.objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_27;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_27;
      if ( (unsigned int)v13 >= exchangeOriginItemList->max_length )
        goto LABEL_29;
      v16 = exchangeOriginItemList->m_Items[v13];
      if ( !v16 )
        goto LABEL_27;
      num = entity->fields.num;
      v18 = v16->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v18 )
        max = num / v18;
      if ( !isShortage )
        goto LABEL_27;
      if ( (unsigned int)v13 >= isShortage->max_length )
        goto LABEL_29;
      isShortage->m_Items[v13 + 4] = v18 > num;
    }
    else
    {
      v20 = this->fields.isShortage;
      if ( !v20 )
        goto LABEL_27;
      if ( (unsigned int)v13 >= v20->max_length )
LABEL_29:
        sub_1BCAA44(Instance, v9);
      v20->m_Items[v13 + 4] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v13;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventRecipeEntity, 0LL, v7, v8, v9, v10, v11, v12);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__InitItemSlider(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t makeCount; // w20
  UnityEngine_Component_o *itemSlider; // x0
  int32_t v6; // w1
  bool v7; // w2

  if ( (byte_4B1A332 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, method, v2);
    byte_4B1A332 = 1;
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
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
      v6 = this->fields.makeCount;
      v7 = 1;
      goto LABEL_18;
    }
LABEL_19:
    sub_1BCAA3C(itemSlider, method);
  }
  UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0LL);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_19;
  v6 = this->fields.makeCount;
  v7 = 0;
LABEL_18:
  UISliderWithButton__init((UISliderWithButton_o *)itemSlider, v6, v7, 1, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickCancel(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B1A337 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B1A337 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventRecipeConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventRecipeConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCAA3C(0LL, v6);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventRecipeConfirmDialogComponent__Close(this, v8);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1A336 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent_OnClickDecide__, method, v2);
    byte_4B1A336 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventRecipeConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRecipeConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventRecipeConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    EventRecipeConfirmDialogComponent__CallOnDecide(this, this->fields.makeCount, v6);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x25
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v82; // x1
  __int64 v83; // x1
  UILabel_o *titleLb; // x22
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v87; // x0
  __int64 v88; // x1
  System_String_o *v89; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v113; // x2
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  System_Action_o *v117; // x20
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1A330 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, eventRecipeEntity, eventRecipeGiftEntities);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&bool___TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v18, v19);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent_EndOpen__, v20, v21);
    sub_1BCA7E0(&int_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v26, v27);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&StringLiteral_11112/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_11110/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_20412/*"icon_{0}"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_11111/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_11109/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_3789/*"COMMON_CONFIRM_EXECUTE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v44, v45);
    byte_4B1A330 = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventRecipeEntity,
      (int64_t)eventRecipeEntity,
      (int64_t)eventRecipeGiftEntities,
      (int32_t)onDecide,
      (System_String_o *)boxOverDlg,
      (BattleSetupInfo_o *)boxOverDlgCallBack,
      (FollowerInfo_o *)method,
      v7);
    this->fields.onDecide = onDecide;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v47, v48, v49, v50, v51, v52);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.boxOverDlgCloseCallBack,
      (int64_t)boxOverDlgCallBack,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.presentBoxOverDlg,
      (int64_t)boxOverDlg,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventRecipeGiftList,
      (int64_t)eventRecipeGiftEntities,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    v74 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         v71,
                                                         v72,
                                                         v73);
    System_Collections_Generic_List_object____ctor(
      v74,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v74;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.rewardItemObjList,
      (int64_t)v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11111/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
    v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
    v89 = System_String__Format((System_String_o *)StringLiteral_20412/*"icon_{0}"*/, v87, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v88);
    AtlasManager__SetEventUI_38574572(eventId, eventItemIcon, v89, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_22;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_22;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_22;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.exchangeOriginItemList,
      (int64_t)SortedEntityList,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_22;
    v100 = (struct System_Boolean_array *)sub_1BCA888(bool___TypeInfo, exchangeOriginItemList->max_length);
    this->fields.isShortage = v100;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.isShortage,
      (int64_t)v100,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v107);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v108);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v109);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11109/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11112/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_22:
      sub_1BCAA3C(gameObject, v82);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v113);
    this->fields.state = 1;
    v117 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v114, v115, v116);
    System_Action___ctor(v117, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v117, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *warningLb; // x20
  CommonConsumeEntity_o *Name; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v23; // x8
  il2cpp_array_size_t v24; // w25
  UILabel_o *exchangeOriginLb; // x20
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v27; // x9
  CommonConsumeEntity_o *v28; // x9
  UISprite_o *v29; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v32; // x9
  UILabel_o *v33; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v35; // x9
  CommonConsumeEntity_o *v36; // x9
  int32_t num; // w9
  UILabel_o *v38; // x20
  int v39; // w8
  struct UILabel_array *v40; // x8
  struct System_Boolean_array *isShortage; // x9
  float v42; // s1
  float v43; // s0
  float v44; // s3
  float v45; // s2
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v47; // x20
  struct CommonConsumeEntity_array *v48; // x8
  il2cpp_array_size_t v49; // w25
  UILabel_o *exchangeOriginLb2; // x20
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v52; // x9
  CommonConsumeEntity_o *v53; // x9
  UISprite_o *v54; // x20
  int32_t v55; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v57; // x9
  UILabel_o *v58; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v60; // x9
  CommonConsumeEntity_o *v61; // x9
  int32_t v62; // w9
  UILabel_o *v63; // x20
  int v64; // w8
  struct UILabel_array *v65; // x8
  struct System_Boolean_array *v66; // x9
  float v67; // s1
  float v68; // s0
  float v69; // s3
  float v70; // s2
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v72; // x20
  struct CommonConsumeEntity_array *v73; // x8
  __int64 v74; // x1
  UILabel_o *exchangeDestinationLb; // x20
  __int64 v76; // x1
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v80; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v84; // x8
  int32_t v85; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19

  if ( (byte_4B1A333 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_bool___, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_11106/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11113/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11105/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11108/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11107/*"RECIPE_CONFIRM_DIALOG_KIND"*/, v16, v17);
    byte_4B1A333 = 1;
  }
  warningLb = this->fields.warningLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11113/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
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
                                    (const MethodInfo_2F2AE80 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_115;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_115;
  v23 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v23 == 3 )
  {
    v24 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11108/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_115;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_115;
      if ( v24 >= exchangeOriginItemIcon->max_length )
        goto LABEL_116;
      v27 = this->fields.exchangeOriginItemList;
      if ( !v27 )
        goto LABEL_115;
      if ( v24 >= v27->max_length )
        goto LABEL_116;
      v28 = v27->m_Items[v24];
      if ( !v28 )
        goto LABEL_115;
      v29 = exchangeOriginItemIcon->m_Items[v24];
      objectId = v28->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v29, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_115;
      if ( v24 >= exchangeOriginItemNames->max_length )
        goto LABEL_116;
      v32 = this->fields.exchangeOriginItemList;
      if ( !v32 )
        goto LABEL_115;
      if ( v24 >= v32->max_length )
        goto LABEL_116;
      Name = v32->m_Items[v24];
      if ( !Name )
        goto LABEL_115;
      v33 = exchangeOriginItemNames->m_Items[v24];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
      if ( !v33 )
        goto LABEL_115;
      UILabel__set_text(v33, (System_String_o *)Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_115;
      if ( v24 >= exchangeOriginCounts->max_length )
        goto LABEL_116;
      v35 = this->fields.exchangeOriginItemList;
      if ( !v35 )
        goto LABEL_115;
      if ( v24 >= v35->max_length )
        goto LABEL_116;
      v36 = v35->m_Items[v24];
      if ( !v36 )
        goto LABEL_115;
      num = v36->fields.num;
      v38 = exchangeOriginCounts->m_Items[v24];
      v39 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v39 * num, 0LL);
      if ( !v38 )
        goto LABEL_115;
      UILabel__set_text(v38, (System_String_o *)Name, 0LL);
      v40 = this->fields.exchangeOriginCounts;
      if ( !v40 )
        goto LABEL_115;
      if ( v24 >= v40->max_length )
        goto LABEL_116;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_115;
      if ( v24 >= isShortage->max_length )
        goto LABEL_116;
      Name = (CommonConsumeEntity_o *)v40->m_Items[v24];
      v42 = isShortage->m_Items[v24 + 4] ? 0.0 : 1.0;
      if ( !Name )
        goto LABEL_115;
      v43 = 1.0;
      v44 = 1.0;
      v45 = v42;
      UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v42 - 1), 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_115;
      if ( v24 >= exchangeOriginCountKinds->max_length )
        goto LABEL_116;
      v47 = exchangeOriginCountKinds->m_Items[v24];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
      if ( !v47 )
        goto LABEL_115;
      UILabel__set_text(v47, (System_String_o *)Name, 0LL);
      v48 = this->fields.exchangeOriginItemList;
      if ( !v48 )
        goto LABEL_115;
      ++v24;
    }
    while ( (signed int)v24 < (signed int)v48->max_length );
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
    if ( (int)v23 >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11108/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v49 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_116;
        v52 = this->fields.exchangeOriginItemList;
        if ( !v52 )
          break;
        if ( v49 >= v52->max_length )
          goto LABEL_116;
        v53 = v52->m_Items[v49];
        if ( !v53 )
          break;
        v54 = exchangeOriginItemIcon2->m_Items[v49];
        v55 = v53->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v54, v55, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v49 >= exchangeOriginItemNames2->max_length )
          goto LABEL_116;
        v57 = this->fields.exchangeOriginItemList;
        if ( !v57 )
          break;
        if ( v49 >= v57->max_length )
          goto LABEL_116;
        Name = v57->m_Items[v49];
        if ( !Name )
          break;
        v58 = exchangeOriginItemNames2->m_Items[v49];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
        if ( !v58 )
          break;
        UILabel__set_text(v58, (System_String_o *)Name, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v49 >= exchangeOriginCounts2->max_length )
          goto LABEL_116;
        v60 = this->fields.exchangeOriginItemList;
        if ( !v60 )
          break;
        if ( v49 >= v60->max_length )
          goto LABEL_116;
        v61 = v60->m_Items[v49];
        if ( !v61 )
          break;
        v62 = v61->fields.num;
        v63 = exchangeOriginCounts2->m_Items[v49];
        v64 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v64 * v62, 0LL);
        if ( !v63 )
          break;
        UILabel__set_text(v63, (System_String_o *)Name, 0LL);
        v65 = this->fields.exchangeOriginCounts2;
        if ( !v65 )
          break;
        if ( v49 >= v65->max_length )
          goto LABEL_116;
        v66 = this->fields.isShortage;
        if ( !v66 )
          break;
        if ( v49 >= v66->max_length )
          goto LABEL_116;
        Name = (CommonConsumeEntity_o *)v65->m_Items[v49];
        v67 = v66->m_Items[v49 + 4] ? 0.0 : 1.0;
        if ( !Name )
          break;
        v68 = 1.0;
        v69 = 1.0;
        v70 = v67;
        UIWidget__set_color((UIWidget_o *)Name, *(UnityEngine_Color_o *)(&v67 - 1), 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v49 >= exchangeOriginCountKinds2->max_length )
LABEL_116:
          sub_1BCAA44(Name, v20);
        v72 = exchangeOriginCountKinds2->m_Items[v49];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
        if ( !v72 )
          break;
        UILabel__set_text(v72, (System_String_o *)Name, 0LL);
        v73 = this->fields.exchangeOriginItemList;
        if ( !v73 )
          break;
        if ( (signed int)++v49 >= (signed int)v73->max_length )
          goto LABEL_96;
      }
LABEL_115:
      sub_1BCAA3C(Name, v20);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v76);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v80 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v80, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_115;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_115;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0LL);
  v84 = this->fields.eventRecipeEntity;
  if ( !v84 )
    goto LABEL_115;
  v85 = this->fields.makeCount;
  eventPointNum = v84->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v85 <= 1 )
    v85 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v85 * eventPointNum, 0LL);
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
    sub_1BCAA3C(v6, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x8
  unsigned int v22; // w9
  EventRecipeGiftEntity_o *v23; // x8
  int v24; // w8
  __int64 v25; // x23
  unsigned int v26; // w28
  Il2CppObject *rewardItemIcon; // x24
  GiftEntity_o *v28; // x25
  UnityEngine_GameObject_o *v29; // x24
  __int64 v30; // x2
  UnityEngine_Transform_o *v31; // x26
  ItemIconComponent_o *v32; // x26
  int32_t v33; // w3
  const MethodInfo *v34; // x3
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  EventRecipeGiftEntity_o *v45; // x8
  int32_t topIconId; // w20
  bool v47; // zf
  UnityEngine_GameObject_o *v48; // x20
  float v49; // s0
  bool v50; // w1
  __int64 v51; // [xsp+8h] [xbp-78h]
  EventRecipeGiftEntity_array *v52; // [xsp+10h] [xbp-70h]
  unsigned int v53; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  v3 = eventRecipeGiftEntities;
  if ( (byte_4B1A334 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, eventRecipeGiftEntities, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B1A334 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v3 )
    goto LABEL_50;
  v21 = *(_QWORD *)&v3->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0;
    v51 = Instance;
    v52 = v3;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        goto LABEL_51;
      v23 = v3->m_Items[v22];
      if ( !v23 )
        goto LABEL_50;
      v53 = v22;
      if ( !Instance )
        goto LABEL_50;
      Instance = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v23->fields.giftId, 0LL);
      if ( !Instance )
        goto LABEL_50;
      v24 = *(_DWORD *)(Instance + 24);
      v25 = Instance;
      if ( v24 >= 1 )
        break;
LABEL_33:
      Instance = (__int64)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_50;
      Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Instance,
                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      v3 = v52;
      if ( !Instance )
        goto LABEL_50;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 448LL));
      v21 = *(_QWORD *)&v52->max_length;
      Instance = v51;
      v22 = v53 + 1;
      if ( (int)(v53 + 1) >= (int)v21 )
        goto LABEL_36;
    }
    v26 = 0;
    while ( v26 < v24 )
    {
      rewardItemIcon = (Il2CppObject *)this->fields.rewardItemIcon;
      v28 = *(GiftEntity_o **)(v25 + 8LL * (int)v26 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            rewardItemIcon,
                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_50;
      v29 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_50;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v29, 0LL);
      v31 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4B109C1 )
      {
        Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v30);
        byte_4B109C1 = 1;
      }
      if ( !v31 )
        goto LABEL_50;
      UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v29, 0LL);
      if ( !Instance )
        goto LABEL_50;
      v54.fields.x = this->fields.iconScale;
      v54.fields.y = v54.fields.x;
      v54.fields.z = v54.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v54, 0LL);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v29,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v28 )
        goto LABEL_50;
      v32 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_50;
      v33 = v28->fields.num <= 1 ? -1 : v28->fields.num;
      ItemIconComponent__SetGift_38855180(
        (ItemIconComponent_o *)Instance,
        v28->fields.type,
        v28->fields.objectId,
        v33,
        0,
        0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v32, v28, v34);
      UnityEngine_GameObject__SetActive(v29, 1, 0LL);
      Instance = (__int64)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_50;
      v41 = *(_QWORD *)(Instance + 16);
      v42 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v41 )
        goto LABEL_50;
      v43 = *(int *)(Instance + 24);
      if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v29,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = v41 + 8 * v43;
        *(_DWORD *)(Instance + 24) = v43 + 1;
        *(_QWORD *)(v44 + 32) = v29;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)v29, v35, v36, v37, v38, v39, v40);
      }
      v24 = *(_DWORD *)(v25 + 24);
      if ( (int)++v26 >= v24 )
        goto LABEL_33;
    }
LABEL_51:
    sub_1BCAA44(Instance, v20);
  }
LABEL_36:
  if ( !(_DWORD)v21 )
    goto LABEL_51;
  v45 = v3->m_Items[0];
  if ( !v45 )
    goto LABEL_50;
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  topIconId = v45->fields.topIconId;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v47 = topIconId == 1;
  v48 = (UnityEngine_GameObject_o *)Instance;
  if ( !v47 )
  {
    if ( Instance )
    {
      v50 = 0;
      goto LABEL_49;
    }
LABEL_50:
    sub_1BCAA3C(Instance, v20);
  }
  Instance = (__int64)this->fields.rewardItemObjList;
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Instance,
                        0,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  LODWORD(v49) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v48, v49, 0LL);
  Instance = (__int64)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  v50 = 1;
LABEL_49:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v50, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UISliderWithButton_o *itemSlider; // x0
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

  if ( (byte_4B1A33D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B1A33D = 1;
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
        sub_1BCAA44(itemSlider, method);
      v15 = exchangeOriginItemList->m_Items[v13];
      if ( !v15 )
        break;
      v16 = exchangeOriginCounts2->m_Items[v13];
      v17 = v15->fields.num;
      v18 = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
    sub_1BCAA3C(itemSlider, method);
  }
LABEL_28:
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v20 = this->fields.makeCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A33E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A33E = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A340 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRecipeConfirmDialogComponent___c_TypeInfo, v1, v2);
    byte_4B1A340 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventRecipeConfirmDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B1A341 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__, v7, v8);
    sub_1BCA7E0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, v9, v10);
    byte_4B1A341 = 1;
  }
  v11 = sub_1BCAA2C(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_1(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B1A342 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__, v7, v8);
    sub_1BCA7E0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, v9, v10);
    byte_4B1A342 = 1;
  }
  v11 = sub_1BCAA2C(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_4(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B1A343 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__, v7, v8);
    sub_1BCA7E0(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, v9, v10);
    byte_4B1A343 = 1;
  }
  v11 = sub_1BCAA2C(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SceneJumpInfo_o *v15; // x20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x3

  if ( (byte_4B1A344 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v8, v9);
    byte_4B1A344 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v19, v20, v21);
      SceneJumpInfo___ctor_39380884(v15, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v18 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BCAA3C(v16, v17);
    case 1:
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v16 )
      {
        v18 = 71;
        v22 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v12, v13, v14);
      SceneJumpInfo___ctor_39380796(v15, (System_String_o *)StringLiteral_12781/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v18 = 32;
LABEL_10:
        v16 = Instance;
        v22 = (Il2CppObject *)v15;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v16, v18, 1, v22, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  SceneJumpInfo_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3

  if ( (byte_4B1A345 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12785/*"ServantEquipList"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12784/*"ServantEQCombine"*/, v10, v11);
    byte_4B1A345 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v21, v22, v23);
      SceneJumpInfo___ctor_39380884(v17, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v20 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1BCAA3C(v18, v19);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v24, v25, v26);
      SceneJumpInfo___ctor_39380796(v17, (System_String_o *)StringLiteral_12785/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v20 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v14, v15, v16);
      SceneJumpInfo___ctor_39380796(v17, (System_String_o *)StringLiteral_12784/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v20 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v20, 1, (Il2CppObject *)v17, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  SceneJumpInfo_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1A346 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    byte_4B1A346 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v12 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v9, v10, v11);
    SceneJumpInfo___ctor_39380884(v12, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v13, v14);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v12, 0LL);
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
      sub_1BCAA3C(_4__this, method);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))boxOverDlgCloseCallBack->fields.m_target)(
      boxOverDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&boxOverDlgCloseCallBack->fields.extra_arg);
  }
}