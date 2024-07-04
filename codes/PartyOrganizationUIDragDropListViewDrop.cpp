void __fastcall PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48DEBDD & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v1);
    byte_48DEBDD = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  __int64 v8; // x9
  __int64 v9; // x12
  UnityEngine_Object_o *v10; // x21
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_48DEBD8 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_1B00CCC(&PartyOrganizationListViewObject_TypeInfo, v4);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1B00CCC(&StringLiteral_5338/*"DragEnd"*/, v5);
    byte_48DEBD8 = 1;
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
  v8 = *(_QWORD *)&this->fields.mTarget.fields.x;
  if ( v8
    && (v9 = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v8 + 304LL) >= (unsigned int)v9) )
  {
    if ( *(PartyOrganizationListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v8 + 200LL) + 8 * v9 - 8) == PartyOrganizationListViewObject_TypeInfo )
      v10 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.x;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v10 )
    {
      PartyOrganizationListViewObject__Init_31302812((PartyOrganizationListViewObject_o *)v10, 8, v11);
      goto LABEL_18;
    }
LABEL_19:
    sub_1B00F28(this, method);
  }
LABEL_18:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_31126448(mListViewObject, 0, 0LL);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
    mListViewObject,
    0LL,
    mListViewObject->klass->vtable._6_SetItem.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5338/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragDumpStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUIDragDropListViewDrop_c *v4; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Color_o v22; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_48DEBD7 & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_5337/*"DragDumpEnd"*/, v3);
    byte_48DEBD7 = 1;
  }
  v4 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v4 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v22.fields.r = 0.0;
  v22.fields.g = 0.0;
  v22.fields.b = 0.0;
  v22.fields.a = 0.0;
  transform = (UnityEngine_GameObject_o *)TweenColor__Begin(dragObject, v4->static_fields->ACTION_TIME, v22, 0LL);
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
  if ( !byte_48DEC07 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v8);
    byte_48DEC07 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v21.fields.x = x + (float)(static_fields->downVector.fields.x * 50.0);
  v21.fields.y = y + (float)(static_fields->downVector.fields.y * 50.0);
  v21.fields.z = z + (float)(static_fields->downVector.fields.z * 50.0);
  transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                            this->fields.dragObject,
                                            PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
                                            v21,
                                            0LL);
  if ( !transform )
