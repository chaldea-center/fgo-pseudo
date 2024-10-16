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
  Il2CppObject *Entity; // x0
  Il2CppObject *v24; // x22
  struct UITexture_o **p_CommandCodeIcon; // x25
  UISprite_o *commandCodeIconBg; // x26
  int32_t klass; // w27
  UITexture_o *v28; // x26
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_38340344; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  UISprite_o *RaritySpr; // x23
  System_String_o *v33; // x0
  UILabel_o *CommandCodeName; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v35; // x22
  const MethodInfo *v36; // x2
  UnityEngine_Transform_o *v37; // x22
  unsigned int localPosition; // s0
  float DetailObjHeight; // s1
  int v40; // s2

  if ( (byte_4AB51A4 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommandCodeMaster___, v12);
    sub_1BAB41C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v13);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v14);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_1BAB41C(&ServantAssetLoadManager_TypeInfo, v16);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BAB41C(&StringLiteral_22824/*"rarity"*/, v18);
    sub_1BAB41C(&StringLiteral_16154/*"_0"*/, v19);
    sub_1BAB41C(&StringLiteral_1/*""*/, v20);
    byte_4AB51A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             commandCodeId,
             (const MethodInfo_3163D90 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( Entity )
  {
    v24 = Entity;
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
      klass = (int32_t)v24[4].klass;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommandCodeBaseIcon(commandCodeIconBg, klass, 0LL);
      v28 = *p_CommandCodeIcon;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCodeTexture_38340344 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_38340344(
                                                                           v28,
                                                                           commandCodeId,
                                                                           0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_38340344, 0LL, 0LL) )
      {
        *p_CommandCodeIcon = (struct UITexture_o *)Manager__loadCommandCodeTexture_38340344;
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&this->fields.CommandCodeIcon,
          (int32_t)Manager__loadCommandCodeTexture_38340344,
          v30,
          v31);
      }
      Instance = this->fields.NameBg;
      if ( !Instance )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      RaritySpr = this->fields.RaritySpr;
      v33 = System_Int32__ToString((int)v24 + 64, 0LL);
      Instance = System_String__Concat_62059388(
                   (System_String_o *)StringLiteral_22824/*"rarity"*/,
                   v33,
                   (System_String_o *)StringLiteral_16154/*"_0"*/,
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
      v35 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v24[3].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46731696(v35, 0LL);
      if ( !CommandCodeName )
        goto LABEL_36;
      UILabel__set_text(CommandCodeName, (System_String_o *)Instance, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.CommandCodeName, 320, v36);
    }
    else
    {
      Instance = this->fields.DetailObj;
      if ( !Instance )
        goto LABEL_36;
      Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.DetailObj )
        goto LABEL_36;
      v37 = (UnityEngine_Transform_o *)Instance;
      Instance = UnityEngine_GameObject__get_transform(this->fields.DetailObj, 0LL);
      if ( !Instance )
        goto LABEL_36;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
      if ( !v37 )
        goto LABEL_36;
      DetailObjHeight = this->fields.DetailObjHeight;
      v40 = 0;
      UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
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
    sub_1BAB678(Instance, v22);
  }
}