void __fastcall PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  if ( (byte_438ED46 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    byte_438ED46 = 1;
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
  __int64 v4; // x10
  __int64 v5; // x8
  __int64 v6; // x11
  UnityEngine_Object_o *v7; // x21

  v2 = this;
  if ( (byte_438ED41 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B775C4(&StringLiteral_5535/*"DragEnd"*/);
    byte_438ED41 = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_20;
  v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    goto LABEL_20;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_20;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0LL);
  if ( !this )
    goto LABEL_20;
  v5 = *(_QWORD *)&this->fields.mTarget.fields.z;
  if ( v5
    && (v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 300LL) >= (unsigned int)v6) )
  {
    if ( *(PartyOrganizationListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v5 + 200LL) + 8 * v6 - 8) == PartyOrganizationListViewObject_TypeInfo )
      v7 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.z;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v7 )
    {
      PartyOrganizationListViewObject__Init_20649648((PartyOrganizationListViewObject_o *)v7, 8, 0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_B7769C(this, method);
  }
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_38619204(mListViewObject, 0, 0LL);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
    mListViewObject,
    0LL,
    mListViewObject->klass->vtable._6_SetItem.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5535/*"DragEnd"*/, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragDumpStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x20
  PartyOrganizationUIDragDropListViewDrop_c *v4; // x0
  float ACTION_TIME; // s8
  float g; // s5
  float b; // s6
  float a; // s7
  float v9; // s4
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s5
  float v16; // s3
  float v17; // s3
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o down; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_438ED40 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    sub_B775C4(&StringLiteral_5534/*"DragDumpEnd"*/);
    byte_438ED40 = 1;
  }
  dragObject = this->fields.dragObject;
  v4 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v4 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  ACTION_TIME = v4->static_fields->ACTION_TIME;
  clear = UnityEngine_Color__get_clear(0LL);
  g = clear.fields.g;
  b = clear.fields.b;
  a = clear.fields.a;
  clear.fields.g = clear.fields.r;
  clear.fields.b = g;
  clear.fields.a = b;
  v9 = a;
  transform = (UnityEngine_GameObject_o *)TweenColor__Begin(
                                            dragObject,
                                            ACTION_TIME,
                                            *(UnityEngine_Color_o *)&clear.fields.g,
                                            0LL);
  if ( !transform )
    goto LABEL_11;
  LODWORD(transform[1].klass) = 3;
  transform = this->fields.dragObject;
  if ( !transform )
    goto LABEL_11;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_11;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  down = UnityEngine_Vector3__get_down(0LL);
  v15 = down.fields.y * 50.0;
  v16 = down.fields.z * 50.0;
  down.fields.y = x + (float)(down.fields.x * 50.0);
  down.fields.z = y + v15;
  v17 = z + v16;
  transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                            this->fields.dragObject,
                                            PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
                                            *(UnityEngine_Vector3_o *)&down.fields.y,
                                            0LL);
  if ( !transform )
