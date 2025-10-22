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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Action_o *v21; // x19

  if ( (byte_4C5848D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor___78147536);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&Method_ExUISkinTexture___c__DisplayClass4_0__loadTexture_b__0__);
    sub_1C3E564(&ExUISkinTexture___c__DisplayClass4_0_TypeInfo);
    byte_4C5848D = 1;
  }
  v7 = sub_1C3E7B0(ExUISkinTexture___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412188(
    v14,
    1,
    (const MethodInfo_37B4C9C *)Method_System_Collections_Generic_List_string___ctor___78147536);
  if ( !v14
    || (items = v14->fields._items,
        v18 = Method_System_Collections_Generic_List_string__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C3E7C0(v8, v9);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)texName,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v20[4] = (Il2CppClass *)texName;
    sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)texName, v15, v16);
  }
  v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v7, Method_ExUISkinTexture___c__DisplayClass4_0__loadTexture_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkinTex(v21, 3, (System_Collections_Generic_List_string__o *)v14, 0);
}


void ExUISkinTexture__loadTexture_43854564(
        ExUISkinTexture_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20
  System_Collections_Generic_List_string__o *texNameList; // x19

  if ( (byte_4C5848E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_ExUISkinTexture___c__DisplayClass5_0__loadTexture_b__0__);
    sub_1C3E564(&ExUISkinTexture___c__DisplayClass5_0_TypeInfo);
    byte_4C5848E = 1;
  }
  v5 = sub_1C3E7B0(ExUISkinTexture___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v5, Method_ExUISkinTexture___c__DisplayClass5_0__loadTexture_b__0__, 0);
  texNameList = this->fields.texNameList;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkinTex(v12, 3, texNameList, 0);
}


void ExUISkinTexture__releaseTexture(ExUISkinTexture_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C5848F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C5848F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, this->fields.skinType, 0, 0);
}


void ExUISkinTexture__setupTexture(ExUISkinTexture_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C5848C & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C5848C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  AtlasManager__SetSkinLocal_40666972((AtlasManager_o *)Instance, this, this->fields.skinType, 0);
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
    sub_1C3E7C0(0, method);
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
    sub_1C3E7C0(0, method);
  ExUISkinTexture__setupTexture(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}