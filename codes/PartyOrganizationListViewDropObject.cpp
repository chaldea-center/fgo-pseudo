void __fastcall PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDC96 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v1);
    byte_40FDC96 = 1;
  }
  LODWORD(PartyOrganizationListViewDropObject_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationListViewDropObject_StaticFields)1045220557;
}


void __fastcall PartyOrganizationListViewDropObject___ctor(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewDropObject__Awake(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct PartyOrganizationListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FDC7D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, method);
    byte_40FDC7D = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct PartyOrganizationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            dispObject,
                                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__ClearItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *itemDraw; // x20
  PartyOrganizationListViewItemDraw_o *v17; // x0

  if ( (byte_40FDC81 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDC81 = 1;
  }
  if ( this->fields.isBusy )
    return 0;
  this->fields.linkItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.callbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.state = 0;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v17 = this->fields.itemDraw;
    if ( !v17 )
      sub_B170D4();
    PartyOrganizationListViewItemDraw__ClearItem(v17, 0LL);
  }
  return 1;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  PartyOrganizationListViewDropObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v6; // x2
  PartyOrganizationListViewDropObject_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_40FDC86 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, method);
    byte_40FDC86 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = (PartyOrganizationListViewDropObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              DragObject,
                                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  v7 = Component_srcLineSprite;
  PartyOrganizationListViewDropObject__Init_32300096(Component_srcLineSprite, 2, v6);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v7, 1, v8);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject_32300304(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v7; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  PartyOrganizationListViewDropObject_o *v9; // x21
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v11; // x2
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  if ( (byte_40FDC87 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, *(_QWORD *)&addDepth);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FDC87 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_12;
  v7 = DragObject;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              DragObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_12;
  v9 = (PartyOrganizationListViewDropObject_o *)Component_srcLineSprite;
  monitor = (UnityEngine_Object_o *)Component_srcLineSprite[1].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    itemDraw = v9->fields.itemDraw;
    if ( itemDraw )
    {
      PartyOrganizationListViewItemDraw__AddDepth(itemDraw, addDepth, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
LABEL_11:
  PartyOrganizationListViewDropObject__Init_32300096(v9, 2, v11);
  return v7;
}


void __fastcall PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDC8E & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FDC8E = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__DragMoveStart(
        PartyOrganizationListViewDropObject_o *this,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  struct UnityEngine_GameObject_o *DragObject_32300304; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *v24; // x0
  PartyOrganizationListViewDropObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v26; // x2
  WebViewObject_o *Component_WebViewObject; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  struct UnityEngine_GameObject_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *v37; // x21
  PartyOrganizationListViewDropObject_c *v38; // x0
  UnityEngine_GameObject_o *v39; // x8
  float ACTION_TIME; // s11
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  float v43; // s4
  float v44; // s5
  float v45; // s3
  TweenPosition_o *v46; // x0
  TweenPosition_o *v47; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_40FDC8D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEquipSwap);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_9174/*"MoveEnd"*/, v12);
    byte_40FDC8D = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    if ( isEquipSwap )
    {
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v15);
      DragObject_32300304 = PartyOrganizationListViewDropObject__CreateDragObject_32300304(this, -100, v16);
      this->fields.dragObject = DragObject_32300304;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.dragObject,
        (System_Int32_array **)DragObject_32300304,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = this->fields.dragObject;
      if ( !v24 )
        goto LABEL_21;
      Component_srcLineSprite = (PartyOrganizationListViewDropObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           v24,
                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_21;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(Component_srcLineSprite, 1, v26);
    }
    else
    {
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_WebViewObject )
        goto LABEL_21;
      (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, float))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
        Component_WebViewObject,
        Component_WebViewObject->klass[1]._1.element_class,
        0.0);
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v28);
      v30 = PartyOrganizationListViewDropObject__CreateDragObject_32300304(this, -100, v29);
      this->fields.dragObject = v30;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.dragObject,
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
  }
  v37 = *p_dragObject;
  v38 = PartyOrganizationListViewDropObject_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo);
    v38 = PartyOrganizationListViewDropObject_TypeInfo;
    v39 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_21;
  }
  else
  {
    v39 = *p_dragObject;
    if ( !v37 )
      goto LABEL_21;
  }
  ACTION_TIME = v38->static_fields->ACTION_TIME;
  transform = UnityEngine_GameObject__get_transform(v39, 0LL);
  if ( !transform )
    goto LABEL_21;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_21;
  v62.fields.x = x;
  v62.fields.y = y;
  v62.fields.z = z;
  v63 = UnityEngine_Transform__InverseTransformPoint(parent, v62, 0LL);
  v43 = v63.fields.y;
  v44 = v63.fields.z;
  v63.fields.y = v63.fields.x;
  v63.fields.z = v43;
  v45 = v44;
  v46 = TweenPosition__Begin(v37, ACTION_TIME, *(UnityEngine_Vector3_o *)&v63.fields.y, 0LL);
  if ( !v46 )
