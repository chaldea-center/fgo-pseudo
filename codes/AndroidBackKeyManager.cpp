void AndroidBackKeyManager___ctor(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59729CA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AndroidBackKeyManager___ctor__);
    byte_59729CA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.btnObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.btnObjList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager___ctor__);
}


void AndroidBackKeyManager__AddBackBtn(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *v4; // x0
  Il2CppObject *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  Il2CppObject *Instance; // x21
  System_Collections_Generic_List_object__o *klass; // x21
  System_Predicate_object__o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0

  if ( (byte_59729B8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_GameObject__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    sub_2213A60(&Method_AndroidBackKeyManager___c__DisplayClass0_0__AddBackBtn_b__0__);
    sub_2213A60(&AndroidBackKeyManager___c__DisplayClass0_0_TypeInfo);
    byte_59729B8 = 1;
  }
  v3 = sub_2213CCC(AndroidBackKeyManager___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = obj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)obj, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    if ( v4 )
    {
      klass = (System_Collections_Generic_List_object__o *)v4[2].klass;
      v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_GameObject__TypeInfo);
      System_Predicate_object____ctor(
        v15,
        (Il2CppObject *)v3,
        Method_AndroidBackKeyManager___c__DisplayClass0_0__AddBackBtn_b__0__,
        0);
      if ( klass )
      {
        System_Collections_Generic_List_object___RemoveAll(
          klass,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
        v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
        if ( v4 )
        {
          v22 = (System_Collections_Generic_List_object__o *)v4[2].klass;
          if ( v22 )
          {
            items = v22->fields._items;
            v5 = *(Il2CppObject **)(v3 + 16);
            v24 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v22->fields._version;
            if ( items )
            {
              size = v22->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  v5,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                v26[4] = (Il2CppClass *)v5;
                v22->fields._size = size + 1;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v5, v16, v17, v18, v19, v20, v21);
              }
              return;
            }
          }
        }
      }
    }
LABEL_15:
    sub_2213CDC(v4, v5);
  }
}


