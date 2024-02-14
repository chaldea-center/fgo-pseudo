void __fastcall PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217F82 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v1);
    byte_4217F82 = 1;
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
  __int64 v7; // x10
  __int64 v8; // x8
  __int64 v9; // x11
  UnityEngine_Object_o *v10; // x21

  v2 = this;
  if ( (byte_4217F7D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B0D8A4(&PartyOrganizationListViewObject_TypeInfo, v4);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B0D8A4(&StringLiteral_5410/*"DragEnd"*/, v5);
    byte_4217F7D = 1;
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_20;
  v7 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    goto LABEL_20;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_20;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0LL);
  if ( !this )
    goto LABEL_20;
  v8 = *(_QWORD *)&this->fields.mTarget.fields.z;
  if ( v8
    && (v9 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v8 + 300LL) >= (unsigned int)v9) )
  {
    if ( *(PartyOrganizationListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v8 + 200LL) + 8 * v9 - 8) == PartyOrganizationListViewObject_TypeInfo )
      v10 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.z;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v10 )
    {
      PartyOrganizationListViewObject__Init_19269328((PartyOrganizationListViewObject_o *)v10, 8, 0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_B0D97C(this);
  }
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_30726116(mListViewObject, 0, 0LL);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
    mListViewObject,
    0LL,
    mListViewObject->klass->vtable._6_SetItem.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5410/*"DragEnd"*/, 0.1, 0LL);
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
  UnityEngine_GameObject_o *transform; // x0
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

  if ( (byte_4217F7C & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5409/*"DragDumpEnd"*/, v3);
    byte_4217F7C = 1;
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
    sub_B0D97C(transform);
  v18 = transform;
  LODWORD(transform[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B0D840((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_5409/*"DragDumpEnd"*/;
  v18[3].monitor = (void *)StringLiteral_5409/*"DragDumpEnd"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  __int64 v3; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v5; // x11
  PartyOrganizationListViewManager_o *manager; // x20
  __int64 v7; // x10

  v2 = this;
  if ( (byte_4217F78 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, method);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B0D8A4(&PartyOrganizationListViewManager_TypeInfo, v3);
    byte_4217F78 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( !mListViewObject
    || (v5 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v5 - 1] != PartyOrganizationListViewDropObject_TypeInfo
    || (manager = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager) == 0LL
    || (v7 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  PartyOrganizationUIDragDropListViewDrop_o **mListViewObject; // x20
  __int64 v6; // x10
  __int64 v7; // x10

  v2 = this;
  if ( (byte_4217F7B & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B0D8A4(&PartyOrganizationListViewManager_TypeInfo, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B0D8A4(&StringLiteral_5410/*"DragEnd"*/, v4);
    byte_4217F7B = 1;
  }
  mListViewObject = (PartyOrganizationUIDragDropListViewDrop_o **)v2->fields.mListViewObject;
  if ( !mListViewObject
    || (v6 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        BYTE4((*mListViewObject)[1].fields.surface) < (unsigned int)v6)
    || *((PartyOrganizationListViewDropObject_c **)(*mListViewObject)[1].fields.mParent + v6 - 1) != PartyOrganizationListViewDropObject_TypeInfo
    || (this = mListViewObject[4]) == 0LL
    || (v7 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    sub_B0D97C(this);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_30726116((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0LL);
  v2->fields.isEquipSwap = 0;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5410/*"DragEnd"*/, 0.1, 0LL);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__DragReturnMoveEnd(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v6; // x11
  UnityEngine_Component_o *v7; // x20

  v2 = this;
  if ( (byte_4217F7A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B0D8A4(&StringLiteral_5411/*"DragReturnEnd"*/, v4);
    byte_4217F7A = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (v6 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v7,
                                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B0D97C(this);
  }
  if ( !v7 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v7, 1, 0LL);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_30726116((PartyOrganizationListViewDropObject_o *)v7, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5411/*"DragReturnEnd"*/, 0.1, 0LL);
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
  UnityEngine_Transform_o *v9; // x21
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewDrop_c *v16; // x0
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

  if ( (byte_4217F79 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B0D8A4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_5412/*"DragReturnMoveEnd"*/, v4);
    byte_4217F79 = 1;
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
  v16 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v33.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v16 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->ACTION_TIME, v34, 0LL);
  if ( !dragObject )
LABEL_19:
    sub_B0D97C(dragObject);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B0D840((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_5412/*"DragReturnMoveEnd"*/;
  v18[3].monitor = (void *)StringLiteral_5412/*"DragReturnMoveEnd"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
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
  __int64 v7; // x11
  struct ListViewObject_o *v8; // x20
  PartyOrganizationUIDragDropListViewDrop_o **p_dropObject; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x10

  v2 = this;
  if ( (byte_4217F81 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B0D8A4(&PartyOrganizationListViewManager_TypeInfo, v4);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B0D8A4(&StringLiteral_5410/*"DragEnd"*/, v5);
    byte_4217F81 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( mListViewObject
    && (v7 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
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
        this = (PartyOrganizationUIDragDropListViewDrop_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)v8,
                                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B0D97C(this);
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
  PartyOrganizationListViewDropObject__Init_30726116((PartyOrganizationListViewDropObject_o *)v8, 8, 0LL);
  p_dropObject = (PartyOrganizationUIDragDropListViewDrop_o **)&v2->fields.dropObject;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_30726116((PartyOrganizationListViewDropObject_o *)this, 7, 0LL);
  this = *p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_30726116((PartyOrganizationListViewDropObject_o *)this, 8, 0LL);
  *p_dropObject = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.dropObject, 0LL, v10, v11, v12, v13, v14, v15);
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v8->fields.manager;
  if ( !this )
    goto LABEL_25;
  v16 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (PartyOrganizationListViewManager_c *)this->klass->_2.typeHierarchy[v16 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_25;
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5410/*"DragEnd"*/, 0.1, 0LL);
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
  PartyOrganizationListViewDropObject_o *mListViewObject; // x0
  __int64 v17; // x10
  PartyOrganizationListViewItem_o *v18; // x20
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  PartyOrganizationListViewItem_o *v21; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  _BOOL4 v24; // w24
  _BOOL4 IsRarityRestriction; // w22
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewDropObject_o *v27; // x22
  __int64 v28; // x24
  __int64 v29; // x25
  int32_t v30; // w24
  int32_t v31; // w25
  const MethodInfo *v32; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  PartyOrganizationListViewDropObject_o *v34; // x24
  int32_t v35; // w25
  int32_t Rarity; // w26
  const MethodInfo *v37; // x7
  System_Text_StringBuilder_o *v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  System_Text_StringBuilder_o *v41; // x26
  __int64 v42; // x1
  __int64 v43; // x2
  _BOOL4 v44; // w27
  struct UserServantEntity_o *v45; // x8
  System_Text_StringBuilder_o *v46; // x22
  ServantEntity_o *servantEntity; // x28
  __int64 v48; // x25
  __int64 v49; // x26
  System_String_o *v50; // x28
  int32_t v51; // w25
  const MethodInfo *v52; // x7
  _BOOL4 v53; // w27
  struct UserServantEntity_o *v54; // x8
  System_Text_StringBuilder_o *v55; // x22
  ServantEntity_o *v56; // x28
  __int64 v57; // x25
  __int64 v58; // x26
  System_String_o *v59; // x28
  int32_t v60; // w25
  const MethodInfo *v61; // x7
  System_String_o *RarityInvalidMessage; // x1
  int32_t v63; // w27
  int32_t v64; // w25
  int32_t v65; // w27
  int32_t v66; // w28
  int32_t v67; // w27
  Il2CppObject *v68; // x1
  System_Text_StringBuilder_o *v69; // x0
  float v70; // s8
  int32_t windowHeight; // w25
  float v72; // s9
  System_String_o *v73; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v75; // x21
  System_String_o *v76; // x22
  System_String_o *v77; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  CommonConfirmDialog_ClickDelegate_o *v80; // x24
  PartyOrganizationListViewDropObject_o *v81; // [xsp+40h] [xbp-90h]
  PartyOrganizationListViewDropObject_o *v82; // [xsp+40h] [xbp-90h]
  System_Text_StringBuilder_o *v83; // [xsp+48h] [xbp-88h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-80h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-78h] BYREF
  System_String_o *v86; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4217F7F & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&System_Math_TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    sub_B0D8A4(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v10);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_10232/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v12);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v13);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_4217F7F = 1;
  }
  v86 = 0LL;
  skillName = 0LL;
  *(_QWORD *)maxLength = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_101;
  v17 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v17 )
    goto LABEL_101;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v17 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_101;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               mListViewObject,
                                                               0LL);
  if ( !this->fields.dropObject )
    goto LABEL_101;
  v18 = (PartyOrganizationListViewItem_o *)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewDropObject__GetItem(
                                                               this->fields.dropObject,
                                                               0LL);
  v21 = (PartyOrganizationListViewItem_o *)mListViewObject;
  *(_QWORD *)actMaxRarity = 0LL;
  v86 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isEquipSwap )
  {
    v24 = 0;
    IsRarityRestriction = 0;
LABEL_12:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, v19);
      return;
    }
    goto LABEL_29;
  }
  if ( !v18 )
    goto LABEL_101;
  questRestrictionInfo = v18->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    eventId = questRestrictionInfo->fields.eventId;
  else
    eventId = -1;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v18->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_101;
  v27 = mListViewObject;
  v29 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v88.fields.currentCryptoKey = v29;
  *(_QWORD *)&v88.fields.fakeValue = v28;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               v88,
                                                               0LL);
  if ( !v18->fields.userServantEntity )
    goto LABEL_101;
  v30 = (int)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                               v18->fields.userServantEntity,
                                                               0LL);
  if ( !v21 )
    goto LABEL_101;
  v31 = (int)mListViewObject;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v21, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               EquipSvtId,
                                                               0LL);
  if ( !v27 )
    goto LABEL_101;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          (PartyOrganizationUtility_o *)mListViewObject,
                          &skillName,
                          &actMaxRarity[1],
                          v30,
                          v31,
                          (int32_t)mListViewObject,
                          eventId,
                          v32);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v33 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v21->fields.userServantEntity;
  if ( !v33 )
    goto LABEL_101;
  v34 = mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               v33[5],
                                                               0LL);
  if ( !v21->fields.userServantEntity )
    goto LABEL_101;
  v35 = (int)mListViewObject;
  Rarity = UserServantEntity__getRarity(v21->fields.userServantEntity, 0LL);
  v90 = PartyOrganizationListViewItem__get_EquipSvtId(v18, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               v90,
                                                               0LL);
  if ( !v34 )
    goto LABEL_101;
  v24 = PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)mListViewObject,
          &v86,
          actMaxRarity,
          v35,
          Rarity,
          (int32_t)mListViewObject,
          eventId,
          v37);
  if ( !v24 )
    goto LABEL_12;
