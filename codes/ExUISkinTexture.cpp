void ExUISkinTexture___ctor(ExUISkinTexture_o *this, const MethodInfo *method)
{
  UITexture___ctor((UITexture_o *)this, 0);
}


void ExUISkinTexture__OnEnable(ExUISkinTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIRect__OnEnable((UIRect_o *)this, 0);
  ExUISkinTexture__setupTexture(this, v3);
}


void ExUISkinTexture__loadTexture(
        ExUISkinTexture_o *this,
        System_String_o *texName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Action_o *v33; // x19

  if ( (byte_4CEFD2F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor___78753888);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&Method_ExUISkinTexture___c__DisplayClass4_0__loadTexture_b__0__);
    sub_1C7BAE8(&ExUISkinTexture___c__DisplayClass4_0_TypeInfo);
    byte_4CEFD2F = 1;
  }
  v7 = sub_1C7BD34(ExUISkinTexture___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor_58975800(
    v22,
    1,
    (const MethodInfo_383E638 *)Method_System_Collections_Generic_List_string___ctor___78753888);
  if ( !v22
    || (items = v22->fields._items,
        v30 = Method_System_Collections_Generic_List_string__Add__,
        ++v22->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C7BD40(v8, v9);
  }
  size = v22->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)texName,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v32[4] = (Il2CppClass *)texName;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)texName, v23, v24, v25, v26, v27, v28);
  }
  v33 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v7, Method_ExUISkinTexture___c__DisplayClass4_0__loadTexture_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkinTex(v33, 3, (System_Collections_Generic_List_string__o *)v22, 0);
}


void ExUISkinTexture__loadTexture_44319472(
        ExUISkinTexture_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20
  System_Collections_Generic_List_string__o *texNameList; // x19

  if ( (byte_4CEFD30 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_ExUISkinTexture___c__DisplayClass5_0__loadTexture_b__0__);
    sub_1C7BAE8(&ExUISkinTexture___c__DisplayClass5_0_TypeInfo);
    byte_4CEFD30 = 1;
  }
  v5 = sub_1C7BD34(ExUISkinTexture___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_ExUISkinTexture___c__DisplayClass5_0__loadTexture_b__0__, 0);
  texNameList = this->fields.texNameList;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkinTex(v20, 3, texNameList, 0);
}


void ExUISkinTexture__releaseTexture(ExUISkinTexture_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEFD31 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4CEFD31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, this->fields.skinType, 0, 0);
}


void ExUISkinTexture__setupTexture(ExUISkinTexture_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEFD2E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4CEFD2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  AtlasManager__SetSkinLocal_41183664((AtlasManager_o *)Instance, this, this->fields.skinType, 0);
}


void ExUISkinTexture___c__DisplayClass4_0___ctor(
        ExUISkinTexture___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExUISkinTexture___c__DisplayClass4_0___loadTexture_b__0(
        ExUISkinTexture___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  ExUISkinTexture_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, method);
  ExUISkinTexture__setupTexture(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ExUISkinTexture___c__DisplayClass5_0___ctor(
        ExUISkinTexture___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExUISkinTexture___c__DisplayClass5_0___loadTexture_b__0(
        ExUISkinTexture___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  ExUISkinTexture_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, method);
  ExUISkinTexture__setupTexture(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}