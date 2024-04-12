void __fastcall OpeningMovieData___cctor(const MethodInfo *method)
{
  struct OpeningMovieData_StaticFields *static_fields; // x0

  if ( (byte_42ADB29 & 1) == 0 )
  {
    sub_B52984(&OpeningMovieData_TypeInfo);
    sub_B52984(&StringLiteral_3000/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/);
    byte_42ADB29 = 1;
  }
  static_fields = OpeningMovieData_TypeInfo->static_fields;
  static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3000/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_B52920(static_fields);
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


void __fastcall OpeningMovieData___ctor_20754840(
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
  sub_B52920(v6);
  LOBYTE(v6[-1].fields.movieFileName) = isCanSkip;
}


int32_t __fastcall OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_42ADB28 & 1) == 0 )
  {
    sub_B52984(&OpeningMovieData_TypeInfo);
    byte_42ADB28 = 1;
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
  Il2CppObject *v3; // x0
  System_String_o *v4; // x19
  int32_t warId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ADB26 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8732/*"MATERIAL_TOP_OPENING_{0:00000}"*/);
    byte_42ADB26 = 1;
  }
  warId = this->fields.warId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v4 = System_String__Format((System_String_o *)StringLiteral_8732/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v3, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v4, 0LL);
}


int32_t __fastcall OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  OpeningMovieData_c *v3; // x0
  System_String_o *ChapterPrologueWarKey; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ADB27 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&OpeningMovieData_TypeInfo);
    byte_42ADB27 = 1;
  }
  v3 = OpeningMovieData_TypeInfo;
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v3 = OpeningMovieData_TypeInfo;
  }
  ChapterPrologueWarKey = v3->static_fields->ChapterPrologueWarKey;
  v8 = idx;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v6 = System_String__Format(ChapterPrologueWarKey, v5, 0LL);
  return ConstantMaster__getValue(v6, 0LL);
}


void __fastcall OpeningMovieData__OnEndDownload(OpeningMovieData_o *this, AssetData_o *data, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct System_Action_string__string__bool__o **p_action; // x0
  System_Action_string__string__bool__o *action; // x21
  System_String_o *name; // x22
  System_String_o *Path; // x0

  if ( (byte_42ADB25 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string__string__bool__Invoke__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42ADB25 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  p_action = &this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    *p_action = 0LL;
    sub_B52920(p_action);
    if ( data )
    {
      name = data->fields.name;
      Path = AssetData__get_Path(data, 0LL);
      System_Action_string__string__bool___Invoke(
        action,
        name,
        Path,
        this->fields.isCanSkip,
        (const MethodInfo_2637FA0 *)Method_System_Action_string__string__bool__Invoke__);
      return;
    }
LABEL_8:
    sub_B52A5C(Instance, v6);
  }
}


void __fastcall OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  int32_t warId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ADB23 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_OpeningMovieData_OnEndDownload__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_9267/*"Movie/ops{0:00000}.usm"*/);
    byte_42ADB23 = 1;
  }
  this->fields.action = action;
  sub_B52920(&this->fields.action);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  warId = this->fields.warId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v8 = System_String__Format((System_String_o *)StringLiteral_9267/*"Movie/ops{0:00000}.usm"*/, v7, 0LL);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0LL);
}


void __fastcall OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21

  if ( (byte_42ADB24 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_OpeningMovieData_OnEndDownload__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_9269/*"Movie/{0}.usm"*/);
    byte_42ADB24 = 1;
  }
  this->fields.action = action;
  sub_B52920(&this->fields.action);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v7 = System_String__Format((System_String_o *)StringLiteral_9269/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0LL);
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v8, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v7, v8, 1, 0LL);
}