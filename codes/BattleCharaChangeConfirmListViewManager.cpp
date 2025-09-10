void BattleCharaChangeConfirmListViewManager___cctor(const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4C227BB & 1) == 0 )
  {
    sub_1C2D490(&BattleCharaChangeConfirmListViewManager_TypeInfo);
    byte_4C227BB = 1;
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
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *scrollView; // x20
  Il2CppObject *Component_object; // x20
  float v13; // s8
  float v14; // s9
  System_Collections_Generic_List_object__o **p_objectList; // x20
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *objectList; // x22
  System_Func_object__bool__o *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UISprite_o *dummyStart; // x8
  int32_t v23; // w21
  float v24; // s10
  int32_t klass; // w8
  BattleCharaChangeConfirmListViewObject_o *v26; // x23
  UnityEngine_Component_o *v27; // x22
  float v28; // s8
  const MethodInfo *v29; // x1
  float v30; // s0
  BattleCharaChangeConfirmListViewManager_c *v31; // x0
  float v32; // s9
  float v33; // s0
  Il2CppObject *Item; // x0
  BattleCharaChangeConfirmListViewManager_c *v35; // x8
  BattleCharaChangeConfirmListViewObject_o *v36; // x20
  float v37; // s8
  const MethodInfo *v38; // x1
  float v39; // s0
  BattleCharaChangeConfirmListViewManager_c *v40; // x0
  UnityEngine_Component_o *dummyEndObject; // x19
  float v42; // s9
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C227B6 & 1) == 0 )
  {
    sub_1C2D490(&BattleCharaChangeConfirmListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
    sub_1C2D490(&System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__);
    sub_1C2D490(&BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
    byte_4C227B6 = 1;
  }
  v5 = sub_1C2D6DC(BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = itemInfo;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)itemInfo, v8, v9);
  BattleCharaChangeConfirmListViewManager__DestroyList(this, v10);
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
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v13 = *((float *)&Component_object[20].monitor + 1);
      v14 = *(float *)&Component_object[21].klass;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_37;
      v43.fields.x = -v13;
      v43.fields.y = -v14;
      v43.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v43, 0);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_37;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  p_objectList = (System_Collections_Generic_List_object__o **)&this->fields.objectList;
  objectList = this->fields.objectList;
  v17 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
  v19 = (struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v18,
                                                                                              (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
  this->fields.objectList = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v19, v20, v21);
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
  v23 = 0;
  v24 = localPosition.fields.y - (float)dummyStart->fields.mHeight;
  while ( 1 )
  {
    klass = (int32_t)transform[1].klass;
    if ( v23 >= klass )
      break;
    if ( v23 )
    {
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)transform,
                                               v23 - 1,
                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !*p_objectList )
        goto LABEL_37;
      v26 = (BattleCharaChangeConfirmListViewObject_o *)transform;
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               *p_objectList,
                                               v23,
                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !v26 )
        goto LABEL_37;
      v27 = transform;
      v28 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(v26, v7);
      v30 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v26, v29);
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      v35 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v27 = (UnityEngine_Component_o *)Item;
      if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
        v35 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v33 = v24 - v35->static_fields->FirstObjectOffsetY;
    }
    ComponentHelper__SetLocalPositionY(v27, v33, 0);
    transform = (UnityEngine_Component_o *)*p_objectList;
    ++v23;
    if ( !*p_objectList )
      goto LABEL_37;
  }
  transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)transform,
                                           klass - 1,
                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
  if ( !transform )
LABEL_37:
    sub_1C2D6EC(transform, v7);
  v36 = (BattleCharaChangeConfirmListViewObject_o *)transform;
  v37 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(
          (BattleCharaChangeConfirmListViewObject_o *)transform,
          v7);
  v39 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v36, v38);
  v40 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  dummyEndObject = (UnityEngine_Component_o *)this->fields.dummyEndObject;
  v42 = v39;
  if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
    v40 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  }
  ComponentHelper__SetLocalPositionY(dummyEndObject, (float)(v37 - v42) - v40->static_fields->LastObjectOffsetY, 0);
}


void BattleCharaChangeConfirmListViewManager__DestroyList(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0
  UIScrollView_o *v6; // x19

  if ( (byte_4C227B7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C227B7 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      goto LABEL_11;
    UIScrollView__DisableSpring(v5, 0);
    v6 = this->fields.scrollView;
    if ( !byte_4C20DA1 )
    {
      v5 = (UIScrollView_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v6 )
LABEL_11:
      sub_1C2D6EC(v5, v4);
    UIScrollView__set_currentMomentum(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


void BattleCharaChangeConfirmListViewManager__OnMoveEnd(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4C227BA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C227BA = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v5 = this->fields.scrollView;
    if ( !v5
      || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v5->klass->vtable._8_UpdateScrollbars.methodPtr)(
            v5,
            1,
            v5->klass->vtable._8_UpdateScrollbars.method),
          (v5 = this->fields.scrollView) == 0) )
    {
      sub_1C2D6EC(v5, v4);
    }
    UIScrollView__UpdatePosition(v5, 0);
  }
}


void BattleCharaChangeConfirmListViewManager__RequestListObject(
        BattleCharaChangeConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *objectList; // x0
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C227B9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C227B9 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.objectList, 0) )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1C2D6EC(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)objectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v9, v10);
      BattleCharaChangeConfirmListViewObject__SetMode(
        (BattleCharaChangeConfirmListViewObject_o *)current,
        mode,
        v8,
        v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
  }
}


void BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4C227B8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C227B8 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    UIScrollView__ResetPosition(v5, 0);
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
    sub_1C2D6EC(this, 0);
  BattleCharaChangeConfirmListViewObject__Init(viewObj, (const MethodInfo *)viewObj);
  itemInfo = this->fields.itemInfo;
  viewObj->fields.itemInfo = itemInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&viewObj->fields.itemInfo, (int32_t)itemInfo, v6, v7);
  BattleCharaChangeConfirmListViewObject__SetMode(viewObj, 2, 0, v8);
  v10 = BattleCharaChangeConfirmListViewObject__GetKind(viewObj, v9) != 0;
  BattleCharaChangeConfirmListViewObject__SetVisible(viewObj, v10, v11);
  return BattleCharaChangeConfirmListViewObject__IsActive(viewObj, v12);
}