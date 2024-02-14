void __fastcall WarBoardPopTextEffectPerformance___ctor(
        WarBoardPopTextEffectPerformance_o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_GameObject_o *effetctPrefab,
        System_Nullable_Vector3__o position,
        System_Nullable_Vector3__o angle,
        System_Nullable_Vector3__o scale,
        bool isLocal,
        bool doInstantiate,
        const MethodInfo *method)
{
  __int64 v10; // x21
  __int64 v11; // x23
  __int64 v12; // x24
  __int64 v13; // x25
  UnityEngine_Transform_o *v14; // x26
  struct UnityEngine_GameObject_o *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *effetctPrefaba; // [xsp+38h] [xbp-58h]

  if ( (byte_421651F & 1) == 0 )
  {
    v10 = *(_QWORD *)&angle.fields.value.fields.z;
    v11 = *(_QWORD *)&angle.fields.value.fields.x;
    v12 = *(_QWORD *)&position.fields.value.fields.z;
    v13 = *(_QWORD *)&position.fields.value.fields.x;
    effetctPrefaba = effetctPrefab;
    v14 = parent;
    sub_B0D8A4(&StringLiteral_21926/*"root_text/type01/dm_base"*/, parent);
    effetctPrefab = effetctPrefaba;
    parent = v14;
    *(_QWORD *)&position.fields.value.fields.x = v13;
    *(_QWORD *)&position.fields.value.fields.z = v12;
    *(_QWORD *)&angle.fields.value.fields.x = v11;
    *(_QWORD *)&angle.fields.value.fields.z = v10;
    byte_421651F = 1;
  }
  WarBoardCommonEffectPerformance___ctor(
    (WarBoardCommonEffectPerformance_o *)this,
    parent,
    effetctPrefab,
    position,
    angle,
    scale,
    isLocal,
    doInstantiate,
    1,
    0LL);
  v15 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_21926/*"root_text/type01/dm_base"*/, 0LL);
  this->fields.textObject = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.textObject,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall WarBoardPopTextEffectPerformance__SetPopText(
        WarBoardPopTextEffectPerformance_o *this,
        System_String_o *text,
        int32_t color,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Object_o *textObject; // x21
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_4216520 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, text);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4216520 = 1;
  }
  textObject = (UnityEngine_Object_o *)this->fields.textObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(textObject, 0LL, 0LL) )
  {
    v8 = this->fields.textObject;
    if ( v8 )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v8,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        return;
      if ( Component_srcLineSprite )
      {
        UILabel__set_text((UILabel_o *)Component_srcLineSprite, text, 0LL);
        return;
      }
    }
    sub_B0D97C(v8);
  }
}