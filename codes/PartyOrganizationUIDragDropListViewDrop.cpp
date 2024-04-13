void __fastcall PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC38C & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v1, v2, v3);
    byte_42EC38C = 1;
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
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationUIDragDropListViewDrop_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  PartyOrganizationListViewDropObject_o *mListViewObject; // x20
  __int64 v15; // x10
  __int64 v16; // x8
  __int64 v17; // x11
  UnityEngine_Object_o *v18; // x21

  v4 = this;
  if ( (byte_42EC387 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PartyOrganizationListViewObject_TypeInfo, v8, v9, v10);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B5D5C4(&StringLiteral_5471/*"DragEnd"*/, v11, v12, v13);
    byte_42EC387 = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_20;
  v15 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v15 )
    goto LABEL_20;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v15 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_20;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v4->fields.mListViewObject,
                                                        0LL);
  if ( !this )
    goto LABEL_20;
  v16 = *(_QWORD *)&this->fields.mTarget.fields.z;
  if ( v16
    && (v17 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) >= (unsigned int)v17) )
  {
    if ( *(PartyOrganizationListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v17 - 8) == PartyOrganizationListViewObject_TypeInfo )
      v18 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.z;
    else
      v18 = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v18 )
    {
      PartyOrganizationListViewObject__Init_19479152((PartyOrganizationListViewObject_o *)v18, 8, 0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_B5D69C(this, method);
  }
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_29750396(mListViewObject, 0, 0LL);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
    mListViewObject,
    0LL,
    mListViewObject->klass->vtable._6_SetItem.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5471/*"DragEnd"*/, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragDumpStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x20
  PartyOrganizationUIDragDropListViewDrop_c *v9; // x0
  float ACTION_TIME; // s8
  float g; // s5
  float b; // s6
  float a; // s7
  float v14; // s4
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v20; // s5
  float v21; // s3
  float v22; // s3
  UnityEngine_GameObject_o *v23; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o down; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_42EC386 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5470/*"DragDumpEnd"*/, v5, v6, v7);
    byte_42EC386 = 1;
  }
  dragObject = this->fields.dragObject;
  v9 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v9 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  ACTION_TIME = v9->static_fields->ACTION_TIME;
  clear = UnityEngine_Color__get_clear(0LL);
  g = clear.fields.g;
  b = clear.fields.b;
  a = clear.fields.a;
  clear.fields.g = clear.fields.r;
  clear.fields.b = g;
  clear.fields.a = b;
  v14 = a;
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
  v20 = down.fields.y * 50.0;
  v21 = down.fields.z * 50.0;
  down.fields.y = x + (float)(down.fields.x * 50.0);
  down.fields.z = y + v20;
  v22 = z + v21;
  transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                            this->fields.dragObject,
                                            PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
                                            *(UnityEngine_Vector3_o *)&down.fields.y,
                                            0LL);
  if ( !transform )
