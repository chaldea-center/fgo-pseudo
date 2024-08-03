void __fastcall MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Hashtable_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB958 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, method);
    byte_49FB958 = 1;
  }
  v4 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, method, v2);
  System_Collections_Hashtable___ctor_61954820(v4, 0LL);
  this->fields.table = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.table, (int32_t)v4, v5, v6);
  this->fields.closepositionadjust = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveWindowComponent__Awake(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0

  MoveWindowComponent__setContentsCollider(this, 0, v2);
  if ( this->fields.closepositionadjust )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_1B64324(gameObject);
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
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v13; // x20
  __int64 v14; // x9
  struct System_Collections_Hashtable_o *v15; // x20
  struct System_Collections_Hashtable_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v18; // x19
  UnityEngine_GameObject_o *v19; // x20
  int v20; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v21; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v23[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_49FB957 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&float_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v6);
    sub_1B640C8(&StringLiteral_22161/*"onCloseComplete"*/, v7);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v8);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v9);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v10);
    sub_1B640C8(&iTween_TypeInfo, v11);
    byte_49FB957 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v13 = this->fields.table;
  v23[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v23);
  if ( !v13 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_20716/*"isLocal"*/,
    table,
    v13->klass->vtable._24_Clear.methodPtr);
  v14 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v15 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v21 = v14;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v21);
  if ( !v15
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
          v15,
          StringLiteral_22482/*"position"*/,
          table,
          v15->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_22185/*"oncomplete"*/,
          StringLiteral_22161/*"onCloseComplete"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v16 = this->fields.table,
        v20 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v20),
        !v16) )
  {
LABEL_11:
    sub_1B64324(table);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_23830/*"time"*/,
    table,
    v16->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = this->fields.table;
  v19 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_59912984(v19, v18, 0LL);
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
  __int64 v13; // x9
  struct System_Collections_Hashtable_o *v14; // x20
  struct System_Collections_Hashtable_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v17; // x19
  UnityEngine_GameObject_o *v18; // x20
  int v19; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v20; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v22[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_49FB956 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&float_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_22173/*"onOpenComplete"*/, v5);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v6);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v7);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v8);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v9);
    sub_1B640C8(&iTween_TypeInfo, v10);
    byte_49FB956 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v12 = this->fields.table;
  v22[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v22);
  if ( !v12 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v12->klass->vtable._23_Add.method)(
    v12,
    StringLiteral_20716/*"isLocal"*/,
    table,
    v12->klass->vtable._24_Clear.methodPtr);
  v13 = *(_QWORD *)&this->fields.openposition.fields.x;
  v14 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v20 = v13;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v20);
  if ( !v14
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
          v14,
          StringLiteral_22482/*"position"*/,
          table,
          v14->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_22185/*"oncomplete"*/,
          StringLiteral_22173/*"onOpenComplete"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v15 = this->fields.table,
        v19 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v19),
        !v15) )
  {
LABEL_11:
    sub_1B64324(table);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_23830/*"time"*/,
    table,
    v15->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = this->fields.table;
  v18 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_59912984(v18, v17, 0LL);
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
        sub_1B6432C(this, flg);
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v5];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0LL);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_1B64324(this);
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