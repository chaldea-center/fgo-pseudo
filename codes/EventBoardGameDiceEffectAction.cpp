void EventBoardGameDiceEffectAction___ctor(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventBoardGameDiceEffectAction__EndAnimation(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *modelObj; // x20
  UnityEngine_Object_o *v4; // x20

  if ( (byte_4CE870E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE870E = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(modelObj, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v4, 0);
  }
  ActionExtensions__Call(this->fields.endAction, 0);
}


void EventBoardGameDiceEffectAction__PlayDiceVoice(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  System_String_o *VoiceAssetName_43350640; // x0
  SeManager_c *v4; // x8
  System_String_o *voiceCueName; // x19
  System_String_o *v6; // x20

  if ( (byte_4CE870D & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CE870D = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0);
    VoiceAssetName_43350640 = ServantVoiceEntity__getVoiceAssetName_43350640(this->fields.servantId, 0);
    v4 = SeManager_TypeInfo;
    voiceCueName = this->fields.voiceCueName;
    v6 = VoiceAssetName_43350640;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v4 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_42095460(v6, voiceCueName, v4->static_fields->DEFAULT_VOLUME, 0, 0, 0);
  }
}


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
  System_String_o *name; // x0
  __int64 v14; // x1
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *modelObj; // x21

  if ( (byte_4CE870C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE870C = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_1C7BA8C(&this->fields.voiceCueName, voiceCueName);
  this->fields.endAction = endAction;
  name = (System_String_o *)sub_1C7BA8C(&this->fields.endAction, endAction);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_10;
  if ( (unsigned int)(diceType - 1) >= LODWORD(diceModelObjList->max_length) )
    sub_1C7BD48(name);
  v16 = (Il2CppObject *)diceModelObjList->m_Items[diceType - 1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__Instantiate_object_(
          v16,
          (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = (struct UnityEngine_GameObject_o *)v17;
  name = (System_String_o *)sub_1C7BA8C(&this->fields.modelObj, v17);
  if ( !v16
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v16, 0),
        !modelObj) )
  {
LABEL_10:
    sub_1C7BD40(name, v14);
  }
  UnityEngine_Object__set_name(modelObj, name, 0);
  GameObjectExtensions__SafeSetParent_36529116(this->fields.modelObj, this->fields.rootDiceObj, 0);
}