void CheckMaterialSvtListViewObject___ctor(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CF287C & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    byte_4CF287C = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CheckMaterialSvtListViewObject__Awake(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF2870 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewItemDraw___);
    byte_4CF2870 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C7BD40(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewItemDraw___);
  this->fields.itemDraw = (struct CheckMaterialSvtListViewItemDraw_o *)Component_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void CheckMaterialSvtListViewObject__CallOnMoveEnd(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_1C7BA8C(p_onMoveEnd, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


UnityEngine_GameObject_o *CheckMaterialSvtListViewObject__CreateDragObject(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  CheckMaterialSvtListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4CF2875 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2875 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___)) == 0 )
    {
      sub_1C7BD40(Component_object, v5);
    }
    v7 = (CheckMaterialSvtListViewObject_o *)Component_object;
    CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Component_object, 2, 0, v6);
    CheckMaterialSvtListViewObject__SetupDisp(v7, v8);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CheckMaterialSvtListViewItem_o *CheckMaterialSvtListViewObject__GetItem(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CF2872 & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewItem_TypeInfo);
    byte_4CF2872 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CheckMaterialSvtListViewItem_TypeInfo )
    return (CheckMaterialSvtListViewItem_o *)this->fields.linkItem;
  return 0;
}


int32_t CheckMaterialSvtListViewObject__GetState(
        CheckMaterialSvtListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  if ( initMode == 3 )
    return 3;
  return 0;
}


void CheckMaterialSvtListViewObject__Init(
        CheckMaterialSvtListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 naturalAligment; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  int32_t v21; // w8

  if ( (byte_4CF2876 & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewItem_TypeInfo);
    byte_4CF2876 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewItem_TypeInfo )
  {
    sub_1C7C0DC(linkItem);
LABEL_7:
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(CheckMaterialSvtListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v13, v14, v15, v16, v17, v18);
  if ( initMode == 1 )
    goto LABEL_13;
  if ( initMode == 3 )
  {
    v21 = 2;
    this->fields.dispMode = 2;
  }
  else
  {
    if ( initMode == 2 )
    {
LABEL_13:
      this->fields.dispMode = initMode;
      v20 = 1;
      v21 = initMode;
      goto LABEL_20;
    }
    v21 = 0;
    this->fields.dispMode = 0;
    if ( (unsigned int)initMode < 3 )
    {
      v20 = 1;
      goto LABEL_20;
    }
  }
  if ( initMode == 3 )
    v20 = 3;
  else
    v20 = 0;
LABEL_20:
  this->fields.state = v20;
  if ( !state || dispMode != v21 )
    CheckMaterialSvtListViewObject__SetupDisp(this, v19);
  CheckMaterialSvtListViewObject__CallOnMoveEnd(this, v19);
}


void CheckMaterialSvtListViewObject__InitItem(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


bool CheckMaterialSvtListViewObject__IsCanDrag(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4CF2874 & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C7BAE8(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2874 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_13;
  naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewManager_TypeInfo )
  {
    sub_1C7C0DC(manager);
    goto LABEL_13;
  }
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
  {
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0);
      return 0;
    }
LABEL_13:
    sub_1C7BD40(manager, method);
  }
  return 0;
}


