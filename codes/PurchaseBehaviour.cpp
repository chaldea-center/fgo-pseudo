void __fastcall PurchaseBehaviour___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B15B56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v8, v9);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v10, v11);
    byte_4B15B56 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v1,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseBehaviour_TypeInfo->static_fields,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BankShopEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  static_fields = PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v22;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->BankShopEntityCollection,
    (int64_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  PurchaseBehaviour_TypeInfo->static_fields->isOpenPurchaseDialogEvent = 0;
}


void __fastcall PurchaseBehaviour___ctor(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseBehaviour_o *v3; // x19
  PurchaseLogic_o *Instance; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  Il2CppObject *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v3 = this;
  if ( (byte_4B15B55 & 1) == 0 )
  {
    this = (PurchaseBehaviour_o *)sub_1BCA7E0(&PurchaseLogicExternal_TypeInfo, method, v2);
    byte_4B15B55 = 1;
  }
  Instance = PurchaseLogic__GetInstance((const MethodInfo *)this);
  v3->fields._purchaseLogic = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._purchaseLogic, (int64_t)Instance, v5, v6, v7, v8, v9, v10);
  v14 = (Il2CppObject *)sub_1BCAA2C(PurchaseLogicExternal_TypeInfo, v11, v12, v13);
  System_Object___ctor(v14, 0LL);
  v3->fields._purchaseLogicExternal = (struct PurchaseLogicExternal_o *)v14;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields._purchaseLogicExternal,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)v3, 0LL);
}


void __fastcall PurchaseBehaviour__Activate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PurchaseBehaviour_c *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v9; // x1

  if ( (byte_4B15B4A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v3, v4);
    byte_4B15B4A = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
      sub_1BCAA3C(monitor, v9);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 456LL))(
      monitor,
      *(_QWORD *)(*(_QWORD *)monitor + 464LL));
  }
}


void __fastcall PurchaseBehaviour__ActivateBoth(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PurchaseBehaviour_c *v5; // x0
  __int64 v6; // x1
  PurchaseBehaviour_o *Instance; // x19
  PurchaseLogicExternal_o *purchaseLogicExternal; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B15B4C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v3, v4);
    byte_4B15B4C = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = PurchaseBehaviour__GetInstance((const MethodInfo *)v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  purchaseLogicExternal = (PurchaseLogicExternal_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)Instance,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)purchaseLogicExternal & 1) == 0 )
  {
    if ( !Instance
      || (purchaseLogicExternal = Instance->fields._purchaseLogicExternal) == 0LL
      || (PurchaseLogicExternal__ExternalPaymentCheck(purchaseLogicExternal, v9),
          (purchaseLogicExternal = (PurchaseLogicExternal_o *)Instance->fields._purchaseLogic) == 0LL) )
    {
      sub_1BCAA3C(purchaseLogicExternal, v9);
    }
    ((void (__fastcall *)(PurchaseLogicExternal_o *, void *))purchaseLogicExternal->klass[1]._1.parent)(
      purchaseLogicExternal,
      purchaseLogicExternal->klass[1]._1.generic_class);
  }
}


void __fastcall PurchaseBehaviour__ActivateExternal(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PurchaseBehaviour_c *v5; // x0
  __int64 v6; // x1
  PurchaseBehaviour_o *Instance; // x19
  PurchaseLogicExternal_o *purchaseLogicExternal; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B15B4B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v3, v4);
    byte_4B15B4B = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = PurchaseBehaviour__GetInstance((const MethodInfo *)v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  purchaseLogicExternal = (PurchaseLogicExternal_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)Instance,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)purchaseLogicExternal & 1) == 0 )
  {
    if ( !Instance || (purchaseLogicExternal = Instance->fields._purchaseLogicExternal) == 0LL )
      sub_1BCAA3C(purchaseLogicExternal, v9);
    PurchaseLogicExternal__ExternalPaymentCheck(purchaseLogicExternal, v9);
  }
}


void __fastcall PurchaseBehaviour__AddPreparePurchaseShopIdsToPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PurchaseBehaviour_c *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B15B53 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v4, v5);
    byte_4B15B53 = 1;
  }
  v6 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v6);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0LL )
      sub_1BCAA3C(monitor, v10);
    PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(monitor, shopId, v11);
  }
}


void __fastcall PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B15B44 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15B44 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_root(transform, 0LL)) == 0LL )
    sub_1BCAA3C(transform, v5);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
}


