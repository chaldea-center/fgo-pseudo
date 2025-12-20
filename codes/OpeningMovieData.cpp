void OpeningMovieData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2BD5B & 1) == 0 )
  {
    sub_1C94098(&OpeningMovieData_TypeInfo);
    sub_1C94098(&StringLiteral_3344/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/);
    byte_4D2BD5B = 1;
  }
  OpeningMovieData_TypeInfo->static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3344/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)OpeningMovieData_TypeInfo->static_fields,
    StringLiteral_3344/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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


void OpeningMovieData___ctor_41822564(
        OpeningMovieData_o *this,
        System_String_o *movieFileName,
        bool isCanSkip,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v5; // x20
  bool v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v5 = (GrandQuestFolderBoardItem_o *)this;
  v6 = isCanSkip;
  System_Object___ctor((Il2CppObject *)this, 0);
  v5->fields.sortValue0B = (int64_t)movieFileName;
  v5 = (GrandQuestFolderBoardItem_o *)((char *)v5 + 40);
  sub_1C9403C(v5, (int32_t)movieFileName, v7, v8, v9, v10, v11, v12);
  LOBYTE(v5[-1].fields._ClosedMessage_k__BackingField) = v6;
}


int32_t OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_4D2BD5A & 1) == 0 )
  {
    sub_1C94098(&OpeningMovieData_TypeInfo);
    byte_4D2BD5A = 1;
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

  if ( (byte_4D2BD58 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_8621/*"MATERIAL_TOP_OPENING_{0:00000}"*/);
    byte_4D2BD58 = 1;
  }
  warId = this->fields.warId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v4 = System_String__Format((System_String_o *)StringLiteral_8621/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v3, 0);
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

  if ( (byte_4D2BD59 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&OpeningMovieData_TypeInfo);
    byte_4D2BD59 = 1;
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  GrandQuestFolderBoardItem_o *p_action; // x0
  struct System_Action_string__string__bool__o *action; // x22
  struct System_String_o *name; // x21
  System_String_o *Path; // x0

  if ( (byte_4D2BD57 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BD57 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  p_action = (GrandQuestFolderBoardItem_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0;
    sub_1C9403C(p_action, 0, v7, v8, v9, v10, v11, v12);
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
    sub_1C942F0(Instance, v6);
  }
}


void OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2BD55 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_OpeningMovieData_OnEndDownload__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_9199/*"Movie/ops{0:00000}.usm"*/);
    byte_4D2BD55 = 1;
  }
  this->fields.action = action;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v11);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  warId = this->fields.warId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v13 = System_String__Format((System_String_o *)StringLiteral_9199/*"Movie/ops{0:00000}.usm"*/, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v14, 1, 0);
}


void OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_4D2BD56 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_OpeningMovieData_OnEndDownload__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_9201/*"Movie/{0}.usm"*/);
    byte_4D2BD56 = 1;
  }
  this->fields.action = action;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v11);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v12 = System_String__Format((System_String_o *)StringLiteral_9201/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v12, v13, 1, 0);
}