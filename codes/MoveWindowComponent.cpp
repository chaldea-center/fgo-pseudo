void __fastcall MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  System_Collections_Hashtable_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B156FA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, method, v2);
    byte_4B156FA = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, method, v2, v3);
  System_Collections_Hashtable___ctor_62980980(v5, 0LL);
  this->fields.table = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
      sub_1BCAA3C(gameObject, v5);
    }
    this->fields.closeposition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  }
}


void __fastcall MoveWindowComponent__closeWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v22; // x20
  __int64 v23; // x9
  struct System_Collections_Hashtable_o *v24; // x20
  struct System_Collections_Hashtable_o *v25; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  System_Collections_Hashtable_o *v28; // x19
  UnityEngine_GameObject_o *v29; // x20
  int v30; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v31; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v33[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B156F9 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&float_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22489/*"onCloseComplete"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v16, v17);
    sub_1BCA7E0(&iTween_TypeInfo, v18, v19);
    byte_4B156F9 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v22 = this->fields.table;
  v33[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v33);
  if ( !v22 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21024/*"isLocal"*/,
    table,
    v22->klass->vtable._24_Clear.methodPtr);
  v23 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v24 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v31 = v23;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v31);
  if ( !v24
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
          v24,
          StringLiteral_22815/*"position"*/,
          table,
          v24->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_22513/*"oncomplete"*/,
          StringLiteral_22489/*"onCloseComplete"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v25 = this->fields.table,
        v30 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v30),
        !v25) )
  {
LABEL_11:
    sub_1BCAA3C(table, v20);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_24178/*"time"*/,
    table,
    v25->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28 = this->fields.table;
  v29 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v27);
  iTween__MoveTo_60939552(v29, v28, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v21; // x20
  __int64 v22; // x9
  struct System_Collections_Hashtable_o *v23; // x20
  struct System_Collections_Hashtable_o *v24; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  System_Collections_Hashtable_o *v27; // x19
  UnityEngine_GameObject_o *v28; // x20
  int v29; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v30; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]
  char v32[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B156F8 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&float_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_22501/*"onOpenComplete"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v16, v17);
    sub_1BCA7E0(&iTween_TypeInfo, v18, v19);
    byte_4B156F8 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v21 = this->fields.table;
  v32[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v32);
  if ( !v21 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
    v21,
    StringLiteral_21024/*"isLocal"*/,
    table,
    v21->klass->vtable._24_Clear.methodPtr);
  v22 = *(_QWORD *)&this->fields.openposition.fields.x;
  v23 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v30 = v22;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v30);
  if ( !v23
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v23->klass->vtable._23_Add.method)(
          v23,
          StringLiteral_22815/*"position"*/,
          table,
          v23->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_22513/*"oncomplete"*/,
          StringLiteral_22501/*"onOpenComplete"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v24 = this->fields.table,
        v29 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v29),
        !v24) )
  {
LABEL_11:
    sub_1BCAA3C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_24178/*"time"*/,
    table,
    v24->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27 = this->fields.table;
  v28 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v26);
  iTween__MoveTo_60939552(v28, v27, 0LL);
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
        sub_1BCAA44(this, flg);
      this = (MoveWindowComponent_o *)contentscolliderlist->m_Items[v5];
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0LL);
        contentscolliderlist = v4->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_1BCAA3C(this, flg);
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