void __fastcall PartyOrganizationUIDragDropListViewDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418B7E0 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v1);
    byte_418B7E0 = 1;
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
  if ( (byte_418B7DB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationListViewObject_TypeInfo, v4);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B2C35C(&StringLiteral_5394/*"DragEnd"*/, v5);
    byte_418B7DB = 1;
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
      PartyOrganizationListViewObject__Init_19885904((PartyOrganizationListViewObject_o *)v10, 8, 0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_B2C434(this, method);
  }
LABEL_19:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_32201056(mListViewObject, 0, 0LL);
  ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
    mListViewObject,
    0LL,
    mListViewObject->klass->vtable._6_SetItem.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5394/*"DragEnd"*/, 0.1, 0LL);
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
  __int64 v12; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v16; // s5
  float v17; // s3
  float v18; // s3
  UnityEngine_GameObject_o *v19; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o down; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_418B7DA & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5393/*"DragDumpEnd"*/, v3);
    byte_418B7DA = 1;
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
  v16 = down.fields.y * 50.0;
  v17 = down.fields.z * 50.0;
  down.fields.y = x + (float)(down.fields.x * 50.0);
  down.fields.z = y + v16;
  v18 = z + v17;
  transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                            this->fields.dragObject,
                                            PartyOrganizationUIDragDropListViewDrop_TypeInfo->static_fields->ACTION_TIME,
                                            *(UnityEngine_Vector3_o *)&down.fields.y,
                                            0LL);
  if ( !transform )
