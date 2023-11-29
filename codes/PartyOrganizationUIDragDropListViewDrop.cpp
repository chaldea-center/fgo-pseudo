void __fastcall PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDE0A & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v1);
    byte_40FDE0A = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v7; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v10; // x11
  PartyOrganizationListViewObject_o *v11; // x21

  if ( (byte_40FDE05 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B16FFC(&PartyOrganizationListViewObject_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5375, v5);
    byte_40FDE05 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_20;
  v7 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    goto LABEL_20;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_20;
  Item = PartyOrganizationListViewDropObject__GetItem(
           (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject,
           0LL);
  if ( !Item )
    goto LABEL_20;
  viewObject = Item->fields.viewObject;
  if ( viewObject
    && (v10 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v10 - 1] == PartyOrganizationListViewObject_TypeInfo )
      v11 = (PartyOrganizationListViewObject_o *)Item->fields.viewObject;
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
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
  {
    if ( v11 )
    {
      PartyOrganizationListViewObject__Init_20192244(v11, 8, 0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_32300096((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
    mListViewObject,
    0LL,
    mListViewObject->klass->vtable._6_SetItem.methodPtr);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5375,
    0.1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragDumpStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x20
  PartyOrganizationUIDragDropListViewDrop_c *v5; // x0
  float ACTION_TIME; // s8
  float g; // s5
  float b; // s6
  float a; // s7
  float v10; // s4
  TweenColor_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v17; // s5
  float v18; // s3
  float v19; // s3
  TweenPosition_o *v20; // x0
  TweenPosition_o *v21; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o down; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40FDE04 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5374, v3);
    byte_40FDE04 = 1;
  }
  dragObject = this->fields.dragObject;
  v5 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v5 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  ACTION_TIME = v5->static_fields->ACTION_TIME;
  clear = UnityEngine_Color__get_clear(0LL);
  g = clear.fields.g;
  b = clear.fields.b;
  a = clear.fields.a;
  clear.fields.g = clear.fields.r;
  clear.fields.b = g;
  clear.fields.a = b;
  v10 = a;
  v11 = TweenColor__Begin(dragObject, ACTION_TIME, *(UnityEngine_Color_o *)&clear.fields.g, 0LL);
  if ( !v11 )
    goto LABEL_11;
  v11->fields.style = 3;
  v12 = this->fields.dragObject;
  if ( !v12 )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( !transform )
    goto LABEL_11;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  down = UnityEngine_Vector3__get_down(0LL);
  v17 = down.fields.y * 50.0;
  v18 = down.fields.z * 50.0;
  down.fields.y = x + (float)(down.fields.x * 50.0);
  down.fields.z = y + v17;
  v19 = z + v18;
  v20 = TweenPosition__Begin(
          this->fields.dragObject,
          PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
          *(UnityEngine_Vector3_o *)&down.fields.y,
          0LL);
  if ( !v20 )
LABEL_11:
    sub_B170D4();
  v21 = v20;
  v20->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v21->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v21->fields.eventReceiver, gameObject, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_5374;
  v21->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5374;
  sub_B16F98((BattleServantConfConponent_o *)&v21->fields.callWhenFinished, v29, v30, v31, v32, v33, v34, v35);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v5; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  __int64 v7; // x10

  if ( (byte_40FDE00 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, v3);
    byte_40FDE00 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject
    || (v5 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v5 - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0LL
    || (v7 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(PartyOrganizationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._9_SetSortKind.methodPtr);
  if ( this->fields.isEquipSwap )
    PartyOrganizationListViewManager__EndSwapEquip(manager, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v6; // x10
  PartyOrganizationListViewManager_o *manager; // x0
  __int64 v8; // x10

  if ( (byte_40FDE03 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5375, v4);
    byte_40FDE03 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject
    || (v6 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0LL
    || (v8 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B170D4();
  }
  PartyOrganizationListViewManager__SetDispSwapGuide(manager, 1, 0LL);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_32300096((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0LL);
  this->fields.isEquipSwap = 0;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5375,
    0.1,
    0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v6; // x11
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  WebViewObject_o *Component_WebViewObject; // x0

  if ( (byte_40FDE02 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5376, v4);
    byte_40FDE02 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v6 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v7 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !this->fields.isEquipSwap )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      UnityEngine_GameObject__SetActive(dragObject, 0, 0LL);
      if ( v7 )
      {
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    v7,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( Component_WebViewObject )
        {
          (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, float))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
            Component_WebViewObject,
            Component_WebViewObject->klass[1]._1.element_class,
            1.0);
          goto LABEL_16;
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !v7 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v7, 1, 0LL);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_32300096((PartyOrganizationListViewDropObject_o *)v7, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5376,
    0.1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
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
  PartyOrganizationUIDragDropListViewDrop_c *v19; // x0
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

  if ( (byte_40FDE01 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5377, v4);
    byte_40FDE01 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v6 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
  v19 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v37.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v19 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
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
  v30 = (System_Int32_array **)StringLiteral_5377;
  v22->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5377;
  sub_B16F98((BattleServantConfConponent_o *)&v22->fields.callWhenFinished, v30, v31, v32, v33, v34, v35, v36);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v7; // x11
  UnityEngine_Component_o *v8; // x20
  PartyOrganizationListViewDropObject_o *v9; // x0
  UnityEngine_GameObject_o *dragObject; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *dropObject; // x0
  WebViewObject_o *v13; // x0
  PartyOrganizationListViewDropObject_o *v14; // x0
  PartyOrganizationListViewDropObject_o **p_dropObject; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  PartyOrganizationListViewManager_o *monitor; // x0
  __int64 v23; // x10

  if ( (byte_40FDE09 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5375, v5);
    byte_40FDE09 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v7 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v8 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !this->fields.isEquipSwap )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      UnityEngine_GameObject__SetActive(dragObject, 0, 0LL);
      if ( v8 )
      {
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    v8,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( Component_WebViewObject )
        {
          (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, float))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
            Component_WebViewObject,
            Component_WebViewObject->klass[1]._1.element_class,
            1.0);
          dropObject = (UnityEngine_Component_o *)this->fields.dropObject;
          if ( dropObject )
          {
            v13 = UnityEngine_Component__GetComponent_WebViewObject_(
                    dropObject,
                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( v13 )
            {
              (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, float))&v13->klass[1]._1.this_arg.bits)(
                v13,
                v13->klass[1]._1.element_class,
                1.0);
              goto LABEL_19;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
  if ( !v8 )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v8, 1, 0LL);
  v9 = this->fields.dropObject;
  if ( !v9 )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp(v9, 1, 0LL);
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_32300096((PartyOrganizationListViewDropObject_o *)v8, 8, 0LL);
  p_dropObject = &this->fields.dropObject;
  v14 = this->fields.dropObject;
  if ( !v14 )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_32300096(v14, 7, 0LL);
  if ( !*p_dropObject )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_32300096(*p_dropObject, 8, 0LL);
  *p_dropObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dropObject, 0LL, v16, v17, v18, v19, v20, v21);
  monitor = (PartyOrganizationListViewManager_o *)v8[1].monitor;
  if ( !monitor )
    goto LABEL_25;
  v23 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v23
    || (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v23 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_25;
  }
  PartyOrganizationListViewManager__SetDispSwapGuide(monitor, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5375,
    0.1,
    0LL);
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
  __int64 v15; // x1
  struct ListViewObject_o *mListViewObject; // x0
  __int64 v17; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  PartyOrganizationListViewItem_o *v19; // x20
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  PartyOrganizationListViewItem_o *v24; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  _BOOL4 v27; // w24
  _BOOL4 IsRarityRestriction; // w22
  clsQuestCheck_o *v29; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  clsQuestCheck_o *v31; // x22
  __int64 v32; // x24
  __int64 v33; // x25
  int32_t v34; // w0
  int32_t v35; // w24
  int32_t Rarity; // w0
  int32_t v37; // w25
  PartyOrganizationUtility_o *v38; // x0
  const MethodInfo *v39; // x7
  clsQuestCheck_o *v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  clsQuestCheck_o *v42; // x24
  int32_t v43; // w0
  int32_t v44; // w25
  int32_t v45; // w26
  PartyOrganizationUtility_o *v46; // x0
  const MethodInfo *v47; // x7
  System_Text_StringBuilder_o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Text_StringBuilder_o *v53; // x26
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  _BOOL4 v58; // w27
  clsQuestCheck_o *v59; // x0
  struct UserServantEntity_o *v60; // x8
  System_Text_StringBuilder_o *v61; // x22
  ServantEntity_o *servantEntity; // x28
  __int64 v63; // x25
  __int64 v64; // x26
  int32_t v65; // w0
  System_String_o *Name; // x0
  System_String_o *v67; // x28
  int32_t v68; // w0
  int32_t v69; // w25
  System_String_o *EquipName; // x0
  const MethodInfo *v71; // x7
  System_String_o *RarityInvalidMessage; // x0
  _BOOL4 v73; // w27
  clsQuestCheck_o *v74; // x0
  struct UserServantEntity_o *v75; // x8
  System_Text_StringBuilder_o *v76; // x22
  ServantEntity_o *v77; // x28
  __int64 v78; // x25
  __int64 v79; // x26
  int32_t v80; // w0
  System_String_o *v81; // x0
  System_String_o *v82; // x28
  int32_t v83; // w0
  int32_t v84; // w25
  System_String_o *v85; // x0
  const MethodInfo *v86; // x7
  System_String_o *v87; // x1
  int32_t v88; // w27
  int32_t v89; // w25
  int32_t v90; // w27
  int32_t v91; // w28
  int32_t v92; // w27
  Il2CppObject *v93; // x1
  System_Text_StringBuilder_o *v94; // x0
  float v95; // s8
  int32_t windowHeight; // w25
  float v97; // s9
  System_String_o *v98; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v100; // x21
  System_String_o *v101; // x22
  System_String_o *v102; // x23
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  CommonConfirmDialog_ClickDelegate_o *v107; // x24
  clsQuestCheck_o *v108; // [xsp+40h] [xbp-90h]
  clsQuestCheck_o *v109; // [xsp+40h] [xbp-90h]
  System_Text_StringBuilder_o *v110; // [xsp+48h] [xbp-88h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-80h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-78h] BYREF
  System_String_o *v113; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_40FDE07 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&System_Math_TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    sub_B16FFC(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v10);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_10175, v12);
    sub_B16FFC(&StringLiteral_3255, v13);
    sub_B16FFC(&StringLiteral_3258, v14);
    sub_B16FFC(&StringLiteral_1, v15);
    byte_40FDE07 = 1;
  }
  v113 = 0LL;
  skillName = 0LL;
  *(_QWORD *)maxLength = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_101;
  v17 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v17 )
    goto LABEL_101;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v17 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_101;
  Item = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)mListViewObject, 0LL);
  if ( !this->fields.dropObject )
    goto LABEL_101;
  v19 = Item;
  v24 = PartyOrganizationListViewDropObject__GetItem(this->fields.dropObject, 0LL);
  *(_QWORD *)actMaxRarity = 0LL;
  v113 = (System_String_o *)StringLiteral_1;
  skillName = (System_String_o *)StringLiteral_1;
  if ( !this->fields.isEquipSwap )
  {
    v27 = 0;
    IsRarityRestriction = 0;
LABEL_12:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, v20);
      return;
    }
    goto LABEL_29;
  }
  if ( !v19 )
    goto LABEL_101;
  questRestrictionInfo = v19->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    eventId = questRestrictionInfo->fields.eventId;
  else
    eventId = -1;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v29 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v19->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_101;
  v31 = v29;
  v33 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v115.fields.currentCryptoKey = v33;
  *(_QWORD *)&v115.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v115, 0LL);
  if ( !v19->fields.userServantEntity )
    goto LABEL_101;
  v35 = v34;
  Rarity = UserServantEntity__getRarity(v19->fields.userServantEntity, 0LL);
  if ( !v24 )
    goto LABEL_101;
  v37 = Rarity;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v24, 0LL);
  v38 = (PartyOrganizationUtility_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                        EquipSvtId,
                                        0LL);
  if ( !v31 )
    goto LABEL_101;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          v38,
                          &skillName,
                          &actMaxRarity[1],
                          v35,
                          v37,
                          (int32_t)v38,
                          eventId,
                          v39);
  v40 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v24->fields.userServantEntity;
  if ( !v41 )
    goto LABEL_101;
  v42 = v40;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41[5], 0LL);
  if ( !v24->fields.userServantEntity )
    goto LABEL_101;
  v44 = v43;
  v45 = UserServantEntity__getRarity(v24->fields.userServantEntity, 0LL);
  v117 = PartyOrganizationListViewItem__get_EquipSvtId(v19, 0LL);
  v46 = (PartyOrganizationUtility_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v117, 0LL);
  if ( !v42 )
    goto LABEL_101;
  v27 = PartyOrganizationUtility__IsRarityRestriction(v46, &v113, actMaxRarity, v44, v45, (int32_t)v46, eventId, v47);
  if ( !v27 )
    goto LABEL_12;
LABEL_29:
  v48 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v20, v21, v22, v23);
  System_Text_StringBuilder___ctor(v48, 0LL);
  v53 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v49, v50, v51, v52);
  System_Text_StringBuilder___ctor(v53, 0LL);
  v110 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v54, v55, v56, v57);
  System_Text_StringBuilder___ctor(v110, 0LL);
  *(_QWORD *)maxLength = 0LL;
  if ( IsRarityRestriction )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v58 = IsRarityRestriction;
    v59 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v19 )
      goto LABEL_101;
    v60 = v19->fields.userServantEntity;
    v108 = v59;
    if ( !v60 )
      goto LABEL_101;
    v61 = v53;
    servantEntity = v19->fields.servantEntity;
    v64 = *(_QWORD *)&v60->fields.limitCount.fields.currentCryptoKey;
    v63 = *(_QWORD *)&v60->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v118.fields.currentCryptoKey = v64;
    *(_QWORD *)&v118.fields.fakeValue = v63;
    v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v118, 0LL);
    if ( !servantEntity )
      goto LABEL_101;
    Name = ServantEntity__getName(servantEntity, v65, -1, 0LL);
    if ( !v19->fields.userServantEntity )
      goto LABEL_101;
    v67 = Name;
    v53 = v61;
    v68 = UserServantEntity__getRarity(v19->fields.userServantEntity, 0LL);
    if ( !v24 )
      goto LABEL_101;
    v69 = v68;
    IsRarityRestriction = v58;
    EquipName = PartyOrganizationListViewItem__get_EquipName(v24, 0LL);
    if ( !v108 )
      goto LABEL_101;
    RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                             (PartyOrganizationUtility_o *)EquipName,
                             &maxLength[1],
                             v67,
                             v69,
                             EquipName,
                             skillName,
                             actMaxRarity[1],
                             v71);
    if ( !v53 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_41914240(v53, RarityInvalidMessage, 0LL);
  }
  if ( v27 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v73 = IsRarityRestriction;
    v74 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v24 )
      goto LABEL_101;
    v75 = v24->fields.userServantEntity;
    v109 = v74;
    if ( !v75 )
      goto LABEL_101;
    v76 = v53;
    v77 = v24->fields.servantEntity;
    v79 = *(_QWORD *)&v75->fields.limitCount.fields.currentCryptoKey;
    v78 = *(_QWORD *)&v75->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v119.fields.currentCryptoKey = v79;
    *(_QWORD *)&v119.fields.fakeValue = v78;
    v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v119, 0LL);
    if ( !v77 )
      goto LABEL_101;
    v81 = ServantEntity__getName(v77, v80, -1, 0LL);
    if ( !v24->fields.userServantEntity )
      goto LABEL_101;
    v82 = v81;
    v53 = v76;
    v83 = UserServantEntity__getRarity(v24->fields.userServantEntity, 0LL);
    if ( !v19 )
      goto LABEL_101;
    v84 = v83;
    IsRarityRestriction = v73;
    v85 = PartyOrganizationListViewItem__get_EquipName(v19, 0LL);
    if ( !v109 )
      goto LABEL_101;
    v87 = PartyOrganizationUtility__GetRarityInvalidMessage(
            (PartyOrganizationUtility_o *)v85,
            maxLength,
            v82,
            v84,
            v85,
            v113,
            actMaxRarity[0],
            v86);
    if ( !v110 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_41914240(v110, v87, 0LL);
    v88 = maxLength[0];
  }
  else
  {
    v88 = 0;
  }
  v89 = maxLength[1];
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v90 = System_Math__Max_44463768(v89, v88, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  if ( !SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__) )
    goto LABEL_101;
  if ( v90 > 43 )
  {
    v91 = 0;
    v92 = 16;
    if ( !v19 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v90 > 41 )
  {
    v92 = 17;
    v91 = 17;
    if ( !v19 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v90 > 37 )
  {
    v92 = 18;
    v91 = 18;
    if ( !v19 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v90 <= 34 )
  {
    if ( v90 <= 31 )
      v92 = 24;
    else
      v92 = 22;
    v91 = v92;
    if ( v19 )
      goto LABEL_69;
LABEL_101:
    sub_B170D4();
  }
  v92 = 20;
  v91 = 20;
  if ( !v19 )
    goto LABEL_101;
LABEL_69:
  if ( !v24 || !v48 )
    goto LABEL_101;
  if ( v19->fields.index >= v24->fields.index )
  {
    System_Text_StringBuilder__Append_41918000(v48, (Il2CppObject *)v110, 0LL);
    v94 = v48;
    v93 = (Il2CppObject *)v53;
  }
  else
  {
    System_Text_StringBuilder__Append_41918000(v48, (Il2CppObject *)v53, 0LL);
    v93 = (Il2CppObject *)v110;
    v94 = v48;
  }
  System_Text_StringBuilder__Append_41918000(v94, v93, 0LL);
  v95 = v27 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v27 && IsRarityRestriction ? 520 : 480;
  v97 = v27 && IsRarityRestriction ? 40.0 : 30.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_10175, 0LL);
  System_Text_StringBuilder__Append_41914240(v48, v98, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v100 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v48->klass->vtable._3_ToString.method)(
                              v48,
                              v48->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
  v107 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v103,
                                                  v104,
                                                  v105,
                                                  v106);
  CommonConfirmDialog_ClickDelegate___ctor(
    v107,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0LL);
  if ( !Instance )
    goto LABEL_101;
  CommonUI__OpenConfirmDialog_18237500(
    Instance,
    (System_String_o *)StringLiteral_1,
    v100,
    v101,
    v102,
    v107,
    v92,
    v91,
    v97,
    728,
    2,
    windowHeight,
    v95,
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o **p_dropObject; // x20
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v15; // x11
  UnityEngine_Component_o *v16; // x21
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v20; // x22
  UnityEngine_Transform_o *v21; // x0
  int v22; // s0
  UnityEngine_GameObject_o *v25; // x22
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewDrop_c *v28; // x0
  float z; // s10
  TweenPosition_o *v30; // x0
  UnityEngine_Transform_o *v31; // x0
  PartyOrganizationListViewDropObject_o *dropObject; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_o *v37; // x23
  UnityEngine_Transform_o *v38; // x0
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s4
  float v43; // s5
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v46; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FDE06 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, ddo);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v10);
    sub_B16FFC(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, v11);
    sub_B16FFC(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v12);
    byte_40FDE06 = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = (UnityEngine_Component_o **)&this->fields.dropObject;
  sub_B16F98(
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
    && (v15 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v15 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v16 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_26;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_26;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !*p_dropObject )
    goto LABEL_26;
  v20 = parent;
  v21 = UnityEngine_Component__get_transform(*p_dropObject, 0LL);
  if ( !v21 )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(v21, 0LL);
  if ( !v20 )
    goto LABEL_26;
  v44 = UnityEngine_Transform__InverseTransformPoint(v20, *(UnityEngine_Vector3_o *)&v22, 0LL);
  v25 = this->fields.dragObject;
  x = v44.fields.x;
  y = v44.fields.y;
  v28 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v44.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v28 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  v30 = TweenPosition__Begin(v25, v28->static_fields->ACTION_TIME, v45, 0LL);
  if ( !v30 )
    goto LABEL_26;
  v30->fields.style = 3;
  if ( !v16 )
    goto LABEL_26;
  v31 = UnityEngine_Component__get_transform(v16, 0LL);
  if ( !v31 )
    goto LABEL_26;
  UnityEngine_Transform__get_position(v31, 0LL);
  dropObject = this->fields.dropObject;
  v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0LL);
  v38 = UnityEngine_Component__get_transform(v16, 0LL);
  if ( !v38 )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_position(v38, 0LL);
  if ( !dropObject )
    goto LABEL_26;
  v42 = v40;
  v43 = v41;
  v46.fields.x = v39;
  v46.fields.y = v42;
  v46.fields.z = v43;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v37, 0.0, v46, this->fields.isEquipSwap, 0LL);
  if ( this->fields.isEquipSwap )
  {
    if ( *p_dropObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)*p_dropObject, 0, 0LL);
      return;
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v6; // x10
  PartyOrganizationListViewItem_o *Item; // x0
  PartyOrganizationListViewItem_o *v8; // x21
  PartyOrganizationListViewItem_o *v9; // x0
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x12
  PartyOrganizationListViewManager_o *v12; // x22
  struct ListViewManager_o *v13; // x24
  int v14; // w9
  PartyOrganizationListViewDropObject_o *v15; // x23
  __int64 v16; // x11
  PartyOrganizationListViewDropObject_o *dropObject; // x0
  PartyOrganizationListViewDropObject_o *v18; // x0

  if ( (byte_40FDE08 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5378, v4);
    byte_40FDE08 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_43;
  v6 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    goto LABEL_43;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_43;
  Item = PartyOrganizationListViewDropObject__GetItem(
           (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject,
           0LL);
  if ( !this->fields.dropObject )
    goto LABEL_43;
  v8 = Item;
  v9 = PartyOrganizationListViewDropObject__GetItem(this->fields.dropObject, 0LL);
  manager = mListViewObject->fields.manager;
  if ( manager )
  {
    v11 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
    {
      if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v12 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v13 = 0LL;
    if ( this->fields.isEquipSwap )
      v14 = 0;
    else
      v14 = 2;
    if ( this->fields.isEquipSwap )
      v15 = 0LL;
    else
      v15 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !this->fields.isEquipSwap )
    {
      v16 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
      {
        if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v16 - 1] == PartyOrganizationListViewManager_TypeInfo )
          v13 = mListViewObject->fields.manager;
        else
          v13 = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      v14 = 2;
      v15 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    }
    if ( !v9 )
      goto LABEL_43;
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( this->fields.isEquipSwap )
      v14 = 0;
    else
      v14 = 2;
    if ( this->fields.isEquipSwap )
      v15 = 0LL;
    else
      v15 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !v9 )
      goto LABEL_43;
  }
  if ( v14 )
  {
    PartyOrganizationListViewItem__Swap(v9, v8, 0, 0LL);
    v12 = (PartyOrganizationListViewManager_o *)v13;
    if ( !v13 )
      goto LABEL_43;
  }
  else
  {
    PartyOrganizationListViewItem__SwapEquip(v9, v8, 0LL);
    v15 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !v12 )
      goto LABEL_43;
  }
  PartyOrganizationListViewManager__ModifyItem(v12, 0LL);
  if ( !v15
    || (PartyOrganizationListViewDropObject__GetItem(v15, 0LL), (dropObject = this->fields.dropObject) == 0LL)
    || (PartyOrganizationListViewDropObject__GetItem(dropObject, 0LL),
        PartyOrganizationListViewDropObject__Init_32300096(v15, 9, 0LL),
        (v18 = this->fields.dropObject) == 0LL) )
  {
LABEL_43:
    sub_B170D4();
  }
  PartyOrganizationListViewDropObject__Init_32300096(v18, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5378,
    0.1,
    0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 v15; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v17; // x11
  PartyOrganizationListViewManager_o *v18; // x23
  PartyOrganizationListViewItem_o *Item; // x22
  bool v20; // w0
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x26
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  ListViewDropInfo_o *v29; // x25
  UnityEngine_Object_o *klass; // x23
  const MethodInfo *v31; // x1
  PartyOrganizationListViewItem_o *v32; // x0
  const MethodInfo *v33; // x2
  PartyOrganizationListViewItem_o *v34; // x24
  const MethodInfo *v35; // x1

  if ( (byte_40FDDFF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, surface);
    sub_B16FFC(&ListViewDropInfo_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, v13);
    byte_40FDDFF = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B16F98(
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
  v15 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v15 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_43;
  }
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v17 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v17 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v18 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v18 = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  Item = PartyOrganizationListViewDropObject__GetItem(
           (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject,
           0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !Item || !v20 )
    goto LABEL_35;
  if ( !surface )
    goto LABEL_43;
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
  v23 = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !v23 )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
  v29 = (ListViewDropInfo_o *)sub_B170CC(ListViewDropInfo_TypeInfo, v25, v26, v27, v28);
  ListViewDropInfo___ctor(v29, gameObject, surface, 0LL);
  if ( !v18 )
    goto LABEL_43;
  if ( !PartyOrganizationListViewManager__IsDropDropSurface(v18, v29, 0LL) )
    goto LABEL_35;
  if ( !Component_srcLineSprite )
    goto LABEL_43;
  klass = (UnityEngine_Object_o *)Component_srcLineSprite[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v31);
    return;
  }
  if ( !klass )
LABEL_43:
    sub_B170D4();
  v32 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v32 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
    PartyOrganizationListViewDropObject__Init_32300096((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
      mListViewObject,
      0LL,
      mListViewObject->klass->vtable._6_SetItem.methodPtr);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
      klass,
      Item,
      klass->klass[1]._1.byval_arg.data);
    PartyOrganizationListViewDropObject__Init_32300096((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v35);
    return;
  }
  v34 = v32;
  if ( v32 == Item )
  {
LABEL_35:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v21);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_34:
    if ( !v34->fields.isFollower && v34->fields.userServantEntity )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v32, 0LL) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_42:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)klass, v33);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UICamera_c *v12; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  UnityEngine_Component_o *mListViewObject; // x19
  __int64 v16; // x10
  int klass_low; // w10
  PartyOrganizationListViewManager_o *monitor; // x8
  __int64 v19; // x12
  PartyOrganizationListViewManager_o *v20; // x20
  __int64 v21; // x11
  WebViewObject_o *Component_WebViewObject; // x0
  void *v23; // x0

  if ( (byte_40FDDFE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B16FFC(&PartyOrganizationListViewManager_TypeInfo, v4);
    sub_B16FFC(&UICamera_TypeInfo, v5);
    byte_40FDDFE = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  this->fields.isDrag = 1;
  v12 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v12 = UICamera_TypeInfo;
  }
  currentTouch = v12->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_33;
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.surface,
      (System_Int32_array **)dragged,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_33;
  v16 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v16 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_33;
  }
  klass_low = LOBYTE(mListViewObject[7].klass);
  monitor = (PartyOrganizationListViewManager_o *)mListViewObject[1].monitor;
  this->fields.isEquipSwap = klass_low;
  if ( !monitor
    || (v19 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v19) )
  {
    v20 = 0LL;
    if ( klass_low )
      goto LABEL_17;
    goto LABEL_23;
  }
  if ( (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v19 - 1] == PartyOrganizationListViewManager_TypeInfo )
    v20 = monitor;
  else
    v20 = 0LL;
  if ( !klass_low )
  {
LABEL_23:
    if ( monitor
      && (v21 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&monitor->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
    {
      if ( (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v21 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v20 = monitor;
      else
        v20 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                mListViewObject,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( Component_WebViewObject )
    {
      (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *, float))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
        Component_WebViewObject,
        Component_WebViewObject->klass[1]._1.element_class,
        0.0);
      if ( v20 )
        goto LABEL_31;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_17:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  if ( !v20 )
    goto LABEL_33;
LABEL_31:
  PartyOrganizationListViewManager__SetDispSwapGuide(v20, 0, 0LL);
  v23 = mListViewObject[1].monitor;
  if ( !v23 )
    goto LABEL_33;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v23 + 424LL))(v23, *(_QWORD *)(*(_QWORD *)v23 + 432LL));
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__SetBaseTransform(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *listViewObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct ListViewObject_o *Component_WebViewObject; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  WebViewObject_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Component_o *v22; // x0
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_Collider_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40FDDFD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FDDFD = 1;
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
                                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mListViewObject,
    (System_Int32_array **)Component_WebViewObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v15 = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v15,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (v22 = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B170D4();
  }
  transform = UnityEngine_Component__get_transform(v22, 0LL);
  this->fields.mTrans = transform;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (struct UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mCollider,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_40FDDFC & 1) == 0 )
  {
    sub_B16FFC(&UICamera_TypeInfo, method);
    byte_40FDDFC = 1;
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
  __int64 v5; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FDE0B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&StringLiteral_5378, v5);
    byte_40FDE0B = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5378,
      0.1,
      0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}