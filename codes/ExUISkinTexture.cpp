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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Action_o *v20; // x19

  if ( (byte_4C446C2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor___78067576);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&Method_ExUISkinTexture___c__DisplayClass4_0__loadTexture_b__0__);
    sub_1C37058(&ExUISkinTexture___c__DisplayClass4_0_TypeInfo);
    byte_4C446C2 = 1;
  }
  v7 = sub_1C372A4(ExUISkinTexture___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337376(
    v13,
    1,
    (const MethodInfo_37A2860 *)Method_System_Collections_Generic_List_string___ctor___78067576);
  if ( !v13
    || (items = v13->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v13->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C372B4(v8);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)texName,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v19[4] = (Il2CppClass *)texName;
    sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)texName, v14, v15);
  }
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v7, Method_ExUISkinTexture___c__DisplayClass4_0__loadTexture_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkinTex(v20, 3, (System_Collections_Generic_List_string__o *)v13, 0);
}


void ExUISkinTexture__loadTexture_43799080(
        ExUISkinTexture_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x20
  System_Collections_Generic_List_string__o *texNameList; // x19

  if ( (byte_4C446C3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_ExUISkinTexture___c__DisplayClass5_0__loadTexture_b__0__);
    sub_1C37058(&ExUISkinTexture___c__DisplayClass5_0_TypeInfo);
    byte_4C446C3 = 1;
  }
  v5 = sub_1C372A4(ExUISkinTexture___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v5, Method_ExUISkinTexture___c__DisplayClass5_0__loadTexture_b__0__, 0);
  texNameList = this->fields.texNameList;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkinTex(v11, 3, texNameList, 0);
}


void ExUISkinTexture__releaseTexture(ExUISkinTexture_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C446C4 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C446C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, this->fields.skinType, 0, 0);
}


void ExUISkinTexture__setupTexture(ExUISkinTexture_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C446C1 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C446C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AtlasManager__SetSkinLocal_40620712((AtlasManager_o *)Instance, this, this->fields.skinType, 0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ExUISkinTexture__setupTexture(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}