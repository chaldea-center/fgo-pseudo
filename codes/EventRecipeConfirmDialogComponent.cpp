void __fastcall EventRecipeConfirmDialogComponent___ctor(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8EC6 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EC6 = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UserGameEntity_o *SelfUserGame; // x20
  int maskSprite; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42E8EBC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)gift, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B5D5C4(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v17,
                                                    v18,
                                                    v19);
    byte_42E8EBC = 1;
  }
  if ( !gift )
    goto LABEL_31;
  if ( Gift__IsServant_28424960(gift->fields.type, 0LL) )
  {
    this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( this )
        return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)this, gift->fields.objectId, 0, 0LL);
    }
LABEL_31:
    sub_B5D69C(this, gift);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_31;
  this = (EventRecipeConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  gift->fields.objectId,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  this = (EventRecipeConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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


void __fastcall EventRecipeConfirmDialogComponent__CallBackPresentBoxOverDialog(
        EventRecipeConfirmDialogComponent_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v22; // x20

  if ( (byte_42E8EC2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isOpenPresentBox, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo, v9, v10, v11);
    byte_42E8EC2 = 1;
  }
  v12 = sub_B5D694(EventRecipeConfirmDialogComponent___c__DisplayClass63_0_TypeInfo);
  EventRecipeConfirmDialogComponent___c__DisplayClass63_0___ctor(
    (EventRecipeConfirmDialogComponent___c__DisplayClass63_0_o *)v12,
    0LL);
  if ( !v12
    || (*(_BYTE *)(v12 + 16) = isOpenPresentBox,
        *(_QWORD *)(v12 + 24) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)this,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v12,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass63_0__CallBackPresentBoxOverDialog_b__0__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_B5D69C(v13, v14);
  }
  PresentBoxOverDialog__Close_25079716(presentBoxOverDlg, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__CallOnDecide(
        EventRecipeConfirmDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventRecipeConfirmDialogComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x2
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x20
  BalanceConfig_c *v36; // x8
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v40; // x21
  PresentBoxOverDialog_ClickDelegate_o *v41; // x22
  __int64 v42; // x0
  __int64 v43; // x1
  BattleServantConfConponent_o *p_onDecide; // x0
  System_Action_int__o *onDecide; // x19
  int32_t PresentBoxMax; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_42E8EC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, result, (_DWORD)method, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11161/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, v21, v22, v23);
    this = (EventRecipeConfirmDialogComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42E8EC3 = 1;
  }
  if ( v5->fields.onDecide )
  {
    v27 = EventRecipeConfirmDialogComponent__CheckServant(this, *(const MethodInfo **)&result);
    if ( v27 )
    {
      if ( EventRecipeConfirmDialogComponent__CheckOverCapacity(
             (EventRecipeConfirmDialogComponent_o *)v27,
             v5->fields.eventRecipeGiftList,
             v28) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11161/*"RECIPE_CHECK_PRESEN_NUM_TXT"*/, 0LL);
        v36 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v36 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v36->static_fields->PresentBoxMax;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxMax);
        v38 = System_String__Format(v35, v37, 0LL);
        presentBoxOverDlg = v5->fields.presentBoxOverDlg;
        v40 = v38;
        v41 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B5D694(PresentBoxOverDialog_ClickDelegate_TypeInfo);
        PresentBoxOverDialog_ClickDelegate___ctor(
          v41,
          (Il2CppObject *)v5,
          Method_EventRecipeConfirmDialogComponent_CallBackPresentBoxOverDialog__,
          0LL);
        if ( presentBoxOverDlg )
        {
          PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v40, v41, 0, 0LL);
          goto LABEL_14;
        }
      }
      else
      {
        p_onDecide = (BattleServantConfConponent_o *)&v5->fields.onDecide;
        onDecide = v5->fields.onDecide;
        p_onDecide->klass = 0LL;
        sub_B5D560(p_onDecide, 0LL, v29, v30, v31, v32, v33, v34);
        if ( onDecide )
        {
          System_Action_int___Invoke(onDecide, result, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
          return;
        }
      }
      sub_B5D69C(v42, v43);
    }
LABEL_14:
    v5->fields.state = 2;
  }
}


bool __fastcall EventRecipeConfirmDialogComponent__CheckOverCapacity(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *giftEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UserPresentBoxMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v37; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v40; // x21
  signed int max_length; // w8
  unsigned int v42; // w24
  EventRecipeGiftEntity_o *v43; // x8
  __int64 v44; // x8
  int64_t v45; // x23
  __int64 v46; // x27
  __int64 v47; // x20
  int32_t v48; // w19
  BalanceConfig_c *v49; // x8
  __int64 v51; // x0
  UserPresentBoxEntity_array *v52; // [xsp+8h] [xbp-58h]

  if ( (byte_42E8EC0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)giftEnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42E8EC0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  VaildList = UserPresentBoxMaster__getVaildList(Master_WarQuestSelectionMaster, UserId, 0LL);
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_33;
  v52 = VaildList;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)UserId,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  v40 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !giftEnt )
    goto LABEL_33;
  max_length = giftEnt->max_length;
  if ( max_length >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= max_length )
        goto LABEL_34;
      v43 = giftEnt->m_Items[v42];
      if ( !v43 )
        goto LABEL_33;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_33;
      UserId = (int64_t)GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v43->fields.giftId, 0LL);
      if ( !UserId )
        goto LABEL_33;
      v44 = *(_QWORD *)(UserId + 24);
      v45 = UserId;
      if ( v44 )
      {
        if ( (int)v44 >= 1 )
          break;
      }
