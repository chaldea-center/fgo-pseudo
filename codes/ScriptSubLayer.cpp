void __fastcall ScriptSubLayer___ctor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EE32D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ScriptCharaData__TypeInfo, v5, v6, v7);
    byte_42EE32D = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  this->fields.listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listCharaData,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall ScriptSubLayer__Awake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ScriptSubLayer__Init(this, method);
}


void __fastcall ScriptSubLayer__CreateEffectController(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ExUIMeshRenderer_o *meshRender; // x0
  UnityEngine_Material_o *material; // x20
  ScriptActionRenderEffectController_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EE32B & 1) == 0 )
  {
    sub_B5D5C4(&ScriptActionRenderEffectController_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE32B = 1;
  }
  meshRender = this->fields.meshRender;
  if ( !meshRender )
    sub_B5D69C(0LL, method);
  material = ExUIMeshRenderer__get_material(meshRender, 0LL);
  v7 = (ScriptActionRenderEffectController_o *)sub_B5D694(ScriptActionRenderEffectController_TypeInfo);
  ScriptActionRenderEffectController___ctor(v7, material, 0LL);
  this->fields._effectController_k__BackingField = v7;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._effectController_k__BackingField,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall ScriptSubLayer__CreateRenderTexture(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_RenderTexture_o *Temporary_35679768; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  UnityEngine_Object_o *renderTexture_k__BackingField; // x0

  if ( (byte_42EE32A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13750/*"TempRenderTexture"*/, (_DWORD)method, v2, v3);
    byte_42EE32A = 1;
  }
  Temporary_35679768 = UnityEngine_RenderTexture__GetTemporary_35679768(1024, 1024, 0, 0, 0LL);
  this->fields._renderTexture_k__BackingField = Temporary_35679768;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._renderTexture_k__BackingField,
    (System_Int32_array **)Temporary_35679768,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !renderTexture_k__BackingField
    || (UnityEngine_Object__set_name(renderTexture_k__BackingField, (System_String_o *)StringLiteral_13750/*"TempRenderTexture"*/, 0LL),
        (renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields.meshRender) == 0LL) )
  {
    sub_B5D69C(renderTexture_k__BackingField, v12);
  }
  ExUIMeshRenderer__SetImage(
    (ExUIMeshRenderer_o *)renderTexture_k__BackingField,
    (UnityEngine_Texture_o *)this->fields._renderTexture_k__BackingField,
    0LL);
}


void __fastcall ScriptSubLayer__Init(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *renderTexture_k__BackingField; // x21
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ExUIMeshRenderer_o *meshRender; // x0
  System_Int32_array **v20; // x1
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  struct UnityEngine_Color_o v25; // q0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  struct UnityEngine_Color_o v46; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE329 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EE329 = 1;
  }
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(renderTexture_k__BackingField, 0LL, 0LL) )
  {
    meshRender = this->fields.meshRender;
    if ( !meshRender )
      goto LABEL_12;
    ExUIMeshRenderer__ClearImage(meshRender, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(this->fields._renderTexture_k__BackingField, 0LL);
  }
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._layerKey_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._layerKey_k__BackingField, v20, v13, v14, v15, v16, v17, v18);
  v47.fields.r = 0.0;
  v47.fields.g = 0.0;
  v47.fields.b = 0.0;
  v47.fields.a = 0.0;
  this->fields._isRendering_k__BackingField = 0;
  v46 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v47, v21, v22, v23, v24, (const MethodInfo *)&v46);
  v25 = v46;
  this->fields._renderTexture_k__BackingField = 0LL;
  this->fields._backgroundColor_k__BackingField = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._renderTexture_k__BackingField,
    0LL,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields._effectController_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._effectController_k__BackingField,
    0LL,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  meshRender = (ExUIMeshRenderer_o *)this->fields.listCharaData;
  if ( !meshRender
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)meshRender,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ScriptCharaData__Clear__),
        this->fields.subLayerMask = 0LL,
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.subLayerMask, 0LL, v38, v39, v40, v41, v42, v43),
        (meshRender = (ExUIMeshRenderer_o *)this->fields.renderRoot) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(meshRender, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)meshRender, 0, 0LL);
  ScriptSubLayer__SetDepth(this, 1.0, v44);
  ScriptSubLayer__SetEdgeMaskSubMaterial(this, 0LL, v45);
}


void __fastcall ScriptSubLayer__MoveAlphaCharaData(
        ScriptSubLayer_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EE326 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, (_DWORD)method, v4, v5);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42EE326 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listCharaData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v24.fields.current;
    if ( v24.fields.current )
    {
      klass = v24.fields.current[3].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
        ScriptCharaData__MoveAlpha((ScriptCharaData_o *)current, duration, alpha, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__RegistCharaData(
        ScriptSubLayer_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0

  if ( (byte_42EE323 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData__Add__, (_DWORD)charaData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12777/*"ScriptRenderSub"*/, v6, v7, v8);
    byte_42EE323 = 1;
  }
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listCharaData,
          (EventMissionProgressRequest_Argument_ProgressData_o *)charaData,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptCharaData__Add__),
        listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)UnityEngine_LayerMask__NameToLayer(
                                                                                       (System_String_o *)StringLiteral_12777/*"ScriptRenderSub"*/,
                                                                                       0LL),
        !charaData) )
  {
    sub_B5D69C(listCharaData, charaData);
  }
  ScriptCharaData__SetLayer(charaData, (int32_t)listCharaData, 0LL);
}


