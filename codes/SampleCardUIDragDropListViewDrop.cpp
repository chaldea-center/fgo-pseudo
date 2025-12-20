void SampleCardUIDragDropListViewDrop___ctor(SampleCardUIDragDropListViewDrop_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void SampleCardUIDragDropListViewDrop__CardDragDumpEnd(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  SampleCardUIDragDropListViewDrop_o *v2; // x19
  SampleCardListViewDropObject_o *mListViewObject; // x20
  unsigned int naturalAligment; // w8
  __int64 v5; // x11
  Il2CppClass **typeHierarchy; // x9
  __int64 v7; // x11
  __int64 v8; // x9
  __int64 v9; // x12
  UnityEngine_Object_o *v10; // x21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  v2 = this;
  if ( (byte_4D29F34 & 1) == 0 )
  {
    sub_1C94098(&ListViewDropObject_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SampleCardListViewDropObject_TypeInfo);
    this = (SampleCardUIDragDropListViewDrop_o *)sub_1C94098(&SampleCardListViewObject_TypeInfo);
    byte_4D29F34 = 1;
  }
  mListViewObject = (SampleCardListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_21;
  naturalAligment = mListViewObject->klass->_2.naturalAligment;
  v5 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v5 )
    goto LABEL_21;
  typeHierarchy = mListViewObject->klass->_2.typeHierarchy;
  if ( typeHierarchy[v5 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo )
    goto LABEL_21;
  v7 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v7 )
    goto LABEL_21;
  if ( typeHierarchy[v7 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
    goto LABEL_21;
  this = (SampleCardUIDragDropListViewDrop_o *)SampleCardListViewDropObject__GetItem(
                                                 (SampleCardListViewDropObject_o *)v2->fields.mListViewObject,
                                                 method);
  if ( !this )
    goto LABEL_21;
  v8 = *(_QWORD *)&this->fields.mTarget.fields.z;
  if ( v8
    && (v9 = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v8 + 304LL) >= (unsigned int)v9) )
  {
    if ( *(SampleCardListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v8 + 200LL) + 8 * v9 - 8) == SampleCardListViewObject_TypeInfo )
      v10 = *(UnityEngine_Object_o **)&this->fields.mTarget.fields.z;
    else
      v10 = 0;
  }
  else
  {
    v10 = 0;
  }
  BYTE4(this->fields.dragObject) = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v10 )
    {
      SampleCardListViewObject__Init_38294252((SampleCardListViewObject_o *)v10, 6, v11);
      goto LABEL_20;
    }
LABEL_21:
    sub_1C942F0(this, method);
  }
LABEL_20:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0, 0);
  SampleCardListViewDropObject__Init_38285884(mListViewObject, 0, v12);
  ((void (__fastcall *)(SampleCardListViewDropObject_o *, _QWORD, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
    mListViewObject,
    0,
    mListViewObject->klass->vtable._5_SetItem.method);
}


void SampleCardUIDragDropListViewDrop__CardDragDumpStart(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v4; // x1
  float x; // s9
  float y; // s10
  float z; // s11
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Color_o v26; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D29F33 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_4329/*"CardDragDumpEnd"*/);
    byte_4D29F33 = 1;
  }
  v26.fields.r = 0.0;
  v26.fields.g = 0.0;
  v26.fields.b = 0.0;
  v26.fields.a = 0.0;
  dragObject = (UnityEngine_GameObject_o *)TweenColor__Begin(this->fields.dragObject, 0.2, v26, 0);
  if ( !dragObject )
    goto LABEL_10;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)dragObject, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !byte_4D283E0 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D283E0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v25.fields.x = x + (float)(static_fields->downVector.fields.x * 50.0);
  v25.fields.y = y + (float)(static_fields->downVector.fields.y * 50.0);
  v25.fields.z = z + (float)(static_fields->downVector.fields.z * 50.0);
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(this->fields.dragObject, 0.2, v25, 0);
  if ( !dragObject )
