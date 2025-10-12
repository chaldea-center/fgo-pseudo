void PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  if ( (byte_4C336B1 & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    byte_4C336B1 = 1;
  }
  LODWORD(PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationUIDragDropListViewDrop_StaticFields)1045220557;
}


void PartyOrganizationUIDragDropListViewDrop___ctor(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void PartyOrganizationUIDragDropListViewDrop__DragDumpEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x10
  __int64 v5; // x9
  __int64 v6; // x12
  UnityEngine_Object_o *v7; // x21

  v2 = this;
  if ( (byte_4C336AC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C32C20(&StringLiteral_5363/*"DragEnd"*/);
    byte_4C336AC = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_19;
  naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_19;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_19;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0);
  if ( !this )
    goto LABEL_19;
  v5 = *(_QWORD *)&this->fields.mTarget.fields.z;
  if ( v5
    && (v6 = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v5 + 304LL) >= (unsigned int)v6) )
  {
    if ( *(PartyOrganizationListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v5 + 200LL) + 8 * v6 - 8) == PartyOrganizationListViewObject_TypeInfo )
      v7 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.z;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v7 )
    {
      PartyOrganizationListViewObject__Init_34212076((PartyOrganizationListViewObject_o *)v7, 8, 0);
      goto LABEL_18;
    }
LABEL_19:
    sub_1C32E7C(this);
  }
LABEL_18:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0, 0);
  PartyOrganizationListViewDropObject__Init_34128644(mListViewObject, 0, 0);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
    mListViewObject,
    0,
    mListViewObject->klass->vtable._5_SetItem.method);
  UIDragDropListViewItem__SetEnabledColliderDragMask((UIDragDropListViewItem_o *)v2, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5363/*"DragEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewDrop__DragDumpStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_c *v3; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Color_o v19; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C336AB & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    sub_1C32C20(&StringLiteral_5362/*"DragDumpEnd"*/);
    byte_4C336AB = 1;
  }
  v3 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v3 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v19.fields.r = 0.0;
  v19.fields.g = 0.0;
  v19.fields.b = 0.0;
  v19.fields.a = 0.0;
  transform = (UnityEngine_GameObject_o *)TweenColor__Begin(dragObject, v3->static_fields->ACTION_TIME, v19, 0);
  if ( !transform )
    goto LABEL_12;
  LODWORD(transform[1].monitor) = 3;
  transform = this->fields.dragObject;
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !byte_4C33701 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C33701 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v18.fields.x = x + (float)(static_fields->downVector.fields.x * 50.0);
  v18.fields.y = y + (float)(static_fields->downVector.fields.y * 50.0);
  v18.fields.z = z + (float)(static_fields->downVector.fields.z * 50.0);
  transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                            this->fields.dragObject,
                                            PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
                                            v18,
                                            0);
  if ( !transform )
