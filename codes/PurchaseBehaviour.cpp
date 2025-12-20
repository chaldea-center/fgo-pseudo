void PurchaseBehaviour___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *v8; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2C131 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C131 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)PurchaseBehaviour_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  static_fields = PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v8;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->BankShopEntityCollection,
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v2 = this;
  if ( (byte_4D2C130 & 1) == 0 )
  {
    this = (PurchaseBehaviour_o *)sub_1C94098(&PurchaseLogicExternal_TypeInfo);
    byte_4D2C130 = 1;
  }
  Instance = PurchaseLogic__GetInstance((const MethodInfo *)this);
  v2->fields._purchaseLogic = Instance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._purchaseLogic, (int32_t)Instance, v4, v5, v6, v7, v8, v9);
  v10 = (Il2CppObject *)sub_1C942E4(PurchaseLogicExternal_TypeInfo);
  System_Object___ctor(v10, 0);
  v2->fields._purchaseLogicExternal = (struct PurchaseLogicExternal_o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields._purchaseLogicExternal,
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
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4D2C125 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C125 = 1;
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
      sub_1C942F0(monitor, v4);
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

  if ( (byte_4D2C127 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C127 = 1;
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
      sub_1C942F0(m_CachedPtr, v4);
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

  if ( (byte_4D2C126 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C126 = 1;
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
      sub_1C942F0(m_CachedPtr, v4);
    PurchaseLogicExternal__ExternalPaymentCheck((PurchaseLogicExternal_o *)m_CachedPtr, v4);
  }
}


void PurchaseBehaviour__AddPreparePurchaseShopIdsToPlayerPrefs(int32_t shopId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  PurchaseLogic_o *monitor; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2C12E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C12E = 1;
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
      sub_1C942F0(monitor, v6);
    PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(monitor, shopId, v7);
  }
}


void PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D2C11F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2C11F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_root(transform, 0)) == 0 )
    sub_1C942F0(transform, v4);
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
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  PurchaseBehaviour___c_c *v10; // x8
  System_Func_object__object__o *_9__12_0; // x20
  Il2CppObject *v12; // x21
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Collections_Generic_List_string__o *v27; // x20
  PurchaseBehaviour_c *v28; // x8
  struct PurchaseBehaviour_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4D2C124 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_BankShopEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C94098(&System_Func_BankShopEntity__string__TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__);
    sub_1C94098(&PurchaseBehaviour___c_TypeInfo);
    byte_4D2C124 = 1;
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
      v3 = sub_1C6A12C(inited);
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C6A12C(inited);
    v5 = **(UnityEngine_Object_o ***)(v4 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0 )
      {
        sub_1C942F0(Instance, v7);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0);
      v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  EnableEntitiyList,
                                                                  (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v10 = PurchaseBehaviour___c_TypeInfo;
      if ( !PurchaseBehaviour___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo);
        v10 = PurchaseBehaviour___c_TypeInfo;
      }
      _9__12_0 = (System_Func_object__object__o *)v10->static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = PurchaseBehaviour___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__12_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_BankShopEntity__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__12_0,
          v12,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__,
          0);
        static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = (struct System_Func_BankShopEntity__string__o *)_9__12_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
          (int32_t)_9__12_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v9,
                                                                   (System_Func_TSource__TResult__o *)_9__12_0,
                                                                   (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v27 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v20,
                                                                  (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_string___);
      v28 = PurchaseBehaviour_TypeInfo;
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        v28 = PurchaseBehaviour_TypeInfo;
      }
      v29 = v28->static_fields;
      v29->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v9;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v29->BankShopEntityCollection,
        (int32_t)v9,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = v27;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)PurchaseBehaviour_TypeInfo->static_fields,
        (int32_t)v27,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
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
  __int64 v8; // x1
  bool v9; // w8
  PurchaseBehaviour_o *result; // x0
  Il2CppObject *ComponentInChildren_object__51981160; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  PurchaseBehaviour_c *v18; // x8
  Il2CppObject *v19; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_4D2C120 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__);
    byte_4D2C120 = 1;
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
    v5 = sub_1C6A12C(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C(v3);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(v7, 0, 0);
  result = 0;
  if ( !v9 )
  {
    if ( !v7 )
      sub_1C942F0(0, v8);
    ComponentInChildren_object__51981160 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                                             (UnityEngine_Component_o *)v7,
                                             (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v18 = PurchaseBehaviour_TypeInfo;
    v19 = ComponentInChildren_object__51981160;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v18 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v19;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->_cached_instance,
      (int32_t)v19,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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

  if ( (byte_4D2C12D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C12D = 1;
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
    v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v5;
  }
  else
  {
    if ( !Instance || !Instance[1].monitor )
      sub_1C942F0(v3, v4);
    return PurchaseLogic__GetPreparePurchaseShopIdsFromPlayerPrefs((PurchaseLogic_o *)v3, v4);
  }
}


bool PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4D2C12A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C12A = 1;
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
    sub_1C942F0(monitor, v4);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 536LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 544LL));
}


