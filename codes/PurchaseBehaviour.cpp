void PurchaseBehaviour___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *v4; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C372A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A9 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)PurchaseBehaviour_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  static_fields = PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->BankShopEntityCollection, (int32_t)v4, v6, v7);
  PurchaseBehaviour_TypeInfo->static_fields->isOpenPurchaseDialogEvent = 0;
}


void PurchaseBehaviour___ctor(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_o *v2; // x19
  PurchaseLogic_o *Instance; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4C372A8 & 1) == 0 )
  {
    this = (PurchaseBehaviour_o *)sub_1C32C20(&PurchaseLogicExternal_TypeInfo);
    byte_4C372A8 = 1;
  }
  Instance = PurchaseLogic__GetInstance((const MethodInfo *)this);
  v2->fields._purchaseLogic = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._purchaseLogic, (int32_t)Instance, v4, v5);
  v6 = (Il2CppObject *)sub_1C32E6C(PurchaseLogicExternal_TypeInfo);
  System_Object___ctor(v6, 0);
  v2->fields._purchaseLogicExternal = (struct PurchaseLogicExternal_o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._purchaseLogicExternal, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)v2, 0);
}


void PurchaseBehaviour__Activate(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0

  if ( (byte_4C3729D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C3729D = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0 )
      sub_1C32E7C(monitor);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 456LL))(
      monitor,
      *(_QWORD *)(*(_QWORD *)monitor + 464LL));
  }
}


void PurchaseBehaviour__ActivateBoth(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  intptr_t m_CachedPtr; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3729F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C3729F = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_CachedPtr = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !Instance
      || (m_CachedPtr = Instance[1].fields.m_CachedPtr) == 0
      || (PurchaseLogicExternal__ExternalPaymentCheck((PurchaseLogicExternal_o *)m_CachedPtr, v4),
          (m_CachedPtr = (intptr_t)Instance[1].monitor) == 0) )
    {
      sub_1C32E7C(m_CachedPtr);
    }
    (*(void (__fastcall **)(intptr_t, _QWORD))(*(_QWORD *)m_CachedPtr + 456LL))(
      m_CachedPtr,
      *(_QWORD *)(*(_QWORD *)m_CachedPtr + 464LL));
  }
}


void PurchaseBehaviour__ActivateExternal(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  intptr_t m_CachedPtr; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3729E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C3729E = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_CachedPtr = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !Instance || (m_CachedPtr = Instance[1].fields.m_CachedPtr) == 0 )
      sub_1C32E7C(m_CachedPtr);
    PurchaseLogicExternal__ExternalPaymentCheck((PurchaseLogicExternal_o *)m_CachedPtr, v4);
  }
}


void PurchaseBehaviour__AddPreparePurchaseShopIdsToPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C372A6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A6 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0 )
      sub_1C32E7C(monitor);
    PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(monitor, shopId, v6);
  }
}


void PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C37297 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C37297 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_root(transform, 0)) == 0 )
    sub_1C32E7C(transform);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
}


void PurchaseBehaviour__BuildProductIdCollection(const MethodInfo *method)
{
  long double inited; // q0
  ManagerConfig_c *v2; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  UnityEngine_Object_o *v5; // x19
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  PurchaseBehaviour___c_c *v9; // x8
  System_Func_object__object__o *_9__12_0; // x20
  Il2CppObject *v11; // x21
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Collections_Generic_List_string__o *v18; // x20
  PurchaseBehaviour_c *v19; // x8
  struct PurchaseBehaviour_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C3729C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_BankShopEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C32C20(&System_Func_BankShopEntity__string__TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__);
    sub_1C32C20(&PurchaseBehaviour___c_TypeInfo);
    byte_4C3729C = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseAppServer )
  {
    v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
      v3 = sub_1C83334(inited);
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C83334(inited);
    v5 = **(UnityEngine_Object_o ***)(v4 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0 )
      {
        sub_1C32E7C(Instance);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0);
      v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  EnableEntitiyList,
                                                                  (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
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
        _9__12_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BankShopEntity__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__12_0,
          v11,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__,
          0);
        static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = (struct System_Func_BankShopEntity__string__o *)_9__12_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v13, v14);
      }
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v8,
                                                                   (System_Func_TSource__TResult__o *)_9__12_0,
                                                                   (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v18 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v15,
                                                                  (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_string___);
      v19 = PurchaseBehaviour_TypeInfo;
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        v19 = PurchaseBehaviour_TypeInfo;
      }
      v20 = v19->static_fields;
      v20->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v8;
      sub_1C32BC4((CGThumbnailListItem_o *)&v20->BankShopEntityCollection, (int32_t)v8, v16, v17);
      PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = v18;
      sub_1C32BC4((CGThumbnailListItem_o *)PurchaseBehaviour_TypeInfo->static_fields, (int32_t)v18, v21, v22);
    }
  }
}


