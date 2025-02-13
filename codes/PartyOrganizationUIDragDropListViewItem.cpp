void __fastcall PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  if ( (byte_4BD8386 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationUIDragDropListViewItem_TypeInfo);
    byte_4BD8386 = 1;
  }
  LODWORD(PartyOrganizationUIDragDropListViewItem_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationUIDragDropListViewItem_StaticFields)1045220557;
}


void __fastcall PartyOrganizationUIDragDropListViewItem___ctor(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__DragEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewItem_o *v2; // x19
  PartyOrganizationUIDragDropListViewItem_o **mListViewObject; // x8
  __int64 methodPtr_low; // x11
  PartyOrganizationUIDragDropListViewItem_c *klass; // x8
  __int64 v6; // x10

  v2 = this;
  if ( (byte_4BD8383 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_1C21E38(&PartyOrganizationListViewObject_TypeInfo);
    byte_4BD8383 = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewItem_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE((*mListViewObject)[2].fields.mTrans) < (unsigned int)methodPtr_low)
    || *((PartyOrganizationListViewObject_c **)(*mListViewObject)[1].fields.mRoot + methodPtr_low - 1) != PartyOrganizationListViewObject_TypeInfo
    || (this = mListViewObject[5]) == 0LL
    || (klass = this->klass,
        v6 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v6)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1C22094(this, method);
  }
  ((void (*)(void))klass[1]._1.gc_desc)();
}


void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_4BD8385 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewObject_TypeInfo);
    sub_1C21E38(&StringLiteral_5509/*"DragEnd"*/);
    byte_4BD8385 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_1C22094(v4, v5);
  }
  PartyOrganizationListViewObject__Init_33189104((PartyOrganizationListViewObject_o *)mListViewObject, 3, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5509/*"DragEnd"*/,
    0.1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  int v8; // s0
  PartyOrganizationUIDragDropListViewItem_c *v11; // x0
  UnityEngine_GameObject_o *v12; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BD8384 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewObject_TypeInfo);
    sub_1C21E38(&PartyOrganizationUIDragDropListViewItem_TypeInfo);
    sub_1C21E38(&StringLiteral_5510/*"DragReturnEnd"*/);
    byte_4BD8384 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewObject_TypeInfo )
      v5 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v5 )
    goto LABEL_18;
  v7 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v5, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v7 )
    goto LABEL_18;
  v19 = UnityEngine_Transform__InverseTransformPoint(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  v12 = this->fields.dragObject;
  x = v19.fields.x;
  y = v19.fields.y;
  z = v19.fields.z;
  if ( !PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo);
    v11 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v11->static_fields->ACTION_TIME, v20, 0LL);
  if ( !dragObject )
LABEL_18:
    sub_1C22094(dragObject, method);
  v16 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[3].monitor = gameObject;
  sub_1C21DDC(&v16[3].monitor, gameObject);
  v18 = StringLiteral_5510/*"DragReturnEnd"*/;
  *(_QWORD *)&v16[3].fields.m_CachedPtr = StringLiteral_5510/*"DragReturnEnd"*/;
  sub_1C21DDC(&v16[3].fields, v18);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewItem_o *v4; // x19
  PartyOrganizationListViewObject_o *mListViewObject; // x21
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewItem_o *v9; // x22
  __int64 v10; // x11
  PartyOrganizationListViewManager_o *v11; // x23
  UnityEngine_Object_o *Component_object; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v14; // x25
  UnityEngine_Object_o *monitor; // x23
  PartyOrganizationListViewItem_o *v16; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v18; // x11
  UnityEngine_Object_o *v19; // x24

  v4 = this;
  if ( (byte_4BD8382 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    sub_1C21E38(&ListViewDropInfo_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewManager_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_1C21E38(&StringLiteral_5509/*"DragEnd"*/);
    byte_4BD8382 = 1;
  }
  mListViewObject = (PartyOrganizationListViewObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_42;
  methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    goto LABEL_42;
  }
  Item = PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v4->fields.mListViewObject, 0LL);
  manager = mListViewObject->fields.manager;
  v9 = Item;
  if ( manager
    && (v10 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v11 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)surface,
                                                        0LL,
                                                        0LL);
  if ( !v9 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_32;
  if ( !surface )
    goto LABEL_42;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
    goto LABEL_32;
  this = (PartyOrganizationUIDragDropListViewItem_o *)v4->fields.mListViewObject;
  if ( !this )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = (ListViewDropInfo_o *)sub_1C22084(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v14, gameObject, surface, 0LL);
  if ( !v11 )
    goto LABEL_42;
  this = (PartyOrganizationUIDragDropListViewItem_o *)PartyOrganizationListViewManager__IsItemDropSurface(v11, v14, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_32;
  if ( !Component_object )
    goto LABEL_42;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewItem__DragReturnStart(v4, (const MethodInfo *)surface);
    return;
  }
  if ( !monitor )
    goto LABEL_42;
  v16 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0LL);
  if ( !v16 )
    goto LABEL_41;
  viewObject = v16->fields.viewObject;
  if ( viewObject
    && (v18 = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v18) )
  {
    v19 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v18 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v16->fields.viewObject
        : 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_41;
  if ( !v19 )
LABEL_42:
    sub_1C22094(this, surface);
  PartyOrganizationListViewObject__Init_33189104((PartyOrganizationListViewObject_o *)v19, 3, 0LL);
LABEL_41:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0LL);
  PartyOrganizationListViewObject__Init_33189104(mListViewObject, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))monitor->klass[1]._1.namespaze)(
    monitor,
    v9,
    monitor->klass[1]._1.byval_arg.data);
  PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)monitor, 4, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5509/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x1
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 methodPtr_low; // x10

  if ( (byte_4BD8381 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewObject_TypeInfo);
    byte_4BD8381 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_33189104(mListViewObject, 1, 0LL),
        (manager = mListViewObject->fields.manager) == 0LL) )
  {
    sub_1C22094(manager, v4);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragStart.method)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.methodPtr);
}