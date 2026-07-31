void CostumeListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_5932160 & 1) == 0 )
  {
    sub_21FFC50(&CostumeListViewManager_TypeInfo);
    byte_5932160 = 1;
  }
  *CostumeListViewManager_TypeInfo->static_fields = (struct CostumeListViewManager_StaticFields)0x430C0000438B0000LL;
}


void CostumeListViewManager___ctor(CostumeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CostumeListViewManager__CreateList(
        CostumeListViewManager_o *this,
        UserServantEntity_o *baseSvtData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  ServantCostumeMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  DataManager_o *v11; // x21
  unsigned __int64 v12; // x24
  __int64 m_CancellationTokenSource; // x27
  ServantCostumeEntity_o *v14; // x23
  CostumeListViewItem_o *v15; // x22
  const MethodInfo *v16; // x3
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v28; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v29; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  UnityEngine_Vector2_o v31; // 0:s3.4,4:s4.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593215A & 1) == 0 )
  {
    sub_21FFC50(&CostumeListViewItem_TypeInfo);
    sub_21FFC50(&CostumeListViewManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593215A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !baseSvtData )
    goto LABEL_26;
  v8 = (ServantCostumeMaster_o *)Instance;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
  *(_QWORD *)&v30.fields.currentCryptoKey = v9;
  *(_QWORD *)&v30.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v30, 0);
  if ( !v8 )
    goto LABEL_26;
  Instance = (DataManager_o *)ServantCostumeMaster__releasedCostumeEntityList(v8, (int32_t)Instance, 0, 1, 0);
  if ( !Instance )
    goto LABEL_26;
  v11 = Instance;
  if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    m_CancellationTokenSource = (unsigned int)Instance->fields.m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v12 >= LODWORD(v11->fields.m_CancellationTokenSource) )
        sub_21FFED4(Instance);
      v14 = (ServantCostumeEntity_o *)*((_QWORD *)&v11->fields._DispLog + v12);
      v15 = (CostumeListViewItem_o *)sub_21FFEBC(CostumeListViewItem_TypeInfo);
      CostumeListViewItem___ctor(v15, v14, baseSvtData, v16);
      if ( !v15 )
        break;
      if ( !v15->fields.isHide )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v15,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v26 + 32) = v15;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v15, v17, v18, v19, v20, v21, v22);
        }
      }
      if ( m_CancellationTokenSource == ++v12 )
        goto LABEL_20;
    }
LABEL_26:
    sub_21FFECC(Instance, v6);
  }
