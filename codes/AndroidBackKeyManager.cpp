void AndroidBackKeyManager___ctor(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C450AA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AndroidBackKeyManager___ctor__);
    byte_4C450AA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.btnObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.btnObjList, (int32_t)v3, v4, v5);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_AndroidBackKeyManager___ctor__);
}


void AndroidBackKeyManager__AddBackBtn(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_object__o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x21
  System_Collections_Generic_List_object__o *syncRoot; // x21
  System_Predicate_object__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C45098 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_GameObject__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    sub_1C37058(&Method_AndroidBackKeyManager___c__DisplayClass0_0__AddBackBtn_b__0__);
    sub_1C37058(&AndroidBackKeyManager___c__DisplayClass0_0_TypeInfo);
    byte_4C45098 = 1;
  }
  v3 = sub_1C372A4(AndroidBackKeyManager___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = obj;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)obj, v5, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    if ( v4 )
    {
      syncRoot = (System_Collections_Generic_List_object__o *)v4->fields._syncRoot;
      v9 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_GameObject__TypeInfo);
      System_Predicate_object____ctor(
        v9,
        (Il2CppObject *)v3,
        Method_AndroidBackKeyManager___c__DisplayClass0_0__AddBackBtn_b__0__,
        0);
      if ( syncRoot )
      {
        System_Collections_Generic_List_object___RemoveAll(
          syncRoot,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_37A4680 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
        v4 = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
        if ( v4 )
        {
          v4 = (System_Collections_Generic_List_object__o *)v4->fields._syncRoot;
          if ( v4 )
          {
            v12 = *(Il2CppObject **)(v3 + 16);
            items = v4->fields._items;
            v14 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( items )
            {
              size = v4->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v4,
                  v12,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
              }
              else
              {
                v16 = &items->obj.klass + size;
                v4->fields._size = size + 1;
                v16[4] = (Il2CppClass *)v12;
                sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
              }
              return;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C372B4(v4);
  }
}


void AndroidBackKeyManager__AddBackBtn_44960000(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  UnityEngine_Object_o *v7; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4C45099 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    byte_4C45099 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( rootTrans )
    {
      v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(rootTrans, btnPath, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Equality(v7, 0, 0);
      if ( v6 )
        return;
      if ( v7 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
        AndroidBackKeyManager__AddBackBtn(gameObject, v9);
        return;
      }
    }
    sub_1C372B4(v6);
  }
}


void AndroidBackKeyManager__AddBackKeyTarget(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x19
  Il2CppObject *Component_object; // x20

  v2 = obj;
  if ( (byte_4C4509C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyTarget___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_AndroidBackKeyTarget___);
    obj = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4509C = 1;
  }
  if ( !v2 )
    sub_1C372B4(obj);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_AndroidBackKeyTarget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    UnityEngine_GameObject__AddComponent_object_(
      v2,
      (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyTarget___);
}


void AndroidBackKeyManager__AddBackKeyTarget_44961036(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1

  v4 = rootTrans;
  if ( (byte_4C4509D & 1) == 0 )
  {
    rootTrans = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4509D = 1;
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
    sub_1C372B4(rootTrans);
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
    if ( (byte_4C450A1 & 1) == 0 )
    {
      sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
      sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Remove__);
      sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
      sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
      sub_1C37058(&UnityEngine_Object_TypeInfo);
      sub_1C37058(&StringLiteral_4499/*"Click"*/);
      sub_1C37058(&StringLiteral_9838/*"OnClick"*/);
      byte_4C450A1 = 1;
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
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
      (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_GameObject__Remove__);
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
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      v18 = (System_String_o *)StringLiteral_4499/*"Click"*/;
    else
      v18 = (System_String_o *)StringLiteral_9838/*"OnClick"*/;
    UnityEngine_GameObject__SendMessage_71248628((UnityEngine_GameObject_o *)Item, v18, 0);
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
    sub_1C372B4(btnObjList);
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
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_4C4509E & 1) == 0 )
  {
    sub_1C37058(&AndroidBackKeyManager_var);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyManager___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1C37058(&System_Type_TypeInfo);
    sub_1C37058(&StringLiteral_2266/*"AndroidBackKeyManager"*/);
    byte_4C4509E = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      v6 = (UnityEngine_GameObject_o *)sub_1C372A4(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor_71248916(v6, 0);
      if ( !v6
        || (UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)StringLiteral_2266/*"AndroidBackKeyManager"*/, 0),
            transform = UnityEngine_GameObject__get_transform(v6, 0),
            (v7 = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__)) == 0)
        || (v7 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v7, 0), !transform) )
      {
        sub_1C372B4(v7);
      }
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v7, 0);
      UnityEngine_GameObject__AddComponent_object_(
        v6,
        (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_AndroidBackKeyManager___);
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

  if ( (byte_4C450A4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&StringLiteral_13711/*"TerminalScene"*/);
    this = (AndroidBackKeyManager_o *)sub_1C37058(&StringLiteral_14520/*"TitlePrefab"*/);
    byte_4C450A4 = 1;
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
  if ( System_String__op_Inequality(name, (System_String_o *)StringLiteral_13711/*"TerminalScene"*/, 0) )
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
  if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_14520/*"TitlePrefab"*/, 0) )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
    sub_1C372B4(this);
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
  Il2CppObject *Component_object; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UICamera_c *v13; // x0
  struct UICamera_StaticFields *static_fields; // x8
  __int128 v15; // q1
  __int128 v16; // q2
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Bounds_o v19; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_RaycastHit_o v20; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C450A3 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C450A3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
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
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bounds = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)bounds & 1) != 0 )
    return 0;
  if ( !Component_object )
    goto LABEL_27;
  bounds = (UnityEngine_Component_o *)UnityEngine_Collider__get_bounds(
                                        &v19,
                                        (UnityEngine_Collider_o *)Component_object,
                                        0);
  if ( !mainCamera )
    goto LABEL_27;
  v21 = UnityEngine_Camera__WorldToScreenPoint_71073020((UnityEngine_Camera_o *)mainCamera, v19.fields.m_Center, 0);
  x = v21.fields.x;
  y = v21.fields.y;
  z = v21.fields.z;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  if ( !UICamera__Raycast(v22, 0) )
    return 0;
  v13 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v13 = UICamera_TypeInfo;
  }
  static_fields = v13->static_fields;
  v16 = *(_OWORD *)&static_fields->lastHit.fields.m_Point.fields.x;
  v15 = *(_OWORD *)&static_fields->lastHit.fields.m_Normal.fields.y;
  *(_OWORD *)&v20.fields.m_Distance = *(_OWORD *)&static_fields->lastHit.fields.m_Distance;
  *(_OWORD *)&v20.fields.m_Point.fields.x = v16;
  *(_OWORD *)&v20.fields.m_Normal.fields.y = v15;
  bounds = (UnityEngine_Component_o *)UnityEngine_RaycastHit__get_collider(&v20, 0);
  if ( !bounds )
