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
  const MethodInfo *v5; // x2
  __int64 naturalAligment; // x10

  if ( (byte_4C40786 & 1) == 0 )
  {
    sub_1C37058(&SampleCardListViewObject_TypeInfo);
    byte_4C40786 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !mListViewObject
    || (naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo )
  {
    sub_1C372B4(v4);
  }
  SampleCardListViewObject__Init_37643380((SampleCardListViewObject_o *)mListViewObject, 6, v5);
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
  float y; // s4
  float z; // s5
  float v10; // s3
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C40785 & 1) == 0 )
  {
    sub_1C37058(&SampleCardListViewObject_TypeInfo);
    sub_1C37058(&StringLiteral_4327/*"CardDragReturnEnd"*/);
    byte_4C40785 = 1;
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
    || (v19 = UnityEngine_Transform__InverseTransformPoint(v7, position, 0),
        y = v19.fields.y,
        z = v19.fields.z,
        v19.fields.y = v19.fields.x,
        v19.fields.z = y,
        v10 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    0.2,
                                                    *(UnityEngine_Vector3_o *)&v19.fields.y,
                                                    0)) == 0) )
  {
LABEL_16:
    sub_1C372B4(dragObject);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[3].monitor = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11[3].monitor, (int32_t)gameObject, v13, v14);
  v15 = StringLiteral_4327/*"CardDragReturnEnd"*/;
  v11[3].fields.m_CachedPtr = StringLiteral_4327/*"CardDragReturnEnd"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11[3].fields, v15, v16, v17);
}


void SampleCardUIDragDropListViewItem__OnDragDropRelease(
        SampleCardUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  SampleCardUIDragDropListViewItem_o *v4; // x20
  SampleCardListViewObject_o *mListViewObject; // x21
  __int64 naturalAligment; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  SampleCardUIDragDropListViewItem_o *v9; // x22
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *Component_object; // x23
  UnityEngine_GameObject_o *gameObject; // x24
  ListViewDropInfo_o *v13; // x25
  SampleCardListViewManager_o *v14; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *monitor; // x23
  SampleCardListViewItem_o *Item; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v19; // x11
  UnityEngine_Object_o *v20; // x24
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2

  v4 = this;
  if ( (byte_4C40784 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    sub_1C37058(&ListViewDropInfo_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SampleCardListViewManager_TypeInfo);
    this = (SampleCardUIDragDropListViewItem_o *)sub_1C37058(&SampleCardListViewObject_TypeInfo);
    byte_4C40784 = 1;
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
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_37;
  v8 = SampleCardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v8
    || (SampleCardListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != SampleCardListViewManager_TypeInfo )
  {
    goto LABEL_37;
  }
  v9 = this;
  ((void (__fastcall *)(struct ListViewManager_o *__return_ptr, struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    mListViewObject->fields.manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0, 0);
  if ( !v9 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  if ( !surface )
    goto LABEL_37;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  v13 = (ListViewDropInfo_o *)sub_1C372A4(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v13, gameObject, surface, 0);
  this = (SampleCardUIDragDropListViewItem_o *)SampleCardListViewManager__IsItemDropSurface(v14, v13, v15);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  if ( !Component_object )
    goto LABEL_37;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_27:
    SampleCardUIDragDropListViewItem__CardDragReturnStart(v4, v10);
    return;
  }
  if ( !monitor )
    goto LABEL_37;
  Item = SampleCardListViewDropObject__GetItem((SampleCardListViewDropObject_o *)monitor, v10);
  if ( !Item )
    goto LABEL_36;
  viewObject = Item->fields.viewObject;
  Item->fields.isDeck = 0;
  if ( viewObject
    && (v19 = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)v19) )
  {
    v20 = (SampleCardListViewObject_c *)viewObject->klass->_2.typeHierarchy[v19 - 1] == SampleCardListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)viewObject
        : 0LL;
  }
  else
  {
    v20 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  if ( !v20 )
LABEL_37:
    sub_1C372B4(this);
  SampleCardListViewObject__Init_37643380((SampleCardListViewObject_o *)v20, 6, v21);
LABEL_36:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0);
  SampleCardListViewObject__Init_37643380(mListViewObject, 1, v22);
  BYTE4(v9->fields.dragObject) = 1;
  ((void (__fastcall *)(UnityEngine_Object_o *, SampleCardUIDragDropListViewItem_o *, const char *))monitor->klass[1]._1.name)(
    monitor,
    v9,
    monitor->klass[1]._1.namespaze);
  SampleCardListViewDropObject__Init_37635012((SampleCardListViewDropObject_o *)monitor, 6, v23);
}


void SampleCardUIDragDropListViewItem__OnDragDropStart(
        SampleCardUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  const MethodInfo *v4; // x2
  SampleCardListViewObject_o *mListViewObject; // x19
  __int64 naturalAligment; // x10

  if ( (byte_4C40783 & 1) == 0 )
  {
    sub_1C37058(&SampleCardListViewObject_TypeInfo);
    byte_4C40783 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mListViewObject = (SampleCardListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo
    || (SampleCardListViewObject__Init_37643380(mListViewObject, 1, v4), (manager = mListViewObject->fields.manager) == 0) )
  {
    sub_1C372B4(manager);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._8_ItemDragStart.methodPtr)(
    manager,
    manager->klass->vtable._8_ItemDragStart.method);
}