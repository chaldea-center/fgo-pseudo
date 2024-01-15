void __fastcall PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDE11 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v1);
    byte_40FDE11 = 1;
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
  __int64 v3; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v5; // x11
  struct ListViewManager_o *manager; // x0
  ListViewManager_c *klass; // x8
  __int64 v8; // x10

  if ( (byte_40FDE0E & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationListViewObject_TypeInfo, v3);
    byte_40FDE0E = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject
    || (v5 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v5 - 1] != PartyOrganizationListViewObject_TypeInfo
    || (manager = mListViewObject->fields.manager) == 0LL
    || (klass = manager->klass,
        v8 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v8 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B170D4();
  }
  ((void (*)(void))klass->vtable._8_ItemDragEnd.method)();
}


void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v5; // x10

  if ( (byte_40FDE10 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5375/*"DragEnd"*/, v3);
    byte_40FDE10 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  if ( !mListViewObject
    || (v5 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v5 - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  PartyOrganizationListViewObject__Init_20192244((PartyOrganizationListViewObject_o *)mListViewObject, 3, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5375/*"DragEnd"*/,
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
  __int64 v6; // x11
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x0
  int v13; // s0
  UnityEngine_GameObject_o *v16; // x20
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewItem_c *v19; // x0
  float z; // s10
  TweenPosition_o *v21; // x0
  TweenPosition_o *v22; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FDE0F & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewObject_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5376/*"DragReturnEnd"*/, v4);
    byte_40FDE0F = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] == PartyOrganizationListViewObject_TypeInfo )
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
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_19;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !v7 )
    goto LABEL_19;
  v11 = parent;
  v12 = UnityEngine_Component__get_transform(v7, 0LL);
  if ( !v12 )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(v12, 0LL);
  if ( !v11 )
    goto LABEL_19;
  v37 = UnityEngine_Transform__InverseTransformPoint(v11, *(UnityEngine_Vector3_o *)&v13, 0LL);
  v16 = this->fields.dragObject;
  x = v37.fields.x;
  y = v37.fields.y;
  v19 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  z = v37.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo);
    v19 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v21 = TweenPosition__Begin(v16, v19->static_fields->ACTION_TIME, v38, 0LL);
  if ( !v21 )
LABEL_19:
    sub_B170D4();
  v22 = v21;
  v21->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v22->fields.eventReceiver, gameObject, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_5376/*"DragReturnEnd"*/;
  v22->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5376/*"DragReturnEnd"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v22->fields.callWhenFinished, v30, v31, v32, v33, v34, v35, v36);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 v11; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewItem_o *v14; // x22
  __int64 v15; // x11
  PartyOrganizationListViewManager_o *v16; // x23
  bool v17; // w0
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x26
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  ListViewDropInfo_o *v26; // x25
  UnityEngine_Object_o *klass; // x23
  PartyOrganizationListViewItem_o *v28; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v30; // x11
  UnityEngine_Object_o *v31; // x24

  if ( (byte_40FDE0D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, surface);
    sub_B16FFC(&ListViewDropInfo_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, v7);
    sub_B16FFC(&PartyOrganizationListViewObject_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5375/*"DragEnd"*/, v9);
    byte_40FDE0D = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_46;
  v11 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v11 - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    goto LABEL_46;
  }
  Item = PartyOrganizationListViewObject__GetItem(
           (PartyOrganizationListViewObject_o *)this->fields.mListViewObject,
           0LL);
  manager = mListViewObject->fields.manager;
  v14 = Item;
  if ( manager
    && (v15 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v15 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v16 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !v14 || !v17 )
    goto LABEL_35;
  if ( !surface )
    goto LABEL_46;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_35;
  v20 = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !v20 )
    goto LABEL_46;
  gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
  v26 = (ListViewDropInfo_o *)sub_B170CC(ListViewDropInfo_TypeInfo, v22, v23, v24, v25);
  ListViewDropInfo___ctor(v26, gameObject, surface, 0LL);
  if ( !v16 )
    goto LABEL_46;
  if ( !PartyOrganizationListViewManager__IsItemDropSurface(v16, v26, 0LL) )
    goto LABEL_35;
  if ( !Component_srcLineSprite )
    goto LABEL_46;
  klass = (UnityEngine_Object_o *)Component_srcLineSprite[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
LABEL_35:
    PartyOrganizationUIDragDropListViewItem__DragReturnStart(this, v18);
    return;
  }
  if ( !klass )
    goto LABEL_46;
  v28 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v28 )
    goto LABEL_45;
  viewObject = v28->fields.viewObject;
  if ( viewObject
    && (v30 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v30) )
  {
    v31 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v30 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v28->fields.viewObject
        : 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
    goto LABEL_45;
  if ( !v31 )
LABEL_46:
    sub_B170D4();
  PartyOrganizationListViewObject__Init_20192244((PartyOrganizationListViewObject_o *)v31, 3, 0LL);
LABEL_45:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
  PartyOrganizationListViewObject__Init_20192244((PartyOrganizationListViewObject_o *)mListViewObject, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
    klass,
    v14,
    klass->klass[1]._1.byval_arg.data);
  PartyOrganizationListViewDropObject__Init_32300096((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5375/*"DragEnd"*/,
    0.1,
    0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 v4; // x10
  struct ListViewManager_o *manager; // x0

  if ( (byte_40FDE0C & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewObject_TypeInfo, method);
    byte_40FDE0C = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v4 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v4)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_20192244(mListViewObject, 1, 0LL),
        (manager = mListViewObject->fields.manager) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._7_ItemDragStart.method)(
    manager,
    manager->klass->vtable._8_ItemDragEnd.methodPtr);
}