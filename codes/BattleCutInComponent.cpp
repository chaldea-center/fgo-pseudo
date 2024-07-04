void __fastcall BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E4B94 & 1) == 0 )
  {
    sub_1B00CCC(&System_Collections_Hashtable_TypeInfo, method);
    byte_48E4B94 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1B00F18(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_60905040(v3, 0LL);
  this->fields.table = v3;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_48E4B93 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E4B93 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
}


void __fastcall BattleCutInComponent__onStartComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x9
  struct System_Collections_Hashtable_o *v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Collections_Hashtable_o *v20; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v25; // x19
  UnityEngine_GameObject_o *v26; // x20
  __int64 v27; // [xsp+0h] [xbp-40h] BYREF
  float z; // [xsp+8h] [xbp-38h]
  float totaltime; // [xsp+18h] [xbp-28h] BYREF
  int v30; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_48E4B92 & 1) == 0 )
  {
    sub_1B00CCC(&float_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_21951/*"onEndComp"*/, v4);
    sub_1B00CCC(&StringLiteral_23574/*"time"*/, v5);
    sub_1B00CCC(&StringLiteral_18301/*"delay"*/, v6);
    sub_1B00CCC(&StringLiteral_22266/*"position"*/, v7);
    sub_1B00CCC(&StringLiteral_21971/*"oncomplete"*/, v8);
    sub_1B00CCC(&iTween_TypeInfo, v9);
    byte_48E4B92 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v11 = this->fields.table;
  v30 = 1065353216;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v30, v12, v13, v14);
  if ( !v11 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_18301/*"delay"*/,
    table,
    v11->klass->vtable._24_Clear.methodPtr);
  v16 = this->fields.table;
  v15 = *(_QWORD *)&this->fields.startTr.fields.x;
  z = this->fields.startTr.fields.z;
  v27 = v15;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(
                                                     UnityEngine_Vector3_TypeInfo,
                                                     &v27,
                                                     v17,
                                                     v18,
                                                     v19);
  if ( !v16
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
          v16,
          StringLiteral_22266/*"position"*/,
          table,
          v16->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21971/*"oncomplete"*/,
          StringLiteral_21951/*"onEndComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v20 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime, v21, v22, v23),
        !v20) )
  {
LABEL_11:
    sub_1B00F28(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
    v20,
    StringLiteral_23574/*"time"*/,
    table,
    v20->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25 = this->fields.table;
  v26 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_58864080(v26, v25, 0LL);
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
  if ( (byte_48E4B90 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&Id);
    byte_48E4B90 = 1;
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
      goto LABEL_13;
    sprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sprite, 0LL);
    if ( !sprite )
      goto LABEL_13;
    v20.fields.x = -1.0;
    v20.fields.y = 1.0;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sprite, v20, 0LL);
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0LL, 0LL) )
  {
    sprite = (UnityEngine_Component_o *)this->fields.label;
    if ( sprite )
    {
      UILabel__set_text((UILabel_o *)sprite, param, 0LL);
      return;
    }
LABEL_13:
    sub_1B00F28(sprite, *(_QWORD *)&Id);
  }
}


void __fastcall BattleCutInComponent__startAction(BattleCutInComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Hashtable_o *table; // x0
  __int64 v10; // x9
  struct System_Collections_Hashtable_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct System_Collections_Hashtable_o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v20; // x19
  UnityEngine_GameObject_o *v21; // x20
  float totaltime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v23; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]

  if ( (byte_48E4B91 & 1) == 0 )
  {
    sub_1B00CCC(&float_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_21966/*"onStartComp"*/, v4);
    sub_1B00CCC(&StringLiteral_23574/*"time"*/, v5);
    sub_1B00CCC(&StringLiteral_22266/*"position"*/, v6);
    sub_1B00CCC(&StringLiteral_21971/*"oncomplete"*/, v7);
    sub_1B00CCC(&iTween_TypeInfo, v8);
    byte_48E4B91 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v10 = *(_QWORD *)&this->fields.endTr.fields.x;
  v11 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v23 = v10;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(
                                                     UnityEngine_Vector3_TypeInfo,
                                                     &v23,
                                                     v12,
                                                     v13,
                                                     v14);
  if ( !v11
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
          v11,
          StringLiteral_22266/*"position"*/,
          table,
          v11->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21971/*"oncomplete"*/,
          StringLiteral_21966/*"onStartComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v15 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime, v16, v17, v18),
        !v15) )
  {
LABEL_10:
    sub_1B00F28(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_23574/*"time"*/,
    table,
    v15->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = this->fields.table;
  v21 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_58864080(v21, v20, 0LL);
}