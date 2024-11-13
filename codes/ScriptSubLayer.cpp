void __fastcall ScriptSubLayer___ctor(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B17ED1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptCharaData__TypeInfo, v5, v6);
    byte_4B17ED1 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ScriptCharaData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  this->fields.listCharaData = (struct System_Collections_Generic_List_ScriptCharaData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listCharaData, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)&this->fields.shakeParam.fields.time = 0LL;
  *(_QWORD *)&this->fields.shakeParam.fields.x = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall ScriptSubLayer__Awake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ScriptSubLayer__Init(this, method);
}


void __fastcall ScriptSubLayer__CreateEffectController(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ExUIMeshRenderer_o *meshRender; // x0
  UnityEngine_Material_o *material; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  ScriptActionRenderEffectController_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B17ECD & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptActionRenderEffectController_TypeInfo, method, v2);
    byte_4B17ECD = 1;
  }
  meshRender = this->fields.meshRender;
  if ( !meshRender )
    sub_1BCAA3C(0LL, method);
  material = ExUIMeshRenderer__get_material(meshRender, 0LL);
  v9 = (ScriptActionRenderEffectController_o *)sub_1BCAA2C(ScriptActionRenderEffectController_TypeInfo, v6, v7, v8);
  ScriptActionRenderEffectController___ctor(v9, material, 0LL);
  this->fields._effectController_k__BackingField = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._effectController_k__BackingField,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall ScriptSubLayer__CreateRenderTexture(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_RenderTexture_o *Temporary_70062440; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  UnityEngine_Object_o *renderTexture_k__BackingField; // x0

  if ( (byte_4B17ECC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13744/*"TempRenderTexture"*/, method, v2);
    byte_4B17ECC = 1;
  }
  Temporary_70062440 = UnityEngine_RenderTexture__GetTemporary_70062440(1024, 1024, 0, 0, 0LL);
  this->fields._renderTexture_k__BackingField = Temporary_70062440;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._renderTexture_k__BackingField,
    (int64_t)Temporary_70062440,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !renderTexture_k__BackingField
    || (UnityEngine_Object__set_name(renderTexture_k__BackingField, (System_String_o *)StringLiteral_13744/*"TempRenderTexture"*/, 0LL),
        (renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields.meshRender) == 0LL) )
  {
    sub_1BCAA3C(renderTexture_k__BackingField, v11);
  }
  ExUIMeshRenderer__SetImage(
    (ExUIMeshRenderer_o *)renderTexture_k__BackingField,
    (UnityEngine_Texture_o *)this->fields._renderTexture_k__BackingField,
    0LL);
}


void __fastcall ScriptSubLayer__EndExecuteStretch(ScriptSubLayer_o *this, const MethodInfo *method)
{
  this->fields._IsExecuteStretch_k__BackingField = 0;
}


void __fastcall ScriptSubLayer__Init(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *renderTexture_k__BackingField; // x21
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  ExUIMeshRenderer_o *meshRender; // x0
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Collections_Generic_List_ScriptCharaData__o *listCharaData; // x8
  int64_t size; // x2
  int v37; // w9
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1

  if ( (byte_4B17ECB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData__Clear__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17ECB = 1;
  }
  renderTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._renderTexture_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(renderTexture_k__BackingField, 0LL, 0LL) )
  {
    meshRender = this->fields.meshRender;
    if ( !meshRender )
      goto LABEL_13;
    ExUIMeshRenderer__ClearImage(meshRender, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(this->fields._renderTexture_k__BackingField, 0LL);
  }
  v17 = StringLiteral_1/*""*/;
  this->fields._layerKey_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._layerKey_k__BackingField,
    (int64_t)v17,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields._isRendering_k__BackingField = 0;
  this->fields._renderTexture_k__BackingField = 0LL;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.b = 0LL;
  *(_QWORD *)&this->fields._backgroundColor_k__BackingField.fields.r = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._renderTexture_k__BackingField,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._effectController_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._effectController_k__BackingField,
    0LL,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  listCharaData = this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_13;
  size = (unsigned int)listCharaData->fields._size;
  v37 = listCharaData->fields._version + 1;
  listCharaData->fields._size = 0;
  listCharaData->fields._version = v37;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)listCharaData->fields._items, 0, size, 0LL);
  this->fields.subLayerMask = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.subLayerMask, 0LL, size, v30, v31, v32, v33, v34);
  meshRender = (ExUIMeshRenderer_o *)this->fields.renderRoot;
  if ( !meshRender )
