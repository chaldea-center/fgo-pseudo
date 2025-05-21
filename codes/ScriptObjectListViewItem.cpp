void __fastcall ScriptObjectListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B4210C & 1) == 0 )
  {
    sub_1BDB878(&ScriptObjectListViewItem_TypeInfo, v1);
    byte_4B4210C = 1;
  }
  *ScriptObjectListViewItem_TypeInfo->static_fields = (struct ScriptObjectListViewItem_StaticFields)257;
}


void __fastcall ScriptObjectListViewItem___ctor(
        ScriptObjectListViewItem_o *this,
        int32_t index,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields.path = path;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.path, (int32_t)path, v6, v7);
}


void __fastcall ScriptObjectListViewItem__Finalize(ScriptObjectListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall ScriptObjectListViewItem__SetSortValue(
        ScriptObjectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  ScriptObjectListViewItem_c *v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B4210B & 1) == 0 )
  {
    sub_1BDB878(&ScriptObjectListViewItem_TypeInfo, sort);
    byte_4B4210B = 1;
  }
  ListViewItem__SetSortValue((ListViewItem_o *)this, sort, 0LL);
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


ScriptEncryptEntity_o *__fastcall ScriptObjectListViewItem__get_EncryptEntity(
        ScriptObjectListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v4; // x1
  System_String_o *Name; // x0
  __int64 v6; // x1

  if ( (byte_4B42109 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, method);
    byte_4B42109 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  Name = ScriptObjectListViewItem__get_Name(this, v4);
  if ( !Instance )
    sub_1BDBAD4(Name, v6);
  return ScriptManager__GetEncryptEntity((ScriptManager_o *)Instance, Name, 0LL);
}


bool __fastcall ScriptObjectListViewItem__get_IsDefaultEncrypt(
        ScriptObjectListViewItem_o *this,
        const MethodInfo *method)
{
  return ScriptObjectListViewItem__get_EncryptEntity(this, method) == 0LL;
}


bool __fastcall ScriptObjectListViewItem__get_IsExistKey(ScriptObjectListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ScriptEncryptEntity_o *EncryptEntity; // x0
  __int64 v5; // x1
  System_String_o *keyType; // x19
  System_String_o *AssetbundleKey; // x0

  if ( (byte_4B4210A & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B4210A = 1;
  }
  if ( ScriptObjectListViewItem__get_EncryptEntity(this, method) )
  {
    EncryptEntity = ScriptObjectListViewItem__get_EncryptEntity(this, v3);
    if ( !EncryptEntity )
      sub_1BDBAD4(0LL, v5);
    keyType = EncryptEntity->fields.keyType;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    AssetbundleKey = CatAndMouseGame__GetAssetbundleKey(keyType, 0LL);
    return !System_String__IsNullOrEmpty(AssetbundleKey, 0LL);
  }
  else
  {
    return 0;
  }
}


System_String_o *__fastcall ScriptObjectListViewItem__get_Name(
        ScriptObjectListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *path; // x0

  path = this->fields.path;
  if ( !path )
    goto LABEL_6;
  path = (System_String_o *)System_String__LastIndexOf(path, 0x2Fu, 0LL);
  if ( ((unsigned int)path & 0x80000000) == 0 )
  {
    if ( this->fields.path )
      return System_String__Substring(this->fields.path, (int)path + 1, 0LL);
LABEL_6:
    sub_1BDBAD4(path, method);
  }
  return this->fields.path;
}


System_String_o *__fastcall ScriptObjectListViewItem__get_Path(
        ScriptObjectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.path;
}


System_String_o *__fastcall ScriptObjectListViewItem__get_TitleText(
        ScriptObjectListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  ScriptEncryptEntity_o *EncryptEntity; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *keyType; // x20
  Il2CppObject *Name; // x21
  const MethodInfo *v10; // x1
  Il2CppObject **v11; // x9

  if ( (byte_4B42108 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_25212/*"{0} {1} {2}"*/, method);
    sub_1BDB878(&StringLiteral_25354/*"×"*/, v3);
    sub_1BDB878(&StringLiteral_25461/*"〇"*/, v4);
    byte_4B42108 = 1;
  }
  if ( !ScriptObjectListViewItem__get_EncryptEntity(this, method) )
    return ScriptObjectListViewItem__get_Name(this, v5);
  EncryptEntity = ScriptObjectListViewItem__get_EncryptEntity(this, v5);
  if ( !EncryptEntity )
    sub_1BDBAD4(0LL, v7);
  keyType = (Il2CppObject *)EncryptEntity->fields.keyType;
  Name = (Il2CppObject *)ScriptObjectListViewItem__get_Name(this, v7);
  if ( ScriptObjectListViewItem__get_IsExistKey(this, v10) )
    v11 = (Il2CppObject **)&StringLiteral_25461/*"〇"*/;
  else
    v11 = (Il2CppObject **)&StringLiteral_25354/*"×"*/;
  return System_String__Format_62613620((System_String_o *)StringLiteral_25212/*"{0} {1} {2}"*/, Name, keyType, *v11, 0LL);
}