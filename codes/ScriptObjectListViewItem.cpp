void ScriptObjectListViewItem___cctor(const MethodInfo *method)
{
  if ( (byte_4D2DFAB & 1) == 0 )
  {
    sub_1C93AD4(&ScriptObjectListViewItem_TypeInfo);
    byte_4D2DFAB = 1;
  }
  *ScriptObjectListViewItem_TypeInfo->static_fields = (struct ScriptObjectListViewItem_StaticFields)257;
}


void ScriptObjectListViewItem___ctor(
        ScriptObjectListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.path = path;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.path, (int32_t)path, v6, v7, v8, v9, v10, v11);
}


void ScriptObjectListViewItem__Finalize(ScriptObjectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool ScriptObjectListViewItem__SetSortValue(
        ScriptObjectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  ScriptObjectListViewItem_c *v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4D2DFAA & 1) == 0 )
  {
    sub_1C93AD4(&ScriptObjectListViewItem_TypeInfo);
    byte_4D2DFAA = 1;
  }
  ListViewItem__SetSortValue((ListViewItem_o *)this, sort, 0);
  v6 = ScriptObjectListViewItem_TypeInfo;
  if ( !ScriptObjectListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo);
    v6 = ScriptObjectListViewItem_TypeInfo;
  }
  if ( v6->static_fields->DispEnableEncrypt )
  {
    if ( !ScriptObjectListViewItem__get_EncryptEntity(this, v5) || ScriptObjectListViewItem__get_IsExistKey(this, v7) )
      return 1;
    v6 = ScriptObjectListViewItem_TypeInfo;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = ScriptObjectListViewItem_TypeInfo;
  }
  return v6->static_fields->DispDisableEncrypt
      && ScriptObjectListViewItem__get_EncryptEntity(this, v5)
      && !ScriptObjectListViewItem__get_IsExistKey(this, v8);
}


ScriptEncryptEntity_o *ScriptObjectListViewItem__get_EncryptEntity(
        ScriptObjectListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v4; // x1
  System_String_o *Name; // x0
  __int64 v6; // x1

  if ( (byte_4D2DFA8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4D2DFA8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  Name = ScriptObjectListViewItem__get_Name(this, v4);
  if ( !Instance )
    sub_1C93D2C(Name, v6);
  return ScriptManager__GetEncryptEntity((ScriptManager_o *)Instance, Name, 0);
}


bool ScriptObjectListViewItem__get_IsDefaultEncrypt(ScriptObjectListViewItem_o *this, const MethodInfo *method)
{
  return ScriptObjectListViewItem__get_EncryptEntity(this, method) == 0;
}


bool ScriptObjectListViewItem__get_IsExistKey(ScriptObjectListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ScriptEncryptEntity_o *EncryptEntity; // x0
  __int64 v5; // x1
  System_String_o *keyType; // x19
  System_String_o *AssetbundleKey; // x0

  if ( (byte_4D2DFA9 & 1) == 0 )
  {
    sub_1C93AD4(&CatAndMouseGame_TypeInfo);
    byte_4D2DFA9 = 1;
  }
  if ( ScriptObjectListViewItem__get_EncryptEntity(this, method) )
  {
    EncryptEntity = ScriptObjectListViewItem__get_EncryptEntity(this, v3);
    if ( !EncryptEntity )
      sub_1C93D2C(0, v5);
    keyType = EncryptEntity->fields.keyType;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    AssetbundleKey = CatAndMouseGame__GetAssetbundleKey(keyType, 0);
    return !System_String__IsNullOrEmpty(AssetbundleKey, 0);
  }
  else
  {
    return 0;
  }
}


System_String_o *ScriptObjectListViewItem__get_Name(ScriptObjectListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *path; // x0

  path = this->fields.path;
  if ( !path )
    goto LABEL_6;
  path = (System_String_o *)System_String__LastIndexOf(path, 0x2Fu, 0);
  if ( ((unsigned int)path & 0x80000000) == 0 )
  {
    if ( this->fields.path )
      return System_String__Substring(this->fields.path, (int)path + 1, 0);
LABEL_6:
    sub_1C93D2C(path, method);
  }
  return this->fields.path;
}


System_String_o *ScriptObjectListViewItem__get_Path(ScriptObjectListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *ScriptObjectListViewItem__get_TitleText(ScriptObjectListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ScriptEncryptEntity_o *EncryptEntity; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *keyType; // x20
  Il2CppObject *Name; // x21
  const MethodInfo *v8; // x1
  Il2CppObject **v9; // x9

  if ( (byte_4D2DFA7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_25460/*"{0} {1} {2}"*/);
    sub_1C93AD4(&StringLiteral_25593/*"×"*/);
    sub_1C93AD4(&StringLiteral_25700/*"〇"*/);
    byte_4D2DFA7 = 1;
  }
  if ( !ScriptObjectListViewItem__get_EncryptEntity(this, method) )
    return ScriptObjectListViewItem__get_Name(this, v3);
  EncryptEntity = ScriptObjectListViewItem__get_EncryptEntity(this, v3);
  if ( !EncryptEntity )
    sub_1C93D2C(0, v5);
  keyType = (Il2CppObject *)EncryptEntity->fields.keyType;
  Name = (Il2CppObject *)ScriptObjectListViewItem__get_Name(this, v5);
  if ( ScriptObjectListViewItem__get_IsExistKey(this, v8) )
    v9 = (Il2CppObject **)&StringLiteral_25700/*"〇"*/;
  else
    v9 = (Il2CppObject **)&StringLiteral_25593/*"×"*/;
  return System_String__Format_64467100((System_String_o *)StringLiteral_25460/*"{0} {1} {2}"*/, Name, keyType, *v9, 0);
}