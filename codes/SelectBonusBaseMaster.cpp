void __fastcall SelectBonusBaseMaster___ctor(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16832 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__, method, v2);
    byte_4B16832 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    518,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusBaseMaster__OpenSelectBonusConfirmDialog(
        SelectBonusBaseMaster_o *this,
        int32_t eventId,
        System_String_o *dialogName,
        int32_t resultIndex,
        int32_t giftType,
        int32_t giftObjectId,
        System_String_o *bonusGetMessage,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x25
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *Instance; // x0
  int32_t v45; // w20
  int32_t v46; // w22
  int32_t v47; // w21
  CommonUI_o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  SelectBonusConfirmDialog_CallbackFunc_o *v52; // x24

  if ( (byte_4B16830 & 1) == 0 )
  {
    sub_1BCA7E0(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo, *(_QWORD *)&eventId, dialogName);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__, v19, v20);
    sub_1BCA7E0(&SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo, v21, v22);
    byte_4B16830 = 1;
  }
  v23 = sub_1BCAA2C(
          SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo,
          *(_QWORD *)&eventId,
          dialogName,
          *(_QWORD *)&resultIndex);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_6;
  *(_QWORD *)(v23 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v23 + 24) = eventId;
  *(_QWORD *)(v23 + 32) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)endCallback, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v23 + 40) = bonusGetMessage;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 40), (int64_t)bonusGetMessage, v38, v39, v40, v41, v42, v43);
  *(_DWORD *)(v23 + 48) = giftType;
  *(_DWORD *)(v23 + 52) = giftObjectId;
  *(_DWORD *)(v23 + 56) = resultIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v46 = *(_DWORD *)(v23 + 52);
  v45 = *(_DWORD *)(v23 + 56);
  v47 = *(_DWORD *)(v23 + 48);
  v48 = (CommonUI_o *)Instance;
  v52 = (SelectBonusConfirmDialog_CallbackFunc_o *)sub_1BCAA2C(
                                                     SelectBonusConfirmDialog_CallbackFunc_TypeInfo,
                                                     v49,
                                                     v50,
                                                     v51);
  SelectBonusConfirmDialog_CallbackFunc___ctor(
    v52,
    (Il2CppObject *)v23,
    Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__,
    0LL);
  if ( !v48 )
LABEL_6:
    sub_1BCAA3C(v24, v25);
  CommonUI__OpenSelectBonusConfirmDialog(v48, dialogName, v45, v47, v46, v52, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusBaseMaster__OpenSelectBonusDialog(
        SelectBonusBaseMaster_o *this,
        int32_t eventId,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x19
  Il2CppObject *Master_object; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_SelectBonusEntity__o *SelectBonusEntitiesByEventId; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x8
  Il2CppObject *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x8
  System_String_o *v62; // x21
  CommonUI_o *v63; // x20
  SelectBonusDialog_CallbackFunc_o *v64; // x22

  if ( (byte_4B1682F & 1) == 0 )
  {
    sub_1BCA7E0(&SelectBonusDialog_CallbackFunc_TypeInfo, *(_QWORD *)&eventId, endCallback);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SelectBonusBaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SelectBonusMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__, v21, v22);
    sub_1BCA7E0(&SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo, v23, v24);
    byte_4B1682F = 1;
  }
  v25 = sub_1BCAA2C(SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo, *(_QWORD *)&eventId, endCallback, method);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_19;
  *(_QWORD *)(v25 + 24) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)endCallback, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 48) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 48), (int64_t)this, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v25 + 56) = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v25 + 40),
         *(_DWORD *)(v25 + 56),
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SelectBonusMaster___);
    if ( !Master_object )
      goto LABEL_19;
    SelectBonusEntitiesByEventId = SelectBonusMaster__GetSelectBonusEntitiesByEventId(
                                     (SelectBonusMaster_o *)Master_object,
                                     *(_DWORD *)(v25 + 56),
                                     v42);
    *(_QWORD *)(v25 + 16) = SelectBonusEntitiesByEventId;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v25 + 16),
      (int64_t)SelectBonusEntitiesByEventId,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v51 = *(_QWORD *)(v25 + 16);
    if ( v51 )
    {
      if ( *(int *)(v51 + 24) > 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v50);
        v52 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
        *(_QWORD *)(v25 + 32) = v52;
        sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)v52, v53, v54, v55, v56, v57, v58);
        Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v61 = *(_QWORD *)(v25 + 40);
        if ( v61 )
        {
          v62 = *(System_String_o **)(v61 + 24);
          v63 = (CommonUI_o *)Master_object;
          v64 = (SelectBonusDialog_CallbackFunc_o *)sub_1BCAA2C(SelectBonusDialog_CallbackFunc_TypeInfo, v27, v59, v60);
          SelectBonusDialog_CallbackFunc___ctor(
            v64,
            (Il2CppObject *)v25,
            Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__,
            0LL);
          if ( v63 )
          {
            CommonUI__OpenSelectBonusDialog(v63, v62, v64, 0LL);
            return;
          }
        }