LABEL_21:
    sub_B170D4();
  v47 = v46;
  v46->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v47->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v47->fields.eventReceiver, gameObject, v49, v50, v51, v52, v53, v54);
  v55 = (System_Int32_array **)StringLiteral_9174/*"MoveEnd"*/;
  v47->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9174/*"MoveEnd"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v47->fields.callWhenFinished, v55, v56, v57, v58, v59, v60, v61);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FDC7F & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, method);
    byte_40FDC7F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w23
  int32_t state; // w24
  __int64 v18; // x10
  int32_t v19; // w25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v21; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  MethodInfo *v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t v36; // w8
  int32_t v37; // w8
  int32_t v38; // w9
  System_Action_o *klass; // x19
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_40FDC88 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40FDC88 = 1;
  }
  if ( initMode == 10 )
  {
    PartyOrganizationListViewDropObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    if ( linkItem
      && (v18 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v18 - 1] == PartyOrganizationListViewItem_TypeInfo )
        v19 = initMode;
      else
        v19 = 0;
    }
    else
    {
      v19 = 0;
    }
    PartyOrganizationListViewDropObject__SetVisible(this, v19 != 0 && v19 != 5, (const MethodInfo *)callbackFunc);
    ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      (v19 == 4) | (unsigned int)(v19 == 8),
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(v21, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callbackFunc,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v36 = 1;
    switch ( v19 )
    {
      case 0:
      case 1:
      case 2:
        goto LABEL_17;
      case 3:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        PartyOrganizationListViewDropObject__IntoStart(this, delay, v29);
        return;
      case 4:
        v36 = 3;
        v19 = 2;
LABEL_17:
        this->fields.dispMode = v19;
        this->fields.state = v36;
        goto LABEL_18;
      case 5:
        v37 = 4;
        v38 = 2;
        goto LABEL_25;
      case 6:
        this->fields.state = 2;
        v40.fields.y = y;
        v40.fields.z = z;
        v40.fields.x = x;
        PartyOrganizationListViewDropObject__DragMoveStart(this, v40, isEquipSwap, v30);
        return;
      case 7:
        PartyOrganizationListViewDropObject__DragDelete(this, v29);
        return;
      case 8:
        v37 = 2;
        v38 = 3;
        goto LABEL_25;
      case 9:
        v37 = 2;
        v38 = 1;
LABEL_25:
        this->fields.dispMode = v37;
        this->fields.state = v38;
        goto LABEL_26;
      default:
LABEL_18:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_27;
LABEL_26:
        PartyOrganizationListViewDropObject__SetupDisp(this, v29);
LABEL_27:
        klass = (System_Action_o *)p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0LL;
          sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)v30, v31, v32, v33, v34, v35);
          System_Action__Invoke(klass, 0LL);
        }
        break;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_32300096(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  float y; // s4
  float z; // s5
  float v7; // s3
  const MethodInfo *v8; // x4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  y = zero.fields.y;
  z = zero.fields.z;
  zero.fields.y = zero.fields.x;
  zero.fields.z = y;
  v7 = z;
  PartyOrganizationListViewDropObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_32302580(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  float y; // s4
  float z; // s5
  float v11; // s3
  const MethodInfo *v12; // x4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  y = zero.fields.y;
  z = zero.fields.z;
  zero.fields.y = zero.fields.x;
  zero.fields.z = y;
  v11 = z;
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    0,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_32302688(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float y; // s4
  float z; // s5
  float v9; // s3
  const MethodInfo *v10; // x4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  y = zero.fields.y;
  z = zero.fields.z;
  zero.fields.y = zero.fields.x;
  zero.fields.z = y;
  v9 = z;
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    0,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__IntoMove(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v6; // x0
  int v7; // s0
  float y; // s4
  float z; // s5
  float v12; // s3
  TweenPosition_o *v13; // x0
  TweenPosition_o *v14; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDC8B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7689/*"IntoMove2"*/, method);
    byte_40FDC8B = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v6 )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(v6, 0LL);
  if ( !parent
    || (v29 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL),
        y = v29.fields.y,
        z = v29.fields.z,
        v29.fields.y = v29.fields.x,
        v29.fields.z = y,
        v12 = z,
        (v13 = TweenPosition__Begin(this->fields.dragObject, 1.5, *(UnityEngine_Vector3_o *)&v29.fields.y, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  v14 = v13;
  v13->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v14->fields.eventReceiver, gameObject, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_7689/*"IntoMove2"*/;
  v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_7689/*"IntoMove2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v14->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_40FDC8C & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FDC8C = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  PartyOrganizationListViewDropObject__MoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__IntoStart(
        PartyOrganizationListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v16; // x0
  int v17; // s0

  if ( (byte_40FDC8A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7688/*"IntoMove"*/, method);
    byte_40FDC8A = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__TransformPoint_34933176(v16, -3000.0, 0.0, 0.0, 0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7688/*"IntoMove"*/,
    delay,
    0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__IsCanDrag(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  struct ListViewManager_o *manager; // x0
  __int64 v6; // x11
  PartyOrganizationListViewItem_o *v7; // x20
  __int64 v8; // x10
  const MethodInfo *v9; // x1

  if ( (byte_40FDC85 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, v3);
    byte_40FDC85 = 1;
  }
  linkItem = this->fields.linkItem;
  manager = this->fields.manager;
  if ( linkItem
    && (v6 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == PartyOrganizationListViewItem_TypeInfo )
      v7 = (PartyOrganizationListViewItem_o *)this->fields.linkItem;
    else
      v7 = 0LL;
    if ( !manager )
LABEL_22:
      sub_B170D4();
  }
  else
  {
    v7 = 0LL;
    if ( !manager )
      goto LABEL_22;
  }
  v8 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_22;
  }
  if ( PartyOrganizationListViewManager__IsCanDrag((PartyOrganizationListViewManager_o *)manager, 0LL) )
  {
    if ( this->fields.isEquipPress )
    {
      if ( !v7 )
        goto LABEL_22;
      return !v7->fields.isFollower;
    }
    if ( !v7 )
      goto LABEL_22;
    if ( PartyOrganizationListViewItem__IsEditablePos(v7, v9) )
      return 1;
    if ( this->fields.isEquipPress )
      return !v7->fields.isFollower;
  }
  return 0;
}


bool __fastcall PartyOrganizationListViewDropObject__IsEquipPress(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquipPress;
}


void __fastcall PartyOrganizationListViewDropObject__MoveEnd(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.BattleAssetUIAtlas) = 0;
  *(_DWORD *)&p_callbackFunc[-1].fields.isOpenAfter = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FDC91 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9918/*"OnClickListDropEquip"*/, method);
    byte_40FDC91 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9918/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FDC8F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9920/*"OnClickListDropServant"*/, method);
    byte_40FDC8F = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9920/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDC7E & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FDC7E = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FDC90 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9921/*"OnClickListDropServantDetail"*/, method);
    byte_40FDC90 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9921/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FDC92 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9919/*"OnClickListDropEquipDetail"*/, method);
    byte_40FDC92 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9919/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 3 )
  {
    if ( this->fields.linkItem )
      this->fields.isEquipPress = 0;
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FDC93 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, method);
    byte_40FDC93 = 1;
  }
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v4 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        sub_B170D4();
      }
      this->fields.isEquipPress = !LOBYTE(linkItem[1].fields.basePosition.fields.y)
                               && !BYTE2(linkItem[1].fields.basePosition.fields.y)
                               && !LOBYTE(linkItem[1].fields.selectNum);
    }
  }
}


