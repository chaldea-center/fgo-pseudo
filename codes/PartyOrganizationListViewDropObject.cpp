void __fastcall PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB0D1 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v1, v2, v3);
    byte_42EB0D1 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *dispObject; // x0
  struct PartyOrganizationListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42EB0B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42EB0B8 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, method);
  Component_srcLineSprite = (struct PartyOrganizationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            dispObject,
                                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  __int64 v17; // x1
  PartyOrganizationListViewItemDraw_o *v18; // x0

  if ( (byte_42EB0BC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB0BC = 1;
  }
  if ( this->fields.isBusy )
    return 0;
  this->fields.linkItem = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.callbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.state = 0;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v18 = this->fields.itemDraw;
    if ( !v18 )
      sub_B5D69C(0LL, v17);
    PartyOrganizationListViewItemDraw__ClearItem(v18, 0LL);
  }
  return 1;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  const MethodInfo *v8; // x2
  PartyOrganizationListViewDropObject_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_42EB0C1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB0C1 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  v9 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)DragObject, 2, v8);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v9, 1, v10);
  return v7;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject_29750604(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  PartyOrganizationListViewDropObject_o *v12; // x21
  UnityEngine_Object_o *klass; // x22
  const MethodInfo *v14; // x2

  if ( (byte_42EB0C2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___,
      addDepth,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB0C2 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_12;
  v11 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             DragObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !DragObject )
    goto LABEL_12;
  v12 = (PartyOrganizationListViewDropObject_o *)DragObject;
  klass = (UnityEngine_Object_o *)DragObject[6].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    DragObject = (UnityEngine_GameObject_o *)v12->fields.itemDraw;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(DragObject, v10);
  }
LABEL_11:
  PartyOrganizationListViewDropObject__Init_29750396(v12, 2, v14);
  return v11;
}


