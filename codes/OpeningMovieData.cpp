void __fastcall OpeningMovieData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F7F56 & 1) == 0 )
  {
    sub_B16FFC(&OpeningMovieData_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2959/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v8);
    byte_40F7F56 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)OpeningMovieData_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2959/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2959/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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


void __fastcall OpeningMovieData___ctor_21229568(
        OpeningMovieData_o *this,
        System_String_o *movieFileName,
        bool isCanSkip,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.call_closeComp = (struct BattleWindowComponent_EndCall_o *)movieFileName;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 40);
  sub_B16F98(v6, (System_Int32_array **)movieFileName, v7, v8, v9, v10, v11, v12);
  v6[-1].fields.isOpenAfter = isCanSkip;
}


int32_t __fastcall OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_40F7F55 & 1) == 0 )
  {
    sub_B16FFC(&OpeningMovieData_TypeInfo, v1);
    byte_40F7F55 = 1;
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

  if ( (byte_40F7F53 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_8650/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v4);
    byte_40F7F53 = 1;
  }
  warId = this->fields.warId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v6 = System_String__Format((System_String_o *)StringLiteral_8650/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v5, 0LL);
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

  if ( (byte_40F7F54 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&OpeningMovieData_TypeInfo, v3);
    byte_40F7F54 = 1;
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleServantConfConponent_o *p_action; // x0
  System_Action_string__string__bool__o *action; // x21
  System_String_o *name; // x22
  System_String_o *Path; // x0

  if ( (byte_40F7F52 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__string__bool__Invoke__, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F7F52 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  p_action = (BattleServantConfConponent_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0LL;
    sub_B16F98(p_action, 0LL, v7, v8, v9, v10, v11, v12);
    if ( data )
    {
      name = data->fields.name;
      Path = AssetData__get_Path(data, 0LL);
      System_Action_string__string__bool___Invoke(
        action,
        name,
        Path,
        this->fields.isCanSkip,
        (const MethodInfo_24C74CC *)Method_System_Action_string__string__bool__Invoke__);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  CommonUI_o *Instance; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  int32_t warId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7F50 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, action);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B16FFC(&Method_OpeningMovieData_OnEndDownload__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_9181/*"Movie/ops{0:00000}.usm"*/, v14);
    byte_40F7F50 = 1;
  }
  this->fields.action = action;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.action,
    (System_Int32_array **)action,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  warId = this->fields.warId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v17 = System_String__Format((System_String_o *)StringLiteral_9181/*"Movie/ops{0:00000}.usm"*/, v16, 0LL);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19, v20, v21);
  AssetLoader_LoadEndDataHandler___ctor(v22, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v17, v22, 1, 0LL);
}


void __fastcall OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  CommonUI_o *Instance; // x0
  System_String_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_40F7F51 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, action);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B16FFC(&Method_OpeningMovieData_OnEndDownload__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_9183/*"Movie/{0}.usm"*/, v13);
    byte_40F7F51 = 1;
  }
  this->fields.action = action;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.action,
    (System_Int32_array **)action,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v15 = System_String__Format((System_String_o *)StringLiteral_9183/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0LL);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v15, v20, 1, 0LL);
}