PurchaseBehaviour_o *PurchaseBehaviour__GetInstance(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *cached_instance; // x19
  long double v3; // q0
  PurchaseBehaviour_c *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8
  PurchaseBehaviour_o *result; // x0
  Il2CppObject *ComponentInChildren_object__51199524; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  PurchaseBehaviour_c *v13; // x8
  Il2CppObject *v14; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_4C37298 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__);
    byte_4C37298 = 1;
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
  if ( UnityEngine_Object__op_Inequality(cached_instance, 0, 0) )
  {
    v4 = PurchaseBehaviour_TypeInfo;
    if ( PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      return v4->static_fields->_cached_instance;
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
LABEL_21:
    v4 = PurchaseBehaviour_TypeInfo;
    return v4->static_fields->_cached_instance;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C83334(v3);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v7, 0, 0);
  result = 0;
  if ( !v8 )
  {
    if ( !v7 )
      sub_1C32E7C(0);
    ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                             (UnityEngine_Component_o *)v7,
                                             (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v13 = PurchaseBehaviour_TypeInfo;
    v14 = ComponentInChildren_object__51199524;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v13 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v14;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->_cached_instance, (int32_t)v14, v11, v12);
    goto LABEL_21;
  }
  return result;
}


System_Collections_Generic_List_string__o *PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19

  if ( (byte_4C372A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A5 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( v3 )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v5;
  }
  else
  {
    if ( !Instance || !Instance[1].monitor )
      sub_1C32E7C(v3);
    return PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs((PurchaseLogic_o *)v3, v4);
  }
}


bool PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0

  if ( (byte_4C372A2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A2 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0 )
    sub_1C32E7C(monitor);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 536LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 544LL));
}


bool PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0

  if ( (byte_4C372A4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A4 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0 )
    sub_1C32E7C(monitor);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 808LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 816LL));
}


bool PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0

  if ( (byte_4C372A0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A0 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0 )
    sub_1C32E7C(monitor);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 520LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 528LL));
}


bool PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0

  if ( (byte_4C37299 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C37299 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0 )
    sub_1C32E7C(monitor);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 448LL));
}


void PurchaseBehaviour__Ready(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4C3729A & 1) == 0 )
  {
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C3729A = 1;
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


void PurchaseBehaviour__Ready_41335364(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  PurchaseBehaviour_c *v7; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_Collections_Generic_List_TSource__o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  PurchaseBehaviour_c *v12; // x8
  struct System_Collections_Generic_List_string__o *v13; // x19

  if ( (byte_4C3729B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C3729B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0, 0) )
  {
    v7 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v7 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->_cached_instance = instance;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->_cached_instance, (int32_t)instance, v5, v6);
  }
  v9 = System_Linq_Enumerable__ToList_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
         (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_string___);
  v12 = PurchaseBehaviour_TypeInfo;
  v13 = (struct System_Collections_Generic_List_string__o *)v9;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v12 = PurchaseBehaviour_TypeInfo;
  }
  v12->static_fields->ConsumableProductIdCollection = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)PurchaseBehaviour_TypeInfo->static_fields, (int32_t)v13, v10, v11);
}


void PurchaseBehaviour__RecoverPayment(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  ;
}


void PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C372A7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A7 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0 )
      sub_1C32E7C(monitor);
    PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(monitor, shopId, v6);
  }
}


void PurchaseBehaviour__SetCachedObfuscatedAccountId(System_String_o *obfuscatedAccountId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0

  if ( (byte_4C372A1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A1 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0 )
      sub_1C32E7C(monitor);
    (*(void (__fastcall **)(void *, System_String_o *, _QWORD))(*(_QWORD *)monitor + 504LL))(
      monitor,
      obfuscatedAccountId,
      *(_QWORD *)(*(_QWORD *)monitor + 512LL));
  }
}


void PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(bool isMismatched, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0

  if ( (byte_4C372A3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C372A3 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0 )
      sub_1C32E7C(monitor);
    (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)monitor + 584LL))(
      monitor,
      isMismatched,
      *(_QWORD *)(*(_QWORD *)monitor + 592LL));
  }
}


void PurchaseBehaviour__StartPayment(
        PurchaseBehaviour_o *this,
        BankShopEntity_o *bankShop,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1C32E7C(0);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


void PurchaseBehaviour__StartPayment_41336464(
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
    sub_1C32E7C(0);
  PurchaseLogic__InitiatePurchase_41336488(purchaseLogic, shopId, productId, price, finishedAction, method);
}


void PurchaseBehaviour__set_LogErrorOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1C32E7C(0);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&purchaseLogic->fields._logErrorOutputAction,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void PurchaseBehaviour__set_LogOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1C32E7C(0);
  purchaseLogic->fields._logOutputAction = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&purchaseLogic->fields._logOutputAction, (int32_t)value, (int32_t)method, v3);
}


void PurchaseBehaviour___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C372AA & 1) == 0 )
  {
    sub_1C32C20(&PurchaseBehaviour___c_TypeInfo);
    byte_4C372AA = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(PurchaseBehaviour___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseBehaviour___c_TypeInfo->static_fields->__9 = (struct PurchaseBehaviour___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)PurchaseBehaviour___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PurchaseBehaviour___c___ctor(PurchaseBehaviour___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PurchaseBehaviour___c___BuildProductIdCollection_b__12_0(
        PurchaseBehaviour___c_o *this,
        BankShopEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.googleShopId;
}