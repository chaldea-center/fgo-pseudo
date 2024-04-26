void __fastcall PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  if ( (byte_43557D6 & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationUIDragDropListViewItem_TypeInfo);
    byte_43557D6 = 1;
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
  __int64 v4; // x11
  PartyOrganizationUIDragDropListViewItem_c *klass; // x8
  __int64 v6; // x10

  v2 = this;
  if ( (byte_43557D3 & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_B70694(&PartyOrganizationListViewObject_TypeInfo);
    byte_43557D3 = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewItem_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (v4 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        BYTE4((*mListViewObject)[2].fields.mCollider) < (unsigned int)v4)
    || *((PartyOrganizationListViewObject_c **)(*mListViewObject)[1].fields.mListViewObject + v4 - 1) != PartyOrganizationListViewObject_TypeInfo
    || (this = mListViewObject[4]) == 0LL
    || (klass = this->klass,
        v6 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B7076C(this, method);
  }
  ((void (*)(void))klass->vtable._8_OnDragDropRelease.method)();
}


void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x10

  if ( (byte_43557D5 & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationListViewObject_TypeInfo);
    sub_B70694(&StringLiteral_5482/*"DragEnd"*/);
    byte_43557D5 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  if ( !mListViewObject
    || (v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_B7076C(v4, v5);
  }
  PartyOrganizationListViewObject__Init_20472204((PartyOrganizationListViewObject_o *)mListViewObject, 3, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5482/*"DragEnd"*/,
    0.1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v4; // x11
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  int v8; // s0
  UnityEngine_GameObject_o *v11; // x20
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewItem_c *v14; // x0
  float z; // s10
  UnityEngine_GameObject_o *v16; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_43557D4 & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationListViewObject_TypeInfo);
    sub_B70694(&PartyOrganizationUIDragDropListViewItem_TypeInfo);
    sub_B70694(&StringLiteral_5483/*"DragReturnEnd"*/);
    byte_43557D4 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v4 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] == PartyOrganizationListViewObject_TypeInfo )
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
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v5 )
    goto LABEL_19;
  v7 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v5, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v7 )
    goto LABEL_19;
  v31 = UnityEngine_Transform__InverseTransformPoint(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = this->fields.dragObject;
  x = v31.fields.x;
  y = v31.fields.y;
  v14 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  z = v31.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo);
    v14 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v11, v14->static_fields->ACTION_TIME, v32, 0LL);
  if ( !dragObject )
LABEL_19:
    sub_B7076C(dragObject, method);
  v16 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B70630((BattleServantConfConponent_o *)&v16[3], gameObject, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_5483/*"DragReturnEnd"*/;
  v16[3].monitor = (void *)StringLiteral_5483/*"DragReturnEnd"*/;
  sub_B70630((BattleServantConfConponent_o *)&v16[3].monitor, v24, v25, v26, v27, v28, v29, v30);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewItem_o *v4; // x19
  PartyOrganizationListViewObject_o *mListViewObject; // x21
  __int64 v6; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewItem_o *v9; // x22
  __int64 v10; // x11
  PartyOrganizationListViewManager_o *v11; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v14; // x25
  UnityEngine_Object_o *klass; // x23
  PartyOrganizationListViewItem_o *v16; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v18; // x11
  UnityEngine_Object_o *v19; // x24

  v4 = this;
  if ( (byte_43557D2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    sub_B70694(&ListViewDropInfo_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&PartyOrganizationListViewManager_TypeInfo);
    sub_B70694(&PartyOrganizationListViewObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_B70694(&StringLiteral_5482/*"DragEnd"*/);
    byte_43557D2 = 1;
  }
  mListViewObject = (PartyOrganizationListViewObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_46;
  v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    goto LABEL_46;
  }
  Item = PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v4->fields.mListViewObject, 0LL);
  manager = mListViewObject->fields.manager;
  v9 = Item;
  if ( manager
    && (v10 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)surface,
                                                        0LL,
                                                        0LL);
  if ( !v9 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_35;
  if ( !surface )
    goto LABEL_46;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_35;
  this = (PartyOrganizationUIDragDropListViewItem_o *)v4->fields.mListViewObject;
  if ( !this )
    goto LABEL_46;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = (ListViewDropInfo_o *)sub_B70764(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v14, gameObject, surface, 0LL);
  if ( !v11 )
    goto LABEL_46;
  this = (PartyOrganizationUIDragDropListViewItem_o *)PartyOrganizationListViewManager__IsItemDropSurface(v11, v14, 0LL);
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
    PartyOrganizationUIDragDropListViewItem__DragReturnStart(v4, (const MethodInfo *)surface);
    return;
  }
  if ( !klass )
    goto LABEL_46;
  v16 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v16 )
    goto LABEL_45;
  viewObject = v16->fields.viewObject;
  if ( viewObject
    && (v18 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
  {
    v19 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v18 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v16->fields.viewObject
        : 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_45;
  if ( !v19 )
LABEL_46:
    sub_B7076C(this, surface);
  PartyOrganizationListViewObject__Init_20472204((PartyOrganizationListViewObject_o *)v19, 3, 0LL);
LABEL_45:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0LL);
  PartyOrganizationListViewObject__Init_20472204(mListViewObject, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
    klass,
    v9,
    klass->klass[1]._1.byval_arg.data);
  PartyOrganizationListViewDropObject__Init_38360048((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5482/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x1
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 v6; // x10

  if ( (byte_43557D1 & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationListViewObject_TypeInfo);
    byte_43557D1 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_20472204(mListViewObject, 1, 0LL),
        (manager = mListViewObject->fields.manager) == 0LL) )
  {
    sub_B7076C(manager, v4);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._7_ItemDragStart.method)(
    manager,
    manager->klass->vtable._8_ItemDragEnd.methodPtr);
}