void AndroidBackKeyManager__AddBackBtn_51984988(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1

  if ( (byte_59729B9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    byte_59729B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( rootTrans )
    {
      v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(rootTrans, btnPath, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      v7 = UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( v7 )
        return;
      if ( v10 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
        AndroidBackKeyManager__AddBackBtn(gameObject, v12);
        return;
      }
    }
    sub_2213CDC(v7, v8);
  }
}


void AndroidBackKeyManager__AddBackKeyTarget(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *Component_object; // x20

  v2 = obj;
  if ( (byte_59729BC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyTarget___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_AndroidBackKeyTarget___);
    obj = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729BC = 1;
  }
  if ( !v2 )
    sub_2213CDC(obj, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_AndroidBackKeyTarget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    UnityEngine_GameObject__AddComponent_object_(
      v2,
      (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyTarget___);
}


void AndroidBackKeyManager__AddBackKeyTarget_51986024(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *v4; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x1

  v4 = rootTrans;
  if ( (byte_59729BD & 1) == 0 )
  {
    rootTrans = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729BD = 1;
  }
  if ( !v4 )
    goto LABEL_9;
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v4, btnPath, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  rootTrans = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( ((unsigned __int8)rootTrans & 1) == 0 )
  {
    if ( v6 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
      AndroidBackKeyManager__AddBackKeyTarget(gameObject, v8);
      return;
    }
LABEL_9:
    sub_2213CDC(rootTrans, btnPath);
  }
}


bool AndroidBackKeyManager__ExecuteBackFunc(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *btnObjList; // x0
  int size; // w8
  __int64 v5; // x1
  Il2CppObject *Item; // x24
  const MethodInfo *v7; // x2
  _BOOL8 IsBtnTouchable; // x0
  const MethodInfo *v9; // x2
  _BOOL8 IsTitleTopMainPanel; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  Il2CppObject *Component_object; // x19
  System_String_o *v20; // x1

  while ( 1 )
  {
    if ( (byte_59729C1 & 1) == 0 )
    {
      sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
      sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Remove__);
      sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      sub_2213A60(&StringLiteral_4672/*"Click"*/);
      sub_2213A60(&StringLiteral_10237/*"OnClick"*/);
      byte_59729C1 = 1;
    }
    btnObjList = (System_Collections_Generic_List_object__o *)this->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_33;
    size = btnObjList->fields._size;
    if ( size < 1 )
      return 0;
    Item = System_Collections_Generic_List_object___get_Item(
             btnObjList,
             size - 1,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    btnObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)Item,
                                                                0,
                                                                0);
    if ( ((unsigned __int8)btnObjList & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_33;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)Item, 0) )
        break;
    }
    btnObjList = (System_Collections_Generic_List_object__o *)this->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_33;
    System_Collections_Generic_List_object___Remove(
      btnObjList,
      Item,
      (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_GameObject__Remove__);
  }
  IsBtnTouchable = AndroidBackKeyManager__IsBtnTouchable(this, (UnityEngine_GameObject_o *)Item, v7);
  if ( !IsBtnTouchable )
    return 0;
  IsTitleTopMainPanel = AndroidBackKeyManager__IsTitleTopMainPanel(
                          (AndroidBackKeyManager_o *)IsBtnTouchable,
                          (UnityEngine_GameObject_o *)Item,
                          v9);
  if ( IsTitleTopMainPanel
    || (IsTitleTopMainPanel = AndroidBackKeyManager__IsBtnTerminalTop(
                                (AndroidBackKeyManager_o *)IsTitleTopMainPanel,
                                (UnityEngine_GameObject_o *)Item,
                                v12)) )
  {
    AndroidBackKeyManager__OpenQuitConfirmDialog((AndroidBackKeyManager_o *)IsTitleTopMainPanel, v11);
    return 1;
  }
  if ( !AndroidBackKeyManager__IsTacticalPhaseWait(this, (UnityEngine_GameObject_o *)Item, v13) )
  {
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Item,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      v20 = (System_String_o *)StringLiteral_4672/*"Click"*/;
    else
      v20 = (System_String_o *)StringLiteral_10237/*"OnClick"*/;
    UnityEngine_GameObject__SendMessage_83438096((UnityEngine_GameObject_o *)Item, v20, 0);
    return 1;
  }
  btnObjList = (System_Collections_Generic_List_object__o *)AndroidBackKeyManager__get_BattlePerfMaster(this, v15);
  if ( !btnObjList )
    goto LABEL_33;
  btnObjList = *(System_Collections_Generic_List_object__o **)&btnObjList[1].fields._size;
  if ( !btnObjList )
    goto LABEL_33;
  if ( !BattleData__isTutorial((BattleData_o *)btnObjList, 0) )
  {
    btnObjList = (System_Collections_Generic_List_object__o *)AndroidBackKeyManager__get_BattlePerfMaster(this, v16);
    if ( btnObjList )
    {
      btnObjList = *(System_Collections_Generic_List_object__o **)&btnObjList[1].fields._size;
      if ( btnObjList )
      {
        if ( BattleData__IsWarBoard((BattleData_o *)btnObjList, 0) )
          return 0;
        btnObjList = (System_Collections_Generic_List_object__o *)AndroidBackKeyManager__get_BattlePerfMaster(this, v17);
        if ( btnObjList )
        {
          BattlePerformanceMaster__OpenRetireWindowSA((BattlePerformanceMaster_o *)btnObjList, 0);
          return 1;
        }
      }
    }
LABEL_33:
    sub_2213CDC(btnObjList, method);
  }
  return 0;
}


void AndroidBackKeyManager__InstantiateSelf(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppType *v2; // x19
  __int64 v3; // x1
  System_Type_o *TypeFromHandle; // x19
  UnityEngine_Object_o *ObjectOfType; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Component_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_59729BE & 1) == 0 )
  {
    sub_2213A60(&AndroidBackKeyManager_var);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyManager___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_2213A60(&StringLiteral_2372/*"AndroidBackKeyManager"*/);
    byte_59729BE = 1;
  }
  v2 = AndroidBackKeyManager_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v1);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v2, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  ObjectOfType = UnityEngine_Object__FindObjectOfType(TypeFromHandle, 0);
  if ( UnityEngine_Object__op_Equality(ObjectOfType, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      v8 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor_83438680(v8, 0);
      if ( !v8
        || (UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_2372/*"AndroidBackKeyManager"*/, 0),
            transform = UnityEngine_GameObject__get_transform(v8, 0),
            (v9 = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__)) == 0)
        || (v9 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v9, 0), !transform) )
      {
        sub_2213CDC(v9, v10);
      }
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v9, 0);
      UnityEngine_GameObject__AddComponent_object_(
        v8,
        (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyManager___);
    }
  }
}


