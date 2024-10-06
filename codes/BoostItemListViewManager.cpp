void __fastcall BoostItemListViewManager___ctor(BoostItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BoostItemListViewManager__CreateList(
        BoostItemListViewManager_o *this,
        System_Int32_array *itemQuestList,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x22
  QuestRacePointMaster_o *v17; // x23
  __int64 v18; // x8
  unsigned __int64 v19; // x24
  int32_t v20; // w25
  ItemEntity_o *v21; // x26
  QuestRacePointEntity_o *v22; // x27
  QuestRacePointEntity_o *v23; // x28
  BoostItemListViewItem_o *v24; // x25
  const MethodInfo *v25; // x5
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v31; // x8
  UILabel_o *emptyMessageLabel; // x20
  QuestRacePointEntity_o *v33; // [xsp+0h] [xbp-70h] BYREF
  QuestRacePointEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6BB8B & 1) == 0 )
  {
    sub_1B90010(&BoostItemListViewItem_TypeInfo, itemQuestList);
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_QuestRacePointMaster___, v8);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1B90010(&LocalizationManager_TypeInfo, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B90010(&StringLiteral_12075/*"SHOP_LIST_EMPTY"*/, v13);
    byte_4A6BB8B = 1;
  }
  v33 = 0LL;
  entity = 0LL;
  this->fields.kind = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestRacePointMaster___);
  if ( !itemQuestList )
    goto LABEL_23;
  v17 = (QuestRacePointMaster_o *)Instance;
  ListViewManager__CreateList((ListViewManager_o *)this, itemQuestList->max_length, 0LL);
  v18 = *(_QWORD *)&itemQuestList->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v18 )
        sub_1B90274(Instance, v15);
      if ( !MasterData_object )
        break;
      v20 = itemQuestList->m_Items[v19 + 1];
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    v20,
                                    (const MethodInfo_312C5A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v33 = 0LL;
      entity = 0LL;
      if ( !v17 )
        break;
      v21 = (ItemEntity_o *)Instance;
      if ( QuestRacePointMaster__TryGetEntity(v17, &entity, questId, 0, 0LL) )
        QuestRacePointMaster__TryGetEntity(v17, &v33, questId, v20, 0LL);
      v23 = v33;
      v22 = entity;
      v24 = (BoostItemListViewItem_o *)sub_1B9025C(BoostItemListViewItem_TypeInfo);
      BoostItemListViewItem___ctor(v24, v19, v21, v22, v23, v25);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      v28 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v28 )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v28 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v24,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = v28 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v31 + 32) = v24;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v24, v26, v27);
      }
      LODWORD(v18) = itemQuestList->max_length;
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1B9026C(Instance, v15);
  }
