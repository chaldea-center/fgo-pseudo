void PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  if ( (byte_4D2C52F & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationUIDragDropListViewItem_TypeInfo);
    byte_4D2C52F = 1;
  }
  LODWORD(PartyOrganizationUIDragDropListViewItem_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationUIDragDropListViewItem_StaticFields)1045220557;
}


void PartyOrganizationUIDragDropListViewItem___ctor(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void PartyOrganizationUIDragDropListViewItem__DragEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewItem_o *v2; // x19
  PartyOrganizationUIDragDropListViewItem_o **mListViewObject; // x8
  __int64 naturalAligment; // x11
  PartyOrganizationUIDragDropListViewItem_c *klass; // x8
  __int64 v6; // x10

  v2 = this;
  if ( (byte_4D2C52C & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_1C93AD4(&PartyOrganizationListViewObject_TypeInfo);
    byte_4D2C52C = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewItem_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        LOBYTE((*mListViewObject)[2].fields.mTrans) < (unsigned int)naturalAligment)
    || *((PartyOrganizationListViewObject_c **)(*mListViewObject)[1].fields.mRoot + naturalAligment - 1) != PartyOrganizationListViewObject_TypeInfo
    || (this = mListViewObject[5]) == 0
    || (klass = this->klass,
        v6 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        this->klass->_2.naturalAligment < (unsigned int)v6)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1C93D2C(this, method);
  }
  ((void (*)(void))klass[1]._1.image)();
}


void PartyOrganizationUIDragDropListViewItem__DragReturnEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 naturalAligment; // x10

  if ( (byte_4D2C52E & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationListViewObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_5385/*"DragEnd"*/);
    byte_4D2C52E = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !mListViewObject
    || (naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_1C93D2C(v4, v5);
  }
  PartyOrganizationListViewObject__Init_34920476((PartyOrganizationListViewObject_o *)mListViewObject, 3, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5385/*"DragEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewItem__DragReturnStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  PartyOrganizationUIDragDropListViewItem_c *v8; // x0
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_Vector3_o v25; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2C52D & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationListViewObject_TypeInfo);
    sub_1C93AD4(&PartyOrganizationUIDragDropListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_5386/*"DragReturnEnd"*/);
    byte_4D2C52D = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewObject_TypeInfo )
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
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v5 )
    goto LABEL_18;
  v7 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v5, 0);
  if ( !dragObject )
    goto LABEL_18;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v7 )
    goto LABEL_18;
  v25 = UnityEngine_Transform__InverseTransformPoint(v7, position, 0);
  v8 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  v9 = this->fields.dragObject;
  if ( !PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo);
    v8 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v9, v8->static_fields->ACTION_TIME, v25, 0);
  if ( !dragObject )
LABEL_18:
    sub_1C93D2C(dragObject, method);
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10[3].monitor, (int32_t)gameObject, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_5386/*"DragReturnEnd"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_5386/*"DragReturnEnd"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10[3].fields, v18, v19, v20, v21, v22, v23, v24);
}


void PartyOrganizationUIDragDropListViewItem__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewItem_o *v4; // x19
  PartyOrganizationListViewObject_o *mListViewObject; // x21
  __int64 naturalAligment; // x10
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
  if ( (byte_4D2C52B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    sub_1C93AD4(&ListViewDropInfo_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PartyOrganizationListViewManager_TypeInfo);
    sub_1C93AD4(&PartyOrganizationListViewObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_1C93AD4(&StringLiteral_5385/*"DragEnd"*/);
    byte_4D2C52B = 1;
  }
  mListViewObject = (PartyOrganizationListViewObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_42;
  naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    goto LABEL_42;
  }
  Item = PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v4->fields.mListViewObject, 0);
  manager = mListViewObject->fields.manager;
  v9 = Item;
  if ( manager
    && (v10 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)v10) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v11 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)surface,
                                                        0,
                                                        0);
  if ( !v9 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_32;
  if ( !surface )
    goto LABEL_42;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
    goto LABEL_32;
  this = (PartyOrganizationUIDragDropListViewItem_o *)v4->fields.mListViewObject;
  if ( !this )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v14 = (ListViewDropInfo_o *)sub_1C93D20(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v14, gameObject, surface, 0);
  if ( !v11 )
    goto LABEL_42;
  this = (PartyOrganizationUIDragDropListViewItem_o *)PartyOrganizationListViewManager__IsItemDropSurface(v11, v14, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_32;
  if ( !Component_object )
    goto LABEL_42;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewItem__DragReturnStart(v4, (const MethodInfo *)surface);
    return;
  }
  if ( !monitor )
    goto LABEL_42;
  v16 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0);
  if ( !v16 )
    goto LABEL_41;
  viewObject = v16->fields.viewObject;
  if ( viewObject
    && (v18 = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)v18) )
  {
    v19 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v18 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v16->fields.viewObject
        : 0LL;
  }
  else
  {
    v19 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_41;
  if ( !v19 )
LABEL_42:
    sub_1C93D2C(this, surface);
  PartyOrganizationListViewObject__Init_34920476((PartyOrganizationListViewObject_o *)v19, 3, 0);
LABEL_41:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0);
  PartyOrganizationListViewObject__Init_34920476(mListViewObject, 1, 0);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, const char *))monitor->klass[1]._1.name)(
    monitor,
    v9,
    monitor->klass[1]._1.namespaze);
  PartyOrganizationListViewDropObject__Init_34833544((PartyOrganizationListViewDropObject_o *)monitor, 4, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5385/*"DragEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x1
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 naturalAligment; // x10

  if ( (byte_4D2C52A & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationListViewObject_TypeInfo);
    byte_4D2C52A = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_34920476(mListViewObject, 1, 0),
        (manager = mListViewObject->fields.manager) == 0) )
  {
    sub_1C93D2C(manager, v4);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._8_ItemDragStart.methodPtr)(
    manager,
    manager->klass->vtable._8_ItemDragStart.method);
}