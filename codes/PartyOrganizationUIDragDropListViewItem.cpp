void PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  if ( (byte_596C1DC & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationUIDragDropListViewItem_TypeInfo);
    byte_596C1DC = 1;
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
  if ( (byte_596C1D9 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_2213A60(&PartyOrganizationListViewObject_TypeInfo);
    byte_596C1D9 = 1;
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
    sub_2213CDC(this, method);
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

  if ( (byte_596C1DB & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_5556/*"DragEnd"*/);
    byte_596C1DB = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !mListViewObject
    || (naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_2213CDC(v4, v5);
  }
  PartyOrganizationListViewObject__Init_41048656((PartyOrganizationListViewObject_o *)mListViewObject, 3, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5556/*"DragEnd"*/, 0.1, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewItem_c *v12; // x0
  float z; // s10
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596C1DA & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewObject_TypeInfo);
    sub_2213A60(&PartyOrganizationUIDragDropListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_5557/*"DragReturnEnd"*/);
    byte_596C1DA = 1;
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
  v31 = UnityEngine_Transform__InverseTransformPoint(v7, position, 0);
  x = v31.fields.x;
  y = v31.fields.y;
  v12 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  z = v31.fields.z;
  v14 = this->fields.dragObject;
  if ( !*(&PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo, v8, v9);
    v12 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v14, v12->static_fields->ACTION_TIME, v32, 0);
  if ( !dragObject )
LABEL_18:
    sub_2213CDC(dragObject, method);
  v15 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v15[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].monitor, (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_5557/*"DragReturnEnd"*/;
  v15[3].fields.m_CachedPtr = StringLiteral_5557/*"DragReturnEnd"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].fields, v23, v24, v25, v26, v27, v28, v29);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewItem_o *v11; // x22
  __int64 v12; // x11
  PartyOrganizationListViewManager_o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *Component_object; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v18; // x25
  __int64 v19; // x2
  UnityEngine_Object_o *monitor; // x23
  PartyOrganizationListViewItem_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct ListViewObject_o *viewObject; // x8
  __int64 v25; // x11
  UnityEngine_Object_o *v26; // x24

  v4 = this;
  if ( (byte_596C1D8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    sub_2213A60(&ListViewDropInfo_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewManager_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_2213A60(&StringLiteral_5556/*"DragEnd"*/);
    byte_596C1D8 = 1;
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
  v11 = Item;
  if ( manager
    && (v12 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)v12) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v13 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)surface,
                                                        0,
                                                        0);
  if ( ((unsigned __int8)this & 1) == 0 || !v11 )
    goto LABEL_32;
  if ( !surface )
    goto LABEL_42;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
    goto LABEL_32;
  this = (PartyOrganizationUIDragDropListViewItem_o *)v4->fields.mListViewObject;
  if ( !this )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v18 = (ListViewDropInfo_o *)sub_2213CCC(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v18, gameObject, surface, 0);
  if ( !v13 )
    goto LABEL_42;
  this = (PartyOrganizationUIDragDropListViewItem_o *)PartyOrganizationListViewManager__IsItemDropSurface(v13, v18, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_32;
  if ( !Component_object )
    goto LABEL_42;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, surface, v19);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewItem__DragReturnStart(v4, (const MethodInfo *)surface);
    return;
  }
  if ( !monitor )
    goto LABEL_42;
  v21 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0);
  if ( !v21 )
    goto LABEL_41;
  viewObject = v21->fields.viewObject;
  if ( viewObject
    && (v25 = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)v25) )
  {
    v26 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v25 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v21->fields.viewObject
        : 0LL;
  }
  else
  {
    v26 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v26, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_41;
  if ( !v26 )
LABEL_42:
    sub_2213CDC(this, surface);
  PartyOrganizationListViewObject__Init_41048656((PartyOrganizationListViewObject_o *)v26, 3, 0);
LABEL_41:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0);
  PartyOrganizationListViewObject__Init_41048656(mListViewObject, 1, 0);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, const char *))monitor->klass[1]._1.name)(
    monitor,
    v11,
    monitor->klass[1]._1.namespaze);
  PartyOrganizationListViewDropObject__Init_40963932((PartyOrganizationListViewDropObject_o *)monitor, 4, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5556/*"DragEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x1
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 naturalAligment; // x10

  if ( (byte_596C1D7 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewObject_TypeInfo);
    byte_596C1D7 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_41048656(mListViewObject, 1, 0),
        (manager = mListViewObject->fields.manager) == 0) )
  {
    sub_2213CDC(manager, v4);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._8_ItemDragStart.methodPtr)(
    manager,
    manager->klass->vtable._8_ItemDragStart.method);
}