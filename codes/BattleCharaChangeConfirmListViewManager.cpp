void BattleCharaChangeConfirmListViewManager___cctor(const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewManager_StaticFields *static_fields; // x8

  if ( (byte_5933953 & 1) == 0 )
  {
    sub_21FFC50(&BattleCharaChangeConfirmListViewManager_TypeInfo);
    byte_5933953 = 1;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Component_object; // x20
  float v21; // s8
  float v22; // s9
  System_Collections_Generic_List_object__o **p_objectList; // x20
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *objectList; // x22
  System_Func_object__bool__o *v25; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct UISprite_o *dummyStart; // x8
  int32_t v35; // w21
  float v36; // s10
  int32_t klass; // w8
  BattleCharaChangeConfirmListViewObject_o *v38; // x23
  UnityEngine_Component_o *v39; // x22
  float v40; // s8
  const MethodInfo *v41; // x1
  __int64 v42; // x1
  __int64 v43; // x2
  float v44; // s0
  BattleCharaChangeConfirmListViewManager_c *v45; // x0
  float v46; // s9
  float v47; // s0
  Il2CppObject *Item; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  BattleCharaChangeConfirmListViewManager_c *v51; // x8
  BattleCharaChangeConfirmListViewObject_o *v52; // x20
  float v53; // s8
  const MethodInfo *v54; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  float v57; // s0
  BattleCharaChangeConfirmListViewManager_c *v58; // x0
  float v59; // s9
  UnityEngine_Component_o *dummyEndObject; // x19
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593394E & 1) == 0 )
  {
    sub_21FFC50(&BattleCharaChangeConfirmListViewManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
    sub_21FFC50(&System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__);
    sub_21FFC50(&BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
    byte_593394E = 1;
  }
  v5 = sub_21FFEBC(BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = itemInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)itemInfo, v8, v9, v10, v11, v12, v13);
  BattleCharaChangeConfirmListViewManager__DestroyList(this, v14);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_32;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         transform,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_32;
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_32;
      v21 = *((float *)&Component_object[20].monitor + 1);
      v22 = *(float *)&Component_object[21].klass;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_32;
      v61.fields.x = -v21;
      v61.fields.y = -v22;
      v61.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v61, 0);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_32;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  p_objectList = (System_Collections_Generic_List_object__o **)&this->fields.objectList;
  objectList = this->fields.objectList;
  v25 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleCharaChangeConfirmListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v5,
    Method_BattleCharaChangeConfirmListViewManager___c__DisplayClass10_0__CreateList_b__0__,
    0);
  v26 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewObject___);
  v27 = (struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v26,
                                                                                              (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_BattleCharaChangeConfirmListViewObject___);
  this->fields.objectList = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  transform = (UnityEngine_Component_o *)this->fields.dummyStart;
  if ( !transform )
    goto LABEL_32;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_32;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  dummyStart = this->fields.dummyStart;
  if ( !dummyStart )
    goto LABEL_32;
  transform = (UnityEngine_Component_o *)*p_objectList;
  if ( !*p_objectList )
    goto LABEL_32;
  v35 = 0;
  v36 = localPosition.fields.y - (float)dummyStart->fields.mHeight;
  while ( 1 )
  {
    klass = (int32_t)transform[1].klass;
    if ( v35 >= klass )
      break;
    if ( v35 )
    {
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)transform,
                                               v35 - 1,
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !*p_objectList )
        goto LABEL_32;
      v38 = (BattleCharaChangeConfirmListViewObject_o *)transform;
      transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                               *p_objectList,
                                               v35,
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      if ( !v38 )
        goto LABEL_32;
      v39 = transform;
      v40 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(v38, v7);
      v44 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v38, v41);
      v45 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v46 = v44;
      if ( !*(&BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo, v42, v43);
        v45 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v47 = (float)(v40 - v46) - v45->static_fields->ObjectOffsetY;
    }
    else
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
      v51 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      v39 = (UnityEngine_Component_o *)Item;
      if ( !*(&BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo, v49, v50);
        v51 = BattleCharaChangeConfirmListViewManager_TypeInfo;
      }
      v47 = v36 - v51->static_fields->FirstObjectOffsetY;
    }
    ComponentHelper__SetLocalPositionY(v39, v47, 0);
    transform = (UnityEngine_Component_o *)*p_objectList;
    ++v35;
    if ( !*p_objectList )
      goto LABEL_32;
  }
  transform = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)transform,
                                           klass - 1,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__get_Item__);
  if ( !transform )
