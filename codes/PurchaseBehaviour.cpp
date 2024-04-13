void __fastcall PurchaseBehaviour___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  struct PurchaseBehaviour_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E8813 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v13, v14, v15);
    byte_42E8813 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)PurchaseBehaviour_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  v25 = PurchaseBehaviour_TypeInfo->static_fields;
  v25->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v25->BankShopEntityCollection,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PurchaseBehaviour_c *v7; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v10; // x1

  if ( (byte_42E880D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v4, v5, v6);
    byte_42E880D = 1;
  }
  v7 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !Instance || (klass = Instance[1].klass) == 0LL )
      sub_B5D69C(klass, v10);
    (*((void (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 57))(
      klass,
      *((_QWORD *)klass->_1.image + 58));
  }
}


void __fastcall PurchaseBehaviour__Awake(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E8807 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8807 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  ManagerConfig_c *v40; // x0
  __int64 v41; // x19
  __int64 v42; // x19
  UnityEngine_Object_o *v43; // x19
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnableEntitiyList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  PurchaseBehaviour___c_c *v48; // x8
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x20
  Il2CppObject *v51; // x21
  struct PurchaseBehaviour___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x20
  PurchaseBehaviour_c *v67; // x8
  struct PurchaseBehaviour_StaticFields *v68; // x0
  BattleServantConfConponent_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7

  if ( (byte_42E880C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BankShopMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BankShopEntity__string___, v4, v5, v6);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_BankShopEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_BankShopEntity__string___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_BankShopEntity__string__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&Method_PurchaseBehaviour___c__BuildProductIdCollection_b__11_0__, v34, v35, v36);
    sub_B5D5C4(&PurchaseBehaviour___c_TypeInfo, v37, v38, v39);
    byte_42E880C = 1;
  }
  v40 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v40 = ManagerConfig_TypeInfo;
  }
  if ( v40->static_fields->UseAppServer )
  {
    v41 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v42 = **(_QWORD **)(v41 + 192);
    if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
      sub_AF52C4(v42);
    v43 = **(UnityEngine_Object_o ***)(v42 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BankShopMaster___)) == 0LL )
      {
        sub_B5D69C(Instance, v45);
      }
      EnableEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)BankShopMaster__GetEnableEntitiyList(
                                                                                 (BankShopMaster_o *)Instance,
                                                                                 0LL);
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   EnableEntitiyList,
                                                                   (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_BankShopEntity___);
      v48 = PurchaseBehaviour___c_TypeInfo;
      if ( (BYTE3(PurchaseBehaviour___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour___c_TypeInfo);
        v48 = PurchaseBehaviour___c_TypeInfo;
      }
      static_fields = v48->static_fields;
      _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v48);
          static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
        }
        v51 = (Il2CppObject *)static_fields->__9;
        _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BankShopEntity__string__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__11_0,
          v51,
          Method_PurchaseBehaviour___c__BuildProductIdCollection_b__11_0__,
          (const MethodInfo_2C3041C *)Method_System_Func_BankShopEntity__string___ctor__);
        v52 = PurchaseBehaviour___c_TypeInfo->static_fields;
        v52->__9__11_0 = (struct System_Func_BankShopEntity__string__o *)_9__11_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v52->__9__11_0,
          (System_Int32_array **)_9__11_0,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
      }
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v47,
                                                                   (System_Func_TSource__TResult__o *)_9__11_0,
                                                                   (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BankShopEntity__string___);
      v66 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                     v59,
                                     (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___);
      v67 = PurchaseBehaviour_TypeInfo;
      if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        v67 = PurchaseBehaviour_TypeInfo;
      }
      v68 = v67->static_fields;
      v68->BankShopEntityCollection = (struct System_Collections_Generic_List_BankShopEntity__o *)v47;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v68->BankShopEntityCollection,
        (System_Int32_array **)v47,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      v69 = (BattleServantConfConponent_o *)PurchaseBehaviour_TypeInfo->static_fields;
      v69->klass = (BattleServantConfConponent_c *)v66;
      sub_B5D560(v69, v66, v70, v71, v72, v73, v74, v75);
    }
  }
}


PurchaseBehaviour_o *__fastcall PurchaseBehaviour__GetInstance(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  PurchaseBehaviour_c *v13; // x0
  UnityEngine_Object_o *cached_instance; // x19
  PurchaseBehaviour_c *v15; // x0
  __int64 v16; // x19
  __int64 v17; // x19
  UnityEngine_Object_o *v18; // x19
  __int64 v19; // x1
  bool v20; // w8
  PurchaseBehaviour_o *result; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  PurchaseBehaviour_c *v29; // x8
  System_Int32_array **v30; // x19
  struct PurchaseBehaviour_StaticFields *static_fields; // x0

  if ( (byte_42E8808 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___, v1, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__getInstance__, v10, v11, v12);
    byte_42E8808 = 1;
  }
  v13 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v13 = PurchaseBehaviour_TypeInfo;
  }
  cached_instance = (UnityEngine_Object_o *)v13->static_fields->_cached_instance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cached_instance, 0LL, 0LL) )
  {
    v15 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      return v15->static_fields->_cached_instance;
    }
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
LABEL_26:
    v15 = PurchaseBehaviour_TypeInfo;
    return v15->static_fields->_cached_instance;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_ManagementManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AF52C4(v17);
  v18 = **(UnityEngine_Object_o ***)(v17 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
  result = 0LL;
  if ( !v20 )
  {
    if ( !v18 )
      sub_B5D69C(0LL, v19);
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)v18,
                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_PurchaseBehaviour___);
    v29 = PurchaseBehaviour_TypeInfo;
    v30 = (System_Int32_array **)ComponentInChildren_UIWidget;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v29 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v29->static_fields;
    static_fields->_cached_instance = (struct PurchaseBehaviour_o *)v30;
    sub_B5D560((BattleServantConfConponent_o *)&static_fields->_cached_instance, v30, v23, v24, v25, v26, v27, v28);
    goto LABEL_26;
  }
  return result;
}