LABEL_19:
        sub_1BCAA3C(Master_object, v27);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v25 + 24), 0LL);
}


void __fastcall SelectBonusBaseMaster__UpdateGiftBadgeNum(SelectBonusBaseMaster_o *this, const MethodInfo *method)
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
  TerminalSceneComponent_c *v11; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  GiftButtonCtrl_o *Instance; // x0
  UISprite_c *klass; // x8
  __int64 v17; // x8
  UnityEngine_Object_o *v18; // x19
  __int64 v19; // x2
  UISprite_c *v20; // x8
  __int64 v21; // x8
  CombineRootComponent_o *giftButton; // x0
  CombineRootComponent_c *v23; // x8
  unsigned int methodPtr_low; // w9
  __int64 v25; // x11
  __int64 v26; // x11

  if ( (byte_4B16831 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&ShopRootComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v9, v10);
    byte_4B16831 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v11->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v14);
      byte_4B10F83 = 1;
    }
    Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
      Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.limitedPeriodSprite->klass;
    if ( !klass )
      goto LABEL_42;
    v17 = *(_QWORD *)&klass->_2.element_size;
    if ( !v17 )
      goto LABEL_42;
    v18 = *(UnityEngine_Object_o **)(v17 + 120);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v19);
        byte_4B10F83 = 1;
      }
      Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
        Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      }
      v20 = Instance[1].fields.limitedPeriodSprite->klass;
      if ( v20 )
      {
        v21 = *(_QWORD *)&v20->_2.element_size;
        if ( v21 )
        {
          Instance = *(GiftButtonCtrl_o **)(v21 + 120);
          if ( Instance )
          {
            GiftButtonCtrl__InvalidateGiftInfo(Instance, 0LL);
            goto LABEL_33;
          }
        }
      }
LABEL_42:
      sub_1BCAA3C(Instance, v13);
    }
  }