LABEL_32:
    sub_21FFECC(transform, v7);
  v52 = (BattleCharaChangeConfirmListViewObject_o *)transform;
  v53 = BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(
          (BattleCharaChangeConfirmListViewObject_o *)transform,
          v7);
  v57 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(v52, v54);
  v58 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  v59 = v57;
  dummyEndObject = (UnityEngine_Component_o *)this->fields.dummyEndObject;
  if ( !*(&BattleCharaChangeConfirmListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewManager_TypeInfo, v55, v56);
    v58 = BattleCharaChangeConfirmListViewManager_TypeInfo;
  }
  ComponentHelper__SetLocalPositionY(dummyEndObject, (float)(v53 - v59) - v58->static_fields->LastObjectOffsetY, 0);
}


void BattleCharaChangeConfirmListViewManager__DestroyList(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0
  UIScrollView_o *v7; // x19

  if ( (byte_593394F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593394F = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_11;
    UIScrollView__DisableSpring(v6, 0);
    v7 = this->fields.scrollView;
    if ( !byte_5931940 )
    {
      v6 = (UIScrollView_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    if ( !v7 )
LABEL_11:
      sub_21FFECC(v6, v5);
    UIScrollView__set_currentMomentum(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


void BattleCharaChangeConfirmListViewManager__OnMoveEnd(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0

  if ( (byte_5933952 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933952 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6
      || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v6->klass->vtable._8_UpdateScrollbars.methodPtr)(
            v6,
            1,
            v6->klass->vtable._8_UpdateScrollbars.method),
          (v6 = this->fields.scrollView) == 0) )
    {
      sub_21FFECC(v6, v5);
    }
    UIScrollView__UpdatePosition(v6, 0);
  }
}


void BattleCharaChangeConfirmListViewManager__RequestListObject(
        BattleCharaChangeConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *objectList; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__o *v7; // x0
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  __int64 v13; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5933951 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5933951 = 1;
  }
  objectList = (System_Collections_ICollection_o *)this->fields.objectList;
  memset(&v15, 0, sizeof(v15));
  if ( BasicHelper__IsNullOrEmpty(objectList, 0) )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v7 = this->fields.objectList;
    if ( !v7 )
      sub_21FFECC(0, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)v7,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleCharaChangeConfirmListViewObject__GetEnumerator__);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleCharaChangeConfirmListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v10, v11);
      BattleCharaChangeConfirmListViewObject__SetMode(
        (BattleCharaChangeConfirmListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleCharaChangeConfirmListViewObject__Dispose__);
  }
}


void BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
        BattleCharaChangeConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0

  if ( (byte_5933950 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933950 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      sub_21FFECC(0, v5);
    UIScrollView__ResetPosition(v6, 0);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  bool v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  if ( !viewObj )
    sub_21FFECC(this, 0);
  BattleCharaChangeConfirmListViewObject__Init(viewObj, (const MethodInfo *)viewObj);
  itemInfo = this->fields.itemInfo;
  viewObj->fields.itemInfo = itemInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&viewObj->fields.itemInfo,
    (int32_t)itemInfo,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BattleCharaChangeConfirmListViewObject__SetMode(viewObj, 2, 0, v12);
  v14 = BattleCharaChangeConfirmListViewObject__GetKind(viewObj, v13) != 0;
  BattleCharaChangeConfirmListViewObject__SetVisible(viewObj, v14, v15);
  return BattleCharaChangeConfirmListViewObject__IsActive(viewObj, v16);
}