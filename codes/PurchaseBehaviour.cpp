void __fastcall PurchaseBehaviour___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A2D809 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v1);
    sub_1B761C0(&Method_System_Collections_Generic_List_string___ctor__, v2);
    sub_1B761C0(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v3);
    sub_1B761C0(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v5);
    byte_4A2D809 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_string___ctor__);
  PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1B76164((ServantStatusBattleListViewItem_o *)PurchaseBehaviour_TypeInfo->static_fields, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  static_fields = PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v9;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->BankShopEntityCollection, (int32_t)v9, v11, v12);
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
  if ( (byte_4A2D808 & 1) == 0 )
  {
    this = (PurchaseBehaviour_o *)sub_1B761C0(&PurchaseLogicExternal_TypeInfo, method);
    byte_4A2D808 = 1;
  }
  Instance = PurchaseLogic__GetInstance((const MethodInfo *)this);
  v2->fields._purchaseLogic = Instance;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v2->fields._purchaseLogic, (int32_t)Instance, v4, v5);
  v6 = (Il2CppObject *)sub_1B7640C(PurchaseLogicExternal_TypeInfo);
  System_Object___ctor(v6, 0LL);
  v2->fields._purchaseLogicExternal = (struct PurchaseLogicExternal_o *)v6;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v2->fields._purchaseLogicExternal, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)v2, 0LL);
}


void __fastcall PurchaseBehaviour__Activate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_4A2D7FD & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v1);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v2);
    byte_4A2D7FD = 1;
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
      sub_1B7641C(monitor, v6);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 456LL))(
      monitor,
      *(_QWORD *)(*(_QWORD *)monitor + 464LL));
  }
}


void __fastcall PurchaseBehaviour__ActivateBoth(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  PurchaseBehaviour_o *Instance; // x19
  PurchaseLogicExternal_o *purchaseLogicExternal; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A2D7FF & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v1);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v2);
    byte_4A2D7FF = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
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
      || (PurchaseLogicExternal__ExternalPaymentCheck(purchaseLogicExternal, v6),
          (purchaseLogicExternal = (PurchaseLogicExternal_o *)Instance->fields._purchaseLogic) == 0LL) )
    {
      sub_1B7641C(purchaseLogicExternal, v6);
    }
    ((void (__fastcall *)(PurchaseLogicExternal_o *, void *))purchaseLogicExternal->klass[1]._1.parent)(
      purchaseLogicExternal,
      purchaseLogicExternal->klass[1]._1.generic_class);
  }
}


void __fastcall PurchaseBehaviour__ActivateExternal(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  PurchaseBehaviour_o *Instance; // x19
  PurchaseLogicExternal_o *purchaseLogicExternal; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A2D7FE & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v1);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v2);
    byte_4A2D7FE = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  purchaseLogicExternal = (PurchaseLogicExternal_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)Instance,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)purchaseLogicExternal & 1) == 0 )
  {
    if ( !Instance || (purchaseLogicExternal = Instance->fields._purchaseLogicExternal) == 0LL )
      sub_1B7641C(purchaseLogicExternal, v6);
    PurchaseLogicExternal__ExternalPaymentCheck(purchaseLogicExternal, v6);
  }
}


void __fastcall PurchaseBehaviour__AddPreparePurchaseShopIdsToPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  __int64 v3; // x1
  PurchaseBehaviour_c *v4; // x0
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A2D806 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v3);
    byte_4A2D806 = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0LL )
      sub_1B7641C(monitor, v7);
    PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(monitor, shopId, v8);
  }
}


void __fastcall PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A2D7F7 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2D7F7 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
}


