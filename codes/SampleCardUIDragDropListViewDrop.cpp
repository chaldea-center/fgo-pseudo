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
  if ( (byte_4C4077F & 1) == 0 )
  {
    sub_1C37058(&ListViewDropObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    this = (SampleCardUIDragDropListViewDrop_o *)sub_1C37058(&SampleCardListViewObject_TypeInfo);
    byte_4C4077F = 1;
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
      SampleCardListViewObject__Init_37643380((SampleCardListViewObject_o *)v10, 6, v11);
      goto LABEL_20;
    }
LABEL_21:
    sub_1C372B4(this);
  }
LABEL_20:
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v2, 0, 0);
  SampleCardListViewDropObject__Init_37635012(mListViewObject, 0, v12);
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
  float x; // s9
  float y; // s10
  float z; // s11
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Color_o v17; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C4077E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4326/*"CardDragDumpEnd"*/);
    byte_4C4077E = 1;
  }
  v17.fields.r = 0.0;
  v17.fields.g = 0.0;
  v17.fields.b = 0.0;
  v17.fields.a = 0.0;
  dragObject = (UnityEngine_GameObject_o *)TweenColor__Begin(this->fields.dragObject, 0.2, v17, 0);
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
  if ( !byte_4C3ECEB )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3ECEB = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v16.fields.x = x + (float)(static_fields->downVector.fields.x * 50.0);
  v16.fields.y = y + (float)(static_fields->downVector.fields.y * 50.0);
  v16.fields.z = z + (float)(static_fields->downVector.fields.z * 50.0);
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(this->fields.dragObject, 0.2, v16, 0);
  if ( !dragObject )