LABEL_29:
  v38 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v19, v20);
  System_Text_StringBuilder___ctor(v38, 0LL);
  v41 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v39, v40);
  System_Text_StringBuilder___ctor(v41, 0LL);
  v83 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v42, v43);
  System_Text_StringBuilder___ctor(v83, 0LL);
  *(_QWORD *)maxLength = 0LL;
  if ( IsRarityRestriction )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v44 = IsRarityRestriction;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v18 )
      goto LABEL_101;
    v45 = v18->fields.userServantEntity;
    v81 = mListViewObject;
    if ( !v45 )
      goto LABEL_101;
    v46 = v41;
    servantEntity = v18->fields.servantEntity;
    v49 = *(_QWORD *)&v45->fields.limitCount.fields.currentCryptoKey;
    v48 = *(_QWORD *)&v45->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v91.fields.currentCryptoKey = v49;
    *(_QWORD *)&v91.fields.fakeValue = v48;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                 v91,
                                                                 0LL);
    if ( !servantEntity )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 servantEntity,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v18->fields.userServantEntity )
      goto LABEL_101;
    v50 = (System_String_o *)mListViewObject;
    v41 = v46;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v18->fields.userServantEntity,
                                                                 0LL);
    if ( !v21 )
      goto LABEL_101;
    v51 = (int)mListViewObject;
    IsRarityRestriction = v44;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v21, 0LL);
    if ( !v81 )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v50,
                                                                 v51,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v52);
    if ( !v41 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_42155400(v41, (System_String_o *)mListViewObject, 0LL);
  }
  if ( v24 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v53 = IsRarityRestriction;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v21 )
      goto LABEL_101;
    v54 = v21->fields.userServantEntity;
    v82 = mListViewObject;
    if ( !v54 )
      goto LABEL_101;
    v55 = v41;
    v56 = v21->fields.servantEntity;
    v58 = *(_QWORD *)&v54->fields.limitCount.fields.currentCryptoKey;
    v57 = *(_QWORD *)&v54->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v92.fields.currentCryptoKey = v58;
    *(_QWORD *)&v92.fields.fakeValue = v57;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                 v92,
                                                                 0LL);
    if ( !v56 )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 v56,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v21->fields.userServantEntity )
      goto LABEL_101;
    v59 = (System_String_o *)mListViewObject;
    v41 = v55;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v21->fields.userServantEntity,
                                                                 0LL);
    if ( !v18 )
      goto LABEL_101;
    v60 = (int)mListViewObject;
    IsRarityRestriction = v53;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v18, 0LL);
    if ( !v82 )
      goto LABEL_101;
    RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                             (PartyOrganizationUtility_o *)mListViewObject,
                             maxLength,
                             v59,
                             v60,
                             (System_String_o *)mListViewObject,
                             v86,
                             actMaxRarity[0],
                             v61);
    mListViewObject = (PartyOrganizationListViewDropObject_o *)v83;
    if ( !v83 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_42155400(v83, RarityInvalidMessage, 0LL);
    v63 = maxLength[0];
  }
  else
  {
    v63 = 0;
  }
  v64 = maxLength[1];
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v65 = System_Math__Max_44559528(v64, v63, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_101;
  if ( v65 > 43 )
  {
    v66 = 0;
    v67 = 16;
    if ( !v18 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v65 > 41 )
  {
    v67 = 17;
    v66 = 17;
    if ( !v18 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v65 > 37 )
  {
    v67 = 18;
    v66 = 18;
    if ( !v18 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v65 <= 34 )
  {
    if ( v65 <= 31 )
      v67 = 24;
    else
      v67 = 22;
    v66 = v67;
    if ( v18 )
      goto LABEL_69;
LABEL_101:
    sub_B0D97C(mListViewObject);
  }
  v67 = 20;
  v66 = 20;
  if ( !v18 )
    goto LABEL_101;
LABEL_69:
  if ( !v21 || !v38 )
    goto LABEL_101;
  if ( v18->fields.index >= v21->fields.index )
  {
    System_Text_StringBuilder__Append_42159160(v38, (Il2CppObject *)v83, 0LL);
    v69 = v38;
    v68 = (Il2CppObject *)v41;
  }
  else
  {
    System_Text_StringBuilder__Append_42159160(v38, (Il2CppObject *)v41, 0LL);
    v68 = (Il2CppObject *)v83;
    v69 = v38;
  }
  System_Text_StringBuilder__Append_42159160(v69, v68, 0LL);
  v70 = v24 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v24 && IsRarityRestriction ? 520 : 480;
  v72 = v24 && IsRarityRestriction ? 40.0 : 30.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_10232/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
  System_Text_StringBuilder__Append_42155400(v38, v73, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v75 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v38->klass->vtable._3_ToString.method)(
                             v38,
                             v38->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
  v80 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v78, v79);
  CommonConfirmDialog_ClickDelegate___ctor(
    v80,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0LL);
  if ( !Instance )
    goto LABEL_101;
  CommonUI__OpenConfirmDialog_17016836(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v75,
    v76,
    v77,
    v80,
    v67,
    v66,
    v72,
    728,
    2,
    windowHeight,
    v70,
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
  UnityEngine_Component_o *dragObject; // x0
  UnityEngine_Transform_o *v18; // x22
  int v19; // s0
  UnityEngine_GameObject_o *v22; // x22
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewDrop_c *v25; // x0
  float z; // s10
  PartyOrganizationListViewDropObject_o *dropObject; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x23
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s4
  float v35; // s5
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v38; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4217F7E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, ddo);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v10);
    sub_B0D8A4(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, v11);
    sub_B0D8A4(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v12);
    byte_4217F7E = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = (UnityEngine_Component_o **)&this->fields.dropObject;
  sub_B0D840(
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
  v18 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_dropObject, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v18 )
    goto LABEL_26;
  v36 = UnityEngine_Transform__InverseTransformPoint(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = this->fields.dragObject;
  x = v36.fields.x;
  y = v36.fields.y;
  v25 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v36.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v25 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  dragObject = (UnityEngine_Component_o *)TweenPosition__Begin(v22, v25->static_fields->ACTION_TIME, v37, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  LODWORD(dragObject[1].klass) = 3;
  if ( !v16 )
    goto LABEL_26;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v16, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  dropObject = this->fields.dropObject;
  v30 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0LL);
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v16, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !dropObject )
    goto LABEL_26;
  v34 = v32;
  v35 = v33;
  v38.fields.x = v31;
  v38.fields.y = v34;
  v38.fields.z = v35;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v30, 0.0, v38, this->fields.isEquipSwap, 0LL);
  if ( this->fields.isEquipSwap )
  {
    dragObject = *p_dropObject;
    if ( *p_dropObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0LL);
      return;
    }
LABEL_26:
    sub_B0D97C(dragObject);
  }
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUIDragDropListViewDrop_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v6; // x10
  PartyOrganizationListViewItem_o *v7; // x21
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x12
  PartyOrganizationListViewManager_o *v10; // x22
  PartyOrganizationListViewManager_o *v11; // x24
  int v12; // w9
  PartyOrganizationListViewDropObject_o *v13; // x23
  __int64 v14; // x11

  v2 = this;
  if ( (byte_4217F80 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B0D8A4(&PartyOrganizationListViewManager_TypeInfo, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B0D8A4(&StringLiteral_5413/*"DragSwapEnd"*/, v4);
    byte_4217F80 = 1;
  }
  mListViewObject = v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_43;
  v6 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    goto LABEL_43;
  if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
    goto LABEL_43;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        (PartyOrganizationListViewDropObject_o *)v2->fields.mListViewObject,
                                                        0LL);
  if ( !v2->fields.dropObject )
    goto LABEL_43;
  v7 = (PartyOrganizationListViewItem_o *)this;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)PartyOrganizationListViewDropObject__GetItem(
                                                        v2->fields.dropObject,
                                                        0LL);
  manager = mListViewObject->fields.manager;
  if ( manager )
  {
    v9 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v10 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = 0LL;
    if ( v2->fields.isEquipSwap )
      v12 = 0;
    else
      v12 = 2;
    if ( v2->fields.isEquipSwap )
      v13 = 0LL;
    else
      v13 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !v2->fields.isEquipSwap )
    {
      v14 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v14 )
      {
        if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] == PartyOrganizationListViewManager_TypeInfo )
          v11 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
        else
          v11 = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      v12 = 2;
      v13 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    }
    if ( !this )
      goto LABEL_43;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( v2->fields.isEquipSwap )
      v12 = 0;
    else
      v12 = 2;
    if ( v2->fields.isEquipSwap )
      v13 = 0LL;
    else
      v13 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !this )
      goto LABEL_43;
  }
  if ( v12 )
  {
    PartyOrganizationListViewItem__Swap((PartyOrganizationListViewItem_o *)this, v7, 0, 0LL);
    v10 = v11;
    if ( !v11 )
      goto LABEL_43;
  }
  else
  {
    PartyOrganizationListViewItem__SwapEquip((PartyOrganizationListViewItem_o *)this, v7, 0LL);
    v13 = (PartyOrganizationListViewDropObject_o *)mListViewObject;
    if ( !v10 )
      goto LABEL_43;
  }
  PartyOrganizationListViewManager__ModifyItem(v10, 0LL);
  if ( !v13
    || (PartyOrganizationListViewDropObject__GetItem(v13, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0LL)
    || (PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)this, 0LL),
        PartyOrganizationListViewDropObject__Init_30726116(v13, 9, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0LL) )
  {
LABEL_43:
    sub_B0D97C(this);
  }
  PartyOrganizationListViewDropObject__Init_30726116((PartyOrganizationListViewDropObject_o *)this, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5413/*"DragSwapEnd"*/, 0.1, 0LL);
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
  struct ListViewObject_o *IsDropDropSurface; // x0
  struct ListViewObject_o *mListViewObject; // x21
  __int64 v16; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v18; // x11
  PartyOrganizationListViewManager_o *v19; // x23
  PartyOrganizationListViewItem_o *Item; // x22
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  __int64 v24; // x1
  __int64 v25; // x2
  ListViewDropInfo_o *v26; // x25
  UnityEngine_Object_o *klass; // x23
  const MethodInfo *v28; // x1
  PartyOrganizationListViewItem_o *v29; // x0
  const MethodInfo *v30; // x2
  PartyOrganizationListViewItem_o *v31; // x24
  const MethodInfo *v32; // x1

  if ( (byte_4217F77 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, surface);
    sub_B0D8A4(&ListViewDropInfo_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_B0D8A4(&PartyOrganizationListViewManager_TypeInfo, v13);
    byte_4217F77 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B0D840(
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
  v16 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v16 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_43;
  }
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v18 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
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
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
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
  v26 = (ListViewDropInfo_o *)sub_B0D974(ListViewDropInfo_TypeInfo, v24, v25);
  ListViewDropInfo___ctor(v26, gameObject, surface, 0LL);
  if ( !v19 )
    goto LABEL_43;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(v19, v26, 0LL);
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
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v28);
    return;
  }
  if ( !klass )