void __fastcall PurchaseBehaviour__BuildProductIdCollection(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ManagerConfig_c *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  UnityEngine_Object_o *v16; // x19
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  PurchaseBehaviour___c_c *v21; // x8
  System_Func_object__object__o *_9__12_0; // x20
  Il2CppObject *v23; // x21
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Collections_Generic_List_string__o *v30; // x20
  PurchaseBehaviour_c *v31; // x8
  struct PurchaseBehaviour_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_4A2D7FC & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_BankShopMaster___, v1);
    sub_1B761C0(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___, v2);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToList_BankShopEntity___, v3);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_1B761C0(&System_Func_BankShopEntity__string__TypeInfo, v5);
    sub_1B761C0(&ManagerConfig_TypeInfo, v6);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v7);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B761C0(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__, v11);
    sub_1B761C0(&PurchaseBehaviour___c_TypeInfo, v12);
    byte_4A2D7FC = 1;
  }
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseAppServer )
  {
    v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BC809C(v14);
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1BC809C(v15);
    v16 = **(UnityEngine_Object_o ***)(v15 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0LL )
      {
        sub_1B7641C(Instance, v18);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0LL);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   EnableEntitiyList,
                                                                   (const MethodInfo_2E9EAFC *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v21 = PurchaseBehaviour___c_TypeInfo;
      if ( !PurchaseBehaviour___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo);
        v21 = PurchaseBehaviour___c_TypeInfo;
      }
      _9__12_0 = (System_Func_object__object__o *)v21->static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = PurchaseBehaviour___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__12_0 = (System_Func_object__object__o *)sub_1B7640C(System_Func_BankShopEntity__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__12_0,
          v23,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__,
          0LL);
        static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = (struct System_Func_BankShopEntity__string__o *)_9__12_0;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v25, v26);
      }
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v20,
                                                                   (System_Func_TSource__TResult__o *)_9__12_0,
                                                                   (const MethodInfo_2E92F0C *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v30 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v27,
                                                                  (const MethodInfo_2E9EAFC *)Method_System_Linq_Enumerable_ToList_string___);
      v31 = PurchaseBehaviour_TypeInfo;
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        v31 = PurchaseBehaviour_TypeInfo;
      }
      v32 = v31->static_fields;
      v32->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v20;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v32->BankShopEntityCollection, (int32_t)v20, v28, v29);
      PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = v30;
      sub_1B76164(
        (ServantStatusBattleListViewItem_o *)PurchaseBehaviour_TypeInfo->static_fields,
        (int32_t)v30,
        v33,
        v34);
    }
  }
}


PurchaseBehaviour_o *__fastcall PurchaseBehaviour__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  PurchaseBehaviour_c *v5; // x0
  UnityEngine_Object_o *cached_instance; // x19
  PurchaseBehaviour_c *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  UnityEngine_Object_o *v10; // x19
  __int64 v11; // x1
  bool v12; // w8
  PurchaseBehaviour_o *result; // x0
  Il2CppObject *ComponentInChildren_object__48599312; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  PurchaseBehaviour_c *v17; // x8
  Il2CppObject *v18; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_4A2D7F8 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___, v1);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v2);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__, v4);
    byte_4A2D7F8 = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v5 = PurchaseBehaviour_TypeInfo;
  }
  cached_instance = (UnityEngine_Object_o *)v5->static_fields->_cached_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cached_instance, 0LL, 0LL) )
  {
    v7 = PurchaseBehaviour_TypeInfo;
    if ( PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      return v7->static_fields->_cached_instance;
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
LABEL_21:
    v7 = PurchaseBehaviour_TypeInfo;
    return v7->static_fields->_cached_instance;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BC809C(v8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BC809C(v9);
  v10 = **(UnityEngine_Object_o ***)(v9 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  result = 0LL;
  if ( !v12 )
  {
    if ( !v10 )
      sub_1B7641C(0LL, v11);
    ComponentInChildren_object__48599312 = UnityEngine_Component__GetComponentInChildren_object__48599312(
                                             (UnityEngine_Component_o *)v10,
                                             (const MethodInfo_2E59110 *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v17 = PurchaseBehaviour_TypeInfo;
    v18 = ComponentInChildren_object__48599312;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v17 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v18;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->_cached_instance, (int32_t)v18, v15, v16);
    goto LABEL_21;
  }
  return result;
}


System_Collections_Generic_List_string__o *__fastcall PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  PurchaseBehaviour_c *v5; // x0
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19

  if ( (byte_4A2D805 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_string___ctor__, v1);
    sub_1B761C0(&System_Collections_Generic_List_string__TypeInfo, v2);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v4);
    byte_4A2D805 = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v7 )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v9;
  }
  else
  {
    if ( !Instance || !Instance[1].monitor )
      sub_1B7641C(v7, v8);
    return PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs((PurchaseLogic_o *)v7, v8);
  }
}


bool __fastcall PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_4A2D802 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v1);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v2);
    byte_4A2D802 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1B7641C(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 536LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 544LL));
}


