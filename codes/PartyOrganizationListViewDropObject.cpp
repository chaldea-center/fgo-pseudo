void PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  if ( (byte_596C01A & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_596C01A = 1;
  }
  LODWORD(PartyOrganizationListViewDropObject_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationListViewDropObject_StaticFields)1045220557;
}


void PartyOrganizationListViewDropObject___ctor(PartyOrganizationListViewDropObject_o *this, const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0);
}


void PartyOrganizationListViewDropObject__Awake(PartyOrganizationListViewDropObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596C000 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_596C000 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ListViewObject__Awake((ListViewObject_o *)this, 0);
}


bool PartyOrganizationListViewDropObject__ClearItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  _BOOL4 isBusy; // w22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v19; // x1
  PartyOrganizationListViewItemDraw_o *v20; // x0

  if ( (byte_596C004 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C004 = 1;
  }
  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v10, v11, v12, v13, v14, v15);
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    this->fields.state = 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    {
      v20 = this->fields.itemDraw;
      if ( !v20 )
        sub_2213CDC(0, v19);
      PartyOrganizationListViewItemDraw__ClearItem(v20, 0);
    }
  }
  return !isBusy;
}


UnityEngine_GameObject_o *PartyOrganizationListViewDropObject__CreateDragObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x2
  PartyOrganizationListViewDropObject_o *v7; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_596C009 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    byte_596C009 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  v7 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_40963932((PartyOrganizationListViewDropObject_o *)DragObject, 2, v6);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v7, 1, v9);
  else
    PartyOrganizationListViewDropObject__HideRestrictionObject(v7, v8);
  return v5;
}


UnityEngine_GameObject_o *PartyOrganizationListViewDropObject__CreateDragObject_40964296(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_596C00A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C00A = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject )
    goto LABEL_11;
  v7 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             DragObject,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !DragObject )
    goto LABEL_11;
  v9 = DragObject;
  PartyOrganizationListViewDropObject__Init_40963932((PartyOrganizationListViewDropObject_o *)DragObject, 2, v8);
  monitor = (UnityEngine_Object_o *)v9[6].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
  {
    DragObject = (UnityEngine_GameObject_o *)v9[6].monitor;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0);
      return v7;
    }
LABEL_11:
    sub_2213CDC(DragObject, v6);
  }
  return v7;
}


void PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C011 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C011 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__DragMoveStart(
        PartyOrganizationListViewDropObject_o *this,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_c *v9; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  char *Component_object; // x0
  const MethodInfo *v15; // x2
  struct UnityEngine_GameObject_o *DragObject_40964296; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x8
  float v26; // s11
  float v27; // s4
  float v28; // s5
  float v29; // s3
  char *v30; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_596C010 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_2213A60(&StringLiteral_9553/*"MoveEnd"*/);
    byte_596C010 = 1;
  }
  v9 = UnityEngine_Object_TypeInfo;
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, isEquipSwap, method);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    if ( !isEquipSwap )
    {
      Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_object )
        goto LABEL_23;
      (*(void (__fastcall **)(char *, _QWORD, double))(*(_QWORD *)Component_object + 440LL))(
        Component_object,
        *(_QWORD *)(*(_QWORD *)Component_object + 448LL),
        0.0);
    }
    this->fields.dispMode = 2;
    PartyOrganizationListViewDropObject__SetupDisp(this, v12);
    DragObject_40964296 = PartyOrganizationListViewDropObject__CreateDragObject_40964296(this, -100, v15);
    this->fields.dragObject = DragObject_40964296;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject,
      (int32_t)DragObject_40964296,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    Component_object = (char *)this->fields.dragObject;
    if ( !Component_object )
      goto LABEL_23;
    Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    if ( isEquipSwap )
    {
      if ( !Component_object )
        goto LABEL_23;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        1,
        v23);
    }
    else
    {
      if ( !Component_object )
        goto LABEL_23;
      PartyOrganizationListViewDropObject__HideRestrictionObject(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        v12);
    }
  }
  v24 = *p_dragObject;
  Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
  if ( *(&PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished + 1) )
  {
    v25 = *p_dragObject;
    if ( !v24 )
      goto LABEL_23;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo, v12, v13);
    v25 = *p_dragObject;
    Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
    if ( !*p_dragObject )
      goto LABEL_23;
  }
  v26 = **((float **)Component_object + 23);
  Component_object = (char *)UnityEngine_GameObject__get_transform(v25, 0);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_23;
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  v46 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v45, 0);
  v27 = v46.fields.y;
  v28 = v46.fields.z;
  v46.fields.y = v46.fields.x;
  v46.fields.z = v27;
  v29 = v28;
  Component_object = (char *)TweenPosition__Begin(v24, v26, *(UnityEngine_Vector3_o *)&v46.fields.y, 0);
  if ( !Component_object )
