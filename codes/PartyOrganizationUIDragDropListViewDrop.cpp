void __fastcall PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B120F6 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v1, v2);
    byte_4B120F6 = 1;
  }
  LODWORD(PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationUIDragDropListViewDrop_StaticFields)1045220557;
}


void __fastcall PartyOrganizationUIDragDropListViewDrop___ctor(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragDumpEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUIDragDropListViewDrop_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  __int64 v12; // x9
  __int64 v13; // x12
  UnityEngine_Object_o *v14; // x21

  v3 = this;
  if ( (byte_4B120F1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v4, v5);
    sub_1BCA7E0(&PartyOrganizationListViewObject_TypeInfo, v6, v7);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1BCA7E0(&StringLiteral_5471/*"DragEnd"*/, v8, v9);
    byte_4B120F1 = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_19;
  methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_19;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_19;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v3->fields.mListViewObject,
                                                        0LL);
  if ( !this )
    goto LABEL_19;
  v12 = *(_QWORD *)&this->fields.mTarget.fields.x;
  if ( v12
    && (v13 = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v12 + 304LL) >= (unsigned int)v13) )
  {
    if ( *(PartyOrganizationListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v12 + 200LL) + 8 * v13 - 8) == PartyOrganizationListViewObject_TypeInfo )
      v14 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.x;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v14 )
    {
      PartyOrganizationListViewObject__Init_32775492((PartyOrganizationListViewObject_o *)v14, 8, 0LL);
      goto LABEL_18;
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
LABEL_18:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_32599672(mListViewObject, 0, 0LL);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
    mListViewObject,
    0LL,
    mListViewObject->klass->vtable._6_SetItem.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_5471/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragDumpStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUIDragDropListViewDrop_c *v6; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Color_o v21; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B120F0 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5470/*"DragDumpEnd"*/, v4, v5);
    byte_4B120F0 = 1;
  }
  v6 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo, method);
    v6 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v21.fields.r = 0.0;
  v21.fields.g = 0.0;
  v21.fields.b = 0.0;
  v21.fields.a = 0.0;
  transform = (UnityEngine_GameObject_o *)TweenColor__Begin(dragObject, v6->static_fields->ACTION_TIME, v21, 0LL);
  if ( !transform )
    goto LABEL_12;
  LODWORD(transform[1].monitor) = 3;
  transform = this->fields.dragObject;
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !byte_4B12176 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v11);
    byte_4B12176 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v20.fields.x = x + (float)(static_fields->downVector.fields.x * 50.0);
  v20.fields.y = y + (float)(static_fields->downVector.fields.y * 50.0);
  v20.fields.z = z + (float)(static_fields->downVector.fields.z * 50.0);
  transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                            this->fields.dragObject,
                                            PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
                                            v20,
                                            0LL);
  if ( !transform )