LABEL_10:
    sub_1C942F0(dragObject, v4);
  v9 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9[3].monitor = gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9[3].monitor, (int32_t)gameObject, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_4329/*"CardDragDumpEnd"*/;
  v9[3].fields.m_CachedPtr = StringLiteral_4329/*"CardDragDumpEnd"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9[3].fields, v17, v18, v19, v20, v21, v22, v23);
}


void SampleCardUIDragDropListViewDrop__CardDragReturnEnd(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  unsigned int naturalAligment; // w10
  __int64 v8; // x12
  Il2CppClass **typeHierarchy; // x11
  __int64 v10; // x12
  __int64 v11; // x12
  unsigned int v12; // w10
  Il2CppClass **v13; // x11
  __int64 v14; // x8
  SampleCardListViewDropObject_o *v15; // x0

  if ( (byte_4D29F32 & 1) == 0 )
  {
    sub_1C94098(&ListViewDropObject_TypeInfo);
    sub_1C94098(&SampleCardListViewDropObject_TypeInfo);
    byte_4D29F32 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !mListViewObject
    || (naturalAligment = mListViewObject->klass->_2.naturalAligment,
        v8 = ListViewDropObject_TypeInfo->_2.naturalAligment,
        naturalAligment < (unsigned int)v8)
    || (typeHierarchy = mListViewObject->klass->_2.typeHierarchy,
        typeHierarchy[v8 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo)
    || (v10 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, naturalAligment < (unsigned int)v10)
    || typeHierarchy[v10 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
  {
    sub_1C942F0(v4, v5);
  }
  v11 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  v12 = mListViewObject->klass->_2.naturalAligment;
  if ( v12 >= (unsigned int)v11
    && (v13 = mListViewObject->klass->_2.typeHierarchy, v13[v11 - 1] == (Il2CppClass *)ListViewDropObject_TypeInfo)
    && (v14 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, v12 >= (unsigned int)v14) )
  {
    if ( v13[v14 - 1] == (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
      v15 = (SampleCardListViewDropObject_o *)mListViewObject;
    else
      v15 = 0;
  }
  else
  {
    v15 = 0;
  }
  SampleCardListViewDropObject__Init_38285884(v15, 6, v6);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardUIDragDropListViewDrop__CardDragReturnStart(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  unsigned int naturalAligment; // w9
  __int64 v5; // x12
  Il2CppClass **typeHierarchy; // x10
  __int64 v7; // x12
  UnityEngine_Component_o *v8; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v10; // x21
  float y; // s4
  float z; // s5
  float v13; // s3
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4D29F31 & 1) == 0 )
  {
    sub_1C94098(&ListViewDropObject_TypeInfo);
    sub_1C94098(&SampleCardListViewDropObject_TypeInfo);
    sub_1C94098(&StringLiteral_4330/*"CardDragReturnEnd"*/);
    byte_4D29F31 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = mListViewObject->klass->_2.naturalAligment,
        v5 = ListViewDropObject_TypeInfo->_2.naturalAligment,
        naturalAligment >= (unsigned int)v5)
    && (typeHierarchy = mListViewObject->klass->_2.typeHierarchy,
        typeHierarchy[v5 - 1] == (Il2CppClass *)ListViewDropObject_TypeInfo)
    && (v7 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, naturalAligment >= (unsigned int)v7) )
  {
    if ( typeHierarchy[v7 - 1] == (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
      v8 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_18;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v8 )
    goto LABEL_18;
  v10 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v8, 0);
  if ( !dragObject )
    goto LABEL_18;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v10
    || (v30 = UnityEngine_Transform__InverseTransformPoint(v10, position, 0),
        y = v30.fields.y,
        z = v30.fields.z,
        v30.fields.y = v30.fields.x,
        v30.fields.z = y,
        v13 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    0.2,
                                                    *(UnityEngine_Vector3_o *)&v30.fields.y,
                                                    0)) == 0) )
  {
LABEL_18:
    sub_1C942F0(dragObject, method);
  }
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v14[3].monitor = gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_4330/*"CardDragReturnEnd"*/;
  v14[3].fields.m_CachedPtr = StringLiteral_4330/*"CardDragReturnEnd"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14[3].fields, v22, v23, v24, v25, v26, v27, v28);
}


void SampleCardUIDragDropListViewDrop__CardDragSwapEnd(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x20
  SampleCardListViewDropObject_o *klass; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  unsigned int naturalAligment; // w10
  __int64 v8; // x12
  Il2CppClass **typeHierarchy; // x11
  __int64 v10; // x12
  __int64 v11; // x12
  unsigned int v12; // w10
  Il2CppClass **v13; // x11
  __int64 v14; // x8
  SampleCardListViewDropObject_o *v15; // x0
  const MethodInfo *v16; // x2
  GrandQuestFolderBoardItem_o *p_dropObject; // x19
  struct SampleCardListViewDropObject_o *dropObject; // t1
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D29F37 & 1) == 0 )
  {
    sub_1C94098(&ListViewDropObject_TypeInfo);
    sub_1C94098(&SampleCardListViewDropObject_TypeInfo);
    byte_4D29F37 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !mListViewObject )
    goto LABEL_18;
  naturalAligment = mListViewObject->klass->_2.naturalAligment;
  v8 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v8 )
    goto LABEL_18;
  typeHierarchy = mListViewObject->klass->_2.typeHierarchy;
  if ( typeHierarchy[v8 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo )
    goto LABEL_18;
  v10 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v10
    || typeHierarchy[v10 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
  {
    goto LABEL_18;
  }
  v11 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  v12 = mListViewObject->klass->_2.naturalAligment;
  if ( v12 >= (unsigned int)v11
    && (v13 = mListViewObject->klass->_2.typeHierarchy, v13[v11 - 1] == (Il2CppClass *)ListViewDropObject_TypeInfo)
    && (v14 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, v12 >= (unsigned int)v14) )
  {
    v15 = v13[v14 - 1] == (Il2CppClass *)SampleCardListViewDropObject_TypeInfo
        ? (SampleCardListViewDropObject_o *)mListViewObject
        : 0LL;
  }
  else
  {
    v15 = 0;
  }
  SampleCardListViewDropObject__Init_38285884(v15, 6, v6);
  dropObject = this->fields.dropObject;
  p_dropObject = (GrandQuestFolderBoardItem_o *)&this->fields.dropObject;
  klass = dropObject;
  if ( !dropObject
    || (SampleCardListViewDropObject__Init_38285884(klass, 8, v16),
        (klass = (SampleCardListViewDropObject_o *)p_dropObject->klass) == 0) )
  {
LABEL_18:
    sub_1C942F0(klass, v5);
  }
  SampleCardListViewDropObject__Init_38285884(klass, 6, v19);
  p_dropObject->klass = 0;
  sub_1C9403C(p_dropObject, 0, v20, v21, v22, v23, v24, v25);
}


void SampleCardUIDragDropListViewDrop__CardDragSwapMove(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  SampleCardUIDragDropListViewDrop_o *v2; // x19
  SampleCardListViewDropObject_o *mListViewObject; // x20
  unsigned int naturalAligment; // w8
  __int64 v5; // x11
  Il2CppClass **typeHierarchy; // x9
  __int64 v7; // x11
  SampleCardUIDragDropListViewDrop_o *v8; // x21
  SampleCardListViewItem_o *Item; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4D29F36 & 1) == 0 )
  {
    sub_1C94098(&ListViewDropObject_TypeInfo);
    sub_1C94098(&SampleCardListViewDropObject_TypeInfo);
    this = (SampleCardUIDragDropListViewDrop_o *)sub_1C94098(&StringLiteral_4331/*"CardDragSwapEnd"*/);
    byte_4D29F36 = 1;
  }
  mListViewObject = (SampleCardListViewDropObject_o *)v2->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_13;
  naturalAligment = mListViewObject->klass->_2.naturalAligment;
  v5 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v5 )
    goto LABEL_13;
  typeHierarchy = mListViewObject->klass->_2.typeHierarchy;
  if ( typeHierarchy[v5 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo )
    goto LABEL_13;
  v7 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v7 )
    goto LABEL_13;
  if ( typeHierarchy[v7 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
    goto LABEL_13;
  this = (SampleCardUIDragDropListViewDrop_o *)SampleCardListViewDropObject__GetItem(
                                                 (SampleCardListViewDropObject_o *)v2->fields.mListViewObject,
                                                 method);
  if ( !v2->fields.dropObject )
    goto LABEL_13;
  v8 = this;
  Item = SampleCardListViewDropObject__GetItem(v2->fields.dropObject, method);
  ((void (__fastcall *)(SampleCardListViewDropObject_o *, SampleCardListViewItem_o *, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
    mListViewObject,
    Item,
    mListViewObject->klass->vtable._5_SetItem.method);
  SampleCardListViewDropObject__Init_38285884(mListViewObject, 2, v10);
  if ( !v8
    || (BYTE4(v8->fields.dragObject) = 1, (this = (SampleCardUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0)
    || (((void (__fastcall *)(SampleCardUIDragDropListViewDrop_o *, SampleCardUIDragDropListViewDrop_o *, const MethodInfo *))this->klass->vtable._5_SetBaseTransform.methodPtr)(
          this,
          v8,
          this->klass->vtable._5_SetBaseTransform.method),
        (this = (SampleCardUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0) )
  {
LABEL_13:
    sub_1C942F0(this, method);
  }
  SampleCardListViewDropObject__Init_38285884((SampleCardListViewDropObject_o *)this, 2, v11);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_4331/*"CardDragSwapEnd"*/, 0.05, 0);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardUIDragDropListViewDrop__CardDragSwapStart(
        SampleCardUIDragDropListViewDrop_o *this,
        SampleCardListViewDropObject_o *ddo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SampleCardListViewDropObject_o **p_dropObject; // x21
  __int64 v11; // x1
  struct ListViewObject_o *mListViewObject; // x8
  unsigned int naturalAligment; // w9
  __int64 v14; // x12
  Il2CppClass **typeHierarchy; // x10
  __int64 v16; // x12
  UnityEngine_Component_o *v17; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Component_o *v19; // x8
  UnityEngine_Transform_o *v20; // x21
  float y; // s4
  float z; // s5
  float v23; // s3
  SampleCardListViewDropObject_o *dropObject; // x21
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3
  float v27; // s4
  float v28; // s5
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D29F35 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewDropObject_TypeInfo);
    sub_1C94098(&SampleCardListViewDropObject_TypeInfo);
    sub_1C94098(&Method_SampleCardUIDragDropListViewDrop_CardDragSwapMove__);
    byte_4D29F35 = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = &this->fields.dropObject;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dropObject,
    (int32_t)ddo,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = mListViewObject->klass->_2.naturalAligment,
        v14 = ListViewDropObject_TypeInfo->_2.naturalAligment,
        naturalAligment >= (unsigned int)v14)
    && (typeHierarchy = mListViewObject->klass->_2.typeHierarchy,
        typeHierarchy[v14 - 1] == (Il2CppClass *)ListViewDropObject_TypeInfo)
    && (v16 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, naturalAligment >= (unsigned int)v16) )
  {
    if ( typeHierarchy[v16 - 1] == (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
      v17 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v17 = 0;
  }
  else
  {
    v17 = 0;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_21;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_21;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  v19 = (UnityEngine_Component_o *)*p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_21;
  v20 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v19, 0);
  if ( !dragObject )
    goto LABEL_21;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v20 )
    goto LABEL_21;
  v30 = UnityEngine_Transform__InverseTransformPoint(v20, position, 0);
  y = v30.fields.y;
  z = v30.fields.z;
  v30.fields.y = v30.fields.x;
  v30.fields.z = y;
  v23 = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                             this->fields.dragObject,
                                             0.2,
                                             *(UnityEngine_Vector3_o *)&v30.fields.y,
                                             0);
  if ( !dragObject
    || (LODWORD(dragObject[1].monitor) = 3,
        dropObject = this->fields.dropObject,
        v25 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v25, (Il2CppObject *)this, Method_SampleCardUIDragDropListViewDrop_CardDragSwapMove__, 0),
        !v17)
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v17, 0)) == 0
    || (v31 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !dropObject) )
  {
LABEL_21:
    sub_1C942F0(dragObject, v11);
  }
  v27 = v31.fields.y;
  v28 = v31.fields.z;
  v32.fields.x = v31.fields.x;
  v32.fields.y = v27;
  v32.fields.z = v28;
  SampleCardListViewDropObject__Init(dropObject, 7, v25, 0.0, v32, v26);
}


void SampleCardUIDragDropListViewDrop__OnDragDropRelease(
        SampleCardUIDragDropListViewDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  SampleCardUIDragDropListViewDrop_o *v4; // x19
  SampleCardListViewDropObject_o *mListViewObject; // x21
  unsigned int naturalAligment; // w8
  __int64 v7; // x11
  Il2CppClass **typeHierarchy; // x9
  __int64 v9; // x11
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  SampleCardUIDragDropListViewDrop_o *v12; // x22
  UnityEngine_Object_o *Component_object; // x23
  UnityEngine_GameObject_o *gameObject; // x24
  ListViewDropInfo_o *v15; // x25
  SampleCardListViewManager_o *v16; // x0
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *monitor; // x23
  SampleCardListViewItem_o *Item; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  v4 = this;
  if ( (byte_4D29F30 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    sub_1C94098(&ListViewDropInfo_TypeInfo);
    sub_1C94098(&ListViewDropObject_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SampleCardListViewDropObject_TypeInfo);
    this = (SampleCardUIDragDropListViewDrop_o *)sub_1C94098(&SampleCardListViewManager_TypeInfo);
    byte_4D29F30 = 1;
  }
  mListViewObject = (SampleCardListViewDropObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_31;
  naturalAligment = mListViewObject->klass->_2.naturalAligment;
  v7 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v7 )
    goto LABEL_31;
  typeHierarchy = mListViewObject->klass->_2.typeHierarchy;
  if ( typeHierarchy[v7 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo )
    goto LABEL_31;
  v9 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v9 )
    goto LABEL_31;
  if ( typeHierarchy[v9 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
    goto LABEL_31;
  this = (SampleCardUIDragDropListViewDrop_o *)SampleCardListViewDropObject__GetItem(
                                                 (SampleCardListViewDropObject_o *)v4->fields.mListViewObject,
                                                 (const MethodInfo *)surface);
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_31;
  v11 = SampleCardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v11
    || (SampleCardListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != SampleCardListViewManager_TypeInfo )
  {
    goto LABEL_31;
  }
  v12 = this;
  ((void (__fastcall *)(struct ListViewManager_o *__return_ptr, struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    mListViewObject->fields.manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0, 0);
  if ( !v12 || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_28;
  if ( !surface )
    goto LABEL_31;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0),
        v15 = (ListViewDropInfo_o *)sub_1C942E4(ListViewDropInfo_TypeInfo),
        ListViewDropInfo___ctor(v15, gameObject, surface, 0),
        this = (SampleCardUIDragDropListViewDrop_o *)SampleCardListViewManager__IsDropDropSurface(v16, v15, v17),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_28:
    SampleCardUIDragDropListViewDrop__CardDragReturnStart(v4, (const MethodInfo *)surface);
    return;
  }
  if ( !Component_object )
    goto LABEL_31;
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardUIDragDropListViewDrop_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    SampleCardUIDragDropListViewDrop__CardDragDumpStart(v4, (const MethodInfo *)surface);
    return;
  }
  if ( !monitor )
LABEL_31:
    sub_1C942F0(this, surface);
  Item = SampleCardListViewDropObject__GetItem((SampleCardListViewDropObject_o *)monitor, (const MethodInfo *)surface);
  if ( Item )
  {
    if ( Item != (SampleCardListViewItem_o *)v12 )
    {
      SampleCardUIDragDropListViewDrop__CardDragSwapStart(v4, (SampleCardListViewDropObject_o *)monitor, v20);
      return;
    }
    goto LABEL_28;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0);
  SampleCardListViewDropObject__Init_38285884(mListViewObject, 0, v21);
  ((void (__fastcall *)(SampleCardListViewDropObject_o *, _QWORD, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
    mListViewObject,
    0,
    mListViewObject->klass->vtable._5_SetItem.method);
  BYTE4(v12->fields.dragObject) = 1;
  ((void (__fastcall *)(UnityEngine_Object_o *, SampleCardUIDragDropListViewDrop_o *, const char *))monitor->klass[1]._1.name)(
    monitor,
    v12,
    monitor->klass[1]._1.namespaze);
  SampleCardListViewDropObject__Init_38285884((SampleCardListViewDropObject_o *)monitor, 6, v22);
}


void SampleCardUIDragDropListViewDrop__OnDragDropStart(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  SampleCardListViewDropObject_o *mListViewObject; // x19
  unsigned int naturalAligment; // w8
  __int64 v8; // x11
  Il2CppClass **typeHierarchy; // x9
  __int64 v10; // x11

  if ( (byte_4D29F2F & 1) == 0 )
  {
    sub_1C94098(&ListViewDropObject_TypeInfo);
    sub_1C94098(&SampleCardListViewDropObject_TypeInfo);
    byte_4D29F2F = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mListViewObject = (SampleCardListViewDropObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = mListViewObject->klass->_2.naturalAligment,
        v8 = ListViewDropObject_TypeInfo->_2.naturalAligment,
        naturalAligment < (unsigned int)v8)
    || (typeHierarchy = mListViewObject->klass->_2.typeHierarchy,
        typeHierarchy[v8 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo)
    || (v10 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, naturalAligment < (unsigned int)v10)
    || typeHierarchy[v10 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo
    || (SampleCardListViewDropObject__Init_38285884(mListViewObject, 0, v5),
        (manager = mListViewObject->fields.manager) == 0) )
  {
    sub_1C942F0(manager, v4);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._8_ItemDragStart.methodPtr)(
    manager,
    manager->klass->vtable._8_ItemDragStart.method);
}