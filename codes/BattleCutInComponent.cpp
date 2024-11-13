void __fastcall BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4B186C9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, method, v2);
    byte_4B186C9 = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, method, v2, v3);
  System_Collections_Hashtable___ctor_62980980(v5, 0LL);
  this->fields.table = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B186C8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B186C8 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall BattleCutInComponent__onStartComp(BattleCutInComponent_o *this, const MethodInfo *method)
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
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v19; // x20
  __int64 v20; // x9
  struct System_Collections_Hashtable_o *v21; // x20
  struct System_Collections_Hashtable_o *v22; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  System_Collections_Hashtable_o *v25; // x19
  UnityEngine_GameObject_o *v26; // x20
  __int64 v27; // [xsp+0h] [xbp-40h] BYREF
  float z; // [xsp+8h] [xbp-38h]
  float totaltime; // [xsp+18h] [xbp-28h] BYREF
  int v30; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B186C7 & 1) == 0 )
  {
    sub_1BCA7E0(&float_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_22493/*"onEndComp"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v14, v15);
    sub_1BCA7E0(&iTween_TypeInfo, v16, v17);
    byte_4B186C7 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v19 = this->fields.table;
  v30 = 1065353216;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v30);
  if ( !v19 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_18739/*"delay"*/,
    table,
    v19->klass->vtable._24_Clear.methodPtr);
  v21 = this->fields.table;
  v20 = *(_QWORD *)&this->fields.startTr.fields.x;
  z = this->fields.startTr.fields.z;
  v27 = v20;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v27);
  if ( !v21
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
          v21,
          StringLiteral_22815/*"position"*/,
          table,
          v21->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_22513/*"oncomplete"*/,
          StringLiteral_22493/*"onEndComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v22 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v22) )
  {
LABEL_11:
    sub_1BCAA3C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_24178/*"time"*/,
    table,
    v22->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25 = this->fields.table;
  v26 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v24);
  iTween__MoveTo_60939552(v26, v25, 0LL);
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
  if ( (byte_4B186C5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&Id, *(_QWORD *)&type);
    byte_4B186C5 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&Id);
  if ( UnityEngine_Object__op_Inequality(label, 0LL, 0LL) )
  {
    sprite = (UnityEngine_Component_o *)this->fields.label;
    if ( sprite )
    {
      UILabel__set_text((UILabel_o *)sprite, param, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(sprite, *(_QWORD *)&Id);
  }
}


void __fastcall BattleCutInComponent__startAction(BattleCutInComponent_o *this, const MethodInfo *method)
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
  struct System_Collections_Hashtable_o *table; // x0
  __int64 v17; // x9
  struct System_Collections_Hashtable_o *v18; // x20
  struct System_Collections_Hashtable_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  System_Collections_Hashtable_o *v22; // x19
  UnityEngine_GameObject_o *v23; // x20
  float totaltime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v25; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]

  if ( (byte_4B186C6 & 1) == 0 )
  {
    sub_1BCA7E0(&float_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_22508/*"onStartComp"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v12, v13);
    sub_1BCA7E0(&iTween_TypeInfo, v14, v15);
    byte_4B186C6 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v17 = *(_QWORD *)&this->fields.endTr.fields.x;
  v18 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v25 = v17;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v25);
  if ( !v18
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
          v18,
          StringLiteral_22815/*"position"*/,
          table,
          v18->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_22513/*"oncomplete"*/,
          StringLiteral_22508/*"onStartComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v19 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v19) )
  {
LABEL_10:
    sub_1BCAA3C(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_24178/*"time"*/,
    table,
    v19->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = this->fields.table;
  v23 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v21);
  iTween__MoveTo_60939552(v23, v22, 0LL);
}