void __fastcall OpeningMovieData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FE078 & 1) == 0 )
  {
    sub_1B64A00(&OpeningMovieData_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_3429/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v4);
    byte_49FE078 = 1;
  }
  OpeningMovieData_TypeInfo->static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3429/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)OpeningMovieData_TypeInfo->static_fields, StringLiteral_3429/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v2, v3);
  OpeningMovieData_TypeInfo->static_fields->FirstWarID = -1;
}


void __fastcall OpeningMovieData___ctor(
        OpeningMovieData_o *this,
        int32_t warId,
        bool isCanSkip,
        const MethodInfo *method)
{
  bool v6; // w21

  v6 = isCanSkip;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warId = warId;
  this->fields.isCanSkip = v6;
}


void __fastcall OpeningMovieData___ctor_37892804(
        OpeningMovieData_o *this,
        System_String_o *movieFileName,
        bool isCanSkip,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v5; // x20
  bool v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3

  v5 = (ServantStatusBattleListViewItem_o *)this;
  v6 = isCanSkip;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5->fields.sortValue0B = (int64_t)movieFileName;
  v5 = (ServantStatusBattleListViewItem_o *)((char *)v5 + 40);
  sub_1B649A4(v5, (int32_t)movieFileName, v7, v8);
  v5[-1].fields.isMine = v6;
}


int32_t __fastcall OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_49FE077 & 1) == 0 )
  {
    sub_1B64A00(&OpeningMovieData_TypeInfo, v1);
    byte_49FE077 = 1;
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


System_String_o *__fastcall OpeningMovieData__GetMaterialString(OpeningMovieData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  System_String_o *v9; // x19
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FE075 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, method);
    sub_1B64A00(&LocalizationManager_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_8535/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v7);
    byte_49FE075 = 1;
  }
  warId = this->fields.warId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v2, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_8535/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v8, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v9, 0LL);
}


int32_t __fastcall OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  OpeningMovieData_c *v7; // x0
  System_String_o *ChapterPrologueWarKey; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FE076 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, method);
    sub_1B64A00(&OpeningMovieData_TypeInfo, v6);
    byte_49FE076 = 1;
  }
  v7 = OpeningMovieData_TypeInfo;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
    v7 = OpeningMovieData_TypeInfo;
  }
  ChapterPrologueWarKey = v7->static_fields->ChapterPrologueWarKey;
  v12 = idx;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2, v3, v4);
  v10 = System_String__Format(ChapterPrologueWarKey, v9, 0LL);
  return ConstantMaster__getValue(v10, 0LL);
}


void __fastcall OpeningMovieData__OnEndDownload(OpeningMovieData_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *p_action; // x0
  struct System_Action_string__string__bool__o *action; // x22
  struct System_String_o *name; // x21
  System_String_o *Path; // x0

  if ( (byte_49FE074 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_49FE074 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  p_action = (ServantStatusBattleListViewItem_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0LL;
    sub_1B649A4(p_action, 0, v7, v8);
    if ( data )
    {
      name = data->fields.name;
      Path = AssetData__get_Path(data, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, System_String_o *, bool, _QWORD))action->fields.m_target)(
        action->fields.original_method_info,
        name,
        Path,
        this->fields.isCanSkip,
        *(_QWORD *)&action->fields.extra_arg);
      return;
    }
LABEL_8:
    sub_1B64C5C(Instance, v6);
  }
}


void __fastcall OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FE072 & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, action);
    sub_1B64A00(&int_TypeInfo, v6);
    sub_1B64A00(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B64A00(&Method_OpeningMovieData_OnEndDownload__, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B64A00(&StringLiteral_9110/*"Movie/ops{0:00000}.usm"*/, v10);
    byte_49FE072 = 1;
  }
  this->fields.action = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  warId = this->fields.warId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v13, v14, v15);
  v17 = System_String__Format((System_String_o *)StringLiteral_9110/*"Movie/ops{0:00000}.usm"*/, v16, 0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64C4C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v17, v18, 1, 0LL);
}


void __fastcall OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_49FE073 & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, action);
    sub_1B64A00(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B64A00(&Method_OpeningMovieData_OnEndDownload__, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B64A00(&StringLiteral_9112/*"Movie/{0}.usm"*/, v9);
    byte_49FE073 = 1;
  }
  this->fields.action = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v11);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v12 = System_String__Format((System_String_o *)StringLiteral_9112/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0LL);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64C4C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v12, v13, 1, 0LL);
}