void AndroidBackKeyManager___ctor(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF0736 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AndroidBackKeyManager___ctor__);
    byte_4CF0736 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.btnObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.btnObjList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager___ctor__);
}


void AndroidBackKeyManager__AddBackBtn(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_object__o *v4; // x0
  Il2CppObject *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Instance; // x21
  System_Collections_Generic_List_object__o *syncRoot; // x21
  System_Predicate_object__o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4CF0724 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Predicate_GameObject__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    sub_1C7BAE8(&Method_AndroidBackKeyManager___c__DisplayClass0_0__AddBackBtn_b__0__);
    sub_1C7BAE8(&AndroidBackKeyManager___c__DisplayClass0_0_TypeInfo);
    byte_4CF0724 = 1;
  }
  v3 = sub_1C7BD34(AndroidBackKeyManager___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = obj;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)obj, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    if ( v4 )
    {
      syncRoot = (System_Collections_Generic_List_object__o *)v4->fields._syncRoot;
      v14 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_GameObject__TypeInfo);
      System_Predicate_object____ctor(
        v14,
        (Il2CppObject *)v3,
        Method_AndroidBackKeyManager___c__DisplayClass0_0__AddBackBtn_b__0__,
        0);
      if ( syncRoot )
      {
        System_Collections_Generic_List_object___RemoveAll(
          syncRoot,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_3840458 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
        v4 = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
        if ( v4 )
        {
          v4 = (System_Collections_Generic_List_object__o *)v4->fields._syncRoot;
          if ( v4 )
          {
            v5 = *(Il2CppObject **)(v3 + 16);
            items = v4->fields._items;
            v22 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( items )
            {
              size = v4->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v4,
                  v5,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v4->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v5;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v5, v15, v16, v17, v18, v19, v20);
              }
              return;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C7BD40(v4, v5);
  }
}


void AndroidBackKeyManager__AddBackBtn_45495228(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4CF0725 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    byte_4CF0725 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( rootTrans )
    {
      v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(rootTrans, btnPath, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Equality(v8, 0, 0);
      if ( v6 )
        return;
      if ( v8 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
        AndroidBackKeyManager__AddBackBtn(gameObject, v10);
        return;
      }
    }
    sub_1C7BD40(v6, v7);
  }
}


void AndroidBackKeyManager__AddBackKeyTarget(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x19
  Il2CppObject *Component_object; // x20

  v2 = obj;
  if ( (byte_4CF0728 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyTarget___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_AndroidBackKeyTarget___);
    obj = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0728 = 1;
  }
  if ( !v2 )
    sub_1C7BD40(obj, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_AndroidBackKeyTarget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    UnityEngine_GameObject__AddComponent_object_(
      v2,
      (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyTarget___);
}


void AndroidBackKeyManager__AddBackKeyTarget_45496264(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1

  v4 = rootTrans;
  if ( (byte_4CF0729 & 1) == 0 )
  {
    rootTrans = (UnityEngine_Transform_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0729 = 1;
  }
  if ( !v4 )
    goto LABEL_9;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v4, btnPath, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootTrans = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( ((unsigned __int8)rootTrans & 1) == 0 )
  {
    if ( v5 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      AndroidBackKeyManager__AddBackKeyTarget(gameObject, v7);
      return;
    }
LABEL_9:
    sub_1C7BD40(rootTrans, btnPath);
  }
}


bool AndroidBackKeyManager__ExecuteBackFunc(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *btnObjList; // x0
  int size; // w8
  Il2CppObject *Item; // x24
  const MethodInfo *v6; // x2
  _BOOL8 IsBtnTouchable; // x0
  const MethodInfo *v8; // x2
  _BOOL8 IsTitleTopMainPanel; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  Il2CppObject *Component_object; // x19
  System_String_o *v18; // x1

  while ( 1 )
  {
    if ( (byte_4CF072D & 1) == 0 )
    {
      sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
      sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Remove__);
      sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
      sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
      sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
      sub_1C7BAE8(&StringLiteral_4503/*"Click"*/);
      sub_1C7BAE8(&StringLiteral_9863/*"OnClick"*/);
      byte_4CF072D = 1;
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
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_GameObject__Remove__);
  }
  IsBtnTouchable = AndroidBackKeyManager__IsBtnTouchable(this, (UnityEngine_GameObject_o *)Item, v6);
  if ( !IsBtnTouchable )
    return 0;
  IsTitleTopMainPanel = AndroidBackKeyManager__IsTitleTopMainPanel(
                          (AndroidBackKeyManager_o *)IsBtnTouchable,
                          (UnityEngine_GameObject_o *)Item,
                          v8);
  if ( IsTitleTopMainPanel
    || (IsTitleTopMainPanel = AndroidBackKeyManager__IsBtnTerminalTop(
                                (AndroidBackKeyManager_o *)IsTitleTopMainPanel,
                                (UnityEngine_GameObject_o *)Item,
                                v11)) )
  {
    AndroidBackKeyManager__OpenQuitConfirmDialog((AndroidBackKeyManager_o *)IsTitleTopMainPanel, v10);
    return 1;
  }
  if ( !AndroidBackKeyManager__IsTacticalPhaseWait(this, (UnityEngine_GameObject_o *)Item, v12) )
  {
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Item,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      v18 = (System_String_o *)StringLiteral_4503/*"Click"*/;
    else
      v18 = (System_String_o *)StringLiteral_9863/*"OnClick"*/;
    UnityEngine_GameObject__SendMessage_71851516((UnityEngine_GameObject_o *)Item, v18, 0);
    return 1;
  }
  btnObjList = (System_Collections_Generic_List_object__o *)AndroidBackKeyManager__get_BattlePerfMaster(this, v14);
  if ( !btnObjList )
    goto LABEL_33;
  btnObjList = *(System_Collections_Generic_List_object__o **)&btnObjList[1].fields._size;
  if ( !btnObjList )
    goto LABEL_33;
  if ( !BattleData__isTutorial((BattleData_o *)btnObjList, 0) )
  {
    btnObjList = (System_Collections_Generic_List_object__o *)AndroidBackKeyManager__get_BattlePerfMaster(this, v15);
    if ( btnObjList )
    {
      btnObjList = *(System_Collections_Generic_List_object__o **)&btnObjList[1].fields._size;
      if ( btnObjList )
      {
        if ( BattleData__IsWarBoard((BattleData_o *)btnObjList, 0) )
          return 0;
        btnObjList = (System_Collections_Generic_List_object__o *)AndroidBackKeyManager__get_BattlePerfMaster(this, v16);
        if ( btnObjList )
        {
          BattlePerformanceMaster__OpenRetireWindowSA((BattlePerformanceMaster_o *)btnObjList, 0);
          return 1;
        }
      }
    }
LABEL_33:
    sub_1C7BD40(btnObjList, method);
  }
  return 0;
}


void AndroidBackKeyManager__InstantiateSelf(const MethodInfo *method)
{
  Il2CppType *v1; // x19
  System_RuntimeTypeHandle_o v2; // x0
  System_Type_o *TypeFromHandle; // x19
  UnityEngine_Object_o *ObjectOfType; // x0
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v6; // x19
  UnityEngine_Component_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_4CF072A & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidBackKeyManager_var);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyManager___);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1C7BAE8(&System_Type_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2265/*"AndroidBackKeyManager"*/);
    byte_4CF072A = 1;
  }
  v1 = AndroidBackKeyManager_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v2.fields.value = (intptr_t)v1;
  TypeFromHandle = System_Type__GetTypeFromHandle(v2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectOfType = UnityEngine_Object__FindObjectOfType(TypeFromHandle, 0);
  if ( UnityEngine_Object__op_Equality(ObjectOfType, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      v6 = (UnityEngine_GameObject_o *)sub_1C7BD34(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor_71851804(v6, 0);
      if ( !v6
        || (UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)StringLiteral_2265/*"AndroidBackKeyManager"*/, 0),
            transform = UnityEngine_GameObject__get_transform(v6, 0),
            (v7 = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__)) == 0)
        || (v7 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v7, 0), !transform) )
      {
        sub_1C7BD40(v7, v8);
      }
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v7, 0);
      UnityEngine_GameObject__AddComponent_object_(
        v6,
        (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyManager___);
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
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x19
  TerminalSceneComponent_c *v9; // x0

  if ( (byte_4CF0730 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13769/*"TerminalScene"*/);
    this = (AndroidBackKeyManager_o *)sub_1C7BAE8(&StringLiteral_14575/*"TitlePrefab"*/);
    byte_4CF0730 = 1;
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
  if ( System_String__op_Inequality(name, (System_String_o *)StringLiteral_13769/*"TerminalScene"*/, 0) )
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
  if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_14575/*"TitlePrefab"*/, 0) )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mInstance, 0, 0) )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  this = (AndroidBackKeyManager_o *)v9->static_fields->mInstance;
  if ( !this )
