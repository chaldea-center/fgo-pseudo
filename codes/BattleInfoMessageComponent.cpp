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

  if ( (byte_434EB1A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EB1A = 1;
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
    sub_B7076C(0LL, v6);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


void __fastcall BattleInfoMessageComponent__setCommandObject(
        BattleInfoMessageComponent_o *this,
        UnityEngine_GameObject_o *command,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleCommand; // x23
  BattleCommandComponent_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  BattleCommandComponent_o *v11; // x23
  BattleCommandComponent_o *v12; // x20
  BattleServantData_o *v13; // x1
  struct BattleCommandData_o *data; // x19

  if ( (byte_434EB1B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EB1B = 1;
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
    Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(battleCommand, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    {
      v10 = (UnityEngine_Object_o *)this->fields.battleCommand;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v10, 0LL);
    }
    if ( !command )
      goto LABEL_24;
    Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            command,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_24;
    v11 = Component_srcLineSprite;
    BattleCommandComponent__SetCommandEffectActive(Component_srcLineSprite, 3, 0, 0LL);
    this->fields.battleCommand = BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   command,
                                   this->fields.commandTarget,
                                   0LL,
                                   0LL);
    sub_B70630(&this->fields.battleCommand);
    Component_srcLineSprite = (BattleCommandComponent_o *)this->fields.battleCommand;
    if ( !Component_srcLineSprite )
      goto LABEL_24;
    Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_24;
    v12 = Component_srcLineSprite;
    BattleCommandComponent__setAttackCommandData(Component_srcLineSprite, v11, 0LL);
    BattleCommandComponent__resetAddObject(v12, 0LL);
    v13 = svtData ? svtData : 0LL;
    BattleCommandComponent__updateClassMag(v12, v13, 0LL);
    data = v11->fields.data;
    *(_WORD *)&v12->fields.isCodeTextureView = 256;
    if ( !data )
LABEL_24:
      sub_B7076C(Component_srcLineSprite, v9);
    BattleCommandComponent__SetCommandCodeView_18924384(v12, data->fields.commandCodeId, 0LL);
    BattleCommandComponent__SetCommandAssistView(v12, data->fields.commandAssistId, 0LL);
  }
}


void __fastcall BattleInfoMessageComponent__setItemSprite(
        BattleInfoMessageComponent_o *this,
        int32_t imageId,
        bool useSelfAtlas,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemSprite; // x22
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct UISprite_o *v10; // x22
  UnityEngine_Object_o *mAtlas; // x20
  struct UISprite_o *v12; // x8
  UIAtlas_o *v13; // x20
  UISprite_o *v14; // x19
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = imageId;
  if ( (byte_434EB1C & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EB1C = 1;
  }
  itemSprite = (UnityEngine_Object_o *)this->fields.itemSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (System_String_o *)UnityEngine_Object__op_Inequality(itemSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v10 = this->fields.itemSprite;
    if ( useSelfAtlas )
    {
      if ( !v10 )
        goto LABEL_23;
      mAtlas = (UnityEngine_Object_o *)v10->fields.mAtlas;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (System_String_o *)UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        v12 = this->fields.itemSprite;
        if ( v12 )
        {
          v13 = v12->fields.mAtlas;
          v8 = System_Int32__ToString((int32_t)&v15, 0LL);
          if ( v13 )
          {
            if ( !UIAtlas__GetSprite(v13, v8, 0LL) )
              return;
            v14 = this->fields.itemSprite;
            v8 = System_Int32__ToString((int32_t)&v15, 0LL);
            if ( v14 )
            {
              UISprite__set_spriteName(v14, v8, 0LL);
              return;
            }
          }
        }
LABEL_23:
        sub_B7076C(v8, v9);
      }
    }
    else
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v10, imageId, 0LL);
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
  struct UILabel_array *textLabel; // x8
  UILabel_o *v7; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  v11 = skillLevel;
  if ( (byte_434EB19 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    this = (BattleInfoMessageComponent_o *)sub_B70694(&StringLiteral_2587/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_434EB19 = 1;
  }
  textLabel = v5->fields.textLabel;
  if ( !textLabel )
    goto LABEL_10;
  if ( !textLabel->max_length )
  {
    v10 = sub_B70798(this);
    sub_B70738(v10, 0LL);
  }
  v7 = textLabel->m_Items[0];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2587/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
  v9 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0LL);
  this = (BattleInfoMessageComponent_o *)System_String__Format_44753704(v8, (Il2CppObject *)str, v9, 0LL);
  if ( !v7 )
LABEL_10:
    sub_B7076C(this, str);
  UILabel__set_text(v7, (System_String_o *)this, 0LL);
}


void __fastcall BattleInfoMessageComponent__setText(
        BattleInfoMessageComponent_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  struct UILabel_array *textLabel; // x8
  __int64 v4; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_5;
  if ( !textLabel->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  this = (BattleInfoMessageComponent_o *)textLabel->m_Items[0];
  if ( !this )
LABEL_5:
    sub_B7076C(this, str);
  UILabel__set_text((UILabel_o *)this, str, 0LL);
}


void __fastcall BattleInfoMessageComponent__setText_19383972(
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
  __int64 v11; // x0

  v6 = this;
  if ( (byte_434EB18 & 1) == 0 )
  {
    this = (BattleInfoMessageComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EB18 = 1;
  }
  textLabel = v6->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  if ( !textLabel->max_length )
    goto LABEL_18;
  this = (BattleInfoMessageComponent_o *)textLabel->m_Items[0];
  if ( !this )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)this, str, 0LL);
  v8 = v6->fields.textLabel;
  if ( !v8 )
    goto LABEL_17;
  if ( v8->max_length <= 1 )
  {
LABEL_18:
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  v9 = (UnityEngine_Object_o *)v8->m_Items[1];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInfoMessageComponent_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v6->fields.textLabel;
    if ( !v10 )
      goto LABEL_17;
    if ( v10->max_length > 1 )
    {
      this = (BattleInfoMessageComponent_o *)v10->m_Items[1];
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, str2, 0LL);
        return;
      }
LABEL_17:
      sub_B7076C(this, str);
    }
    goto LABEL_18;
  }
}