void __fastcall PurchaseBehaviour___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  struct PurchaseBehaviour_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42144EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v4);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v6);
    byte_42144EB = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 v1,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B0D840(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BankShopEntity__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  v18 = PurchaseBehaviour_TypeInfo->static_fields;
  v18->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v18->BankShopEntityCollection,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  sub_B0D840(
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
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0

  if ( (byte_42144E5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v1);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v2);
    byte_42144E5 = 1;
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
      sub_B0D97C(klass);
    (*((void (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 57))(
      klass,
      *((_QWORD *)klass->_1.image + 58));
  }
}


void __fastcall PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42144DF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42144DF = 1;
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
  __int64 v13; // x1
  ManagerConfig_c *v14; // x0
  __int64 v15; // x19
  __int64 v16; // x19
  UnityEngine_Object_o *v17; // x19
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  PurchaseBehaviour___c_c *v23; // x8
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x20
  Il2CppObject *v26; // x21
  struct PurchaseBehaviour___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x20
  PurchaseBehaviour_c *v42; // x8
  struct PurchaseBehaviour_StaticFields *v43; // x0
  BattleServantConfConponent_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42144E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BankShopMaster___, v1);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___, v2);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_BankShopEntity___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_B0D8A4(&Method_System_Func_BankShopEntity__string___ctor__, v5);
    sub_B0D8A4(&System_Func_BankShopEntity__string__TypeInfo, v6);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__11_0__, v12);
    sub_B0D8A4(&PurchaseBehaviour___c_TypeInfo, v13);
    byte_42144E4 = 1;
  }
  v14 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseAppServer )
  {
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v16 = **(_QWORD **)(v15 + 192);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AA65A4(v16);
    v17 = **(UnityEngine_Object_o ***)(v16 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0LL )
      {
        sub_B0D97C(Instance);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0LL);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   EnableEntitiyList,
                                                                   (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v23 = PurchaseBehaviour___c_TypeInfo;
      if ( (BYTE3(PurchaseBehaviour___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo);
        v23 = PurchaseBehaviour___c_TypeInfo;
      }
      static_fields = v23->static_fields;
      _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)static_fields->__9;
        _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                     System_Func_BankShopEntity__string__TypeInfo,
                                                                                                     v20,
                                                                                                     v21);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__11_0,
          v26,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__11_0__,
          (const MethodInfo_261A104 *)Method_System_Func_BankShopEntity__string___ctor__);
        v27 = PurchaseBehaviour___c_TypeInfo->static_fields;
        v27->__9__11_0 = (struct System_Func_BankShopEntity__string__o *)_9__11_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v27->__9__11_0,
          (System_Int32_array **)_9__11_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v22,
                                                                   (System_Func_TSource__TResult__o *)_9__11_0,
                                                                   (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v41 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                     v34,
                                     (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___);
      v42 = PurchaseBehaviour_TypeInfo;
      if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        v42 = PurchaseBehaviour_TypeInfo;
      }
      v43 = v42->static_fields;
      v43->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v22;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v43->BankShopEntityCollection,
        (System_Int32_array **)v22,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v44 = (BattleServantConfConponent_o *)PurchaseBehaviour_TypeInfo->static_fields;
      v44->klass = (BattleServantConfConponent_c *)v41;
      sub_B0D840(v44, v41, v45, v46, v47, v48, v49, v50);
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
  __int64 v8; // x19
  __int64 v9; // x19
  UnityEngine_Object_o *v10; // x19
  bool v11; // w8
  PurchaseBehaviour_o *result; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  PurchaseBehaviour_c *v20; // x8
  System_Int32_array **v21; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_42144E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___, v1);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v2);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__, v4);
    byte_42144E0 = 1;
  }
  v5 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v5 = PurchaseBehaviour_TypeInfo;
  }
  cached_instance = (UnityEngine_Object_o *)v5->static_fields->_cached_instance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cached_instance, 0LL, 0LL) )
  {
    v7 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      return v7->static_fields->_cached_instance;
    }
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
LABEL_26:
    v7 = PurchaseBehaviour_TypeInfo;
    return v7->static_fields->_cached_instance;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AA65A4(v9);
  v10 = **(UnityEngine_Object_o ***)(v9 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  result = 0LL;
  if ( !v11 )
  {
    if ( !v10 )
      sub_B0D97C(0LL);
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)v10,
                                     (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v20 = PurchaseBehaviour_TypeInfo;
    v21 = (System_Int32_array **)ComponentInChildren_UIWidget;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v20 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v20->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v21;
    sub_B0D840((BattleServantConfConponent_o *)&static_fields->_cached_instance, v21, v14, v15, v16, v17, v18, v19);
    goto LABEL_26;
  }
  return result;
}