void __fastcall ScriptSubLayer__RemoveCharaData(
        ScriptSubLayer_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *listCharaData; // x0

  if ( (byte_42EE322 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData__Remove__, (_DWORD)charaData, (_DWORD)method, v3);
    byte_42EE322 = 1;
  }
  listCharaData = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_B5D69C(0LL, charaData);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    listCharaData,
    (WarBoardManager_TaskList_o *)charaData,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
}


void __fastcall ScriptSubLayer__RemoveInvalidCharaData(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  __int64 v27; // x1
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x22
  _BOOL8 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  int v34; // w19
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  int v36[2]; // [xsp+20h] [xbp-70h]
  int v37; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_42EE324 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_ScriptCharaData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    byte_42EE324 = 1;
  }
  memset(&i, 0, sizeof(i));
  v37 = 0;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScriptCharaData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listCharaData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  i = v35;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = i.fields.current;
    if ( i.fields.current )
    {
      klass = i.fields.current[3].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v31 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL);
      if ( v31 )
      {
        if ( !v26 )
          sub_B5D69C(v31, v32);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptCharaData__Add__);
      }
    }
  }
  v36[0] = 77;
  v37 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  v37 = 0;
  if ( !v26 )
LABEL_22:
    sub_B5D69C(listCharaData, v27);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  for ( i = v35;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
        ScriptSubLayer__RemoveCharaData(this, (ScriptCharaData_o *)i.fields.current, v33) )
  {
    ;
  }
  v36[0] = 126;
  v34 = ++v37;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  if ( v34 && v36[v34 - 1] == 126 )
    v37 = v34 - 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetBackgroundColor(
        ScriptSubLayer_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  this->fields._backgroundColor_k__BackingField = color;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetDepth(ScriptSubLayer_o *this, float depth, const MethodInfo *method)
{
  UnityEngine_Component_o *meshRender; // x0
  float v6; // s0
  float v7; // s1
  float v8; // s9
  float v9; // s10
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  meshRender = (UnityEngine_Component_o *)this->fields.meshRender;
  if ( !meshRender
    || (meshRender = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(meshRender, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)meshRender,
                                          0LL),
        (meshRender = (UnityEngine_Component_o *)this->fields.meshRender) == 0LL)
    || (v8 = v6,
        v9 = v7,
        (meshRender = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(meshRender, 0LL)) == 0LL) )
  {
    sub_B5D69C(meshRender, method);
  }
  v10.fields.z = -depth;
  v10.fields.x = v8;
  v10.fields.y = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)meshRender, v10, 0LL);
}


