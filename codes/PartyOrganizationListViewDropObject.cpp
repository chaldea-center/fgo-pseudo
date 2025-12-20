void PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  if ( (byte_4D281DC & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_4D281DC = 1;
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D281C2 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4D281C2 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  ListViewObject__Awake((ListViewObject_o *)this, 0);
}


bool PartyOrganizationListViewDropObject__ClearItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  _BOOL4 isBusy; // w21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v17; // x1
  PartyOrganizationListViewItemDraw_o *v18; // x0

  if ( (byte_4D281C6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281C6 = 1;
  }
  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
    this->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v10, v11, v12, v13, v14, v15);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    {
      v18 = this->fields.itemDraw;
      if ( !v18 )
        sub_1C942F0(0, v17);
      PartyOrganizationListViewItemDraw__ClearItem(v18, 0);
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

  if ( (byte_4D281CB & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    byte_4D281CB = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0) )
  {
    sub_1C942F0(DragObject, v4);
  }
  v7 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_34892636((PartyOrganizationListViewDropObject_o *)DragObject, 2, v6);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v7, 1, v9);
  else
    PartyOrganizationListViewDropObject__HideRestrictionObject(v7, v8);
  return v5;
}


UnityEngine_GameObject_o *PartyOrganizationListViewDropObject__CreateDragObject_34893000(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4D281CC & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281CC = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject )
    goto LABEL_11;
  v7 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             DragObject,
                                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !DragObject )
    goto LABEL_11;
  v9 = DragObject;
  PartyOrganizationListViewDropObject__Init_34892636((PartyOrganizationListViewDropObject_o *)DragObject, 2, v8);
  monitor = (UnityEngine_Object_o *)v9[6].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
  {
    DragObject = (UnityEngine_GameObject_o *)v9[6].monitor;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0);
      return v7;
    }
LABEL_11:
    sub_1C942F0(DragObject, v6);
  }
  return v7;
}


void PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D281D3 & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281D3 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C9403C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
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
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v11; // x1
  char *Component_object; // x0
  const MethodInfo *v13; // x2
  struct UnityEngine_GameObject_o *DragObject_34893000; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x8
  float v24; // s11
  float v25; // s4
  float v26; // s5
  float v27; // s3
  char *v28; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4D281D2 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C94098(&StringLiteral_9192/*"MoveEnd"*/);
    byte_4D281D2 = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    if ( !isEquipSwap )
    {
      Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_object )
        goto LABEL_22;
      (*(void (__fastcall **)(char *, _QWORD, float))(*(_QWORD *)Component_object + 440LL))(
        Component_object,
        *(_QWORD *)(*(_QWORD *)Component_object + 448LL),
        0.0);
    }
    this->fields.dispMode = 2;
    PartyOrganizationListViewDropObject__SetupDisp(this, v11);
    DragObject_34893000 = PartyOrganizationListViewDropObject__CreateDragObject_34893000(this, -100, v13);
    this->fields.dragObject = DragObject_34893000;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.dragObject,
      (int32_t)DragObject_34893000,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    Component_object = (char *)this->fields.dragObject;
    if ( !Component_object )
      goto LABEL_22;
    Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    if ( !Component_object )
      goto LABEL_22;
    if ( isEquipSwap )
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        1,
        v21);
    else
      PartyOrganizationListViewDropObject__HideRestrictionObject(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        v11);
  }
  v22 = *p_dragObject;
  Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
  if ( PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    v23 = *p_dragObject;
    if ( !v22 )
      goto LABEL_22;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo);
    Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
    v23 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_22;
  }
  v24 = **((float **)Component_object + 23);
  Component_object = (char *)UnityEngine_GameObject__get_transform(v23, 0);
  if ( !Component_object )
    goto LABEL_22;
  Component_object = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_22;
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  v44 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v43, 0);
  v25 = v44.fields.y;
  v26 = v44.fields.z;
  v44.fields.y = v44.fields.x;
  v44.fields.z = v25;
  v27 = v26;
  Component_object = (char *)TweenPosition__Begin(v22, v24, *(UnityEngine_Vector3_o *)&v44.fields.y, 0);
  if ( !Component_object )
