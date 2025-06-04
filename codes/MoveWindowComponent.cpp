void __fastcall MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B014C7 & 1) == 0 )
  {
    sub_1BC3008(&System_Collections_Hashtable_TypeInfo, method);
    byte_4B014C7 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1BC3254(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63711480(v3, 0LL);
  this->fields.table = v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  this->fields.closepositionadjust = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveWindowComponent__Awake(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  MoveWindowComponent__setContentsCollider(this, 0, v2);
  if ( this->fields.closepositionadjust )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_1BC3264(gameObject, v5);
    }
    this->fields.closeposition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  }
}


void __fastcall MoveWindowComponent__closeWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x9
  struct System_Collections_Hashtable_o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Collections_Hashtable_o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v28; // x19
  UnityEngine_GameObject_o *v29; // x20
  int v30; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v31; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v33[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B014C6 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, method);
    sub_1BC3008(&float_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v6);
    sub_1BC3008(&StringLiteral_22187/*"onCloseComplete"*/, v7);
    sub_1BC3008(&StringLiteral_22513/*"position"*/, v8);
    sub_1BC3008(&StringLiteral_20726/*"isLocal"*/, v9);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v10);
    sub_1BC3008(&iTween_TypeInfo, v11);
    byte_4B014C6 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._23_Clear.method)(
    table,
    table->klass->vtable._24_Clone.methodPtr);
  v14 = this->fields.table;
  v33[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v33, v15, v16, v17);
  if ( !v14 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_20726/*"isLocal"*/,
    table,
    v14->klass->vtable._23_Clear.methodPtr);
  v18 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v19 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v31 = v18;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(
                                                     UnityEngine_Vector3_TypeInfo,
                                                     &v31,
                                                     v20,
                                                     v21,
                                                     v22);
  if ( !v19
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v19->klass->vtable._22_Add.method)(
          v19,
          StringLiteral_22513/*"position"*/,
          table,
          v19->klass->vtable._23_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._22_Add.method)(
          table,
          StringLiteral_22211/*"oncomplete"*/,
          StringLiteral_22187/*"onCloseComplete"*/,
          table->klass->vtable._23_Clear.methodPtr),
        v23 = this->fields.table,
        v30 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v30, v24, v25, v26),
        !v23) )
  {
LABEL_11:
    sub_1BC3264(table, v12);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v23->klass->vtable._22_Add.method)(
    v23,
    StringLiteral_23833/*"time"*/,
    table,
    v23->klass->vtable._23_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28 = this->fields.table;
  v29 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61986212(v29, v28, 0LL);
}


void __fastcall MoveWindowComponent__onCloseComplete(MoveWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.flgopen = 0;
}


void __fastcall MoveWindowComponent__onOpenComplete(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MoveWindowComponent__setContentsCollider(this, 1, v2);
  this->fields.flgopen = 1;
}


void __fastcall MoveWindowComponent__openWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x9
  struct System_Collections_Hashtable_o *v17; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct System_Collections_Hashtable_o *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v26; // x19
  UnityEngine_GameObject_o *v27; // x20
  int v28; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v29; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v31[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B014C5 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, method);
    sub_1BC3008(&float_TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_22199/*"onOpenComplete"*/, v5);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v6);
    sub_1BC3008(&StringLiteral_22513/*"position"*/, v7);
    sub_1BC3008(&StringLiteral_20726/*"isLocal"*/, v8);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v9);
    sub_1BC3008(&iTween_TypeInfo, v10);
    byte_4B014C5 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._23_Clear.method)(
    table,
    table->klass->vtable._24_Clone.methodPtr);
  v12 = this->fields.table;
  v31[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v31, v13, v14, v15);
  if ( !v12 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v12->klass->vtable._22_Add.method)(
    v12,
    StringLiteral_20726/*"isLocal"*/,
    table,
    v12->klass->vtable._23_Clear.methodPtr);
  v16 = *(_QWORD *)&this->fields.openposition.fields.x;
  v17 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v29 = v16;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(
                                                     UnityEngine_Vector3_TypeInfo,
                                                     &v29,
                                                     v18,
                                                     v19,
                                                     v20);
  if ( !v17
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v17->klass->vtable._22_Add.method)(
          v17,
          StringLiteral_22513/*"position"*/,
          table,
          v17->klass->vtable._23_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._22_Add.method)(
          table,
          StringLiteral_22211/*"oncomplete"*/,
          StringLiteral_22199/*"onOpenComplete"*/,
          table->klass->vtable._23_Clear.methodPtr),
        v21 = this->fields.table,
        v28 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v28, v22, v23, v24),
        !v21) )
  {
LABEL_11:
    sub_1BC3264(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v21->klass->vtable._22_Add.method)(
    v21,
    StringLiteral_23833/*"time"*/,
    table,
    v21->klass->vtable._23_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26 = this->fields.table;
  v27 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61986212(v27, v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MoveWindowComponent__setContentsCollider(
        MoveWindowComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct UnityEngine_Collider_array *contentscolliderlist; // x8
  MoveWindowComponent_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  contentscolliderlist = this->fields.contentscolliderlist;
  if ( contentscolliderlist )
  {
    v4 = this;
    v5 = 0LL;
    v6 = flg;
    while ( 1 )
    {
      max_length = contentscolliderlist->max_length;
      if ( (int)v5 >= max_length )
        break;
      if ( (unsigned int)v5 >= max_length )
        sub_1BC326C(this, flg, method);
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v5];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0LL);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_1BC3264(this, flg);
    }
  }
}


void __fastcall MoveWindowComponent__tglWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.flgopen )
    MoveWindowComponent__closeWindow(this, method);
  else
    MoveWindowComponent__openWindow(this, method);
}