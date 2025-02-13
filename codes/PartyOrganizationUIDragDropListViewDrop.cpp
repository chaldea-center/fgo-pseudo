void __fastcall PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  if ( (byte_4BD837F & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    byte_4BD837F = 1;
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
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  __int64 v5; // x9
  __int64 v6; // x12
  UnityEngine_Object_o *v7; // x21

  v2 = this;
  if ( (byte_4BD837A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C21E38(&StringLiteral_5509/*"DragEnd"*/);
    byte_4BD837A = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_19;
  methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_19;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_19;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0LL);
  if ( !this )
    goto LABEL_19;
  v5 = *(_QWORD *)&this->fields.mTarget.fields.x;
  if ( v5
    && (v6 = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 304LL) >= (unsigned int)v6) )
  {
    if ( *(PartyOrganizationListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v5 + 200LL) + 8 * v6 - 8) == PartyOrganizationListViewObject_TypeInfo )
      v7 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.x;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v7 )
    {
      PartyOrganizationListViewObject__Init_33189104((PartyOrganizationListViewObject_o *)v7, 8, 0LL);
      goto LABEL_18;
    }
LABEL_19:
    sub_1C22094(this, method);
  }
LABEL_18:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_33008300(mListViewObject, 0, 0LL);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
    mListViewObject,
    0LL,
    mListViewObject->klass->vtable._6_SetItem.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5509/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragDumpStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_c *v3; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v6; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Color_o v16; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4BD8379 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    sub_1C21E38(&StringLiteral_5508/*"DragDumpEnd"*/);
    byte_4BD8379 = 1;
  }
  v3 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v3 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v16.fields.r = 0.0;
  v16.fields.g = 0.0;
  v16.fields.b = 0.0;
  v16.fields.a = 0.0;
  transform = (UnityEngine_GameObject_o *)TweenColor__Begin(dragObject, v3->static_fields->ACTION_TIME, v16, 0LL);
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
  if ( !byte_4BD83E8 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD83E8 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v15.fields.x = x + (float)(static_fields->downVector.fields.x * 50.0);
  v15.fields.y = y + (float)(static_fields->downVector.fields.y * 50.0);
  v15.fields.z = z + (float)(static_fields->downVector.fields.z * 50.0);
  transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                            this->fields.dragObject,
                                            PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
                                            v15,
                                            0LL);
  if ( !transform )