void __fastcall PurchaseBehaviour__BuildProductIdCollection(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  long double inited; // q0
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
  __int64 v25; // x2
  ManagerConfig_c *v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  UnityEngine_Object_o *v29; // x19
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  PurchaseBehaviour___c_c *v37; // x8
  System_Func_object__object__o *_9__12_0; // x20
  Il2CppObject *v39; // x21
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Collections_Generic_List_string__o *v55; // x20
  PurchaseBehaviour_c *v56; // x8
  struct PurchaseBehaviour_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B15B49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BankShopMaster___, v1, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_BankShopEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v8, v9);
    sub_1BCA7E0(&System_Func_BankShopEntity__string__TypeInfo, v10, v11);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__, v22, v23);
    sub_1BCA7E0(&PurchaseBehaviour___c_TypeInfo, v24, v25);
    byte_4B15B49 = 1;
  }
  v26 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v26 = ManagerConfig_TypeInfo;
  }
  if ( v26->static_fields->UseAppServer )
  {
    v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C1C6BC(inited);
    v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C1C6BC(inited);
    v29 = **(UnityEngine_Object_o ***)(v28 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0LL )
      {
        sub_1BCAA3C(Instance, v31);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0LL);
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   EnableEntitiyList,
                                                                   (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v37 = PurchaseBehaviour___c_TypeInfo;
      if ( !PurchaseBehaviour___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo, v33);
        v37 = PurchaseBehaviour___c_TypeInfo;
      }
      _9__12_0 = (System_Func_object__object__o *)v37->static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37, v33);
          v37 = PurchaseBehaviour___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v37->static_fields->__9;
        _9__12_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                      System_Func_BankShopEntity__string__TypeInfo,
                                                      v33,
                                                      v34,
                                                      v35);
        System_Func_object__object____ctor(
          _9__12_0,
          v39,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__,
          0LL);
        static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = (struct System_Func_BankShopEntity__string__o *)_9__12_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
          (int64_t)_9__12_0,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v36,
                                                                   (System_Func_TSource__TResult__o *)_9__12_0,
                                                                   (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v55 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v47,
                                                                  (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
      v56 = PurchaseBehaviour_TypeInfo;
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v48);
        v56 = PurchaseBehaviour_TypeInfo;
      }
      v57 = v56->static_fields;
      v57->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v36;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v57->BankShopEntityCollection,
        (int64_t)v36,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = v55;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)PurchaseBehaviour_TypeInfo->static_fields,
        (int64_t)v55,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
  }
}


PurchaseBehaviour_o *__fastcall PurchaseBehaviour__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  PurchaseBehaviour_c *v9; // x0
  UnityEngine_Object_o *cached_instance; // x19
  __int64 v11; // x1
  long double v12; // q0
  PurchaseBehaviour_c *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  UnityEngine_Object_o *v16; // x19
  __int64 v17; // x1
  bool v18; // w8
  PurchaseBehaviour_o *result; // x0
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  PurchaseBehaviour_c *v28; // x8
  int64_t v29; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_4B15B45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___, v1, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__, v7, v8);
    byte_4B15B45 = 1;
  }
  v9 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
    v9 = PurchaseBehaviour_TypeInfo;
  }
  cached_instance = (UnityEngine_Object_o *)v9->static_fields->_cached_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( UnityEngine_Object__op_Inequality(cached_instance, 0LL, 0LL) )
  {
    v13 = PurchaseBehaviour_TypeInfo;
    if ( PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      return v13->static_fields->_cached_instance;
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v11);
LABEL_21:
    v13 = PurchaseBehaviour_TypeInfo;
    return v13->static_fields->_cached_instance;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(v12);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(v12);
  v16 = **(UnityEngine_Object_o ***)(v15 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v18 = UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
  result = 0LL;
  if ( !v18 )
  {
    if ( !v16 )
      sub_1BCAA3C(0LL, v17);
    ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                             (UnityEngine_Component_o *)v16,
                                             (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v28 = PurchaseBehaviour_TypeInfo;
    v29 = (int64_t)ComponentInChildren_object__49322392;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v21);
      v28 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v28->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v29;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->_cached_instance, v29, v22, v23, v24, v25, v26, v27);
    goto LABEL_21;
  }
  return result;
}


System_Collections_Generic_List_string__o *__fastcall PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  PurchaseBehaviour_c *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_object__o *v16; // x19

  if ( (byte_4B15B52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v3, v4);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v7, v8);
    byte_4B15B52 = 1;
  }
  v9 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v12 )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v16;
  }
  else
  {
    if ( !Instance || !Instance[1].monitor )
      sub_1BCAA3C(v12, v13);
    return PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs((PurchaseLogic_o *)v12, v13);
  }
}


bool __fastcall PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PurchaseBehaviour_c *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v9; // x1

  if ( (byte_4B15B4F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v3, v4);
    byte_4B15B4F = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1BCAA3C(monitor, v9);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 536LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 544LL));
}