LABEL_23:
    sub_2213CDC(Component_object, v12);
  v30 = Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v30 + 10) = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 80), (int32_t)gameObject, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_9553/*"MoveEnd"*/;
  *((_QWORD *)v30 + 11) = StringLiteral_9553/*"MoveEnd"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 88), v38, v39, v40, v41, v42, v43, v44);
}


PartyOrganizationListViewItem_o *PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596C002 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    byte_596C002 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)this->fields.linkItem;
  return 0;
}


void PartyOrganizationListViewDropObject__HideRestrictionObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct PartyOrganizationListViewItemDraw_o *v6; // x0

  if ( (byte_596C019 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C019 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_2213CDC(0, v5);
    if ( !v6->fields._IsGrandRestriction_k__BackingField || !v6->fields._IsMyServantOrNpc_k__BackingField )
      PartyOrganizationListViewItemDraw__HideDisplayRestrictionObject(v6, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__Init(
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
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int v18; // w25
  int32_t dispMode; // w23
  int32_t state; // w24
  bool v21; // zf
  bool v22; // w1
  _BOOL8 v24; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v26; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x1
  MethodInfo *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w8
  int32_t v42; // w8
  int32_t v43; // w9
  MissionNaviTransitionBoardItem_c *v44; // x19
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_596C00B & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    byte_596C00B = 1;
  }
  if ( initMode == 10 )
  {
    PartyOrganizationListViewDropObject__SetupDisp(this, *(const MethodInfo **)&initMode);
    return;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewItem_TypeInfo )
      v18 = initMode;
    else
      v18 = 0;
  }
  else
  {
    v18 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( v18 )
    v21 = v18 == 5;
  else
    v21 = 1;
  v22 = !v21;
  PartyOrganizationListViewDropObject__SetVisible(this, v22, (const MethodInfo *)callbackFunc);
  v24 = v18 == 4 || v18 == 8;
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _BOOL8, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v24,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v26);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( v18 <= 4 )
  {
    if ( (unsigned int)v18 < 3 )
    {
      v41 = 1;
LABEL_36:
      this->fields.dispMode = v18;
      this->fields.state = v41;
      goto LABEL_37;
    }
    if ( v18 == 3 )
    {
      this->fields.dispMode = 2;
      this->fields.state = 2;
      PartyOrganizationListViewDropObject__IntoStart(this, delay, v34);
      return;
    }
    if ( v18 == 4 )
    {
      v41 = 3;
      v18 = 2;
      goto LABEL_36;
    }
LABEL_37:
    if ( state && dispMode == this->fields.dispMode )
      goto LABEL_48;
    goto LABEL_47;
  }
  if ( v18 <= 6 )
  {
    if ( v18 != 5 )
    {
      v45.fields.y = y;
      v45.fields.z = z;
      this->fields.state = 2;
      v45.fields.x = x;
      PartyOrganizationListViewDropObject__DragMoveStart(this, v45, isEquipSwap, v35);
      return;
    }
    v42 = 2;
    v43 = 4;
  }
  else
  {
    switch ( v18 )
    {
      case 7:
        PartyOrganizationListViewDropObject__DragDelete(this, v34);
        return;
      case 8:
        v42 = 3;
        break;
      case 9:
        v42 = 1;
        break;
      default:
        goto LABEL_37;
    }
    v43 = 2;
  }
  this->fields.dispMode = v43;
  this->fields.state = v42;
LABEL_47:
  PartyOrganizationListViewDropObject__SetupDisp(this, v34);
LABEL_48:
  v44 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)v35, v36, v37, v38, v39, v40);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v44->_1.namespaze)(
      v44->_1.element_class,
      *(_QWORD *)&v44->_1.byval_arg.bits);
  }
}


void PartyOrganizationListViewDropObject__Init_40963932(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    0,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v3);
}


void PartyOrganizationListViewDropObject__Init_40966472(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v5);
}


void PartyOrganizationListViewDropObject__Init_40966600(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__IntoMove(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  float y; // s4
  float z; // s5
  float v7; // s3
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_596C00E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8073/*"IntoMove2"*/);
    byte_596C00E = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_9;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !parent
    || (v24 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
        y = v24.fields.y,
        z = v24.fields.z,
        v24.fields.y = v24.fields.x,
        v24.fields.z = y,
        v7 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v24.fields.y,
                                                    0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(dragObject, method);
  }
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_8073/*"IntoMove2"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_8073/*"IntoMove2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8[3].fields, v16, v17, v18, v19, v20, v21, v22);
}


void PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1

  if ( (byte_596C00F & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596C00F = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5, v6);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v8, v9, v10, v11, v12, v13);
  PartyOrganizationListViewDropObject__MoveEnd(this, v14);
}


void PartyOrganizationListViewDropObject__IntoStart(
        PartyOrganizationListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C00D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8072/*"IntoMove"*/);
    byte_596C00D = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v17 = UnityEngine_Transform__TransformPoint_83496448(
                (UnityEngine_Transform_o *)dragObject,
                -3000.0,
                0.0,
                0.0,
                0),
        !transform) )
  {
    sub_2213CDC(dragObject, v14);
  }
  UnityEngine_Transform__set_position(transform, v17, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_8072/*"IntoMove"*/,
    delay,
    0);
}