LABEL_12:
    sub_1B00F28(transform, v7);
  v13 = transform;
  LODWORD(transform[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[3].monitor = gameObject;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v13[3].monitor, (int32_t)gameObject, v15, v16);
  v17 = StringLiteral_5337/*"DragDumpEnd"*/;
  *(_QWORD *)&v13[3].fields.m_CachedPtr = StringLiteral_5337/*"DragDumpEnd"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v13[3].fields, v17, v18, v19);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  __int64 v3; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  __int64 v7; // x10
  const MethodInfo *v8; // x1

  v2 = this;
  if ( (byte_48DEBD3 & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, method);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1B00CCC(&PartyOrganizationListViewManager_TypeInfo, v3);
    byte_48DEBD3 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0LL
    || (v7 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1B00F28(this, method);
  }
  ((void (__fastcall *)(PartyOrganizationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._9_SetSortKind.methodPtr);
  if ( v2->fields.isEquipSwap )
    PartyOrganizationListViewManager__EndSwapEquip(manager, v8);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationUIDragDropListViewDrop_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  PartyOrganizationUIDragDropListViewDrop_o **mListViewObject; // x20
  __int64 methodPtr_low; // x10
  __int64 v8; // x10

  v3 = this;
  if ( (byte_48DEBD6 & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_1B00CCC(&PartyOrganizationListViewManager_TypeInfo, v4);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1B00CCC(&StringLiteral_5338/*"DragEnd"*/, v5);
    byte_48DEBD6 = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewDrop_o **)v3->fields.mListViewObject;
  if ( !mListViewObject
    || (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        (*mListViewObject)[1].fields.isEquipSwap < (unsigned int)methodPtr_low)
    || *(PartyOrganizationListViewDropObject_c **)(*(_QWORD *)&(*mListViewObject)[1].fields.restriction
                                                 + 8 * methodPtr_low
                                                 - 8) != PartyOrganizationListViewDropObject_TypeInfo
    || (this = mListViewObject[5]) == 0LL
    || (v8 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8)
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v8 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_1B00F28(this, method);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, v2);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_31126448((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0LL);
  v3->fields.isEquipSwap = 0;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_5338/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v7; // x20

  v2 = this;
  if ( (byte_48DEBD5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1B00CCC(&StringLiteral_5339/*"DragReturnEnd"*/, v4);
    byte_48DEBD5 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v7 = (UnityEngine_Component_o *)v2->fields.mListViewObject;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v2->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v7 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                              v7,
                                                              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1B00F28(this, method);
  }
  if ( !v7 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v7, 1, 0LL);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_31126448((PartyOrganizationListViewDropObject_o *)v7, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5339/*"DragReturnEnd"*/, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v9; // x21
  int v10; // s0
  PartyOrganizationUIDragDropListViewDrop_c *v13; // x0
  UnityEngine_GameObject_o *v14; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_48DEBD4 & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_1B00CCC(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_5340/*"DragReturnMoveEnd"*/, v4);
    byte_48DEBD4 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v7 )
    goto LABEL_18;
  v9 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v7, 0LL);
  if ( !dragObject )
    goto LABEL_18;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v25 = UnityEngine_Transform__InverseTransformPoint(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  v14 = this->fields.dragObject;
  x = v25.fields.x;
  y = v25.fields.y;
  z = v25.fields.z;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v13 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v14, v13->static_fields->ACTION_TIME, v26, 0LL);
  if ( !dragObject )
LABEL_18:
    sub_1B00F28(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].monitor = gameObject;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18[3].monitor, (int32_t)gameObject, v20, v21);
  v22 = StringLiteral_5340/*"DragReturnMoveEnd"*/;
  *(_QWORD *)&v18[3].fields.m_CachedPtr = StringLiteral_5340/*"DragReturnMoveEnd"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18[3].fields, v22, v23, v24);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  struct ListViewObject_o *v8; // x20
  PartyOrganizationUIDragDropListViewDrop_o **p_dropObject; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  __int64 v13; // x10

  v2 = this;
  if ( (byte_48DEBDC & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_1B00CCC(&PartyOrganizationListViewManager_TypeInfo, v4);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1B00CCC(&StringLiteral_5338/*"DragEnd"*/, v5);
    byte_48DEBDC = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v8 = v2->fields.mListViewObject;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v2->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v8 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)v8,
                                                              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1B00F28(this, method);
  }
  if ( !v8 )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v8, 1, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)this, 1, 0LL);
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_31126448((PartyOrganizationListViewDropObject_o *)v8, 8, 0LL);
  p_dropObject = (PartyOrganizationUIDragDropListViewDrop_o **)&v2->fields.dropObject;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_31126448((PartyOrganizationListViewDropObject_o *)this, 7, 0LL);
  this = *p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_31126448((PartyOrganizationListViewDropObject_o *)this, 8, 0LL);
  *p_dropObject = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.dropObject, 0, v10, v11);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v8->fields.manager;
  if ( !this )
    goto LABEL_25;
  v13 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v13
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v13 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_25;
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, v12);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5338/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  PartyOrganizationListViewDropObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *v17; // x20
  PartyOrganizationListViewItem_o *v18; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v20; // w23
  _BOOL4 v21; // w24
  _BOOL4 IsRarityRestriction; // w22
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewDropObject_o *v24; // x22
  __int64 v25; // x24
  __int64 v26; // x25
  int32_t v27; // w24
  int32_t v28; // w25
  const MethodInfo *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  PartyOrganizationListViewDropObject_o *v31; // x24
  int32_t v32; // w25
  int32_t Rarity; // w26
  const MethodInfo *v34; // x7
  System_Text_StringBuilder_o *v35; // x23
  System_Text_StringBuilder_o *v36; // x25
  System_Text_StringBuilder_o *v37; // x26
  struct UserServantEntity_o *v38; // x8
  ServantEntity_o *servantEntity; // x28
  __int64 v40; // x27
  __int64 v41; // x29
  System_String_o *v42; // x28
  int32_t v43; // w29
  const MethodInfo *v44; // x7
  struct UserServantEntity_o *v45; // x8
  ServantEntity_o *v46; // x28
  __int64 v47; // x27
  __int64 v48; // x29
  System_String_o *v49; // x28
  int32_t v50; // w29
  const MethodInfo *v51; // x7
  int32_t v52; // w27
  int32_t v53; // w28
  int32_t v54; // w27
  int32_t v55; // w27
  int32_t v56; // w28
  int32_t index; // w8
  int32_t v58; // w9
  System_Text_StringBuilder_o *v59; // x1
  System_Text_StringBuilder_o *v60; // x20
  float v61; // s8
  int32_t windowHeight; // w25
  float v63; // s9
  System_String_o *v64; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  System_String_o *v68; // x23
  CommonConfirmDialog_ClickDelegate_o *v69; // x24
  PartyOrganizationListViewDropObject_o *v70; // [xsp+40h] [xbp-A0h]
  PartyOrganizationListViewDropObject_o *v71; // [xsp+40h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-88h] BYREF
  System_String_o *v74; // [xsp+60h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_48DEBDA & 1) == 0 )
  {
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&System_Math_TypeInfo, v4);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    sub_1B00CCC(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1B00CCC(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_10010/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v11);
    sub_1B00CCC(&StringLiteral_3718/*"COMMON_CONFIRM_NO"*/, v12);
    sub_1B00CCC(&StringLiteral_3721/*"COMMON_CONFIRM_YES"*/, v13);
    sub_1B00CCC(&StringLiteral_1/*""*/, v14);
    byte_48DEBDA = 1;
  }
  v74 = 0LL;
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
  v17 = (PartyOrganizationListViewItem_o *)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               this->fields.dropObject,
                                                               0LL);
  v18 = (PartyOrganizationListViewItem_o *)mListViewObject;
  *(_QWORD *)actMaxRarity = 0LL;
  v74 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isEquipSwap )
  {
    v21 = 0;
    IsRarityRestriction = 0;
LABEL_23:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, method);
      return;
    }
    goto LABEL_25;
  }
  if ( !v17 )
    goto LABEL_88;
  questRestrictionInfo = v17->fields.questRestrictionInfo;
  v20 = questRestrictionInfo ? questRestrictionInfo->fields.eventId : -1;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v17->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_88;
  v24 = mListViewObject;
  v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v26;
  *(_QWORD *)&v76.fields.fakeValue = v25;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                               v76,
                                                               0LL);
  if ( !v17->fields.userServantEntity )
    goto LABEL_88;
  v27 = (int)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                               v17->fields.userServantEntity,
                                                               0LL);
  if ( !v18 )
    goto LABEL_88;
  v28 = (int)mListViewObject;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v18, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                               EquipSvtId,
                                                               0LL);
  if ( !v24 )
    goto LABEL_88;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          (PartyOrganizationUtility_o *)mListViewObject,
                          &skillName,
                          &actMaxRarity[1],
                          v27,
                          v28,
                          (int32_t)mListViewObject,
                          v20,
                          v29);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v18->fields.userServantEntity;
  if ( !v30 )
    goto LABEL_88;
  v31 = mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                               v30[5],
                                                               0LL);
  if ( !v18->fields.userServantEntity )
    goto LABEL_88;
  v32 = (int)mListViewObject;
  Rarity = UserServantEntity__getRarity(v18->fields.userServantEntity, 0LL);
  v78 = PartyOrganizationListViewItem__get_EquipSvtId(v17, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                               v78,
                                                               0LL);
  if ( !v31 )
    goto LABEL_88;
  v21 = PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)mListViewObject,
          &v74,
          actMaxRarity,
          v32,
          Rarity,
          (int32_t)mListViewObject,
          v20,
          v34);
  if ( !v21 )
    goto LABEL_23;
