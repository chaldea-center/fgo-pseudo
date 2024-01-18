void __fastcall PartyOrganizationUIDragDropListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418B7E7 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v1);
    byte_418B7E7 = 1;
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
  __int64 v5; // x11
  PartyOrganizationUIDragDropListViewItem_c *klass; // x8
  __int64 v7; // x10

  v2 = this;
  if ( (byte_418B7E4 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewManager_TypeInfo, method);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_B2C35C(&PartyOrganizationListViewObject_TypeInfo, v3);
    byte_418B7E4 = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewItem_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (v5 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        BYTE4((*mListViewObject)[2].fields.mCollider) < (unsigned int)v5)
    || *((PartyOrganizationListViewObject_c **)(*mListViewObject)[1].fields.mListViewObject + v5 - 1) != PartyOrganizationListViewObject_TypeInfo
    || (this = mListViewObject[4]) == 0LL
    || (klass = this->klass,
        v7 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B2C434(this, method);
  }
  ((void (*)(void))klass->vtable._8_OnDragDropRelease.method)();
}


void __fastcall PartyOrganizationUIDragDropListViewItem__DragReturnEnd(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x10

  if ( (byte_418B7E6 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5394/*"DragEnd"*/, v3);
    byte_418B7E6 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  if ( !mListViewObject
    || (v7 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    sub_B2C434(v5, v6);
  }
  PartyOrganizationListViewObject__Init_19885904((PartyOrganizationListViewObject_o *)mListViewObject, 3, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5394/*"DragEnd"*/,
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
  UnityEngine_Transform_o *v9; // x21
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewItem_c *v16; // x0
  float z; // s10
  UnityEngine_GameObject_o *v18; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_418B7E5 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewObject_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationUIDragDropListViewItem_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5395/*"DragReturnEnd"*/, v4);
    byte_418B7E5 = 1;
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
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v7 )
    goto LABEL_19;
  v9 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0LL);
  if ( !dragObject )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v9 )
    goto LABEL_19;
  v33 = UnityEngine_Transform__InverseTransformPoint(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = this->fields.dragObject;
  x = v33.fields.x;
  y = v33.fields.y;
  v16 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  z = v33.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewItem_TypeInfo);
    v16 = PartyOrganizationUIDragDropListViewItem_TypeInfo;
  }
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->ACTION_TIME, v34, 0LL);
  if ( !dragObject )
LABEL_19:
    sub_B2C434(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_5395/*"DragReturnEnd"*/;
  v18[3].monitor = (void *)StringLiteral_5395/*"DragReturnEnd"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
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
  __int64 v11; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewItem_o *v14; // x22
  __int64 v15; // x11
  PartyOrganizationListViewManager_o *v16; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v19; // x25
  UnityEngine_Object_o *klass; // x23
  PartyOrganizationListViewItem_o *v21; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v23; // x11
  UnityEngine_Object_o *v24; // x24

  v4 = this;
  if ( (byte_418B7E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, surface);
    sub_B2C35C(&ListViewDropInfo_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&PartyOrganizationListViewManager_TypeInfo, v7);
    sub_B2C35C(&PartyOrganizationListViewObject_TypeInfo, v8);
    this = (PartyOrganizationUIDragDropListViewItem_o *)sub_B2C35C(&StringLiteral_5394/*"DragEnd"*/, v9);
    byte_418B7E3 = 1;
  }
  mListViewObject = (PartyOrganizationListViewObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_46;
  v11 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v11 - 1] != PartyOrganizationListViewObject_TypeInfo )
  {
    goto LABEL_46;
  }
  Item = PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v4->fields.mListViewObject, 0LL);
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
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)surface,
                                                        0LL,
                                                        0LL);
  if ( !v14 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_35;
  if ( !surface )
    goto LABEL_46;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
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
  v19 = (ListViewDropInfo_o *)sub_B2C42C(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v19, gameObject, surface, 0LL);
  if ( !v16 )
    goto LABEL_46;
  this = (PartyOrganizationUIDragDropListViewItem_o *)PartyOrganizationListViewManager__IsItemDropSurface(v16, v19, 0LL);
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
  v21 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v21 )
    goto LABEL_45;
  viewObject = v21->fields.viewObject;
  if ( viewObject
    && (v23 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
  {
    v24 = (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v23 - 1] == PartyOrganizationListViewObject_TypeInfo
        ? (UnityEngine_Object_o *)v21->fields.viewObject
        : 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_45;
  if ( !v24 )
LABEL_46:
    sub_B2C434(this, surface);
  PartyOrganizationListViewObject__Init_19885904((PartyOrganizationListViewObject_o *)v24, 3, 0LL);
LABEL_45:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0LL);
  PartyOrganizationListViewObject__Init_19885904(mListViewObject, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
    klass,
    v14,
    klass->klass[1]._1.byval_arg.data);
  PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5394/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewItem__OnDragDropStart(
        PartyOrganizationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x1
  PartyOrganizationListViewObject_o *mListViewObject; // x19
  __int64 v6; // x10

  if ( (byte_418B7E2 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewObject_TypeInfo, method);
    byte_418B7E2 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mListViewObject = (PartyOrganizationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewObject_TypeInfo
    || (PartyOrganizationListViewObject__Init_19885904(mListViewObject, 1, 0LL),
        (manager = mListViewObject->fields.manager) == 0LL) )
  {
    sub_B2C434(manager, v4);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._7_ItemDragStart.method)(
    manager,
    manager->klass->vtable._8_ItemDragEnd.methodPtr);
}