LABEL_11:
    sub_B5D69C(transform, v16);
  v23 = transform;
  LODWORD(transform[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v23[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v23[3], gameObject, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_5470/*"DragDumpEnd"*/;
  v23[3].monitor = (void *)StringLiteral_5470/*"DragDumpEnd"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v23[3].monitor, v31, v32, v33, v34, v35, v36, v37);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationUIDragDropListViewDrop_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v9; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  __int64 v11; // x10

  v4 = this;
  if ( (byte_42EC382 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, (_DWORD)method, v2, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B5D5C4(
                                                          &PartyOrganizationListViewManager_TypeInfo,
                                                          v5,
                                                          v6,
                                                          v7);
    byte_42EC382 = 1;
  }
  mListViewObject = v4->fields.mListViewObject;
  if ( !mListViewObject
    || (v9 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v9 - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0LL
    || (v11 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(PartyOrganizationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._9_SetSortKind.methodPtr);
  if ( v4->fields.isEquipSwap )
    PartyOrganizationListViewManager__EndSwapEquip(manager, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationUIDragDropListViewDrop_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PartyOrganizationUIDragDropListViewDrop_o **mListViewObject; // x20
  __int64 v12; // x10
  __int64 v13; // x10

  v4 = this;
  if ( (byte_42EC385 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewManager_TypeInfo, v5, v6, v7);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B5D5C4(&StringLiteral_5471/*"DragEnd"*/, v8, v9, v10);
    byte_42EC385 = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewDrop_o **)v4->fields.mListViewObject;
  if ( !mListViewObject
    || (v12 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        BYTE4((*mListViewObject)[1].fields.surface) < (unsigned int)v12)
    || *((PartyOrganizationListViewDropObject_c **)(*mListViewObject)[1].fields.mParent + v12 - 1) != PartyOrganizationListViewDropObject_TypeInfo
    || (this = mListViewObject[4]) == 0LL
    || (v13 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v13)
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v13 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B5D69C(this, method);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0LL);
  v4->fields.isEquipSwap = 0;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5471/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationUIDragDropListViewDrop_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v12; // x11
  UnityEngine_Component_o *v13; // x20

  v4 = this;
  if ( (byte_42EC384 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v5, v6, v7);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B5D5C4(&StringLiteral_5472/*"DragReturnEnd"*/, v8, v9, v10);
    byte_42EC384 = 1;
  }
  mListViewObject = v4->fields.mListViewObject;
  if ( mListViewObject
    && (v12 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v12 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v13 = (UnityEngine_Component_o *)v4->fields.mListViewObject;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v4->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v4->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v13 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v13,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B5D69C(this, method);
  }
  if ( !v13 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v13, 1, 0LL);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)v13, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5472/*"DragReturnEnd"*/, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
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
  PartyOrganizationUIDragDropListViewDrop_c *v22; // x0
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

  if ( (byte_42EC383 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5473/*"DragReturnMoveEnd"*/, v8, v9, v10);
    byte_42EC383 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (v12 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v12 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
  v22 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v39.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v22 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
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
  v32 = (System_Int32_array **)StringLiteral_5473/*"DragReturnMoveEnd"*/;
  v24[3].monitor = (void *)StringLiteral_5473/*"DragReturnMoveEnd"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v24[3].monitor, v32, v33, v34, v35, v36, v37, v38);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationUIDragDropListViewDrop_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v15; // x11
  struct ListViewObject_o *v16; // x20
  PartyOrganizationUIDragDropListViewDrop_o **p_dropObject; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x10

  v4 = this;
  if ( (byte_42EC38B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PartyOrganizationListViewManager_TypeInfo, v8, v9, v10);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B5D5C4(&StringLiteral_5471/*"DragEnd"*/, v11, v12, v13);
    byte_42EC38B = 1;
  }
  mListViewObject = v4->fields.mListViewObject;
  if ( mListViewObject
    && (v15 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v15 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v16 = v4->fields.mListViewObject;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v4->fields.isEquipSwap )
  {
    this = (PartyOrganizationUIDragDropListViewDrop_o *)v4->fields.dragObject;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v16 )
      {
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)v16,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(PartyOrganizationUIDragDropListViewDrop_o *, void *, float))this->klass->vtable._8_OnDragDropRelease.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          this = (PartyOrganizationUIDragDropListViewDrop_o *)v4->fields.dropObject;
          if ( this )
          {
            this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B5D69C(this, method);
  }
  if ( !v16 )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v16, 1, 0LL);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v4->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)this, 1, 0LL);
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)v16, 8, 0LL);
  p_dropObject = (PartyOrganizationUIDragDropListViewDrop_o **)&v4->fields.dropObject;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v4->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)this, 7, 0LL);
  this = *p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)this, 8, 0LL);
  *p_dropObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.dropObject, 0LL, v18, v19, v20, v21, v22, v23);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v16->fields.manager;
  if ( !this )
    goto LABEL_25;
  v24 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v24
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v24 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_25;
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5471/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  PartyOrganizationListViewDropObject_o *mListViewObject; // x0
  __int64 v45; // x10
  PartyOrganizationListViewItem_o *v46; // x20
  PartyOrganizationListViewItem_o *v47; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  _BOOL4 v50; // w24
  _BOOL4 IsRarityRestriction; // w22
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewDropObject_o *v53; // x22
  __int64 v54; // x24
  __int64 v55; // x25
  int32_t v56; // w24
  int32_t v57; // w25
  const MethodInfo *v58; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v59; // x8
  PartyOrganizationListViewDropObject_o *v60; // x24
  int32_t v61; // w25
  int32_t Rarity; // w26
  const MethodInfo *v63; // x7
  System_Text_StringBuilder_o *v64; // x23
  System_Text_StringBuilder_o *v65; // x26
  _BOOL4 v66; // w27
  struct UserServantEntity_o *v67; // x8
  System_Text_StringBuilder_o *v68; // x22
  ServantEntity_o *servantEntity; // x28
  __int64 v70; // x25
  __int64 v71; // x26
  System_String_o *v72; // x28
  int32_t v73; // w25
  const MethodInfo *v74; // x7
  _BOOL4 v75; // w27
  struct UserServantEntity_o *v76; // x8
  System_Text_StringBuilder_o *v77; // x22
  ServantEntity_o *v78; // x28
  __int64 v79; // x25
  __int64 v80; // x26
  System_String_o *v81; // x28
  int32_t v82; // w25
  const MethodInfo *v83; // x7
  int32_t v84; // w27
  int32_t v85; // w25
  int32_t v86; // w27
  int32_t v87; // w28
  int32_t v88; // w27
  Il2CppObject *v89; // x1
  System_Text_StringBuilder_o *v90; // x0
  float v91; // s8
  int32_t windowHeight; // w25
  float v93; // s9
  System_String_o *v94; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v96; // x21
  System_String_o *v97; // x22
  System_String_o *v98; // x23
  CommonConfirmDialog_ClickDelegate_o *v99; // x24
  PartyOrganizationListViewDropObject_o *v100; // [xsp+40h] [xbp-90h]
  PartyOrganizationListViewDropObject_o *v101; // [xsp+40h] [xbp-90h]
  System_Text_StringBuilder_o *v102; // [xsp+48h] [xbp-88h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-80h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-78h] BYREF
  System_String_o *v105; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  if ( (byte_42EC389 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Math_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_1/*""*/, v41, v42, v43);
    byte_42EC389 = 1;
  }
  v105 = 0LL;
  skillName = 0LL;
  *(_QWORD *)maxLength = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_101;
  v45 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v45 )
    goto LABEL_101;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v45 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_101;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               mListViewObject,
                                                               0LL);
  if ( !this->fields.dropObject )
    goto LABEL_101;
  v46 = (PartyOrganizationListViewItem_o *)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               this->fields.dropObject,
                                                               0LL);
  v47 = (PartyOrganizationListViewItem_o *)mListViewObject;
  *(_QWORD *)actMaxRarity = 0LL;
  v105 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isEquipSwap )
  {
    v50 = 0;
    IsRarityRestriction = 0;
LABEL_12:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, method);
      return;
    }
    goto LABEL_29;
  }
  if ( !v46 )
    goto LABEL_101;
  questRestrictionInfo = v46->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    eventId = questRestrictionInfo->fields.eventId;
  else
    eventId = -1;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v46->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_101;
  v53 = mListViewObject;
  v55 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v107.fields.currentCryptoKey = v55;
  *(_QWORD *)&v107.fields.fakeValue = v54;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v107,
                                                               0LL);
  if ( !v46->fields.userServantEntity )
    goto LABEL_101;
  v56 = (int)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                               v46->fields.userServantEntity,
                                                               0LL);
  if ( !v47 )
    goto LABEL_101;
  v57 = (int)mListViewObject;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v47, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               EquipSvtId,
                                                               0LL);
  if ( !v53 )
    goto LABEL_101;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          (PartyOrganizationUtility_o *)mListViewObject,
                          &skillName,
                          &actMaxRarity[1],
                          v56,
                          v57,
                          (int32_t)mListViewObject,
                          eventId,
                          v58);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v59 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v47->fields.userServantEntity;
  if ( !v59 )
    goto LABEL_101;
  v60 = mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v59[5],
                                                               0LL);
  if ( !v47->fields.userServantEntity )
    goto LABEL_101;
  v61 = (int)mListViewObject;
  Rarity = UserServantEntity__getRarity(v47->fields.userServantEntity, 0LL);
  v109 = PartyOrganizationListViewItem__get_EquipSvtId(v46, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v109,
                                                               0LL);
  if ( !v60 )
    goto LABEL_101;
  v50 = PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)mListViewObject,
          &v105,
          actMaxRarity,
          v61,
          Rarity,
          (int32_t)mListViewObject,
          eventId,
          v63);
  if ( !v50 )
    goto LABEL_12;
