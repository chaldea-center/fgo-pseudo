void __fastcall PurchaseBehaviour___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  struct PurchaseBehaviour_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438B610 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B610 = 1;
  }
  v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v1,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  static_fields = (BattleServantConfConponent_o *)PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  v10 = PurchaseBehaviour_TypeInfo->static_fields;
  v10->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&v10->BankShopEntityCollection,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall PurchaseBehaviour___ctor(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  struct PurchaseLogic_o *Instance; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  Instance = PurchaseLogic__GetInstance((const MethodInfo *)this);
  this->fields._purchaseLogic = Instance;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._purchaseLogic,
    (System_Int32_array **)Instance,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PurchaseBehaviour__Activate(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v4; // x1

  if ( (byte_438B60A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B60A = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !Instance || (klass = Instance[1].klass) == 0LL )
      sub_B7769C(klass, v4);
    (*((void (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 57))(
      klass,
      *((_QWORD *)klass->_1.image + 58));
  }
}


void __fastcall PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_438B604 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B604 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
}


void __fastcall PurchaseBehaviour__BuildProductIdCollection(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  __int64 v2; // x19
  __int64 v3; // x19
  UnityEngine_Object_o *v4; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  PurchaseBehaviour___c_c *v9; // x8
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x20
  Il2CppObject *v12; // x21
  struct PurchaseBehaviour___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x20
  PurchaseBehaviour_c *v28; // x8
  struct PurchaseBehaviour_StaticFields *v29; // x0
  BattleServantConfConponent_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_438B609 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_BankShopMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_BankShopEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B775C4(&Method_System_Func_BankShopEntity__string___ctor__);
    sub_B775C4(&System_Func_BankShopEntity__string__TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__11_0__);
    sub_B775C4(&PurchaseBehaviour___c_TypeInfo);
    byte_438B609 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseAppServer )
  {
    v2 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
      sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v3 = **(_QWORD **)(v2 + 192);
    if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
      sub_B0F2C4(v3);
    v4 = **(UnityEngine_Object_o ***)(v3 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0LL )
      {
        sub_B7769C(Instance, v6);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0LL);
      v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  EnableEntitiyList,
                                                                  (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v9 = PurchaseBehaviour___c_TypeInfo;
      if ( (BYTE3(PurchaseBehaviour___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo);
        v9 = PurchaseBehaviour___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BankShopEntity__string__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__11_0,
          v12,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__11_0__,
          (const MethodInfo_29EAA10 *)Method_System_Func_BankShopEntity__string___ctor__);
        v13 = PurchaseBehaviour___c_TypeInfo->static_fields;
        v13->__9__11_0 = (struct System_Func_BankShopEntity__string__o *)_9__11_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v13->__9__11_0,
          (System_Int32_array **)_9__11_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v8,
                                                                   (System_Func_TSource__TResult__o *)_9__11_0,
                                                                   (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v27 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                     v20,
                                     (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_string___);
      v28 = PurchaseBehaviour_TypeInfo;
      if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        v28 = PurchaseBehaviour_TypeInfo;
      }
      v29 = v28->static_fields;
      v29->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v8;
      sub_B77560(
        (BattleServantConfConponent_o *)&v29->BankShopEntityCollection,
        (System_Int32_array **)v8,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v30 = (BattleServantConfConponent_o *)PurchaseBehaviour_TypeInfo->static_fields;
      v30->klass = (BattleServantConfConponent_c *)v27;
      sub_B77560(v30, v27, v31, v32, v33, v34, v35, v36);
    }
  }
}


PurchaseBehaviour_o *__fastcall PurchaseBehaviour__GetInstance(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *cached_instance; // x19
  PurchaseBehaviour_c *v3; // x0
  __int64 v4; // x19
  __int64 v5; // x19
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1
  bool v8; // w8
  PurchaseBehaviour_o *result; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  PurchaseBehaviour_c *v17; // x8
  System_Int32_array **v18; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_438B605 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__);
    byte_438B605 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v1 = PurchaseBehaviour_TypeInfo;
  }
  cached_instance = (UnityEngine_Object_o *)v1->static_fields->_cached_instance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cached_instance, 0LL, 0LL) )
  {
    v3 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      return v3->static_fields->_cached_instance;
    }
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
LABEL_26:
    v3 = PurchaseBehaviour_TypeInfo;
    return v3->static_fields->_cached_instance;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(v5);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  result = 0LL;
  if ( !v8 )
  {
    if ( !v6 )
      sub_B7769C(0LL, v7);
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)v6,
                                     (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v17 = PurchaseBehaviour_TypeInfo;
    v18 = (System_Int32_array **)ComponentInChildren_UIWidget;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v17 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v18;
    sub_B77560((BattleServantConfConponent_o *)&static_fields->_cached_instance, v18, v11, v12, v13, v14, v15, v16);
    goto LABEL_26;
  }
  return result;
}


