void PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  if ( (byte_59340B6 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    byte_59340B6 = 1;
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
  __int64 v5; // x2
  __int64 v6; // x9
  __int64 v7; // x12
  UnityEngine_Object_o *v8; // x21

  v2 = this;
  if ( (byte_59340B1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_21FFC50(&StringLiteral_5544/*"DragEnd"*/);
    byte_59340B1 = 1;
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
  v6 = *(_QWORD *)&this->fields.mTarget.fields.z;
  if ( v6
    && (v7 = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v6 + 304LL) >= (unsigned int)v7) )
  {
    if ( *(PartyOrganizationListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v6 + 200LL) + 8 * v7 - 8) == PartyOrganizationListViewObject_TypeInfo )
      v8 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.z;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v5);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8 )
    {
      PartyOrganizationListViewObject__Init_41040568((PartyOrganizationListViewObject_o *)v8, 8, 0);
      goto LABEL_18;
    }
LABEL_19:
    sub_21FFECC(this, method);
  }
LABEL_18:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0, 0);
  PartyOrganizationListViewDropObject__Init_40955844(mListViewObject, 0, 0);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
    mListViewObject,
    0,
    mListViewObject->klass->vtable._5_SetItem.method);
  UIDragDropListViewItem__SetEnabledColliderDragMask((UIDragDropListViewItem_o *)v2, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5544/*"DragEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewDrop__DragDumpStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUIDragDropListViewDrop_c *v4; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Color_o v30; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_59340B0 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    sub_21FFC50(&StringLiteral_5543/*"DragDumpEnd"*/);
    byte_59340B0 = 1;
  }
  v4 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  if ( !*(&PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo, method, v2);
    v4 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v30.fields.r = 0.0;
  v30.fields.g = 0.0;
  v30.fields.b = 0.0;
  v30.fields.a = 0.0;
  transform = (UnityEngine_Transform_o *)TweenColor__Begin(dragObject, v4->static_fields->ACTION_TIME, v30, 0);
  if ( !transform )
    goto LABEL_12;
  v8 = this->fields.dragObject;
  LODWORD(transform[1].monitor) = 3;
  if ( !v8 )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(v8, 0);
  if ( !transform )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !byte_5934109 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5934109 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v29.fields.z = z + (float)(static_fields->downVector.fields.z * 50.0);
  v29.fields.x = x + (float)(static_fields->downVector.fields.x * 50.0);
  v29.fields.y = y + (float)(static_fields->downVector.fields.y * 50.0);
  transform = (UnityEngine_Transform_o *)TweenPosition__Begin(
                                           this->fields.dragObject,
                                           PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
                                           v29,
                                           0);
  if ( !transform )
LABEL_12:
    sub_21FFECC(transform, v7);
  v13 = transform;
  LODWORD(transform[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13[3].monitor = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[3].monitor, (int32_t)gameObject, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_5543/*"DragDumpEnd"*/;
  v13[3].fields.m_CachedPtr = StringLiteral_5543/*"DragDumpEnd"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[3].fields, v21, v22, v23, v24, v25, v26, v27);
}


void PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  PartyOrganizationListViewManager_c *klass; // x8
  __int64 v9; // x10

  if ( (byte_59340AC & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewManager_TypeInfo);
    byte_59340AC = 1;
  }
  UIDragDropListViewItem__SetEnabledColliderDragMask((UIDragDropListViewItem_o *)this, 0, 0);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0
    || (klass = manager->klass,
        v9 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment < (unsigned int)v9)
    || (PartyOrganizationListViewManager_c *)klass->_2.typeHierarchy[v9 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_21FFECC(v3, v4);
  }
  ((void (__fastcall *)(PartyOrganizationListViewManager_o *, const MethodInfo *))klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    klass->vtable._9_ItemDragEnd.method);
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
  if ( (byte_59340AF & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_21FFC50(&StringLiteral_5544/*"DragEnd"*/);
    byte_59340AF = 1;
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
    sub_21FFECC(this, method);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0, 0);
  PartyOrganizationListViewDropObject__Init_40955844((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0);
  v2->fields.isEquipSwap = 0;
  UIDragDropListViewItem__SetEnabledColliderDragMask((UIDragDropListViewItem_o *)v2, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5544/*"DragEnd"*/, 0.1, 0);
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
  if ( (byte_59340AE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_21FFC50(&StringLiteral_5545/*"DragReturnEnd"*/);
    byte_59340AE = 1;
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
                                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_21FFECC(this, method);
  }
  if ( !v5 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v5, 1, 0);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_40955844((PartyOrganizationListViewDropObject_o *)v5, 9, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5545/*"DragReturnEnd"*/, 0.1, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewDrop_c *v12; // x0
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

  if ( (byte_59340AD & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    sub_21FFC50(&StringLiteral_5546/*"DragReturnMoveEnd"*/);
    byte_59340AD = 1;
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
  v31 = UnityEngine_Transform__InverseTransformPoint(v7, position, 0);
  x = v31.fields.x;
  y = v31.fields.y;
  v12 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v31.fields.z;
  v14 = this->fields.dragObject;
  if ( !*(&PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo, v8, v9);
    v12 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v14, v12->static_fields->ACTION_TIME, v32, 0);
  if ( !dragObject )
LABEL_18:
    sub_21FFECC(dragObject, method);
  v15 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v15[3].monitor = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15[3].monitor, (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_5546/*"DragReturnMoveEnd"*/;
  v15[3].fields.m_CachedPtr = StringLiteral_5546/*"DragReturnMoveEnd"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15[3].fields, v23, v24, v25, v26, v27, v28, v29);
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
  if ( (byte_59340B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_21FFC50(&StringLiteral_5544/*"DragEnd"*/);
    byte_59340B5 = 1;
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
                                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                                  (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_21FFECC(this, method);
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
  PartyOrganizationListViewDropObject__Init_40955844((PartyOrganizationListViewDropObject_o *)v5, 8, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_40955844((PartyOrganizationListViewDropObject_o *)this, 7, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_40955844((PartyOrganizationListViewDropObject_o *)this, 8, 0);
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
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5544/*"DragEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewDropObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x10
  PartyOrganizationListViewItem_o *v5; // x20
  _BOOL4 isEquipSwap; // w9
  PartyOrganizationListViewItem_o *v7; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v9; // w22
  bool v10; // w0
  bool IsRarityRestriction; // w23
  __int64 v12; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewDropObject_o *v14; // x23
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w24
  int32_t v18; // w25
  const MethodInfo *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  PartyOrganizationListViewDropObject_o *v21; // x24
  int32_t v22; // w25
  int32_t Rarity; // w26
  const MethodInfo *v24; // x7
  int v25; // w29
  int v26; // w19
  System_Text_StringBuilder_o *v27; // x22
  System_Text_StringBuilder_o *v28; // x24
  System_Text_StringBuilder_o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x2
  struct UserServantEntity_o *v33; // x8
  PartyOrganizationListViewDropObject_o *v34; // x25
  ServantEntity_o *ServantEntity_k__BackingField; // x26
  __int64 v36; // x27
  __int64 v37; // x28
  System_String_o *v38; // x26
  int32_t v39; // w27
  const MethodInfo *v40; // x7
  __int64 v41; // x2
  struct UserServantEntity_o *v42; // x8
  ServantEntity_o *v43; // x26
  __int64 v44; // x27
  __int64 v45; // x28
  System_String_o *v46; // x26
  int32_t v47; // w27
  const MethodInfo *v48; // x7
  int32_t v49; // w25
  int32_t v50; // w26
  int32_t v51; // w25
  int32_t v52; // w25
  int32_t v53; // w26
  __int64 v54; // x1
  __int64 v55; // x2
  bool v56; // zf
  _BOOL4 v57; // w29
  int32_t windowHeight; // w19
  float v59; // s8
  System_String_o *v60; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v62; // x21
  System_String_o *v63; // x22
  System_String_o *v64; // x23
  CommonConfirmDialog_ClickDelegate_o *v65; // x24
  PartyOrganizationListViewDropObject_o *v66; // [xsp+48h] [xbp-98h]
  PartyOrganizationUIDragDropListViewDrop_o *v67; // [xsp+50h] [xbp-90h]
  int32_t maxLength[2]; // [xsp+58h] [xbp-88h] BYREF
  int32_t actMaxRarity[2]; // [xsp+60h] [xbp-80h] BYREF
  System_String_o *v70; // [xsp+68h] [xbp-78h] BYREF
  System_String_o *skillName; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_59340B3 & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_10498/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_21FFC50(&StringLiteral_3826/*"COMMON_CONFIRM_NO"*/);
    sub_21FFC50(&StringLiteral_3831/*"COMMON_CONFIRM_YES"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59340B3 = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject;
  skillName = 0;
  *(_QWORD *)actMaxRarity = 0;
  v70 = 0;
  *(_QWORD *)maxLength = 0;
  if ( !mListViewObject )
    goto LABEL_82;
  naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_82;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_82;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               mListViewObject,
                                                               0);
  if ( !this->fields.dropObject )
    goto LABEL_82;
  v5 = (PartyOrganizationListViewItem_o *)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               this->fields.dropObject,
                                                               0);
  isEquipSwap = this->fields.isEquipSwap;
  v7 = (PartyOrganizationListViewItem_o *)mListViewObject;
  v67 = this;
  *(_QWORD *)actMaxRarity = 0;
  v70 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( isEquipSwap )
  {
    if ( !v5 )
      goto LABEL_82;
    questRestrictionInfo = v5->fields.questRestrictionInfo;
    v9 = questRestrictionInfo ? questRestrictionInfo->fields.eventId : -1;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    userServantEntity = v5->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_82;
    v14 = mListViewObject;
    v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v12);
    *(_QWORD *)&v72.fields.currentCryptoKey = v15;
    *(_QWORD *)&v72.fields.fakeValue = v16;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                 v72,
                                                                 0);
    if ( !v5->fields.userServantEntity )
      goto LABEL_82;
    v17 = (int)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v5->fields.userServantEntity,
                                                                 0);
    if ( !v7 )
      goto LABEL_82;
    v18 = (int)mListViewObject;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v7, 0);
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                 EquipSvtId,
                                                                 0);
    if ( !v14 )
      goto LABEL_82;
    IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                            (PartyOrganizationUtility_o *)mListViewObject,
                            &skillName,
                            &actMaxRarity[1],
                            v17,
                            v18,
                            (int32_t)mListViewObject,
                            v9,
                            v19);
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v7->fields.userServantEntity;
    if ( !v20 )
      goto LABEL_82;
    v21 = mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                 v20[5],
                                                                 0);
    if ( !v7->fields.userServantEntity )
      goto LABEL_82;
    v22 = (int)mListViewObject;
    Rarity = UserServantEntity__getRarity(v7->fields.userServantEntity, 0);
    v74 = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0);
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                 v74,
                                                                 0);
    if ( !v21 )
      goto LABEL_82;
    v10 = PartyOrganizationUtility__IsRarityRestriction(
            (PartyOrganizationUtility_o *)mListViewObject,
            &v70,
            actMaxRarity,
            v22,
            Rarity,
            (int32_t)mListViewObject,
            v9,
            v24);
  }
  else
  {
    v10 = 0;
    IsRarityRestriction = 0;
  }
  v25 = IsRarityRestriction;
  v26 = v10;
  if ( !(v25 | v26) )
  {
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, method);
    return;
  }
  v27 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v27, 0);
  v28 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v28, 0);
  v29 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v29, 0);
  *(_QWORD *)maxLength = 0;
  if ( v25 )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v5 )
      goto LABEL_82;
    v33 = v5->fields.userServantEntity;
    if ( !v33 )
      goto LABEL_82;
    v34 = mListViewObject;
    ServantEntity_k__BackingField = v5->fields._ServantEntity_k__BackingField;
    v36 = *(_QWORD *)&v33->fields.limitCount.fields.currentCryptoKey;
    v37 = *(_QWORD *)&v33->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v32);
    *(_QWORD *)&v75.fields.currentCryptoKey = v36;
    *(_QWORD *)&v75.fields.fakeValue = v37;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                 v75,
                                                                 0);
    if ( !ServantEntity_k__BackingField )
      goto LABEL_82;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 ServantEntity_k__BackingField,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0,
                                                                 0,
                                                                 0);
    if ( !v5->fields.userServantEntity )
      goto LABEL_82;
    v38 = (System_String_o *)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v5->fields.userServantEntity,
                                                                 0);
    if ( !v7 )
      goto LABEL_82;
    v39 = (int)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v7, 0);
    if ( !v34 )
      goto LABEL_82;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v38,
                                                                 v39,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v40);
    if ( !v28 )
      goto LABEL_82;
    System_Text_StringBuilder__Append_75521760(v28, (System_String_o *)mListViewObject, 0);
  }
  if ( v26 )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v7 )
      goto LABEL_82;
    v42 = v7->fields.userServantEntity;
    v66 = mListViewObject;
    if ( !v42 )
      goto LABEL_82;
    v43 = v7->fields._ServantEntity_k__BackingField;
    v44 = *(_QWORD *)&v42->fields.limitCount.fields.currentCryptoKey;
    v45 = *(_QWORD *)&v42->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v41);
    *(_QWORD *)&v76.fields.currentCryptoKey = v44;
    *(_QWORD *)&v76.fields.fakeValue = v45;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                 v76,
                                                                 0);
    if ( !v43 )
      goto LABEL_82;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 v43,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0,
                                                                 0,
                                                                 0);
    if ( !v7->fields.userServantEntity )
      goto LABEL_82;
    v46 = (System_String_o *)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v7->fields.userServantEntity,
                                                                 0);
    if ( !v5 )
      goto LABEL_82;
    v47 = (int)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v5, 0);
    if ( !v66 )
      goto LABEL_82;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 maxLength,
                                                                 v46,
                                                                 v47,
                                                                 (System_String_o *)mListViewObject,
                                                                 v70,
                                                                 actMaxRarity[0],
                                                                 v48);
    if ( !v29 )
      goto LABEL_82;
    System_Text_StringBuilder__Append_75521760(v29, (System_String_o *)mListViewObject, 0);
    v49 = maxLength[0];
  }
  else
  {
    v49 = 0;
  }
  v50 = maxLength[1];
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v30, v31);
  v51 = System_Math__Max_76939956(v50, v49, 0);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_82;
  if ( v51 > 43 )
  {
    v53 = 0;
    v52 = 16;
    if ( !v5 )
      goto LABEL_82;
  }
  else if ( v51 > 41 )
  {
    v52 = 17;
    v53 = 17;
    if ( !v5 )
      goto LABEL_82;
  }
  else if ( v51 > 37 )
  {
    v52 = 18;
    v53 = 18;
    if ( !v5 )
      goto LABEL_82;
  }
  else if ( v51 > 34 )
  {
    v52 = 20;
    v53 = 20;
    if ( !v5 )
      goto LABEL_82;
  }
  else
  {
    if ( v51 >= 32 )
      v52 = 22;
    else
      v52 = 24;
    v53 = v52;
    if ( !v5 )
      goto LABEL_82;
  }
  if ( !v7 )
    goto LABEL_82;
  if ( v5->fields.index >= v7->fields.index )
  {
    method = (const MethodInfo *)v29;
    v29 = v28;
    if ( !v27 )
      goto LABEL_82;
  }
  else
  {
    method = (const MethodInfo *)v28;
    if ( !v27 )
      goto LABEL_82;
  }
  System_Text_StringBuilder__Append_75522392(v27, (System_Text_StringBuilder_o *)method, 0);
  System_Text_StringBuilder__Append_75522392(v27, v29, 0);
  v56 = (v25 & v26) == 0;
  v57 = v56;
  windowHeight = v56 ? 480 : 520;
  v59 = v56 ? 30.0 : 40.0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54, v55);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_10498/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
  System_Text_StringBuilder__Append_75521760(v27, v60, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v62 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v27->klass->vtable._3_ToString.methodPtr)(
                             v27,
                             v27->klass->vtable._3_ToString.method);
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_YES"*/, 0);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_NO"*/, 0);
  v65 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v65,
    (Il2CppObject *)v67,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0);
  if ( !Instance )
LABEL_82:
    sub_21FFECC(mListViewObject, method);
  CommonUI__OpenConfirmDialog_37292168(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v62,
    v63,
    v64,
    v65,
    v52,
    v53,
    v59,
    728,
    2,
    windowHeight,
    flt_E91328[v57],
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyOrganizationListViewDropObject_o **p_dropObject; // x21
  __int64 v11; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Component_o *v14; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Component_o *v16; // x8
  UnityEngine_Transform_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewDrop_c *v22; // x0
  float z; // s10
  UnityEngine_GameObject_o *v24; // x21
  PartyOrganizationListViewDropObject_o *dropObject; // x21
  System_Action_o *v26; // x22
  float v27; // s4
  float v28; // s5
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_59340B2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__);
    sub_21FFC50(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    byte_59340B2 = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = &this->fields.dropObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dropObject,
    (int32_t)ddo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment,
        mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v14 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_26;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_26;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  v16 = (UnityEngine_Component_o *)*p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_26;
  v17 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v16, 0);
  if ( !dragObject )
    goto LABEL_26;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v17 )
    goto LABEL_26;
  v30 = UnityEngine_Transform__InverseTransformPoint(v17, position, 0);
  x = v30.fields.x;
  y = v30.fields.y;
  v22 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v30.fields.z;
  v24 = this->fields.dragObject;
  if ( !*(&PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo, v18, v19);
    v22 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v24, v22->static_fields->ACTION_TIME, v32, 0);
  if ( !dragObject )
    goto LABEL_26;
  LODWORD(dragObject[1].monitor) = 3;
  if ( !v14 )
    goto LABEL_26;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0);
  if ( !dragObject )
    goto LABEL_26;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  dropObject = this->fields.dropObject;
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0);
  if ( !dragObject )
    goto LABEL_26;
  v31 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !dropObject )
    goto LABEL_26;
  v27 = v31.fields.y;
  v28 = v31.fields.z;
  v33.fields.x = v31.fields.x;
  v33.fields.y = v27;
  v33.fields.z = v28;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v26, 0.0, v33, this->fields.isEquipSwap, 0);
  dragObject = (UnityEngine_GameObject_o *)this->fields.dropObject;
  if ( this->fields.isEquipSwap )
  {
    if ( dragObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0);
      return;
    }
LABEL_26:
    sub_21FFECC(dragObject, v11);
  }
  if ( !dragObject )
    goto LABEL_26;
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
  __int64 v9; // x11

  v2 = this;
  if ( (byte_59340B4 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_21FFC50(&StringLiteral_5547/*"DragSwapEnd"*/);
    byte_59340B4 = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_30;
  naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_30;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_30;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0);
  if ( !v2->fields.dropObject )
    goto LABEL_30;
  v5 = (PartyOrganizationListViewItem_o *)this;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        v2->fields.dropObject,
                                                        0);
  manager = mListViewObject->fields.manager;
  if ( !v2->fields.isEquipSwap )
  {
    if ( manager
      && (v9 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)v9) )
    {
      if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v8 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
      else
        v8 = 0;
      if ( !this )
        goto LABEL_30;
    }
    else
    {
      v8 = 0;
      if ( !this )
        goto LABEL_30;
    }
    PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, v5, 0, 0);
    if ( !v8 )
      goto LABEL_30;
    goto LABEL_27;
  }
  if ( manager )
  {
    v7 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment >= (unsigned int)v7 )
    {
      if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v8 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
      else
        v8 = 0;
      if ( this )
        goto LABEL_20;
LABEL_30:
      sub_21FFECC(this, method);
    }
  }
  v8 = 0;
  if ( !this )
    goto LABEL_30;