LABEL_12:
    sub_1BCAA3C(transform, v9);
  v16 = transform;
  LODWORD(transform[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[3].monitor = gameObject;
  sub_1BCA784(&v16[3].monitor, gameObject);
  v18 = StringLiteral_5470/*"DragDumpEnd"*/;
  *(_QWORD *)&v16[3].fields.m_CachedPtr = StringLiteral_5470/*"DragDumpEnd"*/;
  sub_1BCA784(&v16[3].fields, v18);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUIDragDropListViewDrop_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  __int64 v9; // x10

  v3 = this;
  if ( (byte_4B120EC & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, method, v2);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, v4, v5);
    byte_4B120EC = 1;
  }
  mListViewObject = v3->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0LL
    || (v9 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v9)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1BCAA3C(this, method);
  }
  ((void (__fastcall *)(PartyOrganizationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._9_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._10_SetSortKind.methodPtr);
  if ( v3->fields.isEquipSwap )
    PartyOrganizationListViewManager__EndSwapEquip(manager, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUIDragDropListViewDrop_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PartyOrganizationUIDragDropListViewDrop_o **mListViewObject; // x20
  __int64 methodPtr_low; // x10
  __int64 v10; // x10

  v3 = this;
  if ( (byte_4B120EF & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, v4, v5);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1BCA7E0(&StringLiteral_5471/*"DragEnd"*/, v6, v7);
    byte_4B120EF = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewDrop_o **)v3->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        (*mListViewObject)[1].fields.isEquipSwap < (unsigned int)methodPtr_low)
    || *(PartyOrganizationListViewDropObject_c **)(*(_QWORD *)&(*mListViewObject)[1].fields.restriction
                                                 + 8 * methodPtr_low
                                                 - 8) != PartyOrganizationListViewDropObject_TypeInfo
    || (this = mListViewObject[5]) == 0LL
    || (v10 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10)
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v10 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1BCAA3C(this, method);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0LL);
  v3->fields.isEquipSwap = 0;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_5471/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUIDragDropListViewDrop_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v10; // x20

  v3 = this;
  if ( (byte_4B120EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v4, v5);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1BCA7E0(&StringLiteral_5472/*"DragReturnEnd"*/, v6, v7);
    byte_4B120EE = 1;
  }
  mListViewObject = v3->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v10 = (UnityEngine_Component_o *)v3->fields.mListViewObject;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v3->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v3->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v10 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                              v10,
                                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, void *, float))this->klass->vtable._8_OnDragDropRelease.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          goto LABEL_16;
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(this, method);
  }
  if ( !v10 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v10, 1, 0LL);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)v10, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_5472/*"DragReturnEnd"*/, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
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
  PartyOrganizationUIDragDropListViewDrop_c *v17; // x0
  UnityEngine_GameObject_o *v18; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v22; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B120ED & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5473/*"DragReturnMoveEnd"*/, v6, v7);
    byte_4B120ED = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
  v17 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  v18 = this->fields.dragObject;
  x = v25.fields.x;
  y = v25.fields.y;
  z = v25.fields.z;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo, v16);
    v17 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
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
  v24 = StringLiteral_5473/*"DragReturnMoveEnd"*/;
  *(_QWORD *)&v22[3].fields.m_CachedPtr = StringLiteral_5473/*"DragReturnMoveEnd"*/;
  sub_1BCA784(&v22[3].fields, v24);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUIDragDropListViewDrop_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  struct ListViewObject_o *v12; // x20
  PartyOrganizationUIDragDropListViewDrop_o **p_dropObject; // x21
  __int64 v14; // x10

  v3 = this;
  if ( (byte_4B120F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v4, v5);
    sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, v6, v7);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1BCA7E0(&StringLiteral_5471/*"DragEnd"*/, v8, v9);
    byte_4B120F5 = 1;
  }
  mListViewObject = v3->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v12 = v3->fields.mListViewObject;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v3->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v3->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v12 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)v12,
                                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, void *, float))this->klass->vtable._8_OnDragDropRelease.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          this = (PartyOrganizationUIDragDropListViewDrop_o *)v3->fields.dropObject;
          if ( this )
          {
            this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( this )
            {
              ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, void *, float))this->klass->vtable._8_OnDragDropRelease.method)(
                this,
                this->klass[1]._1.image,
                1.0);
              goto LABEL_19;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(this, method);
  }
  if ( !v12 )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v12, 1, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v3->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)this, 1, 0LL);
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)v12, 8, 0LL);
  p_dropObject = (PartyOrganizationUIDragDropListViewDrop_o **)&v3->fields.dropObject;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v3->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)this, 7, 0LL);
  this = *p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)this, 8, 0LL);
  *p_dropObject = 0LL;
  sub_1BCA784(&v3->fields.dropObject, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v12->fields.manager;
  if ( !this )
    goto LABEL_25;
  v14 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v14
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v14 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_25;
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_5471/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  PartyOrganizationListViewDropObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  PartyOrganizationListViewItem_o *v33; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v35; // w23
  _BOOL4 v36; // w24
  _BOOL4 IsRarityRestriction; // w22
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewDropObject_o *v39; // x22
  __int64 v40; // x24
  __int64 v41; // x25
  int32_t v42; // w24
  int32_t v43; // w25
  const MethodInfo *v44; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  PartyOrganizationListViewDropObject_o *v46; // x24
  int32_t v47; // w25
  int32_t Rarity; // w26
  const MethodInfo *v49; // x7
  System_Text_StringBuilder_o *v50; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Text_StringBuilder_o *v54; // x25
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Text_StringBuilder_o *v58; // x26
  __int64 v59; // x1
  struct UserServantEntity_o *v60; // x8
  ServantEntity_o *servantEntity; // x28
  __int64 v62; // x27
  __int64 v63; // x29
  System_String_o *v64; // x28
  int32_t v65; // w29
  const MethodInfo *v66; // x7
  struct UserServantEntity_o *v67; // x8
  ServantEntity_o *v68; // x28
  __int64 v69; // x27
  __int64 v70; // x29
  System_String_o *v71; // x28
  int32_t v72; // w29
  const MethodInfo *v73; // x7
  int32_t v74; // w27
  int32_t v75; // w28
  int32_t v76; // w27
  int32_t v77; // w27
  int32_t v78; // w28
  int32_t index; // w8
  int32_t v80; // w9
  System_Text_StringBuilder_o *v81; // x1
  System_Text_StringBuilder_o *v82; // x20
  __int64 v83; // x1
  float v84; // s8
  int32_t windowHeight; // w25
  float v86; // s9
  System_String_o *v87; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v89; // x21
  System_String_o *v90; // x22
  System_String_o *v91; // x23
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  CommonConfirmDialog_ClickDelegate_o *v95; // x24
  PartyOrganizationListViewDropObject_o *v96; // [xsp+40h] [xbp-A0h]
  PartyOrganizationListViewDropObject_o *v97; // [xsp+40h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-88h] BYREF
  System_String_o *v100; // [xsp+60h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_4B120F3 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Math_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16, v17);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_10258/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v26, v27);
    byte_4B120F3 = 1;
  }
  v100 = 0LL;
  skillName = 0LL;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_88;
  methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_88;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_88;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               mListViewObject,
                                                               0LL);
  if ( !this->fields.dropObject )
    goto LABEL_88;
  v30 = (PartyOrganizationListViewItem_o *)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               this->fields.dropObject,
                                                               0LL);
  v33 = (PartyOrganizationListViewItem_o *)mListViewObject;
  *(_QWORD *)actMaxRarity = 0LL;
  v100 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isEquipSwap )
  {
    v36 = 0;
    IsRarityRestriction = 0;
LABEL_23:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, method);
      return;
    }
    goto LABEL_25;
  }
  if ( !v30 )
    goto LABEL_88;
  questRestrictionInfo = v30->fields.questRestrictionInfo;
  v35 = questRestrictionInfo ? questRestrictionInfo->fields.eventId : -1;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v30->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_88;
  v39 = mListViewObject;
  v41 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v102.fields.currentCryptoKey = v41;
  *(_QWORD *)&v102.fields.fakeValue = v40;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v102,
                                                               0LL);
  if ( !v30->fields.userServantEntity )
    goto LABEL_88;
  v42 = (int)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                               v30->fields.userServantEntity,
                                                               0LL);
  if ( !v33 )
    goto LABEL_88;
  v43 = (int)mListViewObject;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v33, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               EquipSvtId,
                                                               0LL);
  if ( !v39 )
    goto LABEL_88;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          (PartyOrganizationUtility_o *)mListViewObject,
                          &skillName,
                          &actMaxRarity[1],
                          v42,
                          v43,
                          (int32_t)mListViewObject,
                          v35,
                          v44);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v33->fields.userServantEntity;
  if ( !v45 )
    goto LABEL_88;
  v46 = mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v45[5],
                                                               0LL);
  if ( !v33->fields.userServantEntity )
    goto LABEL_88;
  v47 = (int)mListViewObject;
  Rarity = UserServantEntity__getRarity(v33->fields.userServantEntity, 0LL);
  v104 = PartyOrganizationListViewItem__get_EquipSvtId(v30, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v104,
                                                               0LL);
  if ( !v46 )
    goto LABEL_88;
  v36 = PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)mListViewObject,
          &v100,
          actMaxRarity,
          v47,
          Rarity,
          (int32_t)mListViewObject,
          v35,
          v49);
  if ( !v36 )
    goto LABEL_23;