bool __fastcall PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v4; // x1

  if ( (byte_438B60D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B60D = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B7769C(klass, v4);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 67))(
           klass,
           *((_QWORD *)klass->_1.image + 68));
}


bool __fastcall PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v4; // x1

  if ( (byte_438B60F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B60F = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B7769C(klass, v4);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 101))(
           klass,
           *((_QWORD *)klass->_1.image + 102));
}


bool __fastcall PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v4; // x1

  if ( (byte_438B60B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B60B = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B7769C(klass, v4);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 65))(
           klass,
           *((_QWORD *)klass->_1.image + 66));
}


bool __fastcall PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v4; // x1

  if ( (byte_438B606 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B606 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B7769C(klass, v4);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 55))(
           klass,
           *((_QWORD *)klass->_1.image + 56));
}


void __fastcall PurchaseBehaviour__Ready(const MethodInfo *method)
{
  PurchaseBehaviour_c *v1; // x0
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_438B607 & 1) == 0 )
  {
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B607 = 1;
  }
  v1 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable((const MethodInfo *)v1) )
  {
    v2 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    }
    PurchaseBehaviour__BuildProductIdCollection((const MethodInfo *)v2);
  }
}


void __fastcall PurchaseBehaviour__Ready_25741232(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  PurchaseBehaviour_c *v11; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x19
  PurchaseBehaviour_c *v20; // x8
  BattleServantConfConponent_o *v21; // x0

  if ( (byte_438B608 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B608 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0LL, 0LL) )
  {
    v11 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v11 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->_cached_instance = instance;
    sub_B77560(
      (BattleServantConfConponent_o *)&static_fields->_cached_instance,
      (System_Int32_array **)instance,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  v19 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
                                 (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_string___);
  v20 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v20 = PurchaseBehaviour_TypeInfo;
  }
  v21 = (BattleServantConfConponent_o *)v20->static_fields;
  v21->klass = (BattleServantConfConponent_c *)v19;
  sub_B77560(v21, v19, v13, v14, v15, v16, v17, v18);
}


void __fastcall PurchaseBehaviour__RecoverPayment(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseBehaviour__SetCachedObfuscatedAccountId(
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v6; // x1

  if ( (byte_438B60C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B60C = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !Instance || (klass = Instance[1].klass) == 0LL )
      sub_B7769C(klass, v6);
    (*((void (__fastcall **)(UnityEngine_Object_c *, System_String_o *, _QWORD))klass->_1.image + 63))(
      klass,
      obfuscatedAccountId,
      *((_QWORD *)klass->_1.image + 64));
  }
}


void __fastcall PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(
        bool isMismatched,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v6; // x1

  if ( (byte_438B60E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    byte_438B60E = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v3);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !Instance || (klass = Instance[1].klass) == 0LL )
      sub_B7769C(klass, v6);
    (*((void (__fastcall **)(UnityEngine_Object_c *, bool, _QWORD))klass->_1.image + 73))(
      klass,
      isMismatched,
      *((_QWORD *)klass->_1.image + 74));
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
    sub_B7769C(0LL, bankShop);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


void __fastcall PurchaseBehaviour__StartPayment_25741768(
        PurchaseBehaviour_o *this,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_B7769C(0LL, productId);
  PurchaseLogic__InitiatePurchase_25741792(purchaseLogic, productId, price, finishedAction, method);
}


void __fastcall PurchaseBehaviour__set_LogErrorOutputAction(
        PurchaseBehaviour_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_B7769C(0LL, value);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&purchaseLogic->fields._logErrorOutputAction,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_B7769C(0LL, value);
  purchaseLogic->fields._logOutputAction = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&purchaseLogic->fields._logOutputAction,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseBehaviour___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B135 & 1) == 0 )
  {
    sub_B775C4(&PurchaseBehaviour___c_TypeInfo);
    byte_438B135 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(PurchaseBehaviour___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)PurchaseBehaviour___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall PurchaseBehaviour___c___ctor(PurchaseBehaviour___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall PurchaseBehaviour___c___BuildProductIdCollection_b__11_0(
        PurchaseBehaviour___c_o *this,
        BankShopEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B7769C(this, 0LL);
  return entity->fields.googleShopId;
}