LABEL_25:
  v35 = (System_Text_StringBuilder_o *)sub_1B00F18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v35, 0LL);
  v36 = (System_Text_StringBuilder_o *)sub_1B00F18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v36, 0LL);
  v37 = (System_Text_StringBuilder_o *)sub_1B00F18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  *(_QWORD *)maxLength = 0LL;
  if ( IsRarityRestriction )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v17 )
      goto LABEL_88;
    v38 = v17->fields.userServantEntity;
    v70 = mListViewObject;
    if ( !v38 )
      goto LABEL_88;
    servantEntity = v17->fields.servantEntity;
    v40 = *(_QWORD *)&v38->fields.limitCount.fields.currentCryptoKey;
    v41 = *(_QWORD *)&v38->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v79.fields.currentCryptoKey = v40;
    *(_QWORD *)&v79.fields.fakeValue = v41;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                                 v79,
                                                                 0LL);
    if ( !servantEntity )
      goto LABEL_88;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 servantEntity,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v17->fields.userServantEntity )
      goto LABEL_88;
    v42 = (System_String_o *)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v17->fields.userServantEntity,
                                                                 0LL);
    if ( !v18 )
      goto LABEL_88;
    v43 = (int)mListViewObject;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v18, 0LL);
    if ( !v70 )
      goto LABEL_88;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v42,
                                                                 v43,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v44);
    if ( !v36 )
      goto LABEL_88;
    System_Text_StringBuilder__Append_59487644(v36, (System_String_o *)mListViewObject, 0LL);
  }
  if ( v21 )
  {
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v18 )
    {
      v45 = v18->fields.userServantEntity;
      v71 = mListViewObject;
      if ( v45 )
      {
        v46 = v18->fields.servantEntity;
        v47 = *(_QWORD *)&v45->fields.limitCount.fields.currentCryptoKey;
        v48 = *(_QWORD *)&v45->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v80.fields.currentCryptoKey = v47;
        *(_QWORD *)&v80.fields.fakeValue = v48;
        mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                                     v80,
                                                                     0LL);
        if ( v46 )
        {
          mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                       v46,
                                                                       (int32_t)mListViewObject,
                                                                       -1,
                                                                       0LL);
          if ( v18->fields.userServantEntity )
          {
            v49 = (System_String_o *)mListViewObject;
            mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                         v18->fields.userServantEntity,
                                                                         0LL);
            if ( v17 )
            {
              v50 = (int)mListViewObject;
              mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(
                                                                           v17,
                                                                           0LL);
              if ( v71 )
              {
                mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                             (PartyOrganizationUtility_o *)mListViewObject,
                                                                             maxLength,
                                                                             v49,
                                                                             v50,
                                                                             (System_String_o *)mListViewObject,
                                                                             v74,
                                                                             actMaxRarity[0],
                                                                             v51);
                if ( v37 )
                {
                  System_Text_StringBuilder__Append_59487644(v37, (System_String_o *)mListViewObject, 0LL);
                  v52 = maxLength[0];
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    sub_1B00F28(mListViewObject, method);
  }
  v52 = 0;
LABEL_48:
  v53 = maxLength[1];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v54 = System_Math__Max_61144256(v53, v52, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_88;
  if ( v54 > 43 )
  {
    v56 = 0;
    v55 = 16;
    if ( !v17 )
      goto LABEL_88;
  }
  else if ( v54 > 41 )
  {
    v55 = 17;
    v56 = 17;
    if ( !v17 )
      goto LABEL_88;
  }
  else if ( v54 > 37 )
  {
    v55 = 18;
    v56 = 18;
    if ( !v17 )
      goto LABEL_88;
  }
  else if ( v54 > 34 )
  {
    v55 = 20;
    v56 = 20;
    if ( !v17 )
      goto LABEL_88;
  }
  else
  {
    if ( v54 >= 32 )
      v55 = 22;
    else
      v55 = 24;
    v56 = v55;
    if ( !v17 )
      goto LABEL_88;
  }
  if ( !v18 || !v35 )
    goto LABEL_88;
  index = v17->fields.index;
  v58 = v18->fields.index;
  v59 = index >= v58 ? v37 : v36;
  v60 = index >= v58 ? v36 : v37;
  System_Text_StringBuilder__Append_59488272(v35, v59, 0LL);
  System_Text_StringBuilder__Append_59488272(v35, v60, 0LL);
  v61 = v21 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v21 && IsRarityRestriction ? 520 : 480;
  v63 = v21 && IsRarityRestriction ? 40.0 : 30.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10010/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
  System_Text_StringBuilder__Append_59487644(v35, v64, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v66 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v35->klass->vtable._3_ToString.method)(
                             v35,
                             v35->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_3721/*"COMMON_CONFIRM_YES"*/, 0LL);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"COMMON_CONFIRM_NO"*/, 0LL);
  v69 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v69,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0LL);
  if ( !Instance )
    goto LABEL_88;
  CommonUI__OpenConfirmDialog_29937136(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v66,
    v67,
    v68,
    v69,
    v55,
    v56,
    v63,
    728,
    2,
    windowHeight,
    v61,
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o **p_dropObject; // x20
  __int64 v10; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Component_o *v13; // x21
  UnityEngine_Component_o *dragObject; // x0
  UnityEngine_Transform_o *v15; // x22
  int v16; // s0
  PartyOrganizationUIDragDropListViewDrop_c *v19; // x0
  UnityEngine_GameObject_o *v20; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  PartyOrganizationListViewDropObject_o *dropObject; // x22
  System_Action_o *v25; // x23
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s4
  float v30; // s5
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_48DEBD9 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, ddo);
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    sub_1B00CCC(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, v7);
    sub_1B00CCC(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v8);
    byte_48DEBD9 = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = (UnityEngine_Component_o **)&this->fields.dropObject;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.dropObject, (int32_t)ddo, (int32_t)method, v3);
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v13 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
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
  v15 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_dropObject, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v15 )
    goto LABEL_25;
  v31 = UnityEngine_Transform__InverseTransformPoint(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  v19 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  v20 = this->fields.dragObject;
  x = v31.fields.x;
  y = v31.fields.y;
  z = v31.fields.z;
  if ( !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v19 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  dragObject = (UnityEngine_Component_o *)TweenPosition__Begin(v20, v19->static_fields->ACTION_TIME, v32, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  LODWORD(dragObject[1].monitor) = 3;
  if ( !v13 )
    goto LABEL_25;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v13, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  dropObject = this->fields.dropObject;
  v25 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0LL);
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v13, 0LL);
  if ( !dragObject )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !dropObject )
    goto LABEL_25;
  v29 = v27;
  v30 = v28;
  v33.fields.x = v26;
  v33.fields.y = v29;
  v33.fields.z = v30;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v25, 0.0, v33, this->fields.isEquipSwap, 0LL);
  if ( this->fields.isEquipSwap )
  {
    dragObject = *p_dropObject;
    if ( *p_dropObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0LL);
      return;
    }
