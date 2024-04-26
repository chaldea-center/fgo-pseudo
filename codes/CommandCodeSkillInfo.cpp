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
  void *Instance; // x0
  __int64 v13; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v15; // x22
  struct UITexture_o **p_CommandCodeIcon; // x25
  UISprite_o *commandCodeIconBg; // x26
  int32_t flag; // w27
  UITexture_o *v19; // x26
  System_Int32_array **Manager__loadCommandCodeTexture_26997720; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UISprite_o *RaritySpr; // x23
  System_String_o *v28; // x0
  UILabel_o *CommandCodeName; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x22
  UnityEngine_Transform_o *v31; // x22
  unsigned int localPosition; // s0
  float DetailObjHeight; // s1
  int v34; // s2

  if ( (byte_43546A2 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_22064/*"rarity"*/);
    sub_B70694(&StringLiteral_16128/*"_0"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43546A2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_40;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             commandCodeId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( Entity )
  {
    v15 = Entity;
    Instance = this->fields.commandCodeIconBg;
    if ( !Instance )
      goto LABEL_40;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    p_CommandCodeIcon = &this->fields.CommandCodeIcon;
    Instance = this->fields.CommandCodeIcon;
    if ( !Instance )
      goto LABEL_40;
    (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)Instance + 744LL))(
      Instance,
      0LL,
      *(_QWORD *)(*(_QWORD *)Instance + 752LL));
    Instance = this->fields.NameBg;
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = this->fields.CommandCodeName;
    if ( !Instance )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( isFirst )
    {
      commandCodeIconBg = this->fields.commandCodeIconBg;
      flag = v15->fields.flag;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommandCodeBaseIcon(commandCodeIconBg, flag, 0LL);
      v19 = *p_CommandCodeIcon;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture_26997720 = (System_Int32_array **)ServantAssetLoadManager__loadCommandCodeTexture_26997720(
                                                                          v19,
                                                                          commandCodeId,
                                                                          0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Manager__loadCommandCodeTexture_26997720, 0LL, 0LL) )
      {
        *p_CommandCodeIcon = (struct UITexture_o *)Manager__loadCommandCodeTexture_26997720;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.CommandCodeIcon,
          Manager__loadCommandCodeTexture_26997720,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      Instance = this->fields.NameBg;
      if ( !Instance )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      RaritySpr = this->fields.RaritySpr;
      v28 = System_Int32__ToString((int)v15 + 64, 0LL);
      Instance = System_String__Concat_44760452(
                   (System_String_o *)StringLiteral_22064/*"rarity"*/,
                   v28,
                   (System_String_o *)StringLiteral_16128/*"_0"*/,
                   0LL);
      if ( !RaritySpr )
        goto LABEL_40;
      UISprite__set_spriteName(RaritySpr, (System_String_o *)Instance, 0LL);
      Instance = this->fields.RaritySpr;
      if ( !Instance )
        goto LABEL_40;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
        Instance,
        *(_QWORD *)(*(_QWORD *)Instance + 848LL));
      CommandCodeName = this->fields.CommandCodeName;
      v30 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v15->fields.bannerId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(v30, 0LL);
      if ( !CommandCodeName )
        goto LABEL_40;
      UILabel__set_text(CommandCodeName, (System_String_o *)Instance, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.CommandCodeName, 320, 0LL);
    }
    else
    {
      Instance = this->fields.DetailObj;
      if ( !Instance )
        goto LABEL_40;
      Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.DetailObj )
        goto LABEL_40;
      v31 = (UnityEngine_Transform_o *)Instance;
      Instance = UnityEngine_GameObject__get_transform(this->fields.DetailObj, 0LL);
      if ( !Instance )
        goto LABEL_40;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
      if ( !v31 )
        goto LABEL_40;
      DetailObjHeight = this->fields.DetailObjHeight;
      v34 = 0;
      UnityEngine_Transform__set_localPosition(v31, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
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
          WrapControlText__textAdjust((UILabel_o *)Instance, skillDetail, *((_DWORD *)Instance + 104), 0, 0, 0LL);
          return;
        }
      }
    }
LABEL_40:
    sub_B7076C(Instance, v13);
  }
}