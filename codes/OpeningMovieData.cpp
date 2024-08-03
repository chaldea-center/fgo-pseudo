void __fastcall OpeningMovieData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FB960 & 1) == 0 )
  {
    sub_1B640C8(&OpeningMovieData_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_3429/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v4);
    byte_49FB960 = 1;
  }
  OpeningMovieData_TypeInfo->static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3429/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)OpeningMovieData_TypeInfo->static_fields, StringLiteral_3429/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v2, v3);
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


void __fastcall OpeningMovieData___ctor_37888072(
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
  sub_1B6406C(v5, (int32_t)movieFileName, v7, v8);
  v5[-1].fields.isMine = v6;
}


int32_t __fastcall OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_49FB95F & 1) == 0 )
  {
    sub_1B640C8(&OpeningMovieData_TypeInfo, v1);
    byte_49FB95F = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  System_String_o *v6; // x19
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB95D & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_8532/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v4);
    byte_49FB95D = 1;
  }
  warId = this->fields.warId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v6 = System_String__Format((System_String_o *)StringLiteral_8532/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v5, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v6, 0LL);
}


int32_t __fastcall OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x1
  OpeningMovieData_c *v4; // x0
  System_String_o *ChapterPrologueWarKey; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB95E & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&OpeningMovieData_TypeInfo, v3);
    byte_49FB95E = 1;
  }
  v4 = OpeningMovieData_TypeInfo;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Instance; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  ServantStatusBattleListViewItem_o *p_action; // x0
  struct System_Action_string__string__bool__o *action; // x22
  struct System_String_o *name; // x21
  System_String_o *Path; // x0

  if ( (byte_49FB95C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_49FB95C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  p_action = (ServantStatusBattleListViewItem_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0LL;
    sub_1B6406C(p_action, 0, v6, v7);
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
    sub_1B64324(Instance);
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB95A & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, action);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&Method_OpeningMovieData_OnEndDownload__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_9107/*"Movie/ops{0:00000}.usm"*/, v10);
    byte_49FB95A = 1;
  }
  this->fields.action = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  warId = this->fields.warId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v13 = System_String__Format((System_String_o *)StringLiteral_9107/*"Movie/ops{0:00000}.usm"*/, v12, 0LL);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v16, 1, 0LL);
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
  System_String_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_49FB95B & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, action);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&Method_OpeningMovieData_OnEndDownload__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_9109/*"Movie/{0}.usm"*/, v9);
    byte_49FB95B = 1;
  }
  this->fields.action = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.action, (int32_t)action, (int32_t)method, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v11 = System_String__Format((System_String_o *)StringLiteral_9109/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v11, v14, 1, 0LL);
}