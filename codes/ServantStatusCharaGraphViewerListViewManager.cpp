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
  __int64 v8; // x2
  __int64 v9; // x2
  __int64 v10; // x3
  signed int max_length; // w8
  __int64 v12; // x25
  ServantStatusCharaGraphListViewItem_o *v13; // x8
  int32_t index; // w23
  int64_t mainInfo; // x24
  int32_t imageLimitCount; // w29
  int64_t v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v33; // x8

  v6 = this;
  if ( (byte_4B121E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&currentIndex, items);
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_1BCA7E0(
                                                               &ServantStatusCharaGraphListViewItem_TypeInfo,
                                                               v7,
                                                               v8);
    byte_4B121E7 = 1;
  }
  if ( !items )
    goto LABEL_15;
  ListViewManager__CreateList((ListViewManager_o *)v6, items->max_length, 0LL);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
        sub_1BCAA44(this, *(_QWORD *)&currentIndex);
      v13 = items->m_Items[v12];
      if ( !v13 )
        break;
      index = v13->fields.index;
      mainInfo = (int64_t)v13->fields.mainInfo;
      imageLimitCount = v13->fields.imageLimitCount;
      v17 = sub_1BCAA2C(ServantStatusCharaGraphListViewItem_TypeInfo, *(_QWORD *)&currentIndex, v9, v10);
      ListViewItem___ctor_41447164((ListViewItem_o *)v17, index, 0LL);
      *(_QWORD *)(v17 + 112) = mainInfo;
      sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 112), mainInfo, v18, v19, v20, v21, v22, v23);
      *(_DWORD *)(v17 + 120) = imageLimitCount;
      this = (ServantStatusCharaGraphViewerListViewManager_o *)v6->fields.itemList;
      if ( !this )
        break;
      v30 = *(_QWORD *)&this->fields.m_CachedPtr;
      v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v30 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v30 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v17,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = v30 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v33 + 32) = v17;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), v17, v24, v25, v26, v27, v28, v29);
      }
      max_length = items->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&currentIndex);
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
    sub_1BCAA3C(0LL, method);
  return UnityEngine_Behaviour__get_enabled(scrollView, 0LL);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__OnMoveEnd(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  struct UIScrollView_o *v6; // x0

  if ( (byte_4B121EB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B121EB = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._8_UpdateScrollbars.method)(
      v6,
      1LL,
      v6->klass->vtable._9_SetDragAmount.methodPtr);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B121EC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      method,
      v3);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v10,
      v11);
    byte_4B121EC = 1;
  }
  memset(&v16, 0, sizeof(v16));
  this->fields.currentPhase = 1;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1BCAA3C(0LL, v14);
    ServantStatusCharaGraphListViewObject__Init_32914288(
      (ServantStatusCharaGraphListViewObject_o *)v16.fields._current,
      9,
      0LL,
      delay,
      v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__RequestListObject(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  Il2CppObject *current; // x21
  System_Action_o *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B121EA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphViewerListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B121EA = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  if ( ObjectList->fields._size < 1 )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v31.fields._current;
      v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(
        v27,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphViewerListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BCAA3C(v28, v29);
      ServantStatusCharaGraphListViewObject__Init_32914288(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v27,
        delay,
        v30);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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
    sub_1BCAA3C(0LL, v6);
  UnityEngine_Behaviour__set_enabled(dragScrollView, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B121ED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      *(_QWORD *)&dispType,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__, v9, v10);
    byte_4B121ED = 1;
  }
  memset(&v15, 0, sizeof(v15));
  this->fields.itemDataType = dispType;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, *(const MethodInfo **)&dispType);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1BCAA3C(0LL, v13);
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)v15.fields._current,
      dispType,
      v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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
  __int64 v6; // x2
  struct ListViewIndicator_o *indicator; // x9
  __int64 methodPtr_low; // x12
  struct ListViewIndicator_o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B121E8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, onModifyScrollViewCenter, method);
    sub_1BCA7E0(&ServantStatusCharaGraphViewerListViewIndicator_TypeInfo, v5, v6);
    byte_4B121E8 = 1;
  }
  indicator = this->fields.indicator;
  if ( indicator
    && (methodPtr_low = LOBYTE(ServantStatusCharaGraphViewerListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ServantStatusCharaGraphViewerListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphViewerListViewIndicator_TypeInfo )
      v9 = this->fields.indicator;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, onModifyScrollViewCenter);
  v10 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v9, 0LL);
  if ( v10 )
  {
    if ( !v9 )
      sub_1BCAA3C(v10, v11);
    v9[1].klass = (ListViewIndicator_c *)onModifyScrollViewCenter;
    sub_1BCA784((PartyOrganizationUtility_o *)&v9[1], (int64_t)onModifyScrollViewCenter, v12, v13, v14, v15, v16, v17);
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
  if ( (byte_4B121E9 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_1BCA7E0(
                                                               &ServantStatusCharaGraphListViewObject_TypeInfo,
                                                               obj,
                                                               item);
    byte_4B121E9 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewObject_TypeInfo
    || (this = (ServantStatusCharaGraphViewerListViewManager_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                                                   (ServantStatusCharaGraphListViewObject_o *)obj,
                                                                   (const MethodInfo *)obj)) == 0LL )
  {
    sub_1BCAA3C(this, obj);
  }
  HIDWORD(this->fields.dragParentObject) = v5->fields.itemDataType;
  if ( v5->fields.currentPhase == 1 )
    v8 = 8;
  else
    v8 = 7;
  ServantStatusCharaGraphListViewObject__Init_32912976((ServantStatusCharaGraphListViewObject_o *)obj, v8, v7);
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
    sub_1BCAA3C(scrollView, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B121E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B121E6 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                 (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v21;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B121E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B121E5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v21;
}