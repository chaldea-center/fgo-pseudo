void OpeningMovieData___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596FCC4 & 1) == 0 )
  {
    sub_2213A60(&OpeningMovieData_TypeInfo);
    sub_2213A60(&StringLiteral_3479/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/);
    byte_596FCC4 = 1;
  }
  v7 = StringLiteral_3479/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  OpeningMovieData_TypeInfo->static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3479/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)OpeningMovieData_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  OpeningMovieData_TypeInfo->static_fields->FirstWarID = -1;
}


void OpeningMovieData___ctor(OpeningMovieData_o *this, int32_t warId, bool isCanSkip, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.warId = warId;
  this->fields.isCanSkip = isCanSkip;
}


void OpeningMovieData___ctor_48026892(
        OpeningMovieData_o *this,
        System_String_o *movieFileName,
        bool isCanSkip,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = (MissionNaviTransitionBoardItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.sortValue0B = (int64_t)movieFileName;
  v6 = (MissionNaviTransitionBoardItem_o *)((char *)v6 + 40);
  sub_2213A04(v6, (int32_t)movieFileName, v7, v8, v9, v10, v11, v12);
  LOBYTE(v6[-1].fields._BoardType_k__BackingField) = isCanSkip;
}


int32_t OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_596FCC3 & 1) == 0 )
  {
    sub_2213A60(&OpeningMovieData_TypeInfo);
    byte_596FCC3 = 1;
  }
  v2 = OpeningMovieData_TypeInfo;
  if ( !*(&OpeningMovieData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo, v1);
    v2 = OpeningMovieData_TypeInfo;
  }
  if ( v2->static_fields->FirstWarID <= 0 )
  {
    if ( !*(&v2->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v2, v1);
    PrologueWarId = OpeningMovieData__GetPrologueWarId(1, v1);
    v2 = OpeningMovieData_TypeInfo;
    OpeningMovieData_TypeInfo->static_fields->FirstWarID = PrologueWarId;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = OpeningMovieData_TypeInfo;
  }
  return v2->static_fields->FirstWarID;
}


System_String_o *OpeningMovieData__GetMaterialString(OpeningMovieData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x19
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FCC1 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8964/*"MATERIAL_TOP_OPENING_{0:00000}"*/);
    byte_596FCC1 = 1;
  }
  warId = this->fields.warId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &warId);
  v5 = System_String__Format((System_String_o *)StringLiteral_8964/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v3, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  return LocalizationManager__Get(v5, 0);
}


int32_t OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  OpeningMovieData_c *v3; // x0
  System_String_o **p_ChapterPrologueWarKey; // x8
  System_String_o *v5; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FCC2 & 1) == 0 )
  {
    sub_2213A60(&OpeningMovieData_TypeInfo);
    byte_596FCC2 = 1;
  }
  v3 = OpeningMovieData_TypeInfo;
  if ( !*(&OpeningMovieData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo, method);
    v3 = OpeningMovieData_TypeInfo;
  }
  p_ChapterPrologueWarKey = &v3->static_fields->ChapterPrologueWarKey;
  v9 = idx;
  v5 = *p_ChapterPrologueWarKey;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v9);
  v7 = System_String__Format(v5, v6, 0);
  return ConstantMaster__getValue(v7, 0);
}


void OpeningMovieData__OnEndDownload(OpeningMovieData_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  MissionNaviTransitionBoardItem_o *p_action; // x0
  struct System_Action_string__string__bool__o *action; // x22
  struct System_String_o *name; // x21
  System_String_o *Path; // x2

  if ( (byte_596FCC0 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FCC0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  p_action = (MissionNaviTransitionBoardItem_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0;
    sub_2213A04(p_action, 0, v7, v8, v9, v10, v11, v12);
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
    sub_2213CDC(Instance, v6);
  }
}


void OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  __int64 v15; // x1
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596FCBE & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_OpeningMovieData_OnEndDownload__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_9560/*"Movie/ops{0:00000}.usm"*/);
    byte_596FCBE = 1;
  }
  this->fields.action = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.action,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v11);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  warId = this->fields.warId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &warId);
  v13 = System_String__Format((System_String_o *)StringLiteral_9560/*"Movie/ops{0:00000}.usm"*/, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
  AssetManager__downloadAssetStorage(v13, v14, 1, 0);
}


void OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  __int64 v14; // x1

  if ( (byte_596FCBF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_OpeningMovieData_OnEndDownload__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_9562/*"Movie/{0}.usm"*/);
    byte_596FCBF = 1;
  }
  this->fields.action = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.action,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v11);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v12 = System_String__Format((System_String_o *)StringLiteral_9562/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
  AssetManager__downloadAssetStorage(v12, v13, 1, 0);
}