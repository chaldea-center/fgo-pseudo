void __fastcall PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B120FD & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v1, v2);
    byte_4B120FD = 1;
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
  __int64 v2; // x2
  PartyOrganizationUIDragDropListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUIDragDropListViewItem_o **mListViewObject; // x8
  __int64 methodPtr_low; // x11
  PartyOrganizationUIDragDropListViewItem_c *klass; // x8
  __int64 v9; // x10

  v3 = this;
  if ( (byte_4B120FA & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, method, v2);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_1BCA7E0(&PartyOrganizationListViewObject_TypeInfo, v4, v5);
    byte_4B120FA = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewItem_o **)v3->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE((*mListViewObject)[2].fields.mTrans) < (unsigned int)methodPtr_low)
    || *((PartyOrganizationListViewObject_c **)(*mListViewObject)[1].fields.mRoot + methodPtr_low - 1) != PartyOrganizationListViewObject_TypeInfo
    || (this = mListViewObject[5]) == 0LL
    || (klass = this->klass,
        v9 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v9)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v9 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1BCAA3C(this, method);
  }
  ((void (*)(void))klass[1]._1.gc_desc)();
}


void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_4B120FC & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5471/*"DragEnd"*/, v4, v5);
    byte_4B120FC = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_1BCAA3C(v7, v8);
  }
  PartyOrganizationListViewObject__Init_32775492((PartyOrganizationListViewObject_o *)mListViewObject, 3, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5471/*"DragEnd"*/,
    0.1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v10; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v12; // x21
  int v13; // s0
  __int64 v16; // x1
  PartyOrganizationUIDragDropListViewItem_c *v17; // x0
  UnityEngine_GameObject_o *v18; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v22; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B120FB & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5472/*"DragReturnEnd"*/, v6, v7);
    byte_4B120FB = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewObject_TypeInfo )
      v10 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v10 )
    goto LABEL_18;
  v12 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v12 )
    goto LABEL_18;
  v25 = UnityEngine_Transform__InverseTransformPoint(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  v17 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  v18 = this->fields.dragObject;
  x = v25.fields.x;
  y = v25.fields.y;
  z = v25.fields.z;
  if ( !PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo, v16);
    v17 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v18, v17->static_fields->ACTION_TIME, v26, 0LL);
  if ( !dragObject )
LABEL_18:
    sub_1BCAA3C(dragObject, method);
  v22 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22[3].monitor = gameObject;
  sub_1BCA784(&v22[3].monitor, gameObject);
  v24 = StringLiteral_5472/*"DragReturnEnd"*/;
  *(_QWORD *)&v22[3].fields.m_CachedPtr = StringLiteral_5472/*"DragReturnEnd"*/;
  sub_1BCA784(&v22[3].fields, v24);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  PartyOrganizationListViewObject_o *mListViewObject; // x21
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  __int64 v18; // x1
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewItem_o *v20; // x22
  __int64 v21; // x11
  PartyOrganizationListViewManager_o *v22; // x23
  __int64 v23; // x1
  UnityEngine_Object_o *Component_object; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  ListViewDropInfo_o *v29; // x25
  UnityEngine_Object_o *monitor; // x23
  PartyOrganizationListViewItem_o *v31; // x0
  __int64 v32; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v34; // x11
  UnityEngine_Object_o *v35; // x24

  v4 = this;
  if ( (byte_4B120F9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___,
      surface,
      method);
    sub_1BCA7E0(&ListViewDropInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&PartyOrganizationListViewObject_TypeInfo, v11, v12);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_1BCA7E0(&StringLiteral_5471/*"DragEnd"*/, v13, v14);
    byte_4B120F9 = 1;
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
  v20 = Item;
  if ( manager
    && (v21 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v21) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v21 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v22 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v22 = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)surface,
                                                        0LL,
                                                        0LL);
  if ( !v20 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_32;
  if ( !surface )
    goto LABEL_42;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
    goto LABEL_32;
  this = (PartyOrganizationUIDragDropListViewItem_o *)v4->fields.mListViewObject;
  if ( !this )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v29 = (ListViewDropInfo_o *)sub_1BCAA2C(ListViewDropInfo_TypeInfo, v26, v27, v28);
  ListViewDropInfo___ctor(v29, gameObject, surface, 0LL);
  if ( !v22 )
    goto LABEL_42;
  this = (PartyOrganizationUIDragDropListViewItem_o *)PartyOrganizationListViewManager__IsItemDropSurface(v22, v29, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_32;
  if ( !Component_object )
    goto LABEL_42;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, surface);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewItem__DragReturnStart(v4, (const MethodInfo *)surface);
    return;
  }
  if ( !monitor )
    goto LABEL_42;
  v31 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0LL);
  if ( !v31 )
    goto LABEL_41;
  viewObject = v31->fields.viewObject;
  if ( viewObject
    && (v34 = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v34) )
  {
    v35 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v34 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v31->fields.viewObject
        : 0LL;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_41;
  if ( !v35 )
LABEL_42:
    sub_1BCAA3C(this, surface);
  PartyOrganizationListViewObject__Init_32775492((PartyOrganizationListViewObject_o *)v35, 3, 0LL);
LABEL_41:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0LL);
  PartyOrganizationListViewObject__Init_32775492(mListViewObject, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))monitor->klass[1]._1.namespaze)(
    monitor,
    v20,
    monitor->klass[1]._1.byval_arg.data);
  PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)monitor, 4, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5471/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewManager_o *manager; // x0
  __int64 v5; // x1
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 methodPtr_low; // x10

  if ( (byte_4B120F8 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewObject_TypeInfo, method, v2);
    byte_4B120F8 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_32775492(mListViewObject, 1, 0LL),
        (manager = mListViewObject->fields.manager) == 0LL) )
  {
    sub_1BCAA3C(manager, v5);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragStart.method)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.methodPtr);
}