LABEL_32:
    sub_1C7BD40(this, btnObj);
  return TerminalSceneComponent__IsTerminalListAreaWait((TerminalSceneComponent_o *)this, 0);
}


bool AndroidBackKeyManager__IsBtnTouchable(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  AndroidBackKeyManager_o *mainCamera; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  UnityEngine_Component_o *bounds; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UICamera_c *v14; // x0
  struct UICamera_StaticFields *static_fields; // x8
  __int128 v16; // q1
  __int128 v17; // q2
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Bounds_o v20; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_RaycastHit_o v21; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF072F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CF072F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  mainCamera = (AndroidBackKeyManager_o *)UICamera__get_mainCamera(0);
  if ( AndroidBackKeyManager__IsInBattleScene(mainCamera, btnObj, v6) )
    mainCamera = (AndroidBackKeyManager_o *)AndroidBackKeyManager__get_battleCamera(this, v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bounds = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mainCamera, 0, 0);
  if ( ((unsigned __int8)bounds & 1) != 0 )
    return 0;
  if ( !btnObj )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       btnObj,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bounds = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)bounds & 1) != 0 )
    return 0;
  if ( !Component_object )
    goto LABEL_27;
  bounds = (UnityEngine_Component_o *)UnityEngine_Collider__get_bounds(
                                        &v20,
                                        (UnityEngine_Collider_o *)Component_object,
                                        0);
  if ( !mainCamera )
    goto LABEL_27;
  v22 = UnityEngine_Camera__WorldToScreenPoint_71674720((UnityEngine_Camera_o *)mainCamera, v20.fields.m_Center, 0);
  x = v22.fields.x;
  y = v22.fields.y;
  z = v22.fields.z;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  if ( !UICamera__Raycast(v23, 0) )
    return 0;
  v14 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v14 = UICamera_TypeInfo;
  }
  static_fields = v14->static_fields;
  v17 = *(_OWORD *)&static_fields->lastHit.fields.m_Point.fields.x;
  v16 = *(_OWORD *)&static_fields->lastHit.fields.m_Normal.fields.y;
  *(_OWORD *)&v21.fields.m_Distance = *(_OWORD *)&static_fields->lastHit.fields.m_Distance;
  *(_OWORD *)&v21.fields.m_Point.fields.x = v17;
  *(_OWORD *)&v21.fields.m_Normal.fields.y = v16;
  bounds = (UnityEngine_Component_o *)UnityEngine_RaycastHit__get_collider(&v21, 0);
  if ( !bounds )
