void __fastcall PurchaseBehaviour___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *v4; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5AAD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAD3 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)PurchaseBehaviour_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  static_fields = PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->BankShopEntityCollection, (int32_t)v4, v6, v7);
  PurchaseBehaviour_TypeInfo->static_fields->isOpenPurchaseDialogEvent = 0;
}


void __fastcall PurchaseBehaviour___ctor(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_o *v2; // x19
  PurchaseLogic_o *Instance; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = this;
  if ( (byte_4A5AAD2 & 1) == 0 )
  {
    this = (PurchaseBehaviour_o *)sub_1B885B0(&PurchaseLogicExternal_TypeInfo);
    byte_4A5AAD2 = 1;
  }
  Instance = PurchaseLogic__GetInstance((const MethodInfo *)this);
  v2->fields._purchaseLogic = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._purchaseLogic, (int32_t)Instance, v4, v5);
  v6 = (Il2CppObject *)sub_1B887FC(PurchaseLogicExternal_TypeInfo);
  System_Object___ctor(v6, 0LL);
  v2->fields._purchaseLogicExternal = (struct PurchaseLogicExternal_o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._purchaseLogicExternal, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)v2, 0LL);
}


void __fastcall PurchaseBehaviour__Activate(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4A5AAC7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAC7 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
      sub_1B8880C(monitor, v4);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 456LL))(
      monitor,
      *(_QWORD *)(*(_QWORD *)monitor + 464LL));
  }
}


void __fastcall PurchaseBehaviour__ActivateBoth(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  PurchaseBehaviour_o *Instance; // x19
  PurchaseLogicExternal_o *purchaseLogicExternal; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A5AAC9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAC9 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  purchaseLogicExternal = (PurchaseLogicExternal_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)Instance,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)purchaseLogicExternal & 1) == 0 )
  {
    if ( !Instance
      || (purchaseLogicExternal = Instance->fields._purchaseLogicExternal) == 0LL
      || (PurchaseLogicExternal__ExternalPaymentCheck(purchaseLogicExternal, v4),
          (purchaseLogicExternal = (PurchaseLogicExternal_o *)Instance->fields._purchaseLogic) == 0LL) )
    {
      sub_1B8880C(purchaseLogicExternal, v4);
    }
    ((void (__fastcall *)(PurchaseLogicExternal_o *, void *))purchaseLogicExternal->klass[1]._1.parent)(
      purchaseLogicExternal,
      purchaseLogicExternal->klass[1]._1.generic_class);
  }
}


void __fastcall PurchaseBehaviour__ActivateExternal(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  PurchaseBehaviour_o *Instance; // x19
  PurchaseLogicExternal_o *purchaseLogicExternal; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A5AAC8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAC8 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  purchaseLogicExternal = (PurchaseLogicExternal_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)Instance,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)purchaseLogicExternal & 1) == 0 )
  {
    if ( !Instance || (purchaseLogicExternal = Instance->fields._purchaseLogicExternal) == 0LL )
      sub_1B8880C(purchaseLogicExternal, v4);
    PurchaseLogicExternal__ExternalPaymentCheck(purchaseLogicExternal, v4);
  }
}


void __fastcall PurchaseBehaviour__AddPreparePurchaseShopIdsToPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A5AAD0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAD0 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0LL )
      sub_1B8880C(monitor, v6);
    PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(monitor, shopId, v7);
  }
}


void __fastcall PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5AAC1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AAC1 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
}


void __fastcall PurchaseBehaviour__BuildProductIdCollection(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  __int64 v2; // x0
  __int64 v3; // x0
  UnityEngine_Object_o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  PurchaseBehaviour___c_c *v9; // x8
  System_Func_object__object__o *_9__12_0; // x20
  Il2CppObject *v11; // x21
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Collections_Generic_List_string__o *v18; // x20
  PurchaseBehaviour_c *v19; // x8
  struct PurchaseBehaviour_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5AAC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_BankShopEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1B885B0(&System_Func_BankShopEntity__string__TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__);
    sub_1B885B0(&PurchaseBehaviour___c_TypeInfo);
    byte_4A5AAC6 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseAppServer )
  {
    v2 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
      v2 = sub_1BDA48C(v2);
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
    if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
      v3 = sub_1BDA48C(v3);
    v4 = **(UnityEngine_Object_o ***)(v3 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0LL )
      {
        sub_1B8880C(Instance, v6);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0LL);
      v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  EnableEntitiyList,
                                                                  (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v9 = PurchaseBehaviour___c_TypeInfo;
      if ( !PurchaseBehaviour___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo);
        v9 = PurchaseBehaviour___c_TypeInfo;
      }
      _9__12_0 = (System_Func_object__object__o *)v9->static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = PurchaseBehaviour___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__12_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BankShopEntity__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__12_0,
          v11,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__,
          0LL);
        static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = (struct System_Func_BankShopEntity__string__o *)_9__12_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v13, v14);
      }
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v8,
                                                                   (System_Func_TSource__TResult__o *)_9__12_0,
                                                                   (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v18 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v15,
                                                                  (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_string___);
      v19 = PurchaseBehaviour_TypeInfo;
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        v19 = PurchaseBehaviour_TypeInfo;
      }
      v20 = v19->static_fields;
      v20->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->BankShopEntityCollection, (int32_t)v8, v16, v17);
      PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = v18;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)PurchaseBehaviour_TypeInfo->static_fields,
        (int32_t)v18,
        v21,
        v22);
    }
  }
}


