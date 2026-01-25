void CommandCodeSkillInfo___ctor(CommandCodeSkillInfo_o *this, const MethodInfo *method)
{
  this->fields.DetailObjHeight = 25.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCodeSkillInfo__Set(
        CommandCodeSkillInfo_o *this,
        int32_t commandCodeId,
        int32_t skillId,
        System_String_o *skillName,
        System_String_o *skillDetail,
        bool isFirst,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v15; // x22
  struct UITexture_o **p_CommandCodeIcon; // x25
  UISprite_o *commandCodeIconBg; // x26
  int32_t klass; // w27
  UITexture_o *v19; // x26
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_41275108; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UISprite_o *RaritySpr; // x23
  System_String_o *v28; // x0
  UILabel_o *CommandCodeName; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x22
  const MethodInfo *v31; // x2
  UnityEngine_Transform_o *v32; // x22
  unsigned int localPosition; // s0 OVERLAPPED
  float DetailObjHeight; // s1
  int v35; // s2

  if ( (byte_4CEDA46 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C7BAE8(&ServantAssetLoadManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_23182/*"rarity"*/);
    sub_1C7BAE8(&StringLiteral_16166/*"_0"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDA46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             commandCodeId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( Entity )
  {
    v15 = Entity;
    Instance = this->fields.commandCodeIconBg;
    if ( !Instance )
      goto LABEL_36;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    p_CommandCodeIcon = &this->fields.CommandCodeIcon;
    Instance = this->fields.CommandCodeIcon;
    if ( !Instance )
      goto LABEL_36;
    (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)Instance + 744LL))(
      Instance,
      0,
      *(_QWORD *)(*(_QWORD *)Instance + 752LL));
    Instance = this->fields.NameBg;
    if ( !Instance )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = this->fields.CommandCodeName;
    if ( !Instance )
      goto LABEL_36;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( isFirst )
    {
      commandCodeIconBg = this->fields.commandCodeIconBg;
      klass = (int32_t)v15[4].klass;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommandCodeBaseIcon(commandCodeIconBg, klass, 0);
      v19 = *p_CommandCodeIcon;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCodeTexture_41275108 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_41275108(
                                                                           v19,
                                                                           commandCodeId,
                                                                           0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_41275108, 0, 0) )
      {
        *p_CommandCodeIcon = (struct UITexture_o *)Manager__loadCommandCodeTexture_41275108;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.CommandCodeIcon,
          (int32_t)Manager__loadCommandCodeTexture_41275108,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      Instance = this->fields.NameBg;
      if ( !Instance )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      RaritySpr = this->fields.RaritySpr;
      v28 = System_Int32__ToString((int)v15 + 64, 0);
      Instance = System_String__Concat_64215176(
                   (System_String_o *)StringLiteral_23182/*"rarity"*/,
                   v28,
                   (System_String_o *)StringLiteral_16166/*"_0"*/,
                   0);
      if ( !RaritySpr )
        goto LABEL_36;
      UISprite__set_spriteName(RaritySpr, (System_String_o *)Instance, 0);
      Instance = this->fields.RaritySpr;
      if ( !Instance )
        goto LABEL_36;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 848LL));
      CommandCodeName = this->fields.CommandCodeName;
      v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v15[3].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49485620(v30, 0);
      if ( !CommandCodeName )
        goto LABEL_36;
      UILabel__set_text(CommandCodeName, (System_String_o *)Instance, 0);
      CommonFunction__ScalingLabelWidth(this->fields.CommandCodeName, 320, v31);
    }
    else
    {
      Instance = this->fields.DetailObj;
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !this->fields.DetailObj )
        goto LABEL_36;
      v32 = (UnityEngine_Transform_o *)Instance;
      Instance = UnityEngine_GameObject__get_transform(this->fields.DetailObj, 0);
      if ( !Instance )
        goto LABEL_36;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
      if ( !v32 )
        goto LABEL_36;
      DetailObjHeight = this->fields.DetailObjHeight;
      v35 = 0;
      UnityEngine_Transform__set_localPosition(v32, *(UnityEngine_Vector3_o *)&localPosition, 0);
    }
    Instance = this->fields.SkillIconComp;
    if ( Instance )
    {
      SkillIconComponent__Clear((SkillIconComponent_o *)Instance, 0);
      Instance = this->fields.SkillIconComp;
      if ( Instance )
      {
        SkillIconComponent__Set((SkillIconComponent_o *)Instance, skillId, 0);
        Instance = this->fields.SkillDetail;
        if ( Instance )
        {
          WrapControlText__textAdjust((UILabel_o *)Instance, skillDetail, *((_DWORD *)Instance + 106), 0, 0);
          return;
        }
      }
    }
LABEL_36:
    sub_1C7BD40(Instance, v13);
  }
}