LABEL_27:
      max_length = giftEnt->max_length;
      if ( (int)++v42 >= max_length )
        goto LABEL_28;
    }
    v46 = 0LL;
    while ( (unsigned int)v46 < (unsigned int)v44 )
    {
      v47 = *(_QWORD *)(v45 + 32 + 8 * v46);
      if ( !v47 || !v40 )
        goto LABEL_33;
      UserId = System_Collections_Generic_List_int___Contains(
                 v40,
                 *(_DWORD *)(v47 + 20),
                 (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (UserId & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v40,
          *(_DWORD *)(v47 + 20),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v44) = *(_DWORD *)(v45 + 24);
      if ( (int)++v46 >= (int)v44 )
        goto LABEL_27;
    }
LABEL_34:
    v51 = sub_B5D6C8(UserId);
    sub_B5D668(v51, 0LL);
  }
LABEL_28:
  if ( !v52 )
LABEL_33:
    sub_B5D69C(UserId, v37);
  v48 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v40,
          (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
  v49 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  return (signed int)(v48 + v52->max_length) > v49->static_fields->PresentBoxMax;
}


bool __fastcall EventRecipeConfirmDialogComponent__CheckServant(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v33; // x1
  UserServantMaster_o *v34; // x19
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  CommonUI_o *v36; // x19
  int32_t v37; // w20
  int32_t svtKeep; // w21
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__62_0; // x22
  Il2CppObject *v41; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CommonUI_o *v49; // x0
  int32_t v50; // w1
  int32_t v51; // w2
  int32_t v52; // w3
  CommonUI_o *v53; // x19
  int32_t v54; // w20
  int32_t svtEquipKeep; // w21
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v56; // x8
  Il2CppObject *v57; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t Count; // w19
  int v66; // w2
  __int64 v67; // x3
  CommonUI_o *v68; // x20
  BalanceConfig_c *v69; // x8
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v70; // x8
  Il2CppObject *v71; // x23
  struct EventRecipeConfirmDialogComponent___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8EC1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__, v19, v20, v21);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__, v22, v23, v24);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__, v25, v26, v27);
    sub_B5D5C4(&EventRecipeConfirmDialogComponent___c_TypeInfo, v28, v29, v30);
    byte_42E8EC1 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v34 = (UserServantMaster_o *)Instance;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v34, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v36 = (CommonUI_o *)Instance;
      v37 = servantEquipSum[1];
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
        v41 = (Il2CppObject *)static_fields->__9;
        _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__62_0,
          v41,
          Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_0__,
          0LL);
        v42 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
        v42->__9__62_0 = _9__62_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v42->__9__62_0,
          (System_Int32_array **)_9__62_0,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      if ( v36 )
      {
        v49 = v36;
        v50 = v37;
        v51 = svtKeep;
        v52 = 0;
        goto LABEL_49;
      }
    }
LABEL_53:
    sub_B5D69C(Instance, v33);
  }
  Instance = (void *)UserServantMaster__CheckEquipAdd(v34, 1, 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v53 = (CommonUI_o *)Instance;
    v54 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v56 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v56->__9__62_1;
    if ( !_9__62_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v56 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)v56->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v57,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_1__,
        0LL);
      v58 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v58->__9__62_1 = _9__62_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v58->__9__62_1,
        (System_Int32_array **)_9__62_0,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    if ( !v53 )
      goto LABEL_53;
    v52 = 1;
    v49 = v53;
    v50 = v54;
  }
  else
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    if ( !UserCommandCodeMaster__CheckCommandCodeAdd(MasterData_WarQuestSelectionMaster, 0, 0LL) )
      return 1;
    Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_53;
    v68 = (CommonUI_o *)Instance;
    if ( !byte_42E4B73 )
    {
      sub_B5D5C4(&BalanceConfig_TypeInfo, v33, v66, v67);
      byte_42E4B73 = 1;
    }
    v69 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v69 = BalanceConfig_TypeInfo;
    }
    Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    svtEquipKeep = v69->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(EventRecipeConfirmDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRecipeConfirmDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRecipeConfirmDialogComponent___c_TypeInfo);
      Instance = EventRecipeConfirmDialogComponent___c_TypeInfo;
    }
    v70 = (struct EventRecipeConfirmDialogComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__62_0 = v70->__9__62_4;
    if ( !_9__62_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v70 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)v70->__9;
      _9__62_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__62_0,
        v71,
        Method_EventRecipeConfirmDialogComponent___c__CheckServant_b__62_4__,
        0LL);
      v72 = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
      v72->__9__62_4 = _9__62_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v72->__9__62_4,
        (System_Int32_array **)_9__62_0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    if ( !v68 )
      goto LABEL_53;
    v52 = 2;
    v49 = v68;
    v50 = Count;
  }
  v51 = svtEquipKeep;
