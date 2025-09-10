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
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  UnityEngine_GameObject_o *v14; // x25
  UnityEngine_Transform_o *v15; // x20
  struct UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // [xsp+28h] [xbp-68h]

  if ( (byte_4C24F8F & 1) == 0 )
  {
    v10 = *(_QWORD *)&angle.fields.value.fields.y;
    v11 = *(_QWORD *)&angle.fields.hasValue;
    v12 = *(_QWORD *)&position.fields.value.fields.y;
    v13 = *(_QWORD *)&position.fields.hasValue;
    v14 = effetctPrefab;
    v15 = parent;
    sub_1C2D490(&StringLiteral_23126/*"root_text/type01/dm_base"*/);
    parent = v15;
    effetctPrefab = v14;
    *(_QWORD *)&position.fields.hasValue = v13;
    *(_QWORD *)&position.fields.value.fields.y = v12;
    *(_QWORD *)&angle.fields.hasValue = v11;
    *(_QWORD *)&angle.fields.value.fields.y = v10;
    byte_4C24F8F = 1;
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
    v19);
  v16 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_23126/*"root_text/type01/dm_base"*/, 0);
  this->fields.textObject = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.textObject, (int32_t)v16, v17, v18);
}


void WarBoardPopTextEffectPerformance__SetPopText(
        WarBoardPopTextEffectPerformance_o *this,
        System_String_o *text,
        int32_t color,
        const MethodInfo *method)
{
  UnityEngine_Object_o *textObject; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C24F90 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24F90 = 1;
  }
  textObject = (UnityEngine_Object_o *)this->fields.textObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(textObject, 0, 0) )
  {
    v8 = this->fields.textObject;
    if ( v8 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v8,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        return;
      if ( Component_object )
      {
        UILabel__set_text((UILabel_o *)Component_object, text, 0);
        return;
      }
    }
    sub_1C2D6EC(v8, v7);
  }
}