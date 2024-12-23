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

  if ( (byte_4B6A9FA & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A9FA = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(modelObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(v4, 0LL);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__PlayDiceVoice(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *VoiceAssetName_40803308; // x0
  SeManager_c *v5; // x8
  System_String_o *voiceCueName; // x19
  System_String_o *v7; // x20

  if ( (byte_4B6A9F9 & 1) == 0 )
  {
    sub_1BE4ACC(&SeManager_TypeInfo, method);
    sub_1BE4ACC(&SoundManager_TypeInfo, v3);
    byte_4B6A9F9 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0LL);
    VoiceAssetName_40803308 = ServantVoiceEntity__getVoiceAssetName_40803308(this->fields.servantId, 0LL);
    v5 = SeManager_TypeInfo;
    voiceCueName = this->fields.voiceCueName;
    v7 = VoiceAssetName_40803308;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v5 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_39615552(v7, voiceCueName, v5->static_fields->DEFAULT_VOLUME, 0LL, 0LL);
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
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *name; // x0
  __int64 v21; // x1
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Object_o *modelObj; // x21

  if ( (byte_4B6A9F8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, asset);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v13);
    byte_4B6A9F8 = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.voiceCueName,
    (int64_t)voiceCueName,
    *(int64_t *)&diceType,
    diceNum,
    *(System_String_o **)&servantId,
    (BattleSetupInfo_o *)voiceCueName,
    (FollowerInfo_o *)endAction,
    (PartyListViewItem_o *)method);
  this->fields.endAction = endAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.endAction, (int64_t)endAction, v14, v15, v16, v17, v18, v19);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_10;
  if ( diceType - 1 >= diceModelObjList->max_length )
    sub_1BE4D30(name, v21);
  v23 = (Il2CppObject *)diceModelObjList->m_Items[diceType - 1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__Instantiate_object_(
          v23,
          (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = (struct UnityEngine_GameObject_o *)v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.modelObj, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  if ( !v23
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v23, 0LL),
        !modelObj) )
  {
LABEL_10:
    sub_1BE4D28(name, v21);
  }
  UnityEngine_Object__set_name(modelObj, name, 0LL);
  GameObjectExtensions__SafeSetParent_34492740(this->fields.modelObj, this->fields.rootDiceObj, 0LL);
}