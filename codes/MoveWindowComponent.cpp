void MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEDBAC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Collections_Hashtable_TypeInfo);
    byte_4CEDBAC = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C7BD34(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65539536(v3, 0);
  this->fields.table = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.table, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
      sub_1C7BD40(gameObject, v5);
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
  __int64 v7; // x9
  struct System_Collections_Hashtable_o *v8; // x20
  struct System_Collections_Hashtable_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v11; // x19
  UnityEngine_GameObject_o *v12; // x20
  int v13; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v14; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v16[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CEDBAB & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22614/*"onCloseComplete"*/);
    sub_1C7BAE8(&StringLiteral_22955/*"position"*/);
    sub_1C7BAE8(&StringLiteral_21107/*"isLocal"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CEDBAB = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v6 = this->fields.table;
  v16[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v16);
  if ( !v6 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_21107/*"isLocal"*/,
    table,
    v6->klass->vtable._22_Add.method);
  v7 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v8 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v14 = v7;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v14);
  if ( !v8
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
          v8,
          StringLiteral_22955/*"position"*/,
          table,
          v8->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_22637/*"oncomplete"*/,
          StringLiteral_22614/*"onCloseComplete"*/,
          table->klass->vtable._22_Add.method),
        v9 = this->fields.table,
        v13 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v13),
        !v9) )
  {
LABEL_11:
    sub_1C7BD40(table, v4);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_24308/*"time"*/,
    table,
    v9->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = this->fields.table;
  v12 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63814476(v12, v11, 0);
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
  __int64 v5; // x9
  struct System_Collections_Hashtable_o *v6; // x20
  struct System_Collections_Hashtable_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v9; // x19
  UnityEngine_GameObject_o *v10; // x20
  int v11; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v12; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v14[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CEDBAA & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22625/*"onOpenComplete"*/);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22955/*"position"*/);
    sub_1C7BAE8(&StringLiteral_21107/*"isLocal"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CEDBAA = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v4 = this->fields.table;
  v14[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v14);
  if ( !v4 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_21107/*"isLocal"*/,
    table,
    v4->klass->vtable._22_Add.method);
  v5 = *(_QWORD *)&this->fields.openposition.fields.x;
  v6 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v12 = v5;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v12);
  if ( !v6
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
          v6,
          StringLiteral_22955/*"position"*/,
          table,
          v6->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_22637/*"oncomplete"*/,
          StringLiteral_22625/*"onOpenComplete"*/,
          table->klass->vtable._22_Add.method),
        v7 = this->fields.table,
        v11 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v11),
        !v7) )
  {
LABEL_11:
    sub_1C7BD40(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_24308/*"time"*/,
    table,
    v7->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9 = this->fields.table;
  v10 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63814476(v10, v9, 0);
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
        sub_1C7BD48(this);
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v5];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_1C7BD40(this, flg);
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