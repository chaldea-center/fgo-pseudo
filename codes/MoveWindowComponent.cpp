void MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C561D3 & 1) == 0 )
  {
    sub_1C3E564(&System_Collections_Hashtable_TypeInfo);
    byte_4C561D3 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C3E7B0(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65000696(v3, 0);
  this->fields.table = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
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
      sub_1C3E7C0(gameObject, v5);
    }
    this->fields.closeposition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  }
}


void MoveWindowComponent__closeWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 table; // x0
  struct System_Collections_Hashtable_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  __int64 v13; // x9
  struct System_Collections_Hashtable_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  struct System_Collections_Hashtable_o *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v29; // x19
  UnityEngine_GameObject_o *v30; // x20
  int v31; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v32; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v34[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C561D2 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22424/*"onCloseComplete"*/);
    sub_1C3E564(&StringLiteral_22759/*"position"*/);
    sub_1C3E564(&StringLiteral_20948/*"isLocal"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C561D2 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = (__int64)this->fields.table;
  if ( !table )
    goto LABEL_11;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)table + 680LL))(table, *(_QWORD *)(*(_QWORD *)table + 688LL));
  v6 = this->fields.table;
  v34[0] = 1;
  table = j_il2cpp_value_box_0(bool_TypeInfo, v34, v7, v8, v9, v10, v11, v12);
  if ( !v6 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_20948/*"isLocal"*/,
    table,
    v6->klass->vtable._22_Add.method);
  v13 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v14 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v32 = v13;
  table = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v32, v15, v16, v17, v18, v19, v20);
  if ( !v14
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
          v14,
          StringLiteral_22759/*"position"*/,
          table,
          v14->klass->vtable._22_Add.method),
        (table = (__int64)this->fields.table) == 0)
    || ((*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)table + 664LL))(
          table,
          StringLiteral_22448/*"oncomplete"*/,
          StringLiteral_22424/*"onCloseComplete"*/,
          *(_QWORD *)(*(_QWORD *)table + 672LL)),
        v21 = this->fields.table,
        v31 = 1065353216,
        table = j_il2cpp_value_box_0(float_TypeInfo, &v31, v22, v23, v24, v25, v26, v27),
        !v21) )
  {
LABEL_11:
    sub_1C3E7C0(table, v4);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v21->klass->vtable._22_Add.methodPtr)(
    v21,
    StringLiteral_24091/*"time"*/,
    table,
    v21->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v29 = this->fields.table;
  v30 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63274032(v30, v29, 0);
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

  if ( (byte_4C561D1 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    sub_1C3E564(&StringLiteral_22436/*"onOpenComplete"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22759/*"position"*/);
    sub_1C3E564(&StringLiteral_20948/*"isLocal"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C561D1 = 1;
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
    StringLiteral_20948/*"isLocal"*/,
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
          StringLiteral_22759/*"position"*/,
          table,
          v12->klass->vtable._22_Add.method),
        (table = (__int64)this->fields.table) == 0)
    || ((*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)table + 664LL))(
          table,
          StringLiteral_22448/*"oncomplete"*/,
          StringLiteral_22436/*"onOpenComplete"*/,
          *(_QWORD *)(*(_QWORD *)table + 672LL)),
        v19 = this->fields.table,
        v29 = 1065353216,
        table = j_il2cpp_value_box_0(float_TypeInfo, &v29, v20, v21, v22, v23, v24, v25),
        !v19) )
  {
LABEL_11:
    sub_1C3E7C0(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v19->klass->vtable._22_Add.methodPtr)(
    v19,
    StringLiteral_24091/*"time"*/,
    table,
    v19->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v27 = this->fields.table;
  v28 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63274032(v28, v27, 0);
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
        sub_1C3E7C8(this, flg);
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v5];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_1C3E7C0(this, flg);
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