void __fastcall EventBoardGameDiceEffectAction___ctor(EventBoardGameDiceEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__EndAnimation(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *modelObj; // x20
  UnityEngine_Object_o *v6; // x20

  if ( (byte_42EB88F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB88F = 1;
  }
  modelObj = (UnityEngine_Object_o *)this->fields.modelObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(modelObj, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.modelObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v6, 0LL);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventBoardGameDiceEffectAction__PlayDiceVoice(
        EventBoardGameDiceEffectAction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *VoiceAssetName_31472176; // x0
  System_String_o *voiceCueName; // x19
  System_String_o *v10; // x20
  SeManager_c *v11; // x8

  if ( (byte_42EB88E & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EB88E = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.voiceCueName, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoiceAll(0.0, 0LL);
    VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176(this->fields.servantId, 0LL);
    voiceCueName = this->fields.voiceCueName;
    v10 = VoiceAssetName_31472176;
    v11 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v11 = SeManager_TypeInfo;
    }
    SoundManager__playVoice_23391328(v10, voiceCueName, v11->static_fields->DEFAULT_VOLUME, 0LL, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *name; // x0
  __int64 v23; // x1
  struct UnityEngine_GameObject_array *diceModelObjList; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v25; // x20
  struct UnityEngine_GameObject_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *modelObj; // x21
  __int64 v34; // x0

  if ( (byte_42EB88D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)asset, diceType, *(_QWORD *)&diceNum);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42EB88D = 1;
  }
  this->fields.servantId = servantId;
  this->fields.voiceCueName = voiceCueName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceCueName,
    (System_Int32_array **)voiceCueName,
    *(System_String_array ***)&diceType,
    *(System_String_array ***)&diceNum,
    *(System_Boolean_array ***)&servantId,
    (System_Int32_array **)voiceCueName,
    (System_Int32_array *)endAction,
    (System_Int32_array *)method);
  this->fields.endAction = endAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endAction,
    (System_Int32_array **)endAction,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  diceModelObjList = this->fields.diceModelObjList;
  if ( !diceModelObjList )
    goto LABEL_11;
  if ( diceType - 1 >= diceModelObjList->max_length )
  {
    v34 = sub_B5D6C8(name);
    sub_B5D668(v34, 0LL);
  }
  v25 = (UnityEngine_UI_Dropdown_DropdownItem_o *)diceModelObjList->m_Items[diceType - 1];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             v25,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.modelObj = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.modelObj,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !v25
    || (modelObj = (UnityEngine_Object_o *)this->fields.modelObj,
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v25, 0LL),
        !modelObj) )
  {
LABEL_11:
    sub_B5D69C(name, v23);
  }
  UnityEngine_Object__set_name(modelObj, name, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(this->fields.modelObj, this->fields.rootDiceObj, 0LL);
}