LABEL_20:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_26;
  Instance = (DataManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, itemList->fields._size > 3, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = (DataManager_o *)CostumeListViewManager_TypeInfo;
  if ( !*(&CostumeListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CostumeListViewManager_TypeInfo, v6, v28);
  v29 = this->fields.itemList;
  if ( !v29 )
    goto LABEL_26;
  v31.fields.x = 0.0;
  v32.fields.y = CostumeListViewManager_TypeInfo->static_fields->LIST_BASE_POS_Y
               - (float)(CostumeListViewManager_TypeInfo->static_fields->LIST_ITEM_HEIGHT * (float)v29->fields._size);
  v32.fields.x = 0.0;
  v32.fields.z = 0.0;
  v31.fields.y = -v32.fields.y;
  ListViewManager__SetScrollView((ListViewManager_o *)this, v32, v31, 0);
}


CostumeListViewItem_o *CostumeListViewManager__GetItem(
        CostumeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CostumeListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_593215B & 1) == 0 )
  {
    sub_21FFC50(&CostumeListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_593215B = 1;
  }
  result = (CostumeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CostumeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CostumeListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (CostumeListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CostumeListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


ServantCostumeEntity_o *CostumeListViewManager__GetSelctedCostumeEntity(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.baseSvtCostume;
}


void CostumeListViewManager__OnClickListView(
        CostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void CostumeListViewManager__OnClickSelectListView(
        CostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CostumeListViewManager_o *v4; // x19
  __int64 naturalAligment; // x10
  CostumeListViewItem_o *Item; // x0
  _QWORD *v7; // x8
  CostumeListViewItem_o *v8; // x20
  System_Reflection_MethodBase_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ServantCostumeEntity_o *costumeEntity; // x1

  v4 = this;
  if ( (byte_593215F & 1) == 0 )
  {
    sub_21FFC50(&Method_CostumeListViewManager_OnClickSelectListView__);
    this = (CostumeListViewManager_o *)sub_21FFC50(&CostumeListViewObject_TypeInfo);
    byte_593215F = 1;
  }
  if ( !obj )
    goto LABEL_11;
  naturalAligment = CostumeListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CostumeListViewObject_TypeInfo )
  {
    goto LABEL_11;
  }
  Item = CostumeListViewObject__GetItem((CostumeListViewObject_o *)obj, (const MethodInfo *)obj);
  v7 = Method_CostumeListViewManager_OnClickSelectListView__;
  v8 = Item;
  if ( (*((_BYTE *)Method_CostumeListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_21FFC68(Method_CostumeListViewManager_OnClickSelectListView__);
  v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  if ( !v8
    || (costumeEntity = v8->fields.costumeEntity,
        v4->fields.baseSvtCostume = costumeEntity,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.baseSvtCostume,
          (int32_t)costumeEntity,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (this = (CostumeListViewManager_o *)v4->fields.combineRootComponent) == 0) )
  {
LABEL_11:
    sub_21FFECC(this, obj);
  }
  CombineRootComponent__ShowCostumeCombineInfo((CombineRootComponent_o *)this, 0);
}


void CostumeListViewManager__OnMoveEnd(CostumeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593215E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593215E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v11, v12, v13, v14, v15, v16);
        if ( callbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
            callbackFunc2->fields.method_code,
            callbackFunc2->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CostumeListViewManager__RequestListObject(
        CostumeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_CostumeListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3
  System_String_o *v15; // x1

  if ( (byte_593215D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CostumeListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_593215D = 1;
  }
  ObjectList = CostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CostumeListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_CostumeListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      CostumeListViewObject__Init_37710424((CostumeListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_21FFECC(ObjectList, v8);
  }
  v15 = (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, delay, 0);
}


void CostumeListViewManager__SetMode(
        CostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  CostumeListViewManager__SetMode_37709952(this, mode, v10);
}


void CostumeListViewManager__SetMode_37709952(CostumeListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    CostumeListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void CostumeListViewManager__SetObjectItem(
        CostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_593215C & 1) == 0 )
  {
    sub_21FFC50(&CostumeListViewObject_TypeInfo);
    byte_593215C = 1;
  }
  if ( obj
    && (naturalAligment = CostumeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CostumeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == CostumeListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  CostumeListViewObject__Init_37709828((CostumeListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void CostumeListViewManager__add_callbackFunc2(
        CostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CostumeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5932156 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932156 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CostumeListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  CostumeListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_CostumeListViewObject__o *CostumeListViewManager__get_ClippingObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0

  if ( (byte_5932159 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932159 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_22;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !Component_object )
          break;
        v12 = (Il2CppObject *)Component_object;
        Component_object = (System_Collections_Generic_List_object__o *)CostumeListViewObject__GetItem(
                                                                          (CostumeListViewObject_o *)Component_object,
                                                                          v5);
        if ( !Component_object )
          break;
        v5 = (const MethodInfo *)Component_object;
        if ( !LOBYTE(Component_object[2].fields._items)
          || (Component_object = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50765052(
                                                                                (ListViewManager_o *)this,
                                                                                (ListViewItem_o *)Component_object,
                                                                                0),
              ((unsigned __int8)Component_object & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v20 = Method_System_Collections_Generic_List_CostumeListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v21 = v3->fields._size;
          if ( (unsigned int)v21 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v12,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + v21;
            v3->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
    }
LABEL_22:
    sub_21FFECC(Component_object, v5);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
}


System_Collections_Generic_List_CostumeListViewObject__o *CostumeListViewManager__get_ObjectList(
        CostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_5932158 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_CostumeListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932158 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_CostumeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v20 = v3->fields._size;
        v21 = Component_object;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v3->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
    }
LABEL_18:
    sub_21FFECC(Component_object, v5);
  }
  return (System_Collections_Generic_List_CostumeListViewObject__o *)v3;
}


void CostumeListViewManager__remove_callbackFunc2(
        CostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CostumeListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5932157 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932157 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CostumeListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  CostumeListViewManager__get_ObjectList(v11, v12);
}