LABEL_11:
    sub_B7769C(transform, v11);
  v18 = transform;
  LODWORD(transform[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B77560((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_5534/*"DragDumpEnd"*/;
  v18[3].monitor = (void *)StringLiteral_5534/*"DragDumpEnd"*/;
  sub_B77560((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v4; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  __int64 v6; // x10

  v2 = this;
  if ( (byte_438ED3C & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B775C4(&PartyOrganizationListViewManager_TypeInfo);
    byte_438ED3C = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( !mListViewObject
    || (v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v4)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0LL
    || (v6 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B7769C(this, method);
  }
  ((void (__fastcall *)(PartyOrganizationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._9_SetSortKind.methodPtr);
  if ( v2->fields.isEquipSwap )
    PartyOrganizationListViewManager__EndSwapEquip(manager, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  PartyOrganizationUIDragDropListViewDrop_o **mListViewObject; // x20
  __int64 v4; // x10
  __int64 v5; // x10

  v2 = this;
  if ( (byte_438ED3F & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B775C4(&StringLiteral_5535/*"DragEnd"*/);
    byte_438ED3F = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewDrop_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        BYTE4((*mListViewObject)[1].fields.surface) < (unsigned int)v4)
    || *((PartyOrganizationListViewDropObject_c **)(*mListViewObject)[1].fields.mParent + v4 - 1) != PartyOrganizationListViewDropObject_TypeInfo
    || (this = mListViewObject[4]) == 0LL
    || (v5 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v5 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B7769C(this, method);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0LL);
  v2->fields.isEquipSwap = 0;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5535/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v4; // x11
  UnityEngine_Component_o *v5; // x20

  v2 = this;
  if ( (byte_438ED3E & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B775C4(&StringLiteral_5536/*"DragReturnEnd"*/);
    byte_438ED3E = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v5,
                                                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B7769C(this, method);
  }
  if ( !v5 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v5, 1, 0LL);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)v5, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5536/*"DragReturnEnd"*/, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
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
  PartyOrganizationUIDragDropListViewDrop_c *v14; // x0
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

  if ( (byte_438ED3D & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    sub_B775C4(&StringLiteral_5537/*"DragReturnMoveEnd"*/);
    byte_438ED3D = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
  v14 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v31.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v14 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v11, v14->static_fields->ACTION_TIME, v32, 0LL);
  if ( !dragObject )
LABEL_19:
    sub_B7769C(dragObject, method);
  v16 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B77560((BattleServantConfConponent_o *)&v16[3], gameObject, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_5537/*"DragReturnMoveEnd"*/;
  v16[3].monitor = (void *)StringLiteral_5537/*"DragReturnMoveEnd"*/;
  sub_B77560((BattleServantConfConponent_o *)&v16[3].monitor, v24, v25, v26, v27, v28, v29, v30);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v4; // x11
  struct ListViewObject_o *v5; // x20
  PartyOrganizationUIDragDropListViewDrop_o **p_dropObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x10

  v2 = this;
  if ( (byte_438ED45 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B775C4(&StringLiteral_5535/*"DragEnd"*/);
    byte_438ED45 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)v5,
                                                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, void *, float))this->klass->vtable._8_OnDragDropRelease.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
          if ( this )
          {
            this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B7769C(this, method);
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
  PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)v5, 8, 0LL);
  p_dropObject = (PartyOrganizationUIDragDropListViewDrop_o **)&v2->fields.dropObject;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)this, 7, 0LL);
  this = *p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)this, 8, 0LL);
  *p_dropObject = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.dropObject, 0LL, v7, v8, v9, v10, v11, v12);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v5->fields.manager;
  if ( !this )
    goto LABEL_25;
  v13 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v13 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_25;
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5535/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewDropObject_o *mListViewObject; // x0
  __int64 v4; // x10
  PartyOrganizationListViewItem_o *v5; // x20
  PartyOrganizationListViewItem_o *v6; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
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
  System_Text_StringBuilder_o *v24; // x26
  _BOOL4 v25; // w27
  struct UserServantEntity_o *v26; // x8
  System_Text_StringBuilder_o *v27; // x22
  ServantEntity_o *servantEntity; // x28
  __int64 v29; // x25
  __int64 v30; // x26
  System_String_o *v31; // x28
  int32_t v32; // w25
  const MethodInfo *v33; // x7
  _BOOL4 v34; // w27
  struct UserServantEntity_o *v35; // x8
  System_Text_StringBuilder_o *v36; // x22
  ServantEntity_o *v37; // x28
  __int64 v38; // x25
  __int64 v39; // x26
  System_String_o *v40; // x28
  int32_t v41; // w25
  const MethodInfo *v42; // x7
  int32_t v43; // w27
  int32_t v44; // w25
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w27
  Il2CppObject *v48; // x1
  System_Text_StringBuilder_o *v49; // x0
  float v50; // s8
  int32_t windowHeight; // w25
  float v52; // s9
  System_String_o *v53; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v55; // x21
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  CommonConfirmDialog_ClickDelegate_o *v58; // x24
  PartyOrganizationListViewDropObject_o *v59; // [xsp+40h] [xbp-90h]
  PartyOrganizationListViewDropObject_o *v60; // [xsp+40h] [xbp-90h]
  System_Text_StringBuilder_o *v61; // [xsp+48h] [xbp-88h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-80h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-78h] BYREF
  System_String_o *v64; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_438ED43 & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&StringLiteral_10392/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_B775C4(&StringLiteral_3390/*"COMMON_CONFIRM_NO"*/);
    sub_B775C4(&StringLiteral_3393/*"COMMON_CONFIRM_YES"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438ED43 = 1;
  }
  v64 = 0LL;
  skillName = 0LL;
  *(_QWORD *)maxLength = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_101;
  v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    goto LABEL_101;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_101;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               mListViewObject,
                                                               0LL);
  if ( !this->fields.dropObject )
    goto LABEL_101;
  v5 = (PartyOrganizationListViewItem_o *)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               this->fields.dropObject,
                                                               0LL);
  v6 = (PartyOrganizationListViewItem_o *)mListViewObject;
  *(_QWORD *)actMaxRarity = 0LL;
  v64 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isEquipSwap )
  {
    v9 = 0;
    IsRarityRestriction = 0;
LABEL_12:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, method);
      return;
    }
    goto LABEL_29;
  }
  if ( !v5 )
    goto LABEL_101;
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    eventId = questRestrictionInfo->fields.eventId;
  else
    eventId = -1;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v5->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_101;
  v12 = mListViewObject;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v66.fields.currentCryptoKey = v14;
  *(_QWORD *)&v66.fields.fakeValue = v13;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                               v66,
                                                               0LL);
  if ( !v5->fields.userServantEntity )
    goto LABEL_101;
  v15 = (int)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                               v5->fields.userServantEntity,
                                                               0LL);
  if ( !v6 )
    goto LABEL_101;
  v16 = (int)mListViewObject;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v6, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                               EquipSvtId,
                                                               0LL);
  if ( !v12 )
    goto LABEL_101;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          (PartyOrganizationUtility_o *)mListViewObject,
                          &skillName,
                          &actMaxRarity[1],
                          v15,
                          v16,
                          (int32_t)mListViewObject,
                          eventId,
                          v17);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v6->fields.userServantEntity;
  if ( !v18 )
    goto LABEL_101;
  v19 = mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                               v18[5],
                                                               0LL);
  if ( !v6->fields.userServantEntity )
    goto LABEL_101;
  v20 = (int)mListViewObject;
  Rarity = UserServantEntity__getRarity(v6->fields.userServantEntity, 0LL);
  v68 = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                               v68,
                                                               0LL);
  if ( !v19 )
    goto LABEL_101;
  v9 = PartyOrganizationUtility__IsRarityRestriction(
         (PartyOrganizationUtility_o *)mListViewObject,
         &v64,
         actMaxRarity,
         v20,
         Rarity,
         (int32_t)mListViewObject,
         eventId,
         v22);
  if ( !v9 )
    goto LABEL_12;
LABEL_29:
  v23 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v23, 0LL);
  v24 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v24, 0LL);
  v61 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v61, 0LL);
  *(_QWORD *)maxLength = 0LL;
  if ( IsRarityRestriction )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v25 = IsRarityRestriction;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v5 )
      goto LABEL_101;
    v26 = v5->fields.userServantEntity;
    v59 = mListViewObject;
    if ( !v26 )
      goto LABEL_101;
    v27 = v24;
    servantEntity = v5->fields.servantEntity;
    v30 = *(_QWORD *)&v26->fields.limitCount.fields.currentCryptoKey;
    v29 = *(_QWORD *)&v26->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v69.fields.currentCryptoKey = v30;
    *(_QWORD *)&v69.fields.fakeValue = v29;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                 v69,
                                                                 0LL);
    if ( !servantEntity )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 servantEntity,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v5->fields.userServantEntity )
      goto LABEL_101;
    v31 = (System_String_o *)mListViewObject;
    v24 = v27;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v5->fields.userServantEntity,
                                                                 0LL);
    if ( !v6 )
      goto LABEL_101;
    v32 = (int)mListViewObject;
    IsRarityRestriction = v25;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v6, 0LL);
    if ( !v59 )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v31,
                                                                 v32,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v33);
    if ( !v24 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_42951964(v24, (System_String_o *)mListViewObject, 0LL);
  }
  if ( v9 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v34 = IsRarityRestriction;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v6 )
      goto LABEL_101;
    v35 = v6->fields.userServantEntity;
    v60 = mListViewObject;
    if ( !v35 )
      goto LABEL_101;
    v36 = v24;
    v37 = v6->fields.servantEntity;
    v39 = *(_QWORD *)&v35->fields.limitCount.fields.currentCryptoKey;
    v38 = *(_QWORD *)&v35->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v70.fields.currentCryptoKey = v39;
    *(_QWORD *)&v70.fields.fakeValue = v38;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                 v70,
                                                                 0LL);
    if ( !v37 )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 v37,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v6->fields.userServantEntity )
      goto LABEL_101;
    v40 = (System_String_o *)mListViewObject;
    v24 = v36;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v6->fields.userServantEntity,
                                                                 0LL);
    if ( !v5 )
      goto LABEL_101;
    v41 = (int)mListViewObject;
    IsRarityRestriction = v34;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v5, 0LL);
    if ( !v60 )
      goto LABEL_101;
    method = (const MethodInfo *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                   (PartyOrganizationUtility_o *)mListViewObject,
                                   maxLength,
                                   v40,
                                   v41,
                                   (System_String_o *)mListViewObject,
                                   v64,
                                   actMaxRarity[0],
                                   v42);
    mListViewObject = (PartyOrganizationListViewDropObject_o *)v61;
    if ( !v61 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_42951964(v61, (System_String_o *)method, 0LL);
    v43 = maxLength[0];
  }
  else
  {
    v43 = 0;
  }
  v44 = maxLength[1];
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v45 = System_Math__Max_45851140(v44, v43, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_101;
  if ( v45 > 43 )
  {
    v46 = 0;
    v47 = 16;
    if ( !v5 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v45 > 41 )
  {
    v47 = 17;
    v46 = 17;
    if ( !v5 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v45 > 37 )
  {
    v47 = 18;
    v46 = 18;
    if ( !v5 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v45 <= 34 )
  {
    if ( v45 <= 31 )
      v47 = 24;
    else
      v47 = 22;
    v46 = v47;
    if ( v5 )
      goto LABEL_69;
LABEL_101:
    sub_B7769C(mListViewObject, method);
  }
  v47 = 20;
  v46 = 20;
  if ( !v5 )
    goto LABEL_101;
LABEL_69:
  if ( !v6 || !v23 )
    goto LABEL_101;
  if ( v5->fields.index >= v6->fields.index )
  {
    System_Text_StringBuilder__Append_42955724(v23, (Il2CppObject *)v61, 0LL);
    v49 = v23;
    v48 = (Il2CppObject *)v24;
  }
  else
  {
    System_Text_StringBuilder__Append_42955724(v23, (Il2CppObject *)v24, 0LL);
    v48 = (Il2CppObject *)v61;
    v49 = v23;
  }
  System_Text_StringBuilder__Append_42955724(v49, v48, 0LL);
  v50 = v9 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v9 && IsRarityRestriction ? 520 : 480;
  v52 = v9 && IsRarityRestriction ? 40.0 : 30.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
  System_Text_StringBuilder__Append_42951964(v23, v53, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                             v23,
                             v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"COMMON_CONFIRM_YES"*/, 0LL);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"COMMON_CONFIRM_NO"*/, 0LL);
  v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v58,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0LL);
  if ( !Instance )
    goto LABEL_101;
  CommonUI__OpenConfirmDialog_18056028(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v55,
    v56,
    v57,
    v58,
    v47,
    v46,
    v52,
    728,
    2,
    windowHeight,
    v50,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Component_o **p_dropObject; // x20
  __int64 v11; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v13; // x11
  UnityEngine_Component_o *v14; // x21
  UnityEngine_Component_o *dragObject; // x0
  UnityEngine_Transform_o *v16; // x22
  int v17; // s0
  UnityEngine_GameObject_o *v20; // x22
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewDrop_c *v23; // x0
  float z; // s10
  PartyOrganizationListViewDropObject_o *dropObject; // x22
  System_Action_o *v26; // x23
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s4
  float v31; // s5
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_438ED42 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__);
    sub_B775C4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    byte_438ED42 = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = (UnityEngine_Component_o **)&this->fields.dropObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dropObject,
    (System_Int32_array **)ddo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v13 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v13 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v14 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  dragObject = (UnityEngine_Component_o *)this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_26;
  dragObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)dragObject,
                                            0LL);
  if ( !dragObject )
    goto LABEL_26;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !*p_dropObject )
    goto LABEL_26;
  v16 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_dropObject, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v16 )
    goto LABEL_26;
  v32 = UnityEngine_Transform__InverseTransformPoint(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  v20 = this->fields.dragObject;
  x = v32.fields.x;
  y = v32.fields.y;
  v23 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v32.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v23 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  dragObject = (UnityEngine_Component_o *)TweenPosition__Begin(v20, v23->static_fields->ACTION_TIME, v33, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  LODWORD(dragObject[1].klass) = 3;
  if ( !v14 )
    goto LABEL_26;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v14, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  dropObject = this->fields.dropObject;
  v26 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0LL);
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v14, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !dropObject )
    goto LABEL_26;
  v30 = v28;
  v31 = v29;
  v34.fields.x = v27;
  v34.fields.y = v30;
  v34.fields.z = v31;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v26, 0.0, v34, this->fields.isEquipSwap, 0LL);
  if ( this->fields.isEquipSwap )
  {
    dragObject = *p_dropObject;
    if ( *p_dropObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0LL);
      return;
    }
LABEL_26:
    sub_B7769C(dragObject, v11);
  }
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v4; // x10
  PartyOrganizationListViewItem_o *v5; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v7; // x12
  PartyOrganizationListViewManager_o *v8; // x22
  PartyOrganizationListViewManager_o *v9; // x24
  int v10; // w9
  PartyOrganizationListViewDropObject_o *v11; // x23
  __int64 v12; // x11

  v2 = this;
  if ( (byte_438ED44 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewManager_TypeInfo);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B775C4(&StringLiteral_5538/*"DragSwapEnd"*/);
    byte_438ED44 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_43;
  v4 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    goto LABEL_43;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_43;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0LL);
  if ( !v2->fields.dropObject )
    goto LABEL_43;
  v5 = (PartyOrganizationListViewItem_o *)this;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        v2->fields.dropObject,
                                                        0LL);
  manager = mListViewObject->fields.manager;
  if ( manager )
  {
    v7 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    {
      if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v8 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    v9 = 0LL;
    if ( v2->fields.isEquipSwap )
      v10 = 0;
    else
      v10 = 2;
    if ( v2->fields.isEquipSwap )
      v11 = 0LL;
    else
      v11 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !v2->fields.isEquipSwap )
    {
      v12 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
      {
        if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == PartyOrganizationListViewManager_TypeInfo )
          v9 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
        else
          v9 = 0LL;
      }
      else
      {
        v9 = 0LL;
      }
      v10 = 2;
      v11 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    }
    if ( !this )
      goto LABEL_43;
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    if ( v2->fields.isEquipSwap )
      v10 = 0;
    else
      v10 = 2;
    if ( v2->fields.isEquipSwap )
      v11 = 0LL;
    else
      v11 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !this )
      goto LABEL_43;
  }
  if ( v10 )
  {
    PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, v5, 0, 0LL);
    v8 = v9;
    if ( !v9 )
      goto LABEL_43;
  }
  else
  {
    PartyOrganizationListViewItem__SwapEquip((PartyOrganizationListViewItem_o *)this, v5, 0LL);
    v11 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !v8 )
      goto LABEL_43;
  }
  PartyOrganizationListViewManager__ModifyItem(v8, 0LL);
  if ( !v11
    || (PartyOrganizationListViewDropObject__GetItem(v11, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0LL)
    || (PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)this, 0LL),
        PartyOrganizationListViewDropObject__Init_38619204(v11, 9, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0LL) )
  {
LABEL_43:
    sub_B7769C(this, method);
  }
  PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)this, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5538/*"DragSwapEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropRelease(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ListViewObject_o *IsDropDropSurface; // x0
  const MethodInfo *v11; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 v13; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v15; // x11
  PartyOrganizationListViewManager_o *v16; // x23
  PartyOrganizationListViewItem_o *Item; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v20; // x25
  UnityEngine_Object_o *klass; // x23
  PartyOrganizationListViewItem_o *v22; // x0
  const MethodInfo *v23; // x2
  PartyOrganizationListViewItem_o *v24; // x24
  const MethodInfo *v25; // x1

  if ( (byte_438ED3B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
    sub_B775C4(&ListViewDropInfo_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewManager_TypeInfo);
    byte_438ED3B = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.surface,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_43;
  v13 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v13 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_43;
  }
  manager = mListViewObject->fields.manager;
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
  Item = PartyOrganizationListViewDropObject__GetItem(
           (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject,
           0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)surface,
                                                   0LL,
                                                   0LL);
  if ( !Item || ((unsigned __int8)IsDropDropSurface & 1) == 0 )
    goto LABEL_35;
  if ( !surface )
    goto LABEL_43;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_35;
  IsDropDropSurface = this->fields.mListViewObject;
  if ( !IsDropDropSurface )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsDropDropSurface, 0LL);
  v20 = (ListViewDropInfo_o *)sub_B77694(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v20, gameObject, surface, 0LL);
  if ( !v16 )
    goto LABEL_43;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(v16, v20, 0LL);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
    goto LABEL_35;
  if ( !Component_srcLineSprite )
    goto LABEL_43;
  klass = (UnityEngine_Object_o *)Component_srcLineSprite[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsDropDropSurface = (struct ListViewObject_o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( ((unsigned __int8)IsDropDropSurface & 1) == 0 )
  {
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v11);
    return;
  }
  if ( !klass )
LABEL_43:
    sub_B7769C(IsDropDropSurface, v11);
  v22 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v22 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
    PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
      mListViewObject,
      0LL,
      mListViewObject->klass->vtable._6_SetItem.methodPtr);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
      klass,
      Item,
      klass->klass[1]._1.byval_arg.data);
    PartyOrganizationListViewDropObject__Init_38619204((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v25);
    return;
  }
  v24 = v22;
  if ( v22 == Item )
  {
LABEL_35:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v11);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_34:
    if ( !v24->fields.isFollower && v24->fields.userServantEntity )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v22, 0LL) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_42:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)klass, v23);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  UnityEngine_Component_o *mListViewObject; // x19
  __int64 v14; // x10
  int klass_low; // w10
  PartyOrganizationListViewManager_o *monitor; // x8
  __int64 v17; // x12
  PartyOrganizationListViewManager_o *v18; // x20
  __int64 v19; // x11

  if ( (byte_438ED3A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewManager_TypeInfo);
    sub_B775C4(&UICamera_TypeInfo);
    byte_438ED3A = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  this->fields.isDrag = 1;
  p_image = &UICamera_TypeInfo->_1.image;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    p_image = &UICamera_TypeInfo->_1.image;
  }
  currentTouch = *(struct UICamera_MouseOrTouch_o **)(p_image[23] + 160LL);
  if ( currentTouch )
  {
    if ( (*((_BYTE *)p_image + 307) & 4) != 0 && !*((_DWORD *)p_image + 56) )
    {
      j_il2cpp_runtime_class_init_0(p_image);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_33;
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.surface,
      (System_Int32_array **)dragged,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
  }
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_33;
  v14 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v14 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_33;
  }
  klass_low = LOBYTE(mListViewObject[7].klass);
  monitor = (PartyOrganizationListViewManager_o *)mListViewObject[1].monitor;
  this->fields.isEquipSwap = klass_low;
  if ( !monitor
    || (v17 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v17) )
  {
    v18 = 0LL;
    if ( klass_low )
      goto LABEL_17;
    goto LABEL_23;
  }
  if ( (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v17 - 1] == PartyOrganizationListViewManager_TypeInfo )
    v18 = monitor;
  else
    v18 = 0LL;
  if ( !klass_low )
  {
LABEL_23:
    if ( monitor
      && (v19 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&monitor->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
    {
      if ( (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v19 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v18 = monitor;
      else
        v18 = 0LL;
    }
    else
    {
      v18 = 0LL;
    }
    p_image = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( p_image )
    {
      p_image = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, float))(*p_image + 440LL))(
                            p_image,
                            *(_QWORD *)(*p_image + 448LL),
                            0.0);
      if ( v18 )
        goto LABEL_31;
    }
LABEL_33:
    sub_B7769C(p_image, v3);
  }
LABEL_17:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  if ( !v18 )
    goto LABEL_33;
LABEL_31:
  PartyOrganizationListViewManager__SetDispSwapGuide(v18, 0, 0LL);
  p_image = mListViewObject[1].monitor;
  if ( !p_image )
    goto LABEL_33;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 424LL))(p_image, *(_QWORD *)(*p_image + 432LL));
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__SetBaseTransform(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewObject; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ListViewObject_o *Component_WebViewObject; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  WebViewObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UnityEngine_Collider_o *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_438ED39 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ED39 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_WebViewObject = this->fields.listViewObject;
  else
    Component_WebViewObject = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mListViewObject,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v13 = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v13,
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B7769C(mListViewObject, v11);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (struct UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v27;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mCollider,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_438ED38 & 1) == 0 )
  {
    sub_B775C4(&UICamera_TypeInfo);
    byte_438ED38 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_438ED47 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_5538/*"DragSwapEnd"*/);
    byte_438ED47 = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5538/*"DragSwapEnd"*/,
      0.1,
      0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}