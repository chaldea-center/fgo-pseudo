void __fastcall BattleInfoMessageComponent___ctor(BattleInfoMessageComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleInfoMessageComponent__getTargetTr(
        BattleInfoMessageComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *objTarget; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4BB762B & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB762B = 1;
  }
  objTarget = (UnityEngine_Object_o *)this->fields.objTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(objTarget, 0LL, 0LL) )
    return this->fields.objTarget;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v6);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


void __fastcall BattleInfoMessageComponent__setCommandObject(
        BattleInfoMessageComponent_o *this,
        UnityEngine_GameObject_o *command,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *battleCommand; // x23
  BattleCommandComponent_o *Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x23
  BattleCommandComponent_o *v12; // x23
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BattleCommandComponent_o *v20; // x20
  BattleServantData_o *v21; // x1
  struct BattleCommandData_o *data; // x19

  if ( (byte_4BB762C & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, command);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB762C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)command, 0LL, 0LL) )
  {
    battleCommand = (UnityEngine_Object_o *)this->fields.battleCommand;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(battleCommand, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      v11 = (UnityEngine_Object_o *)this->fields.battleCommand;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70721988(v11, 0LL);
    }
    if ( !command )
      goto LABEL_21;
    Component_object = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     command,
                                                     (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_object )
      goto LABEL_21;
    v12 = Component_object;
    BattleCommandComponent__SetCommandEffectActive(Component_object, 3, 0, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, command, this->fields.commandTarget, 0LL, 0LL);
    this->fields.battleCommand = Object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.battleCommand,
      (int64_t)Object,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    Component_object = (BattleCommandComponent_o *)this->fields.battleCommand;
    if ( !Component_object )
      goto LABEL_21;
    Component_object = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)Component_object,
                                                     (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_object )
      goto LABEL_21;
    v20 = Component_object;
    BattleCommandComponent__setAttackCommandData(Component_object, v12, 0LL);
    BattleCommandComponent__resetAddObject(v20, 0LL);
    v21 = svtData ? svtData : 0LL;
    BattleCommandComponent__updateClassMag(v20, v21, 0LL);
    data = v12->fields.data;
    *(_WORD *)&v20->fields.isCodeTextureView = 256;
    if ( !data )
LABEL_21:
      sub_1C13F80(Component_object, v10);
    BattleCommandComponent__SetCommandCodeView_44303452(v20, data->fields.commandCodeId, 0LL);
    BattleCommandComponent__SetCommandAssistView(v20, data->fields.commandAssistId, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInfoMessageComponent__setItemSprite(
        BattleInfoMessageComponent_o *this,
        int32_t imageId,
        bool useSelfAtlas,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *itemSprite; // x22
  System_String_o *v9; // x0
  __int64 v10; // x1
  struct UISprite_o *v11; // x22
  UnityEngine_Object_o *mAtlas; // x20
  struct UISprite_o *v13; // x8
  UIAtlas_o *v14; // x20
  UISprite_o *v15; // x19
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = imageId;
  if ( (byte_4BB762D & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, *(_QWORD *)&imageId);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB762D = 1;
  }
  itemSprite = (UnityEngine_Object_o *)this->fields.itemSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (System_String_o *)UnityEngine_Object__op_Inequality(itemSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v11 = this->fields.itemSprite;
    if ( useSelfAtlas )
    {
      if ( !v11 )
        goto LABEL_20;
      mAtlas = (UnityEngine_Object_o *)v11->fields.mAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (System_String_o *)UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        v13 = this->fields.itemSprite;
        if ( v13 )
        {
          v14 = v13->fields.mAtlas;
          v9 = System_Int32__ToString((int32_t)&v16, 0LL);
          if ( v14 )
          {
            if ( !UIAtlas__GetSprite(v14, v9, 0LL) )
              return;
            v15 = this->fields.itemSprite;
            v9 = System_Int32__ToString((int32_t)&v16, 0LL);
            if ( v15 )
            {
              UISprite__set_spriteName(v15, v9, 0LL);
              return;
            }
          }
        }
LABEL_20:
        sub_1C13F80(v9, v10);
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v11, imageId, 0LL);
    }
  }
}


void __fastcall BattleInfoMessageComponent__setSkillText(
        BattleInfoMessageComponent_o *this,
        System_String_o *str,
        int32_t skillLevel,
        const MethodInfo *method)
{
  BattleInfoMessageComponent_o *v5; // x20
  __int64 v6; // x1
  struct UILabel_array *textLabel; // x8
  UILabel_o *v8; // x20
  System_String_o *v9; // x21
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  v11 = skillLevel;
  if ( (byte_4BB762A & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, str);
    this = (BattleInfoMessageComponent_o *)sub_1C13D24(&StringLiteral_3023/*"BATTLE_SKILL_CONF_TITLE"*/, v6);
    byte_4BB762A = 1;
  }
  textLabel = v5->fields.textLabel;
  if ( !textLabel )
    goto LABEL_9;
  if ( !textLabel->max_length )
    sub_1C13F88(this, str);
  v8 = textLabel->m_Items[0];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3023/*"BATTLE_SKILL_CONF_TITLE"*/, 0LL);
  v10 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0LL);
  this = (BattleInfoMessageComponent_o *)System_String__Format_62982316(v9, (Il2CppObject *)str, v10, 0LL);
  if ( !v8 )
LABEL_9:
    sub_1C13F80(this, str);
  UILabel__set_text(v8, (System_String_o *)this, 0LL);
}


void __fastcall BattleInfoMessageComponent__setText(
        BattleInfoMessageComponent_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  struct UILabel_array *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_5;
  if ( !textLabel->max_length )
    sub_1C13F88(this, str);
  this = (BattleInfoMessageComponent_o *)textLabel->m_Items[0];
  if ( !this )
LABEL_5:
    sub_1C13F80(this, str);
  UILabel__set_text((UILabel_o *)this, str, 0LL);
}


void __fastcall BattleInfoMessageComponent__setText_45040628(
        BattleInfoMessageComponent_o *this,
        System_String_o *str,
        System_String_o *str2,
        const MethodInfo *method)
{
  BattleInfoMessageComponent_o *v6; // x20
  struct UILabel_array *textLabel; // x8
  struct UILabel_array *v8; // x8
  UnityEngine_Object_o *v9; // x21
  struct UILabel_array *v10; // x8

  v6 = this;
  if ( (byte_4BB7629 & 1) == 0 )
  {
    this = (BattleInfoMessageComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, str);
    byte_4BB7629 = 1;
  }
  textLabel = v6->fields.textLabel;
  if ( !textLabel )
    goto LABEL_16;
  if ( !textLabel->max_length )
    goto LABEL_17;
  this = (BattleInfoMessageComponent_o *)textLabel->m_Items[0];
  if ( !this )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)this, str, 0LL);
  v8 = v6->fields.textLabel;
  if ( !v8 )
    goto LABEL_16;
  if ( v8->max_length <= 1 )
LABEL_17:
    sub_1C13F88(this, str);
  v9 = (UnityEngine_Object_o *)v8->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInfoMessageComponent_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v6->fields.textLabel;
    if ( !v10 )
      goto LABEL_16;
    if ( v10->max_length > 1 )
    {
      this = (BattleInfoMessageComponent_o *)v10->m_Items[1];
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, str2, 0LL);
        return;
      }
LABEL_16:
      sub_1C13F80(this, str);
    }
    goto LABEL_17;
  }
}