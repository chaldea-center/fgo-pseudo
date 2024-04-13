void __fastcall PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC393 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v1, v2, v3);
    byte_42EC393 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationUIDragDropListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PartyOrganizationUIDragDropListViewItem_o **mListViewObject; // x8
  __int64 v9; // x11
  PartyOrganizationUIDragDropListViewItem_c *klass; // x8
  __int64 v11; // x10

  v4 = this;
  if ( (byte_42EC390 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_B5D5C4(
                                                          &PartyOrganizationListViewObject_TypeInfo,
                                                          v5,
                                                          v6,
                                                          v7);
    byte_42EC390 = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewItem_o **)v4->fields.mListViewObject;
  if ( !mListViewObject
    || (v9 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        BYTE4((*mListViewObject)[2].fields.mCollider) < (unsigned int)v9)
    || *((PartyOrganizationListViewObject_c **)(*mListViewObject)[1].fields.mListViewObject + v9 - 1) != PartyOrganizationListViewObject_TypeInfo
    || (this = mListViewObject[4]) == 0LL
    || (klass = this->klass,
        v11 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v11 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B5D69C(this, method);
  }
  ((void (*)(void))klass->vtable._8_OnDragDropRelease.method)();
}


void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x10

  if ( (byte_42EC392 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5471/*"DragEnd"*/, v5, v6, v7);
    byte_42EC392 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  if ( !mListViewObject
    || (v11 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v11 - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_B5D69C(v9, v10);
  }
  PartyOrganizationListViewObject__Init_19479152((PartyOrganizationListViewObject_o *)mListViewObject, 3, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v12; // x11
  UnityEngine_Component_o *v13; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_GameObject_o *v19; // x20
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewItem_c *v22; // x0
  float z; // s10
  UnityEngine_GameObject_o *v24; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EC391 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5472/*"DragReturnEnd"*/, v8, v9, v10);
    byte_42EC391 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v12 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v12 - 1] == PartyOrganizationListViewObject_TypeInfo )
      v13 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v13 )
    goto LABEL_19;
  v15 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v13, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v15 )
    goto LABEL_19;
  v39 = UnityEngine_Transform__InverseTransformPoint(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  v19 = this->fields.dragObject;
  x = v39.fields.x;
  y = v39.fields.y;
  v22 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  z = v39.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo);
    v22 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v19, v22->static_fields->ACTION_TIME, v40, 0LL);
  if ( !dragObject )
LABEL_19:
    sub_B5D69C(dragObject, method);
  v24 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v24[3], gameObject, v26, v27, v28, v29, v30, v31);
  v32 = (System_Int32_array **)StringLiteral_5472/*"DragReturnEnd"*/;
  v24[3].monitor = (void *)StringLiteral_5472/*"DragReturnEnd"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v24[3].monitor, v32, v33, v34, v35, v36, v37, v38);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationUIDragDropListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  PartyOrganizationListViewObject_o *mListViewObject; // x21
  __int64 v22; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewItem_o *v25; // x22
  __int64 v26; // x11
  PartyOrganizationListViewManager_o *v27; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v30; // x25
  UnityEngine_Object_o *klass; // x23
  PartyOrganizationListViewItem_o *v32; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v34; // x11
  UnityEngine_Object_o *v35; // x24

  v5 = this;
  if ( (byte_42EC38F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___,
      (_DWORD)surface,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&ListViewDropInfo_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&PartyOrganizationListViewManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&PartyOrganizationListViewObject_TypeInfo, v15, v16, v17);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_B5D5C4(&StringLiteral_5471/*"DragEnd"*/, v18, v19, v20);
    byte_42EC38F = 1;
  }
  mListViewObject = (PartyOrganizationListViewObject_o *)v5->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_46;
  v22 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v22 - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    goto LABEL_46;
  }
  Item = PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v5->fields.mListViewObject, 0LL);
  manager = mListViewObject->fields.manager;
  v25 = Item;
  if ( manager
    && (v26 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v26 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v27 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)surface,
                                                        0LL,
                                                        0LL);
  if ( !v25 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_35;
  if ( !surface )
    goto LABEL_46;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_35;
  this = (PartyOrganizationUIDragDropListViewItem_o *)v5->fields.mListViewObject;
  if ( !this )
    goto LABEL_46;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30 = (ListViewDropInfo_o *)sub_B5D694(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v30, gameObject, surface, 0LL);
  if ( !v27 )
    goto LABEL_46;
  this = (PartyOrganizationUIDragDropListViewItem_o *)PartyOrganizationListViewManager__IsItemDropSurface(v27, v30, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_35;
  if ( !Component_srcLineSprite )
    goto LABEL_46;
  klass = (UnityEngine_Object_o *)Component_srcLineSprite[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_35:
    PartyOrganizationUIDragDropListViewItem__DragReturnStart(v5, (const MethodInfo *)surface);
    return;
  }
  if ( !klass )
    goto LABEL_46;
  v32 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v32 )
    goto LABEL_45;
  viewObject = v32->fields.viewObject;
  if ( viewObject
    && (v34 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
  {
    v35 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v34 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v32->fields.viewObject
        : 0LL;
  }
  else
  {
    v35 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_45;
  if ( !v35 )
LABEL_46:
    sub_B5D69C(this, surface);
  PartyOrganizationListViewObject__Init_19479152((PartyOrganizationListViewObject_o *)v35, 3, 0LL);
LABEL_45:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, surface, 0LL);
  PartyOrganizationListViewObject__Init_19479152(mListViewObject, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
    klass,
    v25,
    klass->klass[1]._1.byval_arg.data);
  PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v5, (System_String_o *)StringLiteral_5471/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewManager_o *manager; // x0
  __int64 v6; // x1
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 v8; // x10

  if ( (byte_42EC38E & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC38E = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v8 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v8)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v8 - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_19479152(mListViewObject, 1, 0LL),
        (manager = mListViewObject->fields.manager) == 0LL) )
  {
    sub_B5D69C(manager, v6);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._7_ItemDragStart.method)(
    manager,
    manager->klass->vtable._8_ItemDragEnd.methodPtr);
}