LABEL_13:
    sub_1BCAA3C(meshRender, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)meshRender, 0, 0LL);
  ScriptSubLayer__SetDepth(this, 1.0, v38);
  ScriptSubLayer__SetEdgeMaskSubMaterial(this, 0LL, v39);
  ScriptSubLayer__ResetShake(this, v40);
}


void __fastcall ScriptSubLayer__MoveAlphaCharaData(
        ScriptSubLayer_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  __int64 v4; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *listCharaData; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B17EC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, method, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B17EC7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    listCharaData,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v20.fields._current;
    if ( v20.fields._current )
    {
      klass = v20.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
        ScriptCharaData__MoveAlpha((ScriptCharaData_o *)current, duration, alpha, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__OnShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  UnityEngine_Transform_o *transform; // x20
  float v9; // s8
  float v10; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17ED0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10087/*"OnShake"*/, v4, v5);
    byte_4B17ED0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL) )
  {
    if ( this->fields.shakeParam.fields.cycle <= 0.0
      || this->fields.shakeParam.fields.time > 0.0
      && UnityEngine_Time__get_time(0LL) >= this->fields.shakeParam.fields.time )
    {
      ScriptSubLayer__ResetShake(this, v6);
    }
    else
    {
      shakeRoot = this->fields.shakeRoot;
      if ( !shakeRoot
        || (transform = UnityEngine_GameObject__get_transform(shakeRoot, 0LL),
            v9 = UnityEngine_Random__Range(-this->fields.shakeParam.fields.x, this->fields.shakeParam.fields.x, 0LL),
            v10 = UnityEngine_Random__Range(-this->fields.shakeParam.fields.y, this->fields.shakeParam.fields.y, 0LL),
            !transform) )
      {
        sub_1BCAA3C(shakeRoot, v6);
      }
      v11.fields.y = v10;
      v11.fields.z = 0.0;
      v11.fields.x = v9;
      UnityEngine_Transform__set_localPosition(transform, v11, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10087/*"OnShake"*/,
        this->fields.shakeParam.fields.cycle,
        0LL);
    }
  }
}


void __fastcall ScriptSubLayer__RegistCharaData(
        ScriptSubLayer_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *listCharaData; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4B17EC4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData__Add__, charaData, method);
    sub_1BCA7E0(&StringLiteral_12697/*"ScriptRenderSub"*/, v10, v11);
    byte_4B17EC4 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_10;
  items = listCharaData->fields._items;
  v14 = Method_System_Collections_Generic_List_ScriptCharaData__Add__;
  ++listCharaData->fields._version;
  if ( !items )
    goto LABEL_10;
  size = listCharaData->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listCharaData,
      (Il2CppObject *)charaData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    listCharaData->fields._size = size + 1;
    v16[4] = (Il2CppClass *)charaData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 4), (int64_t)charaData, (int64_t)method, v3, v4, v5, v6, v7);
  }
  listCharaData = (System_Collections_Generic_List_object__o *)UnityEngine_LayerMask__NameToLayer(
                                                                 (System_String_o *)StringLiteral_12697/*"ScriptRenderSub"*/,
                                                                 0LL);
  if ( !charaData )
LABEL_10:
    sub_1BCAA3C(listCharaData, charaData);
  ScriptCharaData__SetLayer(charaData, (int32_t)listCharaData, 0LL);
}