LABEL_10:
    sub_1C372B4(dragObject);
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11);
  v12 = StringLiteral_4326/*"CardDragDumpEnd"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_4326/*"CardDragDumpEnd"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8[3].fields, v12, v13, v14);
}


void SampleCardUIDragDropListViewDrop__CardDragReturnEnd(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v4; // x0
  const MethodInfo *v5; // x2
  unsigned int naturalAligment; // w10
  __int64 v7; // x12
  Il2CppClass **typeHierarchy; // x11
  __int64 v9; // x12
  __int64 v10; // x12
  unsigned int v11; // w10
  Il2CppClass **v12; // x11
  __int64 v13; // x8
  SampleCardListViewDropObject_o *v14; // x0

  if ( (byte_4C4077D & 1) == 0 )
  {
    sub_1C37058(&ListViewDropObject_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    byte_4C4077D = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !mListViewObject
    || (naturalAligment = mListViewObject->klass->_2.naturalAligment,
        v7 = ListViewDropObject_TypeInfo->_2.naturalAligment,
        naturalAligment < (unsigned int)v7)
    || (typeHierarchy = mListViewObject->klass->_2.typeHierarchy,
        typeHierarchy[v7 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo)
    || (v9 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, naturalAligment < (unsigned int)v9)
    || typeHierarchy[v9 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
  {
    sub_1C372B4(v4);
  }
  v10 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  v11 = mListViewObject->klass->_2.naturalAligment;
  if ( v11 >= (unsigned int)v10
    && (v12 = mListViewObject->klass->_2.typeHierarchy, v12[v10 - 1] == (Il2CppClass *)ListViewDropObject_TypeInfo)
    && (v13 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, v11 >= (unsigned int)v13) )
  {
    if ( v12[v13 - 1] == (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
      v14 = (SampleCardListViewDropObject_o *)mListViewObject;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  SampleCardListViewDropObject__Init_37635012(v14, 6, v5);
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
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C4077C & 1) == 0 )
  {
    sub_1C37058(&ListViewDropObject_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    sub_1C37058(&StringLiteral_4327/*"CardDragReturnEnd"*/);
    byte_4C4077C = 1;
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
    || (v22 = UnityEngine_Transform__InverseTransformPoint(v10, position, 0),
        y = v22.fields.y,
        z = v22.fields.z,
        v22.fields.y = v22.fields.x,
        v22.fields.z = y,
        v13 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    0.2,
                                                    *(UnityEngine_Vector3_o *)&v22.fields.y,
                                                    0)) == 0) )
  {
LABEL_18:
    sub_1C372B4(dragObject);
  }
  v14 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v14[3].monitor = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17);
  v18 = StringLiteral_4327/*"CardDragReturnEnd"*/;
  v14[3].fields.m_CachedPtr = StringLiteral_4327/*"CardDragReturnEnd"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14[3].fields, v18, v19, v20);
}


void SampleCardUIDragDropListViewDrop__CardDragSwapEnd(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x20
  SampleCardListViewDropObject_o *klass; // x0
  const MethodInfo *v5; // x2
  unsigned int naturalAligment; // w10
  __int64 v7; // x12
  Il2CppClass **typeHierarchy; // x11
  __int64 v9; // x12
  __int64 v10; // x12
  unsigned int v11; // w10
  Il2CppClass **v12; // x11
  __int64 v13; // x8
  SampleCardListViewDropObject_o *v14; // x0
  const MethodInfo *v15; // x2
  CGThumbnailListItem_o *p_dropObject; // x19
  struct SampleCardListViewDropObject_o *dropObject; // t1
  const MethodInfo *v18; // x2
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C40782 & 1) == 0 )
  {
    sub_1C37058(&ListViewDropObject_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    byte_4C40782 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !mListViewObject )
    goto LABEL_18;
  naturalAligment = mListViewObject->klass->_2.naturalAligment;
  v7 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v7 )
    goto LABEL_18;
  typeHierarchy = mListViewObject->klass->_2.typeHierarchy;
  if ( typeHierarchy[v7 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo )
    goto LABEL_18;
  v9 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( naturalAligment < (unsigned int)v9
    || typeHierarchy[v9 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
  {
    goto LABEL_18;
  }
  v10 = ListViewDropObject_TypeInfo->_2.naturalAligment;
  v11 = mListViewObject->klass->_2.naturalAligment;
  if ( v11 >= (unsigned int)v10
    && (v12 = mListViewObject->klass->_2.typeHierarchy, v12[v10 - 1] == (Il2CppClass *)ListViewDropObject_TypeInfo)
    && (v13 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, v11 >= (unsigned int)v13) )
  {
    v14 = v12[v13 - 1] == (Il2CppClass *)SampleCardListViewDropObject_TypeInfo
        ? (SampleCardListViewDropObject_o *)mListViewObject
        : 0LL;
  }
  else
  {
    v14 = 0;
  }
  SampleCardListViewDropObject__Init_37635012(v14, 6, v5);
  dropObject = this->fields.dropObject;
  p_dropObject = (CGThumbnailListItem_o *)&this->fields.dropObject;
  klass = dropObject;
  if ( !dropObject
    || (SampleCardListViewDropObject__Init_37635012(klass, 8, v15),
        (klass = (SampleCardListViewDropObject_o *)p_dropObject->klass) == 0) )
  {
LABEL_18:
    sub_1C372B4(klass);
  }
  SampleCardListViewDropObject__Init_37635012(klass, 6, v18);
  p_dropObject->klass = 0;
  sub_1C36FFC(p_dropObject, 0, v19, v20);
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
  const MethodInfo *v8; // x1
  SampleCardUIDragDropListViewDrop_o *v9; // x21
  SampleCardListViewItem_o *Item; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  v2 = this;
  if ( (byte_4C40781 & 1) == 0 )
  {
    sub_1C37058(&ListViewDropObject_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    this = (SampleCardUIDragDropListViewDrop_o *)sub_1C37058(&StringLiteral_4328/*"CardDragSwapEnd"*/);
    byte_4C40781 = 1;
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
  v9 = this;
  Item = SampleCardListViewDropObject__GetItem(v2->fields.dropObject, v8);
  ((void (__fastcall *)(SampleCardListViewDropObject_o *, SampleCardListViewItem_o *, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
    mListViewObject,
    Item,
    mListViewObject->klass->vtable._5_SetItem.method);
  SampleCardListViewDropObject__Init_37635012(mListViewObject, 2, v11);
  if ( !v9
    || (BYTE4(v9->fields.dragObject) = 1, (this = (SampleCardUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0)
    || (((void (__fastcall *)(SampleCardUIDragDropListViewDrop_o *, SampleCardUIDragDropListViewDrop_o *, const MethodInfo *))this->klass->vtable._5_SetBaseTransform.methodPtr)(
          this,
          v9,
          this->klass->vtable._5_SetBaseTransform.method),
        (this = (SampleCardUIDragDropListViewDrop_o *)v2->fields.dropObject) == 0) )
  {
LABEL_13:
    sub_1C372B4(this);
  }
  SampleCardListViewDropObject__Init_37635012((SampleCardListViewDropObject_o *)this, 2, v12);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_4328/*"CardDragSwapEnd"*/, 0.05, 0);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardUIDragDropListViewDrop__CardDragSwapStart(
        SampleCardUIDragDropListViewDrop_o *this,
        SampleCardListViewDropObject_o *ddo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SampleCardListViewDropObject_o **p_dropObject; // x21
  struct ListViewObject_o *mListViewObject; // x8
  unsigned int naturalAligment; // w9
  __int64 v9; // x12
  Il2CppClass **typeHierarchy; // x10
  __int64 v11; // x12
  UnityEngine_Component_o *v12; // x20
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Component_o *v14; // x8
  UnityEngine_Transform_o *v15; // x21
  float y; // s4
  float z; // s5
  float v18; // s3
  SampleCardListViewDropObject_o *dropObject; // x21
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3
  float v22; // s4
  float v23; // s5
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C40780 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ListViewDropObject_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    sub_1C37058(&Method_SampleCardUIDragDropListViewDrop_CardDragSwapMove__);
    byte_4C40780 = 1;
  }
  this->fields.dropObject = ddo;
  p_dropObject = &this->fields.dropObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dropObject, (int32_t)ddo, (int32_t)method, v3);
  mListViewObject = this->fields.mListViewObject;
  if ( mListViewObject
    && (naturalAligment = mListViewObject->klass->_2.naturalAligment,
        v9 = ListViewDropObject_TypeInfo->_2.naturalAligment,
        naturalAligment >= (unsigned int)v9)
    && (typeHierarchy = mListViewObject->klass->_2.typeHierarchy,
        typeHierarchy[v9 - 1] == (Il2CppClass *)ListViewDropObject_TypeInfo)
    && (v11 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, naturalAligment >= (unsigned int)v11) )
  {
    if ( typeHierarchy[v11 - 1] == (Il2CppClass *)SampleCardListViewDropObject_TypeInfo )
      v12 = (UnityEngine_Component_o *)this->fields.mListViewObject;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_21;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_21;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  v14 = (UnityEngine_Component_o *)*p_dropObject;
  if ( !*p_dropObject )
    goto LABEL_21;
  v15 = (UnityEngine_Transform_o *)dragObject;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0);
  if ( !dragObject )
    goto LABEL_21;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !v15 )
    goto LABEL_21;
  v25 = UnityEngine_Transform__InverseTransformPoint(v15, position, 0);
  y = v25.fields.y;
  z = v25.fields.z;
  v25.fields.y = v25.fields.x;
  v25.fields.z = y;
  v18 = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                             this->fields.dragObject,
                                             0.2,
                                             *(UnityEngine_Vector3_o *)&v25.fields.y,
                                             0);
  if ( !dragObject
    || (LODWORD(dragObject[1].monitor) = 3,
        dropObject = this->fields.dropObject,
        v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v20, (Il2CppObject *)this, Method_SampleCardUIDragDropListViewDrop_CardDragSwapMove__, 0),
        !v12)
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0)) == 0
    || (v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !dropObject) )
  {
LABEL_21:
    sub_1C372B4(dragObject);
  }
  v22 = v26.fields.y;
  v23 = v26.fields.z;
  v27.fields.x = v26.fields.x;
  v27.fields.y = v22;
  v27.fields.z = v23;
  SampleCardListViewDropObject__Init(dropObject, 7, v20, 0.0, v27, v21);
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
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *Component_object; // x23
  UnityEngine_GameObject_o *gameObject; // x24
  ListViewDropInfo_o *v16; // x25
  SampleCardListViewManager_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *monitor; // x23
  const MethodInfo *v20; // x1
  SampleCardListViewItem_o *Item; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2

  v4 = this;
  if ( (byte_4C4077B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    sub_1C37058(&ListViewDropInfo_TypeInfo);
    sub_1C37058(&ListViewDropObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    this = (SampleCardUIDragDropListViewDrop_o *)sub_1C37058(&SampleCardListViewManager_TypeInfo);
    byte_4C4077B = 1;
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
                                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0),
        v16 = (ListViewDropInfo_o *)sub_1C372A4(ListViewDropInfo_TypeInfo),
        ListViewDropInfo___ctor(v16, gameObject, surface, 0),
        this = (SampleCardUIDragDropListViewDrop_o *)SampleCardListViewManager__IsDropDropSurface(v17, v16, v18),
        ((unsigned __int8)this & 1) == 0) )
  {
LABEL_28:
    SampleCardUIDragDropListViewDrop__CardDragReturnStart(v4, v13);
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
    SampleCardUIDragDropListViewDrop__CardDragDumpStart(v4, v20);
    return;
  }
  if ( !monitor )