LABEL_29:
  v64 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v64, 0LL);
  v65 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v65, 0LL);
  v102 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v102, 0LL);
  *(_QWORD *)maxLength = 0LL;
  if ( IsRarityRestriction )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v66 = IsRarityRestriction;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v46 )
      goto LABEL_101;
    v67 = v46->fields.userServantEntity;
    v100 = mListViewObject;
    if ( !v67 )
      goto LABEL_101;
    v68 = v65;
    servantEntity = v46->fields.servantEntity;
    v71 = *(_QWORD *)&v67->fields.limitCount.fields.currentCryptoKey;
    v70 = *(_QWORD *)&v67->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v110.fields.currentCryptoKey = v71;
    *(_QWORD *)&v110.fields.fakeValue = v70;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                 v110,
                                                                 0LL);
    if ( !servantEntity )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 servantEntity,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v46->fields.userServantEntity )
      goto LABEL_101;
    v72 = (System_String_o *)mListViewObject;
    v65 = v68;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v46->fields.userServantEntity,
                                                                 0LL);
    if ( !v47 )
      goto LABEL_101;
    v73 = (int)mListViewObject;
    IsRarityRestriction = v66;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v47, 0LL);
    if ( !v100 )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v72,
                                                                 v73,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v74);
    if ( !v65 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_42953744(v65, (System_String_o *)mListViewObject, 0LL);
  }
  if ( v50 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v75 = IsRarityRestriction;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v47 )
      goto LABEL_101;
    v76 = v47->fields.userServantEntity;
    v101 = mListViewObject;
    if ( !v76 )
      goto LABEL_101;
    v77 = v65;
    v78 = v47->fields.servantEntity;
    v80 = *(_QWORD *)&v76->fields.limitCount.fields.currentCryptoKey;
    v79 = *(_QWORD *)&v76->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v111.fields.currentCryptoKey = v80;
    *(_QWORD *)&v111.fields.fakeValue = v79;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                 v111,
                                                                 0LL);
    if ( !v78 )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 v78,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v47->fields.userServantEntity )
      goto LABEL_101;
    v81 = (System_String_o *)mListViewObject;
    v65 = v77;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v47->fields.userServantEntity,
                                                                 0LL);
    if ( !v46 )
      goto LABEL_101;
    v82 = (int)mListViewObject;
    IsRarityRestriction = v75;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v46, 0LL);
    if ( !v101 )
      goto LABEL_101;
    method = (const MethodInfo *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                   (PartyOrganizationUtility_o *)mListViewObject,
                                   maxLength,
                                   v81,
                                   v82,
                                   (System_String_o *)mListViewObject,
                                   v105,
                                   actMaxRarity[0],
                                   v83);
    mListViewObject = (PartyOrganizationListViewDropObject_o *)v102;
    if ( !v102 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_42953744(v102, (System_String_o *)method, 0LL);
    v84 = maxLength[0];
  }
  else
  {
    v84 = 0;
  }
  v85 = maxLength[1];
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v86 = System_Math__Max_45149472(v85, v84, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_101;
  if ( v86 > 43 )
  {
    v87 = 0;
    v88 = 16;
    if ( !v46 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v86 > 41 )
  {
    v88 = 17;
    v87 = 17;
    if ( !v46 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v86 > 37 )
  {
    v88 = 18;
    v87 = 18;
    if ( !v46 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v86 <= 34 )
  {
    if ( v86 <= 31 )
      v88 = 24;
    else
      v88 = 22;
    v87 = v88;
    if ( v46 )
      goto LABEL_69;
LABEL_101:
    sub_B5D69C(mListViewObject, method);
  }
  v88 = 20;
  v87 = 20;
  if ( !v46 )
    goto LABEL_101;
LABEL_69:
  if ( !v47 || !v64 )
    goto LABEL_101;
  if ( v46->fields.index >= v47->fields.index )
  {
    System_Text_StringBuilder__Append_42957504(v64, (Il2CppObject *)v102, 0LL);
    v90 = v64;
    v89 = (Il2CppObject *)v65;
  }
  else
  {
    System_Text_StringBuilder__Append_42957504(v64, (Il2CppObject *)v65, 0LL);
    v89 = (Il2CppObject *)v102;
    v90 = v64;
  }
  System_Text_StringBuilder__Append_42957504(v90, v89, 0LL);
  v91 = v50 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v50 && IsRarityRestriction ? 520 : 480;
  v93 = v50 && IsRarityRestriction ? 40.0 : 30.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
  System_Text_StringBuilder__Append_42953744(v64, v94, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v96 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v64->klass->vtable._3_ToString.method)(
                             v64,
                             v64->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
  v99 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v99,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0LL);
  if ( !Instance )
    goto LABEL_101;
  CommonUI__OpenConfirmDialog_18202048(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v96,
    v97,
    v98,
    v99,
    v88,
    v87,
    v93,
    728,
    2,
    windowHeight,
    v91,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Component_o **p_dropObject; // x20
  __int64 v20; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v22; // x11
  UnityEngine_Component_o *v23; // x21
  UnityEngine_Component_o *dragObject; // x0
  UnityEngine_Transform_o *v25; // x22
  int v26; // s0
  UnityEngine_GameObject_o *v29; // x22
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewDrop_c *v32; // x0
  float z; // s10
  PartyOrganizationListViewDropObject_o *dropObject; // x22
  System_Action_o *v35; // x23
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s4
  float v40; // s5
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v43; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EC388 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)ddo, (_DWORD)method, v3);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, v13, v14, v15);
    sub_B5D5C4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v16, v17, v18);
    byte_42EC388 = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = (UnityEngine_Component_o **)&this->fields.dropObject;
  sub_B5D560(
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
    && (v22 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v22) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v22 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v23 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v23 = 0LL;
  }
  else
  {
    v23 = 0LL;
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
  v25 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_dropObject, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v25 )
    goto LABEL_26;
  v41 = UnityEngine_Transform__InverseTransformPoint(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  v29 = this->fields.dragObject;
  x = v41.fields.x;
  y = v41.fields.y;
  v32 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v41.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v32 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v42.fields.x = x;
  v42.fields.y = y;
  v42.fields.z = z;
  dragObject = (UnityEngine_Component_o *)TweenPosition__Begin(v29, v32->static_fields->ACTION_TIME, v42, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  LODWORD(dragObject[1].klass) = 3;
  if ( !v23 )
    goto LABEL_26;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v23, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  dropObject = this->fields.dropObject;
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0LL);
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v23, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !dropObject )
    goto LABEL_26;
  v39 = v37;
  v40 = v38;
  v43.fields.x = v36;
  v43.fields.y = v39;
  v43.fields.z = v40;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v35, 0.0, v43, this->fields.isEquipSwap, 0LL);
  if ( this->fields.isEquipSwap )
  {
    dragObject = *p_dropObject;
    if ( *p_dropObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0LL);
      return;
    }
