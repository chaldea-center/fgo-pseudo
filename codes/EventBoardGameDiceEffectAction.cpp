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

  if ( (byte_4216E48 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216E48 = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(modelObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v4, 0LL);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__PlayDiceVoice(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *VoiceAssetName_29941680; // x0
  System_String_o *voiceCueName; // x19
  System_String_o *v6; // x20
  SeManager_c *v7; // x8

  if ( (byte_4216E47 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4216E47 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoiceAll(0.0, 0LL);
    VoiceAssetName_29941680 = ServantVoiceEntity__getVoiceAssetName_29941680(this->fields.servantId, 0LL);
    voiceCueName = this->fields.voiceCueName;
    v6 = VoiceAssetName_29941680;
    v7 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v7 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_24977528(v6, voiceCueName, v7->static_fields->DEFAULT_VOLUME, 0LL, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *name; // x0
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v22; // x20
  struct UnityEngine_GameObject_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *modelObj; // x21
  __int64 v31; // x0

  if ( (byte_4216E46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, asset);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    byte_4216E46 = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voiceCueName,
    (System_Int32_array **)voiceCueName,
    *(System_String_array ***)&diceType,
    *(System_String_array ***)&diceNum,
    *(System_Boolean_array ***)&servantId,
    (System_Int32_array **)voiceCueName,
    (System_Int32_array *)endAction,
    (System_Int32_array *)method);
  this->fields.endAction = endAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endAction,
    (System_Int32_array **)endAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_11;
  if ( diceType - 1 >= diceModelObjList->max_length )
  {
    v31 = sub_B0D9A8(name);
    sub_B0D948(v31, 0LL);
  }
  v22 = (UnityEngine_UI_Dropdown_DropdownItem_o *)diceModelObjList->m_Items[diceType - 1];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             v22,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.modelObj,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !v22
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v22, 0LL),
        !modelObj) )
  {
LABEL_11:
    sub_B0D97C(name);
  }
  UnityEngine_Object__set_name(modelObj, name, 0LL);
  GameObjectExtensions__SafeSetParent_31184716(this->fields.modelObj, this->fields.rootDiceObj, 0LL);
}