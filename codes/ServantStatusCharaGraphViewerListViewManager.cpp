void __fastcall ServantStatusCharaGraphViewerListViewManager___ctor(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__CreateList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t currentIndex,
        ServantStatusCharaGraphListViewItem_array *items,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *v6; // x20
  __int64 v7; // x1
  signed int max_length; // w8
  __int64 v9; // x25
  ServantStatusCharaGraphListViewItem_o *v10; // x8
  int32_t index; // w23
  int64_t mainInfo; // x24
  int32_t imageLimitCount; // w29
  int64_t v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8

  v6 = this;
  if ( (byte_4C1DE28 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&currentIndex);
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_1C3B764(
                                                               &ServantStatusCharaGraphListViewItem_TypeInfo,
                                                               v7);
    byte_4C1DE28 = 1;
  }
  if ( !items )
    goto LABEL_15;
  ListViewManager__CreateList((ListViewManager_o *)v6, items->max_length, 0LL);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_1C3B9C8(this, *(_QWORD *)&currentIndex);
      v10 = items->m_Items[v9];
      if ( !v10 )
        break;
      index = v10->fields.index;
      mainInfo = (int64_t)v10->fields.mainInfo;
      imageLimitCount = v10->fields.imageLimitCount;
      v14 = sub_1C3B9B0(ServantStatusCharaGraphListViewItem_TypeInfo);
      ListViewItem___ctor_42199332((ListViewItem_o *)v14, index, 0LL);
      *(_QWORD *)(v14 + 112) = mainInfo;
      sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 112), mainInfo, v15, v16, v17, v18, v19, v20);
      *(_DWORD *)(v14 + 120) = imageLimitCount;
      this = (ServantStatusCharaGraphViewerListViewManager_o *)v6->fields.itemList;
      if ( !this )
        break;
      v27 = *(_QWORD *)&this->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v27 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v14,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = v14;
        sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 32), v14, v21, v22, v23, v24, v25, v26);
      }
      max_length = items->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_1C3B9C0(this, *(_QWORD *)&currentIndex);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)v6, currentIndex, 0, -1, 0LL);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__DestroyList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.currentPhase = 0;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


bool __fastcall ServantStatusCharaGraphViewerListViewManager__IsActiveScroll(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1C3B9C0(0LL, method);
  return UnityEngine_Behaviour__get_enabled(scrollView, 0LL);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__OnMoveEnd(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  struct UIScrollView_o *v5; // x0

  if ( (byte_4C1DE2C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1DE2C = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
    ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v5->klass->vtable._8_UpdateScrollbars.method)(
      v5,
      1LL,
      v5->klass->vtable._9_SetDragAmount.methodPtr);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1DE2D & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      method);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v7);
    byte_4C1DE2D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  this->fields.currentPhase = 1;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C3B9C0(0LL, v10);
    ServantStatusCharaGraphListViewObject__Init_33471316(
      (ServantStatusCharaGraphListViewObject_o *)v12.fields._current,
      9,
      0LL,
      delay,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__RequestListObject(
        ServantStatusCharaGraphViewerListViewManager_o *this,
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C1DE2B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__, v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v11);
    sub_1C3B764(&Method_ServantStatusCharaGraphViewerListViewManager_OnMoveEnd__, v12);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v13);
    byte_4C1DE2B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v15);
  if ( ObjectList->fields._size < 1 )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      delay,
      0LL);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphViewerListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1C3B9C0(v18, v19);
      ServantStatusCharaGraphListViewObject__Init_33471316(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v17,
        delay,
        v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetEnableScroll(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  int32_t CenterIndex; // w0
  __int64 v6; // x1
  UnityEngine_Behaviour_o *dragScrollView; // x0

  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
  ListViewManager__MoveCenterItem((ListViewManager_o *)this, CenterIndex, 0, 0, 0.0, 0LL);
  dragScrollView = (UnityEngine_Behaviour_o *)this->fields.dragScrollView;
  if ( !dragScrollView )
    sub_1C3B9C0(0LL, v6);
  UnityEngine_Behaviour__set_enabled(dragScrollView, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1DE2E & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      *(_QWORD *)&dispType);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v7);
    byte_4C1DE2E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  this->fields.itemDataType = dispType;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, *(const MethodInfo **)&dispType);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C3B9C0(0LL, v10);
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)v12.fields._current,
      dispType,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetMode(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    ServantStatusCharaGraphViewerListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetModifyScrollViewCenter(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyScrollViewCenter,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewIndicator_o *indicator; // x9
  __int64 methodPtr_low; // x12
  struct ListViewIndicator_o *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C1DE29 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, onModifyScrollViewCenter);
    sub_1C3B764(&ServantStatusCharaGraphViewerListViewIndicator_TypeInfo, v5);
    byte_4C1DE29 = 1;
  }
  indicator = this->fields.indicator;
  if ( indicator
    && (methodPtr_low = LOBYTE(ServantStatusCharaGraphViewerListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ServantStatusCharaGraphViewerListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphViewerListViewIndicator_TypeInfo )
      v8 = this->fields.indicator;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v8, 0LL);
  if ( v9 )
  {
    if ( !v8 )
      sub_1C3B9C0(v9, v10);
    v8[1].klass = (ListViewIndicator_c *)onModifyScrollViewCenter;
    sub_1C3B708((PartyOrganizationUtility_o *)&v8[1], (int64_t)onModifyScrollViewCenter, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetObjectItem(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  v5 = this;
  if ( (byte_4C1DE2A & 1) == 0 )
  {
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_1C3B764(
                                                               &ServantStatusCharaGraphListViewObject_TypeInfo,
                                                               obj);
    byte_4C1DE2A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewObject_TypeInfo
    || (this = (ServantStatusCharaGraphViewerListViewManager_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                                                   (ServantStatusCharaGraphListViewObject_o *)obj,
                                                                   (const MethodInfo *)obj)) == 0LL )
  {
    sub_1C3B9C0(this, obj);
  }
  HIDWORD(this->fields.dragParentObject) = v5->fields.itemDataType;
  if ( v5->fields.currentPhase == 1 )
    v8 = 8;
  else
    v8 = 7;
  ServantStatusCharaGraphListViewObject__Init_33470004((ServantStatusCharaGraphListViewObject_o *)obj, v8, v7);
}


UnityEngine_Vector2_o __fastcall ServantStatusCharaGraphViewerListViewManager__get_CenterPosition(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL )
  {
    sub_1C3B9C0(scrollView, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
  v4 = this->fields.clipOffset.fields.x - localPosition.fields.x;
  v5 = this->fields.clipOffset.fields.y - localPosition.fields.y;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphViewerListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C1DE27 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1DE27 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C3B9C0(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                 (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C3B9C0(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_42215272((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C3B9C0(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C3B9C0(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C3B9C0(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C3B9C0(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C1DE26 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1DE26 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C3B9C0(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v11;
}