LABEL_26:
    sub_B5D69C(dragObject, v20);
  }
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationUIDragDropListViewDrop_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v12; // x10
  PartyOrganizationListViewItem_o *v13; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v15; // x12
  PartyOrganizationListViewManager_o *v16; // x22
  PartyOrganizationListViewManager_o *v17; // x24
  int v18; // w9
  PartyOrganizationListViewDropObject_o *v19; // x23
  __int64 v20; // x11

  v4 = this;
  if ( (byte_42EC38A & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewManager_TypeInfo, v5, v6, v7);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B5D5C4(&StringLiteral_5474/*"DragSwapEnd"*/, v8, v9, v10);
    byte_42EC38A = 1;
  }
  mListViewObject = v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_43;
  v12 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v12 )
    goto LABEL_43;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v12 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_43;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v4->fields.mListViewObject,
                                                        0LL);
  if ( !v4->fields.dropObject )
    goto LABEL_43;
  v13 = (PartyOrganizationListViewItem_o *)this;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        v4->fields.dropObject,
                                                        0LL);
  manager = mListViewObject->fields.manager;
  if ( manager )
  {
    v15 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
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
    v17 = 0LL;
    if ( v4->fields.isEquipSwap )
      v18 = 0;
    else
      v18 = 2;
    if ( v4->fields.isEquipSwap )
      v19 = 0LL;
    else
      v19 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !v4->fields.isEquipSwap )
    {
      v20 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v20 )
      {
        if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v20 - 1] == PartyOrganizationListViewManager_TypeInfo )
          v17 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      v18 = 2;
      v19 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    }
    if ( !this )
      goto LABEL_43;
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
    if ( v4->fields.isEquipSwap )
      v18 = 0;
    else
      v18 = 2;
    if ( v4->fields.isEquipSwap )
      v19 = 0LL;
    else
      v19 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !this )
      goto LABEL_43;
  }
  if ( v18 )
  {
    PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, v13, 0, 0LL);
    v16 = v17;
    if ( !v17 )
      goto LABEL_43;
  }
  else
  {
    PartyOrganizationListViewItem__SwapEquip((PartyOrganizationListViewItem_o *)this, v13, 0LL);
    v19 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !v16 )
      goto LABEL_43;
  }
  PartyOrganizationListViewManager__ModifyItem(v16, 0LL);
  if ( !v19
    || (PartyOrganizationListViewDropObject__GetItem(v19, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v4->fields.dropObject) == 0LL)
    || (PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)this, 0LL),
        PartyOrganizationListViewDropObject__Init_29750396(v19, 9, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v4->fields.dropObject) == 0LL) )
  {
LABEL_43:
    sub_B5D69C(this, method);
  }
  PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)this, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_5474/*"DragSwapEnd"*/, 0.1, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct ListViewObject_o *IsDropDropSurface; // x0
  const MethodInfo *v23; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 v25; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v27; // x11
  PartyOrganizationListViewManager_o *v28; // x23
  PartyOrganizationListViewItem_o *Item; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v32; // x25
  UnityEngine_Object_o *klass; // x23
  PartyOrganizationListViewItem_o *v34; // x0
  const MethodInfo *v35; // x2
  PartyOrganizationListViewItem_o *v36; // x24
  const MethodInfo *v37; // x1

  if ( (byte_42EC381 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___,
      (_DWORD)surface,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&ListViewDropInfo_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&PartyOrganizationListViewManager_TypeInfo, v19, v20, v21);
    byte_42EC381 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B5D560(
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
  v25 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v25 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_43;
  }
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v27 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v27 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v28 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
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
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
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
  v32 = (ListViewDropInfo_o *)sub_B5D694(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v32, gameObject, surface, 0LL);
  if ( !v28 )
    goto LABEL_43;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(v28, v32, 0LL);
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
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v23);
    return;
  }
  if ( !klass )
