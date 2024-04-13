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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  void *Instance; // x0
  __int64 v40; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v42; // x22
  struct UITexture_o **p_CommandCodeIcon; // x25
  UISprite_o *commandCodeIconBg; // x26
  int32_t flag; // w27
  UITexture_o *v46; // x26
  System_Int32_array **Manager__loadCommandCodeTexture_26919588; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UISprite_o *RaritySpr; // x23
  System_String_o *v55; // x0
  UILabel_o *CommandCodeName; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v57; // x22
  UnityEngine_Transform_o *v58; // x22
  unsigned int localPosition; // s0
  float DetailObjHeight; // s1
  int v61; // s2

  if ( (byte_42E8BFB & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, commandCodeId, skillId, skillName);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21997/*"rarity"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16097/*"_0"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_1/*""*/, v36, v37, v38);
    byte_42E8BFB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_40;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             commandCodeId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( Entity )
  {
    v42 = Entity;
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
      flag = v42->fields.flag;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommandCodeBaseIcon(commandCodeIconBg, flag, 0LL);
      v46 = *p_CommandCodeIcon;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture_26919588 = (System_Int32_array **)ServantAssetLoadManager__loadCommandCodeTexture_26919588(
                                                                          v46,
                                                                          commandCodeId,
                                                                          0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Manager__loadCommandCodeTexture_26919588, 0LL, 0LL) )
      {
        *p_CommandCodeIcon = (struct UITexture_o *)Manager__loadCommandCodeTexture_26919588;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.CommandCodeIcon,
          Manager__loadCommandCodeTexture_26919588,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
      }
      Instance = this->fields.NameBg;
      if ( !Instance )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      RaritySpr = this->fields.RaritySpr;
      v55 = System_Int32__ToString((int)v42 + 64, 0LL);
      Instance = System_String__Concat_44580072(
                   (System_String_o *)StringLiteral_21997/*"rarity"*/,
                   v55,
                   (System_String_o *)StringLiteral_16097/*"_0"*/,
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
      v57 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v42->fields.bannerId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v57, 0LL);
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
      v58 = (UnityEngine_Transform_o *)Instance;
      Instance = UnityEngine_GameObject__get_transform(this->fields.DetailObj, 0LL);
      if ( !Instance )
        goto LABEL_40;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
      if ( !v58 )
        goto LABEL_40;
      DetailObjHeight = this->fields.DetailObjHeight;
      v61 = 0;
      UnityEngine_Transform__set_localPosition(v58, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
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
    sub_B5D69C(Instance, v40);
  }
}