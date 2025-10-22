void OpeningMovieData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C561DB & 1) == 0 )
  {
    sub_1C3E564(&OpeningMovieData_TypeInfo);
    sub_1C3E564(&StringLiteral_3340/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/);
    byte_4C561DB = 1;
  }
  OpeningMovieData_TypeInfo->static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3340/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_1C3E508((CGThumbnailListItem_o *)OpeningMovieData_TypeInfo->static_fields, StringLiteral_3340/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v1, v2);
  OpeningMovieData_TypeInfo->static_fields->FirstWarID = -1;
}


void OpeningMovieData___ctor(OpeningMovieData_o *this, int32_t warId, bool isCanSkip, const MethodInfo *method)
{
  bool v6; // w21

  v6 = isCanSkip;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.warId = warId;
  this->fields.isCanSkip = v6;
}


void OpeningMovieData___ctor_41031544(
        OpeningMovieData_o *this,
        System_String_o *movieFileName,
        bool isCanSkip,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v5; // x20
  bool v6; // w21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v5 = (CGThumbnailListItem_o *)this;
  v6 = isCanSkip;
  System_Object___ctor((Il2CppObject *)this, 0);
  v5->fields.sortValue0B = (int64_t)movieFileName;
  v5 = (CGThumbnailListItem_o *)((char *)v5 + 40);
  sub_1C3E508(v5, (int32_t)movieFileName, v7, v8);
  LOBYTE(v5[-1].fields._ThumbnailSpritePath_k__BackingField) = v6;
}


int32_t OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_4C561DA & 1) == 0 )
  {
    sub_1C3E564(&OpeningMovieData_TypeInfo);
    byte_4C561DA = 1;
  }
  v2 = OpeningMovieData_TypeInfo;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v2 = OpeningMovieData_TypeInfo;
  }
  if ( v2->static_fields->FirstWarID <= 0 )
  {
    if ( !v2->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v2);
    PrologueWarId = OpeningMovieData__GetPrologueWarId(1, v1);
    v2 = OpeningMovieData_TypeInfo;
    OpeningMovieData_TypeInfo->static_fields->FirstWarID = PrologueWarId;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = OpeningMovieData_TypeInfo;
  }
  return v2->static_fields->FirstWarID;
}


System_String_o *OpeningMovieData__GetMaterialString(OpeningMovieData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  System_String_o *v10; // x19
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C561D8 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8601/*"MATERIAL_TOP_OPENING_{0:00000}"*/);
    byte_4C561D8 = 1;
  }
  warId = this->fields.warId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v2, v3, v4, v5, v6, v7);
  v10 = System_String__Format((System_String_o *)StringLiteral_8601/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v9, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v10, 0);
}


int32_t OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  OpeningMovieData_c *v9; // x0
  System_String_o *ChapterPrologueWarKey; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C561D9 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&OpeningMovieData_TypeInfo);
    byte_4C561D9 = 1;
  }
  v9 = OpeningMovieData_TypeInfo;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v9 = OpeningMovieData_TypeInfo;
  }
  ChapterPrologueWarKey = v9->static_fields->ChapterPrologueWarKey;
  v14 = idx;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v2, v3, v4, v5, v6, v7);
  v12 = System_String__Format(ChapterPrologueWarKey, v11, 0);
  return ConstantMaster__getValue(v12, 0);
}


void OpeningMovieData__OnEndDownload(OpeningMovieData_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CGThumbnailListItem_o *p_action; // x0
  struct System_Action_string__string__bool__o *action; // x22
  struct System_String_o *name; // x21
  System_String_o *Path; // x0

  if ( (byte_4C561D7 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C561D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  p_action = (CGThumbnailListItem_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0;
    sub_1C3E508(p_action, 0, v7, v8);
    if ( data )
    {
      name = data->fields.name;
      Path = AssetData__get_Path(data, 0);
      ((void (__fastcall *)(intptr_t, struct System_String_o *, System_String_o *, bool, intptr_t))action->fields.invoke_impl)(
        action->fields.method_code,
        name,
        Path,
        this->fields.isCanSkip,
        action->fields.method);
      return;
    }
LABEL_8:
    sub_1C3E7C0(Instance, v6);
  }
}


void OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C561D5 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_OpeningMovieData_OnEndDownload__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_9179/*"Movie/ops{0:00000}.usm"*/);
    byte_4C561D5 = 1;
  }
  this->fields.action = action;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v7);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  warId = this->fields.warId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v8, v9, v10, v11, v12, v13);
  v15 = System_String__Format((System_String_o *)StringLiteral_9179/*"Movie/ops{0:00000}.usm"*/, v14, 0);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v15, v16, 1, 0);
}


void OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4C561D6 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_OpeningMovieData_OnEndDownload__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_9181/*"Movie/{0}.usm"*/);
    byte_4C561D6 = 1;
  }
  this->fields.action = action;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v7);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v8 = System_String__Format((System_String_o *)StringLiteral_9181/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0);
}