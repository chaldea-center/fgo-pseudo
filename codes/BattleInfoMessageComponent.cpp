void __fastcall BattleInfoMessageComponent___ctor(BattleInfoMessageComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleInfoMessageComponent__getTargetTr(
        BattleInfoMessageComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *objTarget; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  if ( (byte_42E5955 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5955 = 1;
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
    sub_B5D69C(0LL, v8);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


void __fastcall BattleInfoMessageComponent__setCommandObject(
        BattleInfoMessageComponent_o *this,
        UnityEngine_GameObject_o *command,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *battleCommand; // x23
  BattleCommandComponent_o *Component_srcLineSprite; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x23
  BattleCommandComponent_o *v14; // x23
  BattleCommandComponent_o *v15; // x20
  BattleServantData_o *v16; // x1
  struct BattleCommandData_o *data; // x19

  if ( (byte_42E5956 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___,
      (_DWORD)command,
      (_DWORD)svtData,
      method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E5956 = 1;
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
      v13 = (UnityEngine_Object_o *)this->fields.battleCommand;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v13, 0LL);
    }
    if ( !command )
      goto LABEL_24;
    Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            command,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_24;
    v14 = Component_srcLineSprite;
    BattleCommandComponent__SetCommandEffectActive(Component_srcLineSprite, 3, 0, 0LL);
    this->fields.battleCommand = BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   command,
                                   this->fields.commandTarget,
                                   0LL,
                                   0LL);
    sub_B5D560(&this->fields.battleCommand);
    Component_srcLineSprite = (BattleCommandComponent_o *)this->fields.battleCommand;
    if ( !Component_srcLineSprite )
      goto LABEL_24;
    Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_24;
    v15 = Component_srcLineSprite;
    BattleCommandComponent__setAttackCommandData(Component_srcLineSprite, v14, 0LL);
    BattleCommandComponent__resetAddObject(v15, 0LL);
    v16 = svtData ? svtData : 0LL;
    BattleCommandComponent__updateClassMag(v15, v16, 0LL);
    data = v14->fields.data;
    *(_WORD *)&v15->fields.isCodeTextureView = 256;
    if ( !data )
LABEL_24:
      sub_B5D69C(Component_srcLineSprite, v12);
    BattleCommandComponent__SetCommandCodeView_18885764(v15, data->fields.commandCodeId, 0LL);
    BattleCommandComponent__SetCommandAssistView(v15, data->fields.commandAssistId, 0LL);
  }
}


void __fastcall BattleInfoMessageComponent__setItemSprite(
        BattleInfoMessageComponent_o *this,
        int32_t imageId,
        bool useSelfAtlas,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *itemSprite; // x22
  System_String_o *v11; // x0
  __int64 v12; // x1
  struct UISprite_o *v13; // x22
  UnityEngine_Object_o *mAtlas; // x20
  struct UISprite_o *v15; // x8
  UIAtlas_o *v16; // x20
  UISprite_o *v17; // x19
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = imageId;
  if ( (byte_42E5957 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, imageId, useSelfAtlas, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E5957 = 1;
  }
  itemSprite = (UnityEngine_Object_o *)this->fields.itemSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (System_String_o *)UnityEngine_Object__op_Inequality(itemSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v13 = this->fields.itemSprite;
    if ( useSelfAtlas )
    {
      if ( !v13 )
        goto LABEL_23;
      mAtlas = (UnityEngine_Object_o *)v13->fields.mAtlas;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (System_String_o *)UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        v15 = this->fields.itemSprite;
        if ( v15 )
        {
          v16 = v15->fields.mAtlas;
          v11 = System_Int32__ToString((int32_t)&v18, 0LL);
          if ( v16 )
          {
            if ( !UIAtlas__GetSprite(v16, v11, 0LL) )
              return;
            v17 = this->fields.itemSprite;
            v11 = System_Int32__ToString((int32_t)&v18, 0LL);
            if ( v17 )
            {
              UISprite__set_spriteName(v17, v11, 0LL);
              return;
            }
          }
        }
LABEL_23:
        sub_B5D69C(v11, v12);
      }
    }
    else
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v13, imageId, 0LL);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UILabel_array *textLabel; // x8
  UILabel_o *v10; // x20
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  v14 = skillLevel;
  if ( (byte_42E5954 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)str, skillLevel, method);
    this = (BattleInfoMessageComponent_o *)sub_B5D5C4(&StringLiteral_2579/*"BATTLE_SKILL_NAME_LEVEL"*/, v6, v7, v8);
    byte_42E5954 = 1;
  }
  textLabel = v5->fields.textLabel;
  if ( !textLabel )
    goto LABEL_10;
  if ( !textLabel->max_length )
  {
    v13 = sub_B5D6C8(this);
    sub_B5D668(v13, 0LL);
  }
  v10 = textLabel->m_Items[0];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2579/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
  v12 = (Il2CppObject *)System_Int32__ToString((int32_t)&v14, 0LL);
  this = (BattleInfoMessageComponent_o *)System_String__Format_44573324(v11, (Il2CppObject *)str, v12, 0LL);
  if ( !v10 )
LABEL_10:
    sub_B5D69C(this, str);
  UILabel__set_text(v10, (System_String_o *)this, 0LL);
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
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  this = (BattleInfoMessageComponent_o *)textLabel->m_Items[0];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, str);
  UILabel__set_text((UILabel_o *)this, str, 0LL);
}


void __fastcall BattleInfoMessageComponent__setText_19652844(
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
  if ( (byte_42E5953 & 1) == 0 )
  {
    this = (BattleInfoMessageComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)str, (_DWORD)str2, method);
    byte_42E5953 = 1;
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
    v11 = sub_B5D6C8(this);
    sub_B5D668(v11, 0LL);
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
      sub_B5D69C(this, str);
    }
    goto LABEL_18;
  }
}