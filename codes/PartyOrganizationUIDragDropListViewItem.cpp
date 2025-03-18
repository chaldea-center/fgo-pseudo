void __fastcall PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1DD3A & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v1);
    byte_4C1DD3A = 1;
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
  __int64 v3; // x1
  PartyOrganizationUIDragDropListViewItem_o **mListViewObject; // x8
  __int64 methodPtr_low; // x11
  PartyOrganizationUIDragDropListViewItem_c *klass; // x8
  __int64 v7; // x10

  v2 = this;
  if ( (byte_4C1DD37 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationListViewManager_TypeInfo, method);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_1C3B764(&PartyOrganizationListViewObject_TypeInfo, v3);
    byte_4C1DD37 = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewItem_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE((*mListViewObject)[2].fields.mTrans) < (unsigned int)methodPtr_low)
    || *((PartyOrganizationListViewObject_c **)(*mListViewObject)[1].fields.mRoot + methodPtr_low - 1) != PartyOrganizationListViewObject_TypeInfo
    || (this = mListViewObject[5]) == 0LL
    || (klass = this->klass,
        v7 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1C3B9C0(this, method);
  }
  ((void (*)(void))klass[1]._1.gc_desc)();
}


void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 methodPtr_low; // x10

  if ( (byte_4C1DD39 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationListViewObject_TypeInfo, method);
    sub_1C3B764(&StringLiteral_5498/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_BACK"*/, v3);
    byte_4C1DD39 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_1C3B9C0(v5, v6);
  }
  PartyOrganizationListViewObject__Init_33328564((PartyOrganizationListViewObject_o *)mListViewObject, 3, v7);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5498/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_BACK"*/,
    0.1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v9; // x21
  int v10; // s0
  PartyOrganizationUIDragDropListViewItem_c *v13; // x0
  UnityEngine_GameObject_o *v14; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C1DD38 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationListViewObject_TypeInfo, method);
    sub_1C3B764(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_5499/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_CANCEL"*/, v4);
    byte_4C1DD38 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewObject_TypeInfo )
      v7 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v7 )
    goto LABEL_18;
  v9 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v19 = UnityEngine_Transform__InverseTransformPoint(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  v14 = this->fields.dragObject;
  x = v19.fields.x;
  y = v19.fields.y;
  z = v19.fields.z;
  if ( !PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo);
    v13 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v14, v13->static_fields->ACTION_TIME, v20, 0LL);
  if ( !dragObject )
LABEL_18:
    sub_1C3B9C0(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1C3B708(&v18[3].monitor);
  *(_QWORD *)&v18[3].fields.m_CachedPtr = StringLiteral_5499/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_CANCEL"*/;
  sub_1C3B708(&v18[3].fields);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PartyOrganizationListViewObject_o *mListViewObject; // x21
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewItem_o *v14; // x22
  __int64 v15; // x11
  struct ListViewManager_o *v16; // x28
  UnityEngine_Object_o *Component_object; // x23
  UnityEngine_GameObject_o *gameObject; // x25
  ListViewDropInfo_o *v19; // x24
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *monitor; // x23
  PartyOrganizationListViewItem_o *v22; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v24; // x11
  UnityEngine_Object_o *v25; // x24
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2

  v4 = this;
  if ( (byte_4C1DD36 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, surface);
    sub_1C3B764(&ListViewDropInfo_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&PartyOrganizationListViewManager_TypeInfo, v7);
    sub_1C3B764(&PartyOrganizationListViewObject_TypeInfo, v8);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_1C3B764(&StringLiteral_5498/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_BACK"*/, v9);
    byte_4C1DD36 = 1;
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
  Item = PartyOrganizationListViewObject__GetItem(
           (PartyOrganizationListViewObject_o *)v4->fields.mListViewObject,
           (const MethodInfo *)surface);
  manager = mListViewObject->fields.manager;
  v14 = Item;
  if ( manager
    && (v15 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v15) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v15 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v16 = mListViewObject->fields.manager;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)surface,
                                                        0LL,
                                                        0LL);
  if ( !v14 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_32;
  if ( !surface )
    goto LABEL_42;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
    goto LABEL_32;
  this = (PartyOrganizationUIDragDropListViewItem_o *)v4->fields.mListViewObject;
  if ( !this )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19 = (ListViewDropInfo_o *)sub_1C3B9B0(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v19, gameObject, surface, 0LL);
  if ( !v16 )
    goto LABEL_42;
  this = (PartyOrganizationUIDragDropListViewItem_o *)PartyOrganizationListViewManager__IsItemDropSurface(
                                                        (PartyOrganizationListViewManager_o *)this,
                                                        v19,
                                                        v20);
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
  v22 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0LL);
  if ( !v22 )
    goto LABEL_41;
  viewObject = v22->fields.viewObject;
  if ( viewObject
    && (v24 = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v24) )
  {
    v25 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v24 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v22->fields.viewObject
        : 0LL;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_41;
  if ( !v25 )
LABEL_42:
    sub_1C3B9C0(this, surface);
  PartyOrganizationListViewObject__Init_33328564((PartyOrganizationListViewObject_o *)v25, 3, v26);
LABEL_41:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0LL);
  PartyOrganizationListViewObject__Init_33328564(mListViewObject, 1, v27);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))monitor->klass[1]._1.namespaze)(
    monitor,
    v14,
    monitor->klass[1]._1.byval_arg.data);
  PartyOrganizationListViewDropObject__Init_33143596((PartyOrganizationListViewDropObject_o *)monitor, 4, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5498/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_BACK"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 methodPtr_low; // x10

  if ( (byte_4C1DD35 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationListViewObject_TypeInfo, method);
    byte_4C1DD35 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_33328564(mListViewObject, 1, v5),
        (manager = mListViewObject->fields.manager) == 0LL) )
  {
    sub_1C3B9C0(manager, v4);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragStart.method)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.methodPtr);
}