LABEL_49:
  CommonUI__OpenSvtFrameShortDlg(v49, v50, v51, v52, 1, _9__62_0, 3, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
  return 0;
}


void __fastcall EventRecipeConfirmDialogComponent__Close(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v25; // x20
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8EBF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E8EBF = 1;
  }
  memset(&v26, 0, sizeof(v26));
  rewardItemObjList = this->fields.rewardItemObjList;
  this->fields.state = 4;
  if ( !rewardItemObjList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardItemObjList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
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
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent__Close_b__60_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v25, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int32_t max; // w21
  UserItemMaster_o *v15; // x20
  __int64 v16; // x22
  struct CommonConsumeEntity_array *v17; // x8
  CommonConsumeEntity_o *v18; // x8
  struct CommonConsumeEntity_array *v19; // x9
  CommonConsumeEntity_o *v20; // x9
  struct CommonConsumeEntity_array *v21; // x8
  CommonConsumeEntity_o *v22; // x9
  struct System_Boolean_array *isShortage; // x8
  bool v24; // w9
  __int64 v26; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8EB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8EB8 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___),
        entity = 0LL,
        (exchangeOriginItemList = this->fields.exchangeOriginItemList) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(Instance, v12);
  }
  max = this->fields.max;
  v15 = (UserItemMaster_o *)Instance;
  v16 = 0LL;
  while ( (int)v16 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v17 = this->fields.exchangeOriginItemList;
    if ( !v17 )
      goto LABEL_30;
    if ( (unsigned int)v16 >= v17->max_length )
      goto LABEL_32;
    v18 = v17->m_Items[v16];
    if ( !v18 || !v15 )
      goto LABEL_30;
    Instance = UserItemMaster__TryGetEntity(v15, &entity, Instance, v18->fields.objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      v19 = this->fields.exchangeOriginItemList;
      if ( !v19 )
        goto LABEL_30;
      if ( (unsigned int)v16 >= v19->max_length )
        goto LABEL_32;
      v20 = v19->m_Items[v16];
      if ( !v20 )
        goto LABEL_30;
      Instance = UnityEngine_Mathf__Min_41629336(max, entity->fields.num / v20->fields.num, 0LL);
      v21 = this->fields.exchangeOriginItemList;
      if ( !v21 )
        goto LABEL_30;
      if ( (unsigned int)v16 >= v21->max_length )
        goto LABEL_32;
      v22 = v21->m_Items[v16];
      if ( !v22 )
        goto LABEL_30;
      if ( !entity )
        goto LABEL_30;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v16 >= isShortage->max_length )
        goto LABEL_32;
      max = Instance;
      v24 = v22->fields.num > entity->fields.num;
    }
    else
    {
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_30;
      if ( (unsigned int)v16 >= isShortage->max_length )
      {
LABEL_32:
        v26 = sub_B5D6C8(Instance);
        sub_B5D668(v26, 0LL);
      }
      max = 0;
      v24 = 1;
    }
    isShortage->m_Items[v16 + 4] = v24;
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    ++v16;
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
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.eventRecipeEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventRecipeEntity, 0LL, v7, v8, v9, v10, v11, v12);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__InitItemSlider(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t makeCount; // w20
  UnityEngine_Component_o *itemSlider; // x0
  int32_t v7; // w1
  bool v8; // w2

  if ( (byte_42E8EB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, (_DWORD)method, v2, v3);
    byte_42E8EB9 = 1;
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
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
      v7 = this->fields.makeCount;
      v8 = 1;
      goto LABEL_18;
    }
LABEL_19:
    sub_B5D69C(itemSlider, method);
  }
  UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0LL);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_19;
  v7 = this->fields.makeCount;
  v8 = 0;