void __fastcall ScriptSubLayer__SetEdgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        UnityEngine_Material_o *mat,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantConfConponent_o *p_edgeMaskSubMaterial_k__BackingField; // x20
  UnityEngine_Object_o *v7; // x21
  struct UnityEngine_Material_o *edgeMaskSubMaterial_k__BackingField; // t1
  UnityEngine_Object_o *klass; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *v16; // x21

  if ( (byte_42EE328 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)mat, (_DWORD)method, v3);
    byte_42EE328 = 1;
  }
  edgeMaskSubMaterial_k__BackingField = this->fields._edgeMaskSubMaterial_k__BackingField;
  p_edgeMaskSubMaterial_k__BackingField = (BattleServantConfConponent_o *)&this->fields._edgeMaskSubMaterial_k__BackingField;
  v7 = (UnityEngine_Object_o *)edgeMaskSubMaterial_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v7, (UnityEngine_Object_o *)mat, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_edgeMaskSubMaterial_k__BackingField->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v16 = (UnityEngine_Object_o *)p_edgeMaskSubMaterial_k__BackingField->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v16, 0LL);
    }
    p_edgeMaskSubMaterial_k__BackingField->klass = (BattleServantConfConponent_c *)mat;
    sub_B5D560(p_edgeMaskSubMaterial_k__BackingField, (System_Int32_array **)mat, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall ScriptSubLayer__SetFilterCharaData(
        ScriptSubLayer_o *this,
        System_String_o *filterName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE327 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__,
      (_DWORD)filterName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42EE327 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    sub_B5D69C(0LL, filterName);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listCharaData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v21.fields.current;
    if ( v21.fields.current )
    {
      klass = v21.fields.current[3].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        white = UnityEngine_Color__get_white(0LL);
        ScriptCharaData__SetFilter((ScriptCharaData_o *)current, filterName, white, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetLayer(ScriptSubLayer_o *this, int32_t layer, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EE32C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, layer, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42EE32C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    sub_B5D69C(0LL, *(_QWORD *)&layer);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listCharaData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v21.fields.current;
    if ( v21.fields.current )
    {
      klass = v21.fields.current[3].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
        ScriptCharaData__SetLayer((ScriptCharaData_o *)current, layer, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__SetLayerActive(ScriptSubLayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( (byte_42EE325 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12777/*"ScriptRenderSub"*/, (_DWORD)method, v2, v3);
    byte_42EE325 = 1;
  }
  v5 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_12777/*"ScriptRenderSub"*/, 0LL);
  ScriptSubLayer__SetLayer(this, v5, v6);
}


void __fastcall ScriptSubLayer__SetLayerKey(ScriptSubLayer_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._layerKey_k__BackingField = key;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._layerKey_k__BackingField,
    (System_Int32_array **)key,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__SetMaskLayer(
        ScriptSubLayer_o *this,
        ScriptSubLayer_o *maskLayer,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.subLayerMask = maskLayer;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.subLayerMask,
    (System_Int32_array **)maskLayer,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetRendering(ScriptSubLayer_o *this, bool rendering, const MethodInfo *method)
{
  __int64 v3; // x3
  bool v5; // w22
  UnityEngine_Object_o *subLayerMask; // x21
  _BOOL8 v7; // x0

  v5 = rendering;
  while ( 1 )
  {
    if ( (byte_42EE321 & 1) == 0 )
    {
      sub_B5D5C4(&UnityEngine_Object_TypeInfo, rendering, (_DWORD)method, v3);
      byte_42EE321 = 1;
    }
    this->fields._isRendering_k__BackingField = v5;
    subLayerMask = (UnityEngine_Object_o *)this->fields.subLayerMask;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality(subLayerMask, 0LL, 0LL);
    if ( !v7 )
      break;
    this = this->fields.subLayerMask;
    if ( !this )
      sub_B5D69C(v7, rendering);
  }
}


void __fastcall ScriptSubLayer__StartSubLayer(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ScriptSubLayer__Init(this, method);
  ScriptSubLayer__CreateRenderTexture(this, v3);
  ScriptSubLayer__CreateEffectController(this, v4);
}


void __fastcall ScriptSubLayer__SwapLayer(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptSubLayer__SetLayer(this, -1, v2);
}


void __fastcall ScriptSubLayer__Update(ScriptSubLayer_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  ScriptActionRenderEffectController_o *effectController_k__BackingField; // x0

  deltaTime = RealTime__get_deltaTime(0LL);
  effectController_k__BackingField = this->fields._effectController_k__BackingField;
  if ( effectController_k__BackingField )
    ScriptActionRenderEffectController__Update(effectController_k__BackingField, deltaTime, 0LL);
}


System_Collections_Generic_IReadOnlyList_ScriptCharaData__o *__fastcall ScriptSubLayer__get_ListCharaData(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyList_ScriptCharaData__o *)this->fields.listCharaData;
}


ScriptSubLayer_o *__fastcall ScriptSubLayer__get_SubLayerMask(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.subLayerMask;
}


UnityEngine_Color_o __fastcall ScriptSubLayer__get_backgroundColor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._backgroundColor_k__BackingField.fields.r;
  g = this->fields._backgroundColor_k__BackingField.fields.g;
  b = this->fields._backgroundColor_k__BackingField.fields.b;
  a = this->fields._backgroundColor_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_cameraPosition(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields.positionCamera;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_cameraRoll1(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.rollCamera1;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_cameraRoll2(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.rollCamera2;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_cameraScale(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.scaleCamera;
}


UnityEngine_Material_o *__fastcall ScriptSubLayer__get_edgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields._edgeMaskSubMaterial_k__BackingField;
}


ScriptActionRenderEffectController_o *__fastcall ScriptSubLayer__get_effectController(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields._effectController_k__BackingField;
}


bool __fastcall ScriptSubLayer__get_isRendering(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._isRendering_k__BackingField;
}


System_String_o *__fastcall ScriptSubLayer__get_layerKey(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._layerKey_k__BackingField;
}


ExUIMeshRenderer_o *__fastcall ScriptSubLayer__get_mesh(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.meshRender;
}


UnityEngine_RenderTexture_o *__fastcall ScriptSubLayer__get_renderTexture(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  return this->fields._renderTexture_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_root(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields.renderRoot;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__set_backgroundColor(
        ScriptSubLayer_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._backgroundColor_k__BackingField = value;
}


void __fastcall ScriptSubLayer__set_edgeMaskSubMaterial(
        ScriptSubLayer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._edgeMaskSubMaterial_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__set_effectController(
        ScriptSubLayer_o *this,
        ScriptActionRenderEffectController_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._effectController_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._effectController_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__set_isRendering(ScriptSubLayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._isRendering_k__BackingField = value;
}


void __fastcall ScriptSubLayer__set_layerKey(ScriptSubLayer_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._layerKey_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._layerKey_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptSubLayer__set_renderTexture(
        ScriptSubLayer_o *this,
        UnityEngine_RenderTexture_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._renderTexture_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._renderTexture_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}