LABEL_27:
    sub_1C372B4(bounds);
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

  if ( (byte_4C450A7 & 1) == 0 )
  {
    this = (AndroidBackKeyManager_o *)sub_1C37058(&StringLiteral_3125/*"BattleScene"*/);
    byte_4C450A7 = 1;
  }
  if ( !btnObj
    || (this = (AndroidBackKeyManager_o *)UnityEngine_GameObject__get_transform(btnObj, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_root((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C372B4(this);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_3125/*"BattleScene"*/, 0);
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
  System_String_o *name; // x0

  if ( (byte_4C450A8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_18009/*"click"*/);
    byte_4C450A8 = 1;
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
    sub_1C372B4(IsTacticalPhaseWait);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)btnObj, 0);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_18009/*"click"*/, 0);
}


bool AndroidBackKeyManager__IsTitleTopMainPanel(
        AndroidBackKeyManager_o *this,
        UnityEngine_GameObject_o *btnObj,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v6; // x0

  if ( (byte_4C450A5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8871/*"MainPanel"*/);
    this = (AndroidBackKeyManager_o *)sub_1C37058(&StringLiteral_14521/*"TitleScene"*/);
    byte_4C450A5 = 1;
  }
  if ( !btnObj
    || (this = (AndroidBackKeyManager_o *)UnityEngine_GameObject__get_transform(btnObj, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Transform__get_root((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (AndroidBackKeyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C372B4(this);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( System_String__op_Inequality(name, (System_String_o *)StringLiteral_14521/*"TitleScene"*/, 0) )
    return 0;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)btnObj, 0);
  return !System_String__op_Inequality(v6, (System_String_o *)StringLiteral_8871/*"MainPanel"*/, 0);
}


void AndroidBackKeyManager__OnTouchBackKey(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C450A0 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_1C37058(&StringLiteral_6965/*"GLOBAL_ANDROID_BACKKEY_INVALID"*/);
    byte_4C450A0 = 1;
  }
  if ( !UnityEngine_Input__GetMouseButton(0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    if ( Instance )
    {
      if ( WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
        if ( Instance )
        {
          WebViewManager__PressBackKey((WebViewManager_o *)Instance, 0);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) && !AndroidBackKeyManager__ExecuteBackFunc(this, v4) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6965/*"GLOBAL_ANDROID_BACKKEY_INVALID"*/, 0);
            AndroidBackKeyManager__ShowToast(v5, v6);
          }
          return;
        }
      }
    }
    sub_1C372B4(Instance);
  }
}


void AndroidBackKeyManager__OpenQuitConfirmDialog(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x0
  AndroidBackKeyManager___c_c *v6; // x8
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  CommonConfirmDialog_ClickDelegate_o *_9__14_0; // x24
  Il2CppObject *v10; // x25
  struct AndroidBackKeyManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C450A2 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_AndroidBackKeyManager___c__OpenQuitConfirmDialog_b__14_0__);
    sub_1C37058(&AndroidBackKeyManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_2674/*"BACK_BUTTON_CONFIRM"*/);
    sub_1C37058(&StringLiteral_2676/*"BACK_BUTTON_CONFIRM_YES"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_2675/*"BACK_BUTTON_CONFIRM_NO"*/);
    byte_4C450A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2674/*"BACK_BUTTON_CONFIRM"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2676/*"BACK_BUTTON_CONFIRM_YES"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2675/*"BACK_BUTTON_CONFIRM_NO"*/, 0);
  v6 = AndroidBackKeyManager___c_TypeInfo;
  v7 = v5;
  if ( !AndroidBackKeyManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager___c_TypeInfo);
    v6 = AndroidBackKeyManager___c_TypeInfo;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  _9__14_0 = v6->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AndroidBackKeyManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v6->static_fields->__9;
    _9__14_0 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      _9__14_0,
      v10,
      Method_AndroidBackKeyManager___c__OpenQuitConfirmDialog_b__14_0__,
      0);
    static_fields = AndroidBackKeyManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v12, v13);
  }
  if ( !Instance )
    sub_1C372B4(v5);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v8,
    v3,
    v4,
    v7,
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x20
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v9; // x21

  if ( (byte_4C4509A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_GameObject__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    sub_1C37058(&Method_AndroidBackKeyManager___c__DisplayClass2_0__RemoveBackBtn_b__0__);
    sub_1C37058(&AndroidBackKeyManager___c__DisplayClass2_0_TypeInfo);
    byte_4C4509A = 1;
  }
  v3 = sub_1C372A4(AndroidBackKeyManager___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = obj;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)obj, v5, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    if ( v4 )
    {
      klass = (System_Collections_Generic_List_object__o *)v4[2].klass;
      v9 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_GameObject__TypeInfo);
      System_Predicate_object____ctor(
        v9,
        (Il2CppObject *)v3,
        Method_AndroidBackKeyManager___c__DisplayClass2_0__RemoveBackBtn_b__0__,
        0);
      if ( klass )
      {
        System_Collections_Generic_List_object___RemoveAll(
          klass,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_37A4680 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
        return;
      }
    }
LABEL_10:
    sub_1C372B4(v4);
  }
}