LABEL_22:
    sub_1C942F0(Component_object, v11);
  v28 = Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v28 + 10) = gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v28 + 80), (int32_t)gameObject, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_9192/*"MoveEnd"*/;
  *((_QWORD *)v28 + 11) = StringLiteral_9192/*"MoveEnd"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v28 + 88), v36, v37, v38, v39, v40, v41, v42);
}


PartyOrganizationListViewItem_o *PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D281C4 & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    byte_4D281C4 = 1;
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
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  struct PartyOrganizationListViewItemDraw_o *v5; // x0

  if ( (byte_4D281DB & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281DB = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1C942F0(0, v4);
    if ( !v5->fields._IsGrandRestriction_k__BackingField || !v5->fields._IsMyServantOrNpc_k__BackingField )
      PartyOrganizationListViewItemDraw__HideDisplayRestrictionObject(v5, 0);
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
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v17; // w24
  int32_t dispMode; // w23
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w8
  int32_t v37; // w8
  int32_t v38; // w9
  GrandQuestFolderBoardItem_c *klass; // x19
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4D281CD & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    byte_4D281CD = 1;
  }
  if ( initMode == 10 )
  {
    PartyOrganizationListViewDropObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewItem_TypeInfo )
        v17 = initMode;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    PartyOrganizationListViewDropObject__SetVisible(this, v17 != 0 && v17 != 5, (const MethodInfo *)callbackFunc);
    ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      (v17 == 4) | (unsigned int)(v17 == 8),
      this->klass->vtable._9_SetInput.method);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C942F0(transform, v21);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callbackFunc,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v36 = 1;
    switch ( v17 )
    {
      case 0:
      case 1:
      case 2:
        goto LABEL_16;
      case 3:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        PartyOrganizationListViewDropObject__IntoStart(this, delay, v29);
        return;
      case 4:
        v36 = 3;
        v17 = 2;
LABEL_16:
        this->fields.dispMode = v17;
        this->fields.state = v36;
        goto LABEL_17;
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
LABEL_17:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_27;
LABEL_26:
        PartyOrganizationListViewDropObject__SetupDisp(this, v29);
LABEL_27:
        klass = p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0;
          sub_1C9403C(p_callbackFunc, 0, (int32_t)v30, v31, v32, v33, v34, v35);
          ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
            klass->_1.element_class,
            *(_QWORD *)&klass->_1.byval_arg.bits);
        }
        break;
    }
  }
}


void PartyOrganizationListViewDropObject__Init_34892636(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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


void PartyOrganizationListViewDropObject__Init_34895140(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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


void PartyOrganizationListViewDropObject__Init_34895268(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4D281D0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_7760/*"IntoMove2"*/);
    byte_4D281D0 = 1;
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
    sub_1C942F0(dragObject, method);
  }
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_7760/*"IntoMove2"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_7760/*"IntoMove2"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8[3].fields, v16, v17, v18, v19, v20, v21, v22);
}


void PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4D281D1 & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    byte_4D281D1 = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v6, v7, v8, v9, v10, v11);
  PartyOrganizationListViewDropObject__MoveEnd(this, v12);
}


void PartyOrganizationListViewDropObject__IntoStart(
        PartyOrganizationListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D281CF & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_7759/*"IntoMove"*/);
    byte_4D281CF = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v17 = UnityEngine_Transform__TransformPoint_72137752(
                (UnityEngine_Transform_o *)dragObject,
                -3000.0,
                0.0,
                0.0,
                0),
        !transform) )
  {
    sub_1C942F0(dragObject, v14);
  }
  UnityEngine_Transform__set_position(transform, v17, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7759/*"IntoMove"*/,
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

  if ( (byte_4D281CA & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewManager_TypeInfo);
    byte_4D281CA = 1;
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
      sub_1C942F0(manager, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._Name_k__BackingField) = 0;
  LODWORD(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D281D6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9866/*"OnClickListDropEquip"*/);
    byte_4D281D6 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C942F0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9866/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D281D4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9868/*"OnClickListDropServant"*/);
    byte_4D281D4 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C942F0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9868/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D281C3 & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281C3 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C9403C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D281D5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9869/*"OnClickListDropServantDetail"*/);
    byte_4D281D5 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C942F0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9869/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D281D7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9867/*"OnClickListDropEquipDetail"*/);
    byte_4D281D7 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C942F0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9867/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0);
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

  v2 = this;
  if ( (byte_4D281D8 & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    byte_4D281D8 = 1;
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
        sub_1C942F0(this, method);
      }
      v2->fields.isEquipPress = !LOBYTE(linkItem[2].monitor)
                             && !BYTE2(linkItem[2].monitor)
                             && !LOBYTE(linkItem[1].fields.selectNum);
    }
  }
}


