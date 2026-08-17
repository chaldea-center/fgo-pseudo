void StonePurchaseListViewManager___ctor(StonePurchaseListViewManager_o *this, const MethodInfo *method)
{
  this->fields.specialBoardOffset = -22.0;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewManager__CreateList(
        StonePurchaseListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  StonePurchaseListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  struct UIScrollView_o *scrollView; // x8
  int v7; // w9
  BankShopEntity_array *BuyableEntitiyList; // x20
  il2cpp_array_size_t max_length; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  unsigned __int64 v13; // x21
  Il2CppClass **v14; // x26
  BankShopEntity_o *v15; // x23
  __int64 v16; // x22
  const MethodInfo *v17; // x3
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  il2cpp_array_size_t v24; // x8
  struct ListViewItemSeed_o *seed; // x8
  float v26; // s12
  struct ListViewItemSeed_o *v27; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8
  struct ListViewItemSeed_o *v32; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596E708 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BankShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (StonePurchaseListViewManager_o *)sub_2213A60(&StonePurchaseListViewItem_TypeInfo);
    byte_596E708 = 1;
  }
  if ( !kind )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&kind, method);
    this = (StonePurchaseListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BankShopMaster___);
    if ( this )
    {
      BuyableEntitiyList = BankShopMaster__GetBuyableEntitiyList((BankShopMaster_o *)this, 0);
      ListViewManager__CreateList((ListViewManager_o *)v4, 0, 0);
      this = (StonePurchaseListViewManager_o *)v4->fields.seed;
      if ( this )
      {
        LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)this, 0, 0);
        if ( BuyableEntitiyList )
        {
          max_length = BuyableEntitiyList->max_length;
          if ( (int)max_length < 1 )
            goto LABEL_4;
          x = LocalPosition.fields.x;
          y = LocalPosition.fields.y;
          z = LocalPosition.fields.z;
          v13 = 0;
          while ( 1 )
          {
            if ( v13 >= (unsigned int)max_length )
LABEL_39:
              sub_2213CE4(this);
            v14 = &BuyableEntitiyList->obj.klass + v13;
            v15 = (BankShopEntity_o *)v14[4];
            v16 = sub_2213CCC(StonePurchaseListViewItem_TypeInfo);
            StonePurchaseListViewItem___ctor((StonePurchaseListViewItem_o *)v16, v13, v15, v17);
            if ( !v16 )
              break;
            this = *(StonePurchaseListViewManager_o **)(v16 + 120);
            *(float *)(v16 + 100) = x;
            *(float *)(v16 + 104) = y;
            *(float *)(v16 + 108) = z;
            if ( !this )
              break;
            this = (StonePurchaseListViewManager_o *)BankShopEntity__HasFlag((BankShopEntity_o *)this, 2, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v24 = BuyableEntitiyList->max_length;
              if ( (__int64)v13 >= (int)v24 - 1 )
                goto LABEL_25;
              if ( (int)v13 + 1 >= (unsigned int)v24 )
                goto LABEL_39;
              this = (StonePurchaseListViewManager_o *)v14[5];
              if ( !this )
                break;
              this = (StonePurchaseListViewManager_o *)BankShopEntity__HasFlag((BankShopEntity_o *)this, 2, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_25:
                seed = v4->fields.seed;
                if ( !seed )
                  break;
                v26 = seed->fields.arrangementPich.fields.y + v4->fields.specialBoardOffset;
              }
              else
              {
                v32 = v4->fields.seed;
                if ( !v32 )
                  break;
                v26 = v32->fields.arrangementPich.fields.y + (float)(v4->fields.specialBoardOffset * 0.5);
              }
            }
            else
            {
              v27 = v4->fields.seed;
              if ( !v27 )
                break;
              v26 = v27->fields.arrangementPich.fields.y;
            }
            this = (StonePurchaseListViewManager_o *)v4->fields.itemList;
            if ( !this )
              break;
            m_CachedPtr = this->fields.m_CachedPtr;
            v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v16,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v31 + 32) = v16;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 32), v16, v18, v19, v20, v21, v22, v23);
            }
            y = y + v26;
            LODWORD(max_length) = BuyableEntitiyList->max_length;
            if ( (__int64)++v13 >= (int)max_length )
              goto LABEL_4;
          }
        }
      }
    }
LABEL_38:
    sub_2213CDC(this, *(_QWORD *)&kind);
  }
LABEL_4:
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  scrollView = v4->fields.scrollView;
  if ( !scrollView )
    goto LABEL_38;
  if ( itemList->fields._size > 2 )
    v7 = 1;
  else
    v7 = 4;
  scrollView->fields.contentPivot = v7;
  ListViewManager__DispItem((ListViewManager_o *)v4, -1, 0, -1, 0);
}