PurchaseBehaviour_o *__fastcall PurchaseBehaviour__GetInstance(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *cached_instance; // x19
  PurchaseBehaviour_c *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1
  bool v8; // w8
  PurchaseBehaviour_o *result; // x0
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  PurchaseBehaviour_c *v13; // x8
  Il2CppObject *v14; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_4A5AAC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__);
    byte_4A5AAC2 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v1 = PurchaseBehaviour_TypeInfo;
  }
  cached_instance = (UnityEngine_Object_o *)v1->static_fields->_cached_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cached_instance, 0LL, 0LL) )
  {
    v3 = PurchaseBehaviour_TypeInfo;
    if ( PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      return v3->static_fields->_cached_instance;
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
LABEL_21:
    v3 = PurchaseBehaviour_TypeInfo;
    return v3->static_fields->_cached_instance;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  result = 0LL;
  if ( !v8 )
  {
    if ( !v6 )
      sub_1B8880C(0LL, v7);
    ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                             (UnityEngine_Component_o *)v6,
                                             (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v13 = PurchaseBehaviour_TypeInfo;
    v14 = ComponentInChildren_object__48719376;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v13 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->_cached_instance, (int32_t)v14, v11, v12);
    goto LABEL_21;
  }
  return result;
}


System_Collections_Generic_List_string__o *__fastcall PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19

  if ( (byte_4A5AACF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AACF = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v3 )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v5;
  }
  else
  {
    if ( !Instance || !Instance[1].monitor )
      sub_1B8880C(v3, v4);
    return PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs((PurchaseLogic_o *)v3, v4);
  }
}


bool __fastcall PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4A5AACC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AACC = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1B8880C(monitor, v4);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 536LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 544LL));
}


bool __fastcall PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4A5AACE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AACE = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1B8880C(monitor, v4);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 808LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 816LL));
}


bool __fastcall PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4A5AACA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AACA = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1B8880C(monitor, v4);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 520LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 528LL));
}


bool __fastcall PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4A5AAC3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAC3 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1B8880C(monitor, v4);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 448LL));
}


void __fastcall PurchaseBehaviour__Ready(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4A5AAC4 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAC4 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable((const MethodInfo *)v1) )
  {
    v2 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__BuildProductIdCollection((const MethodInfo *)v2);
  }
}


void __fastcall PurchaseBehaviour__Ready_38621080(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  PurchaseBehaviour_c *v7; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_Collections_Generic_List_TSource__o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  PurchaseBehaviour_c *v12; // x8
  struct System_Collections_Generic_List_string__o *v13; // x19

  if ( (byte_4A5AAC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAC5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0LL, 0LL) )
  {
    v7 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v7 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->_cached_instance = instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->_cached_instance, (int32_t)instance, v5, v6);
  }
  v9 = System_Linq_Enumerable__ToList_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
         (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_string___);
  v12 = PurchaseBehaviour_TypeInfo;
  v13 = (struct System_Collections_Generic_List_string__o *)v9;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v12 = PurchaseBehaviour_TypeInfo;
  }
  v12->static_fields->ConsumableProductIdCollection = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)PurchaseBehaviour_TypeInfo->static_fields, (int32_t)v13, v10, v11);
}


void __fastcall PurchaseBehaviour__RecoverPayment(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A5AAD1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AAD1 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0LL )
      sub_1B8880C(monitor, v6);
    PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(monitor, shopId, v7);
  }
}


void __fastcall PurchaseBehaviour__SetCachedObfuscatedAccountId(
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_4A5AACB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AACB = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
      sub_1B8880C(monitor, v6);
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
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_4A5AACD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AACD = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
      sub_1B8880C(monitor, v6);
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
    sub_1B8880C(0LL, bankShop);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


void __fastcall PurchaseBehaviour__StartPayment_38622180(
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
    sub_1B8880C(0LL, shopId);
  PurchaseLogic__InitiatePurchase_38622204(purchaseLogic, shopId, productId, price, finishedAction, method);
}


void __fastcall PurchaseBehaviour__set_LogErrorOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1B8880C(0LL, value);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&purchaseLogic->fields._logErrorOutputAction,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseBehaviour__set_LogOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1B8880C(0LL, value);
  purchaseLogic->fields._logOutputAction = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&purchaseLogic->fields._logOutputAction,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseBehaviour___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AAD4 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseBehaviour___c_TypeInfo);
    byte_4A5AAD4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(PurchaseBehaviour___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PurchaseBehaviour___c_TypeInfo->static_fields->__9 = (struct PurchaseBehaviour___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)PurchaseBehaviour___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return entity->fields.googleShopId;
}