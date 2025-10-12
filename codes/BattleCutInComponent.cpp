void BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3A203 & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Hashtable_TypeInfo);
    byte_4C3A203 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C32E6C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64882772(v3, 0);
  this->fields.table = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3A202 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A202 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
}


void BattleCutInComponent__onStartComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  __int64 table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 v11; // x9
  struct System_Collections_Hashtable_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  struct System_Collections_Hashtable_o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v27; // x19
  UnityEngine_GameObject_o *v28; // x20
  __int64 v29; // [xsp+0h] [xbp-40h] BYREF
  float z; // [xsp+8h] [xbp-38h]
  float totaltime; // [xsp+18h] [xbp-28h] BYREF
  int v32; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C3A201 & 1) == 0 )
  {
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    sub_1C32C20(&StringLiteral_22407/*"onEndComp"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_18551/*"delay"*/);
    sub_1C32C20(&StringLiteral_22736/*"position"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3A201 = 1;
  }
  table = (__int64)this->fields.table;
  if ( !table )
    goto LABEL_11;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)table + 680LL))(table, *(_QWORD *)(*(_QWORD *)table + 688LL));
  v4 = this->fields.table;
  v32 = 1065353216;
  table = j_il2cpp_value_box_0(float_TypeInfo, &v32, v5, v6, v7, v8, v9, v10);
  if ( !v4 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_18551/*"delay"*/,
    table,
    v4->klass->vtable._22_Add.method);
  v12 = this->fields.table;
  v11 = *(_QWORD *)&this->fields.startTr.fields.x;
  z = this->fields.startTr.fields.z;
  v29 = v11;
  table = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v29, v13, v14, v15, v16, v17, v18);
  if ( !v12
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
          v12,
          StringLiteral_22736/*"position"*/,
          table,
          v12->klass->vtable._22_Add.method),
        (table = (__int64)this->fields.table) == 0)
    || ((*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)table + 664LL))(
          table,
          StringLiteral_22427/*"oncomplete"*/,
          StringLiteral_22407/*"onEndComp"*/,
          *(_QWORD *)(*(_QWORD *)table + 672LL)),
        v19 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = j_il2cpp_value_box_0(float_TypeInfo, &totaltime, v20, v21, v22, v23, v24, v25),
        !v19) )
  {
LABEL_11:
    sub_1C32E7C(table);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v19->klass->vtable._22_Add.methodPtr)(
    v19,
    StringLiteral_24067/*"time"*/,
    table,
    v19->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v27 = this->fields.table;
  v28 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63156108(v28, v27, 0);
}


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
  if ( (byte_4C3A1FF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A1FF = 1;
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
    sub_1C32E7C(sprite);
  }
}


void BattleCutInComponent__startAction(BattleCutInComponent_o *this, const MethodInfo *method)
{
  __int64 table; // x0
  __int64 v4; // x9
  struct System_Collections_Hashtable_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  struct System_Collections_Hashtable_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v20; // x19
  UnityEngine_GameObject_o *v21; // x20
  float totaltime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v23; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]

  if ( (byte_4C3A200 & 1) == 0 )
  {
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    sub_1C32C20(&StringLiteral_22422/*"onStartComp"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22736/*"position"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3A200 = 1;
  }
  table = (__int64)this->fields.table;
  if ( !table )
    goto LABEL_10;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)table + 680LL))(table, *(_QWORD *)(*(_QWORD *)table + 688LL));
  v4 = *(_QWORD *)&this->fields.endTr.fields.x;
  v5 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v23 = v4;
  table = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v23, v6, v7, v8, v9, v10, v11);
  if ( !v5
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
          v5,
          StringLiteral_22736/*"position"*/,
          table,
          v5->klass->vtable._22_Add.method),
        (table = (__int64)this->fields.table) == 0)
    || ((*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)table + 664LL))(
          table,
          StringLiteral_22427/*"oncomplete"*/,
          StringLiteral_22422/*"onStartComp"*/,
          *(_QWORD *)(*(_QWORD *)table + 672LL)),
        v12 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = j_il2cpp_value_box_0(float_TypeInfo, &totaltime, v13, v14, v15, v16, v17, v18),
        !v12) )
  {
LABEL_10:
    sub_1C32E7C(table);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
    v12,
    StringLiteral_24067/*"time"*/,
    table,
    v12->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v20 = this->fields.table;
  v21 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63156108(v21, v20, 0);
}