LABEL_27:
    sub_1C7BD40(bounds, v9);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bounds, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(gameObject, (UnityEngine_Object_o *)btnObj, 0);
}


bool AndroidBackKeyManager__IsInBattleScene(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_4CF0733 & 1) == 0 )
  {
    this = (AndroidBackKeyManager_o *)sub_1C7BAE8(&StringLiteral_3126/*"BattleScene"*/);
    byte_4CF0733 = 1;
  }
  if ( !btnObj
    || (this = (AndroidBackKeyManager_o *)UnityEngine_GameObject__get_transform(btnObj, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_root((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C7BD40(this, btnObj);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_3126/*"BattleScene"*/, 0);
}


bool AndroidBackKeyManager__IsTacticalPhaseWait(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *BattlePerfMaster; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  BattlePerformanceMaster_o *IsTacticalPhaseWait; // x0
  __int64 v10; // x1
  System_String_o *name; // x0

  if ( (byte_4CF0734 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18101/*"click"*/);
    byte_4CF0734 = 1;
  }
  BattlePerfMaster = (UnityEngine_Object_o *)AndroidBackKeyManager__get_BattlePerfMaster(
                                               this,
                                               (const MethodInfo *)btnObj);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(BattlePerfMaster, 0, 0);
  if ( !v6 || !AndroidBackKeyManager__IsInBattleScene((AndroidBackKeyManager_o *)v6, btnObj, v7) )
    return 0;
  IsTacticalPhaseWait = AndroidBackKeyManager__get_BattlePerfMaster(this, v8);
  if ( !IsTacticalPhaseWait )
    goto LABEL_13;
  IsTacticalPhaseWait = (BattlePerformanceMaster_o *)BattlePerformanceMaster__IsTacticalPhaseWait(
                                                       IsTacticalPhaseWait,
                                                       0);
  if ( ((unsigned __int8)IsTacticalPhaseWait & 1) == 0 )
    return 0;
  if ( !btnObj )
LABEL_13:
    sub_1C7BD40(IsTacticalPhaseWait, v10);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)btnObj, 0);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_18101/*"click"*/, 0);
}


