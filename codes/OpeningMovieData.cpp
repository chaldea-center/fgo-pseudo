void __fastcall OpeningMovieData___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct OpeningMovieData_StaticFields *static_fields; // x0

  if ( (byte_42E62C0 & 1) == 0 )
  {
    sub_B5D5C4(&OpeningMovieData_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_3027/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v4, v5, v6);
    byte_42E62C0 = 1;
  }
  static_fields = OpeningMovieData_TypeInfo->static_fields;
  static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3027/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_B5D560(static_fields);
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


void __fastcall OpeningMovieData___ctor_20701104(
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
  sub_B5D560(v6);
  LOBYTE(v6[-1].fields.movieFileName) = isCanSkip;
}


int32_t __fastcall OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3
  OpeningMovieData_c *v4; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_42E62BF & 1) == 0 )
  {
    sub_B5D5C4(&OpeningMovieData_TypeInfo, (_DWORD)v1, v2, v3);
    byte_42E62BF = 1;
  }
  v4 = OpeningMovieData_TypeInfo;
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v4 = OpeningMovieData_TypeInfo;
  }
  if ( v4->static_fields->FirstWarID <= 0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    PrologueWarId = OpeningMovieData__GetPrologueWarId(1, v1);
    v4 = OpeningMovieData_TypeInfo;
    OpeningMovieData_TypeInfo->static_fields->FirstWarID = PrologueWarId;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = OpeningMovieData_TypeInfo;
  }
  return v4->static_fields->FirstWarID;
}


System_String_o *__fastcall OpeningMovieData__GetMaterialString(OpeningMovieData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x0
  System_String_o *v12; // x19
  int32_t warId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E62BD & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8769/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v8, v9, v10);
    byte_42E62BD = 1;
  }
  warId = this->fields.warId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v12 = System_String__Format((System_String_o *)StringLiteral_8769/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v11, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v12, 0LL);
}


int32_t __fastcall OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  OpeningMovieData_c *v8; // x0
  System_String_o *ChapterPrologueWarKey; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E62BE & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OpeningMovieData_TypeInfo, v5, v6, v7);
    byte_42E62BE = 1;
  }
  v8 = OpeningMovieData_TypeInfo;
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v8 = OpeningMovieData_TypeInfo;
  }
  ChapterPrologueWarKey = v8->static_fields->ChapterPrologueWarKey;
  v13 = idx;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11 = System_String__Format(ChapterPrologueWarKey, v10, 0LL);
  return ConstantMaster__getValue(v11, 0LL);
}


void __fastcall OpeningMovieData__OnEndDownload(OpeningMovieData_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  struct System_Action_string__string__bool__o **p_action; // x0
  System_Action_string__string__bool__o *action; // x21
  System_String_o *name; // x22
  System_String_o *Path; // x0

  if ( (byte_42E62BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__string__bool__Invoke__, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    byte_42E62BC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  p_action = &this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    *p_action = 0LL;
    sub_B5D560(p_action);
    if ( data )
    {
      name = data->fields.name;
      Path = AssetData__get_Path(data, 0LL);
      System_Action_string__string__bool___Invoke(
        action,
        name,
        Path,
        this->fields.isCanSkip,
        (const MethodInfo_259BB40 *)Method_System_Action_string__string__bool__Invoke__);
      return;
    }
LABEL_8:
    sub_B5D69C(Instance, v10);
  }
}


void __fastcall OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  CommonUI_o *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x0
  System_String_o *v24; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  int32_t warId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E62BA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_OpeningMovieData_OnEndDownload__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9305/*"Movie/ops{0:00000}.usm"*/, v18, v19, v20);
    byte_42E62BA = 1;
  }
  this->fields.action = action;
  sub_B5D560(&this->fields.action);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v22);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  warId = this->fields.warId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v24 = System_String__Format((System_String_o *)StringLiteral_9305/*"Movie/ops{0:00000}.usm"*/, v23, 0LL);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v25, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v24, v25, 1, 0LL);
}


void __fastcall OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_42E62BB & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_OpeningMovieData_OnEndDownload__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_9307/*"Movie/{0}.usm"*/, v15, v16, v17);
    byte_42E62BB = 1;
  }
  this->fields.action = action;
  sub_B5D560(&this->fields.action);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v19);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v20 = System_String__Format((System_String_o *)StringLiteral_9307/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0LL);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v20, v21, 1, 0LL);
}