void __fastcall BattleCutInComponent___ctor(BattleCutInComponent_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDEADF & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    byte_4BDEADF = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v3, 0LL);
  this->fields.table = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCutInComponent__onEndComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BDEADE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEADE = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
}


void __fastcall BattleCutInComponent__onStartComp(BattleCutInComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x9
  struct System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct System_Collections_Hashtable_o *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v18; // x19
  UnityEngine_GameObject_o *v19; // x20
  __int64 v20; // [xsp+0h] [xbp-40h] BYREF
  float z; // [xsp+8h] [xbp-38h]
  float totaltime; // [xsp+18h] [xbp-28h] BYREF
  int v23; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4BDEADD & 1) == 0 )
  {
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_22660/*"onEndComp"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDEADD = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v4 = this->fields.table;
  v23 = 1065353216;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &v23, v5, v6, v7);
  if ( !v4 )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_18865/*"delay"*/,
    table,
    v4->klass->vtable._24_Clear.methodPtr);
  v9 = this->fields.table;
  v8 = *(_QWORD *)&this->fields.startTr.fields.x;
  z = this->fields.startTr.fields.z;
  v20 = v8;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(
                                                     UnityEngine_Vector3_TypeInfo,
                                                     &v20,
                                                     v10,
                                                     v11,
                                                     v12);
  if ( !v9
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v9->klass->vtable._23_Add.method)(
          v9,
          StringLiteral_22984/*"position"*/,
          table,
          v9->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_22680/*"oncomplete"*/,
          StringLiteral_22660/*"onEndComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v13 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime, v14, v15, v16),
        !v13) )
  {
LABEL_11:
    sub_1C22094(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_24360/*"time"*/,
    table,
    v13->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = this->fields.table;
  v19 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61653064(v19, v18, 0LL);
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
  if ( (byte_4BDEADB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEADB = 1;
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
    sub_1C22094(sprite, *(_QWORD *)&Id);
  }
}


void __fastcall BattleCutInComponent__startAction(BattleCutInComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *table; // x0
  __int64 v4; // x9
  struct System_Collections_Hashtable_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Hashtable_o *v14; // x19
  UnityEngine_GameObject_o *v15; // x20
  float totaltime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v17; // [xsp+10h] [xbp-30h] BYREF
  float z; // [xsp+18h] [xbp-28h]

  if ( (byte_4BDEADC & 1) == 0 )
  {
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_22675/*"onStartComp"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDEADC = 1;
  }
  table = this->fields.table;
  if ( !table )
    goto LABEL_10;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v4 = *(_QWORD *)&this->fields.endTr.fields.x;
  v5 = this->fields.table;
  z = this->fields.endTr.fields.z;
  v17 = v4;
  table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v17, v6, v7, v8);
  if ( !v5
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
          v5,
          StringLiteral_22984/*"position"*/,
          table,
          v5->klass->vtable._24_Clear.methodPtr),
        (table = this->fields.table) == 0LL)
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
          table,
          StringLiteral_22680/*"oncomplete"*/,
          StringLiteral_22675/*"onStartComp"*/,
          table->klass->vtable._24_Clear.methodPtr),
        v9 = this->fields.table,
        totaltime = this->fields.totaltime,
        table = (struct System_Collections_Hashtable_o *)j_il2cpp_value_box_0(float_TypeInfo, &totaltime, v10, v11, v12),
        !v9) )
  {
LABEL_10:
    sub_1C22094(table, method);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v9->klass->vtable._23_Add.method)(
    v9,
    StringLiteral_24360/*"time"*/,
    table,
    v9->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = this->fields.table;
  v15 = gameObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61653064(v15, v14, 0LL);
}