bool AndroidBackKeyManager__IsBtnTerminalTop(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  UnityEngine_Object_o *mInstance; // x19
  TerminalSceneComponent_c *v10; // x0

  if ( (byte_59729C4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_14281/*"TerminalScene"*/);
    this = (AndroidBackKeyManager_o *)sub_2213A60(&StringLiteral_15108/*"TitlePrefab"*/);
    byte_59729C4 = 1;
  }
  if ( !btnObj )
    goto LABEL_32;
  this = (AndroidBackKeyManager_o *)UnityEngine_GameObject__get_transform(btnObj, 0);
  if ( !this )
    goto LABEL_32;
  this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_root((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_32;
  this = (AndroidBackKeyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_32;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( System_String__op_Inequality(name, (System_String_o *)StringLiteral_14281/*"TerminalScene"*/, 0) )
    return 0;
  this = (AndroidBackKeyManager_o *)UnityEngine_GameObject__get_transform(btnObj, 0);
  if ( !this )
    goto LABEL_32;
  this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_32;
  this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_32;
  this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_32;
  this = (AndroidBackKeyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_32;
  v5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_15108/*"TitlePrefab"*/, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v7->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Equality(mInstance, 0, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, btnObj);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, btnObj);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  this = (AndroidBackKeyManager_o *)v10->static_fields->mInstance;
  if ( !this )
LABEL_32:
    sub_2213CDC(this, btnObj);
  return TerminalSceneComponent__IsTerminalListAreaWait((TerminalSceneComponent_o *)this, 0);
}


bool AndroidBackKeyManager__IsBtnTouchable(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  int v5; // w8
  AndroidBackKeyManager_o *mainCamera; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *bounds; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Component_object; // x21
  __int64 v13; // x1
  __int64 v14; // x1
  UICamera_c *v15; // x0
  struct UICamera_StaticFields *static_fields; // x8
  __int128 v17; // q1
  __int128 v18; // q2
  __int64 v19; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Bounds_o v22; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_RaycastHit_o v23; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v24; // 0:kr00_12.12

  if ( (byte_59729C3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59729C3 = 1;
  }
  v5 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
  memset(&v23, 0, sizeof(v23));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, btnObj);
  mainCamera = (AndroidBackKeyManager_o *)UICamera__get_mainCamera(0);
  if ( AndroidBackKeyManager__IsInBattleScene(mainCamera, btnObj, v7) )
    mainCamera = (AndroidBackKeyManager_o *)AndroidBackKeyManager__get_battleCamera(this, v8);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  bounds = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mainCamera, 0, 0);
  if ( ((unsigned __int8)bounds & 1) != 0 )
    return 0;
  if ( !btnObj )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       btnObj,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  bounds = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)bounds & 1) != 0 )
    return 0;
  if ( !Component_object )
    goto LABEL_27;
  bounds = (UnityEngine_Component_o *)UnityEngine_Collider__get_bounds(
                                        &v22,
                                        (UnityEngine_Collider_o *)Component_object,
                                        0);
  if ( !mainCamera )
    goto LABEL_27;
  v24 = UnityEngine_Camera__WorldToScreenPoint_83198204((UnityEngine_Camera_o *)mainCamera, v22.fields.m_Center, 0);
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v13);
  if ( !UICamera__Raycast(v24, 0) )
    return 0;
  v15 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v14);
    v15 = UICamera_TypeInfo;
  }
  static_fields = v15->static_fields;
  v17 = *(_OWORD *)&static_fields->lastHit.fields.m_Normal.fields.y;
  v18 = *(_OWORD *)&static_fields->lastHit.fields.m_Distance;
  *(_OWORD *)&v23.fields.m_Point.fields.x = *(_OWORD *)&static_fields->lastHit.fields.m_Point.fields.x;
  *(_OWORD *)&v23.fields.m_Normal.fields.y = v17;
  *(_OWORD *)&v23.fields.m_Distance = v18;
  bounds = (UnityEngine_Component_o *)UnityEngine_RaycastHit__get_collider(&v23, 0);
  if ( !bounds )
LABEL_27:
    sub_2213CDC(bounds, v10);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bounds, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  return UnityEngine_Object__op_Equality(gameObject, (UnityEngine_Object_o *)btnObj, 0);
}


bool AndroidBackKeyManager__IsInBattleScene(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_59729C7 & 1) == 0 )
  {
    this = (AndroidBackKeyManager_o *)sub_2213A60(&StringLiteral_3248/*"BattleScene"*/);
    byte_59729C7 = 1;
  }
  if ( !btnObj
    || (this = (AndroidBackKeyManager_o *)UnityEngine_GameObject__get_transform(btnObj, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_root((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_2213CDC(this, btnObj);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_3248/*"BattleScene"*/, 0);
}


bool AndroidBackKeyManager__IsTacticalPhaseWait(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *BattlePerfMaster; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  BattlePerformanceMaster_o *IsTacticalPhaseWait; // x0
  __int64 v11; // x1
  System_String_o *name; // x0

  if ( (byte_59729C8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18803/*"click"*/);
    byte_59729C8 = 1;
  }
  BattlePerfMaster = (UnityEngine_Object_o *)AndroidBackKeyManager__get_BattlePerfMaster(
                                               this,
                                               (const MethodInfo *)btnObj);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality(BattlePerfMaster, 0, 0);
  if ( !v7 || !AndroidBackKeyManager__IsInBattleScene((AndroidBackKeyManager_o *)v7, btnObj, v8) )
    return 0;
  IsTacticalPhaseWait = AndroidBackKeyManager__get_BattlePerfMaster(this, v9);
  if ( !IsTacticalPhaseWait )
    goto LABEL_13;
  IsTacticalPhaseWait = (BattlePerformanceMaster_o *)BattlePerformanceMaster__IsTacticalPhaseWait(
                                                       IsTacticalPhaseWait,
                                                       0);
  if ( ((unsigned __int8)IsTacticalPhaseWait & 1) == 0 )
    return 0;
  if ( !btnObj )
LABEL_13:
    sub_2213CDC(IsTacticalPhaseWait, v11);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)btnObj, 0);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_18803/*"click"*/, 0);
}


