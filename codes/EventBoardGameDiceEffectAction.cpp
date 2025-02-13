void __fastcall EventBoardGameDiceEffectAction___ctor(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__EndAnimation(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *modelObj; // x20
  UnityEngine_Object_o *v4; // x20

  if ( (byte_4BE03BD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03BD = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(modelObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v4, 0LL);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__PlayDiceVoice(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  System_String_o *VoiceAssetName_41121704; // x0
  SeManager_c *v4; // x8
  System_String_o *voiceCueName; // x19
  System_String_o *v6; // x20

  if ( (byte_4BE03BC & 1) == 0 )
  {
    sub_1C21E38(&SeManager_TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BE03BC = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0LL);
    VoiceAssetName_41121704 = ServantVoiceEntity__getVoiceAssetName_41121704(this->fields.servantId, 0LL);
    v4 = SeManager_TypeInfo;
    voiceCueName = this->fields.voiceCueName;
    v6 = VoiceAssetName_41121704;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v4 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_39957484(v6, voiceCueName, v4->static_fields->DEFAULT_VOLUME, 0LL, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameDiceEffectAction__Setup(
        EventBoardGameDiceEffectAction_o *this,
        AssetData_o *asset,
        int32_t diceType,
        int32_t diceNum,
        int32_t servantId,
        System_String_o *voiceCueName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_o *name; // x0
  __int64 v20; // x1
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_Object_o *modelObj; // x21

  if ( (byte_4BE03BB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03BB = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.voiceCueName,
    (int64_t)voiceCueName,
    *(int64_t *)&diceType,
    diceNum,
    *(System_String_o **)&servantId,
    (BattleSetupInfo_o *)voiceCueName,
    (FollowerInfo_o *)endAction,
    (PartyListViewItem_o *)method);
  this->fields.endAction = endAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.endAction, (int64_t)endAction, v13, v14, v15, v16, v17, v18);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_10;
  if ( diceType - 1 >= diceModelObjList->max_length )
    sub_1C2209C(name, v20);
  v22 = (Il2CppObject *)diceModelObjList->m_Items[diceType - 1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__Instantiate_object_(
          v22,
          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = (struct UnityEngine_GameObject_o *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.modelObj, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  if ( !v22
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v22, 0LL),
        !modelObj) )
  {
LABEL_10:
    sub_1C22094(name, v20);
  }
  UnityEngine_Object__set_name(modelObj, name, 0LL);
  GameObjectExtensions__SafeSetParent_34803616(this->fields.modelObj, this->fields.rootDiceObj, 0LL);
}