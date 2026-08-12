void ScriptObjectListViewItem___cctor(const MethodInfo *method)
{
  if ( (byte_596DD25 & 1) == 0 )
  {
    sub_2213A60(&ScriptObjectListViewItem_TypeInfo);
    byte_596DD25 = 1;
  }
  *ScriptObjectListViewItem_TypeInfo->static_fields = (struct ScriptObjectListViewItem_StaticFields)257;
}


void ScriptObjectListViewItem___ctor(
        ScriptObjectListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.path = path;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.path, (int32_t)path, v6, v7, v8, v9, v10, v11);
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
  __int64 v6; // x2
  ScriptObjectListViewItem_c *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_596DD24 & 1) == 0 )
  {
    sub_2213A60(&ScriptObjectListViewItem_TypeInfo);
    byte_596DD24 = 1;
  }
  ListViewItem__SetSortValue((ListViewItem_o *)this, sort, 0);
  v7 = ScriptObjectListViewItem_TypeInfo;
  if ( !*(&ScriptObjectListViewItem_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo, v5, v6);
    v7 = ScriptObjectListViewItem_TypeInfo;
  }
  if ( v7->static_fields->DispEnableEncrypt )
  {
    if ( !ScriptObjectListViewItem__get_EncryptEntity(this, v5) || ScriptObjectListViewItem__get_IsExistKey(this, v8) )
      return 1;
    v7 = ScriptObjectListViewItem_TypeInfo;
  }
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
    v7 = ScriptObjectListViewItem_TypeInfo;
  }
  return v7->static_fields->DispDisableEncrypt
      && ScriptObjectListViewItem__get_EncryptEntity(this, v5)
      && !ScriptObjectListViewItem__get_IsExistKey(this, v9);
}


ScriptEncryptEntity_o *ScriptObjectListViewItem__get_EncryptEntity(
        ScriptObjectListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v4; // x1
  System_String_o *Name; // x0
  __int64 v6; // x1

  if ( (byte_596DD22 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_596DD22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  Name = ScriptObjectListViewItem__get_Name(this, v4);
  if ( !Instance )
    sub_2213CDC(Name, v6);
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
  __int64 v6; // x2
  System_String_o *keyType; // x19
  System_String_o *AssetbundleKey; // x0

  if ( (byte_596DD23 & 1) == 0 )
  {
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    byte_596DD23 = 1;
  }
  if ( ScriptObjectListViewItem__get_EncryptEntity(this, method) )
  {
    EncryptEntity = ScriptObjectListViewItem__get_EncryptEntity(this, v3);
    if ( !EncryptEntity )
      sub_2213CDC(0, v5);
    keyType = EncryptEntity->fields.keyType;
    if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v5, v6);
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
  System_String_o *result; // x0
  int32_t IndexOf; // w8

  result = this->fields.path;
  if ( !result )
    goto LABEL_6;
  IndexOf = System_String__LastIndexOf(result, 0x2Fu, 0);
  result = this->fields.path;
  if ( (IndexOf & 0x80000000) == 0 )
  {
    if ( result )
      return System_String__Substring(result, IndexOf + 1, 0);
LABEL_6:
    sub_2213CDC(result, method);
  }
  return result;
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

  if ( (byte_596DD21 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26525/*"{0} {1} {2}"*/);
    sub_2213A60(&StringLiteral_26668/*"×"*/);
    sub_2213A60(&StringLiteral_26775/*"〇"*/);
    byte_596DD21 = 1;
  }
  if ( !ScriptObjectListViewItem__get_EncryptEntity(this, method) )
    return ScriptObjectListViewItem__get_Name(this, v3);
  EncryptEntity = ScriptObjectListViewItem__get_EncryptEntity(this, v3);
  if ( !EncryptEntity )
    sub_2213CDC(0, v5);
  keyType = (Il2CppObject *)EncryptEntity->fields.keyType;
  Name = (Il2CppObject *)ScriptObjectListViewItem__get_Name(this, v5);
  if ( ScriptObjectListViewItem__get_IsExistKey(this, v8) )
    v9 = (Il2CppObject **)&StringLiteral_26775/*"〇"*/;
  else
    v9 = (Il2CppObject **)&StringLiteral_26668/*"×"*/;
  return System_String__Format_75697948((System_String_o *)StringLiteral_26525/*"{0} {1} {2}"*/, Name, keyType, *v9, 0);
}