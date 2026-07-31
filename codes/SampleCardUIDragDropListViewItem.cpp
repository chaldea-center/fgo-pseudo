void SampleCardUIDragDropListViewItem___ctor(SampleCardUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void SampleCardUIDragDropListViewItem__CardDragReturnEnd(
        SampleCardUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 naturalAligment; // x10

  if ( (byte_5935D9A & 1) == 0 )
  {
    sub_21FFC50(&SampleCardListViewObject_TypeInfo);
    byte_5935D9A = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !mListViewObject
    || (naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo )
  {
    sub_21FFECC(v4, v5);
  }
  SampleCardListViewObject__Init_44527476((SampleCardListViewObject_o *)mListViewObject, 6, v6);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardUIDragDropListViewItem__CardDragReturnStart(
        SampleCardUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  float y; // s3
  float z; // s4
  float v10; // s3
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_5935D99 & 1) == 0 )
  {
    sub_21FFC50(&SampleCardListViewObject_TypeInfo);
    sub_21FFC50(&StringLiteral_4488/*"CardDragReturnEnd"*/);
    byte_5935D99 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SampleCardListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewObject_TypeInfo )
      v5 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_16;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_16;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v5 )
    goto LABEL_16;
  v7 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v5, 0);
  if ( !dragObject )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v7
    || (v27 = UnityEngine_Transform__InverseTransformPoint(v7, position, 0),
        y = v27.fields.y,
        z = v27.fields.z,
        v27.fields.y = v27.fields.x,
        v27.fields.z = y,
        v10 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    0.2,
                                                    *(UnityEngine_Vector3_o *)&v27.fields.y,
                                                    0)) == 0) )
  {
LABEL_16:
    sub_21FFECC(dragObject, method);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[3].monitor = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11[3].monitor, (int32_t)gameObject, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_4488/*"CardDragReturnEnd"*/;
  v11[3].fields.m_CachedPtr = StringLiteral_4488/*"CardDragReturnEnd"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11[3].fields, v19, v20, v21, v22, v23, v24, v25);
}


void SampleCardUIDragDropListViewItem__OnDragDropRelease(
        SampleCardUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  SampleCardUIDragDropListViewItem_o *v4; // x20
  SampleCardListViewObject_o *mListViewObject; // x21
  __int64 naturalAligment; // x10
  SampleCardListViewManager_o *manager; // x23
  SampleCardListViewManager_c *klass; // x8
  __int64 v9; // x10
  SampleCardUIDragDropListViewItem_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *Component_object; // x24
  UnityEngine_GameObject_o *gameObject; // x25
  ListViewDropInfo_o *v17; // x26
  __int64 v18; // x2
  UnityEngine_Object_o *monitor; // x23
  SampleCardListViewItem_o *Item; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct ListViewObject_o *viewObject; // x8
  __int64 v24; // x11
  UnityEngine_Object_o *v25; // x24
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2

  v4 = this;
  if ( (byte_5935D98 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    sub_21FFC50(&ListViewDropInfo_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SampleCardListViewManager_TypeInfo);
    this = (SampleCardUIDragDropListViewItem_o *)sub_21FFC50(&SampleCardListViewObject_TypeInfo);
    byte_5935D98 = 1;
  }
  mListViewObject = (SampleCardListViewObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_37;
  naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_37;
  if ( (SampleCardListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo )
    goto LABEL_37;
  this = (SampleCardUIDragDropListViewItem_o *)SampleCardListViewObject__GetItem(
                                                 (SampleCardListViewObject_o *)v4->fields.mListViewObject,
                                                 (const MethodInfo *)surface);
  manager = (SampleCardListViewManager_o *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_37;
  klass = manager->klass;
  v9 = SampleCardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v9
    || (SampleCardListViewManager_c *)klass->_2.typeHierarchy[v9 - 1] != SampleCardListViewManager_TypeInfo )
  {
    goto LABEL_37;
  }
  v10 = this;
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))klass->vtable._9_ItemDragEnd.methodPtr)(
    mListViewObject->fields.manager,
    klass->vtable._9_ItemDragEnd.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  this = (SampleCardUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 || !v10 )
    goto LABEL_27;
  if ( !surface )
    goto LABEL_37;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  v17 = (ListViewDropInfo_o *)sub_21FFEBC(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v17, gameObject, surface, 0);
  this = (SampleCardUIDragDropListViewItem_o *)SampleCardListViewManager__IsItemDropSurface(manager, v17, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  if ( !Component_object )
    goto LABEL_37;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, surface, v18);
  this = (SampleCardUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_27:
    SampleCardUIDragDropListViewItem__CardDragReturnStart(v4, (const MethodInfo *)surface);
    return;
  }
  if ( !monitor )
    goto LABEL_37;
  Item = SampleCardListViewDropObject__GetItem((SampleCardListViewDropObject_o *)monitor, 0);
  if ( !Item )
    goto LABEL_36;
  viewObject = Item->fields.viewObject;
  Item->fields.isDeck = 0;
  if ( viewObject
    && (v24 = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)v24) )
  {
    v25 = (SampleCardListViewObject_c *)viewObject->klass->_2.typeHierarchy[v24 - 1] == SampleCardListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)viewObject
        : 0LL;
  }
  else
  {
    v25 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  this = (SampleCardUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v25, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  if ( !v25 )
LABEL_37:
    sub_21FFECC(this, surface);
  SampleCardListViewObject__Init_44527476((SampleCardListViewObject_o *)v25, 6, v26);
LABEL_36:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0);
  SampleCardListViewObject__Init_44527476(mListViewObject, 1, v27);
  BYTE4(v10->fields.dragObject) = 1;
  ((void (__fastcall *)(UnityEngine_Object_o *, SampleCardUIDragDropListViewItem_o *, const char *))monitor->klass[1]._1.name)(
    monitor,
    v10,
    monitor->klass[1]._1.namespaze);
  SampleCardListViewDropObject__Init_44440780((SampleCardListViewDropObject_o *)monitor, 6, 0);
}


void SampleCardUIDragDropListViewItem__OnDragDropStart(
        SampleCardUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  SampleCardListViewObject_o *mListViewObject; // x19
  __int64 naturalAligment; // x10

  if ( (byte_5935D97 & 1) == 0 )
  {
    sub_21FFC50(&SampleCardListViewObject_TypeInfo);
    byte_5935D97 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mListViewObject = (SampleCardListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo
    || (SampleCardListViewObject__Init_44527476(mListViewObject, 1, v5), (manager = mListViewObject->fields.manager) == 0) )
  {
    sub_21FFECC(manager, v4);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._8_ItemDragStart.methodPtr)(
    manager,
    manager->klass->vtable._8_ItemDragStart.method);
}