void __fastcall PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EB0C9 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB0C9 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__DragMoveStart(
        PartyOrganizationListViewDropObject_o *this,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct UnityEngine_GameObject_o *DragObject_29750604; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  char *Component_srcLineSprite; // x0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  struct UnityEngine_GameObject_o *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_GameObject_o *v44; // x21
  UnityEngine_GameObject_o *v45; // x8
  float v46; // s11
  float v47; // s4
  float v48; // s5
  float v49; // s3
  char *v50; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_42EB0C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEquipSwap, (_DWORD)method, v4);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_9298/*"MoveEnd"*/, v19, v20, v21);
    byte_42EB0C8 = 1;
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
      PartyOrganizationListViewDropObject__SetupDisp(this, v24);
      DragObject_29750604 = PartyOrganizationListViewDropObject__CreateDragObject_29750604(this, -100, v25);
      this->fields.dragObject = DragObject_29750604;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.dragObject,
        (System_Int32_array **)DragObject_29750604,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      Component_srcLineSprite = (char *)this->fields.dragObject;
      if ( !Component_srcLineSprite )
        goto LABEL_21;
      Component_srcLineSprite = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_21;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_srcLineSprite,
        1,
        v34);
    }
    else
    {
      Component_srcLineSprite = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_srcLineSprite )
        goto LABEL_21;
      (*(void (__fastcall **)(char *, _QWORD, float))(*(_QWORD *)Component_srcLineSprite + 440LL))(
        Component_srcLineSprite,
        *(_QWORD *)(*(_QWORD *)Component_srcLineSprite + 448LL),
        0.0);
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v35);
      v37 = PartyOrganizationListViewDropObject__CreateDragObject_29750604(this, -100, v36);
      this->fields.dragObject = v37;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.dragObject,
        (System_Int32_array **)v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
  }
  v44 = *p_dragObject;
  Component_srcLineSprite = (char *)PartyOrganizationListViewDropObject_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo);
    Component_srcLineSprite = (char *)PartyOrganizationListViewDropObject_TypeInfo;
    v45 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_21;
  }
  else
  {
    v45 = *p_dragObject;
    if ( !v44 )
      goto LABEL_21;
  }
  v46 = **((float **)Component_srcLineSprite + 23);
  Component_srcLineSprite = (char *)UnityEngine_GameObject__get_transform(v45, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_21;
  Component_srcLineSprite = (char *)UnityEngine_Transform__get_parent(
                                      (UnityEngine_Transform_o *)Component_srcLineSprite,
                                      0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_21;
  v65.fields.x = x;
  v65.fields.y = y;
  v65.fields.z = z;
  v66 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_srcLineSprite, v65, 0LL);
  v47 = v66.fields.y;
  v48 = v66.fields.z;
  v66.fields.y = v66.fields.x;
  v66.fields.z = v47;
  v49 = v48;
  Component_srcLineSprite = (char *)TweenPosition__Begin(v44, v46, *(UnityEngine_Vector3_o *)&v66.fields.y, 0LL);
  if ( !Component_srcLineSprite )
LABEL_21:
    sub_B5D69C(Component_srcLineSprite, v24);
  v50 = Component_srcLineSprite;
  *((_DWORD *)Component_srcLineSprite + 6) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v50 + 9) = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v50 + 72), gameObject, v52, v53, v54, v55, v56, v57);
  v58 = (System_Int32_array **)StringLiteral_9298/*"MoveEnd"*/;
  *((_QWORD *)v50 + 10) = StringLiteral_9298/*"MoveEnd"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v50 + 80), v58, v59, v60, v61, v62, v63, v64);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EB0BA & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0BA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == PartyOrganizationListViewItem_TypeInfo )
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
  __int64 v21; // x1
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
  if ( (byte_42EB0C3 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, isEquipSwap);
    byte_42EB0C3 = 1;
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
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B5D69C(transform, v21);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B5D560(
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
          sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)v30, v31, v32, v33, v34, v35);
          System_Action__Invoke(klass, 0LL);
        }
        break;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_29750396(
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
void __fastcall PartyOrganizationListViewDropObject__Init_29752880(
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
void __fastcall PartyOrganizationListViewDropObject__Init_29752988(
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v7; // s0
  float y; // s4
  float z; // s5
  float v12; // s3
  UnityEngine_GameObject_o *v13; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EB0C6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7802/*"IntoMove2"*/, (_DWORD)method, v2, v3);
    byte_42EB0C6 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent
    || (v28 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL),
        y = v28.fields.y,
        z = v28.fields.z,
        v28.fields.y = v28.fields.x,
        v28.fields.z = y,
        v12 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v28.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(dragObject, method);
  }
  v13 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v13[3], gameObject, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_7802/*"IntoMove2"*/;
  v13[3].monitor = (void *)StringLiteral_7802/*"IntoMove2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v13[3].monitor, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_42EB0C7 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB0C7 = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  PartyOrganizationListViewDropObject__MoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__IntoStart(
        PartyOrganizationListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3
  const MethodInfo *v7; // x1
  struct UnityEngine_GameObject_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0

  if ( (byte_42EB0C5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7801/*"IntoMove"*/, (_DWORD)method, (_DWORD)v3, v4);
    byte_42EB0C5 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v7);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__TransformPoint_35744104(
                                           (UnityEngine_Transform_o *)dragObject,
                                           -3000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_B5D69C(dragObject, v15);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7801/*"IntoMove"*/,
    delay,
    0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__IsCanDrag(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  struct ListViewManager_o *manager; // x0
  __int64 v10; // x11
  PartyOrganizationListViewItem_o *v11; // x20
  __int64 v12; // x10

  if ( (byte_42EB0C0 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewManager_TypeInfo, v5, v6, v7);
    byte_42EB0C0 = 1;
  }
  linkItem = this->fields.linkItem;
  manager = this->fields.manager;
  if ( linkItem
    && (v10 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == PartyOrganizationListViewItem_TypeInfo )
      v11 = (PartyOrganizationListViewItem_o *)this->fields.linkItem;
    else
      v11 = 0LL;
    if ( !manager )
LABEL_22:
      sub_B5D69C(manager, method);
  }
  else
  {
    v11 = 0LL;
    if ( !manager )
      goto LABEL_22;
  }
  v12 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_22;
  }
  manager = (struct ListViewManager_o *)PartyOrganizationListViewManager__IsCanDrag(
                                          (PartyOrganizationListViewManager_o *)manager,
                                          0LL);
  if ( ((unsigned __int8)manager & 1) != 0 )
  {
    if ( this->fields.isEquipPress )
    {
      if ( !v11 )
        goto LABEL_22;
      return !v11->fields.isFollower;
    }
    if ( !v11 )
      goto LABEL_22;
    if ( PartyOrganizationListViewItem__IsEditablePos(v11, method) )
      return 1;
    if ( this->fields.isEquipPress )
      return !v11->fields.isFollower;
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EB0CC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10056/*"OnClickListDropEquip"*/, (_DWORD)method, v2, v3);
    byte_42EB0CC = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10056/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EB0CA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10058/*"OnClickListDropServant"*/, (_DWORD)method, v2, v3);
    byte_42EB0CA = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10058/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EB0B9 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB0B9 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EB0CB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10059/*"OnClickListDropServantDetail"*/, (_DWORD)method, v2, v3);
    byte_42EB0CB = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10059/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EB0CD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10057/*"OnClickListDropEquipDetail"*/, (_DWORD)method, v2, v3);
    byte_42EB0CD = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10057/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationListViewDropObject_o *v4; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  v4 = this;
  if ( (byte_42EB0CE & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_B5D5C4(
                                                      &PartyOrganizationListViewItem_TypeInfo,
                                                      (_DWORD)method,
                                                      v2,
                                                      v3);
    byte_42EB0CE = 1;
  }
  if ( v4->fields.state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      v6 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        sub_B5D69C(this, method);
      }
      v4->fields.isEquipPress = !LOBYTE(linkItem[1].fields.viewObject)
                             && !BYTE2(linkItem[1].fields.viewObject)
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
  __int64 v16; // x1
  PartyOrganizationListViewItemDraw_o *v17; // x0

  if ( (byte_42EB0BB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB0BB = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
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
        sub_B5D69C(0LL, v16);
      PartyOrganizationListViewItemDraw__ClearItem(v17, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetDispEquipOnly(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EB0D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___,
      flg,
      (_DWORD)method,
      v3);
    byte_42EB0D0 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0LL )
  {
    sub_B5D69C(dispObject, flg);
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly((PartyOrganizationListViewItemDraw_o *)dispObject, flg, 0LL);
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
    sub_B5D69C(0LL, isDisp);
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, 0LL);
}


void __fastcall PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v11; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0

  if ( (byte_42EB0CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, flg, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB0CF = 1;
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
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.equipUIDragDrop;
      if ( !Component_WebViewObject
        || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   Component_WebViewObject,
                                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
              Component_WebViewObject,
              0LL,
              1LL,
              Component_WebViewObject->klass[1]._1.interfaceOffsets),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0LL) )
      {
        sub_B5D69C(Component_WebViewObject, v11);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, flg, 0LL);
    }
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetInput(
        PartyOrganizationListViewDropObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v7; // x1
  UIDragDropListViewItem_o *v8; // x0

  if ( (byte_42EB0BF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    byte_42EB0BF = 1;
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
    v8 = this->fields.equipUIDragDrop;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UIDragDropListViewItem__SetEnable(v8, isInput, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetItem(
        PartyOrganizationListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x22
  __int64 v8; // x1
  struct UIDragDropListViewItem_o *v9; // x0

  if ( (byte_42EB0BD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)seed, method);
    byte_42EB0BD = 1;
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
    v9 = this->fields.equipUIDragDrop;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, Il2CppMethodPointer))v9->klass->vtable._5_SetBaseTransform.method)(
      v9,
      v9->klass->vtable._6_OnDragDropStart.methodPtr);
  }
  ListViewDropObject__SetItem_23900620((ListViewDropObject_o *)this, item, seed, 0LL);
}


void __fastcall PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42EB0BE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isVisible, (_DWORD)method, v3);
    byte_42EB0BE = 1;
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
    v8 = this->fields.equipDispBase;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetupDisp(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x10
  bool v10; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  PartyOrganizationListViewItemDraw_o *v13; // x0

  if ( (byte_42EB0C4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v5, v6, v7);
    byte_42EB0C4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == PartyOrganizationListViewItem_TypeInfo )
    {
      v10 = (this->fields.dispMode | 4) != 4;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v10 = 0;
LABEL_8:
  PartyOrganizationListViewDropObject__SetVisible(this, v10, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
    PartyOrganizationListViewItemDraw__SetItem(
      v13,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}