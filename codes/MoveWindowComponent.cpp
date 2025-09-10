void MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C26762 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    byte_4C26762 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v3, 0);
  this->fields.table = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  this->fields.closepositionadjust = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MoveWindowComponent__Awake(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  MoveWindowComponent__setContentsCollider(this, 0, v2);
  if ( this->fields.closepositionadjust )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_1C2D6EC(gameObject, v5);
    }
    this->fields.closeposition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  }
}


void MoveWindowComponent__closeWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x9
  struct System_Collections_Hashtable_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct System_Collections_Hashtable_o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v20; // x19
  UnityEngine_GameObject_o *v21; // x20
  int v22; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v23; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v25[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C26761 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22386/*"onCloseComplete"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C26761 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v6 = this->fields.table;
  v25[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v25, v7, v8, v9);
  if ( !v6 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_20915/*"isLocal"*/,
    table,
    v6->klass->vtable._22_Add.method);
  v10 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v11 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v23 = v10;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(
                                                     UnityEngine_Vector3_TypeInfo,
                                                     &v23,
                                                     v12,
                                                     v13,
                                                     v14);
  if ( !v11
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
          v11,
          StringLiteral_22719/*"position"*/,
          table,
          v11->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_22410/*"oncomplete"*/,
          StringLiteral_22386/*"onCloseComplete"*/,
          table->klass->vtable._22_Add.method),
        v15 = this->fields.table,
        v22 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v22, v16, v17, v18),
        !v15) )
  {
LABEL_11:
    sub_1C2D6EC(table, v4);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
    v15,
    StringLiteral_24049/*"time"*/,
    table,
    v15->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v20 = this->fields.table;
  v21 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(v21, v20, 0);
}


void MoveWindowComponent__onCloseComplete(MoveWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.flgopen = 0;
}


void MoveWindowComponent__onOpenComplete(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MoveWindowComponent__setContentsCollider(this, 1, v2);
  this->fields.flgopen = 1;
}


void MoveWindowComponent__openWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x9
  struct System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct System_Collections_Hashtable_o *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v18; // x19
  UnityEngine_GameObject_o *v19; // x20
  int v20; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v21; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v23[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C26760 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_22398/*"onOpenComplete"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C26760 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v4 = this->fields.table;
  v23[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v23, v5, v6, v7);
  if ( !v4 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_20915/*"isLocal"*/,
    table,
    v4->klass->vtable._22_Add.method);
  v8 = *(_QWORD *)&this->fields.openposition.fields.x;
  v9 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v21 = v8;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(
                                                     UnityEngine_Vector3_TypeInfo,
                                                     &v21,
                                                     v10,
                                                     v11,
                                                     v12);
  if ( !v9
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
          v9,
          StringLiteral_22719/*"position"*/,
          table,
          v9->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_22410/*"oncomplete"*/,
          StringLiteral_22398/*"onOpenComplete"*/,
          table->klass->vtable._22_Add.method),
        v13 = this->fields.table,
        v20 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v20, v14, v15, v16),
        !v13) )
  {
LABEL_11:
    sub_1C2D6EC(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_24049/*"time"*/,
    table,
    v13->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v18 = this->fields.table;
  v19 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(v19, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void MoveWindowComponent__setContentsCollider(MoveWindowComponent_o *this, bool flg, const MethodInfo *method)
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
    v5 = 0;
    v6 = flg;
    while ( 1 )
    {
      max_length = contentscolliderlist->max_length;
      if ( (int)v5 >= max_length )
        break;
      if ( (unsigned int)v5 >= max_length )
        sub_1C2D6F4(this, flg, method);
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v5];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_1C2D6EC(this, flg);
    }
  }
}


void MoveWindowComponent__tglWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.flgopen )
    MoveWindowComponent__closeWindow(this, method);
  else
    MoveWindowComponent__openWindow(this, method);
}