bool AndroidBackKeyManager__IsTitleTopMainPanel(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v6; // x0

  if ( (byte_4CF0731 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8895/*"MainPanel"*/);
    this = (AndroidBackKeyManager_o *)sub_1C7BAE8(&StringLiteral_14577/*"TitleScene"*/);
    byte_4CF0731 = 1;
  }
  if ( !btnObj
    || (this = (AndroidBackKeyManager_o *)UnityEngine_GameObject__get_transform(btnObj, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_root((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C7BD40(this, btnObj);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( System_String__op_Inequality(name, (System_String_o *)StringLiteral_14577/*"TitleScene"*/, 0) )
    return 0;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)btnObj, 0);
  return !System_String__op_Inequality(v6, (System_String_o *)StringLiteral_8895/*"MainPanel"*/, 0);
}


void AndroidBackKeyManager__OnTouchBackKey(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4CF072C & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_6978/*"GLOBAL_ANDROID_BACKKEY_INVALID"*/);
    byte_4CF072C = 1;
  }
  if ( !UnityEngine_Input__GetMouseButton(0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    if ( Instance )
    {
      if ( WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
        if ( Instance )
        {
          WebViewManager__PressBackKey((WebViewManager_o *)Instance, 0);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) && !AndroidBackKeyManager__ExecuteBackFunc(this, v5) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6978/*"GLOBAL_ANDROID_BACKKEY_INVALID"*/, 0);
            AndroidBackKeyManager__ShowToast(v6, v7);
          }
          return;
        }
      }
    }
    sub_1C7BD40(Instance, v4);
  }
}


void AndroidBackKeyManager__OpenQuitConfirmDialog(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x0
  __int64 v6; // x1
  AndroidBackKeyManager___c_c *v7; // x8
  System_String_o *v8; // x22
  System_String_o *v9; // x23
  CommonConfirmDialog_ClickDelegate_o *_9__14_0; // x24
  Il2CppObject *v11; // x25
  struct AndroidBackKeyManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CF072E & 1) == 0 )
  {
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_AndroidBackKeyManager___c__OpenQuitConfirmDialog_b__14_0__);
    sub_1C7BAE8(&AndroidBackKeyManager___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2671/*"BACK_BUTTON_CONFIRM"*/);
    sub_1C7BAE8(&StringLiteral_2673/*"BACK_BUTTON_CONFIRM_YES"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_2672/*"BACK_BUTTON_CONFIRM_NO"*/);
    byte_4CF072E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2671/*"BACK_BUTTON_CONFIRM"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2673/*"BACK_BUTTON_CONFIRM_YES"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2672/*"BACK_BUTTON_CONFIRM_NO"*/, 0);
  v7 = AndroidBackKeyManager___c_TypeInfo;
  v8 = v5;
  if ( !AndroidBackKeyManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager___c_TypeInfo);
    v7 = AndroidBackKeyManager___c_TypeInfo;
  }
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  _9__14_0 = v7->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = AndroidBackKeyManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v7->static_fields->__9;
    _9__14_0 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      _9__14_0,
      v11,
      Method_AndroidBackKeyManager___c__OpenQuitConfirmDialog_b__14_0__,
      0);
    static_fields = AndroidBackKeyManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0,
      (int32_t)_9__14_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !Instance )
    sub_1C7BD40(v5, v6);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v9,
    v3,
    v4,
    v8,
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Instance; // x20
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v14; // x21

  if ( (byte_4CF0726 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Predicate_GameObject__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    sub_1C7BAE8(&Method_AndroidBackKeyManager___c__DisplayClass2_0__RemoveBackBtn_b__0__);
    sub_1C7BAE8(&AndroidBackKeyManager___c__DisplayClass2_0_TypeInfo);
    byte_4CF0726 = 1;
  }
  v3 = sub_1C7BD34(AndroidBackKeyManager___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = obj;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)obj, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    if ( v4 )
    {
      klass = (System_Collections_Generic_List_object__o *)v4[2].klass;
      v14 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_GameObject__TypeInfo);
      System_Predicate_object____ctor(
        v14,
        (Il2CppObject *)v3,
        Method_AndroidBackKeyManager___c__DisplayClass2_0__RemoveBackBtn_b__0__,
        0);
      if ( klass )
      {
        System_Collections_Generic_List_object___RemoveAll(
          klass,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_3840458 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
        return;
      }
    }
LABEL_10:
    sub_1C7BD40(v4, v5);
  }
}


