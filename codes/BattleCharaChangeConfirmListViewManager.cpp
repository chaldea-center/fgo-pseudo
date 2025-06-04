void __fastcall BattleCharaChangeConfirmListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleCharaChangeConfirmListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4AFD71E & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewManager_TypeInfo, v1);
    byte_4AFD71E = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ObjectOffsetY = 0x40E0000041000000LL;
  static_fields->LastObjectOffsetY = 2.0;
}


void __fastcall BattleCharaChangeConfirmListViewManager___ctor(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewManager__Awake(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewManager__CreateList(
        BattleCharaChangeConfirmListViewManager_o *this,
        BattleCharaChangeConfirmListViewItem_o *itemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *scrollView; // x20
  Il2CppObject *Component_object; // x20
  float v22; // s8
  float v23; // s9
  System_Collections_Generic_List_object__o **p_objectList; // x20
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *objectList; // x22
  System_Func_object__bool__o *v26; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  float v31; // s1
  struct UISprite_o *dummyStart; // x8
  int32_t v33; // w21
  float v34; // s10
  int32_t klass; // w8
  BattleCharaChangeConfirmListViewObject_o *v36; // x23
  UnityEngine_Component_o *v37; // x22
  float v38; // s8
  const MethodInfo *v39; // x1
  float v40; // s0
  BattleCharaChangeConfirmListViewManager_c *v41; // x0
  float v42; // s9
  float v43; // s0
  Il2CppObject *Item; // x0
  BattleCharaChangeConfirmListViewManager_c *v45; // x8
  BattleCharaChangeConfirmListViewObject_o *v46; // x20
  float v47; // s8
  const MethodInfo *v48; // x1
  float v49; // s0
  BattleCharaChangeConfirmListViewManager_c *v50; // x0
  UnityEngine_Component_o *dummyEndObject; // x19
  float v52; // s9
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFD719 & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewManager_TypeInfo, itemInfo);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIPanel___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___, v7);
    sub_1BC3008(&System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__, v12);
    sub_1BC3008(&BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo, v13);
    byte_4AFD719 = 1;
  }
  v14 = sub_1BC3254(BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_37;
  *(_QWORD *)(v14 + 16) = itemInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)itemInfo, v17, v18);
  BattleCharaChangeConfirmListViewManager__DestroyList(this, v19);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_37;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         transform,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_37;
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_37;
      v22 = *((float *)&Component_object[20].monitor + 1);
      v23 = *(float *)&Component_object[21].klass;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_37;
      v53.fields.x = -v22;
      v53.fields.y = -v23;
      v53.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v53, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_37;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  p_objectList = (System_Collections_Generic_List_object__o **)&this->fields.objectList;
  objectList = this->fields.objectList;
  v26 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
  v28 = (struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v27,
                                                                                              (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
  this->fields.objectList = v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v28, v29, v30);
  transform = (UnityEngine_Component_o *)this->fields.dummyStart;
  if ( !transform )
    goto LABEL_37;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_37;
  *(UnityEngine_Vector3_o *)(&v31 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  dummyStart = this->fields.dummyStart;
  if ( !dummyStart )
    goto LABEL_37;
  transform = (UnityEngine_Component_o *)*p_objectList;
  if ( !*p_objectList )
    goto LABEL_37;
  v33 = 0;
  v34 = v31 - (float)dummyStart->fields.mHeight;
  while ( 1 )
  {
    klass = (int32_t)transform[1].klass;
    if ( v33 >= klass )
      break;
    if ( v33 )
    {
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)transform,
                                               v33 - 1,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !*p_objectList )
        goto LABEL_37;
      v36 = (BattleCharaChangeConfirmListViewObject_o *)transform;
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               *p_objectList,
                                               v33,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !v36 )
        goto LABEL_37;
      v37 = transform;
      v38 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(v36, v16);
      v40 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v36, v39);
      v41 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v42 = v40;
      if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
        v41 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v43 = (float)(v38 - v42) - v41->static_fields->ObjectOffsetY;
    }
    else
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               0,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      v45 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v37 = (UnityEngine_Component_o *)Item;
      if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
        v45 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v43 = v34 - v45->static_fields->FirstObjectOffsetY;
    }
    ComponentHelper__SetLocalPositionY(v37, v43, 0LL);
    transform = (UnityEngine_Component_o *)*p_objectList;
    ++v33;
    if ( !*p_objectList )
      goto LABEL_37;
  }
  transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)transform,
                                           klass - 1,
                                           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
  if ( !transform )