bool AndroidBackKeyManager__IsTitleTopMainPanel(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v6; // x0

  if ( (byte_59729C5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9239/*"MainPanel"*/);
    this = (AndroidBackKeyManager_o *)sub_2213A60(&StringLiteral_15110/*"TitleScene"*/);
    byte_59729C5 = 1;
  }
  if ( !btnObj
    || (this = (AndroidBackKeyManager_o *)UnityEngine_GameObject__get_transform(btnObj, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_root((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_2213CDC(this, btnObj);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( System_String__op_Inequality(name, (System_String_o *)StringLiteral_15110/*"TitleScene"*/, 0) )
  {
    return 0;
  }
  else
  {
    v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)btnObj, 0);
    return !System_String__op_Inequality(v6, (System_String_o *)StringLiteral_9239/*"MainPanel"*/, 0);
  }
}


void AndroidBackKeyManager__OnTouchBackKey(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_59729C0 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_2213A60(&StringLiteral_7258/*"GLOBAL_ANDROID_BACKKEY_INVALID"*/);
    byte_59729C0 = 1;
  }
  if ( !UnityEngine_Input__GetMouseButton(0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    if ( Instance )
    {
      if ( WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
        if ( Instance )
        {
          WebViewManager__PressBackKey((WebViewManager_o *)Instance, 0);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) && !AndroidBackKeyManager__ExecuteBackFunc(this, v5) )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
            v7 = LocalizationManager__Get((System_String_o *)StringLiteral_7258/*"GLOBAL_ANDROID_BACKKEY_INVALID"*/, 0);
            AndroidBackKeyManager__ShowToast(v7, v8);
          }
          return;
        }
      }
    }
    sub_2213CDC(Instance, v4);
  }
}


void AndroidBackKeyManager__OpenQuitConfirmDialog(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v4; // x20
  System_String_o *v5; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  AndroidBackKeyManager___c_c *v8; // x8
  System_String_o *v9; // x22
  struct AndroidBackKeyManager___c_StaticFields *static_fields; // x9
  System_String_o *v11; // x23
  CommonConfirmDialog_ClickDelegate_o *_9__14_0; // x24
  Il2CppObject *v13; // x25
  struct AndroidBackKeyManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_59729C2 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_AndroidBackKeyManager___c__OpenQuitConfirmDialog_b__14_0__);
    sub_2213A60(&AndroidBackKeyManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_2787/*"BACK_BUTTON_CONFIRM"*/);
    sub_2213A60(&StringLiteral_2789/*"BACK_BUTTON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_2788/*"BACK_BUTTON_CONFIRM_NO"*/);
    byte_59729C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2787/*"BACK_BUTTON_CONFIRM"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2789/*"BACK_BUTTON_CONFIRM_YES"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2788/*"BACK_BUTTON_CONFIRM_NO"*/, 0);
  v8 = AndroidBackKeyManager___c_TypeInfo;
  v9 = v6;
  if ( !*(&AndroidBackKeyManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager___c_TypeInfo, v7);
    v8 = AndroidBackKeyManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v7);
      static_fields = AndroidBackKeyManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      _9__14_0,
      v13,
      Method_AndroidBackKeyManager___c__OpenQuitConfirmDialog_b__14_0__,
      0);
    v14 = AndroidBackKeyManager___c_TypeInfo->static_fields;
    v14->__9__14_0 = _9__14_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__14_0, (int32_t)_9__14_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v11,
    v4,
    v5,
    v9,
    _9__14_0,
    0,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0,
    0,
    0);
}


