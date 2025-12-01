void BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC9DA5 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Hashtable_TypeInfo);
    byte_4CC9DA5 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C715FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65394340(v3, 0);
  this->fields.table = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.table, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CC9DA4 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9DA4 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


void BattleCutInComponent__onStartComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x9
  struct System_Collections_Hashtable_o *v6; // x20
  struct System_Collections_Hashtable_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v9; // x19
  UnityEngine_GameObject_o *v10; // x20
  __int64 v11; // [xsp+0h] [xbp-40h] BYREF
  float z; // [xsp+8h] [xbp-38h]
  float totaltime; // [xsp+18h] [xbp-28h] BYREF
  int v14; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CC9DA3 & 1) == 0 )
  {
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    sub_1C713B0(&StringLiteral_22513/*"onEndComp"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_18592/*"delay"*/);
    sub_1C713B0(&StringLiteral_22847/*"position"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC9DA3 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v4 = this->fields.table;
  v14 = 1065353216;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v14);
  if ( !v4 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_18592/*"delay"*/,
    table,
    v4->klass->vtable._22_Add.method);
  v6 = this->fields.table;
  v5 = *(_QWORD *)&this->fields.startTr.fields.x;
  z = this->fields.startTr.fields.z;
  v11 = v5;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v11);
  if ( !v6
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
          v6,
          StringLiteral_22847/*"position"*/,
          table,
          v6->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_22533/*"oncomplete"*/,
          StringLiteral_22513/*"onEndComp"*/,
          table->klass->vtable._22_Add.method),
        v7 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v7) )
  {
LABEL_11:
    sub_1C71608(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_24189/*"time"*/,
    table,
    v7->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9 = this->fields.table;
  v10 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63669288(v10, v9, 0);
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
  if ( (byte_4CC9DA1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9DA1 = 1;
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
    sprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sprite, 0);
    if ( !sprite )
      goto LABEL_13;
    v20.fields.x = -1.0;
    v20.fields.y = 1.0;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)sprite, v20, 0);
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    sprite = (UnityEngine_Component_o *)this->fields.label;
    if ( sprite )
    {
      UILabel__set_text((UILabel_o *)sprite, param, 0);
      return;
    }
LABEL_13:
    sub_1C71608(sprite, *(_QWORD *)&Id);
  }
}


void BattleCutInComponent__startAction(BattleCutInComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  __int64 v4; // x9
  struct System_Collections_Hashtable_o *v5; // x20
  struct System_Collections_Hashtable_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v8; // x19
  UnityEngine_GameObject_o *v9; // x20
  float totaltime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v11; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]

  if ( (byte_4CC9DA2 & 1) == 0 )
  {
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    sub_1C713B0(&StringLiteral_22528/*"onStartComp"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22847/*"position"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC9DA2 = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, const MethodInfo *))table->klass->vtable._23_Clear.methodPtr)(
    table,
    table->klass->vtable._23_Clear.method);
  v4 = *(_QWORD *)&this->fields.endTr.fields.x;
  v5 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v11 = v4;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v11);
  if ( !v5
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
          v5,
          StringLiteral_22847/*"position"*/,
          table,
          v5->klass->vtable._22_Add.method),
        (table = this->fields.table) == 0)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
          table,
          StringLiteral_22533/*"oncomplete"*/,
          StringLiteral_22528/*"onStartComp"*/,
          table->klass->vtable._22_Add.method),
        v6 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime),
        !v6) )
  {
LABEL_10:
    sub_1C71608(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_24189/*"time"*/,
    table,
    v6->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = this->fields.table;
  v9 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63669288(v9, v8, 0);
}