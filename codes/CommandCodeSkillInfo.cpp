void __fastcall CommandCodeSkillInfo___ctor(CommandCodeSkillInfo_o *this, const MethodInfo *method)
{
  this->fields.DetailObjHeight = 25.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeSkillInfo__Set(
        CommandCodeSkillInfo_o *this,
        int32_t commandCodeId,
        int32_t skillId,
        System_String_o *skillName,
        System_String_o *skillDetail,
        bool isFirst,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  void *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v33; // x22
  struct UITexture_o **p_CommandCodeIcon; // x25
  UISprite_o *commandCodeIconBg; // x26
  int32_t klass; // w27
  __int64 v37; // x1
  UITexture_o *v38; // x26
  __int64 v39; // x1
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_38670888; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UISprite_o *RaritySpr; // x23
  System_String_o *v48; // x0
  __int64 v49; // x1
  UILabel_o *CommandCodeName; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v51; // x22
  const MethodInfo *v52; // x2
  UnityEngine_Transform_o *v53; // x22
  unsigned int localPosition; // s0
  float DetailObjHeight; // s1
  int v56; // s2

  if ( (byte_4B15640 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId, *(_QWORD *)&skillId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&StringLiteral_23030/*"rarity"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_16291/*"_0"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    byte_4B15640 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             commandCodeId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( Entity )
  {
    v33 = Entity;
    Instance = this->fields.commandCodeIconBg;
    if ( !Instance )
      goto LABEL_36;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    p_CommandCodeIcon = &this->fields.CommandCodeIcon;
    Instance = this->fields.CommandCodeIcon;
    if ( !Instance )
      goto LABEL_36;
    (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)Instance + 744LL))(
      Instance,
      0LL,
      *(_QWORD *)(*(_QWORD *)Instance + 752LL));
    Instance = this->fields.NameBg;
    if ( !Instance )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = this->fields.CommandCodeName;
    if ( !Instance )
      goto LABEL_36;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( isFirst )
    {
      commandCodeIconBg = this->fields.commandCodeIconBg;
      klass = (int32_t)v33[4].klass;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
      AtlasManager__SetCommandCodeBaseIcon(commandCodeIconBg, klass, 0LL);
      v38 = *p_CommandCodeIcon;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v37);
      Manager__loadCommandCodeTexture_38670888 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_38670888(
                                                                           v38,
                                                                           commandCodeId,
                                                                           0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_38670888, 0LL, 0LL) )
      {
        *p_CommandCodeIcon = (struct UITexture_o *)Manager__loadCommandCodeTexture_38670888;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.CommandCodeIcon,
          (int64_t)Manager__loadCommandCodeTexture_38670888,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      Instance = this->fields.NameBg;
      if ( !Instance )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      RaritySpr = this->fields.RaritySpr;
      v48 = System_Int32__ToString((int)v33 + 64, 0LL);
      Instance = System_String__Concat_62412480(
                   (System_String_o *)StringLiteral_23030/*"rarity"*/,
                   v48,
                   (System_String_o *)StringLiteral_16291/*"_0"*/,
                   0LL);
      if ( !RaritySpr )
        goto LABEL_36;
      UISprite__set_spriteName(RaritySpr, (System_String_o *)Instance, 0LL);
      Instance = this->fields.RaritySpr;
      if ( !Instance )
        goto LABEL_36;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 848LL));
      CommandCodeName = this->fields.CommandCodeName;
      v51 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v33[3].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v49);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v51, 0LL);
      if ( !CommandCodeName )
        goto LABEL_36;
      UILabel__set_text(CommandCodeName, (System_String_o *)Instance, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.CommandCodeName, 320, v52);
    }
    else
    {
      Instance = this->fields.DetailObj;
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.DetailObj )
        goto LABEL_36;
      v53 = (UnityEngine_Transform_o *)Instance;
      Instance = UnityEngine_GameObject__get_transform(this->fields.DetailObj, 0LL);
      if ( !Instance )
        goto LABEL_36;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
      if ( !v53 )
        goto LABEL_36;
      DetailObjHeight = this->fields.DetailObjHeight;
      v56 = 0;
      UnityEngine_Transform__set_localPosition(v53, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
    }
    Instance = this->fields.SkillIconComp;
    if ( Instance )
    {
      SkillIconComponent__Clear((SkillIconComponent_o *)Instance, 0LL);
      Instance = this->fields.SkillIconComp;
      if ( Instance )
      {
        SkillIconComponent__Set((SkillIconComponent_o *)Instance, skillId, 0LL);
        Instance = this->fields.SkillDetail;
        if ( Instance )
        {
          WrapControlText__textAdjust((UILabel_o *)Instance, skillDetail, *((_DWORD *)Instance + 106), 0, 0, 0LL);
          return;
        }
      }
    }
LABEL_36:
    sub_1BCAA3C(Instance, v31);
  }
}