bool PartyOrganizationListViewDropObject__IsCanDrag(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x11
  PartyOrganizationListViewItem_o *v6; // x20
  __int64 v7; // x10

  if ( (byte_596C008 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewManager_TypeInfo);
    byte_596C008 = 1;
  }
  linkItem = this->fields.linkItem;
  manager = this->fields.manager;
  if ( linkItem
    && (naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewItem_TypeInfo )
      v6 = (PartyOrganizationListViewItem_o *)this->fields.linkItem;
    else
      v6 = 0;
    if ( !manager )
LABEL_22:
      sub_2213CDC(manager, method);
  }
  else
  {
    v6 = 0;
    if ( !manager )
      goto LABEL_22;
  }
  v7 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v7
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_22;
  }
  manager = (struct ListViewManager_o *)PartyOrganizationListViewManager__IsCanDrag(
                                          (PartyOrganizationListViewManager_o *)manager,
                                          0);
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


bool PartyOrganizationListViewDropObject__IsEquipPress(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquipPress;
}


void PartyOrganizationListViewDropObject__MoveEnd(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._QuestId_k__BackingField) = 0;
  p_callbackFunc[-1].fields._BoardType_k__BackingField = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596C014 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10244/*"OnClickListDropEquip"*/);
    byte_596C014 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10244/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596C012 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10246/*"OnClickListDropServant"*/);
    byte_596C012 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10246/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C001 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C001 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596C013 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10247/*"OnClickListDropServantDetail"*/);
    byte_596C013 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10247/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596C015 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10245/*"OnClickListDropEquipDetail"*/);
    byte_596C015 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10245/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 3 )
  {
    if ( this->fields.linkItem )
      this->fields.isEquipPress = 0;
  }
}


void PartyOrganizationListViewDropObject__OnPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewDropObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  bool v5; // w8

  v2 = this;
  if ( (byte_596C016 & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    byte_596C016 = 1;
  }
  if ( v2->fields.state == 3 )
  {
    linkItem = v2->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        sub_2213CDC(this, method);
      }
      v5 = !HIBYTE(linkItem[1].fields.viewObject) && !BYTE1(linkItem[2].klass) && !LOBYTE(linkItem[1].fields.selectNum);
      v2->fields.isEquipPress = v5;
    }
  }
}


