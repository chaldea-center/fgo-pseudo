void __fastcall BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20

  if ( (byte_41842D8 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, method);
    byte_41842D8 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v3, 0LL);
  this->fields.table = v3;
  sub_B2C2F8(&this->fields.table, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_41842D7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41842D7 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
  struct System_Collections_Hashtable_o *v12; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v16; // x19
  UnityEngine_GameObject_o *v17; // x20
  __int64 v18; // [xsp+0h] [xbp-30h] BYREF
  float v19; // [xsp+8h] [xbp-28h]
  float totaltime; // [xsp+18h] [xbp-18h] BYREF
  int v21; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_41842D6 & 1) == 0 )
  {
    sub_B2C35C(&float_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_21244/*"onEndComp"*/, v4);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v5);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v6);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v7);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v8);
    sub_B2C35C(&iTween_TypeInfo, v9);
    byte_41842D6 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v11 = this->fields.table;
  v21 = 1065353216;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v21);
  if ( !v11 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_17949/*"delay"*/,
    table,
    v11->klass->vtable._24_Clear.methodPtr);
  v12 = this->fields.table;
  z = this->fields.startTr.fields.z;
  v18 = *(_QWORD *)&this->fields.startTr.fields.x;
  v19 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v18);
  if ( !v12
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v12->klass->vtable._23_Add.method)(
          v12,
          StringLiteral_21511/*"position"*/,
          table,
          v12->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21263/*"oncomplete"*/,
          StringLiteral_21244/*"onEndComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v14 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v14) )
  {
LABEL_12:
    sub_B2C434(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_22677/*"time"*/,
    table,
    v14->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16 = this->fields.table;
  v17 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42732664(v17, v16, 0LL);
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
  if ( (byte_41842D4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&Id);
    byte_41842D4 = 1;
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
    sub_B2C434(sprite, *(_QWORD *)&Id);
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
  struct System_Collections_Hashtable_o *v10; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v14; // x19
  UnityEngine_GameObject_o *v15; // x20
  float totaltime; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v17; // [xsp+10h] [xbp-20h] BYREF
  float v18; // [xsp+18h] [xbp-18h]

  if ( (byte_41842D5 & 1) == 0 )
  {
    sub_B2C35C(&float_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_21258/*"onStartComp"*/, v4);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v5);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v6);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v7);
    sub_B2C35C(&iTween_TypeInfo, v8);
    byte_41842D5 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v10 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v17 = *(_QWORD *)&this->fields.endTr.fields.x;
  v18 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v17);
  if ( !v10
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
          v10,
          StringLiteral_21511/*"position"*/,
          table,
          v10->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_21263/*"oncomplete"*/,
          StringLiteral_21258/*"onStartComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v12 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v12) )
  {
LABEL_11:
    sub_B2C434(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v12->klass->vtable._23_Add.method)(
    v12,
    StringLiteral_22677/*"time"*/,
    table,
    v12->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = this->fields.table;
  v15 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42732664(v15, v14, 0LL);
}