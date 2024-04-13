void __fastcall BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Hashtable_o *v5; // x20

  if ( (byte_42E53F8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53F8 = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v5, 0LL);
  this->fields.table = v5;
  sub_B5D560(&this->fields.table);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E53F7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53F7 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


void __fastcall BattleCutInComponent__onStartComp(BattleCutInComponent_o *this, const MethodInfo *method)
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
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v27; // x20
  struct System_Collections_Hashtable_o *v28; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v30; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v32; // x19
  UnityEngine_GameObject_o *v33; // x20
  __int64 v34; // [xsp+0h] [xbp-30h] BYREF
  float v35; // [xsp+8h] [xbp-28h]
  float totaltime; // [xsp+18h] [xbp-18h] BYREF
  int v37; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42E53F6 & 1) == 0 )
  {
    sub_B5D5C4(&float_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_21523/*"onEndComp"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v20, v21, v22);
    sub_B5D5C4(&iTween_TypeInfo, v23, v24, v25);
    byte_42E53F6 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v27 = this->fields.table;
  v37 = 1065353216;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v37);
  if ( !v27 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v27->klass->vtable._23_Add.method)(
    v27,
    StringLiteral_18173/*"delay"*/,
    table,
    v27->klass->vtable._24_Clear.methodPtr);
  v28 = this->fields.table;
  z = this->fields.startTr.fields.z;
  v34 = *(_QWORD *)&this->fields.startTr.fields.x;
  v35 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v34);
  if ( !v28
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
          v28,
          StringLiteral_21800/*"position"*/,
          table,
          v28->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21542/*"oncomplete"*/,
          StringLiteral_21523/*"onEndComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v30 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v30) )
  {
LABEL_12:
    sub_B5D69C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_22982/*"time"*/,
    table,
    v30->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v32 = this->fields.table;
  v33 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(v33, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCutInComponent__setData(
        BattleCutInComponent_o *this,
        int32_t Id,
        int32_t type,
        UnityEngine_Vector3_o startt,
        UnityEngine_Vector3_o endt,
        float time,
        System_String_o *param,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s14
  UnityEngine_Component_o *sprite; // x0
  UnityEngine_Object_o *label; // x21
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = endt.fields.z;
  y = endt.fields.y;
  x = endt.fields.x;
  v13 = startt.fields.z;
  v14 = startt.fields.y;
  v15 = startt.fields.x;
  if ( (byte_42E53F4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, Id, type, param);
    byte_42E53F4 = 1;
  }
  this->fields.startTr.fields.x = v15;
  this->fields.startTr.fields.y = v14;
  this->fields.startTr.fields.z = v13;
  this->fields.endTr.fields.x = x;
  this->fields.endTr.fields.y = y;
  this->fields.endTr.fields.z = z;
  this->fields.totaltime = time;
  if ( type == 1 )
  {
    sprite = (UnityEngine_Component_o *)this->fields.sprite;
    if ( !sprite )
      goto LABEL_14;
    sprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sprite, 0LL);
    if ( !sprite )
      goto LABEL_14;
    v20.fields.x = -1.0;
    v20.fields.y = 1.0;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sprite, v20, 0LL);
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(label, 0LL, 0LL) )
  {
    sprite = (UnityEngine_Component_o *)this->fields.label;
    if ( sprite )
    {
      UILabel__set_text((UILabel_o *)sprite, param, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(sprite, *(_QWORD *)&Id);
  }
}


void __fastcall BattleCutInComponent__startAction(BattleCutInComponent_o *this, const MethodInfo *method)
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
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v24; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v26; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v28; // x19
  UnityEngine_GameObject_o *v29; // x20
  float totaltime; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v31; // [xsp+10h] [xbp-20h] BYREF
  float v32; // [xsp+18h] [xbp-18h]

  if ( (byte_42E53F5 & 1) == 0 )
  {
    sub_B5D5C4(&float_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_21537/*"onStartComp"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v17, v18, v19);
    sub_B5D5C4(&iTween_TypeInfo, v20, v21, v22);
    byte_42E53F5 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v24 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v31 = *(_QWORD *)&this->fields.endTr.fields.x;
  v32 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v31);
  if ( !v24
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
          v24,
          StringLiteral_21800/*"position"*/,
          table,
          v24->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21542/*"oncomplete"*/,
          StringLiteral_21537/*"onStartComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v26 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v26) )
  {
LABEL_11:
    sub_B5D69C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
    v26,
    StringLiteral_22982/*"time"*/,
    table,
    v26->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28 = this->fields.table;
  v29 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(v29, v28, 0LL);
}