void PartyOrganizationListViewDropObject__ReleaseItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_c *v17; // x0
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v19; // x1
  PartyOrganizationListViewItemDraw_o *v20; // x0

  if ( (byte_596C003 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C003 = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v9, v10, v11, v12, v13, v14);
    v17 = UnityEngine_Object_TypeInfo;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    this->fields.state = 0;
    if ( !*(&v17->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v17, v15, v16);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    {
      v20 = this->fields.itemDraw;
      if ( !v20 )
        sub_2213CDC(0, v19);
      PartyOrganizationListViewItemDraw__ClearItem(v20, 0);
    }
  }
}


void PartyOrganizationListViewDropObject__SetActiveGrandEffect(
        PartyOrganizationListViewDropObject_o *this,
        bool isActive,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( itemDraw )
    PartyOrganizationListViewItemDraw__SetActiveGrandEffect(itemDraw, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__SetDispEquipOnly(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v6; // x2

  if ( (byte_596C018 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_596C018 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0 )
  {
    sub_2213CDC(dispObject, flg);
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly((PartyOrganizationListViewItemDraw_o *)dispObject, flg, 0);
  PartyOrganizationListViewDropObject__SetEquipDisp(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__SetDispSwapGuide(
        PartyOrganizationListViewDropObject_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, isDisp);
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v9; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_596C017 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C017 = 1;
  }
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg, method);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality(equipDispBase, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.equipUIDragDrop;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
              Component_object,
              0,
              1,
              Component_object->klass[1]._1.implementedInterfaces),
            (Component_object = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0) )
      {
        sub_2213CDC(Component_object, v9);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, flg, 0);
    }
  }
}


void PartyOrganizationListViewDropObject__SetInput(
        PartyOrganizationListViewDropObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v8; // x1
  UIDragDropListViewItem_o *v9; // x0

  if ( (byte_596C007 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C007 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    v9 = this->fields.equipUIDragDrop;
    if ( !v9 )
      sub_2213CDC(0, v8);
    UIDragDropListViewItem__SetEnable(v9, isInput, 0);
  }
}


void PartyOrganizationListViewDropObject__SetItem(
        PartyOrganizationListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *equipUIDragDrop; // x22
  __int64 v9; // x1
  struct UIDragDropListViewItem_o *v10; // x0

  if ( (byte_596C005 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C005 = 1;
  }
  v7 = UnityEngine_Object_TypeInfo;
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  this->fields.state = 0;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, item, seed);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    v10 = this->fields.equipUIDragDrop;
    if ( !v10 )
      sub_2213CDC(0, v9);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, const MethodInfo *))v10->klass->vtable._5_SetBaseTransform.methodPtr)(
      v10,
      v10->klass->vtable._5_SetBaseTransform.method);
  }
  ListViewDropObject__SetItem_50818104((ListViewDropObject_o *)this, item, seed, 0);
}


void PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_596C006 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C006 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, isVisible, 0);
  equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(equipDispBase, 0, 0) )
  {
    v9 = this->fields.equipDispBase;
    if ( !v9 )
      sub_2213CDC(0, v8);
    UnityEngine_GameObject__SetActive(v9, isVisible, 0);
  }
}


void PartyOrganizationListViewDropObject__SetupDisp(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v6; // w1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v10; // x1
  PartyOrganizationListViewItemDraw_o *v11; // x0

  if ( (byte_596C00C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    byte_596C00C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewItem_TypeInfo )
    {
      v6 = (this->fields.dispMode & 0xFFFFFFFB) != 0;
    }
    else
    {
      v6 = 0;
      linkItem = 0;
    }
  }
  else
  {
    v6 = 0;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, v6, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v10);
    PartyOrganizationListViewItemDraw__SetItem(
      v11,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0,
      0);
  }
}