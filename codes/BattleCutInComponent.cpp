void __fastcall BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  System_Collections_Hashtable_o *v6; // x20

  if ( (byte_40F69F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, method);
    byte_40F69F8 = 1;
  }
  v6 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, method, v2, v3, v4);
  System_Collections_Hashtable___ctor_38240048(v6, 0LL);
  this->fields.table = v6;
  sub_B16F98(&this->fields.table, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F69F7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F69F7 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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
  __int64 v12; // x0
  struct System_Collections_Hashtable_o *v13; // x20
  float z; // w9
  __int64 v15; // x0
  struct System_Collections_Hashtable_o *v16; // x0
  struct System_Collections_Hashtable_o *v17; // x20
  __int64 v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v20; // x19
  UnityEngine_GameObject_o *v21; // x20
  __int64 v22; // [xsp+0h] [xbp-30h] BYREF
  float v23; // [xsp+8h] [xbp-28h]
  float totaltime; // [xsp+18h] [xbp-18h] BYREF
  int v25; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F69F6 & 1) == 0 )
  {
    sub_B16FFC(&float_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_21154/*"onEndComp"*/, v4);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v5);
    sub_B16FFC(&StringLiteral_17881/*"delay"*/, v6);
    sub_B16FFC(&StringLiteral_21419/*"position"*/, v7);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v8);
    sub_B16FFC(&iTween_TypeInfo, v9);
    byte_40F69F6 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v11 = this->fields.table;
  v25 = 1065353216;
  v12 = j_il2cpp_value_box_0(float_TypeInfo, &v25);
  if ( !v11 )
    goto LABEL_12;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_17881/*"delay"*/,
    v12,
    v11->klass->vtable._24_Clear.methodPtr);
  v13 = this->fields.table;
  z = this->fields.startTr.fields.z;
  v22 = *(_QWORD *)&this->fields.startTr.fields.x;
  v23 = z;
  v15 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v22);
  if ( !v13
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
          v13,
          StringLiteral_21419/*"position"*/,
          v15,
          v13->klass->vtable._24_Clear.methodPtr),
        (v16 = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
          v16,
          StringLiteral_21173/*"oncomplete"*/,
          StringLiteral_21154/*"onEndComp"*/,
          v16->klass->vtable._24_Clear.methodPtr),
        v17 = this->fields.table,
        totaltime = this->fields.totaltime,
        v18 = j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v17) )
  {
LABEL_12:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_22584/*"time"*/,
    v18,
    v17->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = this->fields.table;
  v21 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(v21, v20, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *label; // x21
  UILabel_o *v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = endt.fields.z;
  y = endt.fields.y;
  x = endt.fields.x;
  v13 = startt.fields.z;
  v14 = startt.fields.y;
  v15 = startt.fields.x;
  if ( (byte_40F69F4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&Id);
    byte_40F69F4 = 1;
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
    transform = UnityEngine_Component__get_transform(sprite, 0LL);
    if ( !transform )
      goto LABEL_14;
    v22.fields.x = -1.0;
    v22.fields.y = 1.0;
    v22.fields.z = 0.0;
    UnityEngine_Transform__set_localScale(transform, v22, 0LL);
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(label, 0LL, 0LL) )
  {
    v21 = this->fields.label;
    if ( v21 )
    {
      UILabel__set_text(v21, param, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
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
  __int64 v12; // x0
  struct System_Collections_Hashtable_o *v13; // x0
  struct System_Collections_Hashtable_o *v14; // x20
  __int64 v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v17; // x19
  UnityEngine_GameObject_o *v18; // x20
  float totaltime; // [xsp+Ch] [xbp-24h] BYREF
  __int64 v20; // [xsp+10h] [xbp-20h] BYREF
  float v21; // [xsp+18h] [xbp-18h]

  if ( (byte_40F69F5 & 1) == 0 )
  {
    sub_B16FFC(&float_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_21168/*"onStartComp"*/, v4);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v5);
    sub_B16FFC(&StringLiteral_21419/*"position"*/, v6);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v7);
    sub_B16FFC(&iTween_TypeInfo, v8);
    byte_40F69F5 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v10 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v20 = *(_QWORD *)&this->fields.endTr.fields.x;
  v21 = z;
  v12 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v20);
  if ( !v10
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
          v10,
          StringLiteral_21419/*"position"*/,
          v12,
          v10->klass->vtable._24_Clear.methodPtr),
        (v13 = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
          v13,
          StringLiteral_21173/*"oncomplete"*/,
          StringLiteral_21168/*"onStartComp"*/,
          v13->klass->vtable._24_Clear.methodPtr),
        v14 = this->fields.table,
        totaltime = this->fields.totaltime,
        v15 = j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v14) )
  {
LABEL_11:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_22584/*"time"*/,
    v15,
    v14->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = this->fields.table;
  v18 = gameObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(v18, v17, 0LL);
}