bool PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4D2C12C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C12C = 1;
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
    sub_1C942F0(monitor, v4);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 808LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 816LL));
}


bool PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4D2C128 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C128 = 1;
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
    sub_1C942F0(monitor, v4);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 520LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 528LL));
}


bool PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  void *monitor; // x0
  __int64 v4; // x1

  if ( (byte_4D2C121 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C121 = 1;
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
    sub_1C942F0(monitor, v4);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 448LL));
}


void PurchaseBehaviour__Ready(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4D2C122 & 1) == 0 )
  {
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C122 = 1;
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


void PurchaseBehaviour__Ready_42198428(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  PurchaseBehaviour_c *v11; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_Collections_Generic_List_TSource__o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  PurchaseBehaviour_c *v20; // x8
  struct System_Collections_Generic_List_string__o *v21; // x19

  if ( (byte_4D2C123 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C123 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0, 0) )
  {
    v11 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v11 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->_cached_instance = instance;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->_cached_instance,
      (int32_t)instance,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  v13 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
          (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_string___);
  v20 = PurchaseBehaviour_TypeInfo;
  v21 = (struct System_Collections_Generic_List_string__o *)v13;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v20 = PurchaseBehaviour_TypeInfo;
  }
  v20->static_fields->ConsumableProductIdCollection = v21;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)PurchaseBehaviour_TypeInfo->static_fields,
    (int32_t)v21,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2C12F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C12F = 1;
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
      sub_1C942F0(monitor, v6);
    PurchaseLogic__RemovePreparePurchaseShopIdsInPlayerPrefs(monitor, shopId, v7);
  }
}


void PurchaseBehaviour__SetCachedObfuscatedAccountId(System_String_o *obfuscatedAccountId, const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  void *monitor; // x0
  __int64 v6; // x1

  if ( (byte_4D2C129 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C129 = 1;
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
      sub_1C942F0(monitor, v6);
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
  __int64 v6; // x1

  if ( (byte_4D2C12B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    byte_4D2C12B = 1;
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
      sub_1C942F0(monitor, v6);
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
    sub_1C942F0(0, bankShop);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


void PurchaseBehaviour__StartPayment_42199528(
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
    sub_1C942F0(0, shopId);
  PurchaseLogic__InitiatePurchase_42199552(purchaseLogic, shopId, productId, price, finishedAction, method);
}


void PurchaseBehaviour__set_LogErrorOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1C942F0(0, value);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&purchaseLogic->fields._logErrorOutputAction,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_1C942F0(0, value);
  purchaseLogic->fields._logOutputAction = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&purchaseLogic->fields._logOutputAction,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseBehaviour___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C132 & 1) == 0 )
  {
    sub_1C94098(&PurchaseBehaviour___c_TypeInfo);
    byte_4D2C132 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(PurchaseBehaviour___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PurchaseBehaviour___c_TypeInfo->static_fields->__9 = (struct PurchaseBehaviour___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)PurchaseBehaviour___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
  return entity->fields.googleShopId;
}