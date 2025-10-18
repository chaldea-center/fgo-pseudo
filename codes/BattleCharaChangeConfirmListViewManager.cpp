void BattleCharaChangeConfirmListViewManager___cctor(const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4C3E272 & 1) == 0 )
  {
    sub_1C37058(&BattleCharaChangeConfirmListViewManager_TypeInfo);
    byte_4C3E272 = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ObjectOffsetY = 0x40E0000041000000LL;
  static_fields->LastObjectOffsetY = 2.0;
}


void BattleCharaChangeConfirmListViewManager___ctor(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCharaChangeConfirmListViewManager__Awake(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCharaChangeConfirmListViewManager__CreateList(
        BattleCharaChangeConfirmListViewManager_o *this,
        BattleCharaChangeConfirmListViewItem_o *itemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *transform; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *scrollView; // x20
  Il2CppObject *Component_object; // x20
  float v12; // s8
  float v13; // s9
  System_Collections_Generic_List_object__o **p_objectList; // x20
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *objectList; // x22
  System_Func_object__bool__o *v16; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UISprite_o *dummyStart; // x8
  int32_t v22; // w21
  float v23; // s10
  int32_t klass; // w8
  BattleCharaChangeConfirmListViewObject_o *v25; // x23
  const MethodInfo *v26; // x1
  UnityEngine_Component_o *v27; // x22
  float v28; // s8
  const MethodInfo *v29; // x1
  float v30; // s0
  BattleCharaChangeConfirmListViewManager_c *v31; // x0
  float v32; // s9
  float v33; // s0
  Il2CppObject *Item; // x0
  BattleCharaChangeConfirmListViewManager_c *v35; // x8
  const MethodInfo *v36; // x1
  BattleCharaChangeConfirmListViewObject_o *v37; // x20
  float v38; // s8
  const MethodInfo *v39; // x1
  float v40; // s0
  BattleCharaChangeConfirmListViewManager_c *v41; // x0
  UnityEngine_Component_o *dummyEndObject; // x19
  float v43; // s9
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E26D & 1) == 0 )
  {
    sub_1C37058(&BattleCharaChangeConfirmListViewManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
    sub_1C37058(&System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__);
    sub_1C37058(&BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
    byte_4C3E26D = 1;
  }
  v5 = sub_1C372A4(BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = itemInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)itemInfo, v7, v8);
  BattleCharaChangeConfirmListViewManager__DestroyList(this, v9);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_37;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         transform,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_37;
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_37;
      v12 = *((float *)&Component_object[20].monitor + 1);
      v13 = *(float *)&Component_object[21].klass;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_37;
      v44.fields.x = -v12;
      v44.fields.y = -v13;
      v44.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v44, 0);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_37;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  p_objectList = (System_Collections_Generic_List_object__o **)&this->fields.objectList;
  objectList = this->fields.objectList;
  v16 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
  v18 = (struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v17,
                                                                                              (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
  this->fields.objectList = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v18, v19, v20);
  transform = (UnityEngine_Component_o *)this->fields.dummyStart;
  if ( !transform )
    goto LABEL_37;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_37;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  dummyStart = this->fields.dummyStart;
  if ( !dummyStart )
    goto LABEL_37;
  transform = (UnityEngine_Component_o *)*p_objectList;
  if ( !*p_objectList )
    goto LABEL_37;
  v22 = 0;
  v23 = localPosition.fields.y - (float)dummyStart->fields.mHeight;
  while ( 1 )
  {
    klass = (int32_t)transform[1].klass;
    if ( v22 >= klass )
      break;
    if ( v22 )
    {
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)transform,
                                               v22 - 1,
                                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !*p_objectList )
        goto LABEL_37;
      v25 = (BattleCharaChangeConfirmListViewObject_o *)transform;
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               *p_objectList,
                                               v22,
                                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !v25 )
        goto LABEL_37;
      v27 = transform;
      v28 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(v25, v26);
      v30 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v25, v29);
      v31 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v32 = v30;
      if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
        v31 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v33 = (float)(v28 - v32) - v31->static_fields->ObjectOffsetY;
    }
    else
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               0,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      v35 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v27 = (UnityEngine_Component_o *)Item;
      if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
        v35 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v33 = v23 - v35->static_fields->FirstObjectOffsetY;
    }
    ComponentHelper__SetLocalPositionY(v27, v33, 0);
    transform = (UnityEngine_Component_o *)*p_objectList;
    ++v22;
    if ( !*p_objectList )
      goto LABEL_37;
  }
  transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)transform,
                                           klass - 1,
                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
  if ( !transform )
