void PurchaseBehaviour___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *v8; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5937F54 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F54 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseBehaviour_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  static_fields = PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->BankShopEntityCollection,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  PurchaseBehaviour_TypeInfo->static_fields->isOpenPurchaseDialogEvent = 0;
}


void PurchaseBehaviour___ctor(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_o *v2; // x19
  PurchaseLogic_o *Instance; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v2 = this;
  if ( (byte_5937F53 & 1) == 0 )
  {
    this = (PurchaseBehaviour_o *)sub_21FFC50(&PurchaseLogicExternal_TypeInfo);
    byte_5937F53 = 1;
  }
  Instance = PurchaseLogic__GetInstance((const MethodInfo *)this);
  v2->fields._purchaseLogic = Instance;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields._purchaseLogic, (int32_t)Instance, v4, v5, v6, v7, v8, v9);
  v10 = (Il2CppObject *)sub_21FFEBC(PurchaseLogicExternal_TypeInfo);
  System_Object___ctor(v10, 0);
  v2->fields._purchaseLogicExternal = (struct PurchaseLogicExternal_o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v2->fields._purchaseLogicExternal,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)v2, 0);
}


void PurchaseBehaviour__Activate(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_5937F48 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F48 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0 )
      sub_21FFECC(monitor, v6);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 456LL))(
      monitor,
      *(_QWORD *)(*(_QWORD *)monitor + 464LL));
  }
}


void PurchaseBehaviour__ActivateBoth(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  intptr_t m_CachedPtr; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5937F4A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F4A = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  m_CachedPtr = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !Instance
      || (m_CachedPtr = Instance[1].fields.m_CachedPtr) == 0
      || (PurchaseLogicExternal__ExternalPaymentCheck((PurchaseLogicExternal_o *)m_CachedPtr, v6),
          (m_CachedPtr = (intptr_t)Instance[1].monitor) == 0) )
    {
      sub_21FFECC(m_CachedPtr, v6);
    }
    (*(void (__fastcall **)(intptr_t, _QWORD))(*(_QWORD *)m_CachedPtr + 456LL))(
      m_CachedPtr,
      *(_QWORD *)(*(_QWORD *)m_CachedPtr + 464LL));
  }
}


void PurchaseBehaviour__ActivateExternal(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  intptr_t m_CachedPtr; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5937F49 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F49 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  m_CachedPtr = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !Instance || (m_CachedPtr = Instance[1].fields.m_CachedPtr) == 0 )
      sub_21FFECC(m_CachedPtr, v6);
    PurchaseLogicExternal__ExternalPaymentCheck((PurchaseLogicExternal_o *)m_CachedPtr, v6);
  }
}


void PurchaseBehaviour__AddPreparePurchaseShopIdsToPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_5937F51 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F51 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0 )
      sub_21FFECC(monitor, v7);
    PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(monitor, shopId, v8);
  }
}


void PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5937F42 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937F42 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_root(transform, 0)) == 0 )
    sub_21FFECC(transform, v4);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
}


void PurchaseBehaviour__BuildProductIdCollection(const MethodInfo *method)
{
  __int64 v1; // x1
  long double v2; // q0
  ManagerConfig_c *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  PurchaseBehaviour___c_c *v12; // x8
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__12_0; // x20
  Il2CppObject *v15; // x21
  struct PurchaseBehaviour___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Collections_Generic_List_string__o *v31; // x20
  PurchaseBehaviour_c *v32; // x8
  struct PurchaseBehaviour_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5937F47 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_BankShopEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&System_Func_BankShopEntity__string__TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__);
    sub_21FFC50(&PurchaseBehaviour___c_TypeInfo);
    byte_5937F47 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseAppServer )
  {
    v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
      v4 = sub_2237AF8(v2);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
      v5 = sub_2237AF8(v2);
    v6 = **(UnityEngine_Object_o ***)(v5 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
    if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0 )
      {
        sub_21FFECC(Instance, v8);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0);
      v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   EnableEntitiyList,
                                                                   (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v12 = PurchaseBehaviour___c_TypeInfo;
      if ( !*(&PurchaseBehaviour___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo, v10);
        v12 = PurchaseBehaviour___c_TypeInfo;
      }
      static_fields = v12->static_fields;
      _9__12_0 = (System_Func_object__object__o *)static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !*(&v12->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v12, v10);
          static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        }
        v15 = (Il2CppObject *)static_fields->__9;
        _9__12_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BankShopEntity__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__12_0,
          v15,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__,
          0);
        v16 = PurchaseBehaviour___c_TypeInfo->static_fields;
        v16->__9__12_0 = (struct System_Func_BankShopEntity__string__o *)_9__12_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v16->__9__12_0,
          (int32_t)_9__12_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v11,
                                                                   (System_Func_TSource__TResult__o *)_9__12_0,
                                                                   (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v31 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v23,
                                                                  (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
      v32 = PurchaseBehaviour_TypeInfo;
      if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v24);
        v32 = PurchaseBehaviour_TypeInfo;
      }
      v33 = v32->static_fields;
      v33->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v11;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v33->BankShopEntityCollection,
        (int32_t)v11,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = v31;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)PurchaseBehaviour_TypeInfo->static_fields,
        (int32_t)v31,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
  }
}


