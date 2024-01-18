void __fastcall MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189CC4 & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionReceiveConfirmListViewManager_TypeInfo, v1);
    byte_4189CC4 = 1;
  }
  MasterMissionReceiveConfirmListViewManager_TypeInfo->static_fields->LIST_BLANK = 5;
}


void __fastcall MasterMissionReceiveConfirmListViewManager___ctor(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4189CC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v3);
    byte_4189CC3 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.isInput = 1;
  this->fields.initialScrollPosition = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__CreateList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *confirmItemList,
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
  UnityEngine_Object_o *scrollView; // x21
  __int64 v14; // x1
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  float v17; // s8
  float v18; // s9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t size; // w8
  unsigned __int64 v27; // x25
  signed __int64 v28; // x26
  struct UnityEngine_GameObject_o *prefabObject; // x21
  MissionListViewItem_o *v30; // x22
  UnityEngine_Object_o *v31; // x21
  System_Int32_array **condMsg; // x23
  UnityEngine_Component_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  intptr_t monitor_high; // w22
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  UnityEngine_Object_o *v43; // x20
  UnityEngine_Object_o *v44; // x20
  float width; // s8
  float height; // s0
  struct UIScrollView_o *v47; // x8
  __int64 v48; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o basePosition; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189CC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, confirmItemList);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4189CC0 = 1;
  }
  basePosition.fields.z = 0.0;
  *(_QWORD *)&basePosition.fields.x = 0LL;
  MasterMissionReceiveConfirmListViewManager__DestroyList(this, (const MethodInfo *)confirmItemList);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_51;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                transform,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_WebViewObject,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_51;
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_51;
      v17 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v18 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_51;
      v50.fields.x = -v17;
      v50.fields.y = -v18;
      v50.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v50, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_51;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_QWORD *)&basePosition.fields.x = 0LL;
  basePosition.fields.z = 0.0;
  if ( !confirmItemList )
    goto LABEL_51;
  size = confirmItemList->fields._size;
  if ( size >= 1 )
  {
    v48 = size - 1;
    v27 = 0LL;
    v28 = size;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      prefabObject = this->fields.prefabObject;
      v30 = (MissionListViewItem_o *)confirmItemList->fields._items->m_Items[v27];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v31 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabObject,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_51;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)v31,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v30 )
          goto LABEL_51;
        condMsg = (System_Int32_array **)v30->fields.condMsg;
        v33 = transform;
        transform = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(v30, 0LL);
        if ( !transform )
          goto LABEL_51;
        if ( !v33 )
          goto LABEL_51;
        monitor_high = HIDWORD(transform[3].monitor);
        v33[1].monitor = condMsg;
        sub_B2C2F8((BattleServantConfConponent_o *)&v33[1].monitor, condMsg, v34, v35, v36, v37, v38, v39);
        v33[1].fields.m_CachedPtr = monitor_high;
        *((_BYTE *)&v33[1].fields + 4) = (__int64)v27 < v48;
        MasterMissionReceiveConfirmListViewObject__Init((MasterMissionReceiveConfirmListViewObject_o *)v33, 2, v41);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
          this,
          &basePosition,
          (MasterMissionReceiveConfirmListViewObject_o *)v33,
          v42);
        transform = (UnityEngine_Component_o *)this->fields.objectList;
        if ( !transform )
          goto LABEL_51;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__);
      }
      if ( (__int64)++v27 >= v28 )
        break;
      size = confirmItemList->fields._size;
    }
  }
  v43 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_51;
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    transform,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v44 )
        goto LABEL_51;
      width = UIPanel__get_width((UIPanel_o *)v44, 0LL);
      height = UIPanel__get_height((UIPanel_o *)v44, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      this->fields.scrollViewSize.fields.x = width;
      this->fields.scrollViewSize.fields.y = height;
      if ( !transform )
        goto LABEL_51;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_51;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
      v47 = this->fields.scrollView;
      this->fields.initialScrollPosition = localPosition;
      if ( !v47 )
        goto LABEL_51;
      HIDWORD(v47->fields.onDragStarted) = 1;
    }
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      return;
    }