void PartyOrganizationListViewDropObject__ReleaseItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v16; // x1
  PartyOrganizationListViewItemDraw_o *v17; // x0

  if ( (byte_4D281C5 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281C5 = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
    this->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v9, v10, v11, v12, v13, v14);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    {
      v17 = this->fields.itemDraw;
      if ( !v17 )
        sub_1C942F0(0, v16);
      PartyOrganizationListViewItemDraw__ClearItem(v17, 0);
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

  if ( (byte_4D281DA & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4D281DA = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0 )
  {
    sub_1C942F0(dispObject, flg);
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly((PartyOrganizationListViewItemDraw_o *)dispObject, flg, 0);
  PartyOrganizationListViewDropObject__SetEquipDisp(this, 1, v6);
}


void PartyOrganizationListViewDropObject__SetDispSwapGuide(
        PartyOrganizationListViewDropObject_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C942F0(0, isDisp);
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, 0);
}


void PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4D281D9 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281D9 = 1;
  }
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipDispBase, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.equipUIDragDrop;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
              Component_object,
              0,
              1,
              Component_object->klass[1]._1.implementedInterfaces),
            (Component_object = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0) )
      {
        sub_1C942F0(Component_object, v7);
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
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v6; // x1
  UIDragDropListViewItem_o *v7; // x0

  if ( (byte_4D281C9 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281C9 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    v7 = this->fields.equipUIDragDrop;
    if ( !v7 )
      sub_1C942F0(0, v6);
    UIDragDropListViewItem__SetEnable(v7, isInput, 0);
  }
}


void PartyOrganizationListViewDropObject__SetItem(
        PartyOrganizationListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x22
  __int64 v8; // x1
  struct UIDragDropListViewItem_o *v9; // x0

  if ( (byte_4D281C7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281C7 = 1;
  }
  this->fields.state = 0;
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    v9 = this->fields.equipUIDragDrop;
    if ( !v9 )
      sub_1C942F0(0, v8);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, const MethodInfo *))v9->klass->vtable._5_SetBaseTransform.methodPtr)(
      v9,
      v9->klass->vtable._5_SetBaseTransform.method);
  }
  ListViewDropObject__SetItem_44593180((ListViewDropObject_o *)this, item, seed, 0);
}


void PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4D281C8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D281C8 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, isVisible, 0);
  equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipDispBase, 0, 0) )
  {
    v7 = this->fields.equipDispBase;
    if ( !v7 )
      sub_1C942F0(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
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
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_4D281CE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    byte_4D281CE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = (this->fields.dispMode & 0xFFFFFFFB) != 0;
LABEL_8:
  PartyOrganizationListViewDropObject__SetVisible(this, v6, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C942F0(0, v8);
    PartyOrganizationListViewItemDraw__SetItem(
      v9,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0,
      0);
  }
}