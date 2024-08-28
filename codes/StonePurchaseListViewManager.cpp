void __fastcall StonePurchaseListViewManager___ctor(StonePurchaseListViewManager_o *this, const MethodInfo *method)
{
  this->fields.specialBoardOffset = -22.0;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewManager__CreateList(
        StonePurchaseListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  StonePurchaseListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  struct UIScrollView_o *scrollView; // x8
  int v11; // w9
  BankShopEntity_array *BuyableEntitiyList; // x20
  int v13; // s0
  float v14; // s1
  int v15; // s2
  __int64 v16; // x8
  int v17; // s8
  float v18; // s9
  int v19; // s10
  signed __int64 v20; // x21
  BankShopEntity_o *v21; // x23
  __int64 v22; // x22
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  struct ListViewItemSeed_o *seed; // x8
  float y; // s12
  struct ListViewItemSeed_o *v28; // x8
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  struct ListViewItemSeed_o *v33; // x8

  v4 = this;
  if ( (byte_4A0643C & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_BankShopMaster___, *(_QWORD *)&kind);
    sub_1B686D4(&DataManager_TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    this = (StonePurchaseListViewManager_o *)sub_1B686D4(&StonePurchaseListViewItem_TypeInfo, v8);
    byte_4A0643C = 1;
  }
  if ( !kind )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (StonePurchaseListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_BankShopMaster___);
    if ( this )
    {
      BuyableEntitiyList = BankShopMaster__GetBuyableEntitiyList((BankShopMaster_o *)this, 0LL);
      ListViewManager__CreateList((ListViewManager_o *)v4, 0, 0LL);
      this = (StonePurchaseListViewManager_o *)v4->fields.seed;
      if ( this )
      {
        *(UnityEngine_Vector3_o *)&v13 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)this, 0, 0LL);
        if ( BuyableEntitiyList )
        {
          v16 = *(_QWORD *)&BuyableEntitiyList->max_length;
          if ( (int)v16 < 1 )
            goto LABEL_4;
          v17 = v13;
          v18 = v14;
          v19 = v15;
          v20 = 0LL;
          while ( 1 )
          {
            if ( v20 >= (unsigned __int64)(unsigned int)v16 )
LABEL_39:
              sub_1B68938(this, *(_QWORD *)&kind);
            v21 = BuyableEntitiyList->m_Items[v20];
            v22 = sub_1B68920(StonePurchaseListViewItem_TypeInfo);
            StonePurchaseListViewItem___ctor((StonePurchaseListViewItem_o *)v22, v20, v21, v23);
            if ( !v22 )
              break;
            this = *(StonePurchaseListViewManager_o **)(v22 + 112);
            *(_DWORD *)(v22 + 92) = v17;
            *(float *)(v22 + 96) = v18;
            *(_DWORD *)(v22 + 100) = v19;
            if ( !this )
              break;
            this = (StonePurchaseListViewManager_o *)BankShopEntity__HasFlag((BankShopEntity_o *)this, 2LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( v20 >= (int)(*(_QWORD *)&BuyableEntitiyList->max_length - 1) )
                goto LABEL_25;
              if ( v20 + 1 >= (unsigned __int64)(unsigned int)*(_QWORD *)&BuyableEntitiyList->max_length )
                goto LABEL_39;
              this = (StonePurchaseListViewManager_o *)BuyableEntitiyList->m_Items[v20 + 1];
              if ( !this )
                break;
              this = (StonePurchaseListViewManager_o *)BankShopEntity__HasFlag((BankShopEntity_o *)this, 2LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_25:
                seed = v4->fields.seed;
                if ( !seed )
                  break;
                y = seed->fields.arrangementPich.fields.y + v4->fields.specialBoardOffset;
              }
              else
              {
                v33 = v4->fields.seed;
                if ( !v33 )
                  break;
                y = v33->fields.arrangementPich.fields.y + (float)(v4->fields.specialBoardOffset * 0.5);
              }
            }
            else
            {
              v28 = v4->fields.seed;
              if ( !v28 )
                break;
              y = v28->fields.arrangementPich.fields.y;
            }
            this = (StonePurchaseListViewManager_o *)v4->fields.itemList;
            if ( !this )
              break;
            v29 = *(_QWORD *)&this->fields.m_CachedPtr;
            v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v29 )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v22,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = v29 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v32 + 32) = v22;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v32 + 32), v22, v24, v25);
            }
            LODWORD(v16) = BuyableEntitiyList->max_length;
            ++v20;
            v18 = v18 + y;
            if ( v20 >= (int)v16 )
              goto LABEL_4;
          }
        }
      }
    }
LABEL_38:
    sub_1B68930(this, *(_QWORD *)&kind);
  }
LABEL_4:
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  scrollView = v4->fields.scrollView;
  if ( !scrollView )
    goto LABEL_38;
  if ( itemList->fields._size > 2 )
    v11 = 1;
  else
    v11 = 4;
  scrollView->fields.contentPivot = v11;
  ListViewManager__DispItem((ListViewManager_o *)v4, -1, 0, -1, 0LL);
}