bool __fastcall PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0

  if ( (byte_42144E8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v1);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v2);
    byte_42144E8 = 1;
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
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B0D97C(klass);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 67))(
           klass,
           *((_QWORD *)klass->_1.image + 68));
}


bool __fastcall PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0

  if ( (byte_42144EA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v1);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v2);
    byte_42144EA = 1;
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
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B0D97C(klass);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 101))(
           klass,
           *((_QWORD *)klass->_1.image + 102));
}


bool __fastcall PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0

  if ( (byte_42144E6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v1);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v2);
    byte_42144E6 = 1;
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
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B0D97C(klass);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 65))(
           klass,
           *((_QWORD *)klass->_1.image + 66));
}


bool __fastcall PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PurchaseBehaviour_c *v3; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0

  if ( (byte_42144E1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v1);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v2);
    byte_42144E1 = 1;
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
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B0D97C(klass);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 55))(
           klass,
           *((_QWORD *)klass->_1.image + 56));
}


void __fastcall PurchaseBehaviour__Ready(const MethodInfo *method)
{
  __int64 v1; // x1
  PurchaseBehaviour_c *v2; // x0
  PurchaseBehaviour_c *v3; // x0

  if ( (byte_42144E2 & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v1);
    byte_42144E2 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable((const MethodInfo *)v2) )
  {
    v3 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    }
    PurchaseBehaviour__BuildProductIdCollection((const MethodInfo *)v3);
  }
}


void __fastcall PurchaseBehaviour__Ready_24387820(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  PurchaseBehaviour_c *v13; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x19
  PurchaseBehaviour_c *v22; // x8
  BattleServantConfConponent_o *v23; // x0

  if ( (byte_42144E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, productIdArray);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v6);
    byte_42144E3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0LL, 0LL) )
  {
    v13 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v13 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->_cached_instance = instance;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->_cached_instance,
      (System_Int32_array **)instance,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  v21 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
                                 (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___);
  v22 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v22 = PurchaseBehaviour_TypeInfo;
  }
  v23 = (BattleServantConfConponent_o *)v22->static_fields;
  v23->klass = (BattleServantConfConponent_c *)v21;
  sub_B0D840(v23, v21, v15, v16, v17, v18, v19, v20);
}


void __fastcall PurchaseBehaviour__RecoverPayment(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseBehaviour__SetCachedObfuscatedAccountId(
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PurchaseBehaviour_c *v4; // x0
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_Object_c *klass; // x0

  if ( (byte_42144E7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v3);
    byte_42144E7 = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v4);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !Instance || (klass = Instance[1].klass) == 0LL )
      sub_B0D97C(klass);
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
  __int64 v3; // x1
  PurchaseBehaviour_c *v4; // x0
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_Object_c *klass; // x0

  if ( (byte_42144E9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v3);
    byte_42144E9 = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v4);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !Instance || (klass = Instance[1].klass) == 0LL )
      sub_B0D97C(klass);
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
    sub_B0D97C(0LL);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


void __fastcall PurchaseBehaviour__StartPayment_24388356(
        PurchaseBehaviour_o *this,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_B0D97C(0LL);
  PurchaseLogic__InitiatePurchase_24388380(purchaseLogic, productId, price, finishedAction, method);
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
    sub_B0D97C(0LL);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_B0D840(
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
    sub_B0D97C(0LL);
  purchaseLogic->fields._logOutputAction = value;
  sub_B0D840(
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x0

  if ( (byte_42121B1 & 1) == 0 )
  {
    sub_B0D8A4(&PurchaseBehaviour___c_TypeInfo, v1);
    byte_42121B1 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(PurchaseBehaviour___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseBehaviour___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return entity->fields.googleShopId;
}