LABEL_31:
    sub_1C372B4(this);
  Item = SampleCardListViewDropObject__GetItem((SampleCardListViewDropObject_o *)monitor, v20);
  if ( Item )
  {
    if ( Item != (SampleCardListViewItem_o *)v12 )
    {
      SampleCardUIDragDropListViewDrop__CardDragSwapStart(v4, (SampleCardListViewDropObject_o *)monitor, v22);
      return;
    }
    goto LABEL_28;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, surface, 0);
  SampleCardListViewDropObject__Init_37635012(mListViewObject, 0, v23);
  ((void (__fastcall *)(SampleCardListViewDropObject_o *, _QWORD, const MethodInfo *))mListViewObject->klass->vtable._5_SetItem.methodPtr)(
    mListViewObject,
    0,
    mListViewObject->klass->vtable._5_SetItem.method);
  BYTE4(v12->fields.dragObject) = 1;
  ((void (__fastcall *)(UnityEngine_Object_o *, SampleCardUIDragDropListViewDrop_o *, const char *))monitor->klass[1]._1.name)(
    monitor,
    v12,
    monitor->klass[1]._1.namespaze);
  SampleCardListViewDropObject__Init_37635012((SampleCardListViewDropObject_o *)monitor, 6, v24);
}


void SampleCardUIDragDropListViewDrop__OnDragDropStart(
        SampleCardUIDragDropListViewDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  const MethodInfo *v4; // x2
  SampleCardListViewDropObject_o *mListViewObject; // x19
  unsigned int naturalAligment; // w8
  __int64 v7; // x11
  Il2CppClass **typeHierarchy; // x9
  __int64 v9; // x11

  if ( (byte_4C4077A & 1) == 0 )
  {
    sub_1C37058(&ListViewDropObject_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    byte_4C4077A = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mListViewObject = (SampleCardListViewDropObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (naturalAligment = mListViewObject->klass->_2.naturalAligment,
        v7 = ListViewDropObject_TypeInfo->_2.naturalAligment,
        naturalAligment < (unsigned int)v7)
    || (typeHierarchy = mListViewObject->klass->_2.typeHierarchy,
        typeHierarchy[v7 - 1] != (Il2CppClass *)ListViewDropObject_TypeInfo)
    || (v9 = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment, naturalAligment < (unsigned int)v9)
    || typeHierarchy[v9 - 1] != (Il2CppClass *)SampleCardListViewDropObject_TypeInfo
    || (SampleCardListViewDropObject__Init_37635012(mListViewObject, 0, v4),
        (manager = mListViewObject->fields.manager) == 0) )
  {
    sub_1C372B4(manager);
  }
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._8_ItemDragStart.methodPtr)(
    manager,
    manager->klass->vtable._8_ItemDragStart.method);
}