LABEL_18:
  UISliderWithButton__init((UISliderWithButton_o *)itemSlider, v7, v8, 1, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickCancel(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E8EBE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EBE = 1;
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
      sub_B5D69C(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventRecipeConfirmDialogComponent__Close(this, v7);
  }
}


void __fastcall EventRecipeConfirmDialogComponent__OnClickDecide(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E8EBD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EBD = 1;
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
  System_Int32_array *v7; // x7
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x25
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v87; // x22
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v95; // x1
  UILabel_o *titleLb; // x22
  int32_t eventId; // w22
  UISprite_o *eventItemIcon; // x23
  Il2CppObject *v99; // x0
  System_String_o *v100; // x24
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  struct System_Boolean_array *v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  const MethodInfo *v120; // x1
  UILabel_o *rewardListTitleLb; // x21
  UILabel_o *rewardListDescriptionLb; // x21
  UILabel_o *topLabel; // x21
  const MethodInfo *v124; // x2
  System_Action_o *v125; // x20
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E8EB7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)eventRecipeEntity, (_DWORD)eventRecipeGiftEntities, onDecide);
    sub_B5D5C4(&AtlasManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&bool___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent_EndOpen__, v23, v24, v25);
    sub_B5D5C4(&int_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_11169/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_11167/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_19623/*"icon_{0}"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_11168/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_11166/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_3329/*"COMMON_CONFIRM_EXECUTE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v59, v60, v61);
    byte_42E8EB7 = 1;
  }
  if ( !this->fields.state )
  {
    p_eventRecipeEntity = &this->fields.eventRecipeEntity;
    this->fields.eventRecipeEntity = eventRecipeEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeEntity,
      (System_Int32_array **)eventRecipeEntity,
      (System_String_array **)eventRecipeGiftEntities,
      (System_String_array **)onDecide,
      (System_Boolean_array **)boxOverDlg,
      (System_Int32_array **)boxOverDlgCallBack,
      (System_Int32_array *)method,
      v7);
    this->fields.onDecide = onDecide;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.boxOverDlgCloseCallBack,
      (System_Int32_array **)boxOverDlgCallBack,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    this->fields.presentBoxOverDlg = boxOverDlg;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.presentBoxOverDlg,
      (System_Int32_array **)boxOverDlg,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    this->fields.eventRecipeGiftList = eventRecipeGiftEntities;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventRecipeGiftList,
      (System_Int32_array **)eventRecipeGiftEntities,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    v87 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v87,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    this->fields.rewardItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v87;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.rewardItemObjList,
      (System_Int32_array **)v87,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11168/*"RECIPE_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
    v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
    v100 = System_String__Format((System_String_o *)StringLiteral_19623/*"icon_{0}"*/, v99, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(eventId, eventItemIcon, v100, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3329/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
    if ( !decideButtonLb )
      goto LABEL_24;
    UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !gameObject )
      goto LABEL_24;
    SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                         (CommonConsumeMaster_o *)gameObject,
                         eventRecipeEntity->fields.commonConsumeId,
                         0LL);
    this->fields.exchangeOriginItemList = SortedEntityList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.exchangeOriginItemList,
      (System_Int32_array **)SortedEntityList,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_24;
    v111 = (struct System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, exchangeOriginItemList->max_length);
    this->fields.isShortage = v111;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.isShortage,
      (System_Int32_array **)v111,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    this->fields.max = eventRecipeEntity->fields.maxNum;
    this->fields.makeCount = EventRecipeConfirmDialogComponent__GetItemSliderMax(this, v118);
    EventRecipeConfirmDialogComponent__InitItemSlider(this, v119);
    EventRecipeConfirmDialogComponent__SetExchangeBase(this, v120);
    rewardListTitleLb = this->fields.rewardListTitleLb;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11167/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_TITLE"*/, 0LL);
    if ( !rewardListTitleLb
      || (UILabel__set_text(rewardListTitleLb, (System_String_o *)gameObject, 0LL),
          rewardListDescriptionLb = this->fields.rewardListDescriptionLb,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11166/*"RECIPE_CONFIRM_DIALOG_REWARD_LIST_DESCRIPTION"*/, 0LL),
          !rewardListDescriptionLb)
      || (UILabel__set_text(rewardListDescriptionLb, (System_String_o *)gameObject, 0LL),
          topLabel = this->fields.topLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11169/*"RECIPE_CONFIRM_DIALOG_TOP_MESSAGE"*/, 0LL),
          !topLabel) )
    {
LABEL_24:
      sub_B5D69C(gameObject, v95);
    }
    UILabel__set_text(topLabel, (System_String_o *)gameObject, 0LL);
    EventRecipeConfirmDialogComponent__SetRewardList(this, eventRecipeGiftEntities, v124);
    this->fields.state = 1;
    v125 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v125, (Il2CppObject *)this, Method_EventRecipeConfirmDialogComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v125, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UILabel_o *warningLb; // x20
  CommonConsumeEntity_o *Name; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v31; // x8
  il2cpp_array_size_t v32; // w23
  UILabel_o *exchangeOriginLb; // x20
  struct UISprite_array *exchangeOriginItemIcon; // x8
  struct CommonConsumeEntity_array *v35; // x9
  CommonConsumeEntity_o *v36; // x9
  UISprite_o *v37; // x20
  int32_t objectId; // w21
  struct UILabel_array *exchangeOriginItemNames; // x8
  struct CommonConsumeEntity_array *v40; // x9
  UILabel_o *v41; // x20
  struct UILabel_array *exchangeOriginCounts; // x8
  struct CommonConsumeEntity_array *v43; // x9
  CommonConsumeEntity_o *v44; // x9
  int32_t num; // w9
  UILabel_o *v46; // x20
  int v47; // w8
  struct UILabel_array *v48; // x8
  struct System_Boolean_array *isShortage; // x9
  UIWidget_o *v50; // x20
  int v51; // s0
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v56; // x20
  struct CommonConsumeEntity_array *v57; // x8
  il2cpp_array_size_t v58; // w23
  UILabel_o *exchangeOriginLb2; // x20
  struct UISprite_array *exchangeOriginItemIcon2; // x8
  struct CommonConsumeEntity_array *v61; // x9
  CommonConsumeEntity_o *v62; // x9
  UISprite_o *v63; // x20
  int32_t v64; // w21
  struct UILabel_array *exchangeOriginItemNames2; // x8
  struct CommonConsumeEntity_array *v66; // x9
  UILabel_o *v67; // x20
  struct UILabel_array *exchangeOriginCounts2; // x8
  struct CommonConsumeEntity_array *v69; // x9
  CommonConsumeEntity_o *v70; // x9
  int32_t v71; // w9
  UILabel_o *v72; // x20
  int v73; // w8
  struct UILabel_array *v74; // x8
  struct System_Boolean_array *v75; // x9
  UIWidget_o *v76; // x20
  int v77; // s0
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v82; // x20
  struct CommonConsumeEntity_array *v83; // x8
  UILabel_o *exchangeDestinationLb; // x20
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t makeCount; // w8
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v88; // x0
  UILabel_o *exchangeDestinationCountKind; // x20
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UILabel_o *exchangeDestinationPointName; // x20
  struct EventRecipeEntity_o *v92; // x8
  int32_t v93; // w9
  int32_t eventPointNum; // w8
  UILabel_o *exchangeDestinationPointCount; // x19
  __int64 v96; // x0

  if ( (byte_42E8EBA & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_bool___, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11163/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11170/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11162/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11165/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11164/*"RECIPE_CONFIRM_DIALOG_KIND"*/, v23, v24, v25);
    byte_42E8EBA = 1;
  }
  warningLb = this->fields.warningLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11170/*"RECIPE_CONFIRM_DIALOG_WARNIG_MESSAGE"*/, 0LL);
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
                                    (const MethodInfo_1CA4C94 *)Method_System_Linq_Enumerable_Contains_bool___);
  if ( !gameObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Name & 1, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_124;
  v31 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v31 == 3 )
  {
    v32 = 0;
    do
    {
      exchangeOriginLb = this->fields.exchangeOriginLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11165/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
      if ( !exchangeOriginLb )
        goto LABEL_124;
      UILabel__set_text(exchangeOriginLb, (System_String_o *)Name, 0LL);
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_124;
      if ( v32 >= exchangeOriginItemIcon->max_length )
        goto LABEL_125;
      v35 = this->fields.exchangeOriginItemList;
      if ( !v35 )
        goto LABEL_124;
      if ( v32 >= v35->max_length )
        goto LABEL_125;
      v36 = v35->m_Items[v32];
      if ( !v36 )
        goto LABEL_124;
      v37 = exchangeOriginItemIcon->m_Items[v32];
      objectId = v36->fields.objectId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v37, objectId, 0LL);
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_124;
      if ( v32 >= exchangeOriginItemNames->max_length )
        goto LABEL_125;
      v40 = this->fields.exchangeOriginItemList;
      if ( !v40 )
        goto LABEL_124;
      if ( v32 >= v40->max_length )
        goto LABEL_125;
      Name = v40->m_Items[v32];
      if ( !Name )
        goto LABEL_124;
      v41 = exchangeOriginItemNames->m_Items[v32];
      Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
      if ( !v41 )
        goto LABEL_124;
      UILabel__set_text(v41, (System_String_o *)Name, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_124;
      if ( v32 >= exchangeOriginCounts->max_length )
        goto LABEL_125;
      v43 = this->fields.exchangeOriginItemList;
      if ( !v43 )
        goto LABEL_124;
      if ( v32 >= v43->max_length )
        goto LABEL_125;
      v44 = v43->m_Items[v32];
      if ( !v44 )
        goto LABEL_124;
      num = v44->fields.num;
      v46 = exchangeOriginCounts->m_Items[v32];
      v47 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v47 * num, 0LL);
      if ( !v46 )
        goto LABEL_124;
      UILabel__set_text(v46, (System_String_o *)Name, 0LL);
      v48 = this->fields.exchangeOriginCounts;
      if ( !v48 )
        goto LABEL_124;
      if ( v32 >= v48->max_length )
        goto LABEL_125;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_124;
      if ( v32 >= isShortage->max_length )
        goto LABEL_125;
      v50 = (UIWidget_o *)v48->m_Items[v32];
      if ( isShortage->m_Items[v32 + 4] )
      {
        *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_red(0LL);
        if ( !v50 )
          goto LABEL_124;
      }
      else
      {
        *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_white(0LL);
        if ( !v50 )
          goto LABEL_124;
      }
      UIWidget__set_color(v50, *(UnityEngine_Color_o *)&v51, 0LL);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_124;
      if ( v32 >= exchangeOriginCountKinds->max_length )
        goto LABEL_125;
      v56 = exchangeOriginCountKinds->m_Items[v32];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11164/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
      if ( !v56 )
        goto LABEL_124;
      UILabel__set_text(v56, (System_String_o *)Name, 0LL);
      v57 = this->fields.exchangeOriginItemList;
      if ( !v57 )
        goto LABEL_124;
      ++v32;
    }
    while ( (signed int)v32 < (signed int)v57->max_length );
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
    if ( (int)v31 >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        exchangeOriginLb2 = this->fields.exchangeOriginLb2;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11165/*"RECIPE_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
        if ( !exchangeOriginLb2 )
          break;
        UILabel__set_text(exchangeOriginLb2, (System_String_o *)Name, 0LL);
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v58 >= exchangeOriginItemIcon2->max_length )
          goto LABEL_125;
        v61 = this->fields.exchangeOriginItemList;
        if ( !v61 )
          break;
        if ( v58 >= v61->max_length )
          goto LABEL_125;
        v62 = v61->m_Items[v58];
        if ( !v62 )
          break;
        v63 = exchangeOriginItemIcon2->m_Items[v58];
        v64 = v62->fields.objectId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)AtlasManager__SetItem(v63, v64, 0LL);
        exchangeOriginItemNames2 = this->fields.exchangeOriginItemNames2;
        if ( !exchangeOriginItemNames2 )
          break;
        if ( v58 >= exchangeOriginItemNames2->max_length )
          goto LABEL_125;
        v66 = this->fields.exchangeOriginItemList;
        if ( !v66 )
          break;
        if ( v58 >= v66->max_length )
          goto LABEL_125;
        Name = v66->m_Items[v58];
        if ( !Name )
          break;
        v67 = exchangeOriginItemNames2->m_Items[v58];
        Name = (CommonConsumeEntity_o *)CommonConsumeEntity__GetName(Name, 0LL);
        if ( !v67 )
          break;
        UILabel__set_text(v67, (System_String_o *)Name, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v58 >= exchangeOriginCounts2->max_length )
          goto LABEL_125;
        v69 = this->fields.exchangeOriginItemList;
        if ( !v69 )
          break;
        if ( v58 >= v69->max_length )
          goto LABEL_125;
        v70 = v69->m_Items[v58];
        if ( !v70 )
          break;
        v71 = v70->fields.num;
        v72 = exchangeOriginCounts2->m_Items[v58];
        v73 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
        Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v73 * v71, 0LL);
        if ( !v72 )
          break;
        UILabel__set_text(v72, (System_String_o *)Name, 0LL);
        v74 = this->fields.exchangeOriginCounts2;
        if ( !v74 )
          break;
        if ( v58 >= v74->max_length )
          goto LABEL_125;
        v75 = this->fields.isShortage;
        if ( !v75 )
          break;
        if ( v58 >= v75->max_length )
          goto LABEL_125;
        v76 = (UIWidget_o *)v74->m_Items[v58];
        if ( v75->m_Items[v58 + 4] )
        {
          *(UnityEngine_Color_o *)&v77 = UnityEngine_Color__get_red(0LL);
          if ( !v76 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v77 = UnityEngine_Color__get_white(0LL);
          if ( !v76 )
            break;
        }
        UIWidget__set_color(v76, *(UnityEngine_Color_o *)&v77, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v58 >= exchangeOriginCountKinds2->max_length )
        {
LABEL_125:
          v96 = sub_B5D6C8(Name);
          sub_B5D668(v96, 0LL);
        }
        v82 = exchangeOriginCountKinds2->m_Items[v58];
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11164/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
        if ( !v82 )
          break;
        UILabel__set_text(v82, (System_String_o *)Name, 0LL);
        v83 = this->fields.exchangeOriginItemList;
        if ( !v83 )
          break;
        if ( (signed int)++v58 >= (signed int)v83->max_length )
          goto LABEL_103;
      }
LABEL_124:
      sub_B5D69C(Name, v28);
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
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11162/*"RECIPE_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)Name, 0LL);
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(exchangeDestinationItemIcon, 99, 0LL);
  makeCount = this->fields.makeCount;
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v88 = makeCount <= 1 ? 1LL : (unsigned int)makeCount;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v88, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)Name, 0LL);
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11164/*"RECIPE_CONFIRM_DIALOG_KIND"*/, 0LL);
  if ( !exchangeDestinationCountKind )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)Name, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_124;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  exchangeDestinationPointName = this->fields.exchangeDestinationPointName;
  Name = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11163/*"RECIPE_CONFIRM_DIALOG_DESTINATION_POINT_NAME"*/, 0LL);
  if ( !exchangeDestinationPointName )
    goto LABEL_124;
  UILabel__set_text(exchangeDestinationPointName, (System_String_o *)Name, 0LL);
  v92 = this->fields.eventRecipeEntity;
  if ( !v92 )
    goto LABEL_124;
  v93 = this->fields.makeCount;
  eventPointNum = v92->fields.eventPointNum;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( v93 <= 1 )
    v93 = 1;
  Name = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormatLong(v93 * eventPointNum, 0LL);
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
    sub_B5D69C(v6, v7);
  ItemIconComponent__SetPossessionOneLabel(item, v6, 0LL);
  ItemIconComponent__SetPossessionRoot(item, this->fields.possesionRootMovePositionY, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeConfirmDialogComponent__SetRewardList(
        EventRecipeConfirmDialogComponent_o *this,
        EventRecipeGiftEntity_array *eventRecipeGiftEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventRecipeGiftEntity_array *v4; // x22
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v28; // x1
  __int64 v29; // x8
  unsigned int v30; // w9
  EventRecipeGiftEntity_o *v31; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v33; // x22
  unsigned int v34; // w26
  GiftEntity_o *v35; // x23
  struct UnityEngine_GameObject_o *rewardItemIcon; // x24
  UnityEngine_GameObject_o *v37; // x24
  UnityEngine_Transform_o *transform; // x25
  int v39; // s0
  ItemIconComponent_o *v42; // x25
  int32_t v43; // w3
  const MethodInfo *v44; // x3
  EventRecipeGiftEntity_o *v45; // x8
  int32_t topIconId; // w20
  bool v47; // zf
  UnityEngine_GameObject_o *v48; // x20
  struct System_Collections_Generic_List_GameObject__o *rewardItemObjList; // x21
  float v50; // s0
  bool v51; // w1
  __int64 v52; // x0
  UnityEngine_GameObject_o *v53; // [xsp+8h] [xbp-68h]
  EventRecipeGiftEntity_array *v54; // [xsp+10h] [xbp-60h]
  unsigned int v55; // [xsp+1Ch] [xbp-54h]
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  v4 = eventRecipeGiftEntities;
  if ( (byte_42E8EBB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_UIGrid___,
      (_DWORD)eventRecipeGiftEntities,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E8EBB = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v4 )
    goto LABEL_47;
  v29 = *(_QWORD *)&v4->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = 0;
    v53 = Instance;
    v54 = v4;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v29 )
        goto LABEL_48;
      v31 = v4->m_Items[v30];
      if ( !v31 )
        goto LABEL_47;
      v55 = v30;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                               (GiftMaster_o *)Instance,
                                               v31->fields.giftId,
                                               0LL);
      if ( !Instance )
        goto LABEL_47;
      klass = (int)Instance[1].klass;
      v33 = Instance;
      if ( klass >= 1 )
        break;
LABEL_28:
      Instance = (UnityEngine_GameObject_o *)this->fields.listRoot;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)Instance,
                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      v4 = v54;
      if ( !Instance )
        goto LABEL_47;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))Instance->klass[1]._1.castClass)(
        Instance,
        Instance->klass[1]._1.declaringType);
      v29 = *(_QWORD *)&v54->max_length;
      Instance = v53;
      v30 = v55 + 1;
      if ( (int)(v55 + 1) >= (int)v29 )
        goto LABEL_31;
    }
    v34 = 0;
    while ( v34 < klass )
    {
      v35 = (GiftEntity_o *)*((_QWORD *)&v33[1].monitor + (int)v34);
      rewardItemIcon = this->fields.rewardItemIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)rewardItemIcon,
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_47;
      v37 = Instance;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
      if ( !Instance )
        goto LABEL_47;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
      transform = UnityEngine_GameObject__get_transform(v37, 0LL);
      *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !Instance )
        goto LABEL_47;
      v56.fields.x = this->fields.iconScale;
      v56.fields.y = v56.fields.x;
      v56.fields.z = v56.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v56, 0LL);
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v37,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v35 )
        goto LABEL_47;
      v42 = (ItemIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_47;
      v43 = v35->fields.num <= 1 ? -1 : v35->fields.num;
      ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v35->fields.type, v35->fields.objectId, v43, 0, 0LL);
      EventRecipeConfirmDialogComponent__SetPossession(this, v42, v35, v44);
      UnityEngine_GameObject__SetActive(v37, 1, 0LL);
      Instance = (UnityEngine_GameObject_o *)this->fields.rewardItemObjList;
      if ( !Instance )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      klass = (int)v33[1].klass;
      if ( (int)++v34 >= klass )
        goto LABEL_28;
    }