LABEL_12:
    sub_1C32E7C(transform);
  v10 = transform;
  LODWORD(transform[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10[3].monitor, (int32_t)gameObject, v12, v13);
  v14 = StringLiteral_5362/*"DragDumpEnd"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_5362/*"DragDumpEnd"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10[3].fields, v14, v15, v16);
}


void PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  __int64 v7; // x10

  if ( (byte_4C336A7 & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewManager_TypeInfo);
    byte_4C336A7 = 1;
  }
  UIDragDropListViewItem__SetEnabledColliderDragMask((UIDragDropListViewItem_o *)this, 0, 0);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0
    || (v7 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment < (unsigned int)v7)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1C32E7C(v3);
  }
  ((void (__fastcall *)(PartyOrganizationListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  if ( this->fields.isEquipSwap )
    PartyOrganizationListViewManager__EndSwapEquip(
      manager,
      this->fields.mListViewObject,
      (ListViewObject_o *)this->fields.dropObject,
      0);
}


void PartyOrganizationUIDragDropListViewDrop__DragReturnEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  PartyOrganizationUIDragDropListViewDrop_o **mListViewObject; // x20
  __int64 naturalAligment; // x10
  __int64 v5; // x10

  v2 = this;
  if ( (byte_4C336AA & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C32C20(&StringLiteral_5363/*"DragEnd"*/);
    byte_4C336AA = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewDrop_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
        (*mListViewObject)[1].fields.isEquipSwap < (unsigned int)naturalAligment)
    || *(PartyOrganizationListViewDropObject_c **)(*(_QWORD *)&(*mListViewObject)[1].fields.restriction
                                                 + 8 * naturalAligment
                                                 - 8) != PartyOrganizationListViewDropObject_TypeInfo
    || (this = mListViewObject[5]) == 0
    || (v5 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        this->klass->_2.naturalAligment < (unsigned int)v5)
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v5 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0, 0);
  PartyOrganizationListViewDropObject__Init_34128644((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0);
  v2->fields.isEquipSwap = 0;
  UIDragDropListViewItem__SetEnabledColliderDragMask((UIDragDropListViewItem_o *)v2, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5363/*"DragEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewDrop__DragReturnMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Component_o *v5; // x20

  v2 = this;
  if ( (byte_4C336A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C32C20(&StringLiteral_5364/*"DragReturnEnd"*/);
    byte_4C336A9 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v5 = (UnityEngine_Component_o *)v2->fields.mListViewObject;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !v2->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( v5 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                              v5,
                                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, const MethodInfo *, float))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
            this,
            this->klass->vtable._8_OnDragDropRelease.method,
            1.0);
          goto LABEL_16;
        }
      }
    }
LABEL_17:
    sub_1C32E7C(this);
  }
  if ( !v5 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v5, 1, 0);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_34128644((PartyOrganizationListViewDropObject_o *)v5, 9, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5364/*"DragReturnEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewDrop__DragReturnStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  PartyOrganizationUIDragDropListViewDrop_c *v8; // x0
  UnityEngine_GameObject_o *v9; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C336A8 & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    sub_1C32C20(&StringLiteral_5365/*"DragReturnMoveEnd"*/);
    byte_4C336A8 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
  v21 = UnityEngine_Transform__InverseTransformPoint(v7, position, 0);
  v8 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  v9 = this->fields.dragObject;
  x = v21.fields.x;
  y = v21.fields.y;
  z = v21.fields.z;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v8 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v9, v8->static_fields->ACTION_TIME, v22, 0);
  if ( !dragObject )
