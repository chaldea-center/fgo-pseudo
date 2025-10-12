void MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C36E3A & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Hashtable_TypeInfo);
    byte_4C36E3A = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C32E6C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64882772(v3, 0);
  this->fields.table = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  this->fields.closepositionadjust = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MoveWindowComponent__Awake(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0

  MoveWindowComponent__setContentsCollider(this, 0, v2);
  if ( this->fields.closepositionadjust )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_1C32E7C(gameObject);
    }
    this->fields.closeposition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  }
}


void MoveWindowComponent__closeWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 table; // x0
  struct System_Collections_Hashtable_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  __int64 v12; // x9
  struct System_Collections_Hashtable_o *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  struct System_Collections_Hashtable_o *v20; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v28; // x19
  UnityEngine_GameObject_o *v29; // x20
  int v30; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v31; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v33[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C36E39 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22403/*"onCloseComplete"*/);
    sub_1C32C20(&StringLiteral_22736/*"position"*/);
    sub_1C32C20(&StringLiteral_20927/*"isLocal"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C36E39 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = (__int64)this->fields.table;
  if ( !table )
    goto LABEL_11;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)table + 680LL))(table, *(_QWORD *)(*(_QWORD *)table + 688LL));
  v5 = this->fields.table;
  v33[0] = 1;
  table = j_il2cpp_value_box_0(bool_TypeInfo, v33, v6, v7, v8, v9, v10, v11);
  if ( !v5 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_20927/*"isLocal"*/,
    table,
    v5->klass->vtable._22_Add.method);
  v12 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v13 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v31 = v12;
  table = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v31, v14, v15, v16, v17, v18, v19);
  if ( !v13
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
          v13,
          StringLiteral_22736/*"position"*/,
          table,
          v13->klass->vtable._22_Add.method),
        (table = (__int64)this->fields.table) == 0)
    || ((*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)table + 664LL))(
          table,
          StringLiteral_22427/*"oncomplete"*/,
          StringLiteral_22403/*"onCloseComplete"*/,
          *(_QWORD *)(*(_QWORD *)table + 672LL)),
        v20 = this->fields.table,
        v30 = 1065353216,
        table = j_il2cpp_value_box_0(float_TypeInfo, &v30, v21, v22, v23, v24, v25, v26),
        !v20) )
  {
LABEL_11:
    sub_1C32E7C(table);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v20->klass->vtable._22_Add.methodPtr)(
    v20,
    StringLiteral_24067/*"time"*/,
    table,
    v20->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v28 = this->fields.table;
  v29 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63156108(v29, v28, 0);
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
  __int64 table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 v11; // x9
  struct System_Collections_Hashtable_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  struct System_Collections_Hashtable_o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v27; // x19
  UnityEngine_GameObject_o *v28; // x20
  int v29; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v30; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v32[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C36E38 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    sub_1C32C20(&StringLiteral_22415/*"onOpenComplete"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22736/*"position"*/);
    sub_1C32C20(&StringLiteral_20927/*"isLocal"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C36E38 = 1;
  }
  table = (__int64)this->fields.table;
  if ( !table )
    goto LABEL_11;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)table + 680LL))(table, *(_QWORD *)(*(_QWORD *)table + 688LL));
  v4 = this->fields.table;
  v32[0] = 1;
  table = j_il2cpp_value_box_0(bool_TypeInfo, v32, v5, v6, v7, v8, v9, v10);
  if ( !v4 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_20927/*"isLocal"*/,
    table,
    v4->klass->vtable._22_Add.method);
  v11 = *(_QWORD *)&this->fields.openposition.fields.x;
  v12 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v30 = v11;
  table = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v30, v13, v14, v15, v16, v17, v18);
  if ( !v12
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
          v12,
          StringLiteral_22736/*"position"*/,
          table,
          v12->klass->vtable._22_Add.method),
        (table = (__int64)this->fields.table) == 0)
    || ((*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)table + 664LL))(
          table,
          StringLiteral_22427/*"oncomplete"*/,
          StringLiteral_22415/*"onOpenComplete"*/,
          *(_QWORD *)(*(_QWORD *)table + 672LL)),
        v19 = this->fields.table,
        v29 = 1065353216,
        table = j_il2cpp_value_box_0(float_TypeInfo, &v29, v20, v21, v22, v23, v24, v25),
        !v19) )
  {
LABEL_11:
    sub_1C32E7C(table);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v19->klass->vtable._22_Add.methodPtr)(
    v19,
    StringLiteral_24067/*"time"*/,
    table,
    v19->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v27 = this->fields.table;
  v28 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63156108(v28, v27, 0);
}


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
        sub_1C32E84(this);
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v5];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_1C32E7C(this);
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