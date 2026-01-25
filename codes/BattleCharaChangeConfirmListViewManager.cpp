void BattleCharaChangeConfirmListViewManager___cctor(const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4CE9780 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCharaChangeConfirmListViewManager_TypeInfo);
    byte_4CE9780 = 1;
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *scrollView; // x20
  Il2CppObject *Component_object; // x20
  float v17; // s8
  float v18; // s9
  System_Collections_Generic_List_object__o **p_objectList; // x20
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *objectList; // x22
  System_Func_object__bool__o *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct UISprite_o *dummyStart; // x8
  int32_t v31; // w21
  float v32; // s10
  int32_t klass; // w8
  BattleCharaChangeConfirmListViewObject_o *v34; // x23
  UnityEngine_Component_o *v35; // x22
  float v36; // s8
  float v37; // s0
  BattleCharaChangeConfirmListViewManager_c *v38; // x0
  float v39; // s9
  float v40; // s0
  Il2CppObject *Item; // x0
  BattleCharaChangeConfirmListViewManager_c *v42; // x8
  BattleCharaChangeConfirmListViewObject_o *v43; // x20
  float v44; // s8
  float v45; // s0
  BattleCharaChangeConfirmListViewManager_c *v46; // x0
  UnityEngine_Component_o *dummyEndObject; // x19
  float v48; // s9
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE977B & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCharaChangeConfirmListViewManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
    sub_1C7BAE8(&System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__);
    sub_1C7BAE8(&BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
    byte_4CE977B = 1;
  }
  v5 = sub_1C7BD34(BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
  BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0___ctor(
    (BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = itemInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)itemInfo, v8, v9, v10, v11, v12, v13);
  BattleCharaChangeConfirmListViewManager__DestroyList(this, v14);
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
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v17 = *((float *)&Component_object[20].monitor + 1);
      v18 = *(float *)&Component_object[21].klass;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_37;
      v49.fields.x = -v17;
      v49.fields.y = -v18;
      v49.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v49, 0);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_37;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  p_objectList = (System_Collections_Generic_List_object__o **)&this->fields.objectList;
  objectList = this->fields.objectList;
  v21 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__,
    0);
  v22 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
  v23 = (struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v22,
                                                                                              (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
  this->fields.objectList = v23;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v23, v24, v25, v26, v27, v28, v29);
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
  v31 = 0;
  v32 = localPosition.fields.y - (float)dummyStart->fields.mHeight;
  while ( 1 )
  {
    klass = (int32_t)transform[1].klass;
    if ( v31 >= klass )
      break;
    if ( v31 )
    {
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)transform,
                                               v31 - 1,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !*p_objectList )
        goto LABEL_37;
      v34 = (BattleCharaChangeConfirmListViewObject_o *)transform;
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               *p_objectList,
                                               v31,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !v34 )
        goto LABEL_37;
      v35 = transform;
      v36 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(v34, 0);
      v37 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v34, 0);
      v38 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v39 = v37;
      if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
        v38 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v40 = (float)(v36 - v39) - v38->static_fields->ObjectOffsetY;
    }
    else
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               0,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      v42 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v35 = (UnityEngine_Component_o *)Item;
      if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
        v42 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v40 = v32 - v42->static_fields->FirstObjectOffsetY;
    }
    ComponentHelper__SetLocalPositionY(v35, v40, 0);
    transform = (UnityEngine_Component_o *)*p_objectList;
    ++v31;
    if ( !*p_objectList )
      goto LABEL_37;
  }
  transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)transform,
                                           klass - 1,
                                           (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
  if ( !transform )
LABEL_37:
    sub_1C7BD40(transform, v7);
  v43 = (BattleCharaChangeConfirmListViewObject_o *)transform;
  v44 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(
          (BattleCharaChangeConfirmListViewObject_o *)transform,
          0);
  v45 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v43, 0);
  v46 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  dummyEndObject = (UnityEngine_Component_o *)this->fields.dummyEndObject;
  v48 = v45;
  if ( !BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo);
    v46 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  }
  ComponentHelper__SetLocalPositionY(dummyEndObject, (float)(v44 - v48) - v46->static_fields->LastObjectOffsetY, 0);
}


void BattleCharaChangeConfirmListViewManager__DestroyList(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0
  UIScrollView_o *v6; // x19

  if ( (byte_4CE977C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE977C = 1;
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
    if ( !byte_4CE7E59 )
    {
      v5 = (UIScrollView_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    if ( !v6 )
LABEL_11:
      sub_1C7BD40(v5, v4);
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

  if ( (byte_4CE977F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE977F = 1;
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
      sub_1C7BD40(v5, v4);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CE977E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE977E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.objectList, 0) )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1C7BD40(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)objectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v9, v10);
      BattleCharaChangeConfirmListViewObject__SetMode((BattleCharaChangeConfirmListViewObject_o *)current, mode, v8, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
  }
}


void BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4CE977D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE977D = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      sub_1C7BD40(0, v4);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  bool v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  if ( !viewObj )
    sub_1C7BD40(this, 0);
  BattleCharaChangeConfirmListViewObject__Init(viewObj, (const MethodInfo *)viewObj);
  itemInfo = this->fields.itemInfo;
  viewObj->fields.itemInfo = itemInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&viewObj->fields.itemInfo, (int32_t)itemInfo, v6, v7, v8, v9, v10, v11);
  BattleCharaChangeConfirmListViewObject__SetMode(viewObj, 2, 0, v12);
  v14 = BattleCharaChangeConfirmListViewObject__GetKind(viewObj, v13) != 0;
  BattleCharaChangeConfirmListViewObject__SetVisible(viewObj, v14, v15);
  return BattleCharaChangeConfirmListViewObject__IsActive(viewObj, v16);
}