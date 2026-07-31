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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Action_o *v33; // x19
  __int64 v34; // x1

  if ( (byte_5939DF2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor___91439368);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_ExUISkinTexture___c__DisplayClass4_0__loadTexture_b__0__);
    sub_21FFC50(&ExUISkinTexture___c__DisplayClass4_0_TypeInfo);
    byte_5939DF2 = 1;
  }
  v7 = sub_21FFEBC(ExUISkinTexture___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627580(
    v22,
    1,
    (const MethodInfo_444F33C *)Method_System_Collections_Generic_List_string___ctor___91439368);
  if ( !v22
    || (items = v22->fields._items,
        v30 = Method_System_Collections_Generic_List_string__Add__,
        ++v22->fields._version,
        !items) )
  {
LABEL_12:
    sub_21FFECC(v8, v9);
  }
  size = v22->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)texName,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v32[4] = (Il2CppClass *)texName;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)texName, v23, v24, v25, v26, v27, v28);
  }
  v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v7, Method_ExUISkinTexture___c__DisplayClass4_0__loadTexture_b__0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34);
  AtlasManager__LoadUISkinTex(v33, 3, (System_Collections_Generic_List_string__o *)v22, 0);
}


void ExUISkinTexture__loadTexture_50743432(
        ExUISkinTexture_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20
  __int64 v21; // x1
  System_Collections_Generic_List_string__o *texNameList; // x19

  if ( (byte_5939DF3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_ExUISkinTexture___c__DisplayClass5_0__loadTexture_b__0__);
    sub_21FFC50(&ExUISkinTexture___c__DisplayClass5_0_TypeInfo);
    byte_5939DF3 = 1;
  }
  v5 = sub_21FFEBC(ExUISkinTexture___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_ExUISkinTexture___c__DisplayClass5_0__loadTexture_b__0__, 0);
  texNameList = this->fields.texNameList;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
  AtlasManager__LoadUISkinTex(v20, 3, texNameList, 0);
}


void ExUISkinTexture__releaseTexture(ExUISkinTexture_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939DF4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_5939DF4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, this->fields.skinType, 0, 0);
}


void ExUISkinTexture__setupTexture(ExUISkinTexture_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939DF1 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_5939DF1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AtlasManager__SetSkinLocal_47554432((AtlasManager_o *)Instance, this, this->fields.skinType, 0);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
  ExUISkinTexture__setupTexture(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}