void __fastcall StonePurchaseListViewManager__DestroyList(
        StonePurchaseListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
StonePurchaseListViewItem_o *__fastcall StonePurchaseListViewManager__GetItem(
        StonePurchaseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  StonePurchaseListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A0643D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B686D4(&StonePurchaseListViewItem_TypeInfo, v5);
    byte_4A0643D = 1;
  }
  result = (StonePurchaseListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (StonePurchaseListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(StonePurchaseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (StonePurchaseListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != StonePurchaseListViewItem_TypeInfo )
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


void __fastcall StonePurchaseListViewManager__OnClickListView(
        StonePurchaseListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct StonePurchaseListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B68930(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall StonePurchaseListViewManager__OnMoveEnd(StonePurchaseListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A06441 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A06441 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B68930(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewManager__RequestListObject(
        StonePurchaseListViewManager_o *this,
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

  if ( (byte_4A0643F & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__Dispose__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__MoveNext__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__get_Current__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__GetEnumerator__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__get_Count__, v11);
    sub_1B686D4(&Method_StonePurchaseListViewManager_OnMoveEnd__, v12);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v13);
    byte_4A0643F = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)StonePurchaseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B68930(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_StonePurchaseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_StonePurchaseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B68930(v19, v20);
      StonePurchaseListViewObject__Init_34598272((StonePurchaseListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewManager__RequestListObject_34597244(
        StonePurchaseListViewManager_o *this,
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

  if ( (byte_4A06440 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__Dispose__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__MoveNext__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__get_Current__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__get_Count__, v9);
    sub_1B686D4(&Method_StonePurchaseListViewManager_OnMoveEnd__, v10);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v11);
    byte_4A06440 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)StonePurchaseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B68930(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_StonePurchaseListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_StonePurchaseListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B68930(v17, v18);
      StonePurchaseListViewObject__Init_34598356((StonePurchaseListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__Dispose__);
  }
}


void __fastcall StonePurchaseListViewManager__SetMode(
        StonePurchaseListViewManager_o *this,
        int32_t mode,
        StonePurchaseListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  StonePurchaseListViewManager__SetMode_34597100(this, mode, v6);
}


void __fastcall StonePurchaseListViewManager__SetMode_34597100(
        StonePurchaseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
    StonePurchaseListViewManager__RequestListObject_34597244(this, 3, v5);
}


void __fastcall StonePurchaseListViewManager__SetMode_34597192(
        StonePurchaseListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  StonePurchaseListViewManager__SetMode_34597100(this, mode, v6);
}


void __fastcall StonePurchaseListViewManager__SetObjectItem(
        StonePurchaseListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  StonePurchaseListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A0643E & 1) == 0 )
  {
    this = (StonePurchaseListViewManager_o *)sub_1B686D4(&StonePurchaseListViewObject_TypeInfo, obj);
    byte_4A0643E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(StonePurchaseListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (StonePurchaseListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != StonePurchaseListViewObject_TypeInfo )
  {
    sub_1B68930(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  StonePurchaseListViewObject__Init_34596976((StonePurchaseListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall StonePurchaseListViewManager__add_callbackFunc(
        StonePurchaseListViewManager_o *this,
        StonePurchaseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct StonePurchaseListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  StonePurchaseListViewManager_o *v10; // x0
  StonePurchaseListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A06436 & 1) == 0 )
  {
    sub_1B686D4(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A06436 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (StonePurchaseListViewManager_CallbackFunc_c *)v7->klass != StonePurchaseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BA3BC4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B68BF0(v7);
  StonePurchaseListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall StonePurchaseListViewManager__add_callbackFunc2(
        StonePurchaseListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  StonePurchaseListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A06438 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, value);
    byte_4A06438 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B68BF0(v7);
  StonePurchaseListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_StonePurchaseListViewObject__o *__fastcall StonePurchaseListViewManager__get_ClippingObjectList(
        StonePurchaseListViewManager_o *this,
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

  if ( (byte_4A0643B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_StonePurchaseListViewObject___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_StonePurchaseListViewObject__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A0643B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_StonePurchaseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_StonePurchaseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B68930(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B68930(0LL, v18);
      Item = (ListViewItem_o *)StonePurchaseListViewObject__GetItem(
                                 (StonePurchaseListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B68930(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_40459252((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B68930(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B68930(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B68930(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B68930(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_StonePurchaseListViewObject__o *)v11;
}


System_Collections_Generic_List_StonePurchaseListViewObject__o *__fastcall StonePurchaseListViewManager__get_ObjectList(
        StonePurchaseListViewManager_o *this,
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

  if ( (byte_4A0643A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_StonePurchaseListViewObject___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_StonePurchaseListViewObject__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A0643A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_StonePurchaseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_StonePurchaseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B68930(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B68930(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B68930(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_StonePurchaseListViewObject__o *)v11;
}


void __fastcall StonePurchaseListViewManager__remove_callbackFunc(
        StonePurchaseListViewManager_o *this,
        StonePurchaseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct StonePurchaseListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  StonePurchaseListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A06437 & 1) == 0 )
  {
    sub_1B686D4(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A06437 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (StonePurchaseListViewManager_CallbackFunc_c *)v7->klass != StonePurchaseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BA3BC4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B68BF0(v7);
  StonePurchaseListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall StonePurchaseListViewManager__remove_callbackFunc2(
        StonePurchaseListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  StonePurchaseListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A06439 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, value);
    byte_4A06439 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B68BF0(v7);
  StonePurchaseListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewManager_CallbackFunc___ctor(
        StonePurchaseListViewManager_CallbackFunc_o *this,
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AD6E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AD6A0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall StonePurchaseListViewManager_CallbackFunc__BeginInvoke(
        StonePurchaseListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A06442 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, *(_QWORD *)&result);
    byte_4A06442 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall StonePurchaseListViewManager_CallbackFunc__EndInvoke(
        StonePurchaseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall StonePurchaseListViewManager_CallbackFunc__Invoke(
        StonePurchaseListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}