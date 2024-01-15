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

  if ( (byte_40F732D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F732D = 1;
  }
  objTarget = (UnityEngine_Object_o *)this->fields.objTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(objTarget, 0LL, 0LL) )
    return this->fields.objTarget;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  UnityEngine_Object_o *v9; // x23
  BattleCommandComponent_o *Component_srcLineSprite; // x0
  BattleCommandComponent_o *v11; // x23
  struct UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v13; // x0
  BattleCommandComponent_o *v14; // x0
  BattleCommandComponent_o *v15; // x20
  BattleServantData_o *v16; // x1
  struct BattleCommandData_o *data; // x19

  if ( (byte_40F732E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, command);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F732E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)command, 0LL, 0LL) )
  {
    battleCommand = (UnityEngine_Object_o *)this->fields.battleCommand;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(battleCommand, 0LL, 0LL) )
    {
      v9 = (UnityEngine_Object_o *)this->fields.battleCommand;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v9, 0LL);
    }
    if ( !command )
      goto LABEL_24;
    Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            command,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_24;
    v11 = Component_srcLineSprite;
    BattleCommandComponent__SetCommandEffectActive(Component_srcLineSprite, 3, 0, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, command, this->fields.commandTarget, 0LL, 0LL);
    this->fields.battleCommand = Object;
    sub_B16F98(&this->fields.battleCommand, Object);
    v13 = this->fields.battleCommand;
    if ( !v13 )
      goto LABEL_24;
    v14 = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v13,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !v14 )
      goto LABEL_24;
    v15 = v14;
    BattleCommandComponent__setAttackCommandData(v14, v11, 0LL);
    BattleCommandComponent__resetAddObject(v15, 0LL);
    v16 = svtData ? svtData : 0LL;
    BattleCommandComponent__updateClassMag(v15, v16, 0LL);
    data = v11->fields.data;
    *(_WORD *)&v15->fields.isCodeTextureView = 256;
    if ( !data )
LABEL_24:
      sub_B170D4();
    BattleCommandComponent__SetCommandCodeView_18696312(v15, data->fields.commandCodeId, 0LL);
    BattleCommandComponent__SetCommandAssistView(v15, data->fields.commandAssistId, 0LL);
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
  struct UISprite_o *v9; // x22
  UnityEngine_Object_o *mAtlas; // x20
  struct UISprite_o *v11; // x8
  UIAtlas_o *v12; // x20
  System_String_o *v13; // x0
  UISprite_o *v14; // x19
  System_String_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = imageId;
  if ( (byte_40F732F & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&imageId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F732F = 1;
  }
  itemSprite = (UnityEngine_Object_o *)this->fields.itemSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemSprite, 0LL, 0LL) )
  {
    v9 = this->fields.itemSprite;
    if ( useSelfAtlas )
    {
      if ( !v9 )
        goto LABEL_23;
      mAtlas = (UnityEngine_Object_o *)v9->fields.mAtlas;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL) )
      {
        v11 = this->fields.itemSprite;
        if ( v11 )
        {
          v12 = v11->fields.mAtlas;
          v13 = System_Int32__ToString((int32_t)&v16, 0LL);
          if ( v12 )
          {
            if ( !UIAtlas__GetSprite(v12, v13, 0LL) )
              return;
            v14 = this->fields.itemSprite;
            v15 = System_Int32__ToString((int32_t)&v16, 0LL);
            if ( v14 )
            {
              UISprite__set_spriteName(v14, v15, 0LL);
              return;
            }
          }
        }
LABEL_23:
        sub_B170D4();
      }
    }
    else
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v9, imageId, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  v12 = skillLevel;
  if ( (byte_40F732C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, str);
    this = (BattleInfoMessageComponent_o *)sub_B16FFC(&StringLiteral_2515/*"BATTLE_SKILL_NAME_LEVEL"*/, v6);
    byte_40F732C = 1;
  }
  textLabel = v5->fields.textLabel;
  if ( !textLabel )
    goto LABEL_10;
  if ( !textLabel->max_length )
  {
    sub_B17100(this, str, *(_QWORD *)&skillLevel);
    sub_B170A0();
  }
  v8 = textLabel->m_Items[0];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2515/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
  v10 = (Il2CppObject *)System_Int32__ToString((int32_t)&v12, 0LL);
  v11 = System_String__Format_43739268(v9, (Il2CppObject *)str, v10, 0LL);
  if ( !v8 )
LABEL_10:
    sub_B170D4();
  UILabel__set_text(v8, v11, 0LL);
}


void __fastcall BattleInfoMessageComponent__setText(
        BattleInfoMessageComponent_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  struct UILabel_array *textLabel; // x8
  UILabel_o *v4; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_5;
  if ( !textLabel->max_length )
  {
    sub_B17100(this, str, method);
    sub_B170A0();
  }
  v4 = textLabel->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_B170D4();
  UILabel__set_text(v4, str, 0LL);
}


void __fastcall BattleInfoMessageComponent__setText_19741168(
        BattleInfoMessageComponent_o *this,
        System_String_o *str,
        System_String_o *str2,
        const MethodInfo *method)
{
  BattleInfoMessageComponent_o *v6; // x20
  struct UILabel_array *textLabel; // x8
  UILabel_o *v8; // x0
  struct UILabel_array *v9; // x8
  UnityEngine_Object_o *v10; // x21
  struct UILabel_array *v11; // x8
  UILabel_o *v12; // x0

  v6 = this;
  if ( (byte_40F732B & 1) == 0 )
  {
    this = (BattleInfoMessageComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, str);
    byte_40F732B = 1;
  }
  textLabel = v6->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  if ( !textLabel->max_length )
    goto LABEL_18;
  v8 = textLabel->m_Items[0];
  if ( !v8 )
    goto LABEL_17;
  UILabel__set_text(v8, str, 0LL);
  v9 = v6->fields.textLabel;
  if ( !v9 )
    goto LABEL_17;
  if ( v9->max_length <= 1 )
  {
LABEL_18:
    sub_B17100(this, str, str2);
    sub_B170A0();
  }
  v10 = (UnityEngine_Object_o *)v9->m_Items[1];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInfoMessageComponent_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v6->fields.textLabel;
    if ( !v11 )
      goto LABEL_17;
    if ( v11->max_length > 1 )
    {
      v12 = v11->m_Items[1];
      if ( v12 )
      {
        UILabel__set_text(v12, str2, 0LL);
        return;
      }
LABEL_17:
      sub_B170D4();
    }
    goto LABEL_18;
  }
}