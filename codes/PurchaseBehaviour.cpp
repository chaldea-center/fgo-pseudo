void __fastcall PurchaseBehaviour___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B36AF1 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v1);
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, v2);
    sub_1BD3458(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v3);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v5);
    byte_4B36AF1 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
  PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)PurchaseBehaviour_TypeInfo->static_fields,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  static_fields = PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v13;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->BankShopEntityCollection,
    (int64_t)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  PurchaseBehaviour_TypeInfo->static_fields->isOpenPurchaseDialogEvent = 0;
}


void __fastcall PurchaseBehaviour___ctor(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_o *v2; // x19
  PurchaseLogic_o *Instance; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  Il2CppObject *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v2 = this;
  if ( (byte_4B36AF0 & 1) == 0 )
  {
    this = (PurchaseBehaviour_o *)sub_1BD3458(&PurchaseLogicExternal_TypeInfo, method);
    byte_4B36AF0 = 1;
  }
  Instance = PurchaseLogic__GetInstance((const MethodInfo *)this);
  v2->fields._purchaseLogic = Instance;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields._purchaseLogic, (int64_t)Instance, v4, v5, v6, v7, v8, v9);
  v10 = (Il2CppObject *)sub_1BD36A4(PurchaseLogicExternal_TypeInfo);
  System_Object___ctor(v10, 0LL);
  v2->fields._purchaseLogicExternal = (struct PurchaseLogicExternal_o *)v10;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields._purchaseLogicExternal,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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

  if ( (byte_4B36AE5 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v2);
    byte_4B36AE5 = 1;
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
      sub_1BD36B4(monitor, v6);
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

  if ( (byte_4B36AE7 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v2);
    byte_4B36AE7 = 1;
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
      sub_1BD36B4(purchaseLogicExternal, v6);
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

  if ( (byte_4B36AE6 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v2);
    byte_4B36AE6 = 1;
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
      sub_1BD36B4(purchaseLogicExternal, v6);
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

  if ( (byte_4B36AEE & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v3);
    byte_4B36AEE = 1;
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
      sub_1BD36B4(monitor, v7);
    PurchaseLogic__AddPreparePurchaseShopIdsToPlayerPrefs(monitor, shopId, v8);
  }
}


void __fastcall PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B36ADF & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B36ADF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_root(transform, 0LL)) == 0LL )
    sub_1BD36B4(transform, v4);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
}