LABEL_37:
    sub_1BC3264(transform, v16);
  v46 = (BattleCharaChangeConfirmListViewObject_o *)transform;
  v47 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(
          (BattleCharaChangeConfirmListViewObject_o *)transform,
          v16);
  v49 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v46, v48);
  v50 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  dummyEndObject = (UnityEngine_Component_o *)this->fields.dummyEndObject;
  v52 = v49;
  if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
    v50 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  }
  ComponentHelper__SetLocalPositionY(dummyEndObject, (float)(v47 - v52) - v50->static_fields->LastObjectOffsetY, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewManager__DestroyList(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0
  UIScrollView_o *v6; // x19

  if ( (byte_4AFD71A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD71A = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      goto LABEL_11;
    UIScrollView__DisableSpring(v5, 0LL);
    v6 = this->fields.scrollView;
    if ( !byte_4AFBDB1 )
    {
      v5 = (UIScrollView_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v4);
      byte_4AFBDB1 = 1;
    }
    if ( !v6 )
LABEL_11:
      sub_1BC3264(v5, v4);
    UIScrollView__set_currentMomentum(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
}


void __fastcall BattleCharaChangeConfirmListViewManager__OnMoveEnd(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4AFD71D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD71D = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v5 = this->fields.scrollView;
    if ( !v5
      || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v5->klass->vtable._8_UpdateScrollbars.method)(
            v5,
            1LL,
            v5->klass->vtable._9_SetDragAmount.methodPtr),
          (v5 = this->fields.scrollView) == 0LL) )
    {
      sub_1BC3264(v5, v4);
    }
    UIScrollView__UpdatePosition(v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewManager__RequestListObject(
        BattleCharaChangeConfirmListViewManager_o *this,
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
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *objectList; // x0
  Il2CppObject *current; // x21
  System_Action_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFD71C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__, v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__,
      v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__get_Current__,
      v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__, v9);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v10);
    byte_4AFD71C = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.objectList, 0LL) )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1BC3264(0LL, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)objectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__) )
    {
      current = v18.fields._current;
      v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v15, v16);
      BattleCharaChangeConfirmListViewObject__SetMode(
        (BattleCharaChangeConfirmListViewObject_o *)current,
        mode,
        v14,
        v17);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
  }
}


void __fastcall BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4AFD71B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD71B = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    UIScrollView__ResetPosition(v5, 0LL);
  }
}


void __fastcall BattleCharaChangeConfirmListViewManager__SetMode(
        BattleCharaChangeConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  if ( (unsigned int)(mode - 1) <= 2 )
    BattleCharaChangeConfirmListViewManager__RequestListObject(this, mode + 1, method);
}


void __fastcall BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0___ctor(
        BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0___CreateList_b__0(
        BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_o *this,
        BattleCharaChangeConfirmListViewObject_o *viewObj,
        const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewItem_o *itemInfo; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  bool v10; // w1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( !viewObj )
    sub_1BC3264(this, 0LL);
  BattleCharaChangeConfirmListViewObject__Init(viewObj, (const MethodInfo *)viewObj);
  itemInfo = this->fields.itemInfo;
  viewObj->fields.itemInfo = itemInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&viewObj->fields.itemInfo, (int32_t)itemInfo, v6, v7);
  BattleCharaChangeConfirmListViewObject__SetMode(viewObj, 2, 0LL, v8);
  v10 = BattleCharaChangeConfirmListViewObject__GetKind(viewObj, v9) != 0;
  BattleCharaChangeConfirmListViewObject__SetVisible(viewObj, v10, v11);
  return BattleCharaChangeConfirmListViewObject__IsActive(viewObj, v12);
}