LABEL_25:
    sub_1B00F28(dragObject, v10);
  }
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  PartyOrganizationListViewItem_o *v7; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  PartyOrganizationListViewManager_o *v10; // x22

  v2 = this;
  if ( (byte_48DEBDB & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_1B00CCC(&PartyOrganizationListViewManager_TypeInfo, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_1B00CCC(&StringLiteral_5341/*"DragSwapEnd"*/, v4);
    byte_48DEBDB = 1;
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
  v7 = (PartyOrganizationListViewItem_o *)this;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        v2->fields.dropObject,
                                                        0LL);
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v9 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v10 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v10 = 0LL;
    if ( !this )
      goto LABEL_22;
  }
  else
  {
    v10 = 0LL;
    if ( !this )
      goto LABEL_22;
  }
  if ( v2->fields.isEquipSwap )
  {
    PartyOrganizationListViewItem__SwapEquip((PartyOrganizationListViewItem_o *)this, v7, 0LL);
    if ( !v10 )
      goto LABEL_22;
  }
  else
  {
    PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, v7, 0, 0LL);
    if ( !v10 )
      goto LABEL_22;
  }
  PartyOrganizationListViewManager__ModifyItem(v10, method);
  PartyOrganizationListViewDropObject__GetItem(mListViewObject, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this
    || (PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)this, 0LL),
        PartyOrganizationListViewDropObject__Init_31126448(mListViewObject, 9, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0LL) )
  {
LABEL_22:
    sub_1B00F28(this, method);
  }
  PartyOrganizationListViewDropObject__Init_31126448((PartyOrganizationListViewDropObject_o *)this, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5341/*"DragSwapEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ListViewObject_o *IsDropDropSurface; // x0
  const MethodInfo *v11; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 methodPtr_low; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v15; // x11
  struct ListViewManager_o *v16; // x27
  PartyOrganizationListViewItem_o *Item; // x22
  UnityEngine_Object_o *Component_object; // x23
  UnityEngine_GameObject_o *gameObject; // x25
  ListViewDropInfo_o *v20; // x24
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *monitor; // x23
  PartyOrganizationListViewItem_o *v23; // x0
  const MethodInfo *v24; // x2
  PartyOrganizationListViewItem_o *v25; // x24
  const MethodInfo *v26; // x1

  if ( (byte_48DEBD2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, surface);
    sub_1B00CCC(&ListViewDropInfo_TypeInfo, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, v8);
    sub_1B00CCC(&PartyOrganizationListViewManager_TypeInfo, v9);
    byte_48DEBD2 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.surface, 0, (int32_t)method, v3);
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
    && (v15 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v15) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v15 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v16 = mListViewObject->fields.manager;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
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
                                               (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
    goto LABEL_32;
  IsDropDropSurface = this->fields.mListViewObject;
  if ( !IsDropDropSurface )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsDropDropSurface, 0LL);
  v20 = (ListViewDropInfo_o *)sub_1B00F18(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v20, gameObject, surface, 0LL);
  if ( !v16 )
    goto LABEL_40;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(
                                                   (PartyOrganizationListViewManager_o *)IsDropDropSurface,
                                                   v20,
                                                   v21);
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
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v11);
    return;
  }
  if ( !monitor )
LABEL_40:
    sub_1B00F28(IsDropDropSurface, v11);
  v23 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)monitor, 0LL);
  if ( !v23 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
    PartyOrganizationListViewDropObject__Init_31126448((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
      mListViewObject,
      0LL,
      mListViewObject->klass->vtable._6_SetItem.methodPtr);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))monitor->klass[1]._1.namespaze)(
      monitor,
      Item,
      monitor->klass[1]._1.byval_arg.data);
    PartyOrganizationListViewDropObject__Init_31126448((PartyOrganizationListViewDropObject_o *)monitor, 4, 0LL);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v26);
    return;
  }
  v25 = v23;
  if ( v23 == Item )
  {
LABEL_32:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v11);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_31:
    if ( !v25->fields.isFollower && v25->fields.userServantEntity )
      goto LABEL_39;
    goto LABEL_32;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v23, 0LL) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_39:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)monitor, v24);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x10
  struct ListViewManager_o *manager; // x9
  int linkItem_low; // w8
  __int64 v16; // x12
  PartyOrganizationListViewManager_o *v17; // x19
  const MethodInfo *v18; // x2

  if ( (byte_48DEBD1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B00CCC(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_1B00CCC(&PartyOrganizationListViewManager_TypeInfo, v4);
    sub_1B00CCC(&UICamera_TypeInfo, v5);
    byte_48DEBD1 = 1;
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.surface, (int32_t)dragged, v7, v8);
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
    || (v16 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16) )
  {
    v17 = 0LL;
    if ( linkItem_low )
      goto LABEL_15;
    goto LABEL_21;
  }
  if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v16 - 1] == PartyOrganizationListViewManager_TypeInfo )
    v17 = (PartyOrganizationListViewManager_o *)manager;
  else
    v17 = 0LL;
  if ( !linkItem_low )
  {
LABEL_21:
    p_image = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)mListViewObject,
                (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( p_image )
    {
      p_image = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, float))(*p_image + 440LL))(
                            p_image,
                            *(_QWORD *)(*p_image + 448LL),
                            0.0);
      if ( v17 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B00F28(p_image, v6);
  }
LABEL_15:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  if ( !v17 )
    goto LABEL_25;
LABEL_23:
  PartyOrganizationListViewManager__SetDispSwapGuide(v17, 0, v18);
  p_image = &mListViewObject->fields.manager->klass;
  if ( !p_image )
    goto LABEL_25;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 424LL))(p_image, *(_QWORD *)(*p_image + 432LL));
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__SetBaseTransform(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *listViewObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct ListViewObject_o *Component_object; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_48DEBD0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48DEBD0 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mListViewObject, (int32_t)Component_object, v7, v8);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v12 = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v12,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mDragScrollView, (int32_t)v12, v13, v14),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_1B00F28(mListViewObject, v10);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mTrans, (int32_t)transform, v16, v17);
  v18 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v18;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mCollider, (int32_t)v18, v19, v20);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_48DEBCF & 1) == 0 )
  {
    sub_1B00CCC(&UICamera_TypeInfo, method);
    byte_48DEBCF = 1;
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
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_48DEBDE & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B00CCC(&StringLiteral_5341/*"DragSwapEnd"*/, v5);
    byte_48DEBDE = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5341/*"DragSwapEnd"*/,
      0.1,
      0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v7);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}