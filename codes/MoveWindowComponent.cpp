void MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937B59 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    byte_5937B59 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_21FFEBC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_76632148(v3, 0);
  this->fields.table = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.table, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
      sub_21FFECC(gameObject, v5);
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
  float z; // w9
  struct System_Collections_Hashtable_o *v8; // x20
  struct System_Collections_Hashtable_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_Collections_Hashtable_o *v12; // x19
  UnityEngine_GameObject_o *v13; // x20
  __int64 v14; // [xsp+0h] [xbp-40h] BYREF
  float v15; // [xsp+8h] [xbp-38h]
  int v16; // [xsp+18h] [xbp-28h] BYREF
  char v17[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_5937B58 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23493/*"onCloseComplete"*/);
    sub_21FFC50(&StringLiteral_23869/*"position"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_5937B58 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v6 = this->fields.table;
  v17[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(qword_594C050, v17);
  if ( !v6 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_21904/*"isLocal"*/,
    table,
    v6->klass->vtable._22_Add.method);
  z = this->fields.closeposition.fields.z;
  v8 = this->fields.table;
  v14 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v15 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v14);
  if ( !v8
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
          v8,
          StringLiteral_23869/*"position"*/,
          table,
          v8->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_23518/*"oncomplete"*/,
          StringLiteral_23493/*"onCloseComplete"*/,
          table->klass->vtable._22_Add.method),
        v9 = this->fields.table,
        v16 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(qword_594C0A0, &v16),
        !v9) )
  {
LABEL_11:
    sub_21FFECC(table, v4);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_25318/*"time"*/,
    table,
    v9->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12 = this->fields.table;
  v13 = gameObject;
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v11);
  iTween__MoveTo_75080224(v13, v12, 0);
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
  float z; // w9
  struct System_Collections_Hashtable_o *v6; // x20
  struct System_Collections_Hashtable_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_Collections_Hashtable_o *v10; // x19
  UnityEngine_GameObject_o *v11; // x20
  __int64 v12; // [xsp+0h] [xbp-40h] BYREF
  float v13; // [xsp+8h] [xbp-38h]
  int v14; // [xsp+18h] [xbp-28h] BYREF
  char v15[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_5937B57 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    sub_21FFC50(&StringLiteral_23504/*"onOpenComplete"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23869/*"position"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_5937B57 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v4 = this->fields.table;
  v15[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(qword_594C050, v15);
  if ( !v4 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_21904/*"isLocal"*/,
    table,
    v4->klass->vtable._22_Add.method);
  z = this->fields.openposition.fields.z;
  v6 = this->fields.table;
  v12 = *(_QWORD *)&this->fields.openposition.fields.x;
  v13 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v12);
  if ( !v6
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
          v6,
          StringLiteral_23869/*"position"*/,
          table,
          v6->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_23518/*"oncomplete"*/,
          StringLiteral_23504/*"onOpenComplete"*/,
          table->klass->vtable._22_Add.method),
        v7 = this->fields.table,
        v14 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(qword_594C0A0, &v14),
        !v7) )
  {
LABEL_11:
    sub_21FFECC(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_25318/*"time"*/,
    table,
    v7->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10 = this->fields.table;
  v11 = gameObject;
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v9);
  iTween__MoveTo_75080224(v11, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void MoveWindowComponent__setContentsCollider(MoveWindowComponent_o *this, bool flg, const MethodInfo *method)
{
  struct UnityEngine_Collider_array *contentscolliderlist; // x8
  MoveWindowComponent_o *v4; // x19
  __int64 v6; // x21
  int max_length; // w9

  contentscolliderlist = this->fields.contentscolliderlist;
  if ( contentscolliderlist )
  {
    v4 = this;
    v6 = 0;
    while ( 1 )
    {
      max_length = contentscolliderlist->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_21FFED4(this);
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v6];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, flg, 0);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v6;
        if ( contentscolliderlist )
          continue;
      }
      sub_21FFECC(this, flg);
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