bool __fastcall PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PurchaseBehaviour_c *v7; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v10; // x1

  if ( (byte_42E8810 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v4, v5, v6);
    byte_42E8810 = 1;
  }
  v7 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B5D69C(klass, v10);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 67))(
           klass,
           *((_QWORD *)klass->_1.image + 68));
}


bool __fastcall PurchaseBehaviour__IsDeferredPurchaseExists(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PurchaseBehaviour_c *v7; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v10; // x1

  if ( (byte_42E8812 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v4, v5, v6);
    byte_42E8812 = 1;
  }
  v7 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B5D69C(klass, v10);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 101))(
           klass,
           *((_QWORD *)klass->_1.image + 102));
}


bool __fastcall PurchaseBehaviour__IsObfuscatedAccountIdCached(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PurchaseBehaviour_c *v7; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v10; // x1

  if ( (byte_42E880E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v4, v5, v6);
    byte_42E880E = 1;
  }
  v7 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B5D69C(klass, v10);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 65))(
           klass,
           *((_QWORD *)klass->_1.image + 66));
}


bool __fastcall PurchaseBehaviour__IsPurchasingFrameworkAvailable(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PurchaseBehaviour_c *v7; // x0
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v10; // x1

  if ( (byte_42E8809 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v4, v5, v6);
    byte_42E8809 = 1;
  }
  v7 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
    return 0;
  if ( !Instance || (klass = Instance[1].klass) == 0LL )
    sub_B5D69C(klass, v10);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD))klass->_1.image + 55))(
           klass,
           *((_QWORD *)klass->_1.image + 56));
}


void __fastcall PurchaseBehaviour__Ready(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  PurchaseBehaviour_c *v4; // x0
  PurchaseBehaviour_c *v5; // x0

  if ( (byte_42E880A & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v1, v2, v3);
    byte_42E880A = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable((const MethodInfo *)v4) )
  {
    v5 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    }
    PurchaseBehaviour__BuildProductIdCollection((const MethodInfo *)v5);
  }
}


void __fastcall PurchaseBehaviour__Ready_25112968(
        PurchaseBehaviour_o *instance,
        System_String_array *productIdArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  PurchaseBehaviour_c *v18; // x0
  struct PurchaseBehaviour_StaticFields *static_fields; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x19
  PurchaseBehaviour_c *v27; // x8
  BattleServantConfConponent_o *v28; // x0

  if ( (byte_42E880B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, (_DWORD)productIdArray, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v9, v10, v11);
    byte_42E880B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)instance, 0LL, 0LL) )
  {
    v18 = PurchaseBehaviour_TypeInfo;
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      v18 = PurchaseBehaviour_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->_cached_instance = instance;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->_cached_instance,
      (System_Int32_array **)instance,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v26 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)productIdArray,
                                 (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___);
  v27 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v27 = PurchaseBehaviour_TypeInfo;
  }
  v28 = (BattleServantConfConponent_o *)v27->static_fields;
  v28->klass = (BattleServantConfConponent_c *)v26;
  sub_B5D560(v28, v26, v20, v21, v22, v23, v24, v25);
}


void __fastcall PurchaseBehaviour__RecoverPayment(PurchaseBehaviour_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseBehaviour__SetCachedObfuscatedAccountId(
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PurchaseBehaviour_c *v8; // x0
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v11; // x1

  if ( (byte_42E880F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v5, v6, v7);
    byte_42E880F = 1;
  }
  v8 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v8);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !Instance || (klass = Instance[1].klass) == 0LL )
      sub_B5D69C(klass, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PurchaseBehaviour_c *v8; // x0
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v11; // x1

  if ( (byte_42E8811 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v5, v6, v7);
    byte_42E8811 = 1;
  }
  v8 = PurchaseBehaviour_TypeInfo;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance((const MethodInfo *)v8);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !Instance || (klass = Instance[1].klass) == 0LL )
      sub_B5D69C(klass, v11);
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
    sub_B5D69C(0LL, bankShop);
  PurchaseLogic__InitiatePurchase(purchaseLogic, bankShop, finishedAction, method);
}


void __fastcall PurchaseBehaviour__StartPayment_25113504(
        PurchaseBehaviour_o *this,
        System_String_o *productId,
        int32_t price,
        PurchaseLogic_ProductFinishedAction_o *finishedAction,
        const MethodInfo *method)
{
  PurchaseLogic_o *purchaseLogic; // x0

  purchaseLogic = this->fields._purchaseLogic;
  if ( !purchaseLogic )
    sub_B5D69C(0LL, productId);
  PurchaseLogic__InitiatePurchase_25113528(purchaseLogic, productId, price, finishedAction, method);
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
    sub_B5D69C(0LL, value);
  purchaseLogic->fields._logErrorOutputAction = value;
  sub_B5D560(
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
    sub_B5D69C(0LL, value);
  purchaseLogic->fields._logOutputAction = value;
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PurchaseBehaviour___c_StaticFields *static_fields; // x0

  if ( (byte_42E5ABC & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseBehaviour___c_TypeInfo, v1, v2, v3);
    byte_42E5ABC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PurchaseBehaviour___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PurchaseBehaviour___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PurchaseBehaviour___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return entity->fields.googleShopId;
}