void __fastcall ScriptSubLayer__RemoveCharaData(
        ScriptSubLayer_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listCharaData; // x0

  if ( (byte_4B17EC3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData__Remove__, charaData, method);
    byte_4B17EC3 = 1;
  }
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1BCAA3C(0LL, charaData);
  System_Collections_Generic_List_object___Remove(
    listCharaData,
    (Il2CppObject *)charaData,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_ScriptCharaData__Remove__);
}


void __fastcall ScriptSubLayer__RemoveInvalidCharaData(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *listCharaData; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x2
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B17EC5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptCharaData__TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B17EC5 = 1;
  }
  memset(&i, 0, sizeof(i));
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ScriptCharaData__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptCharaData___ctor__);
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    listCharaData,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  i = v38;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = i.fields._current;
    if ( i.fields._current )
    {
      klass = i.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      v25 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL);
      if ( v25 )
      {
        if ( !v19 )
          sub_1BCAA3C(v25, v26);
        items = v19->fields._items;
        v34 = Method_System_Collections_Generic_List_ScriptCharaData__Add__;
        ++v19->fields._version;
        if ( !items )
          sub_1BCAA3C(v25, v26);
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            current,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v36[4] = (Il2CppClass *)current;
          sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)current, v27, v28, v29, v30, v31, v32);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
  if ( !v19 )