void AndroidBackKeyManager__RemoveBackBtn(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  Il2CppObject *Instance; // x20
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v15; // x21

  if ( (byte_59729BA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_GameObject__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    sub_2213A60(&Method_AndroidBackKeyManager___c__DisplayClass2_0__RemoveBackBtn_b__0__);
    sub_2213A60(&AndroidBackKeyManager___c__DisplayClass2_0_TypeInfo);
    byte_59729BA = 1;
  }
  v3 = sub_2213CCC(AndroidBackKeyManager___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = obj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)obj, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    if ( v4 )
    {
      klass = (System_Collections_Generic_List_object__o *)v4[2].klass;
      v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_GameObject__TypeInfo);
      System_Predicate_object____ctor(
        v15,
        (Il2CppObject *)v3,
        Method_AndroidBackKeyManager___c__DisplayClass2_0__RemoveBackBtn_b__0__,
        0);
      if ( klass )
      {
        System_Collections_Generic_List_object___RemoveAll(
          klass,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(v4, v5);
  }
}


void AndroidBackKeyManager__RemoveBackBtn_51985588(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1

  if ( (byte_59729BB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    byte_59729BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( rootTrans )
    {
      v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(rootTrans, btnPath, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      v7 = UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( v7 )
        return;
      if ( v10 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
        AndroidBackKeyManager__RemoveBackBtn(gameObject, v12);
        return;
      }
    }
    sub_2213CDC(v7, v8);
  }
}


void AndroidBackKeyManager__ShowToast(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_AndroidJavaClass_o *v12; // x20
  Il2CppObject *Static_object; // x0
  long double v14; // q0
  _QWORD *v15; // x21
  UnityEngine_AndroidJavaObject_o *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Object_array *v26; // x21
  UnityEngine_AndroidJavaRunnable_o *v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  __int64 v35; // x0

  if ( (byte_59729C9 & 1) == 0 )
  {
    sub_2213A60(&AndroidBackKeyManager_TypeInfo);
    sub_2213A60(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_2213A60(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____91704704);
    sub_2213A60(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_2213A60(&UnityEngine_AndroidJavaRunnable_TypeInfo);
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&Method_AndroidBackKeyManager___c__DisplayClass26_0__ShowToast_b__0__);
    sub_2213A60(&AndroidBackKeyManager___c__DisplayClass26_0_TypeInfo);
    sub_2213A60(&StringLiteral_20704/*"getApplicationContext"*/);
    sub_2213A60(&StringLiteral_18926/*"com.unity3d.player.UnityPlayer"*/);
    sub_2213A60(&StringLiteral_24379/*"runOnUiThread"*/);
    sub_2213A60(&StringLiteral_19234/*"currentActivity"*/);
    byte_59729C9 = 1;
  }
  v3 = sub_2213CCC(AndroidBackKeyManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 24) = text;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)text, v6, v7, v8, v9, v10, v11);
  if ( !AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled )
    return;
  v12 = (UnityEngine_AndroidJavaClass_o *)sub_2213CCC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v12, (System_String_o *)StringLiteral_18926/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v12 )
    goto LABEL_21;
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v12,
                    (System_String_o *)StringLiteral_19234/*"currentActivity"*/,
                    (const MethodInfo_3709708 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v15 = Method_System_Array_Empty_object___;
  v16 = (UnityEngine_AndroidJavaObject_o *)Static_object;
  v17 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v17 )
  {
    sub_224B964(Method_System_Array_Empty_object___);
    v17 = v15[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
    v18 = sub_224B908(v14);
  if ( !*(_DWORD *)(v18 + 228) )
    *(__n128 *)&v14 = j_il2cpp_runtime_class_init_0(v18, v5);
  v4 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v14);
  if ( !v16
    || (v19 = UnityEngine_AndroidJavaObject__Call_object_(
                v16,
                (System_String_o *)StringLiteral_20704/*"getApplicationContext"*/,
                **(System_Object_array ***)(v4 + 184),
                (const MethodInfo_37076A8 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____91704704),
        *(_QWORD *)(v3 + 16) = v19,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v19, v20, v21, v22, v23, v24, v25),
        v26 = (System_Object_array *)sub_2213B20(object___TypeInfo, 1),
        v27 = (UnityEngine_AndroidJavaRunnable_o *)sub_2213CCC(UnityEngine_AndroidJavaRunnable_TypeInfo),
        UnityEngine_AndroidJavaRunnable___ctor(
          v27,
          (Il2CppObject *)v3,
          Method_AndroidBackKeyManager___c__DisplayClass26_0__ShowToast_b__0__,
          0),
        !v26) )
  {
LABEL_21:
    sub_2213CDC(v4, v5);
  }
  if ( v27 )
  {
    v4 = sub_2213BB4(v27, v26->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v35 = sub_2213D00(0, v34);
      sub_2213BA0(v35, 0);
    }
  }
  if ( !LODWORD(v26->max_length) )
    sub_2213CE4(v4);
  v26->m_Items[0] = (Il2CppObject *)v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v26->m_Items, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  UnityEngine_AndroidJavaObject__Call(v16, (System_String_o *)StringLiteral_24379/*"runOnUiThread"*/, v26, 0);
}


void AndroidBackKeyManager__Update(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Input__GetKeyDown(27, 0) )
    AndroidBackKeyManager__OnTouchBackKey(this, v3);
}


BattlePerformanceMaster_o *AndroidBackKeyManager__get_BattlePerfMaster(
        AndroidBackKeyManager_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_battlePerfMaster; // x19
  UnityEngine_Object_o *v4; // x20
  struct BattlePerformanceMaster_o *battlePerfMaster; // t1
  __int64 v6; // x1
  Il2CppType *v7; // x20
  __int64 v8; // x1
  System_Type_o *TypeFromHandle; // x20
  UnityEngine_Object_o *ObjectOfType; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w8
  BattlePerformanceMaster_c *v18; // x1
  __int64 naturalAligment; // x9

  if ( (byte_59729BF & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceMaster_var);
    sub_2213A60(&BattlePerformanceMaster_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729BF = 1;
  }
  battlePerfMaster = this->fields._battlePerfMaster;
  p_battlePerfMaster = (MissionNaviTransitionBoardItem_o *)&this->fields._battlePerfMaster;
  v4 = (UnityEngine_Object_o *)battlePerfMaster;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v7 = BattlePerformanceMaster_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v6);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    ObjectOfType = UnityEngine_Object__FindObjectOfType(TypeFromHandle, 0);
    v17 = (int)ObjectOfType;
    if ( ObjectOfType )
    {
      v18 = BattlePerformanceMaster_TypeInfo;
      naturalAligment = BattlePerformanceMaster_TypeInfo->_2.naturalAligment;
      if ( ObjectOfType->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BattlePerformanceMaster_c *)ObjectOfType->klass->_2.typeHierarchy[naturalAligment - 1] == BattlePerformanceMaster_TypeInfo )
      {
        p_battlePerfMaster->klass = (MissionNaviTransitionBoardItem_c *)ObjectOfType;
        if ( ObjectOfType->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (BattlePerformanceMaster_c *)ObjectOfType->klass->_2.typeHierarchy[naturalAligment - 1] == v18 )
        {
          goto LABEL_17;
        }
      }
      sub_221405C(ObjectOfType, v18, v11);
    }
    p_battlePerfMaster->klass = 0;
LABEL_17:
    sub_2213A04(p_battlePerfMaster, v17, v11, v12, v13, v14, v15, v16);
  }
  return (BattlePerformanceMaster_o *)p_battlePerfMaster->klass;
}


