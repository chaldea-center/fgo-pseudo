void __fastcall BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20

  if ( (byte_42ACCB3 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Hashtable_TypeInfo);
    byte_42ACCB3 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_B52A54(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39351252(v3, 0LL);
  this->fields.table = v3;
  sub_B52920(&this->fields.table);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42ACCB2 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACCB2 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
}


void __fastcall BattleCutInComponent__onStartComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  struct System_Collections_Hashtable_o *v5; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v9; // x19
  UnityEngine_GameObject_o *v10; // x20
  __int64 v11; // [xsp+0h] [xbp-30h] BYREF
  float v12; // [xsp+8h] [xbp-28h]
  float totaltime; // [xsp+18h] [xbp-18h] BYREF
  int v14; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42ACCB1 & 1) == 0 )
  {
    sub_B52984(&float_TypeInfo);
    sub_B52984(&UnityEngine_Vector3_TypeInfo);
    sub_B52984(&StringLiteral_21414/*"onEndComp"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_18079/*"delay"*/);
    sub_B52984(&StringLiteral_21687/*"position"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42ACCB1 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v4 = this->fields.table;
  v14 = 1065353216;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v14);
  if ( !v4 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_18079/*"delay"*/,
    table,
    v4->klass->vtable._24_Clear.methodPtr);
  v5 = this->fields.table;
  z = this->fields.startTr.fields.z;
  v11 = *(_QWORD *)&this->fields.startTr.fields.x;
  v12 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v11);
  if ( !v5
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
          v5,
          StringLiteral_21687/*"position"*/,
          table,
          v5->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21433/*"oncomplete"*/,
          StringLiteral_21414/*"onEndComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v7 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v7) )
  {
LABEL_12:
    sub_B52A5C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_22867/*"time"*/,
    table,
    v7->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9 = this->fields.table;
  v10 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43223368(v10, v9, 0LL);
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
  if ( (byte_42ACCAF & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACCAF = 1;
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
    sub_B52A5C(sprite, *(_QWORD *)&Id);
  }
}


void __fastcall BattleCutInComponent__startAction(BattleCutInComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v8; // x19
  UnityEngine_GameObject_o *v9; // x20
  float totaltime; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v11; // [xsp+10h] [xbp-20h] BYREF
  float v12; // [xsp+18h] [xbp-18h]

  if ( (byte_42ACCB0 & 1) == 0 )
  {
    sub_B52984(&float_TypeInfo);
    sub_B52984(&UnityEngine_Vector3_TypeInfo);
    sub_B52984(&StringLiteral_21428/*"onStartComp"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21687/*"position"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42ACCB0 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v4 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v11 = *(_QWORD *)&this->fields.endTr.fields.x;
  v12 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v11);
  if ( !v4
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
          v4,
          StringLiteral_21687/*"position"*/,
          table,
          v4->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21433/*"oncomplete"*/,
          StringLiteral_21428/*"onStartComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v6 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v6) )
  {
LABEL_11:
    sub_B52A5C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v6->klass->vtable._23_Add.method)(
    v6,
    StringLiteral_22867/*"time"*/,
    table,
    v6->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = this->fields.table;
  v9 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43223368(v9, v8, 0LL);
}