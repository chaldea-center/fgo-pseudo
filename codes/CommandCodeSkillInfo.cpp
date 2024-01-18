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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  void *Instance; // x0
  __int64 v22; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v24; // x22
  struct UITexture_o **p_CommandCodeIcon; // x25
  UISprite_o *commandCodeIconBg; // x26
  int32_t flag; // w27
  UITexture_o *v28; // x26
  System_Int32_array **Manager__loadCommandCodeTexture_25351864; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UISprite_o *RaritySpr; // x23
  System_String_o *v37; // x0
  UILabel_o *CommandCodeName; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v39; // x22
  UnityEngine_Transform_o *v40; // x22
  unsigned int localPosition; // s0
  float DetailObjHeight; // s1
  int v43; // s2

  if ( (byte_418810D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&StringLiteral_21703/*"rarity"*/, v18);
    sub_B2C35C(&StringLiteral_15906/*"_0"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    byte_418810D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_40;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             commandCodeId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( Entity )
  {
    v24 = Entity;
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
      flag = v24->fields.flag;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommandCodeBaseIcon(commandCodeIconBg, flag, 0LL);
      v28 = *p_CommandCodeIcon;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture_25351864 = (System_Int32_array **)ServantAssetLoadManager__loadCommandCodeTexture_25351864(
                                                                          v28,
                                                                          commandCodeId,
                                                                          0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Manager__loadCommandCodeTexture_25351864, 0LL, 0LL) )
      {
        *p_CommandCodeIcon = (struct UITexture_o *)Manager__loadCommandCodeTexture_25351864;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.CommandCodeIcon,
          Manager__loadCommandCodeTexture_25351864,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      Instance = this->fields.NameBg;
      if ( !Instance )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      RaritySpr = this->fields.RaritySpr;
      v37 = System_Int32__ToString((int)v24 + 64, 0LL);
      Instance = System_String__Concat_44307816(
                   (System_String_o *)StringLiteral_21703/*"rarity"*/,
                   v37,
                   (System_String_o *)StringLiteral_15906/*"_0"*/,
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
      v39 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v24->fields.bannerId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v39, 0LL);
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
      v40 = (UnityEngine_Transform_o *)Instance;
      Instance = UnityEngine_GameObject__get_transform(this->fields.DetailObj, 0LL);
      if ( !Instance )
        goto LABEL_40;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
      if ( !v40 )
        goto LABEL_40;
      DetailObjHeight = this->fields.DetailObjHeight;
      v43 = 0;
      UnityEngine_Transform__set_localPosition(v40, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
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
    sub_B2C434(Instance, v22);
  }
}