void AndroidBackKeyManager__RemoveBackBtn_45495828(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4CF0727 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    byte_4CF0727 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( rootTrans )
    {
      v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(rootTrans, btnPath, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Equality(v8, 0, 0);
      if ( v6 )
        return;
      if ( v8 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
        AndroidBackKeyManager__RemoveBackBtn(gameObject, v10);
        return;
      }
    }
    sub_1C7BD40(v6, v7);
  }
}


void AndroidBackKeyManager__ShowToast(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_AndroidJavaClass_o *v12; // x20
  Il2CppObject *Static_object; // x0
  long double inited; // q0
  _QWORD *v15; // x21
  UnityEngine_AndroidJavaObject_o *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Object_array *v26; // x21
  UnityEngine_AndroidJavaRunnable_o *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x0

  if ( (byte_4CF0735 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidBackKeyManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78788072);
    sub_1C7BAE8(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C7BAE8(&UnityEngine_AndroidJavaRunnable_TypeInfo);
    sub_1C7BAE8(&Method_System_Array_Empty_object___);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&Method_AndroidBackKeyManager___c__DisplayClass26_0__ShowToast_b__0__);
    sub_1C7BAE8(&AndroidBackKeyManager___c__DisplayClass26_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19931/*"getApplicationContext"*/);
    sub_1C7BAE8(&StringLiteral_18217/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C7BAE8(&StringLiteral_23395/*"runOnUiThread"*/);
    sub_1C7BAE8(&StringLiteral_18513/*"currentActivity"*/);
    byte_4CF0735 = 1;
  }
  v3 = sub_1C7BD34(AndroidBackKeyManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 24) = text;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)text, v6, v7, v8, v9, v10, v11);
  if ( !AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled )
    return;
  v12 = (UnityEngine_AndroidJavaClass_o *)sub_1C7BD34(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v12, (System_String_o *)StringLiteral_18217/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v12 )
    goto LABEL_21;
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v12,
                    (System_String_o *)StringLiteral_18513/*"currentActivity"*/,
                    (const MethodInfo_30BEE54 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v15 = Method_System_Array_Empty_object___;
  v16 = (UnityEngine_AndroidJavaObject_o *)Static_object;
  v17 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v17 )
  {
    sub_1C51BD8(Method_System_Array_Empty_object___);
    v17 = v15[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  v4 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C51B7C(inited);
  if ( !v16
    || (v19 = UnityEngine_AndroidJavaObject__Call_object_(
                v16,
                (System_String_o *)StringLiteral_19931/*"getApplicationContext"*/,
                **(System_Object_array ***)(v4 + 184),
                (const MethodInfo_30BCCCC *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78788072),
        *(_QWORD *)(v3 + 16) = v19,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v19, v20, v21, v22, v23, v24, v25),
        v26 = (System_Object_array *)sub_1C7BB90(object___TypeInfo, 1),
        v27 = (UnityEngine_AndroidJavaRunnable_o *)sub_1C7BD34(UnityEngine_AndroidJavaRunnable_TypeInfo),
        UnityEngine_AndroidJavaRunnable___ctor(
          v27,
          (Il2CppObject *)v3,
          Method_AndroidBackKeyManager___c__DisplayClass26_0__ShowToast_b__0__,
          0),
        !v26) )
  {
LABEL_21:
    sub_1C7BD40(v4, v5);
  }
  if ( v27 )
  {
    v4 = sub_1C7BC24(v27, v26->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v34 = sub_1C7BD64(0);
      sub_1C7BC10(v34, 0);
    }
  }
  if ( !LODWORD(v26->max_length) )
    sub_1C7BD48(v4);
  v26->m_Items[0] = (Il2CppObject *)v27;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v26->m_Items, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  UnityEngine_AndroidJavaObject__Call(v16, (System_String_o *)StringLiteral_23395/*"runOnUiThread"*/, v26, 0);
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
  GrandQuestFolderBoardItem_o *p_battlePerfMaster; // x19
  UnityEngine_Object_o *v4; // x20
  struct BattlePerformanceMaster_o *battlePerfMaster; // t1
  Il2CppType *v6; // x20
  System_RuntimeTypeHandle_o v7; // x0
  System_Type_o *TypeFromHandle; // x20
  UnityEngine_Object_o *ObjectOfType; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *v16; // x8
  BattlePerformanceMaster_c *v17; // x1
  __int64 naturalAligment; // x9

  if ( (byte_4CF072B & 1) == 0 )
  {
    sub_1C7BAE8(&BattlePerformanceMaster_var);
    sub_1C7BAE8(&BattlePerformanceMaster_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Type_TypeInfo);
    byte_4CF072B = 1;
  }
  battlePerfMaster = this->fields._battlePerfMaster;
  p_battlePerfMaster = (GrandQuestFolderBoardItem_o *)&this->fields._battlePerfMaster;
  v4 = (UnityEngine_Object_o *)battlePerfMaster;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v6 = BattlePerformanceMaster_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v7.fields.value = (intptr_t)v6;
    TypeFromHandle = System_Type__GetTypeFromHandle(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ObjectOfType = UnityEngine_Object__FindObjectOfType(TypeFromHandle, 0);
    v16 = ObjectOfType;
    if ( ObjectOfType )
    {
      v17 = BattlePerformanceMaster_TypeInfo;
      naturalAligment = BattlePerformanceMaster_TypeInfo->_2.naturalAligment;
      if ( ObjectOfType->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BattlePerformanceMaster_c *)ObjectOfType->klass->_2.typeHierarchy[naturalAligment - 1] == BattlePerformanceMaster_TypeInfo )
      {
        p_battlePerfMaster->klass = (GrandQuestFolderBoardItem_c *)ObjectOfType;
        if ( ObjectOfType->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (BattlePerformanceMaster_c *)ObjectOfType->klass->_2.typeHierarchy[naturalAligment - 1] == v17 )
        {
          goto LABEL_17;
        }
      }
      sub_1C7C0DC(ObjectOfType);
    }
    p_battlePerfMaster->klass = (GrandQuestFolderBoardItem_c *)v16;
LABEL_17:
    sub_1C7BA8C(p_battlePerfMaster, (int32_t)v16, v10, v11, v12, v13, v14, v15);
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
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_Component_o *root; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *gameObject; // x0
  __int64 v27; // x1
  System_String_o *name; // x0
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  UnityEngine_Camera_o *v36; // x22
  int v37; // w23
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4CF0732 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_UICamera__GetEnumerator__);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UICamera__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3126/*"BattleScene"*/);
    byte_4CF0732 = 1;
  }
  battleCamera = this->fields._battleCamera;
  p_battleCamera = &this->fields._battleCamera;
  v4 = (UnityEngine_Object_o *)battleCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
    return *p_battleCamera;
  v7 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v7->static_fields->list;
  if ( !list )
    sub_1C7BD40(0, v6);
  Enumerator = BetterList_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A61B0 *)Method_BetterList_UICamera__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_14;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v14 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UICamera__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UICamera__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_21;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_21:
      v18 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UICamera__TypeInfo, 0);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_1C7BD40(0, v20);
    transform = UnityEngine_Component__get_transform(v19, 0);
    if ( !transform )
      sub_1C7BD40(0, v23);
    root = (UnityEngine_Component_o *)UnityEngine_Transform__get_root(transform, 0);
    if ( !root )
      sub_1C7BD40(0, v25);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(root, 0);
    if ( !gameObject )
      sub_1C7BD40(0, v27);
    name = UnityEngine_Object__get_name(gameObject, 0);
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_3126/*"BattleScene"*/, 0) )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v21,
                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Camera___);
      *p_battleCamera = (UnityEngine_Camera_o *)Component_object;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)p_battleCamera,
        (int32_t)Component_object,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v36 = *p_battleCamera;
      v37 = 5;
      goto LABEL_30;
    }
  }
  v36 = 0;
  v37 = 2;
