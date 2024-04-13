void __fastcall MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Hashtable_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7461 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7461 = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v5, 0LL);
  this->fields.table = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.table, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
      sub_B5D69C(gameObject, v5);
    }
    this->fields.closeposition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  }
}


void __fastcall MoveWindowComponent__closeWindow(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x1
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v31; // x20
  struct System_Collections_Hashtable_o *v32; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v34; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v36; // x19
  UnityEngine_GameObject_o *v37; // x20
  int v38; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v39; // [xsp+10h] [xbp-20h] BYREF
  float v40; // [xsp+18h] [xbp-18h]
  char v41[4]; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42E7460 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&float_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21519/*"onCloseComplete"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v23, v24, v25);
    sub_B5D5C4(&iTween_TypeInfo, v26, v27, v28);
    byte_42E7460 = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v31 = this->fields.table;
  v41[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v41);
  if ( !v31 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_20191/*"isLocal"*/,
    table,
    v31->klass->vtable._24_Clear.methodPtr);
  v32 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v39 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v40 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v39);
  if ( !v32
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
          v32,
          StringLiteral_21800/*"position"*/,
          table,
          v32->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21542/*"oncomplete"*/,
          StringLiteral_21519/*"onCloseComplete"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v34 = this->fields.table,
        v38 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v38),
        !v34) )
  {
LABEL_12:
    sub_B5D69C(table, v29);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
    v34,
    StringLiteral_22982/*"time"*/,
    table,
    v34->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v36 = this->fields.table;
  v37 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(v37, v36, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v30; // x20
  struct System_Collections_Hashtable_o *v31; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v35; // x19
  UnityEngine_GameObject_o *v36; // x20
  int v37; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v38; // [xsp+10h] [xbp-20h] BYREF
  float v39; // [xsp+18h] [xbp-18h]
  char v40[4]; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42E745F & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&float_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_21531/*"onOpenComplete"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v23, v24, v25);
    sub_B5D5C4(&iTween_TypeInfo, v26, v27, v28);
    byte_42E745F = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v30 = this->fields.table;
  v40[0] = 1;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(bool_TypeInfo, v40);
  if ( !v30 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_20191/*"isLocal"*/,
    table,
    v30->klass->vtable._24_Clear.methodPtr);
  v31 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v38 = *(_QWORD *)&this->fields.openposition.fields.x;
  v39 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v38);
  if ( !v31
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
          v31,
          StringLiteral_21800/*"position"*/,
          table,
          v31->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21542/*"oncomplete"*/,
          StringLiteral_21531/*"onOpenComplete"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v33 = this->fields.table,
        v37 = 1065353216,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v37),
        !v33) )
  {
LABEL_12:
    sub_B5D69C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_22982/*"time"*/,
    table,
    v33->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v35 = this->fields.table;
  v36 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(v36, v35, 0LL);
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
        v8 = sub_B5D6C8(this);
        sub_B5D668(v8, 0LL);
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
      sub_B5D69C(this, flg);
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