PurchaseBehaviour_o *PurchaseBehaviour__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  UnityEngine_Object_o *cached_instance; // x19
  __int64 v4; // x1
  long double v5; // q0
  PurchaseBehaviour_c *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  UnityEngine_Object_o *v9; // x19
  __int64 v10; // x1
  bool v11; // w8
  PurchaseBehaviour_o *result; // x0
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  PurchaseBehaviour_c *v21; // x8
  Il2CppObject *v22; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_5937F43 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__);
    byte_5937F43 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
    v2 = PurchaseBehaviour_TypeInfo;
  }
  cached_instance = (UnityEngine_Object_o *)v2->static_fields->_cached_instance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( UnityEngine_Object__op_Inequality(cached_instance, 0, 0) )
  {
    v6 = PurchaseBehaviour_TypeInfo;
    if ( *(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
      return v6->static_fields->_cached_instance;
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v4);
LABEL_21:
    v6 = PurchaseBehaviour_TypeInfo;
    return v6->static_fields->_cached_instance;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 4);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8(v5);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8(v5);
  v9 = **(UnityEngine_Object_o ***)(v8 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v11 = UnityEngine_Object__op_Equality(v9, 0, 0);
  result = 0;
  if ( !v11 )
  {
    if ( !v9 )
      sub_21FFECC(0, v10);
    ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                             (UnityEngine_Component_o *)v9,
                                             (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v21 = PurchaseBehaviour_TypeInfo;
    v22 = ComponentInChildren_object__58644924;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v14);
      v21 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v21->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v22;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->_cached_instance,
      (int32_t)v22,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    goto LABEL_21;
  }
  return result;
}


System_Collections_Generic_List_string__o *PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(
        const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19

  if ( (byte_5937F50 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F50 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( v5 )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v7;
  }
  else
  {
    if ( !Instance || !Instance[1].monitor )
      sub_21FFECC(v5, v6);
    return PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs((PurchaseLogic_o *)v5, v6);
  }
}


bool PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_5937F4D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F4D = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0 )
    sub_21FFECC(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 536LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 544LL));
}


bool PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_5937F4F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F4F = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0 )
    sub_21FFECC(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 808LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 816LL));
}


bool PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_5937F4B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F4B = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0 )
    sub_21FFECC(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 520LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 528LL));
}


bool PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_5937F44 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F44 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) != 0 )
    return 0;
  if ( !Instance || (monitor = Instance[1].monitor) == 0 )
    sub_21FFECC(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 448LL));
}


void PurchaseBehaviour__Ready(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  __int64 v3; // x1
  PurchaseBehaviour_c *v4; // x0

  if ( (byte_5937F45 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F45 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v1);
  if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable((const MethodInfo *)v2) )
  {
    v4 = PurchaseBehaviour_TypeInfo;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v3);
    PurchaseBehaviour__BuildProductIdCollection((const MethodInfo *)v4);
  }
}


void PurchaseBehaviour__Ready_48382036(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  PurchaseBehaviour_c *v12; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_Collections_Generic_List_TSource__o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  PurchaseBehaviour_c *v22; // x8
  struct System_Collections_Generic_List_string__o *v23; // x19

  if ( (byte_5937F46 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F46 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, productIdArray);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0, 0) )
  {
    v12 = PurchaseBehaviour_TypeInfo;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v5);
      v12 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->_cached_instance = instance;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->_cached_instance,
      (int32_t)instance,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  v14 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
  v22 = PurchaseBehaviour_TypeInfo;
  v23 = (struct System_Collections_Generic_List_string__o *)v14;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v15);
    v22 = PurchaseBehaviour_TypeInfo;
  }
  v22->static_fields->ConsumableProductIdCollection = v23;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseBehaviour_TypeInfo->static_fields,
    (int32_t)v23,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void PurchaseBehaviour__RecoverPayment(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  ;
}


void PurchaseBehaviour__RemovePreparePurchaseShopIdsInPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_5937F52 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F52 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  monitor = (PurchaseLogic_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = (PurchaseLogic_o *)Instance[1].monitor) == 0 )
      sub_21FFECC(monitor, v7);
    PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(monitor, shopId, v8);
  }
}


void PurchaseBehaviour__SetCachedObfuscatedAccountId(System_String_o *obfuscatedAccountId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v7; // x1

  if ( (byte_5937F4C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F4C = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0 )
      sub_21FFECC(monitor, v7);
    (*(void (__fastcall **)(void *, System_String_o *, _QWORD))(*(_QWORD *)monitor + 504LL))(
      monitor,
      obfuscatedAccountId,
      *(_QWORD *)(*(_QWORD *)monitor + 512LL));
  }
}


void PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(bool isMismatched, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v7; // x1

  if ( (byte_5937F4E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    byte_5937F4E = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  monitor = (void *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !Instance || (monitor = Instance[1].monitor) == 0 )
      sub_21FFECC(monitor, v7);
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
    sub_21FFECC(0, bankShop);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseBehaviour__StartPayment_48383140(
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
    sub_21FFECC(0, *(_QWORD *)&shopId);
  PurchaseLogic__InitiatePurchase_48383160(purchaseLogic, shopId, productId, price, finishedAction, method);
}


void PurchaseBehaviour__set_LogErrorOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_21FFECC(0, value);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&purchaseLogic->fields._logErrorOutputAction,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseBehaviour__set_LogOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_21FFECC(0, value);
  purchaseLogic->fields._logOutputAction = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&purchaseLogic->fields._logOutputAction,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseBehaviour___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5937F55 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseBehaviour___c_TypeInfo);
    byte_5937F55 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PurchaseBehaviour___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseBehaviour___c_TypeInfo->static_fields->__9 = (struct PurchaseBehaviour___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseBehaviour___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
  return entity->fields.googleShopId;
}