LABEL_25:
  v50 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v31, v32);
  System_Text_StringBuilder___ctor(v50, 0LL);
  v54 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v51, v52, v53);
  System_Text_StringBuilder___ctor(v54, 0LL);
  v58 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v55, v56, v57);
  System_Text_StringBuilder___ctor(v58, 0LL);
  *(_QWORD *)maxLength = 0LL;
  if ( IsRarityRestriction )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v30 )
      goto LABEL_88;
    v60 = v30->fields.userServantEntity;
    v96 = mListViewObject;
    if ( !v60 )
      goto LABEL_88;
    servantEntity = v30->fields.servantEntity;
    v62 = *(_QWORD *)&v60->fields.limitCount.fields.currentCryptoKey;
    v63 = *(_QWORD *)&v60->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v105.fields.currentCryptoKey = v62;
    *(_QWORD *)&v105.fields.fakeValue = v63;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                 v105,
                                                                 0LL);
    if ( !servantEntity )
      goto LABEL_88;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 servantEntity,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v30->fields.userServantEntity )
      goto LABEL_88;
    v64 = (System_String_o *)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v30->fields.userServantEntity,
                                                                 0LL);
    if ( !v33 )
      goto LABEL_88;
    v65 = (int)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v33, 0LL);
    if ( !v96 )
      goto LABEL_88;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v64,
                                                                 v65,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v66);
    if ( !v54 )
      goto LABEL_88;
    System_Text_StringBuilder__Append_61563116(v54, (System_String_o *)mListViewObject, 0LL);
  }
  if ( v36 )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v33 )
    {
      v67 = v33->fields.userServantEntity;
      v97 = mListViewObject;
      if ( v67 )
      {
        v68 = v33->fields.servantEntity;
        v69 = *(_QWORD *)&v67->fields.limitCount.fields.currentCryptoKey;
        v70 = *(_QWORD *)&v67->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v106.fields.currentCryptoKey = v69;
        *(_QWORD *)&v106.fields.fakeValue = v70;
        mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                     v106,
                                                                     0LL);
        if ( v68 )
        {
          mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                       v68,
                                                                       (int32_t)mListViewObject,
                                                                       -1,
                                                                       0LL);
          if ( v33->fields.userServantEntity )
          {
            v71 = (System_String_o *)mListViewObject;
            mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                         v33->fields.userServantEntity,
                                                                         0LL);
            if ( v30 )
            {
              v72 = (int)mListViewObject;
              mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(
                                                                           v30,
                                                                           0LL);
              if ( v97 )
              {
                mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                             (PartyOrganizationUtility_o *)mListViewObject,
                                                                             maxLength,
                                                                             v71,
                                                                             v72,
                                                                             (System_String_o *)mListViewObject,
                                                                             v100,
                                                                             actMaxRarity[0],
                                                                             v73);
                if ( v58 )
                {
                  System_Text_StringBuilder__Append_61563116(v58, (System_String_o *)mListViewObject, 0LL);
                  v74 = maxLength[0];
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    sub_1BCAA3C(mListViewObject, method);
  }
  v74 = 0;
LABEL_48:
  v75 = maxLength[1];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v59);
  v76 = System_Math__Max_63220196(v75, v74, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_88;
  if ( v76 > 43 )
  {
    v78 = 0;
    v77 = 16;
    if ( !v30 )
      goto LABEL_88;
  }
  else if ( v76 > 41 )
  {
    v77 = 17;
    v78 = 17;
    if ( !v30 )
      goto LABEL_88;
  }
  else if ( v76 > 37 )
  {
    v77 = 18;
    v78 = 18;
    if ( !v30 )
      goto LABEL_88;
  }
  else if ( v76 > 34 )
  {
    v77 = 20;
    v78 = 20;
    if ( !v30 )
      goto LABEL_88;
  }
  else
  {
    if ( v76 >= 32 )
      v77 = 22;
    else
      v77 = 24;
    v78 = v77;
    if ( !v30 )
      goto LABEL_88;
  }
  if ( !v33 || !v50 )
    goto LABEL_88;
  index = v30->fields.index;
  v80 = v33->fields.index;
  v81 = index >= v80 ? v58 : v54;
  v82 = index >= v80 ? v54 : v58;
  System_Text_StringBuilder__Append_61563744(v50, v81, 0LL);
  System_Text_StringBuilder__Append_61563744(v50, v82, 0LL);
  v84 = v36 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v36 && IsRarityRestriction ? 520 : 480;
  v86 = v36 && IsRarityRestriction ? 40.0 : 30.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83);
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
  System_Text_StringBuilder__Append_61563116(v50, v87, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v89 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v50->klass->vtable._3_ToString.method)(
                             v50,
                             v50->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
  v95 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v92, v93, v94);
  CommonConfirmDialog_ClickDelegate___ctor(
    v95,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0LL);
  if ( !Instance )
    goto LABEL_88;
  CommonUI__OpenConfirmDialog_30766668(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v89,
    v90,
    v91,
    v95,
    v77,
    v78,
    v86,
    728,
    2,
    windowHeight,
    v84,
    0,
    0,
    240,
    1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        PartyOrganizationListViewDropObject_o *ddo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o **p_dropObject; // x20
  __int64 v12; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v15; // x21
  UnityEngine_Component_o *dragObject; // x0
  UnityEngine_Transform_o *v17; // x22
  int v18; // s0
  __int64 v21; // x1
  PartyOrganizationUIDragDropListViewDrop_c *v22; // x0
  UnityEngine_GameObject_o *v23; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  PartyOrganizationListViewDropObject_o *dropObject; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x23
  float v32; // s0
  float v33; // s1
  float v34; // s2
  float v35; // s4
  float v36; // s5
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B120F2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, ddo, method);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, v7, v8);
    sub_1BCA7E0(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v9, v10);
    byte_4B120F2 = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = (UnityEngine_Component_o **)&this->fields.dropObject;
  sub_1BCA784(&this->fields.dropObject, ddo);
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v15 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  dragObject = (UnityEngine_Component_o *)this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_25;
  dragObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)dragObject,
                                            0LL);
  if ( !dragObject )
    goto LABEL_25;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !*p_dropObject )
    goto LABEL_25;
  v17 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_dropObject, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v17 )
    goto LABEL_25;
  v37 = UnityEngine_Transform__InverseTransformPoint(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v22 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  v23 = this->fields.dragObject;
  x = v37.fields.x;
  y = v37.fields.y;
  z = v37.fields.z;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo, v21);
    v22 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  dragObject = (UnityEngine_Component_o *)TweenPosition__Begin(v23, v22->static_fields->ACTION_TIME, v38, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  LODWORD(dragObject[1].monitor) = 3;
  if ( !v15 )
    goto LABEL_25;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v15, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  dropObject = this->fields.dropObject;
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0LL);
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v15, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !dropObject )
    goto LABEL_25;
  v35 = v33;
  v36 = v34;
  v39.fields.x = v32;
  v39.fields.y = v35;
  v39.fields.z = v36;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v31, 0.0, v39, this->fields.isEquipSwap, 0LL);
  if ( this->fields.isEquipSwap )
  {
    dragObject = *p_dropObject;
    if ( *p_dropObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0LL);
      return;
    }
