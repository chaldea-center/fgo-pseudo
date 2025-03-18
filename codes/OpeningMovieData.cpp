void __fastcall OpeningMovieData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4C21450 & 1) == 0 )
  {
    sub_1C3B764(&OpeningMovieData_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_3488/*"CLOSE_MATERIAL_COSTUME"*/, v8);
    byte_4C21450 = 1;
  }
  OpeningMovieData_TypeInfo->static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3488/*"CLOSE_MATERIAL_COSTUME"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)OpeningMovieData_TypeInfo->static_fields,
    StringLiteral_3488/*"CLOSE_MATERIAL_COSTUME"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void __fastcall OpeningMovieData___ctor_39626748(
        OpeningMovieData_o *this,
        System_String_o *movieFileName,
        bool isCanSkip,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v5; // x20
  bool v6; // w21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v5 = (PartyOrganizationUtility_o *)this;
  v6 = isCanSkip;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)movieFileName;
  v5 = (PartyOrganizationUtility_o *)((char *)v5 + 40);
  sub_1C3B708(v5, (int64_t)movieFileName, v7, v8, v9, v10, v11, v12);
  v5[-1].fields._IsQuestStartMenuMode_k__BackingField = v6;
}


int32_t __fastcall OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  OpeningMovieData_c *v2; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_4C2144F & 1) == 0 )
  {
    sub_1C3B764(&OpeningMovieData_TypeInfo, v1);
    byte_4C2144F = 1;
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

  if ( (byte_4C2144D & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_8749/*"MaxBuffRate"*/, v7);
    byte_4C2144D = 1;
  }
  warId = this->fields.warId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v2, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_8749/*"MaxBuffRate"*/, v8, 0LL);
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

  if ( (byte_4C2144E & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&OpeningMovieData_TypeInfo, v6);
    byte_4C2144E = 1;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  PartyOrganizationUtility_o *p_action; // x0
  struct System_Action_string__string__bool__o *action; // x22
  struct System_String_o *name; // x21
  System_String_o *Path; // x0

  if ( (byte_4C2144C & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4C2144C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  p_action = (PartyOrganizationUtility_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0LL;
    sub_1C3B708(p_action, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_1C3B9C0(Instance, v6);
  }
}


void __fastcall OpeningMovieData__OnStart(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2144A & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, action);
    sub_1C3B764(&int_TypeInfo, v10);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1C3B764(&Method_OpeningMovieData_OnEndDownload__, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1C3B764(&StringLiteral_9336/*"Not enough space available in the buffer."*/, v14);
    byte_4C2144A = 1;
  }
  this->fields.action = action;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.action, (int64_t)action, (int64_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v16);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  warId = this->fields.warId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v17, v18, v19);
  v21 = System_String__Format((System_String_o *)StringLiteral_9336/*"Not enough space available in the buffer."*/, v20, 0LL);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v22, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v21, v22, 1, 0LL);
}


void __fastcall OpeningMovieData__OnStartBootMovie(
        OpeningMovieData_o *this,
        System_Action_string__string__bool__o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4C2144B & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, action);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1C3B764(&Method_OpeningMovieData_OnEndDownload__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C3B764(&StringLiteral_9338/*"Not same device"*/, v13);
    byte_4C2144B = 1;
  }
  this->fields.action = action;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.action, (int64_t)action, (int64_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v15);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v16 = System_String__Format((System_String_o *)StringLiteral_9338/*"Not same device"*/, (Il2CppObject *)this->fields.movieFileName, 0LL);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v16, v17, 1, 0LL);
}