LABEL_43:
    sub_B0D97C(IsDropDropSurface);
  v29 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v29 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
    PartyOrganizationListViewDropObject__Init_30726116((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
      mListViewObject,
      0LL,
      mListViewObject->klass->vtable._6_SetItem.methodPtr);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
      klass,
      Item,
      klass->klass[1]._1.byval_arg.data);
    PartyOrganizationListViewDropObject__Init_30726116((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v32);
    return;
  }
  v31 = v29;
  if ( v29 == Item )
  {
LABEL_35:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v21);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_34:
    if ( !v31->fields.isFollower && v31->fields.userServantEntity )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v29, 0LL) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_42:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)klass, v30);
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
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  UnityEngine_Component_o *mListViewObject; // x19
  __int64 v16; // x10
  int klass_low; // w10
  PartyOrganizationListViewManager_o *monitor; // x8
  __int64 v19; // x12
  PartyOrganizationListViewManager_o *v20; // x20
  __int64 v21; // x11

  if ( (byte_4217F76 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B0D8A4(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B0D8A4(&PartyOrganizationListViewManager_TypeInfo, v4);
    sub_B0D8A4(&UICamera_TypeInfo, v5);
    byte_4217F76 = 1;
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
    sub_B0D840(
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
    p_image = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( p_image )
    {
      p_image = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, float))(*p_image + 440LL))(
                            p_image,
                            *(_QWORD *)(*p_image + 448LL),
                            0.0);
      if ( v20 )
        goto LABEL_31;
    }
LABEL_33:
    sub_B0D97C(p_image);
  }
LABEL_17:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  if ( !v20 )
    goto LABEL_33;
LABEL_31:
  PartyOrganizationListViewManager__SetDispSwapGuide(v20, 0, 0LL);
  p_image = mListViewObject[1].monitor;
  if ( !p_image )
    goto LABEL_33;
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
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UnityEngine_Collider_o *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4217F75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4217F75 = 1;
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
                                                           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B0D840(
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
                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v15,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B0D97C(mListViewObject);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mCollider,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__Update(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4217F74 & 1) == 0 )
  {
    sub_B0D8A4(&UICamera_TypeInfo, method);
    byte_4217F74 = 1;
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

  if ( (byte_4217F83 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B0D8A4(&StringLiteral_5413/*"DragSwapEnd"*/, v5);
    byte_4217F83 = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5413/*"DragSwapEnd"*/,
      0.1,
      0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}