LABEL_30:
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_34;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_34:
    v41 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  if ( (v37 | 2) == 2 )
    return *p_battleCamera;
  return v36;
}


void AndroidBackKeyManager__set_battleCamera(
        AndroidBackKeyManager_o *this,
        UnityEngine_Camera_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._battleCamera = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._battleCamera,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AndroidBackKeyManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF0737 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidBackKeyManager___c_TypeInfo);
    byte_4CF0737 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(AndroidBackKeyManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AndroidBackKeyManager___c_TypeInfo->static_fields->__9 = (struct AndroidBackKeyManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)AndroidBackKeyManager___c_TypeInfo->static_fields,
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
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4CF0738 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_AndroidBackKeyManager___c__DisplayClass14_0__OpenQuitConfirmDialog_b__1__);
    sub_1C7BAE8(&AndroidBackKeyManager___c__DisplayClass14_0_TypeInfo);
    byte_4CF0738 = 1;
  }
  v4 = sub_1C7BD34(AndroidBackKeyManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_BYTE *)(v4 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_AndroidBackKeyManager___c__DisplayClass14_0__OpenQuitConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C7BD40(v5, v6);
  }
  CommonUI__CloseConfirmDialog_31483188((CommonUI_o *)Instance, v8, 0);
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

  if ( (byte_4CF0739 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0739 = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( (byte_4CF073A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    byte_4CF073A = 1;
  }
  if ( this->fields.isDecide )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71663312(0);
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
  long double inited; // q0
  UnityEngine_AndroidJavaObject_o *beforeToast; // x20
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct UnityEngine_AndroidJavaObject_o *v10; // x0
  struct AndroidBackKeyManager_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_AndroidJavaClass_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct UnityEngine_AndroidJavaObject_o *context; // x22
  System_Object_array *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_String_o *text; // x19
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *v40; // x19
  Il2CppObject *v41; // x0
  long double v42; // q0
  _QWORD *v43; // x20
  UnityEngine_AndroidJavaObject_o *v44; // x19
  __int64 v45; // x8
  __int64 v46; // x0
  struct AndroidBackKeyManager_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x0
  int32_t Static_int; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CF073B & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidBackKeyManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____78788192);
    sub_1C7BAE8(&Method_UnityEngine_AndroidJavaObject_GetStatic_int___);
    sub_1C7BAE8(&Method_System_Array_Empty_object___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&StringLiteral_17813/*"cancel"*/);
    sub_1C7BAE8(&StringLiteral_23696/*"show"*/);
    sub_1C7BAE8(&StringLiteral_8281/*"LENGTH_SHORT"*/);
    sub_1C7BAE8(&StringLiteral_16851/*"android.widget.Toast"*/);
    sub_1C7BAE8(&StringLiteral_21606/*"makeText"*/);
    byte_4CF073B = 1;
  }
  beforeToast = AndroidBackKeyManager_TypeInfo->static_fields->beforeToast;
  if ( beforeToast )
  {
    v5 = Method_System_Array_Empty_object___;
    v6 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v6 )
    {
      sub_1C51BD8(Method_System_Array_Empty_object___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C51B7C(inited);
    UnityEngine_AndroidJavaObject__Call(
      beforeToast,
      (System_String_o *)StringLiteral_17813/*"cancel"*/,
      **(System_Object_array ***)(v8 + 184),
      0);
    v10 = AndroidBackKeyManager_TypeInfo->static_fields->beforeToast;
    if ( !v10 )
LABEL_35:
      sub_1C7BD40(v10, v9);
    UnityEngine_AndroidJavaObject__Dispose(v10, 0);
    static_fields = AndroidBackKeyManager_TypeInfo->static_fields;
    static_fields->beforeToast = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->beforeToast, 0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (UnityEngine_AndroidJavaClass_o *)sub_1C7BD34(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v18, (System_String_o *)StringLiteral_16851/*"android.widget.Toast"*/, 0);
  v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_1C7BB90(object___TypeInfo, 3);
  if ( !v10 )
    goto LABEL_35;
  context = this->fields.context;
  v26 = (System_Object_array *)v10;
  if ( context )
  {
    v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_1C7BC24(this->fields.context, v10->klass->_1.element_class);
    if ( !v10 )
      goto LABEL_37;
  }
  if ( !LODWORD(v26->max_length) )
    goto LABEL_36;
  v26->m_Items[0] = (Il2CppObject *)context;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v26->m_Items, (int32_t)context, v19, v20, v21, v22, v23, v24);
  text = this->fields.text;
  if ( text )
  {
    v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_1C7BC24(text, v26->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_37;
  }
  if ( LODWORD(v26->max_length) <= 1 )
    goto LABEL_36;
  v26->m_Items[1] = (Il2CppObject *)text;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26->m_Items[1], (int32_t)text, v27, v28, v29, v30, v31, v32);
  if ( !v18 )
    goto LABEL_35;
  Static_int = UnityEngine_AndroidJavaObject__GetStatic_int_(
                 (UnityEngine_AndroidJavaObject_o *)v18,
                 (System_String_o *)StringLiteral_8281/*"LENGTH_SHORT"*/,
                 (const MethodInfo_30BEE14 *)Method_UnityEngine_AndroidJavaObject_GetStatic_int___);
  v10 = (struct UnityEngine_AndroidJavaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &Static_int);
  v40 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_1C7BC24(v10, v26->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_37:
      v54 = sub_1C7BD64(v10);
      sub_1C7BC10(v54, 0);
    }
  }
  if ( LODWORD(v26->max_length) <= 2 )
LABEL_36:
    sub_1C7BD48(v10);
  v26->m_Items[2] = v40;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26->m_Items[2], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v41 = UnityEngine_AndroidJavaObject__CallStatic_object_(
          (UnityEngine_AndroidJavaObject_o *)v18,
          (System_String_o *)StringLiteral_21606/*"makeText"*/,
          v26,
          (const MethodInfo_30BD604 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____78788192);
  v43 = Method_System_Array_Empty_object___;
  v44 = (UnityEngine_AndroidJavaObject_o *)v41;
  v45 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v45 )
  {
    sub_1C51BD8(Method_System_Array_Empty_object___);
    v45 = v43[7];
  }
  v46 = *(_QWORD *)(v45 + 16);
  if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
    v46 = sub_1C51B7C(v42);
  if ( !*(_DWORD *)(v46 + 224) )
    v42 = j_il2cpp_runtime_class_init_0(v46);
  v10 = *(struct UnityEngine_AndroidJavaObject_o **)(v43[7] + 16LL);
  if ( (BYTE5(v10[9].fields.m_jobject) & 1) == 0 )
    v10 = (struct UnityEngine_AndroidJavaObject_o *)sub_1C51B7C(v42);
  if ( !v44 )
    goto LABEL_35;
  UnityEngine_AndroidJavaObject__Call(
    v44,
    (System_String_o *)StringLiteral_23696/*"show"*/,
    (System_Object_array *)v10[5].fields.m_jclass->klass,
    0);
  v47 = AndroidBackKeyManager_TypeInfo->static_fields;
  v47->beforeToast = v44;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v47->beforeToast, (int32_t)v44, v48, v49, v50, v51, v52, v53);
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

  if ( (byte_4CF073C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF073C = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, obj, 0);
}