LABEL_22:
    sub_1BCAA3C(listCharaData, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v19,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  for ( i = v38;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__);
        ScriptSubLayer__RemoveCharaData(this, (ScriptCharaData_o *)i.fields._current, v37) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__ResetShake(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *shakeRoot; // x0
  __int64 v6; // x2
  UnityEngine_Transform_o *v7; // x20

  if ( (byte_4B17ECF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10087/*"OnShake"*/, method, v2);
    byte_4B17ECF = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10087/*"OnShake"*/,
    0LL);
  shakeRoot = this->fields.shakeRoot;
  if ( !shakeRoot )
    goto LABEL_8;
  shakeRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(shakeRoot, 0LL);
  v7 = (UnityEngine_Transform_o *)shakeRoot;
  if ( !byte_4B109C1 )
  {
    shakeRoot = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v4, v6);
    byte_4B109C1 = 1;
  }
  if ( !v7 )
LABEL_8:
    sub_1BCAA3C(shakeRoot, v4);
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  *(_QWORD *)&this->fields.shakeParam.fields.time = 0LL;
  *(_QWORD *)&this->fields.shakeParam.fields.x = 0LL;
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
    sub_1BCAA3C(meshRender, method);
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
  PartyOrganizationUtility_o *p_edgeMaskSubMaterial_k__BackingField; // x20
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Material_o *edgeMaskSubMaterial_k__BackingField; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *klass; // x21
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Object_o *v17; // x21

  if ( (byte_4B17EC9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, mat, method);
    byte_4B17EC9 = 1;
  }
  edgeMaskSubMaterial_k__BackingField = this->fields._edgeMaskSubMaterial_k__BackingField;
  p_edgeMaskSubMaterial_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._edgeMaskSubMaterial_k__BackingField;
  v6 = (UnityEngine_Object_o *)edgeMaskSubMaterial_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mat);
  if ( !UnityEngine_Object__op_Equality(v6, (UnityEngine_Object_o *)mat, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_edgeMaskSubMaterial_k__BackingField->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)p_edgeMaskSubMaterial_k__BackingField->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_70154244(v17, 0LL);
    }
    p_edgeMaskSubMaterial_k__BackingField->klass = (PartyOrganizationUtility_c *)mat;
    sub_1BCA784(p_edgeMaskSubMaterial_k__BackingField, (int64_t)mat, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall ScriptSubLayer__SetFilterCharaData(
        ScriptSubLayer_o *this,
        System_String_o *filterName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *listCharaData; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17EC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__, filterName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B17EC8 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1BCAA3C(0LL, filterName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    listCharaData,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v17.fields._current;
    if ( v17.fields._current )
    {
      klass = v17.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        v18.fields.r = 1.0;
        v18.fields.g = 1.0;
        v18.fields.b = 1.0;
        v18.fields.a = 1.0;
        ScriptCharaData__SetFilter((ScriptCharaData_o *)current, filterName, v18, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetLayer(ScriptSubLayer_o *this, int32_t layer, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *listCharaData; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B17ECE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__,
      *(_QWORD *)&layer,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B17ECE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  listCharaData = (System_Collections_Generic_List_object__o *)this->fields.listCharaData;
  if ( !listCharaData )
    sub_1BCAA3C(0LL, *(_QWORD *)&layer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    listCharaData,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptCharaData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__MoveNext__) )
  {
    current = v17.fields._current;
    if ( v17.fields._current )
    {
      klass = v17.fields._current[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
        ScriptCharaData__SetLayer((ScriptCharaData_o *)current, layer, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptCharaData__Dispose__);
}


void __fastcall ScriptSubLayer__SetLayerActive(ScriptSubLayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w1
  const MethodInfo *v5; // x2

  if ( (byte_4B17EC6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12697/*"ScriptRenderSub"*/, method, v2);
    byte_4B17EC6 = 1;
  }
  v4 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_12697/*"ScriptRenderSub"*/, 0LL);
  ScriptSubLayer__SetLayer(this, v4, v5);
}


void __fastcall ScriptSubLayer__SetLayerKey(ScriptSubLayer_o *this, System_String_o *key, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._layerKey_k__BackingField = key;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._layerKey_k__BackingField,
    (int64_t)key,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.subLayerMask = maskLayer;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.subLayerMask,
    (int64_t)maskLayer,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetRendering(ScriptSubLayer_o *this, bool rendering, const MethodInfo *method)
{
  bool v4; // w22
  UnityEngine_Object_o *subLayerMask; // x21
  _BOOL8 v6; // x0

  v4 = rendering;
  while ( 1 )
  {
    if ( (byte_4B17EC2 & 1) == 0 )
    {
      sub_1BCA7E0(&UnityEngine_Object_TypeInfo, rendering, method);
      byte_4B17EC2 = 1;
    }
    this->fields._isRendering_k__BackingField = v4;
    subLayerMask = (UnityEngine_Object_o *)this->fields.subLayerMask;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rendering);
    v6 = UnityEngine_Object__op_Inequality(subLayerMask, 0LL, 0LL);
    if ( !v6 )
      break;
    this = this->fields.subLayerMask;
    if ( !this )
      sub_1BCAA3C(v6, rendering);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__SetStretchObj(
        ScriptSubLayer_o *this,
        UnityEngine_GameObject_o *stretchObj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *subStretchBase; // x0
  UnityEngine_Transform_o *v6; // x21
  int v7; // s0
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0

  subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
  if ( !subStretchBase )
    goto LABEL_9;
  subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0LL);
  if ( !stretchObj )
    goto LABEL_9;
  v6 = (UnityEngine_Transform_o *)subStretchBase;
  subStretchBase = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(stretchObj, 0LL);
  if ( !subStretchBase
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)subStretchBase,
                                          0LL),
        !v6)
    || (UnityEngine_Transform__set_localPosition(v6, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase) == 0LL)
    || (transform = UnityEngine_Component__get_transform(subStretchBase, 0LL),
        (subStretchBase = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(stretchObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)subStretchBase,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_1BCAA3C(subStretchBase, stretchObj);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
}


void __fastcall ScriptSubLayer__Shake(
        ScriptSubLayer_o *this,
        float duration,
        float cycle,
        float x,
        float y,
        const MethodInfo *method)
{
  bool v11; // cc
  float v12; // s0

  v11 = duration <= 0.0;
  v12 = 0.0;
  if ( !v11 )
    v12 = UnityEngine_Time__get_time(0LL) + duration;
  this->fields.shakeParam.fields.time = v12;
  this->fields.shakeParam.fields.cycle = cycle;
  this->fields.shakeParam.fields.x = x;
  this->fields.shakeParam.fields.y = y;
  ScriptSubLayer__OnShake(this, method);
}


// attributes: thunk
void __fastcall ScriptSubLayer__ShakeStop(ScriptSubLayer_o *this, const MethodInfo *method)
{
  ScriptSubLayer__ResetShake(this, method);
}


void __fastcall ScriptSubLayer__StartSubLayer(ScriptSubLayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ScriptSubLayer__Init(this, method);
  ScriptSubLayer__CreateRenderTexture(this, v3);
  ScriptSubLayer__CreateEffectController(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer__StartSubStretch(
        ScriptSubLayer_o *this,
        System_String_o *name,
        bool isIn,
        float duration,
        float scale,
        UnityEngine_Vector2_o stretchBaseRange,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s10
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v31; // s12
  float v32; // s13
  float z; // s14
  float v34; // s11
  UnityEngine_Component_o *subStretchBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  TweenScale_o *v38; // x20
  UnityEngine_GameObject_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  uint32_t v53; // w0
  float v54; // [xsp+8h] [xbp-78h]
  float v55; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v59; // 0:s1.4,4:s2.4,8:s3.4

  y = stretchBaseRange.fields.y;
  x = stretchBaseRange.fields.x;
  if ( (byte_4B17ECA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, isIn);
    sub_1BCA7E0(&StringLiteral_20160/*"horizontally"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_6077/*"EndExecuteStretch"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_20161/*"horizontallyLeft"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19865/*"full"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_24795/*"verticalUp"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_24791/*"verticalDown"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_24787/*"vertical"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_20162/*"horizontallyRight"*/, v28, v29);
    byte_4B17ECA = 1;
  }
  if ( !this->fields._IsExecuteStretch_k__BackingField )
  {
    if ( !byte_4B109C6 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, name, isIn);
      byte_4B109C6 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v31 = static_fields->oneVector.fields.x;
    v32 = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, name, isIn);
      byte_4B109C1 = 1;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    }
    v34 = static_fields->zeroVector.fields.z;
    v54 = static_fields->zeroVector.fields.x;
    v55 = static_fields->zeroVector.fields.y;
    if ( isIn )
    {
LABEL_10:
      subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
      if ( subStretchBase )
      {
        if ( duration <= 0.0 )
        {
          subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0LL);
          if ( subStretchBase )
          {
            v56.fields.x = v31;
            v56.fields.y = v32;
            v56.fields.z = z;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)subStretchBase, v56, 0LL);
            subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
            if ( subStretchBase )
            {
              subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(subStretchBase, 0LL);
              if ( subStretchBase )
              {
                v57.fields.x = v54;
                v57.fields.y = v55;
                v57.fields.z = v34;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)subStretchBase, v57, 0LL);
                return;
              }
            }
          }
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject(subStretchBase, 0LL);
          v58.fields.x = v31;
          v58.fields.y = v32;
          v58.fields.z = z;
          v38 = TweenScale__Begin(gameObject, duration, v58, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v38, 0LL, 0LL) )
            return;
          subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
          if ( subStretchBase )
          {
            v39 = UnityEngine_Component__get_gameObject(subStretchBase, 0LL);
            v59.fields.x = v54;
            v59.fields.y = v55;
            v59.fields.z = v34;
            TweenPosition__Begin(v39, duration, v59, 0LL);
            subStretchBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
            if ( v38 )
            {
              v38->fields.eventReceiver = (struct UnityEngine_GameObject_o *)subStretchBase;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v38->fields.eventReceiver,
                (int64_t)subStretchBase,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45);
              v46 = StringLiteral_6077/*"EndExecuteStretch"*/;
              v38->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6077/*"EndExecuteStretch"*/;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v38->fields.callWhenFinished,
                v46,
                v47,
                v48,
                v49,
                v50,
                v51,
                v52);
              this->fields._IsExecuteStretch_k__BackingField = 1;
              return;
            }
          }
        }
      }
      sub_1BCAA3C(subStretchBase, name);
    }
    v53 = PrivateImplementationDetails___ComputeStringHash(name, 0LL);
    if ( v53 <= 0x70027A90 )
    {
      if ( v53 != 264610898 )
      {
        if ( v53 == 690205847 )
        {
          if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_24791/*"verticalDown"*/, 0LL) )
            goto LABEL_10;
          v31 = 1.0;
          v32 = scale;
          z = 1.0;
          v54 = 0.0;
          v55 = (float)-y * scale;
        }
        else
        {
          if ( v53 != 1879210640 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_20162/*"horizontallyRight"*/, 0LL) )
            goto LABEL_10;
          v32 = 1.0;
          v31 = scale;
          z = 1.0;
          v54 = (float)-x * scale;
          v55 = 0.0;
        }