LABEL_12:
    sub_1C22094(transform, v6);
  v11 = transform;
  LODWORD(transform[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[3].monitor = gameObject;
  sub_1C21DDC(&v11[3].monitor, gameObject);
  v13 = StringLiteral_5508/*"DragDumpEnd"*/;
  *(_QWORD *)&v11[3].fields.m_CachedPtr = StringLiteral_5508/*"DragDumpEnd"*/;
  sub_1C21DDC(&v11[3].fields, v13);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  __int64 v6; // x10

  v2 = this;
  if ( (byte_4BD8375 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C21E38(&PartyOrganizationListViewManager_TypeInfo);
    byte_4BD8375 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0LL
    || (v6 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v6)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1C22094(this, method);
  }
  ((void (__fastcall *)(PartyOrganizationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._9_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._10_SetSortKind.methodPtr);
  if ( v2->fields.isEquipSwap )
    PartyOrganizationListViewManager__EndSwapEquip(manager, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  PartyOrganizationUIDragDropListViewDrop_o **mListViewObject; // x20
  __int64 methodPtr_low; // x10
  __int64 v5; // x10

  v2 = this;
  if ( (byte_4BD8378 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C21E38(&StringLiteral_5509/*"DragEnd"*/);
    byte_4BD8378 = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewDrop_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        (*mListViewObject)[1].fields.isEquipSwap < (unsigned int)methodPtr_low)
    || *(PartyOrganizationListViewDropObject_c **)(*(_QWORD *)&(*mListViewObject)[1].fields.restriction
                                                 + 8 * methodPtr_low
                                                 - 8) != PartyOrganizationListViewDropObject_TypeInfo
    || (this = mListViewObject[5]) == 0LL
    || (v5 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v5)
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v5 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1C22094(this, method);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0LL);
  v2->fields.isEquipSwap = 0;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5509/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v5; // x20

  v2 = this;
  if ( (byte_4BD8377 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C21E38(&StringLiteral_5510/*"DragReturnEnd"*/);
    byte_4BD8377 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v5 = (UnityEngine_Component_o *)v2->fields.mListViewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v2->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v5 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                              v5,
                                                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C22094(this, method);
  }
  if ( !v5 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v5, 1, 0LL);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)v5, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5510/*"DragReturnEnd"*/, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  int v8; // s0
  PartyOrganizationUIDragDropListViewDrop_c *v11; // x0
  UnityEngine_GameObject_o *v12; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BD8376 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    sub_1C21E38(&StringLiteral_5511/*"DragReturnMoveEnd"*/);
    byte_4BD8376 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v5 )
    goto LABEL_18;
  v7 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v5, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v7 )
    goto LABEL_18;
  v19 = UnityEngine_Transform__InverseTransformPoint(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  v12 = this->fields.dragObject;
  x = v19.fields.x;
  y = v19.fields.y;
  z = v19.fields.z;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v11 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v11->static_fields->ACTION_TIME, v20, 0LL);
  if ( !dragObject )
LABEL_18:
    sub_1C22094(dragObject, method);
  v16 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[3].monitor = gameObject;
  sub_1C21DDC(&v16[3].monitor, gameObject);
  v18 = StringLiteral_5511/*"DragReturnMoveEnd"*/;
  *(_QWORD *)&v16[3].fields.m_CachedPtr = StringLiteral_5511/*"DragReturnMoveEnd"*/;
  sub_1C21DDC(&v16[3].fields, v18);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  struct ListViewObject_o *v5; // x20
  PartyOrganizationUIDragDropListViewDrop_o **p_dropObject; // x21
  __int64 v7; // x10

  v2 = this;
  if ( (byte_4BD837E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C21E38(&StringLiteral_5509/*"DragEnd"*/);
    byte_4BD837E = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v5 = v2->fields.mListViewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v2->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v5 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)v5,
                                                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, void *, float))this->klass->vtable._8_OnDragDropRelease.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
          if ( this )
          {
            this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C22094(this, method);
  }
  if ( !v5 )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v5, 1, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)this, 1, 0LL);
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)v5, 8, 0LL);
  p_dropObject = (PartyOrganizationUIDragDropListViewDrop_o **)&v2->fields.dropObject;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)this, 7, 0LL);
  this = *p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)this, 8, 0LL);
  *p_dropObject = 0LL;
  sub_1C21DDC(&v2->fields.dropObject, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v5->fields.manager;
  if ( !this )
    goto LABEL_25;
  v7 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_25;
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5509/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewDropObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *v5; // x20
  PartyOrganizationListViewItem_o *v6; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v8; // w23
  _BOOL4 v9; // w24
  _BOOL4 IsRarityRestriction; // w22
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewDropObject_o *v12; // x22
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w24
  int32_t v16; // w25
  const MethodInfo *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  PartyOrganizationListViewDropObject_o *v19; // x24
  int32_t v20; // w25
  int32_t Rarity; // w26
  const MethodInfo *v22; // x7
  System_Text_StringBuilder_o *v23; // x23
  System_Text_StringBuilder_o *v24; // x25
  System_Text_StringBuilder_o *v25; // x26
  struct UserServantEntity_o *v26; // x8
  ServantEntity_o *servantEntity; // x28
  __int64 v28; // x27
  __int64 v29; // x29
  System_String_o *v30; // x28
  int32_t v31; // w29
  const MethodInfo *v32; // x7
  struct UserServantEntity_o *v33; // x8
  ServantEntity_o *v34; // x28
  __int64 v35; // x27
  __int64 v36; // x29
  System_String_o *v37; // x28
  int32_t v38; // w29
  const MethodInfo *v39; // x7
  int32_t v40; // w27
  int32_t v41; // w28
  int32_t v42; // w27
  int32_t v43; // w27
  int32_t v44; // w28
  int32_t index; // w8
  int32_t v46; // w9
  System_Text_StringBuilder_o *v47; // x1
  System_Text_StringBuilder_o *v48; // x20
  float v49; // s8
  int32_t windowHeight; // w25
  float v51; // s9
  System_String_o *v52; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v54; // x21
  System_String_o *v55; // x22
  System_String_o *v56; // x23
  CommonConfirmDialog_ClickDelegate_o *v57; // x24
  PartyOrganizationListViewDropObject_o *v58; // [xsp+40h] [xbp-A0h]
  PartyOrganizationListViewDropObject_o *v59; // [xsp+40h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-88h] BYREF
  System_String_o *v62; // [xsp+60h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4BD837C & 1) == 0 )
  {
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_10323/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C21E38(&StringLiteral_3814/*"COMMON_CONFIRM_NO"*/);
    sub_1C21E38(&StringLiteral_3819/*"COMMON_CONFIRM_YES"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD837C = 1;
  }
  v62 = 0LL;
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
  v5 = (PartyOrganizationListViewItem_o *)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               this->fields.dropObject,
                                                               0LL);
  v6 = (PartyOrganizationListViewItem_o *)mListViewObject;
  *(_QWORD *)actMaxRarity = 0LL;
  v62 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isEquipSwap )
  {
    v9 = 0;
    IsRarityRestriction = 0;
LABEL_23:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, method);
      return;
    }
    goto LABEL_25;
  }
  if ( !v5 )
    goto LABEL_88;
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  v8 = questRestrictionInfo ? questRestrictionInfo->fields.eventId : -1;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v5->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_88;
  v12 = mListViewObject;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v14;
  *(_QWORD *)&v64.fields.fakeValue = v13;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                               v64,
                                                               0LL);
  if ( !v5->fields.userServantEntity )
    goto LABEL_88;
  v15 = (int)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                               v5->fields.userServantEntity,
                                                               0LL);
  if ( !v6 )
    goto LABEL_88;
  v16 = (int)mListViewObject;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v6, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                               EquipSvtId,
                                                               0LL);
  if ( !v12 )
    goto LABEL_88;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          (PartyOrganizationUtility_o *)mListViewObject,
                          &skillName,
                          &actMaxRarity[1],
                          v15,
                          v16,
                          (int32_t)mListViewObject,
                          v8,
                          v17);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v6->fields.userServantEntity;
  if ( !v18 )
    goto LABEL_88;
  v19 = mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                               v18[5],
                                                               0LL);
  if ( !v6->fields.userServantEntity )
    goto LABEL_88;
  v20 = (int)mListViewObject;
  Rarity = UserServantEntity__getRarity(v6->fields.userServantEntity, 0LL);
  v66 = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                               v66,
                                                               0LL);
  if ( !v19 )
    goto LABEL_88;
  v9 = PartyOrganizationUtility__IsRarityRestriction(
         (PartyOrganizationUtility_o *)mListViewObject,
         &v62,
         actMaxRarity,
         v20,
         Rarity,
         (int32_t)mListViewObject,
         v8,
         v22);
  if ( !v9 )
    goto LABEL_23;
LABEL_25:
  v23 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v23, 0LL);
  v24 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v24, 0LL);
  v25 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v25, 0LL);
  *(_QWORD *)maxLength = 0LL;
  if ( IsRarityRestriction )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v5 )
      goto LABEL_88;
    v26 = v5->fields.userServantEntity;
    v58 = mListViewObject;
    if ( !v26 )
      goto LABEL_88;
    servantEntity = v5->fields.servantEntity;
    v28 = *(_QWORD *)&v26->fields.limitCount.fields.currentCryptoKey;
    v29 = *(_QWORD *)&v26->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v67.fields.currentCryptoKey = v28;
    *(_QWORD *)&v67.fields.fakeValue = v29;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                 v67,
                                                                 0LL);
    if ( !servantEntity )
      goto LABEL_88;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 servantEntity,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0,
                                                                 0LL);
    if ( !v5->fields.userServantEntity )
      goto LABEL_88;
    v30 = (System_String_o *)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v5->fields.userServantEntity,
                                                                 0LL);
    if ( !v6 )
      goto LABEL_88;
    v31 = (int)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v6, 0LL);
    if ( !v58 )
      goto LABEL_88;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v30,
                                                                 v31,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v32);
    if ( !v24 )
      goto LABEL_88;
    System_Text_StringBuilder__Append_62276628(v24, (System_String_o *)mListViewObject, 0LL);
  }
  if ( v9 )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v6 )
    {
      v33 = v6->fields.userServantEntity;
      v59 = mListViewObject;
      if ( v33 )
      {
        v34 = v6->fields.servantEntity;
        v35 = *(_QWORD *)&v33->fields.limitCount.fields.currentCryptoKey;
        v36 = *(_QWORD *)&v33->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = v35;
        *(_QWORD *)&v68.fields.fakeValue = v36;
        mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                     v68,
                                                                     0LL);
        if ( v34 )
        {
          mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                       v34,
                                                                       (int32_t)mListViewObject,
                                                                       -1,
                                                                       0,
                                                                       0LL);
          if ( v6->fields.userServantEntity )
          {
            v37 = (System_String_o *)mListViewObject;
            mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                         v6->fields.userServantEntity,
                                                                         0LL);
            if ( v5 )
            {
              v38 = (int)mListViewObject;
              mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(
                                                                           v5,
                                                                           0LL);
              if ( v59 )
              {
                mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                             (PartyOrganizationUtility_o *)mListViewObject,
                                                                             maxLength,
                                                                             v37,
                                                                             v38,
                                                                             (System_String_o *)mListViewObject,
                                                                             v62,
                                                                             actMaxRarity[0],
                                                                             v39);
                if ( v25 )
                {
                  System_Text_StringBuilder__Append_62276628(v25, (System_String_o *)mListViewObject, 0LL);
                  v40 = maxLength[0];
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    sub_1C22094(mListViewObject, method);
  }
  v40 = 0;
LABEL_48:
  v41 = maxLength[1];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v42 = System_Math__Max_63934620(v41, v40, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_88;
  if ( v42 > 43 )
  {
    v44 = 0;
    v43 = 16;
    if ( !v5 )
      goto LABEL_88;
  }
  else if ( v42 > 41 )
  {
    v43 = 17;
    v44 = 17;
    if ( !v5 )
      goto LABEL_88;
  }
  else if ( v42 > 37 )
  {
    v43 = 18;
    v44 = 18;
    if ( !v5 )
      goto LABEL_88;
  }
  else if ( v42 > 34 )
  {
    v43 = 20;
    v44 = 20;
    if ( !v5 )
      goto LABEL_88;
  }
  else
  {
    if ( v42 >= 32 )
      v43 = 22;
    else
      v43 = 24;
    v44 = v43;
    if ( !v5 )
      goto LABEL_88;
  }
  if ( !v6 || !v23 )
    goto LABEL_88;
  index = v5->fields.index;
  v46 = v6->fields.index;
  v47 = index >= v46 ? v25 : v24;
  v48 = index >= v46 ? v24 : v25;
  System_Text_StringBuilder__Append_62277256(v23, v47, 0LL);
  System_Text_StringBuilder__Append_62277256(v23, v48, 0LL);
  v49 = v9 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v9 && IsRarityRestriction ? 520 : 480;
  v51 = v9 && IsRarityRestriction ? 40.0 : 30.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
  System_Text_StringBuilder__Append_62276628(v23, v52, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v54 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                             v23,
                             v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"COMMON_CONFIRM_YES"*/, 0LL);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3814/*"COMMON_CONFIRM_NO"*/, 0LL);
  v57 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v57,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0LL);
  if ( !Instance )
    goto LABEL_88;
  CommonUI__OpenConfirmDialog_31128528(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v54,
    v55,
    v56,
    v57,
    v43,
    v44,
    v51,
    728,
    2,
    windowHeight,
    v49,
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
  UnityEngine_Component_o **p_dropObject; // x20
  __int64 v6; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v9; // x21
  UnityEngine_Component_o *dragObject; // x0
  UnityEngine_Transform_o *v11; // x22
  int v12; // s0
  PartyOrganizationUIDragDropListViewDrop_c *v15; // x0
  UnityEngine_GameObject_o *v16; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  PartyOrganizationListViewDropObject_o *dropObject; // x22
  System_Action_o *v21; // x23
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s4
  float v26; // s5
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BD837B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__);
    sub_1C21E38(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    byte_4BD837B = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = (UnityEngine_Component_o **)&this->fields.dropObject;
  sub_1C21DDC(&this->fields.dropObject, ddo);
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v9 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
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
  v11 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_dropObject, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v11 )
    goto LABEL_25;
  v27 = UnityEngine_Transform__InverseTransformPoint(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
  v15 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  v16 = this->fields.dragObject;
  x = v27.fields.x;
  y = v27.fields.y;
  z = v27.fields.z;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v15 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  dragObject = (UnityEngine_Component_o *)TweenPosition__Begin(v16, v15->static_fields->ACTION_TIME, v28, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  LODWORD(dragObject[1].monitor) = 3;
  if ( !v9 )
    goto LABEL_25;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v9, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  dropObject = this->fields.dropObject;
  v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0LL);
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v9, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !dropObject )
    goto LABEL_25;
  v25 = v23;
  v26 = v24;
  v29.fields.x = v22;
  v29.fields.y = v25;
  v29.fields.z = v26;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v21, 0.0, v29, this->fields.isEquipSwap, 0LL);
  if ( this->fields.isEquipSwap )
  {
    dragObject = *p_dropObject;
    if ( *p_dropObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0LL);
      return;
    }