bool __fastcall PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_4A2D804 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v1);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v2);
    byte_4A2D804 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1B7641C(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 808LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 816LL));
}


bool __fastcall PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_4A2D800 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v1);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v2);
    byte_4A2D800 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1B7641C(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 520LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 528LL));
}


bool __fastcall PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_4A2D7F9 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v1);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v2);
    byte_4A2D7F9 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
    sub_1B7641C(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 448LL));
}


void __fastcall PurchaseBehaviour__Ready(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  PurchaseBehaviour_c *v3; // x0

  if ( (byte_4A2D7FA & 1) == 0 )
  {
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v1);
    byte_4A2D7FA = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable((const MethodInfo *)v2) )
  {
    v3 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__BuildProductIdCollection((const MethodInfo *)v3);
  }
}


void __fastcall PurchaseBehaviour__Ready_38367068(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  PurchaseBehaviour_c *v9; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_Collections_Generic_List_TSource__o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  PurchaseBehaviour_c *v14; // x8
  struct System_Collections_Generic_List_string__o *v15; // x19

  if ( (byte_4A2D7FB & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_ToList_string___, productIdArray);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v6);
    byte_4A2D7FB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0LL, 0LL) )
  {
    v9 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v9 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->_cached_instance = instance;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->_cached_instance, (int32_t)instance, v7, v8);
  }
  v11 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
          (const MethodInfo_2E9EAFC *)Method_System_Linq_Enumerable_ToList_string___);
  v14 = PurchaseBehaviour_TypeInfo;
  v15 = (struct System_Collections_Generic_List_string__o *)v11;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v14 = PurchaseBehaviour_TypeInfo;
  }
  v14->static_fields->ConsumableProductIdCollection = v15;
  sub_1B76164((ServantStatusBattleListViewItem_o *)PurchaseBehaviour_TypeInfo->static_fields, (int32_t)v15, v12, v13);
}


void __fastcall PurchaseBehaviour__RecoverPayment(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  __int64 v3; // x1
  PurchaseBehaviour_c *v4; // x0
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A2D807 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v3);
    byte_4A2D807 = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0LL )
      sub_1B7641C(monitor, v7);
    PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(monitor, shopId, v8);
  }
}


void __fastcall PurchaseBehaviour__SetCachedObfuscatedAccountId(
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PurchaseBehaviour_c *v4; // x0
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v7; // x1

  if ( (byte_4A2D801 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v3);
    byte_4A2D801 = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
      sub_1B7641C(monitor, v7);
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
  __int64 v3; // x1
  PurchaseBehaviour_c *v4; // x0
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v7; // x1

  if ( (byte_4A2D803 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v3);
    byte_4A2D803 = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0LL )
      sub_1B7641C(monitor, v7);
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
    sub_1B7641C(0LL, bankShop);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


void __fastcall PurchaseBehaviour__StartPayment_38368164(
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
    sub_1B7641C(0LL, shopId);
  PurchaseLogic__InitiatePurchase_38368188(purchaseLogic, shopId, productId, price, finishedAction, method);
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
    sub_1B7641C(0LL, value);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_1B76164(
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
    sub_1B7641C(0LL, value);
  purchaseLogic->fields._logOutputAction = value;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&purchaseLogic->fields._logOutputAction,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PurchaseBehaviour___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2D80A & 1) == 0 )
  {
    sub_1B761C0(&PurchaseBehaviour___c_TypeInfo, v1);
    byte_4A2D80A = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(PurchaseBehaviour___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PurchaseBehaviour___c_TypeInfo->static_fields->__9 = (struct PurchaseBehaviour___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)PurchaseBehaviour___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B7641C(this, 0LL);
  return entity->fields.googleShopId;
}