UnityEngine_Camera_o *AndroidBackKeyManager__get_battleCamera(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o **p_battleCamera; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Camera_o *battleCamera; // t1
  __int64 v6; // x1
  UICamera_c *v7; // x0
  BetterList_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_Component_o *root; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *gameObject; // x0
  __int64 v27; // x1
  System_String_o *name; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  UnityEngine_Camera_o *v36; // x21
  int v37; // w23
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  System_Collections_Generic_IEnumerator_T__o *v43; // [xsp+18h] [xbp-38h]

  if ( (byte_59729C6 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UICamera__GetEnumerator__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UICamera__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_3248/*"BattleScene"*/);
    byte_59729C6 = 1;
  }
  battleCamera = this->fields._battleCamera;
  p_battleCamera = &this->fields._battleCamera;
  v4 = (UnityEngine_Object_o *)battleCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
    return *p_battleCamera;
  v7 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
    v7 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v7->static_fields->list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = BetterList_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E6F76C *)Method_BetterList_UICamera__GetEnumerator__);
  v43 = Enumerator;
  while ( 1 )
  {
    if ( !v43 )
      sub_2213CDC(Enumerator, v10);
    klass = v43->klass;
    v12 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_15;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v14 = sub_224BC3C(v43, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v43,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = v43->klass;
    v16 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UICamera__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UICamera__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_22;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_22:
      v18 = sub_224BC3C(v43, System_Collections_Generic_IEnumerator_UICamera__TypeInfo, 0);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                       v43,
                                       *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_2213CDC(0, v20);
    transform = UnityEngine_Component__get_transform(v19, 0);
    if ( !transform )
      sub_2213CDC(0, v23);
    root = (UnityEngine_Component_o *)UnityEngine_Transform__get_root(transform, 0);
    if ( !root )
      sub_2213CDC(0, v25);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(root, 0);
    if ( !gameObject )
      sub_2213CDC(0, v27);
    name = UnityEngine_Object__get_name(gameObject, 0);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_String__op_Equality(
                                                                  name,
                                                                  (System_String_o *)StringLiteral_3248/*"BattleScene"*/,
                                                                  0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v21,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
      *p_battleCamera = (UnityEngine_Camera_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p_battleCamera,
        (int32_t)Component_object,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v36 = *p_battleCamera;
      v37 = 5;
      goto LABEL_31;
    }
  }
  v36 = 0;
  v37 = 2;
LABEL_31:
  v38 = v43->klass;
  v39 = *(unsigned __int16 *)&v43->klass->_2.rank;
  if ( *(_WORD *)&v43->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_35;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_35:
    v41 = sub_224BC3C(v43, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(v43, *(_QWORD *)(v41 + 8));
  if ( (v37 | 2) == 2 )
    return *p_battleCamera;
  return v36;
}


void AndroidBackKeyManager__set_battleCamera(
        AndroidBackKeyManager_o *this,
        UnityEngine_Camera_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._battleCamera = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._battleCamera,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AndroidBackKeyManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59729CB & 1) == 0 )
  {
    sub_2213A60(&AndroidBackKeyManager___c_TypeInfo);
    byte_59729CB = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AndroidBackKeyManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AndroidBackKeyManager___c_TypeInfo->static_fields->__9 = (struct AndroidBackKeyManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AndroidBackKeyManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AndroidBackKeyManager___c___ctor(AndroidBackKeyManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AndroidBackKeyManager___c___OpenQuitConfirmDialog_b__14_0(
        AndroidBackKeyManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo_47A29F8 *v7; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v9; // x21

  if ( (byte_59729CC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_AndroidBackKeyManager___c__DisplayClass14_0__OpenQuitConfirmDialog_b__1__);
    sub_2213A60(&AndroidBackKeyManager___c__DisplayClass14_0_TypeInfo);
    byte_59729CC = 1;
  }
  v4 = sub_2213CCC(AndroidBackKeyManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (v7 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v4 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v7),
        v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v4,
          Method_AndroidBackKeyManager___c__DisplayClass14_0__OpenQuitConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_2213CDC(v5, v6);
  }
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v9, 0);
}


void AndroidBackKeyManager___c__DisplayClass0_0___ctor(
        AndroidBackKeyManager___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AndroidBackKeyManager___c__DisplayClass0_0___AddBackBtn_b__0(
        AndroidBackKeyManager___c__DisplayClass0_0_o *this,
        UnityEngine_GameObject_o *a,
        const MethodInfo *method)
{
  UnityEngine_Object_o *obj; // x20

  if ( (byte_59729CD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729CD = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, a);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, obj, 0);
}


void AndroidBackKeyManager___c__DisplayClass14_0___ctor(
        AndroidBackKeyManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AndroidBackKeyManager___c__DisplayClass14_0___OpenQuitConfirmDialog_b__1(
        AndroidBackKeyManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_59729CE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    byte_59729CE = 1;
  }
  if ( this->fields.isDecide )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
    UnityEngine_Application__Quit_83177108(0);
  }
}


void AndroidBackKeyManager___c__DisplayClass26_0___ctor(
        AndroidBackKeyManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AndroidBackKeyManager___c__DisplayClass26_0___ShowToast_b__0(
        AndroidBackKeyManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  UnityEngine_AndroidJavaObject_o *beforeToast; // x20
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct UnityEngine_AndroidJavaObject_o *v10; // x0
  struct AndroidBackKeyManager_StaticFields *static_fields; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_AndroidJavaClass_o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct UnityEngine_AndroidJavaObject_o *context; // x22
  System_Object_array *v26; // x21
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_String_o *text; // x19
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x19
  Il2CppObject *v42; // x0
  long double v43; // q0
  _QWORD *v44; // x20
  UnityEngine_AndroidJavaObject_o *v45; // x19
  __int64 v46; // x8
  __int64 v47; // x0
  struct AndroidBackKeyManager_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x0
  int32_t Static_int; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59729CF & 1) == 0 )
  {
    sub_2213A60(&AndroidBackKeyManager_TypeInfo);
    sub_2213A60(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_2213A60(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____91704824);
    sub_2213A60(&Method_UnityEngine_AndroidJavaObject_GetStatic_int___);
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_18506/*"cancel"*/);
    sub_2213A60(&StringLiteral_24707/*"show"*/);
    sub_2213A60(&StringLiteral_8606/*"LENGTH_SHORT"*/);
    sub_2213A60(&StringLiteral_17480/*"android.widget.Toast"*/);
    sub_2213A60(&StringLiteral_22494/*"makeText"*/);
    byte_59729CF = 1;
  }
  beforeToast = AndroidBackKeyManager_TypeInfo->static_fields->beforeToast;
  if ( beforeToast )
  {
    v5 = Method_System_Array_Empty_object___;
    v6 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v6 )
    {
      sub_224B964(Method_System_Array_Empty_object___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
      v7 = sub_224B908(v2);
    if ( !*(_DWORD *)(v7 + 228) )
      *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v7, method);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_224B908(v2);
    UnityEngine_AndroidJavaObject__Call(
      beforeToast,
      (System_String_o *)StringLiteral_18506/*"cancel"*/,
      **(System_Object_array ***)(v8 + 184),
      0);
    v10 = AndroidBackKeyManager_TypeInfo->static_fields->beforeToast;
    if ( !v10 )
LABEL_35:
      sub_2213CDC(v10, v9);
    UnityEngine_AndroidJavaObject__Dispose(v10, 0);
    static_fields = AndroidBackKeyManager_TypeInfo->static_fields;
    static_fields->beforeToast = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->beforeToast, 0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (UnityEngine_AndroidJavaClass_o *)sub_2213CCC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v18, (System_String_o *)StringLiteral_17480/*"android.widget.Toast"*/, 0);
  v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_2213B20(object___TypeInfo, 3);
  if ( !v10 )
    goto LABEL_35;
  context = this->fields.context;
  v26 = (System_Object_array *)v10;
  if ( context )
  {
    v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_2213BB4(this->fields.context, v10->klass->_1.element_class);
    if ( !v10 )
      goto LABEL_37;
  }
  if ( !LODWORD(v26->max_length) )
    goto LABEL_36;
  v26->m_Items[0] = (Il2CppObject *)context;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v26->m_Items, (int32_t)context, v19, v20, v21, v22, v23, v24);
  text = this->fields.text;
  if ( text )
  {
    v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_2213BB4(text, v26->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_37;
  }
  if ( (v26->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_36;
  v26->m_Items[1] = (Il2CppObject *)text;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->m_Items[1], (int32_t)text, v28, v29, v30, v31, v32, v33);
  if ( !v18 )
    goto LABEL_35;
  Static_int = UnityEngine_AndroidJavaObject__GetStatic_int_(
                 (UnityEngine_AndroidJavaObject_o *)v18,
                 (System_String_o *)StringLiteral_8606/*"LENGTH_SHORT"*/,
                 (const MethodInfo_37096C8 *)Method_UnityEngine_AndroidJavaObject_GetStatic_int___);
  v10 = (struct UnityEngine_AndroidJavaObject_o *)j_il2cpp_value_box_0(qword_5984348, &Static_int);
  v41 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_2213BB4(v10, v26->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_37:
      v55 = sub_2213D00(v10, v27);
      sub_2213BA0(v55, 0);
    }
  }
  if ( LODWORD(v26->max_length) <= 2 )
LABEL_36:
    sub_2213CE4(v10);
  v26->m_Items[2] = v41;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->m_Items[2], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  v42 = UnityEngine_AndroidJavaObject__CallStatic_object_(
          (UnityEngine_AndroidJavaObject_o *)v18,
          (System_String_o *)StringLiteral_22494/*"makeText"*/,
          v26,
          (const MethodInfo_3707F40 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____91704824);
  v44 = Method_System_Array_Empty_object___;
  v45 = (UnityEngine_AndroidJavaObject_o *)v42;
  v46 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v46 )
  {
    sub_224B964(Method_System_Array_Empty_object___);
    v46 = v44[7];
  }
  v47 = *(_QWORD *)(v46 + 16);
  if ( (*(_WORD *)(v47 + 309) & 1) == 0 )
    v47 = sub_224B908(v43);
  if ( !*(_DWORD *)(v47 + 228) )
    *(__n128 *)&v43 = j_il2cpp_runtime_class_init_0(v47, v9);
  v10 = *(struct UnityEngine_AndroidJavaObject_o **)(v44[7] + 16LL);
  if ( (*(_WORD *)((_BYTE *)&v10[9].fields.m_jobject + 5) & 1) == 0 )
    v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_224B908(v43);
  if ( !v45 )
    goto LABEL_35;
  UnityEngine_AndroidJavaObject__Call(
    v45,
    (System_String_o *)StringLiteral_24707/*"show"*/,
    (System_Object_array *)v10[5].fields.m_jclass->klass,
    0);
  v48 = AndroidBackKeyManager_TypeInfo->static_fields;
  v48->beforeToast = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->beforeToast, (int32_t)v45, v49, v50, v51, v52, v53, v54);
}


void AndroidBackKeyManager___c__DisplayClass2_0___ctor(
        AndroidBackKeyManager___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AndroidBackKeyManager___c__DisplayClass2_0___RemoveBackBtn_b__0(
        AndroidBackKeyManager___c__DisplayClass2_0_o *this,
        UnityEngine_GameObject_o *a,
        const MethodInfo *method)
{
  UnityEngine_Object_o *obj; // x20

  if ( (byte_59729D0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729D0 = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, a);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, obj, 0);
}