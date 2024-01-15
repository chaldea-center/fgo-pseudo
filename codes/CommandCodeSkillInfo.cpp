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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v24; // x22
  UISprite_o *commandCodeIconBg; // x0
  struct UITexture_o *CommandCodeIcon; // x0
  struct UITexture_o **p_CommandCodeIcon; // x25
  UnityEngine_GameObject_o *NameBg; // x0
  UILabel_o *CommandCodeName; // x0
  UISprite_o *v30; // x26
  int32_t flag; // w27
  UITexture_o *v32; // x26
  System_Int32_array **Manager__loadCommandCodeTexture_23821516; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *v40; // x0
  UISprite_o *RaritySpr; // x23
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  struct UISprite_o *v44; // x0
  UILabel_o *v45; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v46; // x22
  System_String_o *v47; // x0
  UnityEngine_GameObject_o *DetailObj; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v50; // x22
  UnityEngine_Transform_o *v51; // x0
  unsigned int localPosition; // s0
  float DetailObjHeight; // s1
  int v54; // s2
  SkillIconComponent_o *SkillIconComp; // x0
  SkillIconComponent_o *v56; // x0
  struct UILabel_o *v57; // x0

  if ( (byte_40FA5C3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_21611/*"rarity"*/, v18);
    sub_B16FFC(&StringLiteral_15843/*"_0"*/, v19);
    sub_B16FFC(&StringLiteral_1/*""*/, v20);
    byte_40FA5C3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             commandCodeId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( Entity )
  {
    v24 = Entity;
    commandCodeIconBg = this->fields.commandCodeIconBg;
    if ( !commandCodeIconBg )
      goto LABEL_40;
    UISprite__set_spriteName(commandCodeIconBg, 0LL, 0LL);
    p_CommandCodeIcon = &this->fields.CommandCodeIcon;
    CommandCodeIcon = this->fields.CommandCodeIcon;
    if ( !CommandCodeIcon )
      goto LABEL_40;
    ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))CommandCodeIcon->klass->vtable._27_set_mainTexture.method)(
      CommandCodeIcon,
      0LL,
      CommandCodeIcon->klass->vtable._28_get_shader.methodPtr);
    NameBg = this->fields.NameBg;
    if ( !NameBg )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive(NameBg, 0, 0LL);
    CommandCodeName = this->fields.CommandCodeName;
    if ( !CommandCodeName )
      goto LABEL_40;
    UILabel__set_text(CommandCodeName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( isFirst )
    {
      v30 = this->fields.commandCodeIconBg;
      flag = v24->fields.flag;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommandCodeBaseIcon(v30, flag, 0LL);
      v32 = *p_CommandCodeIcon;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture_23821516 = (System_Int32_array **)ServantAssetLoadManager__loadCommandCodeTexture_23821516(
                                                                          v32,
                                                                          commandCodeId,
                                                                          0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Manager__loadCommandCodeTexture_23821516, 0LL, 0LL) )
      {
        *p_CommandCodeIcon = (struct UITexture_o *)Manager__loadCommandCodeTexture_23821516;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.CommandCodeIcon,
          Manager__loadCommandCodeTexture_23821516,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      v40 = this->fields.NameBg;
      if ( !v40 )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(v40, 1, 0LL);
      RaritySpr = this->fields.RaritySpr;
      v42 = System_Int32__ToString((int)v24 + 64, 0LL);
      v43 = System_String__Concat_43746016(
              (System_String_o *)StringLiteral_21611/*"rarity"*/,
              v42,
              (System_String_o *)StringLiteral_15843/*"_0"*/,
              0LL);
      if ( !RaritySpr )
        goto LABEL_40;
      UISprite__set_spriteName(RaritySpr, v43, 0LL);
      v44 = this->fields.RaritySpr;
      if ( !v44 )
        goto LABEL_40;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v44->klass->vtable._33_MakePixelPerfect.method)(
        v44,
        v44->klass->vtable._34_get_minWidth.methodPtr);
      v45 = this->fields.CommandCodeName;
      v46 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v24->fields.bannerId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v46, 0LL);
      if ( !v45 )
        goto LABEL_40;
      UILabel__set_text(v45, v47, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.CommandCodeName, 320, 0LL);
    }
    else
    {
      DetailObj = this->fields.DetailObj;
      if ( !DetailObj )
        goto LABEL_40;
      transform = UnityEngine_GameObject__get_transform(DetailObj, 0LL);
      if ( !this->fields.DetailObj )
        goto LABEL_40;
      v50 = transform;
      v51 = UnityEngine_GameObject__get_transform(this->fields.DetailObj, 0LL);
      if ( !v51 )
        goto LABEL_40;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(v51, 0LL);
      if ( !v50 )
        goto LABEL_40;
      DetailObjHeight = this->fields.DetailObjHeight;
      v54 = 0;
      UnityEngine_Transform__set_localPosition(v50, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
    }
    SkillIconComp = this->fields.SkillIconComp;
    if ( SkillIconComp )
    {
      SkillIconComponent__Clear(SkillIconComp, 0LL);
      v56 = this->fields.SkillIconComp;
      if ( v56 )
      {
        SkillIconComponent__Set(v56, skillId, 0LL);
        v57 = this->fields.SkillDetail;
        if ( v57 )
        {
          WrapControlText__textAdjust(v57, skillDetail, v57->fields.mFontSize, 0, 0, 0LL);
          return;
        }
      }
    }
LABEL_40:
    sub_B170D4();
  }
}