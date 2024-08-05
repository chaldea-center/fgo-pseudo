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

  if ( (byte_4A02118 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_4A02118 = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(modelObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(v4, 0LL);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__PlayDiceVoice(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *VoiceAssetName_39441004; // x0
  SeManager_c *v5; // x8
  System_String_o *voiceCueName; // x19
  System_String_o *v7; // x20

  if ( (byte_4A02117 & 1) == 0 )
  {
    sub_1B64870(&SeManager_TypeInfo, method);
    sub_1B64870(&SoundManager_TypeInfo, v3);
    byte_4A02117 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0LL);
    VoiceAssetName_39441004 = ServantVoiceEntity__getVoiceAssetName_39441004(this->fields.servantId, 0LL);
    v5 = SeManager_TypeInfo;
    voiceCueName = this->fields.voiceCueName;
    v7 = VoiceAssetName_39441004;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v5 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_38391544(v7, voiceCueName, v5->static_fields->DEFAULT_VOLUME, 0LL, 0LL);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *name; // x0
  __int64 v17; // x1
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Object_o *modelObj; // x21

  if ( (byte_4A02116 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, asset);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v13);
    byte_4A02116 = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.voiceCueName, (int32_t)voiceCueName, diceType, diceNum);
  this->fields.endAction = endAction;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endAction, (int32_t)endAction, v14, v15);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_10;
  if ( diceType - 1 >= diceModelObjList->max_length )
    sub_1B64AD4(name, v17);
  v19 = (Il2CppObject *)diceModelObjList->m_Items[diceType - 1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__Instantiate_object_(
          v19,
          (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = (struct UnityEngine_GameObject_o *)v20;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.modelObj, (int32_t)v20, v21, v22);
  if ( !v19
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v19, 0LL),
        !modelObj) )
  {
LABEL_10:
    sub_1B64ACC(name, v17);
  }
  UnityEngine_Object__set_name(modelObj, name, 0LL);
  GameObjectExtensions__SafeSetParent_33382288(this->fields.modelObj, this->fields.rootDiceObj, 0LL);
}