void StonePurchaseListViewManager__DestroyList(StonePurchaseListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


StonePurchaseListViewItem_o *StonePurchaseListViewManager__GetItem(
        StonePurchaseListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  StonePurchaseListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596E709 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&StonePurchaseListViewItem_TypeInfo);
    byte_596E709 = 1;
  }
  result = (StonePurchaseListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (StonePurchaseListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = StonePurchaseListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (StonePurchaseListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != StonePurchaseListViewItem_TypeInfo )
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


void StonePurchaseListViewManager__OnClickListView(
        StonePurchaseListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct StonePurchaseListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x1

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      Index,
      callbackFunc->fields.method);
  }
}


void StonePurchaseListViewManager__OnMoveEnd(StonePurchaseListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596E70D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E70D = 1;
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
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewManager__RequestListObject(
        StonePurchaseListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596E70B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__get_Count__);
    sub_2213A60(&Method_StonePurchaseListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596E70B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)StonePurchaseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_StonePurchaseListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_StonePurchaseListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      StonePurchaseListViewObject__Init_45587468((StonePurchaseListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseListViewManager__RequestListObject_45586464(
        StonePurchaseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596E70C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__get_Count__);
    sub_2213A60(&Method_StonePurchaseListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596E70C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)StonePurchaseListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_StonePurchaseListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_StonePurchaseListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      StonePurchaseListViewObject__Init_45587552((StonePurchaseListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_StonePurchaseListViewObject__Dispose__);
  }
}


void StonePurchaseListViewManager__SetMode(
        StonePurchaseListViewManager_o *this,
        int32_t mode,
        StonePurchaseListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  StonePurchaseListViewManager__SetMode_45586320(this, mode, v10);
}


void StonePurchaseListViewManager__SetMode_45586320(
        StonePurchaseListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
    StonePurchaseListViewManager__RequestListObject_45586464(this, 3, v5);
}


void StonePurchaseListViewManager__SetMode_45586412(
        StonePurchaseListViewManager_o *this,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  StonePurchaseListViewManager__SetMode_45586320(this, mode, v10);
}


void StonePurchaseListViewManager__SetObjectItem(
        StonePurchaseListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596E70A & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewObject_TypeInfo);
    byte_596E70A = 1;
  }
  if ( obj
    && (naturalAligment = StonePurchaseListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (StonePurchaseListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == StonePurchaseListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 1 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  StonePurchaseListViewObject__Init_45586196((StonePurchaseListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void StonePurchaseListViewManager__add_callbackFunc(
        StonePurchaseListViewManager_o *this,
        StonePurchaseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseListViewManager_o *v11; // x0
  StonePurchaseListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596E702 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    byte_596E702 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (StonePurchaseListViewManager_CallbackFunc_c *)v6->klass != StonePurchaseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, StonePurchaseListViewManager_CallbackFunc_TypeInfo, v7, v8);
  StonePurchaseListViewManager__remove_callbackFunc(v11, v12, v13);
}


void StonePurchaseListViewManager__add_callbackFunc2(
        StonePurchaseListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596E704 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596E704 = 1;
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
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  StonePurchaseListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_StonePurchaseListViewObject__o *StonePurchaseListViewManager__get_ClippingObjectList(
        StonePurchaseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596E707 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_StonePurchaseListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_StonePurchaseListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E707 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_StonePurchaseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StonePurchaseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)StonePurchaseListViewObject__GetItem(
                                 (StonePurchaseListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_StonePurchaseListViewObject__o *)v3;
}


System_Collections_Generic_List_StonePurchaseListViewObject__o *StonePurchaseListViewManager__get_ObjectList(
        StonePurchaseListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596E706 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_StonePurchaseListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_StonePurchaseListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E706 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_StonePurchaseListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StonePurchaseListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_StonePurchaseListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_StonePurchaseListViewObject__o *)v3;
}


void StonePurchaseListViewManager__remove_callbackFunc(
        StonePurchaseListViewManager_o *this,
        StonePurchaseListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596E703 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    byte_596E703 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (StonePurchaseListViewManager_CallbackFunc_c *)v6->klass != StonePurchaseListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, StonePurchaseListViewManager_CallbackFunc_TypeInfo, v7, v8);
  StonePurchaseListViewManager__add_callbackFunc2(v11, v12, v13);
}


void StonePurchaseListViewManager__remove_callbackFunc2(
        StonePurchaseListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596E705 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596E705 = 1;
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
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  StonePurchaseListViewManager__get_ObjectList(v11, v12);
}


void StonePurchaseListViewManager_CallbackFunc___ctor(
        StonePurchaseListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200ABF0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200ABA8;
}


System_IAsyncResult_o *StonePurchaseListViewManager_CallbackFunc__BeginInvoke(
        StonePurchaseListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void StonePurchaseListViewManager_CallbackFunc__EndInvoke(
        StonePurchaseListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void StonePurchaseListViewManager_CallbackFunc__Invoke(
        StonePurchaseListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}