LABEL_25:
    sub_1C22094(dragObject, v6);
  }
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *v5; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v7; // x11
  PartyOrganizationListViewManager_o *v8; // x22

  v2 = this;
  if ( (byte_4BD837D & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1C21E38(&StringLiteral_5512/*"DragSwapEnd"*/);
    byte_4BD837D = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_22;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_22;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0LL);
  if ( !v2->fields.dropObject )
    goto LABEL_22;
  v5 = (PartyOrganizationListViewItem_o *)this;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        v2->fields.dropObject,
                                                        0LL);
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v7 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v7) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v8 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v8 = 0LL;
    if ( !this )
      goto LABEL_22;
  }
  else
  {
    v8 = 0LL;
    if ( !this )
      goto LABEL_22;
  }
  if ( v2->fields.isEquipSwap )
  {
    PartyOrganizationListViewItem__SwapEquip((PartyOrganizationListViewItem_o *)this, v5, 0LL);
    if ( !v8 )
      goto LABEL_22;
  }
  else
  {
    PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, v5, 0, 0LL);
    if ( !v8 )
      goto LABEL_22;
  }
  PartyOrganizationListViewManager__ModifyItem(v8, 0LL);
  PartyOrganizationListViewDropObject__GetItem(mListViewObject, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this
    || (PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)this, 0LL),
        PartyOrganizationListViewDropObject__Init_33008300(mListViewObject, 9, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0LL) )
  {
LABEL_22:
    sub_1C22094(this, method);
  }
  PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)this, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5512/*"DragSwapEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *IsDropDropSurface; // x0
  const MethodInfo *v6; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 methodPtr_low; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  PartyOrganizationListViewManager_o *v11; // x23
  PartyOrganizationListViewItem_o *Item; // x22
  UnityEngine_Object_o *Component_object; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v15; // x25
  UnityEngine_Object_o *monitor; // x23
  PartyOrganizationListViewItem_o *v17; // x0
  const MethodInfo *v18; // x2
  PartyOrganizationListViewItem_o *v19; // x24
  const MethodInfo *v20; // x1

  if ( (byte_4BD8374 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    sub_1C21E38(&ListViewDropInfo_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewManager_TypeInfo);
    byte_4BD8374 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  IsDropDropSurface = (struct ListViewObject_o *)sub_1C21DDC(&this->fields.surface, 0LL);
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
    && (v10 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10) )
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
  Item = PartyOrganizationListViewDropObject__GetItem(
           (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject,
           0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
    goto LABEL_32;
  IsDropDropSurface = this->fields.mListViewObject;
  if ( !IsDropDropSurface )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsDropDropSurface, 0LL);
  v15 = (ListViewDropInfo_o *)sub_1C22084(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v15, gameObject, surface, 0LL);
  if ( !v11 )
    goto LABEL_40;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(v11, v15, 0LL);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
    goto LABEL_32;
  if ( !Component_object )
    goto LABEL_40;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
  {
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v6);
    return;
  }
  if ( !monitor )
LABEL_40:
    sub_1C22094(IsDropDropSurface, v6);
  v17 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0LL);
  if ( !v17 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
    PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
      mListViewObject,
      0LL,
      mListViewObject->klass->vtable._6_SetItem.methodPtr);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))monitor->klass[1]._1.namespaze)(
      monitor,
      Item,
      monitor->klass[1]._1.byval_arg.data);
    PartyOrganizationListViewDropObject__Init_33008300((PartyOrganizationListViewDropObject_o *)monitor, 4, 0LL);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v20);
    return;
  }
  v19 = v17;
  if ( v17 == Item )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v6);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_31:
    if ( !v19->fields.isFollower && v19->fields.userServantEntity )
      goto LABEL_39;
    goto LABEL_32;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v17, 0LL) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_39:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)monitor, v18);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  struct ListViewManager_o *manager; // x9
  int linkItem_low; // w8
  __int64 v11; // x12
  PartyOrganizationListViewManager_o *v12; // x19

  if ( (byte_4BD8373 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewManager_TypeInfo);
    sub_1C21E38(&UICamera_TypeInfo);
    byte_4BD8373 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
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
    p_image = (_QWORD *)sub_1C21DDC(&this->fields.surface, dragged);
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
    || (v11 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11) )
  {
    v12 = 0LL;
    if ( linkItem_low )
      goto LABEL_15;
    goto LABEL_21;
  }
  if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] == PartyOrganizationListViewManager_TypeInfo )
    v12 = (PartyOrganizationListViewManager_o *)manager;
  else
    v12 = 0LL;
  if ( !linkItem_low )
  {
LABEL_21:
    p_image = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)mListViewObject,
                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( p_image )
    {
      p_image = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, float))(*p_image + 440LL))(
                            p_image,
                            *(_QWORD *)(*p_image + 448LL),
                            0.0);
      if ( v12 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C22094(p_image, v3);
  }
LABEL_15:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  if ( !v12 )
    goto LABEL_25;
LABEL_23:
  PartyOrganizationListViewManager__SetDispSwapGuide(v12, 0, 0LL);
  p_image = &mListViewObject->fields.manager->klass;
  if ( !p_image )
    goto LABEL_25;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 440LL))(p_image, *(_QWORD *)(*p_image + 448LL));
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__SetBaseTransform(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewObject; // x20
  struct ListViewObject_o *Component_object; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v7; // x0
  struct UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v9; // x0

  if ( (byte_4BD8372 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8372 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1C21DDC(&this->fields.mListViewObject, Component_object);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v7 = UnityEngine_Component__GetComponent_object_(
               mListViewObject,
               (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v7,
        sub_1C21DDC(&this->fields.mDragScrollView, v7),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_1C22094(mListViewObject, v5);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_1C21DDC(&this->fields.mTrans, transform);
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v9;
  sub_1C21DDC(&this->fields.mCollider, v9);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4BD8371 & 1) == 0 )
  {
    sub_1C21E38(&UICamera_TypeInfo);
    byte_4BD8371 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BD8380 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_5512/*"DragSwapEnd"*/);
    byte_4BD8380 = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5512/*"DragSwapEnd"*/,
      0.1,
      0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}