LABEL_47:
        v34 = 0.0;
        goto LABEL_10;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_20160/*"horizontally"*/, 0LL) )
        goto LABEL_10;
      v32 = 1.0;
      v31 = scale;
LABEL_43:
      z = 1.0;
      goto LABEL_10;
    }
    if ( v53 > 0x8EBB41AE )
    {
      if ( v53 != -454329761 )
      {
        if ( v53 == -8801476 && System_String__op_Equality(name, (System_String_o *)StringLiteral_19865/*"full"*/, 0LL) )
        {
          z = 1.0;
          v31 = scale;
          v32 = scale;
        }
        goto LABEL_10;
      }
      if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_20161/*"horizontallyLeft"*/, 0LL) )
        goto LABEL_10;
      v54 = x * scale;
      v55 = 0.0;
      v32 = 1.0;
      v31 = scale;
    }
    else
    {
      if ( v53 == -2027301573 )
      {
        if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_24787/*"vertical"*/, 0LL) )
          goto LABEL_10;
        v31 = 1.0;
        v32 = scale;
        goto LABEL_43;
      }
      if ( v53 != -1900330578 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_24795/*"verticalUp"*/, 0LL) )
        goto LABEL_10;
      v31 = 1.0;
      v32 = scale;
      v54 = 0.0;
      v55 = y * scale;
    }
    z = 1.0;
    goto LABEL_47;
  }
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


