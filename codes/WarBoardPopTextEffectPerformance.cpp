void WarBoardPopTextEffectPerformance___ctor(
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
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  UnityEngine_GameObject_o *v15; // x19
  struct UnityEngine_GameObject_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // [xsp+28h] [xbp-68h]

  if ( (byte_593625A & 1) == 0 )
  {
    v11 = *(_QWORD *)&angle.fields.value.fields.y;
    v12 = *(_QWORD *)&angle.fields.hasValue;
    v13 = *(_QWORD *)&position.fields.value.fields.y;
    v14 = *(_QWORD *)&position.fields.hasValue;
    v15 = effetctPrefab;
    sub_21FFC50(&StringLiteral_24308/*"root_text/type01/dm_base"*/);
    effetctPrefab = v15;
    *(_QWORD *)&position.fields.hasValue = v14;
    *(_QWORD *)&position.fields.value.fields.y = v13;
    *(_QWORD *)&angle.fields.hasValue = v12;
    *(_QWORD *)&angle.fields.value.fields.y = v11;
    byte_593625A = 1;
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
    v23);
  v16 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_24308/*"root_text/type01/dm_base"*/, 0);
  this->fields.textObject = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.textObject, (int32_t)v16, v17, v18, v19, v20, v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPopTextEffectPerformance__SetPopText(
        WarBoardPopTextEffectPerformance_o *this,
        System_String_o *text,
        int32_t color,
        const MethodInfo *method)
{
  UnityEngine_Object_o *textObject; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_593625B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593625B = 1;
  }
  textObject = (UnityEngine_Object_o *)this->fields.textObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text, *(_QWORD *)&color);
  if ( !UnityEngine_Object__op_Equality(textObject, 0, 0) )
  {
    v8 = this->fields.textObject;
    if ( v8 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v8,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        return;
      if ( Component_object )
      {
        UILabel__set_text((UILabel_o *)Component_object, text, 0);
        return;
      }
    }
    sub_21FFECC(v8, v7);
  }
}