void AndroidBackKeyManager__RemoveBackBtn_44960600(
        UnityEngine_Transform_o *rootTrans,
        System_String_o *btnPath,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  UnityEngine_Object_o *v7; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4C4509B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
    byte_4C4509B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AndroidBackKeyManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( rootTrans )
    {
      v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(rootTrans, btnPath, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Equality(v7, 0, 0);
      if ( v6 )
        return;
      if ( v7 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
        AndroidBackKeyManager__RemoveBackBtn(gameObject, v9);
        return;
      }
    }
    sub_1C372B4(v6);
  }
}


void AndroidBackKeyManager__ShowToast(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_AndroidJavaClass_o *v7; // x20
  Il2CppObject *Static_object; // x0
  long double inited; // q0
  _QWORD *v10; // x21
  UnityEngine_AndroidJavaObject_o *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Object_array *v17; // x21
  UnityEngine_AndroidJavaRunnable_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x0

  if ( (byte_4C450A9 & 1) == 0 )
  {
    sub_1C37058(&AndroidBackKeyManager_TypeInfo);
    sub_1C37058(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C37058(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78101672);
    sub_1C37058(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C37058(&UnityEngine_AndroidJavaRunnable_TypeInfo);
    sub_1C37058(&Method_System_Array_Empty_object___);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&Method_AndroidBackKeyManager___c__DisplayClass26_0__ShowToast_b__0__);
    sub_1C37058(&AndroidBackKeyManager___c__DisplayClass26_0_TypeInfo);
    sub_1C37058(&StringLiteral_19774/*"getApplicationContext"*/);
    sub_1C37058(&StringLiteral_18119/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C37058(&StringLiteral_23171/*"runOnUiThread"*/);
    sub_1C37058(&StringLiteral_18404/*"currentActivity"*/);
    byte_4C450A9 = 1;
  }
  v3 = sub_1C372A4(AndroidBackKeyManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 24) = text;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)text, v5, v6);
  if ( !AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled )
    return;
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_1C372A4(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_18119/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v7 )
    goto LABEL_21;
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v7,
                    (System_String_o *)StringLiteral_18404/*"currentActivity"*/,
                    (const MethodInfo_3039FB4 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v10 = Method_System_Array_Empty_object___;
  v11 = (UnityEngine_AndroidJavaObject_o *)Static_object;
  v12 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v12 )
  {
    sub_1C877C8(Method_System_Array_Empty_object___);
    v12 = v10[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v4 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8776C(inited);
  if ( !v11
    || (v14 = UnityEngine_AndroidJavaObject__Call_object_(
                v11,
                (System_String_o *)StringLiteral_19774/*"getApplicationContext"*/,
                **(System_Object_array ***)(v4 + 184),
                (const MethodInfo_3037E2C *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78101672),
        *(_QWORD *)(v3 + 16) = v14,
        sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v14, v15, v16),
        v17 = (System_Object_array *)sub_1C37100(object___TypeInfo, 1),
        v18 = (UnityEngine_AndroidJavaRunnable_o *)sub_1C372A4(UnityEngine_AndroidJavaRunnable_TypeInfo),
        UnityEngine_AndroidJavaRunnable___ctor(
          v18,
          (Il2CppObject *)v3,
          Method_AndroidBackKeyManager___c__DisplayClass26_0__ShowToast_b__0__,
          0),
        !v17) )
  {
LABEL_21:
    sub_1C372B4(v4);
  }
  if ( v18 )
  {
    v4 = sub_1C37194(v18, v17->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v21 = sub_1C372D8(0);
      sub_1C37180(v21, 0);
    }
  }
  if ( !LODWORD(v17->max_length) )
    sub_1C372BC(v4);
  v17->m_Items[0] = (Il2CppObject *)v18;
  sub_1C36FFC((CGThumbnailListItem_o *)v17->m_Items, (int32_t)v18, v19, v20);
  UnityEngine_AndroidJavaObject__Call(v11, (System_String_o *)StringLiteral_23171/*"runOnUiThread"*/, v17, 0);
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
  CGThumbnailListItem_o *p_battlePerfMaster; // x19
  UnityEngine_Object_o *v4; // x20
  struct BattlePerformanceMaster_o *battlePerfMaster; // t1
  Il2CppType *v6; // x20
  System_RuntimeTypeHandle_o v7; // x0
  System_Type_o *TypeFromHandle; // x20
  UnityEngine_Object_o *ObjectOfType; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x8
  BattlePerformanceMaster_c *v13; // x1
  __int64 naturalAligment; // x9

  if ( (byte_4C4509F & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster_var);
    sub_1C37058(&BattlePerformanceMaster_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    byte_4C4509F = 1;
  }
  battlePerfMaster = this->fields._battlePerfMaster;
  p_battlePerfMaster = (CGThumbnailListItem_o *)&this->fields._battlePerfMaster;
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
    v12 = ObjectOfType;
    if ( ObjectOfType )
    {
      v13 = BattlePerformanceMaster_TypeInfo;
      naturalAligment = BattlePerformanceMaster_TypeInfo->_2.naturalAligment;
      if ( ObjectOfType->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BattlePerformanceMaster_c *)ObjectOfType->klass->_2.typeHierarchy[naturalAligment - 1] == BattlePerformanceMaster_TypeInfo )
      {
        p_battlePerfMaster->klass = (CGThumbnailListItem_c *)ObjectOfType;
        if ( ObjectOfType->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (BattlePerformanceMaster_c *)ObjectOfType->klass->_2.typeHierarchy[naturalAligment - 1] == v13 )
        {
          goto LABEL_17;
        }
      }
      sub_1C37574(ObjectOfType);
    }
    p_battlePerfMaster->klass = (CGThumbnailListItem_c *)v12;
LABEL_17:
    sub_1C36FFC(p_battlePerfMaster, (int32_t)v12, v10, v11);
  }
  return (BattlePerformanceMaster_o *)p_battlePerfMaster->klass;
}


UnityEngine_Camera_o *AndroidBackKeyManager__get_battleCamera(AndroidBackKeyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o **p_battleCamera; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Camera_o *battleCamera; // t1
  UICamera_c *v6; // x0
  BetterList_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Component_o *v18; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *root; // x0
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Camera_o *v26; // x22
  int v27; // w23
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4C450A6 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UICamera__GetEnumerator__);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_UICamera__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&StringLiteral_3125/*"BattleScene"*/);
    byte_4C450A6 = 1;
  }
  battleCamera = this->fields._battleCamera;
  p_battleCamera = &this->fields._battleCamera;
  v4 = (UnityEngine_Object_o *)battleCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
    return *p_battleCamera;
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v6->static_fields->list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = BetterList_object___GetEnumerator(
                 list,
                 (const MethodInfo_3319D48 *)Method_BetterList_UICamera__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_14;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UICamera__c **)v15 - 1) != System_Collections_Generic_IEnumerator_UICamera__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_21;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_21:
      v16 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_UICamera__TypeInfo, 0);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( !v17 )
      sub_1C372B4(0);
    transform = UnityEngine_Component__get_transform(v17, 0);
    if ( !transform )
      sub_1C372B4(0);
    root = (UnityEngine_Component_o *)UnityEngine_Transform__get_root(transform, 0);
    if ( !root )
      sub_1C372B4(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(root, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    name = UnityEngine_Object__get_name(gameObject, 0);
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_3125/*"BattleScene"*/, 0) )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v18,
                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
      *p_battleCamera = (UnityEngine_Camera_o *)Component_object;
      sub_1C36FFC((CGThumbnailListItem_o *)p_battleCamera, (int32_t)Component_object, v24, v25);
      v26 = *p_battleCamera;
      v27 = 5;
      goto LABEL_30;
    }
  }
  v26 = 0;
  v27 = 2;