LABEL_20:
  PartyOrganizationListViewItem__SwapEquip((PartyOrganizationListViewItem_o *)this, v5, 0);
  if ( !v8 )
    goto LABEL_30;
LABEL_27:
  PartyOrganizationListViewManager__CallbackFuncModify(v8, 0);
  PartyOrganizationListViewDropObject__GetItem(mListViewObject, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_30;
  PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)this, 0);
  PartyOrganizationListViewDropObject__Init_40955844(mListViewObject, 9, 0);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_30;
  PartyOrganizationListViewDropObject__Init_40955844((PartyOrganizationListViewDropObject_o *)this, 9, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5547/*"DragSwapEnd"*/, 0.1, 0);
}


void PartyOrganizationUIDragDropListViewDrop__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ListViewObject_o *IsDropDropSurface; // x0
  const MethodInfo *v11; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 naturalAligment; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v15; // x11
  PartyOrganizationListViewManager_o *v16; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  PartyOrganizationListViewItem_o *Item; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *Component_object; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v24; // x25
  __int64 v25; // x2
  UnityEngine_Object_o *monitor; // x23
  PartyOrganizationListViewItem_o *v27; // x0
  const MethodInfo *v28; // x2
  PartyOrganizationListViewItem_o *v29; // x24
  const MethodInfo *v30; // x1

  if ( (byte_59340AB & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    sub_21FFC50(&ListViewDropInfo_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewManager_TypeInfo);
    byte_59340AB = 1;
  }
  this->fields.surface = 0;
  this->fields.isDrag = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.surface,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    && (v15 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)v15) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v15 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v16 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v16 = 0;
  }
  else
  {
    v16 = 0;
  }
  Item = PartyOrganizationListViewDropObject__GetItem(
           (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject,
           0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)surface,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 || !Item )
    goto LABEL_32;
  if ( !surface )
    goto LABEL_40;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
    goto LABEL_32;
  IsDropDropSurface = this->fields.mListViewObject;
  if ( !IsDropDropSurface )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsDropDropSurface, 0);
  v24 = (ListViewDropInfo_o *)sub_21FFEBC(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v24, gameObject, surface, 0);
  if ( !v16 )
    goto LABEL_40;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(v16, v24, 0);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
    goto LABEL_32;
  if ( !Component_object )
    goto LABEL_40;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v25);
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
  {
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v11);
    return;
  }
  if ( !monitor )