LABEL_25:
    sub_1BCAA3C(dragObject, v12);
  }
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUIDragDropListViewDrop_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *v10; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v12; // x11
  PartyOrganizationListViewManager_o *v13; // x22

  v3 = this;
  if ( (byte_4B120F4 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, v4, v5);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1BCA7E0(&StringLiteral_5474/*"DragSwapEnd"*/, v6, v7);
    byte_4B120F4 = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_22;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_22;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v3->fields.mListViewObject,
                                                        0LL);
  if ( !v3->fields.dropObject )
    goto LABEL_22;
  v10 = (PartyOrganizationListViewItem_o *)this;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        v3->fields.dropObject,
                                                        0LL);
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v12 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v13 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v13 = 0LL;
    if ( !this )
      goto LABEL_22;
  }
  else
  {
    v13 = 0LL;
    if ( !this )
      goto LABEL_22;
  }
  if ( v3->fields.isEquipSwap )
  {
    PartyOrganizationListViewItem__SwapEquip((PartyOrganizationListViewItem_o *)this, v10, 0LL);
    if ( !v13 )
      goto LABEL_22;
  }
  else
  {
    PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, v10, 0, 0LL);
    if ( !v13 )
      goto LABEL_22;
  }
  PartyOrganizationListViewManager__ModifyItem(v13, 0LL);
  PartyOrganizationListViewDropObject__GetItem(mListViewObject, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v3->fields.dropObject;
  if ( !this
    || (PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)this, 0LL),
        PartyOrganizationListViewDropObject__Init_32599672(mListViewObject, 9, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v3->fields.dropObject) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(this, method);
  }
  PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)this, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_5474/*"DragSwapEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct ListViewObject_o *IsDropDropSurface; // x0
  const MethodInfo *v14; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 methodPtr_low; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v18; // x11
  PartyOrganizationListViewManager_o *v19; // x23
  __int64 v20; // x1
  PartyOrganizationListViewItem_o *Item; // x22
  __int64 v22; // x1
  UnityEngine_Object_o *Component_object; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  ListViewDropInfo_o *v28; // x25
  UnityEngine_Object_o *monitor; // x23
  PartyOrganizationListViewItem_o *v30; // x0
  const MethodInfo *v31; // x2
  PartyOrganizationListViewItem_o *v32; // x24
  const MethodInfo *v33; // x1

  if ( (byte_4B120EB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___,
      surface,
      method);
    sub_1BCA7E0(&ListViewDropInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v9, v10);
    sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, v11, v12);
    byte_4B120EB = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  IsDropDropSurface = (struct ListViewObject_o *)sub_1BCA784(&this->fields.surface, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_40;
  methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_40;
  }
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v18 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v18) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v18 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v19 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v19 = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  Item = PartyOrganizationListViewDropObject__GetItem(
           (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject,
           0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)surface,
                                                   0LL,
                                                   0LL);
  if ( !Item || ((unsigned __int8)IsDropDropSurface & 1) == 0 )
    goto LABEL_32;
  if ( !surface )
    goto LABEL_40;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
    goto LABEL_32;
  IsDropDropSurface = this->fields.mListViewObject;
  if ( !IsDropDropSurface )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsDropDropSurface, 0LL);
  v28 = (ListViewDropInfo_o *)sub_1BCAA2C(ListViewDropInfo_TypeInfo, v25, v26, v27);
  ListViewDropInfo___ctor(v28, gameObject, surface, 0LL);
  if ( !v19 )
    goto LABEL_40;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(v19, v28, 0LL);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
    goto LABEL_32;
  if ( !Component_object )
    goto LABEL_40;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
  {
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v14);
    return;
  }
  if ( !monitor )
LABEL_40:
    sub_1BCAA3C(IsDropDropSurface, v14);
  v30 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0LL);
  if ( !v30 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
    PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
      mListViewObject,
      0LL,
      mListViewObject->klass->vtable._6_SetItem.methodPtr);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))monitor->klass[1]._1.namespaze)(
      monitor,
      Item,
      monitor->klass[1]._1.byval_arg.data);
    PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)monitor, 4, 0LL);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v33);
    return;
  }
  v32 = v30;
  if ( v30 == Item )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v14);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_31:
    if ( !v32->fields.isFollower && v32->fields.userServantEntity )
      goto LABEL_39;
    goto LABEL_32;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v30, 0LL) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_39:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)monitor, v31);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  struct ListViewManager_o *manager; // x9
  int linkItem_low; // w8
  __int64 v18; // x12
  PartyOrganizationListViewManager_o *v19; // x19

  if ( (byte_4B120EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v4, v5);
    sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UICamera_TypeInfo, v8, v9);
    byte_4B120EA = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  this->fields.isDrag = 1;
  p_image = &UICamera_TypeInfo->_1.image;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10);
    p_image = &UICamera_TypeInfo->_1.image;
  }
  currentTouch = *(struct UICamera_MouseOrTouch_o **)(p_image[23] + 160LL);
  if ( currentTouch )
  {
    if ( !*((_DWORD *)p_image + 56) )
    {
      j_il2cpp_runtime_class_init_0(p_image, v10);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_25;
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    p_image = (_QWORD *)sub_1BCA784(&this->fields.surface, dragged);
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_25;
  methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_25;
  }
  manager = mListViewObject->fields.manager;
  linkItem_low = LOBYTE(mListViewObject[1].fields.linkItem);
  this->fields.isEquipSwap = linkItem_low;
  if ( !manager
    || (v18 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v18) )
  {
    v19 = 0LL;
    if ( linkItem_low )
      goto LABEL_15;
    goto LABEL_21;
  }
  if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v18 - 1] == PartyOrganizationListViewManager_TypeInfo )
    v19 = (PartyOrganizationListViewManager_o *)manager;
  else
    v19 = 0LL;
  if ( !linkItem_low )
  {
LABEL_21:
    p_image = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)mListViewObject,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( p_image )
    {
      p_image = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, float))(*p_image + 440LL))(
                            p_image,
                            *(_QWORD *)(*p_image + 448LL),
                            0.0);
      if ( v19 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BCAA3C(p_image, v10);
  }
LABEL_15:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  if ( !v19 )
    goto LABEL_25;
LABEL_23:
  PartyOrganizationListViewManager__SetDispSwapGuide(v19, 0, 0LL);
  p_image = &mListViewObject->fields.manager->klass;
  if ( !p_image )
    goto LABEL_25;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 440LL))(p_image, *(_QWORD *)(*p_image + 448LL));
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__SetBaseTransform(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *listViewObject; // x20
  struct ListViewObject_o *Component_object; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v14; // x0
  struct UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v16; // x0

  if ( (byte_4B120E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B120E9 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1BCA784(&this->fields.mListViewObject, Component_object);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v14 = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v14,
        sub_1BCA784(&this->fields.mDragScrollView, v14),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_1BCAA3C(mListViewObject, v12);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_1BCA784(&this->fields.mTrans, transform);
  v16 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v16;
  sub_1BCA784(&this->fields.mCollider, v16);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4B120E8 & 1) == 0 )
  {
    sub_1BCA7E0(&UICamera_TypeInfo, method, v2);
    byte_4B120E8 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    if ( !UICamera__IsPressed(surface, 0LL) )
      ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, struct UnityEngine_GameObject_o *, void *))this->klass->vtable._8_OnDragDropRelease.method)(
        this,
        this->fields.surface,
        this->klass[1]._1.image);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop___DragSwapMoveEnd_b__17_0(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B120F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&StringLiteral_5474/*"DragSwapEnd"*/, v5, v6);
    byte_4B120F7 = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5474/*"DragSwapEnd"*/,
      0.1,
      0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}