LABEL_30:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_34:
    v31 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( (v27 | 2) == 2 )
    return *p_battleCamera;
  return v26;
}


void AndroidBackKeyManager__set_battleCamera(
        AndroidBackKeyManager_o *this,
        UnityEngine_Camera_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._battleCamera = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._battleCamera, (int32_t)value, (int32_t)method, v3);
}


void AndroidBackKeyManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C450AB & 1) == 0 )
  {
    sub_1C37058(&AndroidBackKeyManager___c_TypeInfo);
    byte_4C450AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AndroidBackKeyManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AndroidBackKeyManager___c_TypeInfo->static_fields->__9 = (struct AndroidBackKeyManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AndroidBackKeyManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v7; // x21

  if ( (byte_4C450AC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_AndroidBackKeyManager___c__DisplayClass14_0__OpenQuitConfirmDialog_b__1__);
    sub_1C37058(&AndroidBackKeyManager___c__DisplayClass14_0_TypeInfo);
    byte_4C450AC = 1;
  }
  v4 = sub_1C372A4(AndroidBackKeyManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_BYTE *)(v4 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_AndroidBackKeyManager___c__DisplayClass14_0__OpenQuitConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C372B4(v5);
  }
  CommonUI__CloseConfirmDialog_31208544((CommonUI_o *)Instance, v7, 0);
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

  if ( (byte_4C450AD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C450AD = 1;
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
  if ( (byte_4C450AE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    byte_4C450AE = 1;
  }
  if ( this->fields.isDecide )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71061684(0);
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
  __int64 v9; // x0
  struct AndroidBackKeyManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_AndroidJavaClass_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UnityEngine_AndroidJavaObject_o *context; // x22
  System_Object_array *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_String_o *text; // x19
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x19
  Il2CppObject *v30; // x0
  long double v31; // q0
  _QWORD *v32; // x20
  UnityEngine_AndroidJavaObject_o *v33; // x19
  __int64 v34; // x8
  __int64 v35; // x0
  struct AndroidBackKeyManager_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  int32_t Static_int; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C450AF & 1) == 0 )
  {
    sub_1C37058(&AndroidBackKeyManager_TypeInfo);
    sub_1C37058(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C37058(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____78101792);
    sub_1C37058(&Method_UnityEngine_AndroidJavaObject_GetStatic_int___);
    sub_1C37058(&Method_System_Array_Empty_object___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&StringLiteral_17718/*"cancel"*/);
    sub_1C37058(&StringLiteral_23477/*"show"*/);
    sub_1C37058(&StringLiteral_8258/*"LENGTH_SHORT"*/);
    sub_1C37058(&StringLiteral_16771/*"android.widget.Toast"*/);
    sub_1C37058(&StringLiteral_21407/*"makeText"*/);
    byte_4C450AF = 1;
  }
  beforeToast = AndroidBackKeyManager_TypeInfo->static_fields->beforeToast;
  if ( beforeToast )
  {
    v5 = Method_System_Array_Empty_object___;
    v6 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v6 )
    {
      sub_1C877C8(Method_System_Array_Empty_object___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8776C(inited);
    UnityEngine_AndroidJavaObject__Call(
      beforeToast,
      (System_String_o *)StringLiteral_17718/*"cancel"*/,
      **(System_Object_array ***)(v8 + 184),
      0);
    v9 = (__int64)AndroidBackKeyManager_TypeInfo->static_fields->beforeToast;
    if ( !v9 )
LABEL_35:
      sub_1C372B4(v9);
    UnityEngine_AndroidJavaObject__Dispose((UnityEngine_AndroidJavaObject_o *)v9, 0);
    static_fields = AndroidBackKeyManager_TypeInfo->static_fields;
    static_fields->beforeToast = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->beforeToast, 0, v11, v12);
  }
  v13 = (UnityEngine_AndroidJavaClass_o *)sub_1C372A4(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v13, (System_String_o *)StringLiteral_16771/*"android.widget.Toast"*/, 0);
  v9 = sub_1C37100(object___TypeInfo, 3);
  if ( !v9 )
    goto LABEL_35;
  context = this->fields.context;
  v17 = (System_Object_array *)v9;
  if ( context )
  {
    v9 = sub_1C37194(this->fields.context, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_37;
  }
  if ( !LODWORD(v17->max_length) )
    goto LABEL_36;
  v17->m_Items[0] = (Il2CppObject *)context;
  sub_1C36FFC((CGThumbnailListItem_o *)v17->m_Items, (int32_t)context, v14, v15);
  text = this->fields.text;
  if ( text )
  {
    v9 = sub_1C37194(text, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_37;
  }
  if ( LODWORD(v17->max_length) <= 1 )
    goto LABEL_36;
  v17->m_Items[1] = (Il2CppObject *)text;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->m_Items[1], (int32_t)text, v18, v19);
  if ( !v13 )
    goto LABEL_35;
  Static_int = UnityEngine_AndroidJavaObject__GetStatic_int_(
                 (UnityEngine_AndroidJavaObject_o *)v13,
                 (System_String_o *)StringLiteral_8258/*"LENGTH_SHORT"*/,
                 (const MethodInfo_3039F74 *)Method_UnityEngine_AndroidJavaObject_GetStatic_int___);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &Static_int, v21, v22, v23, v24, v25, v26);
  v29 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C37194(v9, v17->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_37:
      v39 = sub_1C372D8(v9);
      sub_1C37180(v39, 0);
    }
  }
  if ( LODWORD(v17->max_length) <= 2 )
LABEL_36:
    sub_1C372BC(v9);
  v17->m_Items[2] = v29;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->m_Items[2], (int32_t)v29, v27, v28);
  v30 = UnityEngine_AndroidJavaObject__CallStatic_object_(
          (UnityEngine_AndroidJavaObject_o *)v13,
          (System_String_o *)StringLiteral_21407/*"makeText"*/,
          v17,
          (const MethodInfo_3038764 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____78101792);
  v32 = Method_System_Array_Empty_object___;
  v33 = (UnityEngine_AndroidJavaObject_o *)v30;
  v34 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v34 )
  {
    sub_1C877C8(Method_System_Array_Empty_object___);
    v34 = v32[7];
  }
  v35 = *(_QWORD *)(v34 + 16);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C8776C(v31);
  if ( !*(_DWORD *)(v35 + 224) )
    v31 = j_il2cpp_runtime_class_init_0(v35);
  v9 = *(_QWORD *)(v32[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C(v31);
  if ( !v33 )
    goto LABEL_35;
  UnityEngine_AndroidJavaObject__Call(
    v33,
    (System_String_o *)StringLiteral_23477/*"show"*/,
    **(System_Object_array ***)(v9 + 184),
    0);
  v36 = AndroidBackKeyManager_TypeInfo->static_fields;
  v36->beforeToast = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)&v36->beforeToast, (int32_t)v33, v37, v38);
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

  if ( (byte_4C450B0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C450B0 = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, obj, 0);
}