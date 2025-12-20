void EquipGraphListViewObject___ctor(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CA2B & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D2CA2B = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EquipGraphListViewObject__Awake(EquipGraphListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4D2CA22 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewItemDraw___);
    byte_4D2CA22 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewItemDraw___);
  this->fields.itemDraw = (struct EquipGraphListViewItemDraw_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *EquipGraphListViewObject__CreateDragObject(
        EquipGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4D2CA26 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
    byte_4D2CA26 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___)) == 0) )
  {
    sub_1C942F0(DragObject, v4);
  }
  EquipGraphListViewObject__Init_42911908((EquipGraphListViewObject_o *)DragObject, 2, 0, v6);
  return v5;
}


EquipGraphListViewItem_o *EquipGraphListViewObject__GetItem(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2CA24 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewItem_TypeInfo);
    byte_4D2CA24 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewItem_TypeInfo )
    return (EquipGraphListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EquipGraphListViewObject__Init(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        bool afterEndSelectConfirm,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  unsigned int v13; // w23
  int32_t dispMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  struct System_Action_o **p_callbackFunc; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w8
  struct System_Action_o *v32; // x19

  if ( (byte_4D2CA27 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewItem_TypeInfo);
    byte_4D2CA27 = 1;
  }
  if ( initMode == 4 )
  {
    EquipGraphListViewObject__SetupDisp(this, afterEndSelectConfirm, (const MethodInfo *)callbackFunc);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewItem_TypeInfo )
        v13 = initMode;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
    ((void (__fastcall *)(EquipGraphListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      v13 == 3,
      this->klass->vtable._9_SetInput.method);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C942F0(transform, v17);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callbackFunc,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( v13 <= 3 )
    {
      v31 = dword_CFE250[v13];
      this->fields.dispMode = v13;
      this->fields.state = v31;
    }
    if ( !state || dispMode != this->fields.dispMode )
      EquipGraphListViewObject__SetupDisp(this, afterEndSelectConfirm, v25);
    v32 = *p_callbackFunc;
    if ( *p_callbackFunc )
    {
      *p_callbackFunc = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)v25, v26, v27, v28, v29, v30);
      ((void (__fastcall *)(intptr_t, intptr_t))v32->fields.invoke_impl)(v32->fields.method_code, v32->fields.method);
    }
  }
}


void EquipGraphListViewObject__InitItem(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewObject__Init_42911908(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        bool afterEndSelectConfirm,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float v5; // s0
  int v6; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, 0, v5, *(UnityEngine_Vector3_o *)&v6, afterEndSelectConfirm, v4);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewObject__Init_42912704(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4
  int v6; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v6, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphListViewObject__Init_42912792(
        EquipGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float v5; // s0
  int v6; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  EquipGraphListViewObject__Init(this, initMode, callbackFunc, v5, *(UnityEngine_Vector3_o *)&v6, 0, v4);
}


void EquipGraphListViewObject__OnClickSelect(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  EquipGraphListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4D2CA29 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewItem_TypeInfo);
    sub_1C94098(&Method_EquipGraphListViewObject_OnClickSelect__);
    sub_1C94098(&StringLiteral_9889/*"OnClickSelectListView"*/);
    byte_4D2CA29 = 1;
  }
  linkItem = (EquipGraphListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewItem_TypeInfo )
    {
      if ( EquipGraphListViewItem__get_IsCanNotSelect(linkItem, 0) )
      {
        v5 = Method_EquipGraphListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_EquipGraphListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1C940B0(Method_EquipGraphListViewObject_OnClickSelect__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
        return;
      }
      linkItem = (EquipGraphListViewItem_o *)this->fields.manager;
      if ( linkItem )
      {
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)linkItem, 1, 0);
        linkItem = (EquipGraphListViewItem_o *)this->fields.manager;
        if ( linkItem )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)linkItem,
            (System_String_o *)StringLiteral_9889/*"OnClickSelectListView"*/,
            (Il2CppObject *)this,
            0);
          return;
        }
      }
    }
    sub_1C942F0(linkItem, method);
  }
}


void EquipGraphListViewObject__OnDestroy(EquipGraphListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4D2CA23 & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2CA23 = 1;
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


void EquipGraphListViewObject__OnLongPush(EquipGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D2CA2A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9950/*"OnLongPushListView"*/);
    byte_4D2CA2A = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C942F0(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9950/*"OnLongPushListView"*/, (Il2CppObject *)this, 0);
  }
}


void EquipGraphListViewObject__SetInput(EquipGraphListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v8; // x1
  EquipGraphListViewItemDraw_o *v9; // x0

  if ( (byte_4D2CA25 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewItem_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2CA25 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EquipGraphListViewItem_TypeInfo )
        v8 = this->fields.linkItem;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C942F0(0, v8);
    EquipGraphListViewItemDraw__SetInput(v9, (EquipGraphListViewItem_o *)v8, isInput, 0);
  }
}


void EquipGraphListViewObject__SetItem(
        EquipGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44621212((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void EquipGraphListViewObject__SetItem_42911516(
        EquipGraphListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void EquipGraphListViewObject__SetupDisp(
        EquipGraphListViewObject_o *this,
        bool afterEndSelectConfirm,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v9; // x1
  EquipGraphListViewItemDraw_o *v10; // x0

  if ( (byte_4D2CA28 & 1) == 0 )
  {
    sub_1C94098(&EquipGraphListViewItem_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2CA28 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EquipGraphListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EquipGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EquipGraphListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C942F0(0, v9);
    EquipGraphListViewItemDraw__SetItem(
      v10,
      (EquipGraphListViewItem_o *)linkItem,
      this->fields.dispMode,
      afterEndSelectConfirm,
      0);
  }
}


void EquipGraphListViewObject__add_callbackFunc(
        EquipGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2CA20 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2CA20 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  EquipGraphListViewObject__remove_callbackFunc(v11, v12, v13);
}


void EquipGraphListViewObject__remove_callbackFunc(
        EquipGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2CA21 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2CA21 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  EquipGraphListViewObject__Awake(v11, v12);
}