LABEL_48:
    v52 = sub_B5D6C8(Instance);
    sub_B5D668(v52, 0LL);
  }
LABEL_31:
  if ( !(_DWORD)v29 )
    goto LABEL_48;
  v45 = v4->m_Items[0];
  if ( !v45 )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_47;
  topIconId = v45->fields.topIconId;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v47 = topIconId == 1;
  v48 = Instance;
  if ( !v47 )
  {
    if ( Instance )
    {
      v51 = 0;
      goto LABEL_46;
    }
LABEL_47:
    sub_B5D69C(Instance, v28);
  }
  rewardItemObjList = this->fields.rewardItemObjList;
  if ( !rewardItemObjList )
    goto LABEL_47;
  if ( !rewardItemObjList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  Instance = rewardItemObjList->fields._items->m_Items[0];
  if ( !Instance )
    goto LABEL_47;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  LODWORD(v50) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v48, v50, 0LL);
  Instance = (UnityEngine_GameObject_o *)this->fields.topLabel;
  if ( !Instance )
    goto LABEL_47;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v51 = 1;
LABEL_46:
  UnityEngine_GameObject__SetActive(Instance, v51, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent__SliderValueChange(
        EventRecipeConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UISliderWithButton_o *itemSlider; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v7; // x9
  unsigned int v8; // w21
  struct UILabel_array *exchangeOriginCounts; // x10
  CommonConsumeEntity_o *v10; // x8
  UILabel_o *v11; // x20
  int32_t num; // w23
  int32_t makeCount; // w24
  unsigned int v14; // w21
  struct UILabel_array *exchangeOriginCounts2; // x10
  CommonConsumeEntity_o *v16; // x8
  UILabel_o *v17; // x20
  int32_t v18; // w23
  int32_t v19; // w24
  UILabel_o *exchangeDestinationItemCount; // x20
  int64_t v21; // x21
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v23; // w9
  UILabel_o *exchangeDestinationPointCount; // x19
  __int64 v25; // x0

  if ( (byte_42E8EC4 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EC4 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_37;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  this->fields.makeCount = (int)itemSlider;
  if ( !exchangeOriginItemList )
    goto LABEL_37;
  v7 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v7 == 3 )
  {
    v8 = 0;
    while ( 1 )
    {
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_37;
      if ( v8 >= exchangeOriginCounts->max_length || v8 >= (unsigned int)v7 )
        goto LABEL_38;
      v10 = exchangeOriginItemList->m_Items[v8];
      if ( !v10 )
        goto LABEL_37;
      v11 = exchangeOriginCounts->m_Items[v8];
      num = v10->fields.num;
      makeCount = this->fields.makeCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(makeCount * num, 0LL);
      if ( !v11 )
        goto LABEL_37;
      UILabel__set_text(v11, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_37;
      LODWORD(v7) = exchangeOriginItemList->max_length;
      if ( (int)++v8 >= (int)v7 )
        goto LABEL_30;
    }
  }
  if ( (int)v7 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        break;
      if ( v14 >= exchangeOriginCounts2->max_length || v14 >= (unsigned int)v7 )
      {
LABEL_38:
        v25 = sub_B5D6C8(itemSlider);
        sub_B5D668(v25, 0LL);
      }
      v16 = exchangeOriginItemList->m_Items[v14];
      if ( !v16 )
        break;
      v17 = exchangeOriginCounts2->m_Items[v14];
      v18 = v16->fields.num;
      v19 = this->fields.makeCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v19 * v18, 0LL);
      if ( !v17 )
        break;
      UILabel__set_text(v17, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        break;
      LODWORD(v7) = exchangeOriginItemList->max_length;
      if ( (int)++v14 >= (int)v7 )
        goto LABEL_30;
    }
LABEL_37:
    sub_B5D69C(itemSlider, method);
  }
LABEL_30:
  exchangeDestinationItemCount = this->fields.exchangeDestinationItemCount;
  v21 = this->fields.makeCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(v21, 0LL);
  if ( !exchangeDestinationItemCount )
    goto LABEL_37;
  UILabel__set_text(exchangeDestinationItemCount, (System_String_o *)itemSlider, 0LL);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_37;
  v23 = this->fields.makeCount;
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  itemSlider = (UISliderWithButton_o *)LocalizationManager__GetNumberFormatLong(
                                         v23 * eventRecipeEntity->fields.eventPointNum,
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E8EC5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EC5 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventRecipeConfirmDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E564A & 1) == 0 )
  {
    sub_B5D5C4(&EventRecipeConfirmDialogComponent___c_TypeInfo, v1, v2, v3);
    byte_42E564A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventRecipeConfirmDialogComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventRecipeConfirmDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRecipeConfirmDialogComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E564B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__, v8, v9, v10);
    sub_B5D5C4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo, v11, v12, v13);
    byte_42E564B = 1;
  }
  v14 = sub_B5D694(EventRecipeConfirmDialogComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_0__CheckServant_b__2__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_1(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E564C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__, v8, v9, v10);
    sub_B5D5C4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo, v11, v12, v13);
    byte_42E564C = 1;
  }
  v14 = sub_B5D694(EventRecipeConfirmDialogComponent___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_1__CheckServant_b__3__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


void __fastcall EventRecipeConfirmDialogComponent___c___CheckServant_b__62_4(
        EventRecipeConfirmDialogComponent___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E564D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__, v8, v9, v10);
    sub_B5D5C4(&EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo, v11, v12, v13);
    byte_42E564D = 1;
  }
  v14 = sub_B5D694(EventRecipeConfirmDialogComponent___c__DisplayClass62_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_EventRecipeConfirmDialogComponent___c__DisplayClass62_2__CheckServant_b__5__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v16; // x20
  AvalonSceneManager_o *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w1
  Il2CppObject *v20; // x3

  if ( (byte_42E564E & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12858/*"ServantCombine"*/, v11, v12, v13);
    byte_42E564E = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509080(v16, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v19 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B5D69C(v17, v18);
    case 1:
      v17 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v17 )
      {
        v19 = 71;
        v20 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v17, v19, 1, v20, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v16, (System_String_o *)StringLiteral_12858/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v19 = 32;
LABEL_12:
        v17 = (AvalonSceneManager_o *)Instance;
        v20 = (Il2CppObject *)v16;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t result; // w8
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w1

  if ( (byte_42E564F & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12862/*"ServantEquipList"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12861/*"ServantEQCombine"*/, v14, v15, v16);
    byte_42E564F = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509080(v19, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v22 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v19, (System_String_o *)StringLiteral_12862/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v22 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B5D69C(v20, v21);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v19, (System_String_o *)StringLiteral_12861/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v22 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v22, 1, (Il2CppObject *)v19, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E5650 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v8, v9, v10);
    byte_42E5650 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v12 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17509080(v12, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B5D69C(v13, v14);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v12, 0LL);
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
      sub_B5D69C(_4__this, method);
    }
    System_Action__Invoke((System_Action_o *)_4__this, 0LL);
  }
}