bool __fastcall PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PurchaseBehaviour_c *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v9; // x1

  if ( (byte_4B15B51 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v3, v4);
    byte_4B15B51 = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1BCAA3C(monitor, v9);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 808LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 816LL));
}


bool __fastcall PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PurchaseBehaviour_c *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v9; // x1

  if ( (byte_4B15B4D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v3, v4);
    byte_4B15B4D = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1BCAA3C(monitor, v9);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 520LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 528LL));
}


bool __fastcall PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PurchaseBehaviour_c *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v9; // x1

  if ( (byte_4B15B46 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v3, v4);
    byte_4B15B46 = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1BCAA3C(monitor, v9);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 448LL));
}


void __fastcall PurchaseBehaviour__Ready(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PurchaseBehaviour_c *v3; // x0
  __int64 v4; // x1
  PurchaseBehaviour_c *v5; // x0

  if ( (byte_4B15B47 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v1, v2);
    byte_4B15B47 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable((const MethodInfo *)v3) )
  {
    v5 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v4);
    PurchaseBehaviour__BuildProductIdCollection((const MethodInfo *)v5);
  }
}


void __fastcall PurchaseBehaviour__Ready_39336776(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  PurchaseBehaviour_c *v16; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  PurchaseBehaviour_c *v26; // x8
  int64_t v27; // x19

  if ( (byte_4B15B48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, productIdArray, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v7, v8);
    byte_4B15B48 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, productIdArray);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0LL, 0LL) )
  {
    v16 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v9);
      v16 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->_cached_instance = instance;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->_cached_instance,
      (int64_t)instance,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v18 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
  v26 = PurchaseBehaviour_TypeInfo;
  v27 = (int64_t)v18;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v19);
    v26 = PurchaseBehaviour_TypeInfo;
  }
  v26->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v27;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseBehaviour_TypeInfo->static_fields,
    v27,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall PurchaseBehaviour__RecoverPayment(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PurchaseBehaviour_c *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B15B54 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v4, v5);
    byte_4B15B54 = 1;
  }
  v6 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v6);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0LL )
      sub_1BCAA3C(monitor, v10);
    PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(monitor, shopId, v11);
  }
}


void __fastcall PurchaseBehaviour__SetCachedObfuscatedAccountId(
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PurchaseBehaviour_c *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v10; // x1

  if ( (byte_4B15B4E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v4, v5);
    byte_4B15B4E = 1;
  }
  v6 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v6);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
      sub_1BCAA3C(monitor, v10);
    (*(void (__fastcall **)(void *, System_String_o *, _QWORD))(*(_QWORD *)monitor + 504LL))(
      monitor,
      obfuscatedAccountId,
      *(_QWORD *)(*(_QWORD *)monitor + 512LL));
  }
}


void __fastcall PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(
        bool isMismatched,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PurchaseBehaviour_c *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v10; // x1

  if ( (byte_4B15B50 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v4, v5);
    byte_4B15B50 = 1;
  }
  v6 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v6);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
      sub_1BCAA3C(monitor, v10);
    (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)monitor + 584LL))(
      monitor,
      isMismatched,
      *(_QWORD *)(*(_QWORD *)monitor + 592LL));
  }
}


void __fastcall PurchaseBehaviour__StartPayment(
        PurchaseBehaviour_o *this,
        BankShopEntity_o *bankShop,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1BCAA3C(0LL, bankShop);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseBehaviour__StartPayment_39337876(
        PurchaseBehaviour_o *this,
        int32_t shopId,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1BCAA3C(0LL, *(_QWORD *)&shopId);
  PurchaseLogic__InitiatePurchase_39337900(purchaseLogic, shopId, productId, price, finishedAction, method);
}


void __fastcall PurchaseBehaviour__set_LogErrorOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1BCAA3C(0LL, value);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&purchaseLogic->fields._logErrorOutputAction,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseBehaviour__set_LogOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1BCAA3C(0LL, value);
  purchaseLogic->fields._logOutputAction = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&purchaseLogic->fields._logOutputAction,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseBehaviour___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15B57 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseBehaviour___c_TypeInfo, v1, v2);
    byte_4B15B57 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PurchaseBehaviour___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PurchaseBehaviour___c_TypeInfo->static_fields->__9 = (struct PurchaseBehaviour___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseBehaviour___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall PurchaseBehaviour___c___ctor(PurchaseBehaviour___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall PurchaseBehaviour___c___BuildProductIdCollection_b__12_0(
        PurchaseBehaviour___c_o *this,
        BankShopEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.googleShopId;
}