LABEL_43:
    sub_B5D69C(IsDropDropSurface, v23);
  v34 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v34 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
    PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
      mListViewObject,
      0LL,
      mListViewObject->klass->vtable._6_SetItem.methodPtr);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
      klass,
      Item,
      klass->klass[1]._1.byval_arg.data);
    PartyOrganizationListViewDropObject__Init_29750396((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v37);
    return;
  }
  v36 = v34;
  if ( v34 == Item )
  {
LABEL_35:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v23);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_34:
    if ( !v36->fields.isFollower && v36->fields.userServantEntity )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v34, 0LL) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_42:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)klass, v35);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  UnityEngine_Component_o *mListViewObject; // x19
  __int64 v25; // x10
  int klass_low; // w10
  PartyOrganizationListViewManager_o *monitor; // x8
  __int64 v28; // x12
  PartyOrganizationListViewManager_o *v29; // x20
  __int64 v30; // x11

  if ( (byte_42EC380 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewDropObject_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PartyOrganizationListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UICamera_TypeInfo, v11, v12, v13);
    byte_42EC380 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.surface,
      (System_Int32_array **)dragged,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_33;
  v25 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v25 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_33;
  }
  klass_low = LOBYTE(mListViewObject[7].klass);
  monitor = (PartyOrganizationListViewManager_o *)mListViewObject[1].monitor;
  this->fields.isEquipSwap = klass_low;
  if ( !monitor
    || (v28 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v28) )
  {
    v29 = 0LL;
    if ( klass_low )
      goto LABEL_17;
    goto LABEL_23;
  }
  if ( (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v28 - 1] == PartyOrganizationListViewManager_TypeInfo )
    v29 = monitor;
  else
    v29 = 0LL;
  if ( !klass_low )
  {
LABEL_23:
    if ( monitor
      && (v30 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&monitor->klass->_2.bitflags2 + 1) >= (unsigned int)v30) )
    {
      if ( (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v30 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v29 = monitor;
      else
        v29 = 0LL;
    }
    else
    {
      v29 = 0LL;
    }
    p_image = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( p_image )
    {
      p_image = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, float))(*p_image + 440LL))(
                            p_image,
                            *(_QWORD *)(*p_image + 448LL),
                            0.0);
      if ( v29 )
        goto LABEL_31;
    }
LABEL_33:
    sub_B5D69C(p_image, v14);
  }
LABEL_17:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  if ( !v29 )
    goto LABEL_33;
LABEL_31:
  PartyOrganizationListViewManager__SetDispSwapGuide(v29, 0, 0LL);
  p_image = mListViewObject[1].monitor;
  if ( !p_image )
    goto LABEL_33;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 424LL))(p_image, *(_QWORD *)(*p_image + 432LL));
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__SetBaseTransform(
        PartyOrganizationUIDragDropListViewDrop_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *listViewObject; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ListViewObject_o *Component_WebViewObject; // x1
  __int64 v22; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  WebViewObject_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UnityEngine_Collider_o *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42EC37F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EC37F = 1;
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
                                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mListViewObject,
    (System_Int32_array **)Component_WebViewObject,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v24 = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v24,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B5D69C(mListViewObject, v22);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (struct UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mCollider,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_42EC37E & 1) == 0 )
  {
    sub_B5D5C4(&UICamera_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC37E = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CommonUI_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EC38D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_5474/*"DragSwapEnd"*/, v6, v7, v8);
    byte_42EC38D = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5474/*"DragSwapEnd"*/,
      0.1,
      0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}