LABEL_51:
    sub_B2C434(transform, v14);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__DestroyList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4189CBF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4189CBF = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v13.fields.current )
      sub_B2C434(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v13.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_B2C434(objectList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__RequestListObject(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189CC2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__, v8);
    byte_4189CC2 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      objectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v12.fields.current )
        sub_B2C434(0LL, v10);
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v12.fields.current,
        mode,
        v11);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__SetMode(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  MasterMissionReceiveConfirmListViewManager__set_IsInput(this, mode == 1, method);
  if ( mode == 1 )
  {
    v6 = 3;
  }
  else
  {
    if ( mode != 2 )
      return;
    v6 = 2;
  }
  MasterMissionReceiveConfirmListViewManager__RequestListObject(this, v6, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
        MasterMissionReceiveConfirmListViewManager_o *this,
        UnityEngine_Vector3_o *basePosition,
        MasterMissionReceiveConfirmListViewObject_o *obj,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmListViewManager_o *v6; // x22
  int32_t Size; // w20
  UnityEngine_Transform_o *v8; // x23
  UnityEngine_Transform_o *transform; // x23
  int v10; // s0
  UnityEngine_Transform_o *v14; // x23
  int v15; // s0
  UnityEngine_GameObject_o *v18; // x23
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  float y; // s8
  MasterMissionReceiveConfirmListViewManager_c *v22; // x0

  v6 = this;
  if ( (byte_4189CC1 & 1) == 0 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_B2C35C(
                                                             &MasterMissionReceiveConfirmListViewManager_TypeInfo,
                                                             basePosition);
    byte_4189CC1 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  Size = MasterMissionReceiveConfirmListViewObject__GetSize(obj, (const MethodInfo *)basePosition);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0LL);
  if ( !v6->fields.listParent )
    goto LABEL_15;
  v8 = (UnityEngine_Transform_o *)this;
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           v6->fields.listParent,
                                                           0LL);
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)this, 0LL);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0LL);
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePosition, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v10, 0LL),
        v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL),
        !v14)
    || (UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)obj,
                                                                 0LL),
        !v6->fields.listParent)
    || (v18 = (UnityEngine_GameObject_o *)this,
        this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_layer(
                                                                 v6->fields.listParent,
                                                                 0LL),
        !v18) )
  {
LABEL_15:
    sub_B2C434(this, basePosition);
  }
  UnityEngine_GameObject__set_layer(v18, (int32_t)this, 0LL);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(obj, v19);
  MasterMissionReceiveConfirmListViewObject__SetManager(obj, v6, v20);
  y = basePosition->fields.y;
  v22 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  if ( (BYTE3(MasterMissionReceiveConfirmListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionReceiveConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewManager_TypeInfo);
    v22 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  }
  basePosition->fields.y = y - (float)(v22->static_fields->LIST_BLANK + Size);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__add_callbackFunc(
        MasterMissionReceiveConfirmListViewManager_o *this,
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4189CBA & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo, value);
    byte_4189CBA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MasterMissionReceiveConfirmListViewManager_CallbackFunc_c *)v8->klass != MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  MasterMissionReceiveConfirmListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__add_callbackFunc2(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4189CBC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4189CBC = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  MasterMissionReceiveConfirmListViewManager__remove_callbackFunc2(v11, v12, v13);
}


bool __fastcall MasterMissionReceiveConfirmListViewManager__get_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void __fastcall MasterMissionReceiveConfirmListViewManager__remove_callbackFunc(
        MasterMissionReceiveConfirmListViewManager_o *this,
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4189CBB & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo, value);
    byte_4189CBB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MasterMissionReceiveConfirmListViewManager_CallbackFunc_c *)v8->klass != MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  MasterMissionReceiveConfirmListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__remove_callbackFunc2(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4189CBD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4189CBD = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  MasterMissionReceiveConfirmListViewManager__get_IsInput(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__set_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  if ( (byte_4189CBE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, value);
    byte_4189CBE = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_B2C434(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc___ctor(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__BeginInvoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__EndInvoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__Invoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}