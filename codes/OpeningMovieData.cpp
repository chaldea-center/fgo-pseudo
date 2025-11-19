void OpeningMovieData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4CB5742 & 1) == 0 )
  {
    sub_1C6BA08(&OpeningMovieData_TypeInfo);
    sub_1C6BA08(&StringLiteral_3332/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/);
    byte_4CB5742 = 1;
  }
  OpeningMovieData_TypeInfo->static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3332/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)OpeningMovieData_TypeInfo->static_fields, StringLiteral_3332/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v1, v2);
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


void OpeningMovieData___ctor_41216796(
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
  sub_1C6B9AC(v5, (int32_t)movieFileName, v7, v8);
  LOBYTE(v5[-1].fields._ThumbnailSpritePath_k__BackingField) = v6;
}


int32_t OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_4CB5741 & 1) == 0 )
  {
    sub_1C6BA08(&OpeningMovieData_TypeInfo);
    byte_4CB5741 = 1;
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
  Il2CppObject *v3; // x0
  System_String_o *v4; // x19
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB573F & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8598/*"MATERIAL_TOP_OPENING_{0:00000}"*/);
    byte_4CB573F = 1;
  }
  warId = this->fields.warId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v4 = System_String__Format((System_String_o *)StringLiteral_8598/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v3, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v4, 0);
}


int32_t OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  OpeningMovieData_c *v3; // x0
  System_String_o *ChapterPrologueWarKey; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB5740 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&OpeningMovieData_TypeInfo);
    byte_4CB5740 = 1;
  }
  v3 = OpeningMovieData_TypeInfo;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v3 = OpeningMovieData_TypeInfo;
  }
  ChapterPrologueWarKey = v3->static_fields->ChapterPrologueWarKey;
  v8 = idx;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v6 = System_String__Format(ChapterPrologueWarKey, v5, 0);
  return ConstantMaster__getValue(v6, 0);
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

  if ( (byte_4CB573E & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB573E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  p_action = (CGThumbnailListItem_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0;
    sub_1C6B9AC(p_action, 0, v7, v8);
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
    sub_1C6BC60(Instance, v6);
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
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  AssetLoader_LoadEndDataHandler_o *v10; // x21
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB573C & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_OpeningMovieData_OnEndDownload__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_9176/*"Movie/ops{0:00000}.usm"*/);
    byte_4CB573C = 1;
  }
  this->fields.action = action;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v7);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  warId = this->fields.warId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v9 = System_String__Format((System_String_o *)StringLiteral_9176/*"Movie/ops{0:00000}.usm"*/, v8, 0);
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v9, v10, 1, 0);
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

  if ( (byte_4CB573D & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_OpeningMovieData_OnEndDownload__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_9178/*"Movie/{0}.usm"*/);
    byte_4CB573D = 1;
  }
  this->fields.action = action;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v7);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v8 = System_String__Format((System_String_o *)StringLiteral_9178/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0);
}