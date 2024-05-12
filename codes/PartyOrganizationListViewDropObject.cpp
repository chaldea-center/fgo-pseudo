void __fastcall PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  if ( (byte_43938F0 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_43938F0 = 1;
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

  if ( (byte_43938D7 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_43938D7 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, method);
  Component_srcLineSprite = (struct PartyOrganizationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            dispObject,
                                                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B77560(
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
  const MethodInfo *v17; // x1
  PartyOrganizationListViewItemDraw_o *v18; // x0

  if ( (byte_43938DB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938DB = 1;
  }
  if ( this->fields.isBusy )
    return 0;
  this->fields.linkItem = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.callbackFunc = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
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
      sub_B7769C(0LL, v17);
    PartyOrganizationListViewItemDraw__ClearItem(v18, v17);
  }
  return 1;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x2
  PartyOrganizationListViewDropObject_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_43938E0 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    byte_43938E0 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0LL) )
  {
    sub_B7769C(DragObject, v4);
  }
  v7 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)DragObject, 2, v6);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v7, 1, v8);
  return v5;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject_38619408(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  PartyOrganizationListViewDropObject_o *v8; // x21
  UnityEngine_Object_o *klass; // x22
  const MethodInfo *v10; // x2

  if ( (byte_43938E1 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938E1 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_12;
  v7 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             DragObject,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !DragObject )
    goto LABEL_12;
  v8 = (PartyOrganizationListViewDropObject_o *)DragObject;
  klass = (UnityEngine_Object_o *)DragObject[6].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    DragObject = (UnityEngine_GameObject_o *)v8->fields.itemDraw;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, v10);
      goto LABEL_11;
    }
LABEL_12:
    sub_B7769C(DragObject, v6);
  }
LABEL_11:
  PartyOrganizationListViewDropObject__Init_38619204(v8, 2, v10);
  return v7;
}