LABEL_37:
    sub_1C372B4(transform);
  v37 = (BattleCharaChangeConfirmListViewObject_o *)transform;
  v38 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(
          (BattleCharaChangeConfirmListViewObject_o *)transform,
          v36);
  v40 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v37, v39);
  v41 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  dummyEndObject = (UnityEngine_Component_o *)this->fields.dummyEndObject;
  v43 = v40;
  if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
    v41 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  }
  ComponentHelper__SetLocalPositionY(dummyEndObject, (float)(v38 - v43) - v41->static_fields->LastObjectOffsetY, 0);
}


void BattleCharaChangeConfirmListViewManager__DestroyList(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v4; // x0
  UIScrollView_o *v5; // x19

  if ( (byte_4C3E26E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E26E = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v4 = this->fields.scrollView;
    if ( !v4 )
      goto LABEL_11;
    UIScrollView__DisableSpring(v4, 0);
    v5 = this->fields.scrollView;
    if ( !byte_4C3C921 )
    {
      v4 = (UIScrollView_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v5 )
LABEL_11:
      sub_1C372B4(v4);
    UIScrollView__set_currentMomentum(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


void BattleCharaChangeConfirmListViewManager__OnMoveEnd(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v4; // x0

  if ( (byte_4C3E271 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E271 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v4 = this->fields.scrollView;
    if ( !v4
      || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v4->klass->vtable._8_UpdateScrollbars.methodPtr)(
            v4,
            1,
            v4->klass->vtable._8_UpdateScrollbars.method),
          (v4 = this->fields.scrollView) == 0) )
    {
      sub_1C372B4(v4);
    }
    UIScrollView__UpdatePosition(v4, 0);
  }
}


void BattleCharaChangeConfirmListViewManager__RequestListObject(
        BattleCharaChangeConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *objectList; // x0
  Il2CppObject *current; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3E270 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E270 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.objectList, 0) )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1C372B4(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)objectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__) )
    {
      current = v10.fields._current;
      v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v8);
      BattleCharaChangeConfirmListViewObject__SetMode((BattleCharaChangeConfirmListViewObject_o *)current, mode, v7, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
  }
}


void BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v4; // x0

  if ( (byte_4C3E26F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E26F = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v4 = this->fields.scrollView;
    if ( !v4 )
      sub_1C372B4(0);
    UIScrollView__ResetPosition(v4, 0);
  }
}


void BattleCharaChangeConfirmListViewManager__SetMode(
        BattleCharaChangeConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  if ( (unsigned int)(mode - 1) <= 2 )
    BattleCharaChangeConfirmListViewManager__RequestListObject(this, mode + 1, method);
}


void BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0___ctor(
        BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0___CreateList_b__0(
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
    sub_1C372B4(this);
  BattleCharaChangeConfirmListViewObject__Init(viewObj, (const MethodInfo *)viewObj);
  itemInfo = this->fields.itemInfo;
  viewObj->fields.itemInfo = itemInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&viewObj->fields.itemInfo, (int32_t)itemInfo, v6, v7);
  BattleCharaChangeConfirmListViewObject__SetMode(viewObj, 2, 0, v8);
  v10 = BattleCharaChangeConfirmListViewObject__GetKind(viewObj, v9) != 0;
  BattleCharaChangeConfirmListViewObject__SetVisible(viewObj, v10, v11);
  return BattleCharaChangeConfirmListViewObject__IsActive(viewObj, v12);
}