LABEL_19:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_23;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BoostItemListViewItem_o *__fastcall BoostItemListViewManager__GetItem(
        BoostItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BoostItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A6BB8C & 1) == 0 )
  {
    sub_1B90010(&BoostItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A6BB8C = 1;
  }
  result = (BoostItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoostItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(BoostItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (BoostItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostItemListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall BoostItemListViewManager__OnClickListView(
        BoostItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct BoostItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B9026C(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall BoostItemListViewManager__OnMoveEnd(BoostItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A6BB90 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6BB90 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B9026C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemListViewManager__RequestListObject(
        BoostItemListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6BB8E & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B90010(&Method_BoostItemListViewManager_OnMoveEnd__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__Dispose__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__MoveNext__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__get_Current__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_BoostItemListViewObject__GetEnumerator__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_BoostItemListViewObject__get_Count__, v12);
    sub_1B90010(&StringLiteral_9941/*"OnMoveEnd"*/, v13);
    byte_4A6BB8E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)BoostItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B9026C(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_BoostItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_BoostItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B9026C(v19, v20);
      BoostItemListViewObject__Init_31875216((BoostItemListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemListViewManager__RequestListObject_31874188(
        BoostItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6BB8F & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B90010(&Method_BoostItemListViewManager_OnMoveEnd__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__Dispose__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__MoveNext__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__get_Current__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_BoostItemListViewObject__GetEnumerator__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_BoostItemListViewObject__get_Count__, v10);
    sub_1B90010(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4A6BB8F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)BoostItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B9026C(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_BoostItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_BoostItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B9026C(v17, v18);
      BoostItemListViewObject__Init_31875300((BoostItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_BoostItemListViewObject__Dispose__);
  }
}


void __fastcall BoostItemListViewManager__SetMode(
        BoostItemListViewManager_o *this,
        int32_t mode,
        BoostItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  BoostItemListViewManager__SetMode_31874032(this, mode, v6);
}


void __fastcall BoostItemListViewManager__SetMode_31874032(
        BoostItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    BoostItemListViewManager__RequestListObject_31874188(this, v6, v5);
  }
}


void __fastcall BoostItemListViewManager__SetMode_31874136(
        BoostItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  BoostItemListViewManager__SetMode_31874032(this, mode, v6);
}


void __fastcall BoostItemListViewManager__SetObjectItem(
        BoostItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  BoostItemListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A6BB8D & 1) == 0 )
  {
    this = (BoostItemListViewManager_o *)sub_1B90010(&BoostItemListViewObject_TypeInfo, obj);
    byte_4A6BB8D = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BoostItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BoostItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostItemListViewObject_TypeInfo )
  {
    sub_1B9026C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  BoostItemListViewObject__Init_31873908((BoostItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall BoostItemListViewManager__add_callbackFunc(
        BoostItemListViewManager_o *this,
        BoostItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct BoostItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoostItemListViewManager_o *v10; // x0
  BoostItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A6BB85 & 1) == 0 )
  {
    sub_1B90010(&BoostItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A6BB85 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (BoostItemListViewManager_CallbackFunc_c *)v7->klass != BoostItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostItemListViewManager_o *)sub_1B9052C(v7);
  BoostItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall BoostItemListViewManager__add_callbackFunc2(
        BoostItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoostItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A6BB87 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, value);
    byte_4A6BB87 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BCB500(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostItemListViewManager_o *)sub_1B9052C(v7);
  BoostItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_BoostItemListViewObject__o *__fastcall BoostItemListViewManager__get_ClippingObjectList(
        BoostItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A6BB8A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BoostItemListViewObject___, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_BoostItemListViewObject__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BoostItemListViewObject___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_BoostItemListViewObject__TypeInfo, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    byte_4A6BB8A = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BoostItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BoostItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B9026C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B9026C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BoostItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B9026C(0LL, v18);
      Item = (ListViewItem_o *)BoostItemListViewObject__GetItem((BoostItemListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1B9026C(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_40776640((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B9026C(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_BoostItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B9026C(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B9026C(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_BoostItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B9026C(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoostItemListViewObject__o *)v11;
}


System_Collections_Generic_List_BoostItemListViewObject__o *__fastcall BoostItemListViewManager__get_ObjectList(
        BoostItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A6BB89 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BoostItemListViewObject___, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_BoostItemListViewObject__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BoostItemListViewObject___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_BoostItemListViewObject__TypeInfo, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    byte_4A6BB89 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BoostItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BoostItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B9026C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B9026C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BoostItemListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B9026C(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_BoostItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B9026C(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoostItemListViewObject__o *)v11;
}


void __fastcall BoostItemListViewManager__remove_callbackFunc(
        BoostItemListViewManager_o *this,
        BoostItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct BoostItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoostItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A6BB86 & 1) == 0 )
  {
    sub_1B90010(&BoostItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A6BB86 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (BoostItemListViewManager_CallbackFunc_c *)v7->klass != BoostItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostItemListViewManager_o *)sub_1B9052C(v7);
  BoostItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall BoostItemListViewManager__remove_callbackFunc2(
        BoostItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoostItemListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A6BB88 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, value);
    byte_4A6BB88 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BCB500(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostItemListViewManager_o *)sub_1B9052C(v7);
  BoostItemListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemListViewManager_CallbackFunc___ctor(
        BoostItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CFC60;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CFC08;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BoostItemListViewManager_CallbackFunc__BeginInvoke(
        BoostItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = result;
  if ( (byte_4A6BB91 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B90010(&BoostItemListViewManager_ResultKind_TypeInfo, v9);
    byte_4A6BB91 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(BoostItemListViewManager_ResultKind_TypeInfo, &v16, *(_QWORD *)&index, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v14, callback, object);
}


void __fastcall BoostItemListViewManager_CallbackFunc__EndInvoke(
        BoostItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall BoostItemListViewManager_CallbackFunc__Invoke(
        BoostItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}