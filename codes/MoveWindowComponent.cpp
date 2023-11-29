void __fastcall MoveWindowComponent___ctor(MoveWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  System_Collections_Hashtable_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7D7F & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, method);
    byte_40F7D7F = 1;
  }
  v6 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, method, v2, v3, v4);
  System_Collections_Hashtable___ctor_38240048(v6, 0LL);
  this->fields.table = v6;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.table, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  this->fields.closepositionadjust = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveWindowComponent__Awake(MoveWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0

  MoveWindowComponent__setContentsCollider(this, 0, v2);
  if ( this->fields.closepositionadjust )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
      sub_B170D4();
    this->fields.closeposition = UnityEngine_Transform__get_localPosition(transform, 0LL);
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
  __int64 v14; // x0
  struct System_Collections_Hashtable_o *v15; // x20
  float z; // w9
  __int64 v17; // x0
  struct System_Collections_Hashtable_o *v18; // x0
  struct System_Collections_Hashtable_o *v19; // x20
  __int64 v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v22; // x19
  UnityEngine_GameObject_o *v23; // x20
  int v24; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v25; // [xsp+10h] [xbp-20h] BYREF
  float v26; // [xsp+18h] [xbp-18h]
  char v27[4]; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F7D7E & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&float_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_22584, v6);
    sub_B16FFC(&StringLiteral_21150, v7);
    sub_B16FFC(&StringLiteral_21419, v8);
    sub_B16FFC(&StringLiteral_19856, v9);
    sub_B16FFC(&StringLiteral_21173, v10);
    sub_B16FFC(&iTween_TypeInfo, v11);
    byte_40F7D7E = 1;
  }
  MoveWindowComponent__setContentsCollider(this, 0, v2);
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v13 = this->fields.table;
  v27[0] = 1;
  v14 = j_il2cpp_value_box_0(bool_TypeInfo, v27);
  if ( !v13 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_19856,
    v14,
    v13->klass->vtable._24_Clear.methodPtr);
  v15 = this->fields.table;
  z = this->fields.closeposition.fields.z;
  v25 = *(_QWORD *)&this->fields.closeposition.fields.x;
  v26 = z;
  v17 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v25);
  if ( !v15
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
          v15,
          StringLiteral_21419,
          v17,
          v15->klass->vtable._24_Clear.methodPtr),
        (v18 = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
          v18,
          StringLiteral_21173,
          StringLiteral_21150,
          v18->klass->vtable._24_Clear.methodPtr),
        v19 = this->fields.table,
        v24 = 1065353216,
        v20 = j_il2cpp_value_box_0(float_TypeInfo, &v24),
        !v19) )
  {
LABEL_12:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_22584,
    v20,
    v19->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = this->fields.table;
  v23 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(v23, v22, 0LL);
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
  __int64 v13; // x0
  struct System_Collections_Hashtable_o *v14; // x20
  float z; // w9
  __int64 v16; // x0
  struct System_Collections_Hashtable_o *v17; // x0
  struct System_Collections_Hashtable_o *v18; // x20
  __int64 v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v21; // x19
  UnityEngine_GameObject_o *v22; // x20
  int v23; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v24; // [xsp+10h] [xbp-20h] BYREF
  float v25; // [xsp+18h] [xbp-18h]
  char v26[4]; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F7D7D & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&float_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_21162, v5);
    sub_B16FFC(&StringLiteral_22584, v6);
    sub_B16FFC(&StringLiteral_21419, v7);
    sub_B16FFC(&StringLiteral_19856, v8);
    sub_B16FFC(&StringLiteral_21173, v9);
    sub_B16FFC(&iTween_TypeInfo, v10);
    byte_40F7D7D = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v12 = this->fields.table;
  v26[0] = 1;
  v13 = j_il2cpp_value_box_0(bool_TypeInfo, v26);
  if ( !v12 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v12->klass->vtable._23_Add.method)(
    v12,
    StringLiteral_19856,
    v13,
    v12->klass->vtable._24_Clear.methodPtr);
  v14 = this->fields.table;
  z = this->fields.openposition.fields.z;
  v24 = *(_QWORD *)&this->fields.openposition.fields.x;
  v25 = z;
  v16 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v24);
  if ( !v14
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
          v14,
          StringLiteral_21419,
          v16,
          v14->klass->vtable._24_Clear.methodPtr),
        (v17 = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
          v17,
          StringLiteral_21173,
          StringLiteral_21162,
          v17->klass->vtable._24_Clear.methodPtr),
        v18 = this->fields.table,
        v23 = 1065353216,
        v19 = j_il2cpp_value_box_0(float_TypeInfo, &v23),
        !v18) )
  {
LABEL_12:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
    v18,
    StringLiteral_22584,
    v19,
    v18->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v21 = this->fields.table;
  v22 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(v22, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MoveWindowComponent__setContentsCollider(
        MoveWindowComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct UnityEngine_Collider_array *contentscolliderlist; // x8
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UnityEngine_Collider_o *v8; // x0

  contentscolliderlist = this->fields.contentscolliderlist;
  if ( contentscolliderlist )
  {
    v5 = 0LL;
    v6 = flg;
    while ( 1 )
    {
      max_length = contentscolliderlist->max_length;
      if ( (int)v5 >= max_length )
        break;
      if ( (unsigned int)v5 >= max_length )
      {
        sub_B17100(this, flg, method);
        sub_B170A0();
      }
      v8 = contentscolliderlist->m_Items[v5];
      if ( v8 )
      {
        UnityEngine_Collider__set_enabled(v8, v6, 0LL);
        contentscolliderlist = this->fields.contentscolliderlist;
        ++v5;
        if ( contentscolliderlist )
          continue;
      }
      sub_B170D4();
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