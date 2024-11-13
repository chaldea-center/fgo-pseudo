void __fastcall EventBoardGameDiceEffectAction___ctor(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__EndAnimation(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *modelObj; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4B19F71 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19F71 = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(modelObj, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_70154244(v6, 0LL);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__PlayDiceVoice(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  System_String_o *VoiceAssetName_40580584; // x0
  __int64 v8; // x1
  SeManager_c *v9; // x8
  System_String_o *voiceCueName; // x19
  System_String_o *v11; // x20

  if ( (byte_4B19F70 & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B19F70 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
    SoundManager__stopVoiceAll(0.0, 0LL);
    VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(this->fields.servantId, 0LL);
    v9 = SeManager_TypeInfo;
    voiceCueName = this->fields.voiceCueName;
    v11 = VoiceAssetName_40580584;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
      v9 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_39419392(v11, voiceCueName, v9->static_fields->DEFAULT_VOLUME, 0LL, 0LL);
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
  __int64 v14; // x2
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *name; // x0
  __int64 v22; // x1
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  Il2CppObject *v24; // x20
  Il2CppObject *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Object_o *modelObj; // x21

  if ( (byte_4B19F6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, asset, *(_QWORD *)&diceType);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B19F6F = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voiceCueName,
    (int64_t)voiceCueName,
    *(int64_t *)&diceType,
    diceNum,
    *(System_String_o **)&servantId,
    (BattleSetupInfo_o *)voiceCueName,
    (FollowerInfo_o *)endAction,
    (PartyListViewItem_o *)method);
  this->fields.endAction = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAction, (int64_t)endAction, v15, v16, v17, v18, v19, v20);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_10;
  if ( diceType - 1 >= diceModelObjList->max_length )
    sub_1BCAA44(name, v22);
  v24 = (Il2CppObject *)diceModelObjList->m_Items[diceType - 1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  v25 = UnityEngine_Object__Instantiate_object_(
          v24,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = (struct UnityEngine_GameObject_o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.modelObj, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  if ( !v24
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v24, 0LL),
        !modelObj) )
  {
LABEL_10:
    sub_1BCAA3C(name, v22);
  }
  UnityEngine_Object__set_name(modelObj, name, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(this->fields.modelObj, this->fields.rootDiceObj, 0LL);
}