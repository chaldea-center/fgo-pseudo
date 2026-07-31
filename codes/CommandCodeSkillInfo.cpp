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
  __int64 v17; // x2
  UISprite_o *commandCodeIconBg; // x26
  int32_t klass; // w27
  __int64 v20; // x1
  __int64 v21; // x2
  UITexture_o *v22; // x26
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_47643648; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UISprite_o *RaritySpr; // x23
  System_String_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *CommandCodeName; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v37; // x22
  const MethodInfo *v38; // x2
  UnityEngine_Transform_o *v39; // x22
  unsigned int localPosition; // s0 OVERLAPPED
  int v41; // s2
  float DetailObjHeight; // s1

  if ( (byte_5937A8F & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_24110/*"rarity"*/);
    sub_21FFC50(&StringLiteral_16715/*"_0"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A8F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             commandCodeId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v17);
      AtlasManager__SetCommandCodeBaseIcon(commandCodeIconBg, klass, 0);
      v22 = *p_CommandCodeIcon;
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v20, v21);
      Manager__loadCommandCodeTexture_47643648 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_47643648(
                                                                           v22,
                                                                           commandCodeId,
                                                                           0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_47643648, 0, 0) )
      {
        *p_CommandCodeIcon = (struct UITexture_o *)Manager__loadCommandCodeTexture_47643648;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.CommandCodeIcon,
          (int32_t)Manager__loadCommandCodeTexture_47643648,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      Instance = this->fields.NameBg;
      if ( !Instance )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      RaritySpr = this->fields.RaritySpr;
      v33 = System_Int32__ToString((int)v15 + 64, 0);
      Instance = System_String__Concat_75481624(
                   (System_String_o *)StringLiteral_24110/*"rarity"*/,
                   v33,
                   (System_String_o *)StringLiteral_16715/*"_0"*/,
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
      v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v15[3].klass;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v34, v35);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v37, 0);
      if ( !CommandCodeName )
        goto LABEL_36;
      UILabel__set_text(CommandCodeName, (System_String_o *)Instance, 0);
      CommonFunction__ScalingLabelWidth(this->fields.CommandCodeName, 320, v38);
    }
    else
    {
      Instance = this->fields.DetailObj;
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !this->fields.DetailObj )
        goto LABEL_36;
      v39 = (UnityEngine_Transform_o *)Instance;
      Instance = UnityEngine_GameObject__get_transform(this->fields.DetailObj, 0);
      if ( !Instance )
        goto LABEL_36;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
      if ( !v39 )
        goto LABEL_36;
      v41 = 0;
      DetailObjHeight = this->fields.DetailObjHeight;
      UnityEngine_Transform__set_localPosition(v39, *(UnityEngine_Vector3_o *)&localPosition, 0);
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
    sub_21FFECC(Instance, v13);
  }
}