bool __fastcall ScriptSubLayer__get_IsExecuteStretch(ScriptSubLayer_o *this, const MethodInfo *method)
{
  return this->fields._IsExecuteStretch_k__BackingField;
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


UnityEngine_GameObject_o *__fastcall ScriptSubLayer__get_SubStretchBase(
        ScriptSubLayer_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *subStretchBase; // x0

  subStretchBase = (UnityEngine_Component_o *)this->fields.subStretchBase;
  if ( !subStretchBase )
    sub_1BCAA3C(0LL, method);
  return UnityEngine_Component__get_gameObject(subStretchBase, 0LL);
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


void __fastcall ScriptSubLayer__set_IsExecuteStretch(ScriptSubLayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExecuteStretch_k__BackingField = value;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._edgeMaskSubMaterial_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._edgeMaskSubMaterial_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._effectController_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._effectController_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._layerKey_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._layerKey_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._renderTexture_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._renderTexture_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayer_ShakeParam___ctor(
        ScriptSubLayer_ShakeParam_o this,
        float shakeTime,
        float shakeCycle,
        float shakeX,
        float shakeY,
        const MethodInfo *method)
{
  *(float *)&method->methodPointer = this.fields.time;
  HIDWORD(method->methodPointer) = LODWORD(this.fields.cycle);
  *(float *)&method->virtualMethodPointer = this.fields.x;
  HIDWORD(method->virtualMethodPointer) = LODWORD(this.fields.y);
}


void __fastcall ScriptSubLayer_ShakeParam__Reset(ScriptSubLayer_ShakeParam_o this, const MethodInfo *method)
{
  method->methodPointer = 0LL;
  method->virtualMethodPointer = 0LL;
}