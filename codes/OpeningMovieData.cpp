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
  __int64 v9; // x2

  if ( (byte_4B15702 & 1) == 0 )
  {
    sub_1BCA7E0(&OpeningMovieData_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3477/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v8, v9);
    byte_4B15702 = 1;
  }
  OpeningMovieData_TypeInfo->static_fields->ChapterPrologueWarKey = (struct System_String_o *)StringLiteral_3477/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)OpeningMovieData_TypeInfo->static_fields,
    StringLiteral_3477/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/,
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


void __fastcall OpeningMovieData___ctor_38914740(
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
  sub_1BCA784(v5, (int64_t)movieFileName, v7, v8, v9, v10, v11, v12);
  v5[-1].fields._IsQuestStartMenuMode_k__BackingField = v6;
}


int32_t __fastcall OpeningMovieData__GetFirstWarId(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  OpeningMovieData_c *v3; // x8
  int32_t PrologueWarId; // w0

  if ( (byte_4B15701 & 1) == 0 )
  {
    sub_1BCA7E0(&OpeningMovieData_TypeInfo, v1, v2);
    byte_4B15701 = 1;
  }
  v3 = OpeningMovieData_TypeInfo;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo, v1);
    v3 = OpeningMovieData_TypeInfo;
  }
  if ( v3->static_fields->FirstWarID <= 0 )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3, v1);
    PrologueWarId = OpeningMovieData__GetPrologueWarId(1, v1);
    v3 = OpeningMovieData_TypeInfo;
    OpeningMovieData_TypeInfo->static_fields->FirstWarID = PrologueWarId;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = OpeningMovieData_TypeInfo;
  }
  return v3->static_fields->FirstWarID;
}


System_String_o *__fastcall OpeningMovieData__GetMaterialString(OpeningMovieData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x19
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B156FF & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8698/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v6, v7);
    byte_4B156FF = 1;
  }
  warId = this->fields.warId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v10 = System_String__Format((System_String_o *)StringLiteral_8698/*"MATERIAL_TOP_OPENING_{0:00000}"*/, v8, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  return LocalizationManager__Get(v10, 0LL);
}


int32_t __fastcall OpeningMovieData__GetPrologueWarId(int32_t idx, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  OpeningMovieData_c *v6; // x0
  System_String_o *ChapterPrologueWarKey; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15700 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&OpeningMovieData_TypeInfo, v4, v5);
    byte_4B15700 = 1;
  }
  v6 = OpeningMovieData_TypeInfo;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo, method);
    v6 = OpeningMovieData_TypeInfo;
  }
  ChapterPrologueWarKey = v6->static_fields->ChapterPrologueWarKey;
  v11 = idx;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v9 = System_String__Format(ChapterPrologueWarKey, v8, 0LL);
  return ConstantMaster__getValue(v9, 0LL);
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

  if ( (byte_4B156FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data, method);
    byte_4B156FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  p_action = (PartyOrganizationUtility_o *)&this->fields.action;
  action = this->fields.action;
  if ( action )
  {
    p_action->klass = 0LL;
    sub_1BCA784(p_action, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_1BCAA3C(Instance, v6);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x0
  System_String_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  __int64 v28; // x1
  int32_t warId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B156FC & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, action, method);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_OpeningMovieData_OnEndDownload__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_9279/*"Movie/ops{0:00000}.usm"*/, v18, v19);
    byte_4B156FC = 1;
  }
  this->fields.action = action;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.action, (int64_t)action, (int64_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v21);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  warId = this->fields.warId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  v23 = System_String__Format((System_String_o *)StringLiteral_9279/*"Movie/ops{0:00000}.usm"*/, v22, 0LL);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
  AssetManager__downloadAssetStorage(v23, v27, 1, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  __int64 v25; // x1

  if ( (byte_4B156FD & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, action, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_OpeningMovieData_OnEndDownload__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_9281/*"Movie/{0}.usm"*/, v16, v17);
    byte_4B156FD = 1;
  }
  this->fields.action = action;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.action, (int64_t)action, (int64_t)method, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v19);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v20 = System_String__Format((System_String_o *)StringLiteral_9281/*"Movie/{0}.usm"*/, (Il2CppObject *)this->fields.movieFileName, 0LL);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22, v23);
  AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_OpeningMovieData_OnEndDownload__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  AssetManager__downloadAssetStorage(v20, v24, 1, 0LL);
}