void __fastcall PartyOrganizationListViewDropObject__ReleaseItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *itemDraw; // x20
  PartyOrganizationListViewItemDraw_o *v16; // x0

  if ( (byte_40FDC80 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDC80 = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v16 = this->fields.itemDraw;
      if ( !v16 )
        sub_B170D4();
      PartyOrganizationListViewItemDraw__ClearItem(v16, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetDispEquipOnly(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  PartyOrganizationListViewItemDraw_o *Component_srcLineSprite; // x0
  const MethodInfo *v7; // x2

  if ( (byte_40FDC95 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, flg);
    byte_40FDC95 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (PartyOrganizationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly(Component_srcLineSprite, flg, 0LL);
  PartyOrganizationListViewDropObject__SetEquipDisp(this, 1, v7);
}


void __fastcall PartyOrganizationListViewDropObject__SetDispSwapGuide(
        PartyOrganizationListViewDropObject_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B170D4();
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UnityEngine_Object_o *equipDispBase; // x21
  UnityEngine_Component_o *v8; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_40FDC94 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UICommonButton___, flg);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FDC94 = 1;
  }
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
    {
      v8 = (UnityEngine_Component_o *)this->fields.equipUIDragDrop;
      if ( !v8
        || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        v8,
                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
        || (((void (__fastcall *)(WebViewObject_o *, _QWORD, __int64, Il2CppClass **))Component_WebViewObject->klass[1]._1.methods)(
              Component_WebViewObject,
              0LL,
              1LL,
              Component_WebViewObject->klass[1]._1.nestedTypes),
            (v10 = this->fields.equipDispBase) == 0LL) )
      {
        sub_B170D4();
      }
      UnityEngine_GameObject__SetActive(v10, flg, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetInput(
        PartyOrganizationListViewDropObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UIDragDropListViewItem_o *v6; // x0

  if ( (byte_40FDC84 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isInput);
    byte_40FDC84 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v6 = this->fields.equipUIDragDrop;
    if ( !v6 )
      sub_B170D4();
    UIDragDropListViewItem__SetEnable(v6, isInput, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetItem(
        PartyOrganizationListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x22
  struct UIDragDropListViewItem_o *v8; // x0

  if ( (byte_40FDC82 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FDC82 = 1;
  }
  this->fields.state = 0;
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v8 = this->fields.equipUIDragDrop;
    if ( !v8 )
      sub_B170D4();
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, Il2CppMethodPointer))v8->klass->vtable._5_SetBaseTransform.method)(
      v8,
      v8->klass->vtable._6_OnDragDropStart.methodPtr);
  }
  ListViewDropObject__SetItem_30172332((ListViewDropObject_o *)this, item, seed, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipDispBase; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FDC83 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isVisible);
    byte_40FDC83 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, isVisible, 0LL);
  equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
  {
    v6 = this->fields.equipDispBase;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetupDisp(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v6; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_40FDC89 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v4);
    byte_40FDC89 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == PartyOrganizationListViewItem_TypeInfo )
    {
      v7 = (this->fields.dispMode | 4) != 4;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v7 = 0;
LABEL_8:
  PartyOrganizationListViewDropObject__SetVisible(this, v7, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B170D4();
    PartyOrganizationListViewItemDraw__SetItem(
      v9,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}