LABEL_11:
    sub_B2C434(transform, v12);
  v19 = transform;
  LODWORD(transform[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19[3], gameObject, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_5393/*"DragDumpEnd"*/;
  v19[3].monitor = (void *)StringLiteral_5393/*"DragDumpEnd"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19[3].monitor, v27, v28, v29, v30, v31, v32, v33);
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
  if ( (byte_418B7D6 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, method);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B2C35C(&PartyOrganizationListViewManager_TypeInfo, v3);
    byte_418B7D6 = 1;
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
    sub_B2C434(this, method);
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
  if ( (byte_418B7D9 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationListViewManager_TypeInfo, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B2C35C(&StringLiteral_5394/*"DragEnd"*/, v4);
    byte_418B7D9 = 1;
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
    sub_B2C434(this, method);
  }
  PartyOrganizationListViewManager__SetDispSwapGuide((PartyOrganizationListViewManager_o *)this, 1, 0LL);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0LL, 0LL);
  PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)mListViewObject, 8, 0LL);
  v2->fields.isEquipSwap = 0;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5394/*"DragEnd"*/, 0.1, 0LL);
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
  if ( (byte_418B7D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B2C35C(&StringLiteral_5395/*"DragReturnEnd"*/, v4);
    byte_418B7D8 = 1;
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
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B2C434(this, method);
  }
  if ( !v7 )
    goto LABEL_17;
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)v7, 1, 0LL);
LABEL_16:
  PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)v7, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5395/*"DragReturnEnd"*/, 0.1, 0LL);
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

  if ( (byte_418B7D7 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5396/*"DragReturnMoveEnd"*/, v4);
    byte_418B7D7 = 1;
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
    sub_B2C434(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_5396/*"DragReturnMoveEnd"*/;
  v18[3].monitor = (void *)StringLiteral_5396/*"DragReturnMoveEnd"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
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
  if ( (byte_418B7DF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationListViewManager_TypeInfo, v4);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B2C35C(&StringLiteral_5394/*"DragEnd"*/, v5);
    byte_418B7DF = 1;
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
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B2C434(this, method);
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
  PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)v8, 8, 0LL);
  p_dropObject = (PartyOrganizationUIDragDropListViewDrop_o **)&v2->fields.dropObject;
  this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject;
  if ( !this )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)this, 7, 0LL);
  this = *p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_25;
  PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)this, 8, 0LL);
  *p_dropObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.dropObject, 0LL, v10, v11, v12, v13, v14, v15);
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
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5394/*"DragEnd"*/, 0.1, 0LL);
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
  PartyOrganizationListViewItem_o *v19; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  _BOOL4 v22; // w24
  _BOOL4 IsRarityRestriction; // w22
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewDropObject_o *v25; // x22
  __int64 v26; // x24
  __int64 v27; // x25
  int32_t v28; // w24
  int32_t v29; // w25
  const MethodInfo *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v31; // x8
  PartyOrganizationListViewDropObject_o *v32; // x24
  int32_t v33; // w25
  int32_t Rarity; // w26
  const MethodInfo *v35; // x7
  System_Text_StringBuilder_o *v36; // x23
  System_Text_StringBuilder_o *v37; // x26
  _BOOL4 v38; // w27
  struct UserServantEntity_o *v39; // x8
  System_Text_StringBuilder_o *v40; // x22
  ServantEntity_o *servantEntity; // x28
  __int64 v42; // x25
  __int64 v43; // x26
  System_String_o *v44; // x28
  int32_t v45; // w25
  const MethodInfo *v46; // x7
  _BOOL4 v47; // w27
  struct UserServantEntity_o *v48; // x8
  System_Text_StringBuilder_o *v49; // x22
  ServantEntity_o *v50; // x28
  __int64 v51; // x25
  __int64 v52; // x26
  System_String_o *v53; // x28
  int32_t v54; // w25
  const MethodInfo *v55; // x7
  int32_t v56; // w27
  int32_t v57; // w25
  int32_t v58; // w27
  int32_t v59; // w28
  int32_t v60; // w27
  Il2CppObject *v61; // x1
  System_Text_StringBuilder_o *v62; // x0
  float v63; // s8
  int32_t windowHeight; // w25
  float v65; // s9
  System_String_o *v66; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v68; // x21
  System_String_o *v69; // x22
  System_String_o *v70; // x23
  CommonConfirmDialog_ClickDelegate_o *v71; // x24
  PartyOrganizationListViewDropObject_o *v72; // [xsp+40h] [xbp-90h]
  PartyOrganizationListViewDropObject_o *v73; // [xsp+40h] [xbp-90h]
  System_Text_StringBuilder_o *v74; // [xsp+48h] [xbp-88h]
  int32_t maxLength[2]; // [xsp+50h] [xbp-80h] BYREF
  int32_t actMaxRarity[2]; // [xsp+58h] [xbp-78h] BYREF
  System_String_o *v77; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *skillName; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_418B7DD & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&System_Math_TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    sub_B2C35C(&Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v10);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v12);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v13);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_418B7DD = 1;
  }
  v77 = 0LL;
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
  v19 = (PartyOrganizationListViewItem_o *)mListViewObject;
  *(_QWORD *)actMaxRarity = 0LL;
  v77 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isEquipSwap )
  {
    v22 = 0;
    IsRarityRestriction = 0;
LABEL_12:
    if ( !IsRarityRestriction )
    {
      PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, method);
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
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  userServantEntity = v18->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_101;
  v25 = mListViewObject;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v79.fields.currentCryptoKey = v27;
  *(_QWORD *)&v79.fields.fakeValue = v26;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v79,
                                                               0LL);
  if ( !v18->fields.userServantEntity )
    goto LABEL_101;
  v28 = (int)mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                               v18->fields.userServantEntity,
                                                               0LL);
  if ( !v19 )
    goto LABEL_101;
  v29 = (int)mListViewObject;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v19, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               EquipSvtId,
                                                               0LL);
  if ( !v25 )
    goto LABEL_101;
  IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                          (PartyOrganizationUtility_o *)mListViewObject,
                          &skillName,
                          &actMaxRarity[1],
                          v28,
                          v29,
                          (int32_t)mListViewObject,
                          eventId,
                          v30);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v19->fields.userServantEntity;
  if ( !v31 )
    goto LABEL_101;
  v32 = mListViewObject;
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v31[5],
                                                               0LL);
  if ( !v19->fields.userServantEntity )
    goto LABEL_101;
  v33 = (int)mListViewObject;
  Rarity = UserServantEntity__getRarity(v19->fields.userServantEntity, 0LL);
  v81 = PartyOrganizationListViewItem__get_EquipSvtId(v18, 0LL);
  mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v81,
                                                               0LL);
  if ( !v32 )
    goto LABEL_101;
  v22 = PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)mListViewObject,
          &v77,
          actMaxRarity,
          v33,
          Rarity,
          (int32_t)mListViewObject,
          eventId,
          v35);
  if ( !v22 )
    goto LABEL_12;