void __fastcall PurchaseBehaviour__BuildProductIdCollection(const MethodInfo *method)
{
  __int64 v1; // x1
  long double inited; // q0
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
  __int64 v13; // x1
  ManagerConfig_c *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_Object_o *v17; // x19
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  PurchaseBehaviour___c_c *v22; // x8
  System_Func_object__object__o *_9__12_0; // x20
  Il2CppObject *v24; // x21
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Collections_Generic_List_string__o *v39; // x20
  PurchaseBehaviour_c *v40; // x8
  struct PurchaseBehaviour_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B36AE4 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_BankShopMaster___, v1);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___, v3);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_BankShopEntity___, v4);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_string___, v5);
    sub_1BD3458(&System_Func_BankShopEntity__string__TypeInfo, v6);
    sub_1BD3458(&ManagerConfig_TypeInfo, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BD3458(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__, v12);
    sub_1BD3458(&PurchaseBehaviour___c_TypeInfo, v13);
    byte_4B36AE4 = 1;
  }
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseAppServer )
  {
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C25334(inited);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C25334(inited);
    v17 = **(UnityEngine_Object_o ***)(v16 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0LL )
      {
        sub_1BD36B4(Instance, v19);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0LL);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   EnableEntitiyList,
                                                                   (const MethodInfo_2F6EB10 *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v22 = PurchaseBehaviour___c_TypeInfo;
      if ( !PurchaseBehaviour___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo);
        v22 = PurchaseBehaviour___c_TypeInfo;
      }
      _9__12_0 = (System_Func_object__object__o *)v22->static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = PurchaseBehaviour___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__12_0 = (System_Func_object__object__o *)sub_1BD36A4(System_Func_BankShopEntity__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__12_0,
          v24,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__12_0__,
          0LL);
        static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = (struct System_Func_BankShopEntity__string__o *)_9__12_0;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
          (int64_t)_9__12_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v21,
                                                                   (System_Func_TSource__TResult__o *)_9__12_0,
                                                                   (const MethodInfo_2F62E1C *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v39 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v32,
                                                                  (const MethodInfo_2F6EB10 *)Method_System_Linq_Enumerable_ToList_string___);
      v40 = PurchaseBehaviour_TypeInfo;
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        v40 = PurchaseBehaviour_TypeInfo;
      }
      v41 = v40->static_fields;
      v41->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v21;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v41->BankShopEntityCollection,
        (int64_t)v21,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      PurchaseBehaviour_TypeInfo->static_fields->ConsumableProductIdCollection = v39;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)PurchaseBehaviour_TypeInfo->static_fields,
        (int64_t)v39,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
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
  long double v7; // q0
  PurchaseBehaviour_c *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x19
  __int64 v12; // x1
  bool v13; // w8
  PurchaseBehaviour_o *result; // x0
  Il2CppObject *ComponentInChildren_object__49447820; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  PurchaseBehaviour_c *v22; // x8
  int64_t v23; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_4B36AE0 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___, v1);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v2);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__, v4);
    byte_4B36AE0 = 1;
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
    v8 = PurchaseBehaviour_TypeInfo;
    if ( PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      return v8->static_fields->_cached_instance;
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
LABEL_21:
    v8 = PurchaseBehaviour_TypeInfo;
    return v8->static_fields->_cached_instance;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C25334(v7);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C25334(v7);
  v11 = **(UnityEngine_Object_o ***)(v10 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
  result = 0LL;
  if ( !v13 )
  {
    if ( !v11 )
      sub_1BD36B4(0LL, v12);
    ComponentInChildren_object__49447820 = UnityEngine_Component__GetComponentInChildren_object__49447820(
                                             (UnityEngine_Component_o *)v11,
                                             (const MethodInfo_2F2838C *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v22 = PurchaseBehaviour_TypeInfo;
    v23 = (int64_t)ComponentInChildren_object__49447820;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v22 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v22->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v23;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->_cached_instance, v23, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4B36AED & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, v1);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v2);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v4);
    byte_4B36AED = 1;
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
    v9 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
    return (System_Collections_Generic_List_string__o *)v9;
  }
  else
  {
    if ( !Instance || !Instance[1].monitor )
      sub_1BD36B4(v7, v8);
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

  if ( (byte_4B36AEA & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v2);
    byte_4B36AEA = 1;
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
    sub_1BD36B4(monitor, v6);
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

  if ( (byte_4B36AEC & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v2);
    byte_4B36AEC = 1;
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
    sub_1BD36B4(monitor, v6);
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

  if ( (byte_4B36AE8 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v2);
    byte_4B36AE8 = 1;
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
    sub_1BD36B4(monitor, v6);
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

  if ( (byte_4B36AE1 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v2);
    byte_4B36AE1 = 1;
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
    sub_1BD36B4(monitor, v6);
  return (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
           monitor,
           *(_QWORD *)(*(_QWORD *)monitor + 448LL));
}


void __fastcall PurchaseBehaviour__Ready(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  PurchaseBehaviour_c *v3; // x0

  if ( (byte_4B36AE2 & 1) == 0 )
  {
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v1);
    byte_4B36AE2 = 1;
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


void __fastcall PurchaseBehaviour__Ready_39408252(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  PurchaseBehaviour_c *v13; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_Collections_Generic_List_TSource__o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  PurchaseBehaviour_c *v22; // x8
  int64_t v23; // x19

  if ( (byte_4B36AE3 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_string___, productIdArray);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v6);
    byte_4B36AE3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0LL, 0LL) )
  {
    v13 = PurchaseBehaviour_TypeInfo;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v13 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->_cached_instance = instance;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->_cached_instance,
      (int64_t)instance,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  v15 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
          (const MethodInfo_2F6EB10 *)Method_System_Linq_Enumerable_ToList_string___);
  v22 = PurchaseBehaviour_TypeInfo;
  v23 = (int64_t)v15;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v22 = PurchaseBehaviour_TypeInfo;
  }
  v22->static_fields->ConsumableProductIdCollection = (struct System_Collections_Generic_List_string__o *)v23;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)PurchaseBehaviour_TypeInfo->static_fields,
    v23,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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

  if ( (byte_4B36AEF & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v3);
    byte_4B36AEF = 1;
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
      sub_1BD36B4(monitor, v7);
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

  if ( (byte_4B36AE9 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v3);
    byte_4B36AE9 = 1;
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
      sub_1BD36B4(monitor, v7);
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

  if ( (byte_4B36AEB & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&PurchaseBehaviour_TypeInfo, v3);
    byte_4B36AEB = 1;
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
      sub_1BD36B4(monitor, v7);
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
    sub_1BD36B4(0LL, bankShop);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


void __fastcall PurchaseBehaviour__StartPayment_39409352(
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
    sub_1BD36B4(0LL, shopId);
  PurchaseLogic__InitiatePurchase_39409376(purchaseLogic, shopId, productId, price, finishedAction, method);
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
    sub_1BD36B4(0LL, value);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_1BD33FC(
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
    sub_1BD36B4(0LL, value);
  purchaseLogic->fields._logOutputAction = value;
  sub_1BD33FC(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B36AF2 & 1) == 0 )
  {
    sub_1BD3458(&PurchaseBehaviour___c_TypeInfo, v1);
    byte_4B36AF2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(PurchaseBehaviour___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PurchaseBehaviour___c_TypeInfo->static_fields->__9 = (struct PurchaseBehaviour___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)PurchaseBehaviour___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return entity->fields.googleShopId;
}