LABEL_40:
    sub_21FFECC(IsDropDropSurface, v11);
  v27 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0);
  if ( !v27 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0);
    PartyOrganizationListViewDropObject__Init_40955844((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
      mListViewObject,
      0,
      mListViewObject->klass->vtable._5_SetItem.method);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, const char *))monitor->klass[1]._1.name)(
      monitor,
      Item,
      monitor->klass[1]._1.namespaze);
    PartyOrganizationListViewDropObject__Init_40955844((PartyOrganizationListViewDropObject_o *)monitor, 4, 0);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v30);
    return;
  }
  v29 = v27;
  if ( v27 == Item )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v11);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_31:
    if ( !v29->fields.isFollower && v29->fields.userServantEntity )
      goto LABEL_39;
    goto LABEL_32;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v27, 0) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_39:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)monitor, v28);
}


void PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  _DWORD *Component_object; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  PartyOrganizationListViewDropObject_o *mListViewObject; // x19
  __int64 naturalAligment; // x10
  _BOOL4 isEquipPress; // w10
  struct ListViewManager_o *manager; // x8
  PartyOrganizationListViewManager_c *v23; // x9
  __int64 v24; // x11
  PartyOrganizationListViewManager_o *v25; // x20
  __int64 v26; // x11

  if ( (byte_59340AA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewManager_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59340AA = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  this->fields.dropObject = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dropObject, 0, v3, v4, v5, v6, v7, v8);
  Component_object = UICamera_TypeInfo;
  this->fields.isDrag = 1;
  if ( !Component_object[57] )
  {
    j_il2cpp_runtime_class_init_0(Component_object, v9, v10);
    Component_object = UICamera_TypeInfo;
  }
  currentTouch = *(struct UICamera_MouseOrTouch_o **)(*((_QWORD *)Component_object + 23) + 160LL);
  if ( currentTouch )
  {
    if ( !Component_object[57] )
    {
      j_il2cpp_runtime_class_init_0(Component_object, v9, v10);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_31;
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.surface,
      (int32_t)dragged,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_31;
  naturalAligment = PartyOrganizationListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_31;
  }
  isEquipPress = mListViewObject->fields.isEquipPress;
  manager = mListViewObject->fields.manager;
  v23 = PartyOrganizationListViewManager_TypeInfo;
  this->fields.isEquipSwap = isEquipPress;
  if ( isEquipPress )
  {
    if ( manager && (v24 = v23->_2.naturalAligment, manager->klass->_2.naturalAligment >= (unsigned int)v24) )
    {
      if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v24 - 1] == v23 )
        v25 = (PartyOrganizationListViewManager_o *)manager;
      else
        v25 = 0;
    }
    else
    {
      v25 = 0;
    }
    PartyOrganizationListViewDropObject__SetEquipDisp(mListViewObject, 0, 0);
    if ( !v25 )
      goto LABEL_31;
  }
  else
  {
    if ( manager && (v26 = v23->_2.naturalAligment, manager->klass->_2.naturalAligment >= (unsigned int)v26) )
    {
      if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v26 - 1] == v23 )
        v25 = (PartyOrganizationListViewManager_o *)manager;
      else
        v25 = 0;
    }
    else
    {
      v25 = 0;
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)mListViewObject,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !Component_object
      || ((*(void (__fastcall **)(_DWORD *, _QWORD, double))(*(_QWORD *)Component_object + 440LL))(
            Component_object,
            *(_QWORD *)(*(_QWORD *)Component_object + 448LL),
            0.0),
          PartyOrganizationListViewDropObject__SetActiveGrandEffect(mListViewObject, 0, 0),
          !v25) )
    {
LABEL_31:
      sub_21FFECC(Component_object, v9);
    }
  }
  PartyOrganizationListViewManager__SetDispSwapGuide(v25, 0, 0);
  Component_object = mListViewObject->fields.manager;
  if ( !Component_object )
    goto LABEL_31;
  (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)Component_object + 440LL))(
    Component_object,
    *(_QWORD *)(*(_QWORD *)Component_object + 448LL));
}


void PartyOrganizationUIDragDropListViewDrop__SetBaseTransform(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *listViewObject; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct ListViewObject_o *Component_object; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_59340A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59340A9 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0, 0) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mListViewObject,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v14 = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v14,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mDragScrollView,
          (int32_t)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0) )
  {
    sub_21FFECC(mListViewObject, v12);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0);
  this->fields.mTrans = transform;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTrans,
    (int32_t)transform,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v28;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mCollider, (int32_t)v28, v29, v30, v31, v32, v33, v34);
}


void PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_59340A8 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59340A8 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method, v2);
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
  __int64 v6; // x1

  if ( (byte_59340B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_5547/*"DragSwapEnd"*/);
    byte_59340B7 = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5547/*"DragSwapEnd"*/,
      0.1,
      0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}