LABEL_29:
  v36 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v36, 0LL);
  v37 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  v74 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v74, 0LL);
  *(_QWORD *)maxLength = 0LL;
  if ( IsRarityRestriction )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v38 = IsRarityRestriction;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v18 )
      goto LABEL_101;
    v39 = v18->fields.userServantEntity;
    v72 = mListViewObject;
    if ( !v39 )
      goto LABEL_101;
    v40 = v37;
    servantEntity = v18->fields.servantEntity;
    v43 = *(_QWORD *)&v39->fields.limitCount.fields.currentCryptoKey;
    v42 = *(_QWORD *)&v39->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v82.fields.currentCryptoKey = v43;
    *(_QWORD *)&v82.fields.fakeValue = v42;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                 v82,
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
    v44 = (System_String_o *)mListViewObject;
    v37 = v40;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v18->fields.userServantEntity,
                                                                 0LL);
    if ( !v19 )
      goto LABEL_101;
    v45 = (int)mListViewObject;
    IsRarityRestriction = v38;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v19, 0LL);
    if ( !v72 )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                                                 (PartyOrganizationUtility_o *)mListViewObject,
                                                                 &maxLength[1],
                                                                 v44,
                                                                 v45,
                                                                 (System_String_o *)mListViewObject,
                                                                 skillName,
                                                                 actMaxRarity[1],
                                                                 v46);
    if ( !v37 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_42408700(v37, (System_String_o *)mListViewObject, 0LL);
  }
  if ( v22 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v47 = IsRarityRestriction;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v19 )
      goto LABEL_101;
    v48 = v19->fields.userServantEntity;
    v73 = mListViewObject;
    if ( !v48 )
      goto LABEL_101;
    v49 = v37;
    v50 = v19->fields.servantEntity;
    v52 = *(_QWORD *)&v48->fields.limitCount.fields.currentCryptoKey;
    v51 = *(_QWORD *)&v48->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v83.fields.currentCryptoKey = v52;
    *(_QWORD *)&v83.fields.fakeValue = v51;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                 v83,
                                                                 0LL);
    if ( !v50 )
      goto LABEL_101;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)ServantEntity__getName(
                                                                 v50,
                                                                 (int32_t)mListViewObject,
                                                                 -1,
                                                                 0LL);
    if ( !v19->fields.userServantEntity )
      goto LABEL_101;
    v53 = (System_String_o *)mListViewObject;
    v37 = v49;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)UserServantEntity__getRarity(
                                                                 v19->fields.userServantEntity,
                                                                 0LL);
    if ( !v18 )
      goto LABEL_101;
    v54 = (int)mListViewObject;
    IsRarityRestriction = v47;
    mListViewObject = (PartyOrganizationListViewDropObject_o *)PartyOrganizationListViewItem__get_EquipName(v18, 0LL);
    if ( !v73 )
      goto LABEL_101;
    method = (const MethodInfo *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                   (PartyOrganizationUtility_o *)mListViewObject,
                                   maxLength,
                                   v53,
                                   v54,
                                   (System_String_o *)mListViewObject,
                                   v77,
                                   actMaxRarity[0],
                                   v55);
    mListViewObject = (PartyOrganizationListViewDropObject_o *)v74;
    if ( !v74 )
      goto LABEL_101;
    System_Text_StringBuilder__Append_42408700(v74, (System_String_o *)method, 0LL);
    v56 = maxLength[0];
  }
  else
  {
    v56 = 0;
  }
  v57 = maxLength[1];
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v58 = System_Math__Max_45012344(v57, v56, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  mListViewObject = (PartyOrganizationListViewDropObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !mListViewObject )
    goto LABEL_101;
  if ( v58 > 43 )
  {
    v59 = 0;
    v60 = 16;
    if ( !v18 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v58 > 41 )
  {
    v60 = 17;
    v59 = 17;
    if ( !v18 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v58 > 37 )
  {
    v60 = 18;
    v59 = 18;
    if ( !v18 )
      goto LABEL_101;
    goto LABEL_69;
  }
  if ( v58 <= 34 )
  {
    if ( v58 <= 31 )
      v60 = 24;
    else
      v60 = 22;
    v59 = v60;
    if ( v18 )
      goto LABEL_69;
LABEL_101:
    sub_B2C434(mListViewObject, method);
  }
  v60 = 20;
  v59 = 20;
  if ( !v18 )
    goto LABEL_101;
LABEL_69:
  if ( !v19 || !v36 )
    goto LABEL_101;
  if ( v18->fields.index >= v19->fields.index )
  {
    System_Text_StringBuilder__Append_42412460(v36, (Il2CppObject *)v74, 0LL);
    v62 = v36;
    v61 = (Il2CppObject *)v37;
  }
  else
  {
    System_Text_StringBuilder__Append_42412460(v36, (Il2CppObject *)v37, 0LL);
    v61 = (Il2CppObject *)v74;
    v62 = v36;
  }
  System_Text_StringBuilder__Append_42412460(v62, v61, 0LL);
  v63 = v22 && IsRarityRestriction ? -182.5 : -162.5;
  windowHeight = v22 && IsRarityRestriction ? 520 : 480;
  v65 = v22 && IsRarityRestriction ? 40.0 : 30.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
  System_Text_StringBuilder__Append_42408700(v36, v66, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v68 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v36->klass->vtable._3_ToString.method)(
                             v36,
                             v36->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
  v71 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v71,
    (Il2CppObject *)this,
    Method_PartyOrganizationUIDragDropListViewDrop__DragSwapMoveEnd_b__17_0__,
    0LL);
  if ( !Instance )
    goto LABEL_101;
  CommonUI__OpenConfirmDialog_17971264(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v68,
    v69,
    v70,
    v71,
    v60,
    v59,
    v65,
    728,
    2,
    windowHeight,
    v63,
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
  __int64 v14; // x1
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v16; // x11
  UnityEngine_Component_o *v17; // x21
  UnityEngine_Component_o *dragObject; // x0
  UnityEngine_Transform_o *v19; // x22
  int v20; // s0
  UnityEngine_GameObject_o *v23; // x22
  float x; // s8
  float y; // s9
  PartyOrganizationUIDragDropListViewDrop_c *v26; // x0
  float z; // s10
  PartyOrganizationListViewDropObject_o *dropObject; // x22
  System_Action_o *v29; // x23
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s4
  float v34; // s5
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_418B7DC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, ddo);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v10);
    sub_B2C35C(&Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, v11);
    sub_B2C35C(&PartyOrganizationUIDragDropListViewDrop_TypeInfo, v12);
    byte_418B7DC = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = (UnityEngine_Component_o **)&this->fields.dropObject;
  sub_B2C2F8(
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
    && (v16 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
        *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
  {
    if ( (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v16 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      v17 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v17 = 0LL;
  }
  else
  {
    v17 = 0LL;
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
  v19 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_dropObject, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v19 )
    goto LABEL_26;
  v35 = UnityEngine_Transform__InverseTransformPoint(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  v23 = this->fields.dragObject;
  x = v35.fields.x;
  y = v35.fields.y;
  v26 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  z = v35.fields.z;
  if ( (BYTE3(PartyOrganizationUIDragDropListViewDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUIDragDropListViewDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUIDragDropListViewDrop_TypeInfo);
    v26 = PartyOrganizationUIDragDropListViewDrop_TypeInfo;
  }
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  dragObject = (UnityEngine_Component_o *)TweenPosition__Begin(v23, v26->static_fields->ACTION_TIME, v36, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  LODWORD(dragObject[1].klass) = 3;
  if ( !v17 )
    goto LABEL_26;
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v17, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  dropObject = this->fields.dropObject;
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_PartyOrganizationUIDragDropListViewDrop_DragSwapMoveEnd__, 0LL);
  dragObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v17, 0LL);
  if ( !dragObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !dropObject )
    goto LABEL_26;
  v33 = v31;
  v34 = v32;
  v37.fields.x = v30;
  v37.fields.y = v33;
  v37.fields.z = v34;
  PartyOrganizationListViewDropObject__Init(dropObject, 6, v29, 0.0, v37, this->fields.isEquipSwap, 0LL);
  if ( this->fields.isEquipSwap )
  {
    dragObject = *p_dropObject;
    if ( *p_dropObject )
    {
      PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)dragObject, 0, 0LL);
      return;
    }
LABEL_26:
    sub_B2C434(dragObject, v14);
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
  if ( (byte_418B7DE & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationListViewManager_TypeInfo, v3);
    this = (PartyOrganizationUIDragDropListViewDrop_o *)sub_B2C35C(&StringLiteral_5397/*"DragSwapEnd"*/, v4);
    byte_418B7DE = 1;
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
        PartyOrganizationListViewDropObject__Init_32201056(v13, 9, 0LL),
        (this = (PartyOrganizationUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0LL) )
  {
LABEL_43:
    sub_B2C434(this, method);
  }
  PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)this, 9, 0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_5397/*"DragSwapEnd"*/, 0.1, 0LL);
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
  const MethodInfo *v15; // x1
  struct ListViewObject_o *mListViewObject; // x21
  __int64 v17; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v19; // x11
  PartyOrganizationListViewManager_o *v20; // x23
  PartyOrganizationListViewItem_o *Item; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *gameObject; // x26
  ListViewDropInfo_o *v24; // x25
  UnityEngine_Object_o *klass; // x23
  PartyOrganizationListViewItem_o *v26; // x0
  const MethodInfo *v27; // x2
  PartyOrganizationListViewItem_o *v28; // x24
  const MethodInfo *v29; // x1

  if ( (byte_418B7D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, surface);
    sub_B2C35C(&ListViewDropInfo_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_B2C35C(&PartyOrganizationListViewManager_TypeInfo, v13);
    byte_418B7D5 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B2C2F8(
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
  v17 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v17
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v17 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_43;
  }
  manager = mListViewObject->fields.manager;
  if ( manager
    && (v19 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
  {
    if ( (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v19 - 1] == PartyOrganizationListViewManager_TypeInfo )
      v20 = (PartyOrganizationListViewManager_o *)mListViewObject->fields.manager;
    else
      v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
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
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
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
  v24 = (ListViewDropInfo_o *)sub_B2C42C(ListViewDropInfo_TypeInfo);
  ListViewDropInfo___ctor(v24, gameObject, surface, 0LL);
  if ( !v20 )
    goto LABEL_43;
  IsDropDropSurface = (struct ListViewObject_o *)PartyOrganizationListViewManager__IsDropDropSurface(v20, v24, 0LL);
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
    PartyOrganizationUIDragDropListViewDrop__DragDumpStart(this, v15);
    return;
  }
  if ( !klass )
LABEL_43:
    sub_B2C434(IsDropDropSurface, v15);
  v26 = PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)klass, 0LL);
  if ( !v26 )
  {
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
    PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
    ((void (__fastcall *)(struct ListViewObject_o *, _QWORD, Il2CppMethodPointer))mListViewObject->klass->vtable._5_SetItem.method)(
      mListViewObject,
      0LL,
      mListViewObject->klass->vtable._6_SetItem.methodPtr);
    ((void (__fastcall *)(UnityEngine_Object_o *, PartyOrganizationListViewItem_o *, void *))klass->klass[1]._1.namespaze)(
      klass,
      Item,
      klass->klass[1]._1.byval_arg.data);
    PartyOrganizationListViewDropObject__Init_32201056((PartyOrganizationListViewDropObject_o *)klass, 4, 0LL);
    PartyOrganizationUIDragDropListViewDrop__DragEnd(this, v29);
    return;
  }
  v28 = v26;
  if ( v26 == Item )
  {
LABEL_35:
    PartyOrganizationUIDragDropListViewDrop__DragReturnStart(this, v15);
    return;
  }
  if ( this->fields.isEquipSwap )
  {
LABEL_34:
    if ( !v28->fields.isFollower && v28->fields.userServantEntity )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( !PartyOrganizationListViewItem__IsEditablePos(v26, 0LL) )
  {
    if ( !this->fields.isEquipSwap )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_42:
  PartyOrganizationUIDragDropListViewDrop__DragSwapStart(this, (PartyOrganizationListViewDropObject_o *)klass, v27);
}


void __fastcall PartyOrganizationUIDragDropListViewDrop__OnDragDropStart(
        PartyOrganizationUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  UnityEngine_Component_o *mListViewObject; // x19
  __int64 v17; // x10
  int klass_low; // w10
  PartyOrganizationListViewManager_o *monitor; // x8
  __int64 v20; // x12
  PartyOrganizationListViewManager_o *v21; // x20
  __int64 v22; // x11

  if ( (byte_418B7D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B2C35C(&PartyOrganizationListViewDropObject_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationListViewManager_TypeInfo, v4);
    sub_B2C35C(&UICamera_TypeInfo, v5);
    byte_418B7D4 = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.surface,
      (System_Int32_array **)dragged,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_33;
  v17 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v17
    || (PartyOrganizationListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v17 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
  {
    goto LABEL_33;
  }
  klass_low = LOBYTE(mListViewObject[7].klass);
  monitor = (PartyOrganizationListViewManager_o *)mListViewObject[1].monitor;
  this->fields.isEquipSwap = klass_low;
  if ( !monitor
    || (v20 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v20) )
  {
    v21 = 0LL;
    if ( klass_low )
      goto LABEL_17;
    goto LABEL_23;
  }
  if ( (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v20 - 1] == PartyOrganizationListViewManager_TypeInfo )
    v21 = monitor;
  else
    v21 = 0LL;
  if ( !klass_low )
  {
LABEL_23:
    if ( monitor
      && (v22 = *(&PartyOrganizationListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&monitor->klass->_2.bitflags2 + 1) >= (unsigned int)v22) )
    {
      if ( (PartyOrganizationListViewManager_c *)monitor->klass->_2.typeHierarchy[v22 - 1] == PartyOrganizationListViewManager_TypeInfo )
        v21 = monitor;
      else
        v21 = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    p_image = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( p_image )
    {
      p_image = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, float))(*p_image + 440LL))(
                            p_image,
                            *(_QWORD *)(*p_image + 448LL),
                            0.0);
      if ( v21 )
        goto LABEL_31;
    }
LABEL_33:
    sub_B2C434(p_image, v6);
  }
LABEL_17:
  PartyOrganizationListViewDropObject__SetEquipDisp((PartyOrganizationListViewDropObject_o *)mListViewObject, 0, 0LL);
  if ( !v21 )
    goto LABEL_33;
LABEL_31:
  PartyOrganizationListViewManager__SetDispSwapGuide(v21, 0, 0LL);
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
  __int64 v14; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  WebViewObject_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
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

  if ( (byte_418B7D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418B7D3 = 1;
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
                                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B2C2F8(
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
    || (v16 = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v16,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B2C434(mListViewObject, v14);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_B2C2F8(
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
                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v30;
  sub_B2C2F8(
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

  if ( (byte_418B7D2 & 1) == 0 )
  {
    sub_B2C35C(&UICamera_TypeInfo, method);
    byte_418B7D2 = 1;
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
  __int64 v7; // x1

  if ( (byte_418B7E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B2C35C(&StringLiteral_5397/*"DragSwapEnd"*/, v5);
    byte_418B7E1 = 1;
  }
  if ( isDecide )
    PartyOrganizationUIDragDropListViewDrop__ExcecutionSwap(this, (const MethodInfo *)isDecide);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5397/*"DragSwapEnd"*/,
      0.1,
      0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}