void BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597331E & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Hashtable_TypeInfo);
    byte_597331E = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_2213CCC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_76845452(v3, 0);
  this->fields.table = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.table, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_597331D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597331D = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void BattleCutInComponent__onStartComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  struct System_Collections_Hashtable_o *v5; // x20
  float z; // w9
  struct System_Collections_Hashtable_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_Collections_Hashtable_o *v10; // x19
  UnityEngine_GameObject_o *v11; // x20
  __int64 v12; // [xsp+0h] [xbp-40h] BYREF
  float v13; // [xsp+8h] [xbp-38h]
  float totaltime; // [xsp+18h] [xbp-28h] BYREF
  int v15; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_597331C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_23543/*"onEndComp"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_19390/*"delay"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597331C = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v4 = this->fields.table;
  v15 = 1065353216;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(qword_5984378, &v15);
  if ( !v4 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_19390/*"delay"*/,
    table,
    v4->klass->vtable._22_Add.method);
  v5 = this->fields.table;
  z = this->fields.startTr.fields.z;
  v12 = *(_QWORD *)&this->fields.startTr.fields.x;
  v13 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v12);
  if ( !v5
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
          v5,
          StringLiteral_23916/*"position"*/,
          table,
          v5->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_23565/*"oncomplete"*/,
          StringLiteral_23543/*"onEndComp"*/,
          table->klass->vtable._22_Add.method),
        v7 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(qword_5984378, &totaltime),
        !v7) )
  {
LABEL_11:
    sub_2213CDC(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_25366/*"time"*/,
    table,
    v7->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10 = this->fields.table;
  v11 = gameObject;
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v9);
  iTween__MoveTo_75293528(v11, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCutInComponent__setData(
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
  float v12; // s12
  float v13; // s13
  float v15; // s14
  UnityEngine_Component_o *sprite; // x0
  UnityEngine_Object_o *label; // x21
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = endt.fields.z;
  y = endt.fields.y;
  x = endt.fields.x;
  v12 = startt.fields.z;
  v13 = startt.fields.y;
  v15 = startt.fields.x;
  if ( (byte_597331A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597331A = 1;
  }
  this->fields.startTr.fields.x = v15;
  this->fields.startTr.fields.y = v13;
  this->fields.startTr.fields.z = v12;
  this->fields.endTr.fields.x = x;
  this->fields.endTr.fields.y = y;
  this->fields.endTr.fields.z = z;
  this->fields.totaltime = time;
  if ( type == 1 )
  {
    sprite = (UnityEngine_Component_o *)this->fields.sprite;
    if ( !sprite )
      goto LABEL_13;
    sprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sprite, 0);
    if ( !sprite )
      goto LABEL_13;
    v20.fields.z = 0.0;
    v20.fields.x = -1.0;
    v20.fields.y = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sprite, v20, 0);
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&Id);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    sprite = (UnityEngine_Component_o *)this->fields.label;
    if ( sprite )
    {
      UILabel__set_text((UILabel_o *)sprite, param, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(sprite, *(_QWORD *)&Id);
  }
}


void BattleCutInComponent__startAction(BattleCutInComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  float z; // w9
  struct System_Collections_Hashtable_o *v5; // x20
  struct System_Collections_Hashtable_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_Collections_Hashtable_o *v9; // x19
  UnityEngine_GameObject_o *v10; // x20
  float totaltime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v12; // [xsp+10h] [xbp-30h] BYREF
  float v13; // [xsp+18h] [xbp-28h]

  if ( (byte_597331B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_23560/*"onStartComp"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597331B = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  z = this->fields.endTr.fields.z;
  v5 = this->fields.table;
  v12 = *(_QWORD *)&this->fields.endTr.fields.x;
  v13 = z;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v12);
  if ( !v5
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
          v5,
          StringLiteral_23916/*"position"*/,
          table,
          v5->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_23565/*"oncomplete"*/,
          StringLiteral_23560/*"onStartComp"*/,
          table->klass->vtable._22_Add.method),
        v6 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(qword_5984378, &totaltime),
        !v6) )
  {
LABEL_10:
    sub_2213CDC(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_25366/*"time"*/,
    table,
    v6->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9 = this->fields.table;
  v10 = gameObject;
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v8);
  iTween__MoveTo_75293528(v10, v9, 0);
}