void EventBoardGameDiceEffectAction___ctor(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventBoardGameDiceEffectAction__EndAnimation(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *modelObj; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x20

  if ( (byte_596A4AD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4AD = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(modelObj, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(v7, 0);
  }
  ActionExtensions__Call(this->fields.endAction, 0);
}


void EventBoardGameDiceEffectAction__PlayDiceVoice(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *VoiceAssetName_49817936; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  SeManager_c *v8; // x8
  System_String_o *voiceCueName; // x19
  System_String_o *v10; // x20

  if ( (byte_596A4AC & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596A4AC = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0) )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v3, v4);
    SoundManager__stopVoiceAll(0.0, 0);
    VoiceAssetName_49817936 = ServantVoiceEntity__getVoiceAssetName_49817936(this->fields.servantId, 0);
    v8 = SeManager_TypeInfo;
    voiceCueName = this->fields.voiceCueName;
    v10 = VoiceAssetName_49817936;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v6, v7);
      v8 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_48511684(v10, voiceCueName, v8->static_fields->DEFAULT_VOLUME, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventBoardGameDiceEffectAction__Setup(
        EventBoardGameDiceEffectAction_o *this,
        AssetData_o *asset,
        int32_t diceType,
        int32_t diceNum,
        int32_t servantId,
        System_String_o *voiceCueName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *name; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UnityEngine_Object_o *modelObj; // x21

  if ( (byte_596A4AB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4AB = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceCueName,
    (int32_t)voiceCueName,
    *(System_String_o **)&diceType,
    *(System_String_o **)&diceNum,
    servantId,
    (int32_t)voiceCueName,
    (bool)endAction,
    (bool)method);
  this->fields.endAction = endAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAction,
    (int32_t)endAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_10;
  if ( (unsigned int)(diceType - 1) >= LODWORD(diceModelObjList->max_length) )
    sub_2213CE4(name);
  v23 = (Il2CppObject *)diceModelObjList->m_Items[diceType - 1];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  v24 = UnityEngine_Object__Instantiate_object_(
          v23,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = (struct UnityEngine_GameObject_o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.modelObj, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  if ( !v23
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v23, 0),
        !modelObj) )
  {
LABEL_10:
    sub_2213CDC(name, v20);
  }
  UnityEngine_Object__set_name(modelObj, name, 0);
  GameObjectExtensions__SafeSetParent_42897308(this->fields.modelObj, this->fields.rootDiceObj, 0);
}