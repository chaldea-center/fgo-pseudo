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
  __int64 v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  UnityEngine_GameObject_o *v14; // x25
  UnityEngine_Transform_o *v15; // x20
  struct UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // [xsp+28h] [xbp-68h]

  if ( (byte_4A1D9E2 & 1) == 0 )
  {
    v10 = *(_QWORD *)&angle.fields.value.fields.y;
    v11 = *(_QWORD *)&angle.fields.hasValue;
    v12 = *(_QWORD *)&position.fields.value.fields.y;
    v13 = *(_QWORD *)&position.fields.hasValue;
    v14 = effetctPrefab;
    v15 = parent;
    sub_1B715CC(&StringLiteral_22907/*"root_text/type01/dm_base"*/, parent);
    parent = v15;
    effetctPrefab = v14;
    *(_QWORD *)&position.fields.hasValue = v13;
    *(_QWORD *)&position.fields.value.fields.y = v12;
    *(_QWORD *)&angle.fields.hasValue = v11;
    *(_QWORD *)&angle.fields.value.fields.y = v10;
    byte_4A1D9E2 = 1;
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
  v16 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_22907/*"root_text/type01/dm_base"*/, 0LL);
  this->fields.textObject = v16;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.textObject, (int32_t)v16, v17, v18);
}


void __fastcall WarBoardPopTextEffectPerformance__SetPopText(
        WarBoardPopTextEffectPerformance_o *this,
        System_String_o *text,
        int32_t color,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Object_o *textObject; // x21
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4A1D9E3 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, text);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    byte_4A1D9E3 = 1;
  }
  textObject = (UnityEngine_Object_o *)this->fields.textObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(textObject, 0LL, 0LL) )
  {
    v9 = this->fields.textObject;
    if ( v9 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v9,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
        return;
      if ( Component_object )
      {
        UILabel__set_text((UILabel_o *)Component_object, text, 0LL);
        return;
      }
    }
    sub_1B71828(v9, v8);
  }
}