LABEL_18:
    sub_1C32E7C(dragObject);
  v13 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13[3].monitor = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&v13[3].monitor, (int32_t)gameObject, v15, v16);
  v17 = StringLiteral_5365/*"DragReturnMoveEnd"*/;
  v13[3].fields.m_CachedPtr = StringLiteral_5365/*"DragReturnMoveEnd"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v13[3].fields, v17, v18, v19);
}


void PartyOrganizationUIDragDropListViewDrop__DragSwapEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  struct ListViewObject_o *v5; // x20
  __int64 v6; // x10

  v2 = this;
  if ( (byte_4C336B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C32C20(&StringLiteral_5363/*"DragEnd"*/);
    byte_4C336B0 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v5 = v2->fields.mListViewObject;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !v2->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( v5 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)v5,
                                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, const MethodInfo *, float))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
            this,
            this->klass->vtable._8_OnDragDropRelease.method,
            1.0);
          this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
          if ( this )
          {
            this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( this )
            {
              ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, const MethodInfo *, float))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
                this,
                this->klass->vtable._8_OnDragDropRelease.method,
                1.0);
              goto LABEL_19;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C32E7C(this);
  }
  if ( !v5 )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v5, 1, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)this, 1, 0);
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0, 0);
  PartyOrganizationListViewDropObject__Init_34128644((PartyOrganizationListViewDropObject_o *)v5, 8, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_34128644((PartyOrganizationListViewDropObject_o *)this, 7, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_34128644((PartyOrganizationListViewDropObject_o *)this, 8, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v5->fields.manager;
  if ( !this )
    goto LABEL_25;
  v6 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)v6
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_25;
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0);
  UIDragDropListViewItem__SetEnabledColliderDragMask((UIDragDropListViewItem_o *)v2, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5363/*"DragEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewDropObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x10
  PartyOrganizationListViewItem_o *v5; // x20
  const MethodInfo *v6; // x1
  PartyOrganizationListViewItem_o *v7; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v9; // w23
  bool v10; // w24
  bool IsRarityRestriction; // w22
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewDropObject_o *v13; // x22
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t v16; // w24
  int32_t v17; // w25
  const MethodInfo *v18; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  PartyOrganizationListViewDropObject_o *v20; // x24
  int32_t v21; // w25
  int32_t Rarity; // w26
  const MethodInfo *v23; // x7
  System_Text_StringBuilder_o *v24; // x23
  System_Text_StringBuilder_o *v25; // x25
  System_Text_StringBuilder_o *v26; // x26
  struct UserServantEntity_o *v27; // x8
  ServantEntity_o *servantEntity; // x28
  __int64 v29; // x27
  __int64 v30; // x29
  System_String_o *v31; // x28
  int32_t v32; // w29
  const MethodInfo *v33; // x7
  struct UserServantEntity_o *v34; // x8
  ServantEntity_o *v35; // x28
  __int64 v36; // x27
  __int64 v37; // x29
  System_String_o *v38; // x28
  int32_t v39; // w29
  const MethodInfo *v40; // x7
  int32_t v41; // w27
  int32_t v42; // w28
  int32_t v43; // w27
  int32_t v44; // w27
  int32_t v45; // w28
  int32_t index; // w8
  int32_t v47; // w9
  System_Text_StringBuilder_o *v48; // x1
  System_Text_StringBuilder_o *v49; // x20
  float v50; // s8
  int32_t windowHeight; // w25
  float v52; // s9
  System_String_o *v53; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v55; // x21
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  CommonConfirmDialog_ClickDelegate_o *v58; // x24
  PartyOrganizationListViewDropObject_o *v59; // [xsp+40h] [xbp-A0h]
  PartyOrganizationListViewDropObject_o *v60; // [xsp+40h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-88h] BYREF
  System_String_o *v63; // [xsp+60h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4C336AE & 1) == 0 )
  {
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_10100/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C32C20(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C32C20(&StringLiteral_3693/*"COMMON_CONFIRM_YES"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C336AE = 1;
  }
  v63 = 0;
  skillName = 0;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_88;
  naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_88;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_88;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               mListViewObject,
                                                               0);
  if ( !this->fields.dropObject )
    goto LABEL_88;
  v5 = (PartyOrganizationListViewItem_o *)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               this->fields.dropObject,
                                                               0);
  v7 = (PartyOrganizationListViewItem_o *)mListViewObject;
  *(_QWORD *)actMaxRarity = 0;
  v63 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isEquipSwap )
  {
    v10 = 0;
    IsRarityRestriction = 0;
LABEL_23:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, v6);
      return;
    }
    goto LABEL_25;
  }
  if ( !v5 )
    goto LABEL_88;
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  v9 = questRestrictionInfo ? questRestrictionInfo->fields.eventId : -1;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v5->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_88;
  v13 = mListViewObject;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v15;
  *(_QWORD *)&v65.fields.fakeValue = v14;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                               v65,
                                                               0);
  if ( !v5->fields.userServantEntity )
    goto LABEL_88;
  v16 = (int)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                               v5->fields.userServantEntity,
                                                               0);
  if ( !v7 )
    goto LABEL_88;
  v17 = (int)mListViewObject;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v7, 0);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                               EquipSvtId,
                                                               0);
  if ( !v13 )
    goto LABEL_88;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          (PartyOrganizationUtility_o *)mListViewObject,
                          &skillName,
                          &actMaxRarity[1],
                          v16,
                          v17,
                          (int32_t)mListViewObject,
                          v9,
                          v18);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v7->fields.userServantEntity;
  if ( !v19 )
    goto LABEL_88;
  v20 = mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                               v19[5],
                                                               0);
  if ( !v7->fields.userServantEntity )
    goto LABEL_88;
  v21 = (int)mListViewObject;
  Rarity = UserServantEntity__getRarity(v7->fields.userServantEntity, 0);
  v67 = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                               v67,
                                                               0);
  if ( !v20 )
    goto LABEL_88;
  v10 = PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)mListViewObject,
          &v63,
          actMaxRarity,
          v21,
          Rarity,
          (int32_t)mListViewObject,
          v9,
          v23);
  if ( !v10 )
    goto LABEL_23;
LABEL_25:
  v24 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v24, 0);
  v25 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v25, 0);
  v26 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v26, 0);
  *(_QWORD *)maxLength = 0;
  if ( IsRarityRestriction )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v5 )
      goto LABEL_88;
    v27 = v5->fields.userServantEntity;
    v59 = mListViewObject;
    if ( !v27 )
      goto LABEL_88;
    servantEntity = v5->fields.servantEntity;
    v29 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
    v30 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v68.fields.currentCryptoKey = v29;
    *(_QWORD *)&v68.fields.fakeValue = v30;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                 v68,
                                                                 0);
    if ( !servantEntity )
      goto LABEL_88;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 servantEntity,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0,
                                                                 0);
    if ( !v5->fields.userServantEntity )
      goto LABEL_88;
    v31 = (System_String_o *)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v5->fields.userServantEntity,
                                                                 0);
    if ( !v7 )
      goto LABEL_88;
    v32 = (int)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v7, 0);
    if ( !v59 )
      goto LABEL_88;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v31,
                                                                 v32,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v33);
    if ( !v25 )
      goto LABEL_88;
    System_Text_StringBuilder__Append_63603608(v25, (System_String_o *)mListViewObject, 0);
  }
  if ( v10 )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v7 )
    {
      v34 = v7->fields.userServantEntity;
      v60 = mListViewObject;
      if ( v34 )
      {
        v35 = v7->fields.servantEntity;
        v36 = *(_QWORD *)&v34->fields.limitCount.fields.currentCryptoKey;
        v37 = *(_QWORD *)&v34->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v69.fields.currentCryptoKey = v36;
        *(_QWORD *)&v69.fields.fakeValue = v37;
        mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                     v69,
                                                                     0);
        if ( v35 )
        {
          mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                       v35,
                                                                       (int32_t)mListViewObject,
                                                                       -1,
                                                                       0,
                                                                       0);
          if ( v7->fields.userServantEntity )
          {
            v38 = (System_String_o *)mListViewObject;
            mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                         v7->fields.userServantEntity,
                                                                         0);
            if ( v5 )
            {
              v39 = (int)mListViewObject;
              mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(
                                                                           v5,
                                                                           0);
              if ( v60 )
              {
                mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                             (PartyOrganizationUtility_o *)mListViewObject,
                                                                             maxLength,
                                                                             v38,
                                                                             v39,
                                                                             (System_String_o *)mListViewObject,
                                                                             v63,
                                                                             actMaxRarity[0],
                                                                             v40);
                if ( v26 )
                {
                  System_Text_StringBuilder__Append_63603608(v26, (System_String_o *)mListViewObject, 0);
                  v41 = maxLength[0];
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    sub_1C32E7C(mListViewObject);
  }
  v41 = 0;
LABEL_48:
  v42 = maxLength[1];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v43 = System_Math__Max_65041976(v42, v41, 0);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_88;
  if ( v43 > 43 )
  {
    v45 = 0;
    v44 = 16;
    if ( !v5 )
      goto LABEL_88;
  }
  else if ( v43 > 41 )
  {
    v44 = 17;
    v45 = 17;
    if ( !v5 )
      goto LABEL_88;
  }
  else if ( v43 > 37 )
  {
    v44 = 18;
    v45 = 18;
    if ( !v5 )
      goto LABEL_88;
  }
  else if ( v43 > 34 )
  {
    v44 = 20;
    v45 = 20;
    if ( !v5 )
      goto LABEL_88;
  }
  else
  {
    if ( v43 >= 32 )
      v44 = 22;
    else
      v44 = 24;
    v45 = v44;
    if ( !v5 )
      goto LABEL_88;
  }
  if ( !v7 || !v24 )
    goto LABEL_88;
  index = v5->fields.index;
  v47 = v7->fields.index;
  v48 = index >= v47 ? v26 : v25;
  v49 = index >= v47 ? v25 : v26;
  System_Text_StringBuilder__Append_63604236(v24, v48, 0);
  System_Text_StringBuilder__Append_63604236(v24, v49, 0);
  v50 = v10 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v10 && IsRarityRestriction ? 520 : 480;
  v52 = v10 && IsRarityRestriction ? 40.0 : 30.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_10100/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
  System_Text_StringBuilder__Append_63603608(v24, v53, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v24->klass->vtable._3_ToString.methodPtr)(
                             v24,
                             v24->klass->vtable._3_ToString.method);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
  v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v58,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0);
  if ( !Instance )
    goto LABEL_88;
  CommonUI__OpenConfirmDialog_31190852(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v55,
    v56,
    v57,
    v58,
    v44,
    v45,
    v52,
    728,
    2,
    windowHeight,
    v50,
    0,
    0,
    240,
    1,
    0);
}


void PartyOrganizationUIDragDropListViewDrop__DragSwapStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        PartyOrganizationListViewDropObject_o *ddo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PartyOrganizationListViewDropObject_o **p_dropObject; // x21
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Component_o *v9; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Component_o *v11; // x8
  UnityEngine_Transform_o *v12; // x21
  PartyOrganizationUIDragDropListViewDrop_c *v13; // x0
  UnityEngine_GameObject_o *v14; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  PartyOrganizationListViewDropObject_o *dropObject; // x21
  System_Action_o *v19; // x22
  float v20; // s4
  float v21; // s5
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C336AD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__);
    sub_1C32C20(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    byte_4C336AD = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = &this->fields.dropObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dropObject, (int32_t)ddo, (int32_t)method, v3);
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v9 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_25;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_25;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  v11 = (UnityEngine_Component_o *)*p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_25;
  v12 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0);
  if ( !dragObject )
    goto LABEL_25;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v12 )
    goto LABEL_25;
  v23 = UnityEngine_Transform__InverseTransformPoint(v12, position, 0);
  v13 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  v14 = this->fields.dragObject;
  x = v23.fields.x;
  y = v23.fields.y;
  z = v23.fields.z;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v13 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v14, v13->static_fields->ACTION_TIME, v25, 0);
  if ( !dragObject )
    goto LABEL_25;
  LODWORD(dragObject[1].monitor) = 3;
  if ( !v9 )
    goto LABEL_25;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v9, 0);
  if ( !dragObject )
    goto LABEL_25;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  dropObject = this->fields.dropObject;
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v9, 0);
  if ( !dragObject )
    goto LABEL_25;
  v24 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !dropObject
    || (v20 = v24.fields.y,
        v21 = v24.fields.z,
        v26.fields.x = v24.fields.x,
        v26.fields.y = v20,
        v26.fields.z = v21,
        PartyOrganizationListViewDropObject__Init(dropObject, 6, v19, 0.0, v26, this->fields.isEquipSwap, 0),
        (dragObject = (UnityEngine_GameObject_o *)this->fields.dropObject) == 0) )
  {
LABEL_25:
    sub_1C32E7C(dragObject);
  }
  if ( this->fields.isEquipSwap )
    PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0);
  else
    PartyOrganizationListViewDropObject__SetActiveGrandEffect((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0);
}


void PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x10
  PartyOrganizationListViewItem_o *v5; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v7; // x11
  PartyOrganizationListViewManager_o *v8; // x22

  v2 = this;
  if ( (byte_4C336AF & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C32C20(&StringLiteral_5366/*"DragSwapEnd"*/);
    byte_4C336AF = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_22;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_22;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0);
  if ( !v2->fields.dropObject )
    goto LABEL_22;
  v5 = (PartyOrganizationListViewItem_o *)this;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        v2->fields.dropObject,
                                                        0);
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v7 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)v7) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v8 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v8 = 0;
    if ( !this )
      goto LABEL_22;
  }
  else
  {
    v8 = 0;
    if ( !this )
      goto LABEL_22;
  }
  if ( v2->fields.isEquipSwap )
  {
    PartyOrganizationListViewItem__SwapEquip((PartyOrganizationListViewItem_o *)this, v5, 0);
    if ( !v8 )
      goto LABEL_22;
  }
  else
  {
    PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, v5, 0, 0);
    if ( !v8 )
      goto LABEL_22;
  }
  PartyOrganizationListViewManager__CallbackFuncModify(v8, 0);
  PartyOrganizationListViewDropObject__GetItem(mListViewObject, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this
    || (PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)this, 0),
        PartyOrganizationListViewDropObject__Init_34128644(mListViewObject, 9, 0),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0) )
  {
LABEL_22:
    sub_1C32E7C(this);
  }
  PartyOrganizationListViewDropObject__Init_34128644((PartyOrganizationListViewDropObject_o *)this, 9, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5366/*"DragSwapEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewDrop__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ListViewObject_o *IsDropDropSurface; // x0
  struct ListViewObject_o *mListViewObject; // x21
  __int64 naturalAligment; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  PartyOrganizationListViewManager_o *v11; // x23
  PartyOrganizationListViewItem_o *Item; // x22
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *Component_object; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v16; // x25
  UnityEngine_Object_o *monitor; // x23
  const MethodInfo *v18; // x1
  PartyOrganizationListViewItem_o *v19; // x0
  const MethodInfo *v20; // x2
  PartyOrganizationListViewItem_o *v21; // x24
  const MethodInfo *v22; // x1

  if ( (byte_4C336A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    sub_1C32C20(&ListViewDropInfo_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewManager_TypeInfo);
    byte_4C336A6 = 1;
  }
  this->fields.surface = 0;
  this->fields.isDrag = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.surface, 0, (int32_t)method, v3);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_40;
  naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_40;
  }
  manager = mListViewObject->fields.manager;
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
  Item = PartyOrganizationListViewDropObject__GetItem(
           (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject,
           0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)surface,
                                                   0,
                                                   0);
  if ( !Item || ((unsigned __int8)IsDropDropSurface & 1) == 0 )
    goto LABEL_32;
  if ( !surface )
    goto LABEL_40;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
    goto LABEL_32;
  IsDropDropSurface = this->fields.mListViewObject;
  if ( !IsDropDropSurface )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsDropDropSurface, 0);
  v16 = (ListViewDropInfo_o *)sub_1C32E6C(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v16, gameObject, surface, 0);
  if ( !v11 )
    goto LABEL_40;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(v11, v16, 0);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
    goto LABEL_32;
  if ( !Component_object )
    goto LABEL_40;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
  {
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v18);
    return;
  }
  if ( !monitor )
LABEL_40:
    sub_1C32E7C(IsDropDropSurface);
  v19 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0);
  if ( !v19 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0);
    PartyOrganizationListViewDropObject__Init_34128644((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
      mListViewObject,
      0,
      mListViewObject->klass->vtable._5_SetItem.method);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, const char *))monitor->klass[1]._1.name)(
      monitor,
      Item,
      monitor->klass[1]._1.namespaze);
    PartyOrganizationListViewDropObject__Init_34128644((PartyOrganizationListViewDropObject_o *)monitor, 4, 0);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v22);
    return;
  }
  v21 = v19;
  if ( v19 == Item )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v13);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_31:
    if ( !v21->fields.isFollower && v21->fields.userServantEntity )
      goto LABEL_39;
    goto LABEL_32;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v19, 0) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_39:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)monitor, v20);
}


void PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  UnityEngine_Component_o *mListViewObject; // x20
  __int64 naturalAligment; // x10
  PartyOrganizationListViewManager_o *m_CachedPtr; // x9
  int monitor_low; // w8
  __int64 v14; // x12
  PartyOrganizationListViewManager_o *v15; // x19

  if ( (byte_4C336A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C32C20(&PartyOrganizationListViewManager_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C336A5 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  this->fields.dropObject = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dropObject, 0, v3, v4);
  this->fields.isDrag = 1;
  p_image = &UICamera_TypeInfo->_1.image;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    p_image = &UICamera_TypeInfo->_1.image;
  }
  currentTouch = *(struct UICamera_MouseOrTouch_o **)(p_image[23] + 160LL);
  if ( currentTouch )
  {
    if ( !*((_DWORD *)p_image + 56) )
    {
      j_il2cpp_runtime_class_init_0(p_image);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_25;
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.surface, (int32_t)dragged, v5, v6);
  }
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_25;
  naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_25;
  }
  m_CachedPtr = (PartyOrganizationListViewManager_o *)mListViewObject[1].fields.m_CachedPtr;
  monitor_low = LOBYTE(mListViewObject[7].monitor);
  this->fields.isEquipSwap = monitor_low;
  if ( !m_CachedPtr
    || (v14 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        m_CachedPtr->klass->_2.naturalAligment < (unsigned int)v14) )
  {
    v15 = 0;
    if ( monitor_low )
      goto LABEL_15;
    goto LABEL_21;
  }
  if ( (PartyOrganizationListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[v14 - 1] == PartyOrganizationListViewManager_TypeInfo )
    v15 = m_CachedPtr;
  else
    v15 = 0;
  if ( !monitor_low )
  {
LABEL_21:
    p_image = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( p_image )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, float))(*p_image + 440LL))(p_image, *(_QWORD *)(*p_image + 448LL), 0.0);
      PartyOrganizationListViewDropObject__SetActiveGrandEffect(
        (PartyOrganizationListViewDropObject_o *)mListViewObject,
        0,
        0);
      if ( v15 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C32E7C(p_image);
  }
LABEL_15:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0);
  if ( !v15 )
    goto LABEL_25;
LABEL_23:
  PartyOrganizationListViewManager__SetDispSwapGuide(v15, 0, 0);
  p_image = (_QWORD *)mListViewObject[1].fields.m_CachedPtr;
  if ( !p_image )
    goto LABEL_25;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 440LL))(p_image, *(_QWORD *)(*p_image + 448LL));
}


void PartyOrganizationUIDragDropListViewDrop__SetBaseTransform(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewObject; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ListViewObject_o *Component_object; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C336A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C336A4 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0, 0) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mListViewObject, (int32_t)Component_object, v4, v5);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v8 = UnityEngine_Component__GetComponent_object_(
               mListViewObject,
               (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v8,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mDragScrollView, (int32_t)v8, v9, v10),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0) )
  {
    sub_1C32E7C(mListViewObject);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0);
  this->fields.mTrans = transform;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v12, v13);
  v14 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCollider, (int32_t)v14, v15, v16);
}


void PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4C336A3 & 1) == 0 )
  {
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C336A3 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( !UICamera__IsPressed(surface, 0) )
      ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
        this,
        this->fields.surface,
        this->klass->vtable._8_OnDragDropRelease.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationUIDragDropListViewDrop___DragSwapMoveEnd_b__17_0(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C336B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_5366/*"DragSwapEnd"*/);
    byte_4C336B2 = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5366/*"DragSwapEnd"*/,
      0.1,
      0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}