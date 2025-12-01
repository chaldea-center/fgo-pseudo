void MasterEquipSettingListViewObject___ctor(MasterEquipSettingListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC298E & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC298E = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MasterEquipSettingListViewObject__Awake(MasterEquipSettingListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4CC2986 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewItemDraw___);
    byte_4CC2986 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewItemDraw___);
  this->fields.itemDraw = (struct MasterEquipSettingListViewItemDraw_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *MasterEquipSettingListViewObject__CreateDragObject(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4CC298A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
    byte_4CC298A = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___)) == 0) )
  {
    sub_1C71608(DragObject, v4);
  }
  MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)DragObject, 2, 0, v6);
  return v5;
}


MasterEquipSettingListViewItem_o *MasterEquipSettingListViewObject__GetItem(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC2988 & 1) == 0 )
  {
    sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    byte_4CC2988 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterEquipSettingListViewItem_TypeInfo )
    return (MasterEquipSettingListViewItem_o *)this->fields.linkItem;
  return 0;
}


void MasterEquipSettingListViewObject__Init(
        MasterEquipSettingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v9; // w23
  int32_t dispMode; // w21
  int32_t state; // w22
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  int32_t v21; // w9
  int32_t v22; // w8

  if ( (byte_4CC298B & 1) == 0 )
  {
    sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    byte_4CC298B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterEquipSettingListViewItem_TypeInfo )
      v9 = initMode;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v9 != 0, 0);
  ((void (__fastcall *)(MasterEquipSettingListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v9 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(transform, v13);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v21 = 1;
  v22 = v9;
  switch ( v9 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v22 = v9;
      goto LABEL_14;
    case 3:
      v22 = 2;
LABEL_14:
      v21 = v9;
LABEL_15:
      this->fields.dispMode = v22;
      this->fields.state = v21;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_21;
    default:
LABEL_16:
      if ( state && dispMode == this->fields.dispMode )
      {
        if ( !callbackFunc )
          return;
        goto LABEL_19;
      }
LABEL_21:
      MasterEquipSettingListViewObject__SetupDisp(this, v20);
      if ( callbackFunc )
LABEL_19:
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          callbackFunc->fields.method);
      return;
  }
}


void MasterEquipSettingListViewObject__InitItem(MasterEquipSettingListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void MasterEquipSettingListViewObject__Init_34028592(
        MasterEquipSettingListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MasterEquipSettingListViewObject__Init(this, initMode, 0, v3);
}


void MasterEquipSettingListViewObject__OnClickSelect(
        MasterEquipSettingListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CC298D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9869/*"OnClickSelectListView"*/);
    byte_4CC298D = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C71608(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9869/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void MasterEquipSettingListViewObject__OnDestroy(MasterEquipSettingListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4CC2987 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2987 = 1;
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
    sub_1C71354(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void MasterEquipSettingListViewObject__SetInput(
        MasterEquipSettingListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  MasterEquipSettingListViewItemDraw_o *v10; // x0

  if ( (byte_4CC2989 & 1) == 0 )
  {
    sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2989 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterEquipSettingListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C71608(0, v9);
    MasterEquipSettingListViewItemDraw__SetInput(v10, (MasterEquipSettingListViewItem_o *)v9, isInput, v6);
  }
}


void MasterEquipSettingListViewObject__SetItem(
        MasterEquipSettingListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void MasterEquipSettingListViewObject__SetItem_34030956(
        MasterEquipSettingListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void MasterEquipSettingListViewObject__SetupDisp(MasterEquipSettingListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  MasterEquipSettingListViewItemDraw_o *v9; // x0

  if ( (byte_4CC298C & 1) == 0 )
  {
    sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC298C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MasterEquipSettingListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MasterEquipSettingListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C71608(0, v7);
    MasterEquipSettingListViewItemDraw__SetItem(
      v9,
      (MasterEquipSettingListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void MasterEquipSettingListViewObject__add_callbackFunc(
        MasterEquipSettingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipSettingListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC2984 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2984 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipSettingListViewObject_o *)sub_1C719A4(v8);
  MasterEquipSettingListViewObject__remove_callbackFunc(v11, v12, v13);
}


void MasterEquipSettingListViewObject__remove_callbackFunc(
        MasterEquipSettingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipSettingListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC2985 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2985 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipSettingListViewObject_o *)sub_1C719A4(v8);
  MasterEquipSettingListViewObject__Awake(v11, v12);
}