LABEL_33:
  Instance = (GiftButtonCtrl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  giftButton = (CombineRootComponent_o *)Instance->fields.giftButton;
  if ( giftButton )
  {
    v23 = giftButton->klass;
    methodPtr_low = LOBYTE(giftButton->klass->vtable._0_Equals.methodPtr);
    v25 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( methodPtr_low >= (unsigned int)v25
      && (CombineRootComponent_c *)v23->_2.typeHierarchy[v25 - 1] == CombineRootComponent_TypeInfo )
    {
      CombineRootComponent__UpdateGiftBadgeNum(giftButton, 0LL);
    }
    else
    {
      v26 = LOBYTE(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( methodPtr_low >= (unsigned int)v26
        && (ShopRootComponent_c *)v23->_2.typeHierarchy[v26 - 1] == ShopRootComponent_TypeInfo )
      {
        ShopRootComponent__UpdateGiftBadgeNum((ShopRootComponent_o *)giftButton, 0LL);
      }
    }
  }
}


void __fastcall SelectBonusBaseMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16833 & 1) == 0 )
  {
    sub_1BCA7E0(&SelectBonusBaseMaster___c_TypeInfo, v1, v2);
    byte_4B16833 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SelectBonusBaseMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SelectBonusBaseMaster___c_TypeInfo->static_fields->__9 = (struct SelectBonusBaseMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SelectBonusBaseMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SelectBonusBaseMaster___c___ctor(SelectBonusBaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectBonusBaseMaster___c___OpenSelectBonusConfirmDialog_b__1_3(
        SelectBonusBaseMaster___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B16834 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B16834 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0LL);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass0_0___ctor(
        SelectBonusBaseMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusBaseMaster___c__DisplayClass0_0___OpenSelectBonusDialog_b__0(
        SelectBonusBaseMaster___c__DisplayClass0_0_o *this,
        int32_t resultIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  void *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct System_Collections_Generic_List_SelectBonusEntity__o *selectBonusList; // x21
  System_Func_object__bool__o *v20; // x22
  Il2CppObject *v21; // x21
  int32_t v22; // w4
  int32_t v23; // w5
  struct SelectBonusBaseEntity_o *selectBonusBaseEnt; // x8
  const MethodInfo *v25; // [xsp+0h] [xbp-50h]

  if ( (byte_4B16835 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___, *(_QWORD *)&resultIndex, method);
    sub_1BCA7E0(&System_Func_SelectBonusEntity__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__, v10, v11);
    sub_1BCA7E0(&SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo, v12, v13);
    byte_4B16835 = 1;
  }
  v14 = sub_1BCAA2C(SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo, *(_QWORD *)&resultIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_14;
  *(_DWORD *)(v14 + 16) = resultIndex;
  selectBonusList = this->fields.selectBonusList;
  v20 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SelectBonusEntity__bool__TypeInfo, v16, v17, v18);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__,
    0LL);
  v21 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectBonusList,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseSelectBonusDialog((CommonUI_o *)Instance, 0LL);
  if ( !v21 )
  {
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return;
  }
  Instance = this->fields.giftMst;
  if ( !Instance
    || ((Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v21[1].monitor, 0LL)) == 0LL
      ? (v22 = 0, v23 = 0)
      : (v22 = *((_DWORD *)Instance + 5), v23 = *((_DWORD *)Instance + 6)),
        (selectBonusBaseEnt = this->fields.selectBonusBaseEnt) == 0LL || (Instance = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(Instance, v16);
  }
  SelectBonusBaseMaster__OpenSelectBonusConfirmDialog(
    (SelectBonusBaseMaster_o *)Instance,
    this->fields.eventId,
    selectBonusBaseEnt->fields.confirmDialogObject,
    *(_DWORD *)(v14 + 16),
    v22,
    v23,
    (System_String_o *)v21[2].klass,
    this->fields.endCallback,
    v25);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass0_1___ctor(
        SelectBonusBaseMaster___c__DisplayClass0_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SelectBonusBaseMaster___c__DisplayClass0_1___OpenSelectBonusDialog_b__1(
        SelectBonusBaseMaster___c__DisplayClass0_1_o *this,
        SelectBonusEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.idx == this->fields.resultIndex;
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___ctor(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__0(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B16836 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventScriptFlagRequest___, *(_QWORD *)&result, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__, v11, v12);
    byte_4B16836 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseSelectBonusConfirmDialog(Instance, 0LL);
  if ( result == 1 )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
      NetworkManager_ResultCallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v18, v19, v20, v21, v22, v23);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                               _9__1,
                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventScriptFlagRequest___);
    if ( !Instance )
      goto LABEL_15;
    EventScriptFlagRequest__beginRequest(
      (EventScriptFlagRequest_o *)Instance,
      this->fields.eventId,
      this->fields.resultIndex,
      0LL);
  }
  else if ( !result )
  {
    Instance = (CommonUI_o *)this->fields.__4__this;
    if ( Instance )
    {
      SelectBonusBaseMaster__OpenSelectBonusDialog(
        (SelectBonusBaseMaster_o *)Instance,
        this->fields.eventId,
        this->fields.endCallback,
        v16);
      return;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v14);
  }
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__1(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SelectBonusBaseMaster___c__DisplayClass1_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *_9__2; // x24
  CommonUI_o *v11; // x23
  System_String_o *bonusGetMessage; // x20
  int32_t giftType; // w21
  int32_t giftObjectId; // w22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v3 = this;
  if ( (byte_4B16837 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)sub_1BCA7E0(
                                                             &Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__,
                                                             v6,
                                                             v7);
    byte_4B16837 = 1;
  }
  if ( !v3->fields.__4__this )
    goto LABEL_8;
  SelectBonusBaseMaster__UpdateGiftBadgeNum((SelectBonusBaseMaster_o *)this, (const MethodInfo *)result);
  this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = v3->fields.__9__2;
  v11 = (CommonUI_o *)this;
  bonusGetMessage = v3->fields.bonusGetMessage;
  giftType = v3->fields.giftType;
  giftObjectId = v3->fields.giftObjectId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, result, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v15, v16, v17, v18, v19, v20);
  }
  if ( !v11 )
LABEL_8:
    sub_1BCAA3C(this, result);
  CommonUI__OpenSelectBonusGetDialog(v11, bonusGetMessage, giftType, giftObjectId, _9__2, 0LL);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__2(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  PartyOrganizationUtility_o *p_endCallback; // x19
  System_Delegate_o *v14; // x20
  struct System_Action_o *endCallback; // t1
  SelectBonusBaseMaster___c_c *v16; // x0
  System_Action_o *_9__1_3; // x21
  Il2CppObject *v18; // x22
  struct SelectBonusBaseMaster___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Delegate_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  System_Action_c *v34; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *klass; // x21
  CommonUI_o *v37; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x20
  __int64 v42; // x0
  __int64 v43; // x1

  if ( (byte_4B16838 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call__, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__, v9, v10);
    sub_1BCA7E0(&SelectBonusBaseMaster___c_TypeInfo, v11, v12);
    byte_4B16838 = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = (PartyOrganizationUtility_o *)&this->fields.endCallback;
  v14 = (System_Delegate_o *)endCallback;
  v16 = SelectBonusBaseMaster___c_TypeInfo;
  if ( !SelectBonusBaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectBonusBaseMaster___c_TypeInfo, method);
    v16 = SelectBonusBaseMaster___c_TypeInfo;
  }
  _9__1_3 = v16->static_fields->__9__1_3;
  if ( !_9__1_3 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, method);
      v16 = SelectBonusBaseMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__1_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(_9__1_3, v18, Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__, 0LL);
    static_fields = SelectBonusBaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_3 = _9__1_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_3, (int64_t)_9__1_3, v20, v21, v22, v23, v24, v25);
  }
  v26 = System_Delegate__Combine(v14, (System_Delegate_o *)_9__1_3, 0LL);
  v33 = (int64_t)v26;
  if ( !v26 )
    goto LABEL_13;
  v34 = System_Action_TypeInfo;
  if ( (System_Action_c *)v26->klass != System_Action_TypeInfo
    || (p_endCallback->klass = (PartyOrganizationUtility_c *)v26, (System_Action_c *)v26->klass != v34) )
  {
    sub_1BCACFC(v26);
LABEL_13:
    p_endCallback->klass = (PartyOrganizationUtility_c *)v33;
  }
  sub_1BCA784(p_endCallback, v33, v27, v28, v29, v30, v31, v32);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  klass = (Il2CppObject *)p_endCallback->klass;
  v37 = (CommonUI_o *)Instance;
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(v41, klass, Method_ActionExtensions_Call__, 0LL);
  if ( !v37 )
    sub_1BCAA3C(v42, v43);
  CommonUI__CloseSelectBonusGetDialog_30876580(v37, v41, 0LL);
}