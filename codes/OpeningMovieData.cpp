void __fastcall OpeningMovieData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct OpeningMovieData_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_4185139 & 1) == 0 )
  {
    sub_B2C35C(&OpeningMovieData_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_2968/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v2);
    byte_4185139 = 1;
  }
  static_fields = OpeningMovieData_TypeInfo->static_fields;
  v4 = StringLiteral_2968/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_2968/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_B2C2F8(static_fields, v4);
  OpeningMovieData_TypeInfo->static_fields->FirstWarID = -1;
}


void __fastcall OpeningMovieData___ctor(
        OpeningMovieData_o *this,
        int32_t warId,
        bool isCanSkip,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warId = warId;
  this->fields.isCanSkip = isCanSkip;
}


void __fastcall OpeningMovieData___ctor_20124888(
        OpeningMovieData_o *this,
        System_String_o *movieFileName,
        bool isCanSkip,
        const MethodInfo *method)
{
  OpeningMovieData_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.movieFileName = movieFileName;
  v6 = (OpeningMovieData_o *)((char *)v6 + 40);
  sub_B2C2F8(v6, movieFileName);
  LOBYTE(v6[-1].fields.movieFileName) = isCanSkip;
}


int32_t __fastcall OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_4185138 & 1) == 0 )
  {
    sub_B2C35C(&OpeningMovieData_TypeInfo, v1);
    byte_4185138 = 1;
  }
  v2 = OpeningMovieData_TypeInfo;
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v2 = OpeningMovieData_TypeInfo;
  }
  if ( v2->static_fields->FirstWarID <= 0 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v2);
    PrologueWarId = OpeningMovieData__GetPrologueWarId(1, v1);
    v2 = OpeningMovieData_TypeInfo;
    OpeningMovieData_TypeInfo->static_fields->FirstWarID = PrologueWarId;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = OpeningMovieData_TypeInfo;
  }
  return v2->static_fields->FirstWarID;
}


System_String_o *__fastcall OpeningMovieData__GetMaterialString(OpeningMovieData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  System_String_o *v6; // x19
  int32_t warId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4185136 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_8679/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v4);
    byte_4185136 = 1;
  }
  warId = this->fields.warId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v6 = System_String__Format((System_String_o *)StringLiteral_8679/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v5, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v6, 0LL);
}


int32_t __fastcall OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x1
  OpeningMovieData_c *v4; // x0
  System_String_o *ChapterPrologueWarKey; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4185137 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&OpeningMovieData_TypeInfo, v3);
    byte_4185137 = 1;
  }
  v4 = OpeningMovieData_TypeInfo;
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v4 = OpeningMovieData_TypeInfo;
  }
  ChapterPrologueWarKey = v4->static_fields->ChapterPrologueWarKey;
  v9 = idx;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format(ChapterPrologueWarKey, v6, 0LL);
  return ConstantMaster__getValue(v7, 0LL);
}


void __fastcall OpeningMovieData__OnEndDownload(OpeningMovieData_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  struct System_Action_string__string__bool__o **p_action; // x0
  System_Action_string__string__bool__o *action; // x21
  System_String_o *name; // x22
  System_String_o *Path; // x0

  if ( (byte_4185135 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__string__bool__Invoke__, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4185135 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  p_action = &this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    *p_action = 0LL;
    sub_B2C2F8(p_action, 0LL);
    if ( data )
    {
      name = data->fields.name;
      Path = AssetData__get_Path(data, 0LL);
      System_Action_string__string__bool___Invoke(
        action,
        name,
        Path,
        this->fields.isCanSkip,
        (const MethodInfo_24CC2F8 *)Method_System_Action_string__string__bool__Invoke__);
      return;
    }
LABEL_8:
    sub_B2C434(Instance, v7);
  }
}


void __fastcall OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  int32_t warId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4185133 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, action);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&Method_OpeningMovieData_OnEndDownload__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_9211/*"Movie/ops{0:00000}.usm"*/, v9);
    byte_4185133 = 1;
  }
  this->fields.action = action;
  sub_B2C2F8(&this->fields.action, action);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v11);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  warId = this->fields.warId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v13 = System_String__Format((System_String_o *)StringLiteral_9211/*"Movie/ops{0:00000}.usm"*/, v12, 0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v14, 1, 0LL);
}


void __fastcall OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  AssetLoader_LoadEndDataHandler_o *v12; // x21

  if ( (byte_4185134 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, action);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&Method_OpeningMovieData_OnEndDownload__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_9213/*"Movie/{0}.usm"*/, v8);
    byte_4185134 = 1;
  }
  this->fields.action = action;
  sub_B2C2F8(&this->fields.action, action);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v10);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v11 = System_String__Format((System_String_o *)StringLiteral_9213/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0LL);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v11, v12, 1, 0LL);
}