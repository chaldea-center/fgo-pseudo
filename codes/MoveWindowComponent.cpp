void __fastcall MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4350D39 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    byte_4350D39 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39248100(v3, 0LL);
  this->fields.table = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.table, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
      sub_B7076C(gameObject, v5);
    }
    this->fields.closeposition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  }
}


void __fastcall MoveWindowComponent__closeWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v6; // x20
  __int64 v7; // x2
  struct System_Collections_Hashtable_o *v8; // x20
  float z; // w9
  __int64 v10; // x2
  struct System_Collections_Hashtable_o *v11; // x20
  __int64 v12; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v14; // x19
  UnityEngine_GameObject_o *v15; // x20
  int v16; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v17; // [xsp+10h] [xbp-20h] BYREF
  float v18; // [xsp+18h] [xbp-18h]
  char v19[4]; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4350D38 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21582/*"onCloseComplete"*/);
    sub_B70694(&StringLiteral_21866/*"position"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_4350D38 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v6 = this->fields.table;
  v19[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v19, v7);
  if ( !v6 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v6->klass->vtable._23_Add.method)(
    v6,
    StringLiteral_20250/*"isLocal"*/,
    table,
    v6->klass->vtable._24_Clear.methodPtr);
  v8 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v17 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v18 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v17, v10);
  if ( !v8
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
          v8,
          StringLiteral_21866/*"position"*/,
          table,
          v8->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21605/*"oncomplete"*/,
          StringLiteral_21582/*"onCloseComplete"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v11 = this->fields.table,
        v16 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v16, v12),
        !v11) )
  {
LABEL_12:
    sub_B7076C(table, v4);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_23053/*"time"*/,
    table,
    v11->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = this->fields.table;
  v15 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42827204(v15, v14, 0LL);
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
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x2
  struct System_Collections_Hashtable_o *v6; // x20
  float z; // w9
  __int64 v8; // x2
  struct System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v12; // x19
  UnityEngine_GameObject_o *v13; // x20
  int v14; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v15; // [xsp+10h] [xbp-20h] BYREF
  float v16; // [xsp+18h] [xbp-18h]
  char v17[4]; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4350D37 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_21594/*"onOpenComplete"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21866/*"position"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_4350D37 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v4 = this->fields.table;
  v17[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v17, v5);
  if ( !v4 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_20250/*"isLocal"*/,
    table,
    v4->klass->vtable._24_Clear.methodPtr);
  v6 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v15 = *(_QWORD *)&this->fields.openposition.fields.x;
  v16 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v15, v8);
  if ( !v6
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v6->klass->vtable._23_Add.method)(
          v6,
          StringLiteral_21866/*"position"*/,
          table,
          v6->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21605/*"oncomplete"*/,
          StringLiteral_21594/*"onOpenComplete"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v9 = this->fields.table,
        v14 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v14, v10),
        !v9) )
  {
LABEL_12:
    sub_B7076C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v9->klass->vtable._23_Add.method)(
    v9,
    StringLiteral_23053/*"time"*/,
    table,
    v9->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = this->fields.table;
  v13 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42827204(v13, v12, 0LL);
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
  __int64 v8; // x0

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
      {
        v8 = sub_B70798(this);
        sub_B70738(v8, 0LL);
      }
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v5];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0LL);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_B7076C(this, flg);
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