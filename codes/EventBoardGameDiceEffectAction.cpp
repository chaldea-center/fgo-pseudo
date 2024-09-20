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

  if ( (byte_4A5EE01 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE01 = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(modelObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v4, 0LL);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__PlayDiceVoice(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  System_String_o *VoiceAssetName_39766344; // x0
  SeManager_c *v4; // x8
  System_String_o *voiceCueName; // x19
  System_String_o *v6; // x20

  if ( (byte_4A5EE00 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5EE00 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0LL);
    VoiceAssetName_39766344 = ServantVoiceEntity__getVoiceAssetName_39766344(this->fields.servantId, 0LL);
    v4 = SeManager_TypeInfo;
    voiceCueName = this->fields.voiceCueName;
    v6 = VoiceAssetName_39766344;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v4 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_38702940(v6, voiceCueName, v4->static_fields->DEFAULT_VOLUME, 0LL, 0LL);
  }
}


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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *name; // x0
  __int64 v16; // x1
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *modelObj; // x21

  if ( (byte_4A5EDFF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDFF = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voiceCueName, (int32_t)voiceCueName, diceType, diceNum);
  this->fields.endAction = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAction, (int32_t)endAction, v13, v14);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_10;
  if ( diceType - 1 >= diceModelObjList->max_length )
    sub_1B88814(name, v16);
  v18 = (Il2CppObject *)diceModelObjList->m_Items[diceType - 1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__Instantiate_object_(
          v18,
          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = (struct UnityEngine_GameObject_o *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.modelObj, (int32_t)v19, v20, v21);
  if ( !v18
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v18, 0LL),
        !modelObj) )
  {
LABEL_10:
    sub_1B8880C(name, v16);
  }
  UnityEngine_Object__set_name(modelObj, name, 0LL);
  GameObjectExtensions__SafeSetParent_33730068(this->fields.modelObj, this->fields.rootDiceObj, 0LL);
}