void __fastcall PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_43938E8 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938E8 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B77560(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
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
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct UnityEngine_GameObject_o *DragObject_38619408; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  char *Component_srcLineSprite; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  struct UnityEngine_GameObject_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *v31; // x21
  UnityEngine_GameObject_o *v32; // x8
  float v33; // s11
  float v34; // s4
  float v35; // s5
  float v36; // s3
  char *v37; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_43938E7 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&StringLiteral_9371/*"MoveEnd"*/);
    byte_43938E7 = 1;
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
      PartyOrganizationListViewDropObject__SetupDisp(this, v11);
      DragObject_38619408 = PartyOrganizationListViewDropObject__CreateDragObject_38619408(this, -100, v12);
      this->fields.dragObject = DragObject_38619408;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.dragObject,
        (System_Int32_array **)DragObject_38619408,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      Component_srcLineSprite = (char *)this->fields.dragObject;
      if ( !Component_srcLineSprite )
        goto LABEL_21;
      Component_srcLineSprite = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_21;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_srcLineSprite,
        1,
        v21);
    }
    else
    {
      Component_srcLineSprite = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_srcLineSprite )
        goto LABEL_21;
      (*(void (__fastcall **)(char *, _QWORD, float))(*(_QWORD *)Component_srcLineSprite + 440LL))(
        Component_srcLineSprite,
        *(_QWORD *)(*(_QWORD *)Component_srcLineSprite + 448LL),
        0.0);
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v22);
      v24 = PartyOrganizationListViewDropObject__CreateDragObject_38619408(this, -100, v23);
      this->fields.dragObject = v24;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.dragObject,
        (System_Int32_array **)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
  }
  v31 = *p_dragObject;
  Component_srcLineSprite = (char *)PartyOrganizationListViewDropObject_TypeInfo;
  if ( (BYTE3(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo);
    Component_srcLineSprite = (char *)PartyOrganizationListViewDropObject_TypeInfo;
    v32 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_21;
  }
  else
  {
    v32 = *p_dragObject;
    if ( !v31 )
      goto LABEL_21;
  }
  v33 = **((float **)Component_srcLineSprite + 23);
  Component_srcLineSprite = (char *)UnityEngine_GameObject__get_transform(v32, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_21;
  Component_srcLineSprite = (char *)UnityEngine_Transform__get_parent(
                                      (UnityEngine_Transform_o *)Component_srcLineSprite,
                                      0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_21;
  v52.fields.x = x;
  v52.fields.y = y;
  v52.fields.z = z;
  v53 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_srcLineSprite, v52, 0LL);
  v34 = v53.fields.y;
  v35 = v53.fields.z;
  v53.fields.y = v53.fields.x;
  v53.fields.z = v34;
  v36 = v35;
  Component_srcLineSprite = (char *)TweenPosition__Begin(v31, v33, *(UnityEngine_Vector3_o *)&v53.fields.y, 0LL);
  if ( !Component_srcLineSprite )
LABEL_21:
    sub_B7769C(Component_srcLineSprite, v11);
  v37 = Component_srcLineSprite;
  *((_DWORD *)Component_srcLineSprite + 6) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v37 + 9) = gameObject;
  sub_B77560((BattleServantConfConponent_o *)(v37 + 72), gameObject, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_9371/*"MoveEnd"*/;
  *((_QWORD *)v37 + 10) = StringLiteral_9371/*"MoveEnd"*/;
  sub_B77560((BattleServantConfConponent_o *)(v37 + 80), v45, v46, v47, v48, v49, v50, v51);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_43938D9 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    byte_43938D9 = 1;
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
  if ( (byte_43938E2 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    byte_43938E2 = 1;
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
      sub_B7769C(transform, v21);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B77560(
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
          sub_B77560(p_callbackFunc, 0LL, (System_String_array **)v30, v31, v32, v33, v34, v35);
          System_Action__Invoke(klass, 0LL);
        }
        break;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_38619204(
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
void __fastcall PartyOrganizationListViewDropObject__Init_38621864(
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
void __fastcall PartyOrganizationListViewDropObject__Init_38621972(
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
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  float y; // s4
  float z; // s5
  float v10; // s3
  UnityEngine_GameObject_o *v11; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_43938E5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7873/*"IntoMove2"*/);
    byte_43938E5 = 1;
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
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent
    || (v26 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL),
        y = v26.fields.y,
        z = v26.fields.z,
        v26.fields.y = v26.fields.x,
        v26.fields.z = y,
        v10 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v26.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_B7769C(dragObject, method);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B77560((BattleServantConfConponent_o *)&v11[3], gameObject, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_7873/*"IntoMove2"*/;
  v11[3].monitor = (void *)StringLiteral_7873/*"IntoMove2"*/;
  sub_B77560((BattleServantConfConponent_o *)&v11[3].monitor, v19, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_43938E6 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    byte_43938E6 = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v17; // s0

  if ( (byte_43938E4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7872/*"IntoMove"*/);
    byte_43938E4 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_B77560(
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
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__TransformPoint_36433912(
                                           (UnityEngine_Transform_o *)dragObject,
                                           -3000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_B7769C(dragObject, v14);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7872/*"IntoMove"*/,
    delay,
    0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__IsCanDrag(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  struct ListViewManager_o *manager; // x0
  __int64 v5; // x11
  PartyOrganizationListViewItem_o *v6; // x20
  __int64 v7; // x10

  if ( (byte_43938DF & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewManager_TypeInfo);
    byte_43938DF = 1;
  }
  linkItem = this->fields.linkItem;
  manager = this->fields.manager;
  if ( linkItem
    && (v5 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == PartyOrganizationListViewItem_TypeInfo )
      v6 = (PartyOrganizationListViewItem_o *)this->fields.linkItem;
    else
      v6 = 0LL;
    if ( !manager )
LABEL_22:
      sub_B7769C(manager, method);
  }
  else
  {
    v6 = 0LL;
    if ( !manager )
      goto LABEL_22;
  }
  v7 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
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
      if ( !v6 )
        goto LABEL_22;
      return !v6->fields.isFollower;
    }
    if ( !v6 )
      goto LABEL_22;
    if ( PartyOrganizationListViewItem__IsEditablePos(v6, method) )
      return 1;
    if ( this->fields.isEquipPress )
      return !v6->fields.isFollower;
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
    sub_B77560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_43938EB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10132/*"OnClickListDropEquip"*/);
    byte_43938EB = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B7769C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10132/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_43938E9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10134/*"OnClickListDropServant"*/);
    byte_43938E9 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B7769C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10134/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_43938D8 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938D8 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B77560(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_43938EA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10135/*"OnClickListDropServantDetail"*/);
    byte_43938EA = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B7769C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10135/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_43938EC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10133/*"OnClickListDropEquipDetail"*/);
    byte_43938EC = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B7769C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10133/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0LL);
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
  PartyOrganizationListViewDropObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  v2 = this;
  if ( (byte_43938ED & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    byte_43938ED = 1;
  }
  if ( v2->fields.state == 3 )
  {
    linkItem = v2->fields.linkItem;
    if ( linkItem )
    {
      v4 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        sub_B7769C(this, method);
      }
      v2->fields.isEquipPress = !LOBYTE(linkItem[1].fields.viewObject)
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
  const MethodInfo *v16; // x1
  PartyOrganizationListViewItemDraw_o *v17; // x0

  if ( (byte_43938DA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938DA = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.callbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
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
        sub_B7769C(0LL, v16);
      PartyOrganizationListViewItemDraw__ClearItem(v17, v16);
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
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_43938EF & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_43938EF = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, flg);
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly((PartyOrganizationListViewItemDraw_o *)dispObject, flg, v6);
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
    sub_B7769C(0LL, isDisp);
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, method);
}


void __fastcall PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0

  if ( (byte_43938EE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938EE = 1;
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
                                                                   (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
              Component_WebViewObject,
              0LL,
              1LL,
              Component_WebViewObject->klass[1]._1.interfaceOffsets),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0LL) )
      {
        sub_B7769C(Component_WebViewObject, v7);
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
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v6; // x1
  UIDragDropListViewItem_o *v7; // x0

  if ( (byte_43938DE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938DE = 1;
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
    v7 = this->fields.equipUIDragDrop;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    UIDragDropListViewItem__SetEnable(v7, isInput, 0LL);
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

  if ( (byte_43938DC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938DC = 1;
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
      sub_B7769C(0LL, v8);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, Il2CppMethodPointer))v9->klass->vtable._5_SetBaseTransform.method)(
      v9,
      v9->klass->vtable._6_OnDragDropStart.methodPtr);
  }
  ListViewDropObject__SetItem_24165804((ListViewDropObject_o *)this, item, seed, 0LL);
}


void __fastcall PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_43938DD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43938DD = 1;
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
    v7 = this->fields.equipDispBase;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetupDisp(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  PartyOrganizationListViewItemDraw_o *v10; // x0

  if ( (byte_43938E3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    byte_43938E3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == PartyOrganizationListViewItem_TypeInfo )
    {
      v6 = (this->fields.dispMode | 4) != 4;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  PartyOrganizationListViewDropObject__SetVisible(this, v6, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B7769C(0LL, v8);
    PartyOrganizationListViewItemDraw__SetItem(
      v10,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}