void CheckMaterialSvtListViewObject__OnClickSelect(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  CheckMaterialSvtListViewObject_o *v2; // x19
  UnityEngine_Component_o *manager; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v5; // x2

  v2 = this;
  if ( (byte_4CF2878 & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewManager_TypeInfo);
    this = (CheckMaterialSvtListViewObject_o *)sub_1C7BAE8(&StringLiteral_9893/*"OnClickSelectListView"*/);
    byte_4CF2878 = 1;
  }
  if ( v2->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( !manager
      || (naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewManager_TypeInfo )
    {
      sub_1C7BD40(this, method);
    }
    v5 = (Il2CppObject *)CheckMaterialSvtListViewObject__GetItem(v2, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9893/*"OnClickSelectListView"*/, v5, 0);
  }
}


void CheckMaterialSvtListViewObject__OnDestroy(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4CF2871 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2871 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C7BA8C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void CheckMaterialSvtListViewObject__OnDragDropStart(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  CheckMaterialSvtListViewObject_o *v2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x10

  v2 = this;
  if ( (byte_4CF287A & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewManager_TypeInfo);
    this = (CheckMaterialSvtListViewObject_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF287A = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewManager_TypeInfo )
  {
    sub_1C7BD40(this, method);
  }
}


void CheckMaterialSvtListViewObject__OnLongPush(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  void *linkItem; // x0
  CheckMaterialSvtListViewItem_c *v4; // x1
  __int64 naturalAligment; // x9
  __int64 v6; // x9

  if ( (byte_4CF2879 & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C7BAE8(&CheckMaterialSvtListViewManager_TypeInfo);
    byte_4CF2879 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = CheckMaterialSvtListViewItem_TypeInfo;
    naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)naturalAligment
      && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * naturalAligment - 8) == CheckMaterialSvtListViewItem_TypeInfo )
    {
      linkItem = this->fields.manager;
      if ( !linkItem )
        goto LABEL_11;
      v6 = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)v6
        && *(CheckMaterialSvtListViewManager_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v6 - 8) == CheckMaterialSvtListViewManager_TypeInfo )
      {
        return;
      }
    }
    sub_1C7C0DC(linkItem);
LABEL_11:
    sub_1C7BD40(linkItem, v4);
  }
}


void CheckMaterialSvtListViewObject__OnLongRelease(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CF287B & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9954/*"OnLongPushListView"*/);
    sub_1C7BAE8(&StringLiteral_4039/*"CancelDragEnd"*/);
    byte_4CF287B = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager )
    {
      naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CheckMaterialSvtListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[1].klass) )
          return;
        UnityEngine_Component__SendMessage_71841360(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4039/*"CancelDragEnd"*/,
          0);
        manager = this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9954/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
    }
    sub_1C7BD40(manager, method);
  }
}


void CheckMaterialSvtListViewObject__SetInput(
        CheckMaterialSvtListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x3
  CheckMaterialSvtListViewItemDraw_o *manager; // x0
  __int64 v8; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  CheckMaterialSvtListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CF2873 & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C7BAE8(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2873 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    manager = (CheckMaterialSvtListViewItemDraw_o *)this->fields.manager;
    if ( manager
      && ((v8 = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment,
           manager->klass->_2.naturalAligment < (unsigned int)v8)
       || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != CheckMaterialSvtListViewManager_TypeInfo) )
    {
      sub_1C7C0DC(manager);
    }
    else
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem
        || (naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment,
            linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        if ( !manager || (manager = this->fields.itemDraw) == 0 )
          sub_1C7BD40(manager, linkItem);
        CheckMaterialSvtListViewItemDraw__SetInput(manager, (CheckMaterialSvtListViewItem_o *)linkItem, 1, v6);
        return;
      }
    }
    sub_1C7C0DC(linkItem);
    CheckMaterialSvtListViewObject__IsCanDrag(v11, v12);
  }
}


void CheckMaterialSvtListViewObject__SetItem(
        CheckMaterialSvtListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44356304((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CheckMaterialSvtListViewObject__SetItem_49358140(
        CheckMaterialSvtListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CheckMaterialSvtListViewObject__SetupDisp(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  CheckMaterialSvtListViewItemDraw_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4CF2877 & 1) == 0 )
  {
    sub_1C7BAE8(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_1C7BAE8(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2877 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
      || *(CheckMaterialSvtListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != CheckMaterialSvtListViewManager_TypeInfo )
    {
      sub_1C7C0DC(this->fields.manager);
      goto LABEL_18;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v6
      && (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_18:
    sub_1C7C0DC(linkItem);
    goto LABEL_19;
  }
  v7 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (CheckMaterialSvtListViewItemDraw_o *)UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( manager )
    {
      v9 = this->fields.itemDraw;
      if ( v9 )
      {
        CheckMaterialSvtListViewItemDraw__SetItem(
          v9,
          (CheckMaterialSvtListViewItem_o *)linkItem,
          this->fields.dispMode,
          1,
          manager[83],
          v11);
        return;
      }
    }
LABEL_19:
    sub_1C7BD40(v9, v10);
  }
}


void CheckMaterialSvtListViewObject__add_onMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CheckMaterialSvtListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CF286E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CF286E = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  CheckMaterialSvtListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void CheckMaterialSvtListViewObject__remove_onMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CheckMaterialSvtListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CF286F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CF286F = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  CheckMaterialSvtListViewObject__Awake(v11, v12);
}