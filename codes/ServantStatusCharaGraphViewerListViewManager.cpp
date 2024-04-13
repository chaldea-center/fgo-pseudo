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
  ServantStatusCharaGraphViewerListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  signed int max_length; // w8
  __int64 v10; // x25
  ServantStatusCharaGraphListViewItem_o *v11; // x8
  int32_t index; // w23
  System_Int32_array **mainInfo; // x24
  int32_t imageLimitCount; // w19
  __int64 v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0

  v5 = this;
  if ( (byte_42E6E54 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, currentIndex, (_DWORD)items, method);
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_B5D5C4(
                                                               &ServantStatusCharaGraphListViewItem_TypeInfo,
                                                               v6,
                                                               v7,
                                                               v8);
    byte_42E6E54 = 1;
  }
  if ( !items )
    goto LABEL_11;
  ListViewManager__CreateList((ListViewManager_o *)v5, items->max_length, 0LL);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= max_length )
      {
        v22 = sub_B5D6C8(this);
        sub_B5D668(v22, 0LL);
      }
      v11 = items->m_Items[v10];
      if ( !v11 )
        break;
      index = v11->fields.index;
      mainInfo = (System_Int32_array **)v11->fields.mainInfo;
      imageLimitCount = v11->fields.imageLimitCount;
      v15 = sub_B5D694(ServantStatusCharaGraphListViewItem_TypeInfo);
      ListViewItem___ctor_23901828((ListViewItem_o *)v15, index, 0LL);
      *(_QWORD *)(v15 + 112) = mainInfo;
      sub_B5D560((BattleServantConfConponent_o *)(v15 + 112), mainInfo, v16, v17, v18, v19, v20, v21);
      *(_DWORD *)(v15 + 120) = imageLimitCount;
      this = (ServantStatusCharaGraphViewerListViewManager_o *)v5->fields.itemList;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = items->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_10;
    }
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&currentIndex);
  }
LABEL_10:
  ListViewManager__SortItem((ListViewManager_o *)v5, currentIndex, 0, -1, 0LL);
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
    sub_B5D69C(0LL, method);
  return UnityEngine_Behaviour__get_enabled(scrollView, 0LL);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__OnMoveEnd(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  struct UIScrollView_o *v7; // x0

  if ( (byte_42E6E58 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6E58 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v7 = this->fields.scrollView;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
      v7,
      1LL,
      v7->klass->vtable._9_SetDragAmount.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x19
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6E59 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      (_DWORD)method,
      v3,
      v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v13,
      v14,
      v15);
    byte_42E6E59 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  this->fields.currentPhase = 1;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B5D69C(0LL, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    if ( !v18 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current )
      sub_B5D69C(v18, v19);
    zero = UnityEngine_Vector3__get_zero(0LL);
    ServantStatusCharaGraphListViewObject__Init(
      (ServantStatusCharaGraphListViewObject_o *)current,
      9,
      0LL,
      delay,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v21);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__RequestListObject(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x21
  System_Action_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6E57 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_ServantStatusCharaGraphViewerListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42E6E57 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  if ( ObjectList->fields._size < 1 )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v36.fields.current;
      v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphViewerListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_B5D69C(v33, v34);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusCharaGraphListViewObject__Init(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v32,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v35);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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
    sub_B5D69C(0LL, v6);
  UnityEngine_Behaviour__set_enabled(dragScrollView, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6E5A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__,
      dispType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__,
      v12,
      v13,
      v14);
    byte_42E6E5A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields.itemDataType = dispType;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, *(const MethodInfo **)&dispType);
  if ( !ObjectList )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v17);
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)v19.fields.current,
      dispType,
      v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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
  if ( mode == 1 )
  {
    v6 = 2;
  }
  else
  {
    if ( mode != 2 )
      return;
    v6 = 3;
  }
  ServantStatusCharaGraphViewerListViewManager__RequestListObject(this, v6, 0.0, v5);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetModifyScrollViewCenter(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyScrollViewCenter,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ListViewIndicator_o *indicator; // x8
  __int64 v10; // x11
  struct ListViewIndicator_o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E6E55 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)onModifyScrollViewCenter, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusCharaGraphViewerListViewIndicator_TypeInfo, v6, v7, v8);
    byte_42E6E55 = 1;
  }
  indicator = this->fields.indicator;
  if ( indicator
    && (v10 = *(&ServantStatusCharaGraphViewerListViewIndicator_TypeInfo->_2.bitflags2 + 1),
        *(&indicator->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (ServantStatusCharaGraphViewerListViewIndicator_c *)indicator->klass->_2.typeHierarchy[v10 - 1] == ServantStatusCharaGraphViewerListViewIndicator_TypeInfo )
      v11 = this->fields.indicator;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v11, 0LL);
  if ( v12 )
  {
    if ( !v11 )
      sub_B5D69C(v12, v13);
    v11[1].klass = (ListViewIndicator_c *)onModifyScrollViewCenter;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v11[1],
      (System_Int32_array **)onModifyScrollViewCenter,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__SetObjectItem(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w20
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v5 = this;
  if ( (byte_42E6E56 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_B5D5C4(
                                                               &ServantStatusCharaGraphListViewObject_TypeInfo,
                                                               (_DWORD)obj,
                                                               (_DWORD)item,
                                                               method);
    byte_42E6E56 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewObject_TypeInfo
    || (this = (ServantStatusCharaGraphViewerListViewManager_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                                                   (ServantStatusCharaGraphListViewObject_o *)obj,
                                                                   (const MethodInfo *)obj)) == 0LL )
  {
    sub_B5D69C(this, obj);
  }
  HIDWORD(this->fields.dropList) = v5->fields.itemDataType;
  if ( v5->fields.currentPhase == 1 )
    v7 = 8;
  else
    v7 = 7;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(
    (ServantStatusCharaGraphListViewObject_o *)obj,
    v7,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
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
    sub_B5D69C(scrollView, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E6E53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E6E53 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)current,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v29;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E6E52 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E6E52 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v29;
}